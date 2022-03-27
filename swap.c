#include<stdio.h>
//wrongly swapping two integers
void wrongswap(int a, int b);
int main(){
    int a=3 ,b=4;
  
    wrongswap(a,b);      //will not work due to call by value
    printf("The value of a and b is %d and %d\n",a,b);
    return 0;
}
void wrongswap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b= temp;
}
