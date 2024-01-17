#include "psdooc.h"
#include <stdio.h>
#include <stdlib.h>

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
    Car *car = New(Car);

    Truck *truck = New(Truck);

    cm(car, Vehicle, start, nulargs);
    cm(truck, Vehicle, start, nulargs);

    free(car);
    free(truck);

    return 0;
}