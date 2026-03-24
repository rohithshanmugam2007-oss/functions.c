#include<stdio.h>
char* digit(int a){
    if(a%2 ==0)
        return "even";
    else
        return "odd";
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%s",digit(a));
}