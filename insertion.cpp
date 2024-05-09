// // cpp program to bobble sort

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, j, key, flag = 0, loc;
//     cout << "Enter the Size of the Array==";
//     cin >> n;
//     int a[n];
//     cout << "Enter the Array Elements==";
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         int min = a[i];
//         int loc = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (min > a[j])
//             {
//                 min = a[j];
//                 loc = j;
//             }
//         }
//         int temp = a[i];
//         a[i] = a[loc];
//         a[loc] = temp;
//     }
//     cout << "The Sorted Array is==";
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int n, i, j, key, flag = 0, loc;
    cout << "Enter the Size of the Array==";
    cin >> n;
    int a[n];
    cout << "Enter the Array Elements==";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        int max = a[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (max < a[j])
            {
                max = a[j];
                loc = j;
            }
        }
        int temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }
    cout << "The Sorted Array is==";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
