#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i*n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
