#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 97]++;
        }

        int index = -2;

        for(int i = 0; i < s.length(); i++)
        {
            if(freq[s[i] - 97] == 1) {
                index = i;
                break;
            }
        }

        if(index != -2) {
            return index;
        }
        else {
            return -1;
        }
    }
};

int main()
{
    Solution unique_char;
    string s;

    cin >> s;

    int result = unique_char.firstUniqChar(s);

    cout << result << endl;

    return 0;
}