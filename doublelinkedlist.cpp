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
        GetNode *left;
        GetNode *right;
        GetNode()
        {
            left=NULL;
            right=NULL;
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
            while (temp->left!= NULL)
            {
                temp = temp->left;
            }
            temp->left = newNode;
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
            newNode->left = temp;
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
            while (temp->left!= NULL)
            {
                temp = temp->left;
            }
            temp->left = newNode;
            cout<< "new node added ";

        }
        
    }
    void display()
    {
        GetNode *temp ;
        temp = head;
        cout<<"\n";
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->right;
        }
        

    }
    void deleteAtBeginning(){
        if(head==NULL){
            cout<<"\nlist is empty";
            return;
        }
        else{
            GetNode *temp = head;
            head = head->left;
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
            while(ptr->left!=NULL){
                ptr1 = ptr;
                ptr = ptr->left;
            }
            ptr1->left = NULL;
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
            while(ptr->left!=NULL){
                if (key==ptr->data)
                {
                    break;
                }
                else
                {
                    ptr=ptr->left;
                }
            }
            if(ptr->left==NULL){
                cout<<"\nKey not found";
            }
            else
            {
                GetNode *ptr1, *ptr2;
                ptr1 = ptr->left;
                ptr2 = ptr1->left;
                ptr->left = ptr2;
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