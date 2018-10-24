// 2017/05/15
#include<stdio.h>
 
int main() {
    int a,b;
    int i;
 
    scanf("%d %d",&a,&b);
 
    if( a>b) {
        for( i = b; i<=a; i++ ) {
            printf("%d " ,i);
        }
    }
    else if ( a<b ) {
        for( i =a; i<=b; i++ ) {
            printf("%d " ,i);
        }
    }
    else {
        printf("%d ",a);
    }
    return 0;
}
