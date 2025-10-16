#include <iostream>

int main() {
    //Пункт 1
    std::cout << "Пункт 1" << std::endl;

    {
        int NMax = 5 + 3;
        int arr[NMax];

        for (int i = 0; i < NMax; ++i) {
            int num;
            std::cin >> num;

            arr[i] = num;
        }

        int cnt = 0;
        for (int i = 0; i < NMax; ++i) {
            if (arr[i] == 25) {
                cnt++;
            }
        }

        if (cnt > 2) {
            for (int i = 0; i < NMax - 1; ++i) {
                for (int j = i + 1; j < NMax; ++j) {
                    if (arr[i] > arr[j]) {
                        std::swap(arr[i], arr[j]);
                    }
                }
            }
        }
        for (int i = 0; i < NMax; ++i) {
            std::cout << arr[i] << std::endl;
        }
    }
    //Пункт 2
    std::cout << "Пункт 2" << std::endl;

    {
        int NMax = 3;
        int MMax = 4;
        int max_zeros_index = -1;
        int max_zeros_cnt = 0;
        int arr[NMax][MMax];

        for (int i = 0; i < NMax; ++i) {
            for (int j = 0; j < MMax; ++j) {
                int num;
                std::cin >> num;

                arr[i][j] = num;
            }
        }

        for (int i = 0; i < NMax; ++i) {
            int cnt = 0;
            for (int j = 0; j < MMax; ++j) {
                if (arr[i][j] == 0) {
                    cnt += 1;
                }
            }
            if (max_zeros_cnt < cnt) {
                max_zeros_cnt = cnt;
                max_zeros_index = i;
            }
        }

        for (int j = 0; j < MMax; ++j) {
            if (arr[max_zeros_index][j] == 0)
                arr[max_zeros_index][j] = 888;
        }

        for (int i = 0; i < NMax; ++i) {
            for (int j = 0; j < MMax; ++j) {
                std::cout << arr[i][j] << " ";                
            }
            std::cout << std::endl;
        }

    }
}