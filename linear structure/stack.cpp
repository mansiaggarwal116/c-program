#include <iostream>
using namespace std;

class Stack{
    private:
      int top;
      int maxsize=10;
      int arr[10];
      
    public:
      //constructor
     Stack(){
        top=-1;
     }

    //push punction
    void push(int val){
        if(isFull()){
            cout<<"Stack overflow"<<endl;
            return;
        }
            top++;
            arr[top]=val;
    }

    //pop function
    int pop(){
        if(isEmpty()){
            cout<<"Stack underflow. Cannot popped"<<endl;
            return -1;
        }
            int value =arr[top];
            top--;
            return value;

    }

    //peek function
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
            return arr[top];
        }
    
    //isEmpty function
    bool isEmpty(){
        return top==-1;
    }

    //isFull function
    bool isFull(){
        return top==maxsize-1;
    }
    
    //get the minimum value in the stack
    int getMin(){
        if (isEmpty()){
           cout<<"Stack is empty"<<endl;
           return -1;
        }
        int min = arr[0];
        for(int i=1; i<=top;i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return min;
    }

};

int main(){
    //object of stack class
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout<<"Top element is: "<<stk.peek()<<endl;
    cout<<"Popped element is: "<<stk.pop()<<endl;
    cout<<"Top element after pop is: "<<stk.peek()<<endl;
    int a = stk.getMin();
    cout<<"Minimum element in the stack is: "<<a<<endl;
}