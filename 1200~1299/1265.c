// 2017/05/15
#include<stdio.h>
 
int main() {
    int input;
    int i;
    int sum;
 
    scanf("%d",&input);
 
    for( i=1; i<=9; i++ ) {
        sum = input*i;
        printf("%d*%d=%d\n",input,i,sum);
    }
    return 0;
}
