#include <iostream>
using namespace std;
class SumofSeries
{
    public:
    static int sos(int x)
    {
        if(x==1)
        {
            return 1;
        }
        else
        {
            return x+sos(x-1);
        }
    }
};
int main()
{
    int x,res;
    cout<<"Enter The Number = ";
    cin>>x;
    res=SumofSeries::sos(x);
    cout<<"Sum of Series = "<<res;
}
