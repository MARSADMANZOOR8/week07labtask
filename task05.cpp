#include<iostream>
using namespace std;
int digitsum(int number,int sum);
main()
{
    int number ;
    cout << "enter the number you want to check its sum " << endl ;
    cin >> number;
    int sum=0;
    int result;
    result = digitsum( number,sum);
    cout << "the sum of the digits is " << result << endl;
}
int digitsum(int number,int sum)
{
    int rem;
  while(number>0)
  {
    rem=number%10;
    number=number/10;
    sum=sum+rem;
  }
  return sum;

}

