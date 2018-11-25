#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,j,t,n=0,p=0;
 clrscr();
 for(i=0;i<=4;i++)
 scanf("%d",&a[i]);
 for(j=0;j<=4;j++)
 {
  for(i=0;i<=4;i++)
   {
    if(a[j]<a[i])
     {
      t=a[j];
      a[j]=a[i];
      a[i]=t;
      n++;
     }
    }
   }
    printf("%d",n);
    getch();
  }