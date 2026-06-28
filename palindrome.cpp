#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num :";
    cin>>num;
    int originalnum;
    int rev=0;
    originalnum=num;

    while(num!=0){
        int digit= num%10;
        rev= rev*10+digit;
        num=num/10;
    }
    if(originalnum==rev){
        cout<<"num is palindrome";
    }else{
        cout<<"num is not palindrome";
    }
    return 0;
}