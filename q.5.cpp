#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"enter the first string: ";
    cin>>str1;
    cout<<"enter the second string: ";
    cin>>str2;
    if(str1==str2){
        for (int i=0;i<str1.length()/2;++i){
            char temp=str1[i];
            str1[i]=str1[str1.length()-i-1];
            str1[str1.length()-i-1]=temp;
        }
        cout<<"inverted string 1: "<<str1<<endl;
        cout<<"original string 2: "<<str2<<endl;
    }
	else{
        cout<<"strings are not equal"<<endl;
    }
}
