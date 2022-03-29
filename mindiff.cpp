//Code to find minimum difference between two elements in an array!



#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter size of array" << endl;
    int n;
    cin >> n;
    vector<int> array(n);
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int minimum = abs(array[0]);
    for (int i = 0; i < n - 1; i++)
    {
        minimum = min(abs(array[i + 1] - array[i]), minimum);
    }
    cout << minimum << endl;
}