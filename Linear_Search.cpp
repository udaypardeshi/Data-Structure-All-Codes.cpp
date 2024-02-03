#include <iostream>
using namespace std;
class searchNumber
{
public:
    int searchnumber(int *arr, int a, int size)
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
};
int main()
{
    searchNumber obj;
    int *arr, a, size;
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
    if (obj.searchnumber(arr, a, size))
    {
        cout << "Element is Found =  " << a << endl;
    }
    else
    {
        cout << "Element is Not Found";
    }
}