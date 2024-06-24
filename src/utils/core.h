#ifndef CMC_CORE_H
#define CMC_CORE_H

// a macro to name a macro

// a macro to operate literal in macro

// repeat
// https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms
#define REP0(X)
#define REP1(X) X
#define REP2(X) REP1(X) X
#define REP3(X) REP2(X) X
#define REP4(X) REP3(X) X
#define REP5(X) REP4(X) X
#define REP6(X) REP5(X) X
#define REP7(X) REP6(X) X
#define REP8(X) REP7(X) X
#define REP9(X) REP8(X) X
#define REP10(X) REP9(X) X

#define REP(HUNDREDS, TENS, ONES, X) \
	REP##HUNDREDS(REP10(REP10(X))) \
	REP##TENS(REP10(X)) \
	REP##ONES(X)

// pesudo unique name
#define _MERGE_(a, b)  a##b
#define _LABEL_(a) _MERGE_(unique_name_, a)
#define UNIQUE_NAME _LABEL_(__LINE__)

#endif