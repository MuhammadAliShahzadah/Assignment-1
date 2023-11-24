#include <iostream>
using namespace std;
int main(){
	int n;
    int arr[10];
    for(int i=0;i<10;++i){
        cout<<"enter integer for serial number "<<(i+1)<<": ";
		cin>>arr[i];
    }
	n=10;
    int X;
    cout<<"enter the number to find sum of: ";
    cin>>X;
    bool tripletFound=false;
    cout<<"triplets with sum "<<X<<" and no repetition:"<<endl;
    for(int i=0;i<n-2;++i){
        for(int j=i+1;j<n-1;++j){
            for(int k=j+1;k<n;++k){
                if(arr[i]+arr[j]+arr[k]==X&&arr[i]!=arr[j]&&arr[j]!=arr[k]&&arr[i]!=arr[k]){
                    cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                    tripletFound=true;
                }
            }
        }
    }
    if(!tripletFound){
        cout<<"no triplet found with the sum "<<X<<" and no repetition."<<endl;
    }
}
