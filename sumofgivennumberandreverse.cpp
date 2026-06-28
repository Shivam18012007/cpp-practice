#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;

    int rev=0;
    int temp;
    temp=n;

    while(temp!=0){
        int digit=temp%10;
        rev=rev*10 + digit;
        temp=temp/10;
    }
    int sum= rev + n;

    cout<<"reverse of given number"<<rev<<endl;
    cout<<"sum of given number and reverse"<<sum;
    return 0;
}