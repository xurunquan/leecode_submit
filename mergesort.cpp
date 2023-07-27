#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int *b = new int[high - low + 1];
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= high)
        b[k++] = a[j++];
    for (i = low, k = 0; i <= high; i++)
        a[i] = b[k++];
    delete[] b;
}
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[8] = {42, 15, 20, 6, 8, 38, 50, 12};
    for (int i = 0; i < 8; i++)
        cout << a[i] << ' ';
    cout << endl;
    mergeSort(a, 0, 7);
    for (int i = 0; i < 8; i++)
        cout << a[i] << ' ';
    system("pause");
    return 0;
}