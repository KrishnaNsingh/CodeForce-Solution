#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string p;
    cin >> p;
    vector<char> joke = {'H', 'Q', '9'};
    for (char x : p)
    {
        for (char y : joke)
        {
            if (x == y)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}