#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==2){
            continue;
        }
        else if(i==5){
            continue;
        }
        else if(i==7){
            break;
        }
        printf("%d\n",i);
    }
    printf("END");
    return 0;
}
