// 2016/05/09
#include<stdio.h>
 
int main()
{
        char a;
        scanf("%c" ,&a);
 
        switch(a)
        {
        case 'D':
                printf("slowly~\n");
                break;
        case 'C':
                printf("run!\n");
                break;
        case 'B':
                printf("good!!\n");
                break;
        case 'A':
                printf("best!!!\n");
                break;
        default:
                printf("what?\n");
                break;
        }
return 0;
}
