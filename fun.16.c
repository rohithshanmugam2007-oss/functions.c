#include <stdio.h>
void fibo(int n){
    int a=0,b=1,next;
    for(int i=1;i<=n;i++){
        if(i==1)
            printf("%d",a);
        else if(i==2)
            printf("%d",b);
        else{
            next=a+b;
            printf("%d",next);
            a=b;
            b=next;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}
