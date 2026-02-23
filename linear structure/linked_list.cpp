#include <iostream>
using namespace std;
class Node{
    public:
       int data;
       Node* next;
       
       //constructor
       Node(int val){
        this->data = val;
        this->next = NULL;
       }

};

class LinkedList{
    public:
     Node* head;
    
    //constructor
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

     bool search(int key){
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;

     }
     void insertAtLast(int val){
         Node* newNode = new Node(val);
            if(head==NULL){
                head = newNode;
                return;
            }
         Node* temp=head;
         
         while(temp->next!=NULL){
            temp=temp->next;
         }
         temp->next = newNode;
         return;
   }
   void deleteAtLast(){
        if(head==NULL){
            return;
        }
        if (head->next==NULL){
            head=NULL;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
   }

   void insertAtPosition(int val, int pos){
      Node* newNode = new Node(val);
      Node* temp = head;
      int count = 1;
      while(count!=pos-1){
        temp = temp->next;
        count++;
      }
      newNode->next = temp->next;
      temp->next = newNode;
   }
};

int main(){
    LinkedList list;
    list.addAtBegin(10);
    list.addAtBegin(20);
    list.addAtBegin(30);
    list.printList();
    list.search(10);
    list.insertAtLast(40);
    list.printList();
    list.deleteAtLast();
    list.printList();
    list.insertAtPosition(25,3);
    list.printList();
}