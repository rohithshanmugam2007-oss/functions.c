#include<stdio.h>
int year(int n){
    if((n%4==0 && n%100!=0)||n%400==0)
        printf("leap year");
    else
        printf("Not leap year");
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%c",year(n));
}
