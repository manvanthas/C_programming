#include<stdio.h>
int main(){
    int age =19;
    int *ptr =&age;
    int AGE =*ptr;
    int _age = age;
    if(age==*ptr){
        *ptr=*ptr+1;
        printf("the value of _age is %d\n",*ptr);
        printf("the value of age is %d\n",age);
    }

    printf("the value of _age is %d\n",_age);
    printf("the value of age is %d\n",age);
    printf("the value of ptr is %p\n",ptr);
    printf("the value of *ptr is %d\n",*ptr);
    printf("the value of &age is %p\n",&age);
    printf("the value of &ptr is %p\n",&ptr);
    printf("the value of &_age is %p\n",&_age);
    printf("the value of &*ptr is %p\n",&*ptr);
    printf("the value of *&ptr is %p\n",*&ptr);
    return 0;
}