#include<stdio.h>
//value by refrence 
//change value of variable to 10 times
int tentimes(int *a){
    *a = *a *10;

}

int main(){
    int x=5;
    printf("The value of variable before function calling is %d\n",x);
    tentimes(&x);
    printf("The value of variable after function calling is %d\n ",x);

    return 0;
}