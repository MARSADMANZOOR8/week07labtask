#include<iostream>
using namespace std;
void printprecentage(int number);
main()
{
    int number;
    cout << "enter the number of the lines on which you want to enter the number " << endl;
    cin >> number;
    int  num;
    float percentage1;
    float percentage2;
    float percentage3;
    float percentage4;
    float percentage5;
    
    
    printprecentage( number);
    
}
void printprecentage(int number)
{
   int  num;
   int count1=0 , count2=0 ,count3=0,count4=0,count5=0;
    float percentage1;
    float percentage2;
    float percentage3;
    float percentage4;
    float percentage5;
    for (int i = 1 ; i <= number;i++)
    {
        cout << "enter the integer " << endl ;
        cin >> num;
    
    if (num>=0 && num <= 199)
    {
        count1 = count1 + 1;
    }
     else if (num>=200 && num <= 399)
    {
        count2 = count2 + 1;
    }
     else if (num>=400 && num <=599)
    {
        count3 = count3 + 1;
    }
     else if (num>=600 && num <= 799)
    {
        count4 = count4 + 1;
    }
     else if (num>=800 && num <= 999)
    {
        count5 = count5 + 1;
    }
    }   
    cout << count1 << endl; 
    cout << count2 << endl; 
    cout << count3 << endl; 
    cout << count4 << endl; 
    cout << count5 << endl; 
    percentage1 = (count1 / 100) *100;
    cout << percentage1 << endl;
    percentage2 = (count2 / num ) * 100;
    cout << percentage2 << endl;
    percentage3 = (count3 / num ) * 100;
    cout << percentage3 << endl; 
    percentage4 = (count4 / num ) * 100;
    cout << percentage4 << endl ;
    percentage5 = (count5 / num ) * 100;
    cout << percentage5 << endl ;

    
}