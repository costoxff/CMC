#ifndef SICMA_PSEUDO_OOC_H
#define SICMA_PSEUDO_OOC_H

#define noargs void *_noargs
#define nulargs 0

typedef struct NullClass {} NullClass;

#define class(class_name, cls_inherit,...) \
    typedef struct class_name { \
        cls_inherit super; \
        __VA_ARGS__ \
    } class_name;

#define super(self) (self->super)

// class method template for function declare and define
#define method_tmpl(class_name, ret_type, method_name, ...) \
    ret_type class_name##_##method_name(class_name* self, __VA_ARGS__)

// class method called
#define method_call(obj, class_name, method_name, ...) \
    class_name##_##method_name(obj, __VA_ARGS__)

#endif