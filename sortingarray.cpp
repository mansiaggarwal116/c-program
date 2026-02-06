#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3, 12, 5, 67, 23};
    for(int i=0; i<5; i++){
        if(arr[i] < arr[i+1]){
            cout<<"array is sorted in ascending order"<<endl;
            
         }
        else if(arr[i] > arr[i+1]){
            cout<<"array is not sorted in ascending order"<<endl;
            break;
        }

    }
}
