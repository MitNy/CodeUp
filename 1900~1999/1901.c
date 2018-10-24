// 2016/07/04
#include<stdio.h>
 
void print(int num,int n)
{
        if(num==n+1)
        return;
        printf("%d\n" ,num);
        print(num+1,n);
}
 
int main(void)
{
        int input;
        scanf("%d" ,&input);
        print(1,input);
        return 0;
}
