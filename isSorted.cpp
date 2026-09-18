#include <iostream>
#include <cassert>
using namespace std;

// Function declaration
bool isSorted(const int* arr, const int size);

// Test 1: Already sorted array
void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 2: Unsorted array
void testUnsortedArray()
{
    int arr[] = {1, 4, 3, 5, 6};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

// Temporary implementation
// This is intentionally incomplete for TDD demonstration
bool isSorted(const int* arr, const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    testSortedArray();
    testUnsortedArray();

    cout << "All tests passed!" << endl;

    return 0;
}