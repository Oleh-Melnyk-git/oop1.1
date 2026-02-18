#include "Bill.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  bill a;

  cout << "Введіть тривалість розмови: ";
  cin >> a.first;
  cout << "Введіть ціну за хвилину: ";
  cin >> a.second;

  cout << "Тривалість розмови: " << a.first << endl;
  cout << "Ціна за хвилину: " << a.second << endl;
  cout << "Вартість розмови: " << a.cost() << endl;

  return 0;
}