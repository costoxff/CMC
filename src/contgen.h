#ifndef CMC_CONTAINER_GEN_H
#define CMC_CONTAINER_GEN_H

/* Stack Code Generation
 */
#define STACK_STRUCT_GEN(type) \
typedef struct _stack_##type { \
    type *arr; \
    size_t cap; \
    size_t top; /* stack index */ \
} stack_##type

#define STACK_INIT { NULL, 0, 0 }

#define STACK_FUNC_GEN_ALL(type) \
    STACK_FUNC_GEN_INIT(type) \
    STACK_FUNC_GEN_IS_EMPTY(type) \
    STACK_FUNC_GEN_POP(type) \
    STACK_FUNC_GEN_PUSH(type)

#define STACK_FUNC_GEN_INIT(type) \
int stack_init_##type(stack_##type *s) { \
    s = malloc(sizeof(stack_##type)); \
    if (s == NULL) return -1; }

#define STACK_FUNC_GEN_IS_EMPTY(type) \
int stack_is_empty_##type(stack_##type s) { return s.top == 0; } \

#define STACK_FUNC_GEN_IS_FULL(type) \
int stack_is_full_##type(stack_##type s) { return s.top == cap; } \

#define STACK_FUNC_GEN_POP(type) \
type stack_pop_##type(stack_##type s) { \
    if (!stack_is_empty_##type(s)) return stk.arr[--s.top]; } \

#define STACK_FUNC_GEN_PUSH(type) \
void stack_push_##type(stack_##type s, type obj) { \
    if (!stack_is_full_##type(s)) { s.arr[s.top++] = obj; } }

/* Queue Code Generation
 */
#define QUEUE_STRUCT_GEN(type) \
    struct _qeueu##type { \
        type *arr; \
        size_t cap; \
        size_t size; \
        size_t front; /* pop index */ \
        size_t rear; /* push index */ \
    } queue_##type

#define QUEUE_INIT { NULL, 0, 0, 0, 0 }

#define QUEUE_FUNC_GEN_IS_EMPTY(type) \
int queue_is_empty_##type(queue_##type q) { \
    return q.size == 0; }

#define QUEUE_FUNC_GEN_IS_FULL(type) \
int queue_is_full_##type(queue_##type q) { \
    return q.size == cap; }

#define QUEUE_FUNC_GEN_POP(type) \
type queue_pop_##type(queue_##type q) { \
    if (!queue_empty_##type(q)) { \
        if (q.front >= cap) { q.front = 0; } \
        q.size--; \
        return q.arr[q.front++]; } }

#define QUEUE_FUNC_GEN_PUSH(type) \
void queue_push_##type(queue_##type q, type obj) { \
    if (q.rear >= cap) { q.rear = 0; } \
    q.size++; \
    q.arr[q.rear++] = obj; }

#endif