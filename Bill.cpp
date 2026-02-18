#include "Bill.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  bill a;

  do {
    cout << "Введіть тривалість розмови: ";
    cin >> a.first;
    cout << "Введіть ціну за хвилину: ";
    cin >> a.second;

    if (a.first <= 0 || a.second <= 0) {
      cout << "Некоректні дані! Спробуйте ще раз.\n\n";
    }
  } while (a.first <= 0 || a.second <= 0);

  cout << "Тривалість розмови: " << a.first << endl;
  cout << "Ціна за хвилину: " << a.second << endl;
  cout << "Вартість розмови: " << a.cost() << endl;

  return 0;
}