// 2016/05/09
#include<stdio.h>
 
int main()
{
        long long int a,b,c;
        scanf("%lld %lld %lld" ,&a,&b,&c);
 
        {
        if(a%2 == 0) printf("%lld\n" ,a);
        if(b%2 == 0) printf("%lld\n" ,b);
        if(c%2 == 0) printf("%lld\n" ,c);
        }
        return 0;
}
