#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int j=str.length()-1;
    int a=0;
    for(int i=0; i<str.length()/2;i++){
        if (str[i]==str[j]){
            i++;
            j--;
        }else{
            a++;
            break;
        }

    }
    if(a==0){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }
}