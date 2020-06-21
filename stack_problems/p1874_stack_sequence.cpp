#include <iostream>
#include <stack>

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

    while (t--)
    {
        int numToPop;
        cin >> numToPop;

        if (t == initDetector || stck.empty() || stck.top() < numToPop)
        {
            for (push_next; push_next <= numToPop; ++push_next)
            {
                stck.push(push_next);
                cout << "+\n";
            }
            stck.pop();
            cout << "-\n";
        }
        else if (numToPop < stck.top())
        {
            cout << "NO\n";
            break;
        }
        else if (numToPop == stck.top())
        {
            stck.pop();
            cout << "-\n";
        }
    }

    return 0;
}