#include <stdio.h>
long long power(int A,int B) {
    if (B==0) 
        return 1;
    else
        return A*power(A,B-1);
}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    printf("%lld\n",power(A,B));
    return 0;
}
