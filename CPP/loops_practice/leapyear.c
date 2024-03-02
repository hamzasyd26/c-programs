#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int res = year%4;
    if(res==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}