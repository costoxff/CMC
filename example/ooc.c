#include "psdooc.h"
#include <stdio.h>

// class Object
class(Object, NullClass,
    int a;
    int b;
)

clsmddd(Object, int, add, noargs)
{
    return self->a + self->b;
}

// class AdvObject
class(AdvObject, Object,
    int adv_a;
)

clsmddd(AdvObject, int, mul, noargs) {
    return super(self).a * self->adv_a + super(self).b * self->adv_a;
}

int main()
{
    // allocate
    Object o;
    o.a = 10;
    o.b = 100;
    // object name
    Object *obj = &o;
    int p = clsmdc(obj, Object, add, nulargs);
    printf("%d \n", p);

    // allocate
    AdvObject adv_o;
    adv_o.adv_a = 10;
    adv_o.super.a = 2;
    adv_o.super.b = 4;
    // object name
    AdvObject *adv_obj = &adv_o;
    p = clsmdc(adv_obj, AdvObject, mul, nulargs);
    printf("%d \n", p);

    return 0;
}