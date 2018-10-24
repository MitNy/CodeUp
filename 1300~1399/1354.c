// 2016/05/24
#include<stdio.h>
 
int main(void) {
        int i, x, num;
        scanf("%d", &num);
        for(i=0;i<num;i++)
        {
                for(x=i;x<num;x++)
                        printf("*");
                printf("\n");
        }
 
 
        return 0;
}
