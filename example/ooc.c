#include "../src/psdooc.h"
#include <stdio.h>

// class Object
class(Object, NullClass,
    int ref;
)

method_tmpl(Object, 
            Object *, ref, noargs)
{
    return NULL;
}

method_tmpl(Object,
            Object *, unref, noargs)
{
    return NULL;
}

// class Vehicle
class(Vehicle, Object,
)

method_tmpl(Vehicle,
            void, start, noargs)
{
    if (self) printf("%x derived from %x\n", self, super(self));
}

// class Car
class(Car, Vehicle,
    int useless_a;
)

// class Truck
class(Truck, Vehicle,
    int useless_a;
    int useless_b;
)

// main 
int main()
{
    Car car;

    Truck truck;

    method_call(&car, Vehicle, start, nulargs);

    method_call(&truck, Vehicle, start, nulargs);

    return 0;
}