#include <stdio.h>
int *p, x;
int a[5]={100,200,300,400,500};
int *p2;
int main()
{
p=NULL;
x=500;
p=&x;
printf("1) %d %d \n",x,*p,p,&x,&p);
p2=a;
*(p2+1)=*p;
*p= *p2 + *(p2+2);
printf("2) %d %d \n",x,*p,*p2);
// p4=&y; error to change the value of p4 as it is a constant pointer
// array is a constant pointer too
return 0;
} 
