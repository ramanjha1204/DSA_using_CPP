#include <iostream>
#include <string>
#define MAX_SIZE 100
using namespace std;

class Stack {
private:
    int top;
    string arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(char val) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
        cout << val << " pushed to stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void traverse() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    string s;
    cin >> s;
    Stack stack;
    for (int i = 0; i < s.length(); i++) {
        stack.push(s[i]);
    }
    stack.traverse();
    return 0;
}
