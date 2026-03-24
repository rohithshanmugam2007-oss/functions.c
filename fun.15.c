#include<stdio.h>
int table(int n){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",table(n));
    return 0;
}
