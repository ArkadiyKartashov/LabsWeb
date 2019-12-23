#include "stdio.h"

int main()
{
    int a,b,c,d;

    printf("Enter numbers \n");
    printf("First number:");
    scanf("%d", &a);
    printf("Second number:");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    printf("Summ = %d \n", c);
    printf("Diff = %d", d);


}
