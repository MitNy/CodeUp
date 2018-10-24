// 2017/05/15
#include<stdio.h>
 
int main() {
    double percent1, percent2, percent3;
    int score1, score2, score3;
    double sum1, sum2, sum3;
 
    scanf("%lf %d",&percent1,&score1);
    scanf("%lf %d",&percent2,&score2);
    scanf("%lf %d",&percent3,&score3);
 
    sum1 = percent1 * score1;
    sum2 = percent2 * score2;
    sum3 = percent3 * score3;
 
    printf("%.1lf\n",sum1+sum2+sum3);
 
    return 0;
}

