#include<stdio.h>
int main()
{
int x,p;
scanf("%d %d",x,p);
  int i=0;
  while(x<1)
  {
    i=i+x;
    x=(x*p)/100;
  }
  printf("\n%d",i);
return 0;
}
