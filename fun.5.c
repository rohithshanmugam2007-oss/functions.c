#include <stdio.h>
int digit(int a){
    int sum=0;
    while(a>0){
        sum=sum+(a%10);
        a=a/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=digit(n);
    printf("%d",result);
    return 0;
}