#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnta(0);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
                cnta++;
        }

        if (cnta > 2)
        {
            cout << "A" << endl;
        }
        else
            cout << "B" << endl;
    }
}