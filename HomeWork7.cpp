#include <iostream>


using namespace std;

int LinearSearch(const int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key) return i;
    }
    return -1;
}

int BinarySearch(const int array[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (array[middle] == key) return middle;
        if (array[middle] < key) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int BinaryToDecimal(long long binary)
{
    int decimal = 0;
    int powerOfTwo = 1;

    while (binary > 0)
    {
        decimal += static_cast<int>(binary % 10) * powerOfTwo;
        powerOfTwo *= 2;
        binary /= 10;
    }
    return decimal;
}

int main()
{


    const int size = 10;
    int unsorted[size] = { 4, 8, 1, 12, 3, 9, 5, 15, 7, 2 };
    int sorted[size] = { 1, 2, 3, 4, 5, 7, 8, 9, 12, 15 };
    int key;

    // Task 1
    cout << "Linear search key: ";
    cin >> key;
    cout << "Index: " << LinearSearch(unsorted, size, key) << '\n';
    // Task 2
    cout << "Binary search key: ";
    cin >> key;
    cout << "Index: " << BinarySearch(sorted, size, key) << '\n';
    // Task 3
    long long binary;
    cout << "Binary number: ";
    cin >> binary;
    cout << "Decimal: " << BinaryToDecimal(binary) << '\n';

    return 0;
}
