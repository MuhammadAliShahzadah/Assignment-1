#include <iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0;i<6;++i){
        cout<<"enter integer for serial number "<<(i+1)<<": ";
		cin>>arr[i];
    }
    cout<<"Original Array is: ";
    for (int i=0;i<6;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6-1;++i){
        for(int j=0;j<6-i-1;++j){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<6;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

