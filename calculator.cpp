#include <iostream>

using namespace std;

int main()

{

    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers, prodOfTwoNumbers;
 

    cout << "Enter first number: ";

    cin >> firstNumber;

    cout << "Enter second number: ";

    cin >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;

    // Prints sum 

    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNumbers;     
    cout << endl << firstNumber << " x " <<  secondNumber << " = " << prodOfTwoNumbers;     

    return 0;

}