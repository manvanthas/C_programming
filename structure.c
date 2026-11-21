#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    int marks;
};
int main(){
struct student s1; 
printf("enter the name if student: ");
scanf("%19s",s1.name);    
printf("enter the age of student: ");
scanf("%d",&s1.age);
printf("enter the marks of student: ");
scanf("%d",&s1.marks);
printf("name of student is: %s\n",s1.name);
printf("age of student is: %d\n",s1.age);
printf("marks of student is: %d\n",s1.marks);
return 0;
}