// cpp program to bobble sort

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, key, flag = 0, loc;
    cout << "Enter the Size of the Array==";
    cin>> n;
    int a[n];
    cout << "Enter the Array Elements==";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1; j++)
        {
            if (a[j]<a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    cout << "Array Elements Are==";
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}