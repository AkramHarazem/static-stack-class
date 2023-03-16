#include <iostream>

using namespace std;

class Stack
{

private:
    int st[5];
    int top;

public:

    Stack ()
    {
        top = 0; // INITIALIZE START OF STACK AND POINTER START
    }

    void push (int); // ADD DATA TO STACK
    int pop();       // PUT DATA TO 0
};

// FUNCTIONS IMPLEMENTATION
void Stack:: push(int n)
{
    if (top==5)
    {
        cout<< "\nStack memory is full"<<endl;
    }
    else
    {
        st[top]=n;
        top++;
    }
}
int Stack:: pop ()
{
    int retuenVal = 0;
    if(top==0)
    {
        cout<< "\nStack memory is empty"<<endl;

    }
    else
    {
        top--;
        retuenVal =st[top];
    }

    return retuenVal;
}

int main()
{

    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);

    cout<<endl;

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;


    return 0;
}
