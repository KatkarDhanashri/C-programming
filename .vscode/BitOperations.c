#include<stdio.h>

//-------SETTING BIT--------------
int set(int n,int k){
    return n= n | (1<<k);
}

//--------CLEAR BIT-------
int clear(int n,int k){
    return n=(n& ~(1<<k));
}

//--------TOGGLE BIT-------
int toggle(int n,int k){
    return n=n^(1<<k);
}

//------FIND BIT-----------
int findbit(int n,int k){
    return ((n >> k) & 1);
}

//-----------MODIFY BIT--------
int modifybit(int n, int k, int p)
{
	return (n | (p << k));
}
void operations(int n,int k,int p){

  int st=set(n,k);
  printf("set bit value is: %d\n",st);

  int cl=clear(n,k);
  printf("clear bit value is: %d\n",cl);

  int tl=toggle(n,k);
  printf("toggle bit value is: %d\n",tl);

  int fb=findbit(n,k);
  printf("find bit value is: %d\n",fb);
  
  int mb=modifybit(n,k,p);
  printf("modify bit value is: %d\n",mb);
  
}
    int main(){
       int data=8,pos=0,mb=2;
       operations(data,pos,mb);

        return 0;
    }