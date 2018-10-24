// 2017/05/15
#include<stdio.h>
 
int main() {
    int input;
    int minute;
    int second;
 
    scanf("%d",&input);
 
    if( input >= 60 ) {
        minute = input/60;
        second = input%60;
        printf("%d %d\n",minute,second);
    }
    else {
        minute = input/60;
        printf("%d %d\n",minute,input);
    }
 
    return 0;
}

