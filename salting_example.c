#include<stdio.h>
#include<string.h>
void salting(char password[]);

int main(){
    char password[20];
    printf("Enter your passsword: ");
    scanf("%19s", password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[5]="SALT";
    char new_password[40];
    strcpy(new_password,password);
    strcat(new_password,salt);
    printf("your salted password is : %s",new_password);

}