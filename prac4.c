#include<stdio.h>
//using pointers calculate sum and average of two numbers.
void sumoAndavg(int a , int b, int *sum, float *avg){
    *sum = a+b;                        //updating sum vlaue
    *avg = (float)(*sum)/2;            //updating value of average
   
}

int main(){
    int x=3, y=5,  sum;
    float avg;
    sumoAndavg(x,y,&sum,&avg);
    printf("the sum is %d\n",sum);
    printf("the avarage is %f\n",avg);
    
    return 0;
}