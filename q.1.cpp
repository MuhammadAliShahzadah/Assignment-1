#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    cout<<"factors of "<<number<<": ";
    for(int i=1;i<=number;++i){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
}
