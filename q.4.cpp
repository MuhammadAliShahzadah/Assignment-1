#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter a positive integer N: ";
    cin>>N;
    
    while(N>1){
        bool isPrime=true;
        for(int i=2;i*i<=N;++i){
            if (N%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<"largest prime number less than or equal to N: "<<N<<endl;
            break;
        }
        --N;
    }
}
