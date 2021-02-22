//Advance calculator

#include <stdio.h>
#include "main.h"

int main() {

    //Variable initialization
    int option_no;
    //Header
    printf("Welcome to universal calculator\n");
    for (int i = 0; i < 31; ++i) {
        printf("-");
    }

    printf("\nPlease select a mode\n");

   printf(
           "1 for basic calculations\n"
           "2 for advance calculation\n"
          );

   printf("Please enter your option: ");
   scanf("%d",&option_no);

   switch(option_no)
   {
       case 1:
           printf("You choose 1\n");
           basic();
           break;
       case 2:
           printf("You choose 2\n");
           advance();
           break;
       default:
           printf("Please choose again");
   }

    return 0;
}
