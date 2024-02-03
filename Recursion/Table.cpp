#include <iostream>
using namespace std;
class Table
{
    public:
    static void table(int x, int i)
    {
        if(i==11)
        {
            return;
        }
        else
        {
          cout<<x<<" * "<<i<<" = "<<x*i<<endl;
          return table(x,i+1);
        }
    }
};
int main()
{
    int x,i=1;
    cout<<"Enter The Number = ";
    cin>>x;
    Table::table(x,i);
}