#include<iostream>
using namespace std;
int main(){
	int maximum=-1,minimum=-1,max=INT_MIN,min=INT_MAX;
	int a;
	cin>>a;
	for (int i=0;i<4;i++){
	    if((int(a[i])-48)>max){
	        max=(int(a[i])-48);
	        maximum=i;
	    }
	    if((int(a[i])-48)<min){
	        min=(int(a[i])-48);
	        minimum=i;
	    }
	}
	a[maximum]=char(min+48);
	a[minimum]=char(max+48);
	cout<<a;
}
