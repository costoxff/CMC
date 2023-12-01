#ifndef SICMA_PESUDO_UNI_NAME
#define SICMA_PESUDO_UNI_NAME

#define MERGE_(a,b)  a##b
#define LABEL_(a) MERGE_(unique_name_, a)
#define UNIQUE_NAME LABEL_(__LINE__)

#endif