#include <iostream>

using namespace std;
void printArray(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ,";
    cout << endl;
}

void Arrayreverse(int ar[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(ar[s], ar[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[6] = {10, 24, 5, 8, 11, 56};
    int brr[5] = {23, 4, 78, 2, 13};

    Arrayreverse(arr, 6);
    Arrayreverse(brr, 5);

    printArray(arr, 6);

    printArray(brr, 5);

    return 0;
}