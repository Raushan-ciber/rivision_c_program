#include<stdio.h>
//swapping integer through call by refrence
void swap(int *a, int *b);

int main(){
    int a = 3 , b = 4;
    printf("value before swap is %d and %d\n",a,b);
    swap(&a,&b);
    printf("value after swap is %d and %d \n",a,b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}
