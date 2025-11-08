#include <iostream>
#include <vector>
#include <limits>
#include <cmath>

int f(int a) {
 std::cout << "исп. функция обратного числа" << std::endl;
 return  -a;
}

int f(int a, int b) {
 std::cout << "исп. функция квадрата суммы двух чисел" << std::endl;
 return a * a + 2 * a * b + b * b;
}

void point1() {
 int arr[3];
 std::vector<int> vec;
 int vec_len = 0;

 // чтение списка
 for (int i = 0; i < 3; ++i) {
  std::cin >> arr[i];
 }
 // избавляемся от нулей
 for (int i = 0; i < 3; ++i) {
  if (arr[i] != 0) {
   vec.push_back(arr[i]);
   vec_len++;
  }
 }
 // функция для одного числа
 if (vec.size() == 1) {
  std::cout << f(vec[0]) << std::endl;
 }
 else if (vec.size() == 2) {   // функция для двух чисел
  std::cout << f(vec[0], vec[1]) << std::endl;
 }

}

void point2(int n1, int n2) {
 float ans = (float(n1) + n2) / 2;
 std::cout << "Середина интервала: " << ans << "\n\n";

 int intV = sizeof(int) * 8;
 int minInt = pow(2, intV - 1) * (-1);
 int maxInt = pow(2, intV - 1) - 1;


 std::cout << "int занимает " << intV << " бит.\n";
 std::cout << "min = " << minInt << "\nmax = " << maxInt << "\n\n";

 int floatV = sizeof(double) * 8;
 double minDouble = -std::numeric_limits<double>::max();
 double maxDouble = std::numeric_limits<double>::max();

 std::cout << "double занимает " << floatV << " бит.\n";
 std::cout << "min = " << minDouble << "\nmax = " << maxDouble << "\n";
}

int main() {
 setlocale(LC_ALL, "Russian");
 int point;
 std::cout << "Выберете пункт: ";
 std::cin >> point;

 if (point == 1) {
  point1();
 }
 else if (point == 2) {
  int n1, n2;
  std::cin >> n1 >> n2;
  point2(n1, n2);
 }
}
