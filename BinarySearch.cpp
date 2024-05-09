// Program to search element from array
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
    int begin = 0;
    int end = n - 1;
    int mid = int((begin +end)/2);
    cout << "Enter the Element to be Searched==";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (key == a[mid])
        {
            flag = 1;
            loc = i;
            break;
        }
        else if (key<=a[mid])
        {
            end = mid - 1;
        }
        else if(key>=a[mid]){
            begin = mid + 1;
        }
        else
        {
            cout<<"!!Search Unsuccessful!! Number not found!";
        }
        mid = int((begin +end)/2);
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
