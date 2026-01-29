#include <iostream>
using namespace std;

int main()
{
    //Print Code description
    cout<<"Hello. This code converts a temperature entered in Fahrenheit (°F) into celsius (°C) and kelvin (°K). \n";
    //Create float variables
    float fahrenheit, celsius, kelvin;
    //Print prompt to enter temperature
    cout<<"Enter the temperature in degrees fahrenheit (°F). \n";
    //Input temperature in F
    cin>>fahrenheit;
    //Print repeat entered number and calculating
    cout<<"Converting "<<fahrenheit<<"°F into celsius and kelvin...";
    //Calculate new temperatures.
    celsius = (fahrenheit - 32) * 5.0 /9.0;
    kelvin = (fahrenheit - 32) / 1.8 + 273.15;
    //Print final temperatures
    cout<<"Final Temperatures: \n";
    cout<<"     Fahrenheit: "<<fahrenheit<<"°F \n";
    cout<<"     Celsius: "<<celsius<<"°C \n";
    cout<<"     Kelvin: "<<kelvin<<"°K \n"<<endl;
    return 0;
}
