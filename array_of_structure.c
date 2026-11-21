#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age;
    int marks;
};
int main(){
    struct student CSE[100];
    strcpy(CSE[0].name,"manu");
    CSE[0].age=19;
    CSE[0].marks=14;
    strcpy(CSE[1].name,"manvanth");
    CSE[1].age=20;
    CSE[1].marks=45;
    printf("name of the student is : %s\n",CSE[0].name);
    printf("age of the student is : %d\n",CSE[0].age);
    printf("marks of the student is : %d\n",CSE[0].marks);
    printf("name of the student is : %s\n",CSE[1].name);
    printf("age of the student is : %d\n",CSE[1].age);
    printf("marks of the student is : %d\n",CSE[1].marks);
    return 0;
}