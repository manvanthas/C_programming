#include<stdio.h>
#include<string.h>

typedef struct computerengineeringstudent{
    char name[20];
    int marks;
    int age;
}ces;
int main(){
    ces s1;
    strcpy(s1.name,"manu");
    s1.marks=45;
    s1.age=19;
    printf("name is %s\n",s1.name);
    printf("marks is %d\n",s1.marks);
    printf("age is %d\n",s1.age);
    return 0;

}