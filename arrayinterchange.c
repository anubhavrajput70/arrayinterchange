#include<stdio.h>
#include<stdlib.h>
int i;
void enter(int a[],int n);
void print(int a[],int n);
void interchange(int b[],int n);
int small(int a[10], int n);
int large(int a[10],int n);
void main()
{
int b[10],n;
printf("enter the size of the array=");
scanf("%d",&n);
enter(b,n);
printf("the array is=\n");
print(b,n);
interchange(b,n);
printf("\nthe new array is=\n");
print(b,n);
}
void enter(int a[10],int n)
{
printf("enter the elements of the array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
}
void print(int a[10],int n)
{

for(i=0;i<=n-1;i++)
{
printf(" %d",a[i]);
}
}
void interchange(int a[10],int n)
{
int t,smallpos,largepos;
smallpos=small(a,n);
largepos=large(a,n);
t=a[smallpos];
a[smallpos]=a[largepos];
a[largepos]=t;
}
int small(int a[10],int n)
{
int small=a[0],pos=0;
for(i=0;i<=n-1;i++)
{
if(a[i]<small)
{
small=a[i];
pos=i;
}
}
return pos;
}
int large(int a[10],int n)
{
int large=a[0],pos=0;
for(i=0;i<=n-1;i++)
{
if(a[i]>large)
{
large=a[i];
pos=i;
}
}
return pos;
}
