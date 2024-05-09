#include <iostream>
#include <algorithm>
using namespace std;
void mergeSort(int list1[], int size1, int list2[], int size2, int list3[]) {
    int i = 0,j= 0, k=0;
    while (i < size1 && j < size2) 
    {
        if (list1[i] < list2[j]) 
        { 
            list3[k++] = list1[i++]; 
        } 
        else 
        { 
            list3[k++]= list2[j++];
        } 
    }
    while (i < size1) {
         list3[k++] = list1[i++];
    } while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main (){
    int list1[6] = {6, 2, 9, 5, 4, 8};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int list2[6] = {6, 2, 9, 5, 4, 8};
    int size2 = sizeof(list2)/ sizeof(list2[0]);
    sort(list1, list1 + size1); 
    sort(list2, list2 + size2);
    int size3 = size1 + size2;
    int list3[size3];
    mergeSort(list1, size1, list2, size2, list3);
    cout << "Sorted list is==";
    for (int i=0; i < size3; ++i) {
     cout << list3[i]<<"";
    cout << endl;
    }
    return 0;
}
