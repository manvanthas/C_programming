#include<stdio.h>
int addition(int x,int y);
int main(){
    int a,b,sum;
    printf("enter the number one ");
    scanf("%d",&a);
    printf("enter the number two ");
    scanf("%d",&b);
    sum = addition(a,b);
    printf("the sum is %d\n",sum);
    return 0;
}
int addition(int x, int y){
    return x+y;
}