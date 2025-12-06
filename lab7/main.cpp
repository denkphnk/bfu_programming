#include <iostream>
#include <vector>
#include <array>

using vector = std::vector<int>;

void show_vector(vector vec) {
    if (vec.size() > 1) {    
        std::cout << "[";
        int j;
        for (int i = 0; i < vec.size() - 1; i++) {
            std::cout << vec[i] << " ";
            j = i;
        } std::cout << vec[j+1] << "]" << std::endl;
    } else if (vec.size() == 1) {
        std::cout << "[" << vec[0] << "]" << std::endl;
    } else {
        std::cout << "[]" << std::endl;
    }
}

void show_array(std::array<int, 10> arr) {
    std::cout << "[";
    int j;
    for (int i = 0; i < arr.size() - 1; i++) {
        std::cout << arr.at(i) << " ";
        j = i;
    } std::cout << arr.at(j+1) << "]" << std::endl;
}


void insert_to_begin(vector& vec) {
    int value;
    std::cout << "Введите значение: ";std::cin >> value;
    vec.insert(vec.begin(), value);
}

void insert_to_end(vector& vec) {
    int value;
    std::cout << "Введите значение: ";std::cin >> value;
    vec.push_back(value);
}

void find(vector vec) {
    vector indexies = {};
    int value;
    std::cout << "Введите значение: ";std::cin >> value;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) {
            indexies.push_back(i);
        }
    }
    show_vector(indexies);
}

void point1(vector& vec) {
    int k;
    int sum = 0;
    int i = 1;
    std::cout << "Введите положительное значение: ";std::cin >> k;
    while (sum < k) {
        sum += i;
        i++;
    }
    if (sum == k) {
        for (int j = 1; j < i; j++) {
            vec.push_back(j);
        }
    } else {
        int len = vec.size();
        for (int j = 0; j < len; j++) {
            if (j % 2 == 0) {
                vec.push_back(vec[j]);
            }
        }
    }
}

void sort_by_value(std::array<int, 10> arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    show_array(arr);
}

void sort_by_reference(std::array<int, 10>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    show_array(arr);
}

void sort_by_pointer(std::array<int, 10>* arr) {
    for (int i = 0; i < arr->size() - 1; ++i) {
        for (int j = i + 1; j < arr->size(); ++j) {
            if ((*arr)[i] > (*arr)[j]) {
                std::swap((*arr)[i], (*arr)[j]);
            }
        }
    }
    show_array(*arr);
}

int main() {
    std::cout << "Пункт 1" << std::endl;
    int choice = 1;
    vector vec = {1, 2, 3, 4, 5, 6};

    while (choice != 0) {
        std::cout << "0. Выход" << std::endl;
        std::cout << "1. Просмотр массива" << std::endl;
        std::cout << "2. Добавить элемент в начало" << std::endl;
        std::cout << "3. Добавить элемент в конец" << std::endl;
        std::cout << "4. Очистка всего массива" << std::endl;
        std::cout << "5. Поиск элемента в массиве" << std::endl;
        std::cout << "6. Задание варианта (пункт 1)" << std::endl;
        std::cout << "7. Задание варианта (пункт 2)" << std::endl;std::cout << ">>> ";
        std::cin >> choice;

        if (choice == 1) {
            show_vector(vec);
        } else if (choice == 2) {
            insert_to_begin(vec);
        } else if (choice == 3) {
            insert_to_end(vec);
        } else if (choice == 4) {
            vec = {};
        } else if (choice == 5) {
            find(vec);
        } else if (choice == 6) {
            point1(vec);
        }
    }
    std::cout << "Пункт 2" << "\n" << std::endl;

    std::array<int, 10> arr = {3, 6, -4, 0, 10, -9, -5, 3, 5, 7};
    
    std::cout << "Передача по значению" << std::endl;
    sort_by_value(arr); //не изменяет arr, создает копию
    std::cout << "Передача по ссылке" << std::endl;
    sort_by_reference(arr); //изменяет arr
    arr = {3, 6, -4, 0, 10, -9, -5, 3, 5, 7};
    std::cout << "Передача по указателю" << std::endl;
    sort_by_pointer(&arr); //изменяет arr
    
}