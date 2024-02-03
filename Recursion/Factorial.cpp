#include <iostream>
using namespace std;
class Factorial
{
  
    public:
   static int fact(int x)
    {
      if(x==1)
      {
        return 1;
      }
      else
      {
        return x*fact(x-1);
      }
    }
};
int main()
{
  int x,res;
  cout<<"Enter the Number = ";
  cin>>x;
  res=Factorial::fact(x);
  cout<<"Factorial = "<<res;
}


// void Factorial();
// void main()
// {
//     Factorial();
// }
// void Factorial()
// {
//     int n,i,Fact=1;
//     printf("Enter The Number = ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     Fact=Fact*i;
//     printf("Factorial = %d ",Fact);
// }