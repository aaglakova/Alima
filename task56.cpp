#include<iostream>
using namespace std;
int main(){
    int no,direction;
    cin>>no>>direction;
    if (no==11){
        switch (direction){
        case 0: 
        cout<<"North";
        break;
        case 1: 
        cout<<"West";
        break;
        case -1: 
        cout<<"East";
        break;
        }
    }
    if(no==12){
        switch (direction){
        case 0: 
        cout<<"West";
        break;
        case 1: 
        cout<<"South";
        break;
        case -1: 
        cout<<"North";
        break;
        }
    }
    if(no==13){
        switch (direction){
        case 0: 
        cout<<"South";
        break;
        case 1: 
        cout<<"East";
        break;
        case -1: 
        cout<<"West";
        break;
        }
    }
    if(no==14){
        switch (direction){
        case 0: 
        cout<<"East";
        break;
        case 1: 
        cout<<"North";
        break;
        case -1: 
        cout<<"South";
        break;
        }
    }
}
