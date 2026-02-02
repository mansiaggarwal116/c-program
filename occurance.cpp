#include <iostream>
using namespace std;
int occurance(int key,int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[10] = {5,8,3,6,8,3,2,8,9,1};
    int key = 3;
    int result = occurance(key, arr, 10);
    cout<<"The number of occurrences of "<<key<<" is: "<<result<<endl;
}