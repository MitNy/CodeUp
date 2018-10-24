// 2017/05/08
#include<stdio.h>
 
int main() {
    int num1, num2;
 
    scanf("%d %d" ,&num1,&num2);
 
    if( num1%2 == 0 ) {
        printf("짝수");
    }
    else {
        printf("홀수");
    }
    printf("+");
 
    if( num2%2 == 0 ) {
        printf("짝수");
    }
    else {
        printf("홀수");
    }
    printf("=");
 
    if( ((num1%2==0)&&(num2%2==0)) ||((num1%2==1 )&&(num2%2 ==1 ))) {
        printf("짝수\n");
    }
    else if( ((num1%2 == 0)&&(num2%2 == 1)) || ((num1%2 == 1 )&&(num2%2 == 0) )) {
        printf("홀수\n");
    }
    return 0;
}
