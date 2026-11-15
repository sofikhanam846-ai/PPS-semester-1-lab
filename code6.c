#include<stdio.h>

int main()
{
   int a;
   int b;
   int c;
   float average;
   printf("input as a");
   scanf("%d",&a);
   printf("input as b");
   scanf("%d",&b);
   printf("input as c");
   scanf("%d",&c);
   average=a+b+c/3;
   printf("average is %f",average);
   return 0;

}
