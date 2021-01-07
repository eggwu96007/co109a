* code

#include<stdio.h>

/* 
R0=1
while (1) {
  R0=R0+1
}
*/

int main()
{
    int R0=1; //@0
    //while (1)
    LOOP: // M=1
        R0=R0+1; M=M+1
        if(R0 == 10) goto EXIT;  //0;JMP
        printf("r0=%d\n",R0);
        goto LOOP;
    //} 
    EXIT:
      return 0;
}

* picture
![PICTURE1](https://github.com/eggwu96007/co109a/blob/master/homework/1105/picture/補充.PNG)