#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int s=0;
    for(int i=0;i<5;i++){
        s=s+a[i];
    }
    printf("the array sum is:%d",s);

    return 0;
}
