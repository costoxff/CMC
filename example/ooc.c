#include <stdio.h>
#include <stdlib.h>

#include "psdooc.h"

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
    Car *car = cmc_new(Car);

    Truck *truck = cmc_new(Truck);

    cmc_call_method(car, Vehicle, start, nulargs);
    cmc_call_method(truck, Vehicle, start, nulargs);

    cmc_delete(car);
    cmc_delete(truck);

    return 0;
}
