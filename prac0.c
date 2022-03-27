#include<stdio.h>
//find address of a variable and use that address to get the value of the variable 
int main(){
    int a = 34;
    int *b = &a;
    printf("The address of the variable is %u\n",&a);
    printf("The value of a is %d\n",*(&a));
    return 0;
}