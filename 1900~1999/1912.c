// 2016/07/05
#include<stdio.h>
 
int factorial(int n)
{
        if(n==1)
        return 1;
        else
        return n * factorial(n-1);
}
 
int main(void)
{
        int num;
        scanf("%d" ,&num);
        printf("%d\n" ,factorial(num));
        return 0;
}
