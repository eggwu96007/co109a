#include<stdio.h>

/* 
R0=1
while (1) {
  R0=R0+1
}
*/

int main()
{
    int R0=1;
    while (1)
    {
        R0=R0+1;
        printf("r0=%d\n",R0);
    }  
}