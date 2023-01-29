#include<iostream>
using namespace std;
int showsum();
main()
{
 int total;
 total = showsum();
 cout << total << endl ;
 }
int showsum()
{
    int sum = 0;
    for (int i = 1 ; i <= 100  ; i = i + 1 )
    {
        sum = sum + i ;
    }
    return sum;
}