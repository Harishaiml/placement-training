#include<stdio.h>
int main(){
    int a=0,b=1,n,c;
    printf("Enter num : ");
    scanf("%d",&n);
    printf("Fibonacci series : ");
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
