#include<stdio.h>
int digits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=digits(n);
    printf("%d",result);
    return 0;
}
