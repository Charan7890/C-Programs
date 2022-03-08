#include<stdio.h>
int main(){
    int n=143241;
    int a=n;
    int sum=0;
    while(n!=0){
        int rem = n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(a==sum)
    printf("%d is palindrome",sum);
    else
    printf("%d is not palindrome",sum);
    return 0;
}
