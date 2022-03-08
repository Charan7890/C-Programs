#include<iostream>

using namespace std;

int fun(int n){
    if(n%10==0){
        return n;
    }
    else{
        return((n%10)+fun(n/10));
    }
}

int main(){
    
    int n;
    
    cin>>n;
    
    int res = fun(n);
    if(res<=10){
    cout<<res;
    }
    return 0;
}
