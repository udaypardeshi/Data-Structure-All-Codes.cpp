#include <iostream>
using namespace std;
class Sorting
{
public:
    static int bubbleSort(int* arr, int a, int size)
    {
        int temp, i;
        for (i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Element After Bubble Sorting = ";
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
        return 0;
    }
};
class Searching
{
public:
    int static linearSearch(int* arr, int a, int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == a)
            {
                return 1;
            }
        }
        return 0;
    }
    int static binarysearch(int* arr, int a, int size)
    {
        int beg = 0, end = size - 1, mid = (beg + end) / 2;
        Sorting::bubbleSort(arr, a, size);
        while (beg <= end)
        {
            if (arr[mid] < a)
            {
                beg = mid + 1;
            }
            else if (arr[mid] > a)
            {
                end = mid - 1;
            }
            else if (a == arr[mid])
            {
                return 1;
            }
            mid = (beg + end) / 2;
        }
        return 0;
    }
};

int main()
{
    int a, size, i;
    cout << "Enter The Size of Array = ";
    cin >> size;
    cout << "Enter The Element of Array " << endl;
    int* arr = new int (size);
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Sorting::bubbleSort(arr, a, size);
}
