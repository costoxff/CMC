#ifndef CMC_CONTAINER_GEN_H
#define CMC_CONTAINER_GEN_H

// TODO: rewrite stack and queue

/*
 * Stack
*/
#define STACK_STRUCT_GEN(type, name, cap) \
    typedef struct name{ \
        type arr[cap]; \
        int size; \
        int si; /* stack index */ \
    } name

#define STACK_INIT_FUNC_GEN(func_name, )

#define stack_push(s, item) s.arr[++(s.si)] = item

#define stack_pop(s) s.arr[(s.si)--]

#define stack_empty(s) s.si < 0

/*
 * Queue
*/
#define queue(type ,size) \
    struct _qeueu##__LINE__ { \
        type arr[size]; \
        int ppi; /* pop index */ \
        int pi; /* push index */ \
    }

#define QUEUE_INIT { {}, -1 , -1 }

#define queue_push(q, item) q.arr[++(q.pi)] = item

#define queue_pop(q) q.arr[++(q.ppi)]

#define queue_empty(q) q.ppi == q.pi

#endif