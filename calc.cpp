#include <iostream>
using namespace std; 

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
    
    int answer = qlus(num1, num2);
    
    cout << "The result is " << answer << endl;
    
    return 0;
}
