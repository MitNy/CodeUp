// 2017/03/02
#include<stdio.h>
 
int main() {
        int a; //시작 값
        int d; //등차 값
        int n; //몇번째인지를 나타내는 정수
        int sum;
 
        scanf("%d %d %d" ,&a,&d,&n);
 
        for(int i=0; i<=n; i++) {
                sum = a+(d*(n-1));
        }
 
        printf("%d\n" ,sum);
 
return 0;
}
