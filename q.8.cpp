#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int n=5-1,num;
    cout<<"do you want to add a number to the array?(1=yes, 0=no)"<<endl;
    bool add;
    cin>>add;
    while(add){
    	cout<<"enter number to add to array: "<<endl;
    	cin>>num;
    	a[n+1]=num;
    	cout<<"do you want to continue adding numbers to the array?(1=yes, 0=no)"<<endl;
    	cin>>add;
	}
    cout<<"Array elements: ";
    for(int i=0;i<8;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
