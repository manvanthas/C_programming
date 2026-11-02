#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a=10,b=20,temp;
    printf("the value of a is %d and b is %d before change\n",a,b);
    swap(&a,&b);
    printf("this is inside main function ,a=%d and b=%d\n",a,b);
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("this is inside function ,a=%d and b=%d\n",*x,*y);
}