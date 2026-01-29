#include <iostream>
using namespace std;

int main()
{
    //Define float variable
    float mo1, mo2, mo3, mo4, mo5, mo6, average;
    //Print Description
    cout<<"Hello. This is a code that takes six values of monthly grocery costs and calculates an average grocery cost. \n";
    //Print instructions
    cout<<"Directions: Enter six numbers, decimals included if needed, with one space in between each and no dollar sign. \n";
    cout<<"Enter six grocery costs below: \n";
    //Collect input from user
    cin>>mo1>>mo2>>mo3>>mo4>>mo5>>mo6;
    //Display calculating text
    cout<<"Calculating Values... \n";
    //Calculate average grocery cost
    average = (mo1 + mo2 + mo3 + mo4 + mo5 + mo6) / 6;
    //Display individual monthly costs along with average cost
    cout<<"\n Month 1 cost: $"<<mo1<<"\n Month 2 cost: $"<<mo2<<"\n Month 3 cost: $"<<mo3<<"\n month 4 cost: $"<<mo4<<"\n Month 5 cost: $"<<mo5<<"\n Month 6 cost: $"<<mo6<<"\n \n Average Monthly Grocery cost: $"<<average<<endl;
    return 0;

}