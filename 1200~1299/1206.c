// 2017/05/08
#include<stdio.h>
 
int main() {
    int num1,num2;
    int div;
 
    scanf("%d %d" ,&num1, &num2);
 
    if( num2 % num1 == 0 ) {
        div = num2/num1;
        printf("%d*%d=%d\n", num1,div,num2);
    }
    else if ( num1 % num2 == 0 ) {
        div = num1/num2;
        printf("%d*%d=%d\n",num2,div,num1);
    }
    else {
        printf("none\n");
    }
    return 0;
}
