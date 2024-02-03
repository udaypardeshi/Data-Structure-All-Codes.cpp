#include <iostream>
using namespace std;
class Fibonacci
{
    public:
    static fib(int a,int b)
    {
        int c;
        if(a==1&&b==-1)
        {
            return 1;
        }
        else
        {
         c=a+b;
         b=a;
         a=c;
         cout<< c <<endl;
         return fib(a-1,b-1)
        }
    }
};
int main()
{
    int x, a=1, b=-1, res;
    cout<<"Enter The Number = ";
    cin>>x;
    res=Fibonacci::fib(a,b);
    cout<<"Fibonacci = "<<res;
}