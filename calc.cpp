#include <iostream>
using namespace std; 

int sub(int num1, int num2)
{
    return num1 - num2;
}

int qlus(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;
   
    cout << "Enter first number: " << endl;
    cin >> num1;
    
    cout << "Enter second number: " << endl;
    cin >> num2;
    
    int addition = qlus(num1, num2);
    int sub = sub(num1, num2);
    
    cout << "Addition is: " << addition << endl;
    cout << "Subtraction is: " << sub << endl;

    
    return 0;
}
