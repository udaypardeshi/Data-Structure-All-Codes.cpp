#include <iostream>
using namespace std;
class Searching
{
public:
    // static
     int binarysearch(int *arr, int a, int size)
    {
        int beg = 0, end = size - 1, mid = (beg + end) / 2;
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
    Searching obj;
    int *arr;
    int a, size;
    int i;
    cout << "Enter The Size of Array = " << endl;
    cin >> size;

    cout << "Enter The Element of Array " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter The data which you find in array" << endl;
    cin >> a;
    // if (Searching::binarysearch(arr, a, size))  you can used static keyword then used this line or removed object line or object condition
    if(obj.binarysearch(arr,a,size))
    {
        cout << "Element is Found =  " << a << endl;
    }
    else
    {
        cout << "Element is Not Found";
    }
}