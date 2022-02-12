#include <iostream>

using namespace std;
int main()
{
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "++x")
        {
            ++x;
        }

        else if (s == "--x" || s == "--X")
        {
            --x;
        }

        else if (s == "x++" || s == "X++")
        {
            x++;
        }

        else if (s == "X--" || s == "x--")
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}