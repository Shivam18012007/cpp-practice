#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of rows :";
    cin>>n;

    int nsp=n-1;  //nsp=number of spaces
    int nst=1;  //nst=number of stars

    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        //stars
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
            nst+=2;
        
        cout<<endl;
    }
}