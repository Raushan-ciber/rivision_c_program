#include<stdio.h>

int main(){
    int a = 72;
    int *b = &a;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",&a);
    printf("The value of address of a is %d\n",b);
    printf("The value of address of b is %u\n",&b);
    printf("The value of i is %d\n",*b);
    printf("The value of b is  %u",*(&b));

    return 0;
}