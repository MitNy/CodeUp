// 2016/05/09
#include<stdio.h>
 
int main()
{
        int a;
        scanf("%d" ,&a);
        if(a>=90&&a<=100) printf("A\n");
        else if(a>=70&&a<=89) printf("B\n");
        else if(a>=40&&a<=69) printf("C\n");
        else if(a>=0&&a<=39) printf("D\n");
        return 0;
}
