#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int firstMaxi=0,secondMaxi=-1;
    for(int i=1;i<n;i++){
        if(a[i]>a[firstMaxi]){
            secondMaxi=firstMaxi;
            firstMaxi=i;
        }else if(a[i]<firstMaxi){
            if(secondMaxi==-1 || a[secondMaxi]<a[i]){
                secondMaxi=i;
            }
        }
    }
    printf("Second Largest Element is %d ",a[secondMaxi]);
}
