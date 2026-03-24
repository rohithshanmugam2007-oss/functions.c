#include<stdio.h>
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n,result;
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
    return 0;
}
