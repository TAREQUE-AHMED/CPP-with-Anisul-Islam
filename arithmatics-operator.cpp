#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "Sum is: " << sum;
    cout << endl;

    int sub = num1 - num2;
    cout << "Substraction is: " << sub;
    cout << endl;

    int mul = num1 * num2;
    cout << "Multipilation is: " << mul;
    cout << endl;

    double div = (float) num1 / num2;
    cout << "Division is: " << div;
    cout << endl;

    int rem = num1 % num2;
    cout << "Remainder is: " << rem;
    cout << endl;

    return 0;
}