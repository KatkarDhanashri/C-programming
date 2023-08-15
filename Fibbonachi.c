#include<stdio.h>
int main(){
   int no,n1=0,n2=1,n3;
   printf("\nEnter a Number: ");
   scanf("%d",&no);
   printf("\n%d %d ",n1,n2);
   for(int i=2;i<=no;i++){
    n3=n1+n2;
    printf("%d ",n3);
    n1=n2;
    n2=n3;
   }
    return 0;
}