#include <iostream>
using namespace std;
int frequency(int number,int digit,int count,int rem );
main()
{
    int number;
    cout << "enter the number whoose frequency you want to check " << endl;
    cin >> number ;
    int digit ;
    cout << "enter the digit  whoose frequency you want to check " << endl;
    cin >> digit;
    int rem;
    int count=0;
    int result;
    result = frequency( number, digit, count,rem );
    cout << " the frequency of the number is " <<  result ;
}
int frequency(int number,int digit,int count,int rem )
{
    while(number>0)
    {
       rem = number % 10;
       number = number / 10;
    if (rem==digit)
    {
      count = count + 1 ;
    }
    }
    return count;
}