#include <stdio.h>

void main(){
    int x, y;
    printf("Enter the First: ");
    scanf("%d",&x);
    printf("Enter the Second: ");
    scanf("%d",&y);
    int sum = x+y;
    int sub = x-y;
    int mul = x*y;
    int di = x/y;
    printf("Sum %d\n",sum);
    printf("Sub %d\n",sub);
    printf("Mul %d\n",mul);
    printf("div %d\n",di);
}