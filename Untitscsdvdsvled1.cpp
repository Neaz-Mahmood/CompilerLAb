#include<bits/stdc++.h>
using namespace std;

void comment(string lane)
{
    if (lane[0] == '/' && lane[1] == '/' && lane[2] != '/') {

        cout << "single line comment";
        return;
    }

    if (lane[lane.size() - 2] == '*' && lane[lane.size() - 1] == '/') {

        cout << "multi line comment";
        return;
    }

    cout << "It is not a comment";
}

int main()
{
    string line;
    cin >> line;
    comment(line);
    return 0;
}
