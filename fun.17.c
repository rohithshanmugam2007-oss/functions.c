#include <stdio.h>
#include <math.h>
int countDigits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
void Armstrong(int n) 
{
    int digits = countDigits(n);
    int sum=0,temp=n,rem;
    while(temp>0)
    {
        rem=temp%10;
        int power=1;
        for(int i=1;i<=digits;i++) 
        {
            power*=rem; 
        }
        sum+=power;
        temp/=10;
    }
    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
int main() 
{
    int N;
    scanf("%d",&N);
    Armstrong(N);
    return 0;
}
