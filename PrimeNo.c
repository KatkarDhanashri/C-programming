#include<stdio.h>
int main()
{
    int no,flag=0;
    printf("Enter a Number: ");
    scanf("%d",&no);
    for(int i=2;i<=no/2;i++){
        if(no%i==0){
            printf("no is not prime number");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("no is prime number");
    }
    return 0;
}
