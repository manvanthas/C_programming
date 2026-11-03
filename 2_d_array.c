#include<stdio.h>
int main(){
    int marks[2][3];
    int *ptr=&marks[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter the marks of student %d in subject %d >> ",i+1,j+1);
            scanf("%d",(ptr+(i*3+j)));
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("the marks of student %d in subject %d is %d\n",i+1,j+1,*(ptr+(i*3+j)));
        }
    }
    return 0;
}