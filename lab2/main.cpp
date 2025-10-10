#include <iostream>
#include <cmath>


int main() {
  //Пункт 1
  short A;
  int i;
  
  std::cin >> A >> i;
  if (i >= 0 && i < 8) {
    int bit = (A >> i) & 1;
    if (bit == 0) {
      if (A & 1) {
        A ^= (1 << i) | (1 << 0);
      }
      std::cout << A;
    } else {
      int a, b, c;
      std::cin >> a >> b >> c;
      a = abs(a);
      b = abs(b);
      c = abs(c);
      if (a == b || a == c || b == c) {
        std::cout << "Code 0. Calculating is impossible" << std::endl;
      } else {
        float avg = (a + b + c) / 3;
        std::cout << avg << std::endl;
      }
    }
  }

  // Пункт 2
  int N;
  std::cin >> N;
  
  switch(N) {
    case 102: std::cout << "Bashkortostan" << std::endl;break;
    case 11: std::cout << "Komi" << std::endl;break;
    case 13: std::cout << "Mordovia" << std::endl;break;
    case 15: std::cout << "North Ossetia-Alania" << std::endl;break;
    case 116: std::cout << "Tatarstan" << std::endl;break;
    case 716: std::cout << "Tatarstan" << std::endl;break;
    default: std::cout << "Information is temporarily unavailable" << std::endl;break;
  }


  return 0;
}