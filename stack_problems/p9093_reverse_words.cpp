#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;
    cin.ignore();
    // prevents from erroneous behavior

    while (t--)
    {
        stack<char> stck;
        string str;
        getline(cin, str);
        str += '\n'; // indicates the end of a line

        for (char c : str)
        {
            if (c == ' ' || c == '\n')
            {
                while (!stck.empty()) // print all chars stored in stack
                {
                    cout << stck.top();
                    stck.pop();
                }
                cout << c; // print a blank space or \n
            }
            else
            {
                stck.push(c);
            }
        }
    }

    return 0;
}