#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("enter string: ");
    scanf("%s",str);
    int l=strlen(str),i,f=0;
    for(i=0;i<l;i++){
        if(str[i]!=str[l-i-1]){
            f=1;
        }
    }
    if(f==1){
        printf("string is not palindrome");
    }
    else{
         printf("string is palindrome");
    }
    return 0;
}