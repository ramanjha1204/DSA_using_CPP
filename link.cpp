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
};
int main()
{
    int n;
    linklistDemo obj;
    while(1)
    {
        cout<<"\n1.append";
        cout<<"\n2.display";
        cout<<"\n3.exit";
        cout<<"\n select any choice";
        cin>>n;
        switch (n)
        {
            case 1: obj.append();
            break;
            case 2: obj.display();
            break;
            case 0:
            exit(0);

        }
    }
    return 0;
}