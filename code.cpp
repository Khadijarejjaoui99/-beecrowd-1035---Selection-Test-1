// Solution of 1035 - Selection Test 1 problem using c++ from beecrowd website
#include <iostream>

using namespace std;
int main ()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if ((B > C && D > A) && (C + D > A + B)
      && (C >= 0 && D >= 0) & (A % 2 == 0))
    cout << "Valores aceitos" << endl;
  else
    cout << "Valores nao aceitos" << endl;
  system("pause");
  return 0;
}
