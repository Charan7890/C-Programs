#include<stdio.h>
int main(){
    int a[10]={1,1,2,3,4,4,1,2,2,3};
    int d[10];
    for(int i=0;i<10;i++){
        int c=1;
        for(int j=i+1;j<10;j++){
            if(a[i]==-1){
                break;
            }
            if(a[i]==a[j]){
                c++;
                a[j]=-1;
            }
            }
            if(a[i]!=-1){
                printf("%d repeated %d times\n",a[i],c);
    }
}
return 0;
}
