//
// Created by anuj on 29/01/21.
//

//#include "basic_cal.h"
#include <stdio.h>
#include <math.h>

void add(float a,float b)
{
    printf("\n%f + %f : %.2f\n",a,b,a+b);
    return;
}
void sub(float a,float b)
{
    printf("\n%f - %f : %.2f\n",a,b,a-b);
    return;
}
void mul(float a,float b)
{
    printf("\n%f x %f: %.2f\n",a,b,a*b);
    return;
}
void div(float a,float b)
{
    printf("\n%f / %f: %.2f\n",a,b,a/b);
    return;
}


void mod(float a,float b)
{
    int no1 = (int)a;
    int no2 = (int)b;
    printf("\n%d %% %d: %d\n",no1,no2,no1%no2);
    return;
}
