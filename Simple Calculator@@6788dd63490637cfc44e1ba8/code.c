/**
 * C program to create Simple Calculator using switch case
 */

#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    // printf("WELCOME TO SIMPLE CALCULATOR\n");
    // printf("----------------------------\n");
    // printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %f %c", &num1,  &num2,&op);

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            if (num2==0)
            {
                printf("error");
                return 0;
            }
            result = num1 / num2;
            break;

        default: 
            printf("error");
    }

    /* Prints the result */
    printf("%.0f",  result);

    return 0;
}