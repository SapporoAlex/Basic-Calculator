#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Calculator {
  private:
  T result;

public:
T add(T num1, T num2)
{
  return num1 + num2;
}

T subtract(T num1, T num2)
{
  return num1 - num2;
}

T divide(T num1, T num2)
{
    if(num2 == 0) {
    cerr << "Error: Cannot divide by zero" << endl;
    return 0;
    }
    else {
  return num1 / num2;
    }
}

T multiply(T num1, T num2)
{
  return num1 * num2;
}

T modulus(T num1, T num2)
{
    if constexpr (is_integral<T>::value) {
      if (num2 == 0) {
        cerr << "Error: num 2 must be greater than 0" << endl;
        return 0;
      }
      return num1 % num2;
    }
    else {
      cerr << "Error: Must be integers!" << endl;
      return 0;
    }
  }
};

int main(){
  bool running = true;
  while (running) {
    Calculator<int> calc;
    int num1 = 0;
    int num2 = 0;
    cout << "   Calculator   " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Divide" << endl;
    cout << "4. Multiply" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;
    int choice = 0;
    cin >> choice;

  if (choice < 1 || choice > 6) {
    cerr << "Invalid choice! Please try agian" << endl;
    continue;
  }
  if (choice == 6) {
    cout << "Goodbye" << endl;
    running = false;
    break;
  }

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
  switch (choice) {
    case 1: 
      cout << "result of adding " << to_string(num1) << " and " << to_string(num2) << " is " << calc.add(num1, num2) << endl;
      break;
    case 2: 
      cout << "result of subrtacting " << to_string(num2) << " from " << to_string(num1) << " is " << calc.subtract(num1, num2) << endl;
      break;
    case 3: 
      cout << "result of dividing " << to_string(num1) << " by " << to_string(num2) << " is " << calc.divide(num1, num2) << endl;
      break;
    case 4: 
      cout << "result of multiplying " << to_string(num1) << " by " << to_string(num2) << " is " << calc.multiply(num1, num2) << endl;
      break;
    case 5: 
      cout << "result of modulus " << to_string(num1) << " by " << to_string(num2) << " is " << calc.modulus(num1, num2) << endl;
      break;
    default:
    cerr << "Unexpected error!" << endl;
    break;
  }
  }

  return 0;
}
