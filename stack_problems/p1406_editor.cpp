#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char> stckLeft;
    stack<char> stckRight;

    string str;
    cin >> str;

    for (char ch : str)
    {
        stckLeft.push(ch);
    }

    int t;
    cin >> t;

    while (t--)
    {
        char cmd;
        cin >> cmd;

        switch (cmd)
        {
        case 'L':
            if (stckLeft.empty())
                break;
            stckRight.push(stckLeft.top());
            stckLeft.pop();
            break;
        case 'D':
            if (stckRight.empty())
                break;
            stckLeft.push(stckRight.top());
            stckRight.pop();
            break;
        case 'B':
            if (stckLeft.empty())
                break;
            stckLeft.pop();
            break;
        case 'P':
            char newChar;
            cin >> newChar;
            stckLeft.push(newChar);
            break;
        default:
            return -1;
        }
    }

    while (!stckLeft.empty())
    {
        stckRight.push(stckLeft.top());
        stckLeft.pop();
    }

    while (!stckRight.empty())
    {
        cout << stckRight.top();
        stckRight.pop();
    }

    return 0;
}
