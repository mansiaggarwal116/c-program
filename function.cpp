#include <iostream>
using namespace std;

bool search(int key, int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5] ={12,45,32,29,39};
    bool ans;
    ans = search(29,arr,5);
    cout<<ans;
}