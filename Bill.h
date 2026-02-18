#ifndef BILL_H
#define BILL_H

class bill {
public:
  double first;  // тривалість розмови (хвилини)
  double second; // ціна за хвилину

  double cost();
};

#endif