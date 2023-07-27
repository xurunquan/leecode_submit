#include <iostream>
using namespace std;

void swap(int &low, int &high)
{
    int temp = low;
    low = high;
    high = temp;
}

int partition(int a[], int low, int high)
{
    int i = low, j = high, pivot = a[low];
    while (i < j)
    {
        while (i < j && a[j] > pivot)
            j--;
        if (i < j)
            swap(a[i++], a[j]);
        while (i < j && a[i] <= pivot)
            i++;
        if (i < j)
            swap(a[i], a[j--]);
    }
    return i;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = partition(a, low, high);
        quicksort(a, low, mid);
        quicksort(a, mid + 1, high);
    }
}

int main()
{
    int a[8] = {42, 15, 20, 6, 8, 38, 50, 12};
    for (int i = 0; i < 8; i++)
        cout << a[i] << ' ';
    cout << endl;
    quicksort(a, 0, 7);
    for (int i = 0; i < 8; i++)
        cout << a[i] << ' ';
    system("pause");
    return 0;
}