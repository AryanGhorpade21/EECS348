/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main(){
    int a ;
    int b ;
    char op ;
    int num1;

    printf("Enter 1 st operand :");
    scanf("%d",&a);
    num1=a;
    printf("\n");
    printf(" enter operand :");
    scanf("%s",&op);
    printf("\n");
    
    
    switch (op){
        case '+':
            printf("Enter 2 nd oprand :");
            scanf("%d", &b);
            printf("\n");
            printf("%d", (num1 + b));
            break;
        case '-':
            printf("Enter 2 nd oprand :");
            scanf("%d",&b);
            printf("%d", num1 - b);
            break;
        case '*':
            printf("Enter 2 nd oprand :");
            scanf("%d",&b);
            printf("%d", num1 * b);
            break;
        case '/':
            printf("Enter 2 nd oprand :");
            scanf("%d",&b);
            printf("%d", num1 / b);
            break;
        case 's':
            printf("%d", num1 * num1);
            break;
    }
    


}