#include<iostream>
using namespace std;
main()
{
    int numberlines;
    cout << "enter the number of the lines      " << endl ;
    cin >> numberlines;
       int count1=0;
       int count2=0;
       int count3=0;
       int count4=0;
       int count5=0;
     for (int i=1 ; i<=numberlines ; i = i +1)
    {  
        int number;
        cout << "enter the number " << endl ;
        cin >> number;
        
        if (number >0 && number<200)
        {
           
            count1 = count1 + 1;

        }
                if (number >200 && number<400)
        {
         
            count2 = count2 + 1;
             
        }
                if (number >400 && number<600)
        {
            
            count3 = count3 + 1;
             
        }
                if (number>600 && number<800)
        {
            
            count4 = count4 + 1;
             
        }
                if (number>800 && number<100)
        {
         
            count5 = count5 + 1;
             
        }
   }
   cout << count1 <<endl;
   cout << count2 <<endl;
   cout << count3 <<endl;
   cout << count4 <<endl;
   cout << count5 <<endl;
    float percentage1;
    float percentage2;
    float percentage3;
    float percentage4;    
    float percentage5;    

    percentage1 = (count1*100) / numberlines;
    percentage2 = (count2*100) / numberlines;
    percentage3 = (count3*100) / numberlines;
    percentage4 = (count4*100) / numberlines;
    percentage5 = (count5*100) / numberlines;
cout << "the result is ............." << percentage1 <<endl;
cout << "the result is ............." << percentage2 <<endl;
cout << "the result is ............." << percentage3 <<endl;
cout << "the result is ............." << percentage4 <<endl;
cout << "the result is ............." << percentage5 <<endl;
}