#include <stdio.h>

int main(){
    int r1 ,r2 ,r0; 
    r1=1 ;          //@1 ; M=1 ;
    r2=4 ;          //@4 ;D=A ;@r2 ; M=D;
    r0=r1+r2;       //@r1 ; D=M ; @r2 ; D=D+M ; @r0 ; M=D;
    printf("r0=%d\n" ,r0);


}
