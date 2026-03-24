
#include <stdio.h>
int add(int a,int b) {
    return a+b;
}
int subtract(int a,int b) {
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
float divide(int a,int b){
    return (float)a/b;
}
int main() {
    int A,B;
    char op;
    scanf("%d %d %c",&A,&B,&op);
    switch(op){
        case '+':
            printf("%d",add(A,B));
            break;
        case '-':
            printf("%d",subtract(A,B));
            break;
        case '*':
            printf("%d",multiply(A,B));
            break;
        case '/':
            if(B != 0)
                printf("%.2f",divide(A,B));
            else
                printf("Division by zero error");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
