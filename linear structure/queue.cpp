#include <iostream>
using namespace std;
class Queue{
      int front;
      int rear;
      int maxsize;
      int *arr;
      

      public:
       Queue(int maxsize){
        this->maxsize=maxsize;  // Initialize maxsize
        arr=new int[maxsize];
        front=-1;
        rear=-1;
       }
       
       //enqueue function
       void enqueue(int val){
        if(rear==maxsize-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        //first element to be enqueued
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear] = val;
    } 

    //dequeue function
    int dequeue(){
        if(front==-1){
            cout<<"Queue underflow. Cannot dequeue"<<endl;
            return -1;
        }
        int del = arr[front];
        front++;
        //reset the queue if all elements are dequeued
        if(front>rear){
            front=-1;
            rear=-1;
        }
        return del;
  }

  //peek function
   int peek(){
     if (front==-1){
        cout<<"Queue is empty"<<endl;
        return -1;
     }
     return arr[front];
   }

   //isEmpty function
    bool isEmpty(){
     return front == -1;
    }

    //isFull function
    bool isFull(){
     return rear == maxsize-1;
    }
    int size(){
        if(isEmpty()){
            return -1;
        }
        return rear-front+1;
    }

    void display()
    {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q(6);
    q.enqueue(13);
    q.enqueue(22);
    q.enqueue(8);
    q.enqueue(17);
    q.display();
    q.dequeue();
    q.dequeue();
    cout<<"Peek element is: "<<q.peek()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.display();

}

