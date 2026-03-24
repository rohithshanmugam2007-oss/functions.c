#include<stdio.h>
int palindrome(int a){
    int original=a,rev=0,rem;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(original==rev)
        return 1;
    else
        return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    if(palindrome(a))
        printf("palindrome");
    else
        printf("Not palindrome");
        
    return 0;
}
