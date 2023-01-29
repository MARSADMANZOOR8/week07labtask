#include <iostream>
using namespace std;
int counting(int number, int count );
main()
{
    int number;
    cout << "enter a number " ;
    cin >> number;
    int count=0;
    int result;
    result =  counting (number,count );
    cout << " the number of digits in a number " << result << endl;
}
int counting(int number, int count )
{
    while(number>0)
    {
        number = number/10;
        count = count + 1;
    }
    return count;
}