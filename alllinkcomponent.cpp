#include <iostream>
#include <stdlib.h>
using namespace std;
class linklistDemo
{
public:
    class GetNode
    {
    public:
        int data;
        GetNode *next;
        GetNode()
        {
            next = NULL;
        }
    };
    GetNode *head = NULL;
    void append()
    {
        int data;
        cout << "Enter the data to be inserted==" << endl;
        cin >> data;
        GetNode *newNode = new GetNode();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
        }
        else 
        {
            GetNode *temp = head;
            while (temp->next!= NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout<< "new node added ";

        }
        
    }
    void addatBegin()
    {
        int data;
        cout << "Enter the data to be inserted==" << endl;
        cin >> data;
        GetNode *newNode = new GetNode();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
        }
        else 
        {
            GetNode *temp;
            temp = head;
            newNode->next = temp;
            head = newNode;
            cout<< "new node added ";

        }
        
    }
    
    void addatLast()
    {
        int data;
        cout << "Enter the data to be inserted==" << endl;
        cin >> data;
        GetNode *newNode = new GetNode();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
        }
        else 
        {
            GetNode *temp = head;
            while (temp->next!= NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout<< "new node added ";

        }
        
    }
    void display()
    {
        GetNode *temp = head;
        cout << "linked list is==>" << endl;
        cout << "Head=>" << endl;
        while (temp != NULL)
        {
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void deleteAtBeginning(){
        if(head==NULL){
            cout<<"\nlist is empty";
            return;
        }
        else{
            GetNode *temp = head;
            head = head->next;
            delete temp;
            cout<<"\nnode deleted";
        } 
    }
    void deleteAtLast(){
        if(head==NULL){
            cout<<"\nlist is empty";
            return;
        }
        else{
            GetNode *ptr = head;
            GetNode *ptr1 = ptr;
            while(ptr->next!=NULL){
                ptr1 = ptr;
                ptr = ptr->next;
            }
            ptr1->next = NULL;
            cout<<"\nNode deleted";
        }
    }
    void deleteAtAfter(){
        cout<<"Enter data after node will be deleted==";
        int key;
        cin>>key;
        if(head==NULL){
            cout<<"\nlist is empty";
            return;
        }
        else{
            GetNode *ptr = head;
            while(ptr->next!=NULL){
                if (key==ptr->data)
                {
                    break;
                }
                else
                {
                    ptr=ptr->next;
                }
            }
            if(ptr->next==NULL){
                cout<<"\nKey not found";
            }
            else
            {
                GetNode *ptr1, *ptr2;
                ptr1 = ptr->next;
                ptr2 = ptr1->next;
                ptr->next = ptr2;
                cout<<"Node"<<ptr1->data<<"is deleted..";
            }
            
        }
    }
};
int main()
{
    int n;
    linklistDemo obj;
    while(1)
    {
        cout<<"\n1.append";
        cout<<"\n2.display";
        cout<<"\n3.Add at Beginning";
        cout<<"\n4.Add at Last Position";
        cout<<"\n6.Delete at End";
        cout<<"\n7.Delete at Beginning";
        cout<<"\n8.Delete at ";
        cout<<"\n5.exit";
        cout<<"\n select any choice";
        cin>>n;
        switch (n)
        {
            case 1: obj.append();
            break;
            case 2: obj.display();
            break;
            case 3: obj.addatBegin();
            break;
            case 4: obj.addatLast();
            break;
            case 0:
            exit(0);

        }
    }
    return 0;
}