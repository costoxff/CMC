#ifndef SICMA_PSEUDO_OOC_H
#define SICMA_PSEUDO_OOC_H

#define noargs void *_noargs
#define nulargs 0

typedef struct NullClass {} NullClass;

/* class macro
 * Use it with form below
 *
 * class(ClassFoo, ParentFoo,
 *     int member_a;
 *     int member_b;
 *     etc.
 * )
 * using function pointer is strongly not recommand.
*/
#define class(class_name, cls_inherit,...) \
    typedef struct class_name { \
        cls_inherit super; \
        __VA_ARGS__ \
    } class_name;

#define super(self) (self->super)

/* method template for function declare and define
 * Use it with form below
 *
 * For declare:
 * method_tmpl(ClassFoo,
 *             void, foo, int a, int *);
 *
 * For define:
 * method_tmpl(ClassFoo,
 *             void, foo, int a, int *)
 * {
 *     do something   
 * }
*/ 
#define method_tmpl(class_name, ret_type, method_name, ...) \
    ret_type class_name##_##method_name(class_name* self, __VA_ARGS__)

/*
 * calling class method
*/
#define cm(obj, class_name, method_name, ...) \
    class_name##_##method_name((class_name *) obj, __VA_ARGS__)

/* For another strategy, considered using function pointer in struct like:
 * typedef struct Math Math;
 * typedef int (*math_func_t)(int a, int b);
 * struct Math{
 *     int PI;
 *     math_func_t add, sub;
 * }
 *
 * or
 *
 * typedef struct Object Object;
 * typedef int (*obj_func_t)(Object *);
 * struct Object{
 *     int member_a;
 *     int member_b;
 *     obj_func_t self_operate;
 * }
*/

// ====== psdooc version 2 ======
#define class_declare(struct_name) typedef struct struct_name struct_name
#define class_define(struct_name) struct struct_name

/* calling object's method
*/
#define cobjm(obj, func_name, ...) obj->func_name(obj, __VA_ARGS__)


#define func_tmpl(ret_type, func_name, ...) \
    ret_type func_name(__VA_ARGS__)

#define class_binding_tmpl(ret_type, struct_name, ...) \
    func_tmpl(ret_type, struct_name##_func_binding, __VA_ARGS__)

#define class_init_tmpl(ret_type, struct_name, ...) \
    func_tmpl(ret_type, struct_name##_init, __VA_ARGS__)

#define class_dealloc_tmpl(ret_type, struct_name, ...) \
    func_tmpl(ret_type, struct_name##_dealloc, __VA_ARGS__)


#endif
