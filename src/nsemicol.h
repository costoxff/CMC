#ifndef SICMA_NO_SEMICOLON_H
#define SICMA_NO_SEMICOLON_H

#define IF      if (
#define THEN    ) {
#define ELIF    } else if (
#define ELSE    } else {
#define FI      }

/* static void func() {
    IF 0
    THEN
        // do something
    FI


    IF 0
    THEN
        // do something
    ELIF 1
    THEN
        // do something 1
    ELIF 2
    THEN
        // do something 2
    ELSE
        // do something 3
    FI


    IF 0
    THEN
        // do something
    ELSE
        // do something 1
    FI
}
*/

#define FOR

#endif