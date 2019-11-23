#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double p,a,n,i;
    cin>>a>>n;
    for (i=1;i<=n;i++){
        p*=(a+i)*(a+i);
    }
    cout<<p;
}
