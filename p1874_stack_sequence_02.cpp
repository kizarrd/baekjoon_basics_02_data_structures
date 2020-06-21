#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int initDetector = t - 1;

    int push_next = 1;
    stack<int> stck;

    string str;

    while (t--)
    {
        int numToPop;
        cin >> numToPop;

        if (t == initDetector || stck.empty() || stck.top() < numToPop)
        {
            for (push_next; push_next <= numToPop; ++push_next)
            {
                stck.push(push_next);
                str += "+\n";
            }
            stck.pop();
            str += "-\n";
        }
        else if (numToPop < stck.top())
        {
            cout << "NO\n";
            return 0;
        }
        else if (numToPop == stck.top())
        {
            stck.pop();
            str += "-\n";
        }
    }

    cout << str;

    return 0;
}