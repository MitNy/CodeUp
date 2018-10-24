// 2017/05/15
#include<stdio.h>
 
int main() {
    int grade,class,number;
 
    scanf("%d %d %d",&grade,&class,&number);
 
    if( number < 10 ) {
        printf("%d%d%02d\n", grade,class,number);
    }
    else {
        printf("%d%d%d\n",grade,class,number);
    }
 
    return 0;
}
