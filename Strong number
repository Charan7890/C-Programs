#include<stdio.h>


int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}



int main(){
    int n;
    scanf("%d",&n);
    int s=0;
    int a=n;
    while(n!=0){
       int rem=n%10;
       s=s+fact(rem);
       n=n/10;
    }
    if(s==a){
        printf("%d is strong",s);
    }
    else
    printf("%d is not strong",s);
    return 0;
}



