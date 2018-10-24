// 2016/05/13
#include<stdio.h>
 
int main()
{
int n,i,j;
int a[24] = {};
 
scanf("%d", &n); // n = 숫자 갯수
for(i=1 ; i<=n; i++)
{
        scanf("%d" ,&j);
        a[j] = a[j]+1;
}
 
for(i=1; i<=23; i++)
{
        printf("%d " ,a[i]);
}
 
return 0;
}
