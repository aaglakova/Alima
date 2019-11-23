#include<iostream>
#include<cmath>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i%2==0){
            for(int j=1;j<=10;j++)
                cout<<i<<" ";
        } 
        else{
            for(int j=1;j<=10;j++)
            cout<<1<<" ";
        }
        cout<<endl;
    }
}
