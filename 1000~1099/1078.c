// 2017/05/15
#include<stdio.h>
 
int main() {
    int num=0;
    int i;
    int sum=0;
 
    scanf("%d" ,&num);
 
    for( i=1; i<=num; i++ ) {
        if( i%2 == 0 ) {
            sum += i;
        }
    }
    printf("%d\n" ,sum);
    return 0;
}
