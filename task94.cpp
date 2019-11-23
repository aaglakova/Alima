#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double sum=0,i,n;
    cin>>n;
    for (i=1;i<=n;i++){
        sum+=1/i;
    }
    cout<<sum;
}
