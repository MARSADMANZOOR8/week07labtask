#include<iostream>
using namespace std;
float calculateMoney(int age,int price1,int price2);
main()
{
    float count1=0;
    float count2=0;
    float count3=0;
    float sum;
    float sum1;
    int age;
    cout << "enter the age of the lilly " << endl;
    cin >> age;
    int price1;
    cout <<"enter the price of the washing machine " << endl;
    cin >> price1;
    int price2;
    cout <<"enter the price of the each toy " << endl;
    cin >> price2;
    float result;
    result =  calculateMoney( age, price1, price2);
    if (result > 0)
    {
        cout << "yes" << endl << result ;
    }
    else
    {
        cout << "no" << result << endl;
    }
}
float calculateMoney(int age,int price1,int price2)
{
     float count1=0;
    float count2=0;
    float count3=0;
    float sum=0;
    float sum1=0;
    float sum2=0;
    float sum3;
   for(int i=2 ; i<=age ; i = i + 2)
 {
    count1 = count1 + ( i * 5 );
    count2 = count2 + 1;
 }
 for (int i=1 ; i<=age ; i = i + 2)
 {
    count3 = count3 + 1;
 }

   sum = count1 - count2;
   sum2 = count3*price2;
   sum1 = sum + sum2;
   sum3 = sum1 - price1;

   return sum3 ;
}
