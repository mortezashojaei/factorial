#include <iostream>
using namespace std;

class Factorial
{
public:
  int calculate(int input)
  {
    if (input <= 1)
    {
      return 1;
    };
    return calculate(input - 1) * input;
  };
};

class AppManager
{
public:
  void run()
  {
    int inputNumber;
    cout << "Enter Your int Number:";
    cin >> inputNumber;

    Factorial factorial;
    int result = factorial.calculate(inputNumber);
    cout << "\n";
    cout << "Result Value :\n";
    cout << result;
    cout << "\n";
  }
};

int main()
{
  AppManager app;
  app.run();
  return 0;
}