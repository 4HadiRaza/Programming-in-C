#include <stdio.h>
int *p, x,y;
int a[5]={ 100,200,300,400,500};
int *p2;
int main()
{
p=NULL;
x=10;
p=&x;
printf("1) %d %d %p %p %p \n",x,*p,p,&x,&p);
p2=&x;
printf("2) %d %d %p %p \n",x,*p2,p2,&x);
 p2=a;
printf("3) %d %d %p %p \n",a[0],*p2,p2,a);
p2=&a[2];
printf("4) %d %p %p \n",*p2,p2,a);
p2++;
printf("5) %d %p \n",*p2,p2);
p=a;
y=*(p+2);
printf("6) %d %d \n",y,a[2]);
printf(" loop using pointer \n");
for ( int * p3=a; p3 <= &a[4]; p3++)
 printf("loop: %d %p \n",*p3,p3);
x=9;
int * const p4=&x;
*p4=5;
printf("7) %d %d \n",x,*p4);
return 0;
}
