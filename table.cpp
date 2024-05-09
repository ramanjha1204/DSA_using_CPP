#include <iostream>
using namespace std;
int countone()
{
    int count = 0;
    for(int i = 0; i < 32; i++)
    {
        if(a[i] == '1')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char [32];
    cout<<"enter string ";
    cin>> char;
    

    countone();

}