// print numbers from N to 1
#include <iostream>
using namespace std;

void rec(int n)
{
  if (n < 1)
  {
    return;
  }
  cout << n << endl;
  rec(n - 1);
}

int main()
{
  int n;
  cout << "Enter your number ";
  cin >> n;
  rec(n);
  return 0;
}