#include<stdio.h>
int main(){
    printf("hi");
    int aadhar[5];
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("enter the value of aadhar %d >> ",i+1);
        scanf("%d",(ptr+i));
    } 
    for(int i=0;i<5;i++){
        printf("the value of aadhar %d is %d\n",i+1,*(ptr+i));
    }
    return 0;
}