// 2017/05/15
#include<stdio.h>
 
int main() {
    int a,b,c,d;
    int sum=0;
 
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum = a+b+c+d;
 
    if( sum == 0 ) {
        printf("모\n");
    }
    else if( sum == 1 ) {
        printf("도\n");
    }
    else if( sum == 2 ) {
        printf("개\n");
    }
    else if( sum == 3 ) {
        printf("걸\n");
    }
    else if( sum == 4 ) {
        printf("윷\n");
    }
 
    return 0;
}
