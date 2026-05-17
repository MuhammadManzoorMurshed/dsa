#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {3, 1, 4, 1, 5, 9, 7, 2, 6, 5, 3, 5};
    int max_value = *max_element(arr.begin(), arr.end());
    vector<int> freq(max_value + 1, 0);

    for(int x: arr)
    {
        freq[x]++;
    }

    for(int i = 0; i < max_value; i++)
    {
        if(freq[i] > 0)
        {
            cout << i << " - " << freq[i] << " times" << endl;
        }
    }

    return 0;
}