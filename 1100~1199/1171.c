// 2017/05/15
#include<stdio.h>
 
int main() {
    int grade;
    int class;
    int number;
 
    scanf("%d %d %d",&grade,&class,&number);
    printf("%d%02d%03d\n",grade,class,number);
 
    return 0;
}
