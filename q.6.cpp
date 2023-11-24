#include <iostream>
using namespace std;
int main(){
    int dividend,divisor,remainder;
    cout<<"enter dividend: ";
    cin>>dividend;
    cout<<"enter divisor: ";
    cin>>divisor;
    int quotient=0;
    if(dividend<divisor){
        cout<<"dividend must be greater than divisor."<<endl;
    }
	else{
        while(dividend>=divisor){
            dividend-=divisor;
            quotient++;
        }
        cout<<"quotient: "<<quotient<<endl;
        cout<<"remainder: "<<dividend<<endl;
        remainder=dividend;
    }
    dividend=(quotient*divisor)+remainder;
    cout<<"(quotient*divisor)+remainder= "<<dividend;
}
