// 2017.05.08
#include<stdio.h>
 
int main() {
    int num1,num2;
 
    scanf("%d %d", &num1, &num2);
 
    if( num1 > num2 ) {
        printf(">\n");
    }
    else if( num2 > num1 ) {
        printf("<\n");
    }
    else {
        printf("=\n");
    }
 
    return 0;
}
