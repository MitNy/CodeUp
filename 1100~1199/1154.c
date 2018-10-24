// 2016/05/25
#include<stdio.h>
 
int main()
{
        int a,b;
        scanf("%d %d" ,&a,&b);
        if( a>b ) printf("%d\n" ,a-b);
        else if( b>a ) printf("%d\n" ,b-a);
        else if( a=b ) printf("0\n");
        return 0;
}
