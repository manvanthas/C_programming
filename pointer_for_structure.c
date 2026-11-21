#include<stdio.h>
struct student{
    char name[20];
    int age;
    int marks;
};
int main(){
    struct student s1 ={"MANVANTH",19,45};
    printf("student marks = %d\n", s1.marks);
    struct student *ptr =&s1;
    printf("student marks =%d\n",(*ptr).marks);
    printf("the name of student is %s\n",ptr->name);
    return 0;
}