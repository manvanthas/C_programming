#include<stdio.h>
void birthday(int *ptr);
int main(){
    int age =19;
    int *ptr=&age;
    birthday(&age);
    printf("the age after one birthday is %d\n",age);
}
void birthday(int *ptr){
    *ptr+=1;
    printf("the age after one birthday is %d\n",*ptr);
}