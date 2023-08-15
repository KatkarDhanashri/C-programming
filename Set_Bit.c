#include<stdio.h>
int main(){
    //--------------SET BIT-----------
// int num,pos;
// printf("Enter the number..\n");
// scanf("%d",&num);
// printf("Enter the position..\n");
// scanf("%d",&pos);
// printf("Before Number=%d\n",num);
// num=num|1<<pos;
// printf("After Number=%d\n",num);

//--------toggle(compliment) BIT------
// int num,pos;
// printf("Enter the number..\n");
// scanf("%d",&num);
// printf("Enter the position..\n");
// scanf("%d",&pos);
// printf("Before Number=%d\n",num);
// num=num^1<<pos;
// printf("After Number=%d\n",num);

//--------CLEAR BIT-------------1010 --> 0010
// int num,pos;
// printf("Enter the number..\n");
// scanf("%d",&num);
// printf("Enter the position..\n");
// scanf("%d",&pos);
// printf("Before Number=%d\n",num);
// num=num&~(1<<pos);
// printf("After Number=%d\n",num);

//--------check bit set or not--------
int num,pos,res;
printf("Enter the number..\n");
scanf("%d",&num);
printf("Enter the position..\n");
scanf("%d",&pos);
printf("Before Number=%d\n",num);
res=num&(1<<pos);
if(res==0){
    printf("Bit is clear");
}
else{
    printf("Bit is set");
}
printf("After Number=%d\n",num);

}
