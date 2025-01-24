// Class_Activity_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    num1 = 3, num2 = 7;

    cout << "Before switch number1 = " << num1 << " and number2 = " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After switch number1 = " << num1 << " and number2 = " << num2 << endl;

}
