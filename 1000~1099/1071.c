// 2016/05/20
#include<stdio.h>
 
int main()
{
        long long int n;
        re:
        scanf("%lld" ,&n);
        printf("%lld\n" ,n);
        if( n != 0 ) goto re;
        return 0;
}
