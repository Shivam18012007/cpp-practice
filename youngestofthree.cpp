#include<iostream>
using namespace std;
int main(){
    int manjari;
    cout<<"enter the age of manjari :";
    cin>>manjari;

    int himanshu;
    cout<<"enter the age of himanshu :";
    cin>>himanshu;

    int shivam;
    cout<<"enter the age of shivam : ";
    cin>>shivam;

    if(manjari<himanshu){
        if(manjari<shivam){
            cout<<"manjari"<<" is youngest";
        }
    }

    if(himanshu<manjari){
        if(himanshu<shivam){
            cout<<"himanshu"<<" is youngest";
        }
    }
    if(shivam<manjari){
        if(shivam<himanshu){
            cout<<"shivam"<<" is youngest";
        }
    }
    return 0;
}