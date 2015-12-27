#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

#include <stdio.h>

#define DEBUG 1

#ifdef DEBUG
    #define Log(...) printf(__VA_ARGS__); printf("\n");
#else
    #define Log(...) ;
#endif


#endif // LOG_H_INCLUDED
