//Take Mobile number as input and push it on stack./
#include <iostream>
using namespace std;
int top=-1;
int rear = -1, front = 0;
const int CAPACITY = 10;
int M_queue[CAPACITY];
int M_stack[CAPACITY];
int isFull()
{
    if (rear == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFullStack()
{
    if (top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int a)
{
    
    if (isFull())
    {
        cout << "Queue is full";
    }
    else
    {
        rear++;
        M_queue[rear] = a;
        cout<< "\nElement inserted:" << M_queue[rear];
    }
}
int dequeue()
{
    int ele;
    if (isEmpty())
    {
        cout << "Queue is empty";
    }
    else
    {    ele=M_queue[front];
        cout << "\nElement deleted:" << ele;
        for (int i = 0; i <= rear; i++)
        {
            M_queue[i] = M_queue[i + 1];
           
        }
        --rear;
    }
    return ele;
}
void push(int ele)
{

    if (isFullStack())
    {
        cout << "Stack is full";
    }
    else
    {
        ++top;
        M_stack[top] = ele;
        cout << "\nElement is pushed on Stack:" << ele;
    }
}
void Queuetraverse()
{
    cout << "\nElements of the stack:";
    for (int i = 0; i <= rear; i++)
    {
        cout << M_queue[i] << "  ";
    }
}
void Stacktraverse()
{
    cout << "Elements of the stack:";
    for (int i = top + 1; i >= 0; i--)
    {
        cout << M_stack[i] << endl;
    }
}
int main()
{
    int choice,a,el;
    cout << "\n Welcome To Queue Implementation Code !\n";
    while (1)
    {
        cout << "\n1.Insert Mobile No. in queue\n2.Delete Mobile No. and push on stack\n3.Traverse\n4.Traverse Stack\n0.To Exit";
        cout << "\nEnter your choice:";

        cin >> choice;
        switch (choice)
        {
        case 1:
          
            cout << "enter element to insert:";
            cin >> a;
            enqueue(a);
            break;
        case 2:
            el=dequeue();
            push(el);
            break;
        case 3:
            Queuetraverse();
            break;
        case 4:
            Stacktraverse();
            break;
        case 0:
            cout << "Thank you";
            exit(0);
        

        default:
            cout << "Invalid choice";
            break;
        }
    }
    return 0;
}