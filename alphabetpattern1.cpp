#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows :";
    cin>>m;

    int n;
    cout<<"enter the number of coloumns :";
    cin>>n;
    for(int i=1;i<=m;i++){//rows=m
        for(int j=1;j<=n;j++){//coloumns=n
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
    return 0;
    
}