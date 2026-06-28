#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;

    for(int i=1;i<=n;i++){
        int fact=1;

        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        cout<<"factorial of" << i <<"="<<fact <<endl;
        
    }
    return 0;
}