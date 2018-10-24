// 2016/07/04
#include<stdio.h>
 
void print(int n)
{
        printf("%d\n" ,n);
        if(n==1)
                return;
        else
                print(n-1);
}
int main(void)
{
        int input;
        scanf("%d",&input);
        print(input);
        return 0;
}
