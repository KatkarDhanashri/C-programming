#include<stdio.h>
int main(){
    char str[10],temp;

    printf("enter string: ");
    scanf("%s",str);

     int l=strlen(str);

    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    //int i,left=0,right=l-1;

    // for(i=left;i<right;i++){
    //     temp=str[i];
    //     str[i]=str[right];
    //     str[right]=temp;
    //     right--;
    // } 
    //printf("%c",str);
    return 0;
}