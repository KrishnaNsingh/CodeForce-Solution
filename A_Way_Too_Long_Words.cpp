#include <iostream>
using namespace std;

int main()
{
    int total;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        string word;
        cin >> word;
        int num = word.size();
        if (num <= 10)
        {
            cout << word << endl;
        }
        else
        {
            int first = word[0];
            int last = word[num - 1];
            string ans = "";
            ans += first;
            ans += to_string(num - 2);
            ans += last;
            cout << ans << endl;
        }
    }
    return 0;
}