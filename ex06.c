#include <stdio.h>

int main()
{
 int a[5]={3, 18, 17, 21, 35};
 a[2]= 19;
 int b=0;
 while(b<5)
 {
    printf("%d\n", a[b]);
    b = b +1 ;
 }
 }