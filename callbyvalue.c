#include<stdio.h>

int sum(int a, int b);

int main(){
    int x = 5, y = 6;
    printf("the sum  is %d\n",sum(x,y));
    return 0;
}
int sum(int a, int b){
    int c;
    c= a+b;
    a = 77;
    b=55;
    
    return c;
}
