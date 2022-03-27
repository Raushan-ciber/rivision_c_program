#include<stdio.h>

int main(){
    int a = 72;
    int *b = &a;
    int **c = &b;
    printf("The vlaue of a is %d\n",a);
    printf("The vlaue of a is %d\n",*b);
    printf("The value of a is %d\n",**c);
    printf("The value of b is %d\n",&a);
    printf("The value of b is %u\n",*(&b));
    printf("The value of b is %u\n",*c);


    return 0;
}