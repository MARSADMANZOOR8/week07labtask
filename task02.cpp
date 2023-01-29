#include <iostream>
using namespace std;
main()
{
    int number1;
    number1 = 0;
    int number2;
    number2 = 1;
    int next;
    int num;
    cout << "enter the number of the fibnoacci series " << endl;
    cin >> num;
     for(int i = 1 ; i <= num ; i = i + 1 )
    {
        cout << number1 << endl;
        next = number1 + number2;
        number1 = number2;
        number2 = next;
        
    }
}

