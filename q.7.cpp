#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    string result="";
    for(int i=0;i<input.length();++i){
        char currentChar=input[i];
        bool isDuplicate=false;
        for(int j=0;j<result.length();++j){
            if(result[j]==currentChar){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            result+=currentChar;
        }
    }
    cout<<"Resultant string after removing duplicates: "<<result<<endl;
}
