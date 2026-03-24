
#include<stdio.h>
float area(int r){
    float area=3.14*r*r;
    return area;
}
int main(){
    int r;
    scanf("%d",&r);
    printf("%.2f",area(r));
    return 0;
}
