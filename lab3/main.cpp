#include <iostream>
#include <limits>

int main() {
    //Пункт 1
    std::cout << "Пункт 1" << std::endl;

    int N;
    double min_d;
    double sum = 0;
    int num;
    bool flag = false;

    std::cin >> N;
    min_d = std::numeric_limits<double>::max();

    for (int i = 0;i < N; ++i) {
        double d;
        std::cin >> d;
        
        if (d <= 10.12){
            sum += d;
            flag = true;
        } else {
            continue;
        }

        if (min_d > d) {
            min_d = d;
            num = i + 1;
        }
    }
    if (flag) {
        std::cout << "Sum = " << sum << std::endl;
        std::cout << "Min_d = " << min_d << std::endl;
        std::cout << "Num = " << num << "\n" << std::endl;
    } else {
        std::cout << "Некорректный ввод." << std::endl;        
    }
    
    //Пункт 2
    std::cout << "Пункт 2" << std::endl;

    int X;
    int index = -1;
    int i = 0;
    std::cin >> X;

    X = abs(X);

    while (X > 0) {
        int d = X % 10;
        if (d == 3 && index == -1) {
            index = i;
        }
        X /= 10;
        ++i;
    }


    if (index == -1) {
        std::cout << "В записи числа X нет цифры 3." << std::endl;
    } else {
        index = i - 1 - index;
        std::cout << "Index = " << index << std::endl;
    }

}