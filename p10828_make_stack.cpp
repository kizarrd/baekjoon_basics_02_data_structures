#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct Stack
{
    //creation of a stack
    int stack[10000];
    int ssize;
    //empty

    Stack()
    {
        ssize = 0;
    }
    bool
    empty()
    {
        if (ssize == 0)
            return 1;
        else
            return 0;
    }
    //push
    void push(int x)
    {
        stack[ssize] = x;
        ssize += 1;
    }

    //pop
    int pop()
    {
        if (empty())
        {
            printf("%d\n", -1);
            return -1;
        }
        else
        {
            printf("%d\n", stack[ssize - 1]);
            stack[ssize - 1] = 0;
            ssize -= 1;
            return 0;
        }
    }
    //size
    void size()
    {
        printf("%d\n", ssize);
    }

    //top
    int top()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            printf("%d\n", stack[ssize - 1]);
            return 0;
        }
    }
};

int main()
{
    int t;
    string str;
    scanf("%d", &t);

    Stack stck;

    while (t--)
    {
        cin >> str;

        if (str == "push")
        {
            int data;
            scanf("%d", &data);
            stck.push(data);
        }
        else if (str == "pop")
        {
            stck.pop();
        }
        else if (str == "size")
        {
            stck.size();
        }
        else if (str == "empty")
        {
            printf("%d\n", stck.empty());
        }
        else if (str == "top")
        {
            stck.top();
        }
    }

    return 0;
}