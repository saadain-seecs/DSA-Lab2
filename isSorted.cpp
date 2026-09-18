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

// Test 3: Sorted array with duplicate values
void testDuplicateValues()
{
    int arr[] = {1, 2, 2, 3, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 4: Single element
void testSingleElement()
{
    int arr[] = {10};

    bool result = isSorted(arr, 1);

    assert(result == true);
}

// Test 5: Descending array
void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

// Test 6: Negative values
void testNegativeValues()
{
    int arr[] = {-5, -3, -1, 0, 2};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 7: All equal values
void testAllEqual()
{
    int arr[] = {7, 7, 7, 7};

    bool result = isSorted(arr, 4);

    assert(result == true);
}

// Test 8: Negative unsorted array
void testNegativeUnsorted()
{
    int arr[] = {-1, -5, 0, 2};

    bool result = isSorted(arr, 4);

    assert(result == false);
}

// Actual implementation
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
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testNegativeUnsorted();

    cout << "All tests passed successfully!" << endl;

    return 0;
}