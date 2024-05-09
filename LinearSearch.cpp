// Program to search element from aray
#include <iostream>
using namespace std;
int main()
{
    int n, i, key, flag=0, loc;
    cout << "Enter the Size of the Array==";
    cin >> n;
    int a[n];
    cout << "Enter the Array Elements==";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Key to be Searched==";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            loc = i;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "!Search Successful! Element Found at " << loc + 1;
    }
    else
    {
        cout << "!Search Unsuccessful! Element NotFound ";
    }
}
