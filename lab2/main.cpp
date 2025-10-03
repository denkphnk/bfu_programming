#include <iostream>
#include <cmath>


int main() {
  //пункт 1
  short A;
  int i;

  setlocale(LC_ALL, "Russian");
  
  std::cin >> A >> i;
  if (i >= 0 && i < 8) {
    int bit = (A >> i) & 1;
    std::cout << bit << std::endl;
  } else {
    int a, b, c;
    std::cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    if (a == b || a == c || b == c) {
      std::cout << "Код 0. Вычисление невозможно" << std::endl;
    } else {
      int avg = (a + b + c) / 3;
      std::cout << avg << std::endl;
    }
  }
  
  // пункт 2
  int N;
  std::cin >> N;
  
  switch(N) {
    case 102: std::cout << "Республика Башкортостан" << std::endl;break;
    case 11: std::cout << "Республика Коми" << std::endl;break;
    case 13: std::cout << "Республика Мордовия" << std::endl;break;
    case 15: std::cout << "Республика Северная Осетия ? Алания" << std::endl;break;
    case 116: std::cout << "Республика Татарстан" << std::endl;break;
    case 716: std::cout << "Республика Татарстан" << std::endl;break;
    default: std::cout << "Информация временно недоступна" << std::endl;break;
  }


  return 0;
}