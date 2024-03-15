#include <stdio.h>

int main(){

    int num = 123;
    float x = 1.23;
    char ch = 'A';

    printf("%d %x\n",num,num);
    printf("%f %e\n",x,x);
    printf("%c\n",ch);

    printf("%x\n",num);
    printf("%X\n",num);
    printf("%#x\n",num);
    printf("%#X\n",num);

}