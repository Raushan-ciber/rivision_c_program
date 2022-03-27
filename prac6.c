#include<stdio.h>
//show call by value doest change the value 10 times
int tentimes(int a){
    a= 10*a;
}

int main(){
    int a=350;
    printf("the value before functioncall is %d\n",a);
    tentimes(a);
    printf("the value after function call is %d\n",a);


    return 0;
}