#include<stdio.h>

int main(){
    int i =35;
    int *j = &i;
    int **k = &j;
    printf("the value of a is %d",**k);
    return 0;
}