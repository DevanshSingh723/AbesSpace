#include <bits/stdc++.h>
using namespace std;
 
// function for implementing bubble sort
void bubbleSort(int ar[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (ar[j] > ar[j + 1])
                swap(ar[j], ar[j + 1]);
}
 
// Print an array
void printarr(int ar[], int size)
{
    
    for ( int i = 0; i < size; i++)
        cout << ar[i] << " ";
    cout << endl;
}
 
int main()
{
    int ar[] = { 5, 1, 4, 2, 8};
    int N = sizeof(ar) / sizeof(ar[0]);
    bubbleSort(ar, N);
    cout << "Sorted array: \n";
    printarr(ar, N);
    return 0;
}