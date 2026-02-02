#include <iostream>
using namespace std;
int main(){
    int arr[7] ={12,45,32,29,39,78,45};
    int large = arr[0];
    int secondLarge =arr[0];
    for (int i=0; i<7; i++){
        if(arr[i]>large){
            secondLarge = large;
            large = arr[i];
        }
        else if(arr[i]>secondLarge){
            secondLarge = arr[i];
        }
    }
    cout<<"Largest element is: "<<large<<endl;
    cout<<"Second Largest element is: "<<secondLarge;
}
