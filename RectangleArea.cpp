#include <iostream>
using namespace std;

int main()
{
    //Print code description
    cout<<"Hello. This code will calculate the area of a rectangle using two variables. \n";
    //Declaring float variables
    float width, height, area;
    //Print out first command for width
    cout<<"Enter the width in feet for your rectangle. \n";
    //Input variable for width
    cin>>width;
    //Repeat entered width
    cout<<"Your width is "<<width<<" feet. \n";
    //Print second command for height
    cout<<"Enter the height in feet for your rectangle. \n";
    //Input variable for height
    cin>>height;
    //Repeat entered height
    cout<<"Your height is "<<height<<" feet. Calculating area... \n";
    //Calculate area variable
    area = width * height;
    //Print out result
    cout<<"The area of your rectangle is "<<area<<" feet²."<<endl;
    return 0;
}