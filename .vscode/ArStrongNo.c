#include<stdio.h>
int main(){
    int no,rem,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&no);
    temp=no;
    while(no!=0){
        rem=no%10;
        sum=sum+(rem*rem*rem);
        no=no/10;
    }
    if(temp==sum){
        printf("%d is armstrong number",temp);
    }
    else{
        printf("%d is not armstrong number",temp);
    }
    return 0;
}