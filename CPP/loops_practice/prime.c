#include<stdio.h>
int main(){
    int count=0;
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
        }
    }
    if(count==2){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not prime number",num);
    }
}