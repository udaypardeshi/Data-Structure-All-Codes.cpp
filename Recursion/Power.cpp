// #include <iostream>
// using namespace std;
// class Power
// {
//     static int power(int x, int pow)
//     {
//         if(pow==0)
//         {
//             return 1;
//         }
//         else
//         {
//             return x*power(x,pow-1);
//         }
//     }
// };
// int main()
// {
//     int x,res,pow;
//     cout<<"Enter The Number = ";
//     cin>>x;
//     cout<<"Enter The Power = ";
//     cin>>pow;
//     res=Power::power(x,pow);
//     cout<<"Output= "<<res;
// }

#include <iostream>
using namespace std;

class Power
{
public:
    static int power(int x, int pow)
    {
        if (pow == 0)
        {
            return 1;
        }
        else
        {
            return x * power(x, pow - 1);
        }
    }
};

int main()
{
    int x, res, pow;
    cout << "Enter The Number = ";
    cin >> x;
    cout << "Enter The Power = ";
    cin >> pow;
    res = Power::power(x, pow);
    cout << "Output = " << res;
    return 0;
}
