#include<stdio.h>
int sum_of_num(int number);
int main(){
    int number,result;
    printf("enter the value of number ");
    scanf("%d",&number);
    result=sum_of_num(number);
    printf("the reuslt is %d\n",result);
}
int sum_of_num(int number){
    if(number == 1){
        return 1;
    }
    else{
        return number+sum_of_num(number-1);
    }
}