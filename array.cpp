#include "array.h"
#include <malloc.h>

myarray::myarray()
{
    nr = 10;
    nc = 10;
    myptr = (char**)malloc(sizeof(char)*nr);
    for(int i=0;i<100;i++)
    {
        myptr[i] = (char*)malloc(sizeof(char)*nc);
    }
}

myarray::myarray(int n, int r)
{
    nr = n;
    nc = r;
    myptr = (char**)malloc(sizeof(char*)*nr);
    for(int i=0;i<nr;i++)
    {
        myptr[i] = (char*)malloc(sizeof(char)*nc);
    }
}

myarray::~myarray()
{
    for(int i=0;i<nr;i++)
    {
        free(myptr[i]);
    }
    free(myptr);
}

char** myarray::get_array()
{
    return myptr;
}