//
// Created by anuj on 29/01/21.
//

#include <stdio.h>
#include "basic_cal.h"
#include "advance_cal.h"

void input();
void sngl_input();

float no1;
float no2;
int n;

void basic()
{

    int option_no;

    printf("\n1 for addition\n"
           "2 for subtraction\n"
           "3 for multiplication\n"
           "4 for division\n"
           "5 for mod\n");

    printf("Please enter your option: ");
    scanf("%d",&option_no);

    switch(option_no)
    {
        case 1:
            input();
            add(no1,no2);
            break;
        case 2:
            input();
            sub(no1,no2);
            break;
        case 3:
            input();
            mul(no1,no2);
            break;
        case 4:
            input();
            div(no1,no2);
            break;
        case 5:
            input();
            mod(no1,no2);
            break;
    }
}

void advance()
{
    int option_no;
    printf("1 for sum of n numbers\n");

    printf("Please enter your option: ");
    scanf("%d",&option_no);

    switch(option_no)
    {
        case 1:
            sngl_input();
            sum_n_no(n);
            break;
        default:
            printf("Please choose again\n");

    }

}

void input()
{
    printf("Enter first number: ");
    scanf("%f",&no1);
    printf("Enter second number: ");
    scanf("%f",&no2);
}

void sngl_input()
{
    printf("Enter number: ");
    scanf("%d",&n);


}