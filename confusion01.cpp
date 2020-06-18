#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str == "push")
    {
        int data;

        printf("it's push, so im gonna scan one more\n");
        scanf("%d", &data);
        printf("it's done. scanned number is: %d", data);
    }
    return 0;
}