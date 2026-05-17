#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {3, 1, 4, 1, 5, 9, 7, 2, 6, 5, 3, 5};
    int count = 0;
    bool is_already_counted;

    for(int i = 0; i < arr.size(); i++)
    {
        count = 0;
        is_already_counted = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                is_already_counted = true;
            }
        }

        if(is_already_counted)
        {
            continue;
        }

        for(int k = 0; k < arr.size(); k++) {
            if(arr[i] == arr[k])
            {
                count++;
            }
        }

        cout << arr[i] << " - " << count << " times"<< endl;
    }
    return 0;
}