#include<iostream>
using namespace std;
int HCF(int number1,int number2);
main()
{
    int number1;
    cout << "enter the number " << endl;
    cin >> number1;
    int number2;
    cout << "enter the number " << endl;
    cin >> number2;
    int result;
    result = HCF(number1,number2);
    cout << "the hcf of the two numbers is : " << result << endl;
    int calculate_LCM;
    calculate_LCM = (number1 * number2 / result);
    cout << " the LCM OF THE TWO NUMBER IS " << calculate_LCM  << endl ;


}
int HCF(int number1,int number2)
 {
   while(number1 != number2 )
   {
    if (number1 > number2)
    {
    number1 = number1 - number2;
    return number1;
    }
    else 
    {
    number2 = number2 - number1;
    return number2;
    }
    
   }
 }
