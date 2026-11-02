#include<stdio.h>
void DOWORK(int a,int b,int *sum,int *diff ,int *avg);
int main(){
    int a=5;
    int b=3;
    int sum,diff,avg;
    printf("the value of a is %d and b is %d \n",a,b);
    DOWORK(a,b,&sum,&diff,&avg);
    printf("the value of sum is %d ,diff is %d and avg is %d\n",sum,diff,avg);
    return 0;
}
void DOWORK(int a,int b,int *sum,int *diff,int *avg){
    *sum=a+b;
    *diff=a-b;
    *avg=(a+b)/2;

}