
#include <stdio.h>

void calc(void) {
    float a;
    float b;
    char c;
    printf("give me the first (a) and the second number (b)  : ");
    scanf("%f%f",&a,&b);
    printf("give me the operator : ");
    scanf(" %c",&c);
    
    switch (c)
    {
    case '+':
        printf(" a+b = %f",a+b);
        break;
    case '-':
        printf(" a-b = %f",a-b);
        break;
    case '*':
        printf(" a*b = %f",a*b);
        break;
    case '/':
        printf(" a/b = %f",a/b);
        break;

    default:
        break;
    }


}