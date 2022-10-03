#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before Swap A= %d B= %d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("After Swap A= %d B= %d",a,b);
}
