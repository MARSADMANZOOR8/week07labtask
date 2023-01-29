#include <iostream>
using namespace std;
main()
{
int number;
cout << "enter the numbers of the terms" << endl;
cin >> number;
int sum=0;
  for(int i = 1 ; i<=number ;i = i + 1 )
   {
     sum = sum + i ;
   }
   cout << "the sum of the number" << endl <<  sum ;
}