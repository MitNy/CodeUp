// 2016/05/21
#include<stdio.h>
 
int main()
{
        int sum = 0;
        int n,i;
        scanf("%d" ,&n);
        for( i=1;; i++)
        {
                sum = sum+i;
                if( sum >= n ) break;
        }
        printf("%d\n" ,sum);
        return 0;
}
