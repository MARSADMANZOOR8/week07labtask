#include<iostream>
using namespace std;
float calculatePrice(float price,int year);
main()
{
    float price;
    cout << " enter the price " << endl;
    cin >> price;
    int year;
    cout << " enter the year in which untill the man live in past " <<  endl;
    cin >> year ;
    int result ;
    result =  calculatePrice( price,year);
    if (result>0)
    {
        cout << " yes ! he will live a careful life and will have " << endl ;
        cout  << result;
    }
    else
    {
        cout << "he does not have the enough time " << endl << result ;
    }
}
float calculatePrice(float price,int year)
{
    int count1=0;
    int count2=0;
    float amount1=0;
    float amount2=0;
    float amount3=0;
    float amount4=0;
    float amount5=0;
    for (int i=1800 ; i <= year ; i = i + 1)
    {
        if (year%2==0)
        {
            count1=count1+1;
           amount1=count1 * 12000;
        }
        if (year%2!=0)
        {
            count2=count2+1;
            amount2=count2 * 12000;
        }
    }
    amount3 =  (year - 1800 ) * 50;
    amount4 =  amount3 + amount2 + amount1;
    amount5 =  price - amount4;
    return amount5;
}