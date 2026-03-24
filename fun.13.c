#include<stdio.h>
int power(int a,int b){
    int s=1;
    for(int i=1;i<=b;i++){
        s=s*a;
    }
    return s;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
    
