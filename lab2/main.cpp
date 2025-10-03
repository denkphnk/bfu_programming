#include <iostream>
#include <cmath>


int main() {
  //�㭪� 1
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
      std::cout << "��� 0. ���᫥��� ����������" << std::endl;
    } else {
      int avg = (a + b + c) / 3;
      std::cout << avg << std::endl;
    }
  }
  
  // �㭪� 2
  int N;
  std::cin >> N;
  
  switch(N) {
    case 102: std::cout << "���㡫��� ��誮���⠭" << std::endl;break;
    case 11: std::cout << "���㡫��� ����" << std::endl;break;
    case 13: std::cout << "���㡫��� ��म���" << std::endl;break;
    case 15: std::cout << "���㡫��� ����ୠ� ���� ? ������" << std::endl;break;
    case 116: std::cout << "���㡫��� �����⠭" << std::endl;break;
    case 716: std::cout << "���㡫��� �����⠭" << std::endl;break;
    default: std::cout << "���ଠ�� �६���� ������㯭�" << std::endl;break;
  }


  return 0;
}