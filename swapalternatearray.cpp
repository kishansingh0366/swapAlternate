#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[6] = {7, 6, 5, 4, 3, 2};
    int size1 = 5;
    int size2 = 6;
    swapAlternate(arr, size1);
    printArray(arr, size1);
    cout << endl;

    swapAlternate(arr1, size2);
    printArray(arr1, size2);
}