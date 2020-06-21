#include <iostream>
#include <string>
using namespace std;

int main()
{

    // input # of testcases
    // if correct parantheses stream, print YES, if not, print NO

    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string str;
        cin >> str;
        int cntr = 0;
        for (char ch : str)
        {
            if (ch == '(')
            {
                // cout << "found (\n";
                cntr += 1;
            }
            else if (ch == ')')
            {
                cntr -= 1;
                if (cntr < 0)
                {
                    break;
                }
            }
        }
        if (cntr != 0)
            cout << "NO\n";
        else if (cntr == 0)
            cout << "YES\n";
    }

    // count # of (. if ( is found, increase the counter by 1
    // if ) is found, reduce by 1
    // if counter is negative, then something's wrong --> print NO
    // if counter is greater than zero at the end of the line, then there are more ( than ). therefore print NO
    // at the end of the line, print YES if counter is exactly zero.

    return 0;
}