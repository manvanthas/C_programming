#include<stdio.h>
int main(){
    int age;
    printf("enter your age >> ");
    scanf("%d",&age);
    if(age>=18){
        printf("you r eligible to drive\n");
    }
    else if(age>=13 && age<18){
        printf("u r child hee hee\n");
    }
    else{
        printf("dont even think about driving ");
    }
    printf("thank you");
}