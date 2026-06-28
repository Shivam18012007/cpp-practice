#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first num: ";
    cin>>a;
    int b;
    cout<<"enter second num: ";
    cin>>b;
    int c;
    cout<<"enter third num: ";
    cin>>c;
// if a>b and a>c then a is greatest
    if(a>b){// b can never be greatest
        if(a>c){
            cout<<"a"<<"is greatest";
        }
        else{ // c>a,a>b  -> c>a>b
            cout<<"c"<<"is greatest";
              }
            }
        else { // b>a
             if(b>c){
                cout<<"b"<<"is greatest";
             }
         else{// c>b,b>a  -> c>b>a
            cout<<"c"<<"is greatest";

             }

        }
        return 0;

        
        
}
    