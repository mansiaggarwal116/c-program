#include <iostream>
using namespace std;
class Node{
    public:
       int data;
       Node* next;
       
       Node(int val){
        this->data = data;
        this->next = NULL;
       }

};

class LinkedList{
    public:
     Node* head;

     LinkedList(){
          head = NULL;
     }
     void addAtBegin(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;

     }

     void printList(){
        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;

        }
        cout<<"NULL"<<endl;
     }
};

int main(){
    LinkedList list;
    list.addAtBegin(10);
    list.addAtBegin(20);
    list.addAtBegin(30);
    list.printList();
}