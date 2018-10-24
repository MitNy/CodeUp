// 2016/05/20
#include<stdio.h>
 
int main()
{
        int n,a; // n: 정수의 개수 a: 정수
        scanf("%d" ,&n);
        re:
        scanf("%d" ,&a);
        printf("%d\n" ,a);
        if(--n != 0 ) goto re;
        return 0;
}
