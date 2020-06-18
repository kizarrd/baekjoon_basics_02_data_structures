#include <iostream>
#include <string>
using namespace std;

struct Stack
{
    int stack[10000];
    int size;

    Stack()
    {
        size = 0;
    }

    bool empty()
    {
        if (size == 0)
            return 1;
        else
            return 0;
    }

    void push(int x)
    {
        stack[size] = x;
        size++;
    }

    int pop()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            int toPop = stack[size - 1];
            stack[size - 1] = 0;
            size--;
            return toPop;
        }
    }

    int top()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return stack[size - 1];
        }
    }
};

int main()
{

    int t;
    Stack stck;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;
        if (str == "empty")
        {
            cout << stck.empty() << endl;
        }
        else if (str == "push")
        {
            int data;
            cin >> data;
            stck.push(data);
        }
        else if (str == "pop")
        {
            cout << stck.pop() << endl;
        }
        else if (str == "size")
        {
            cout << stck.size << endl;
        }
        else if (str == "top")
        {
            cout << stck.top() << endl;
        }
    }

    return 0;
}