// 2016/05/08
#include<stdio.h>
 
int main() {
 
    int num1, num2, num3;
    int min;
 
    scanf("%d %d %d" ,&num1,&num2,&num3);
 
    if( num1 > num2 ) {
        min = num2;
    }
    else {
        min = num1;
    }
 
    if( min > num3 ) {
        min = num3;
    }
    else {
        min = min;
    }
 
    printf("%d\n",min);
 
    return 0;
}
