#include <iostream>

//пункт 1

int* addIndex(int* arr, int& size, int col) {
    int* newArr = (int*)calloc(size + 1, sizeof(int));
    
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    bool flag = false;
    for (int i = 0; i < size; i++) {
        if (newArr[i] == col) {
            flag = true;
        }
    }

    if (!flag) {
        newArr[size] = col;
        size++;
    }

    free(arr);
    return newArr;
}


int** addRows(int** arr, int& rows, int cols) {
    int** newArr = (int**)calloc(rows + arr[0][0], sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        newArr[i] = arr[i];
    }


    for (int i = rows; i < rows + arr[0][0]; i++) {
        newArr[i] = (int*)calloc(cols, sizeof(int));
    }

    for (int i = rows; i < rows + arr[0][0]; i++) {
        for (int j = 0; j < cols; ++j) {
            newArr[i][j] = arr[1][0] * (i - rows + 1) + arr[1][1] * ((j - 1));
        }
    }

    rows += arr[0][0];
    free(arr);
    return newArr;
}


int** addCols(int** arr, int rows, int& cols) {
    for (int i = 0; i < rows; i++) {
        int* newRow = (int*)calloc(cols + arr[0][1], sizeof(int));

        for (int j = 0; j < cols; j++) {
            newRow[j] = arr[i][j];
        }

        for (int j = cols; j < cols + arr[0][1]; j++) {
            newRow[j] = arr[1][0] * (i - 1) + arr[1][1] * (j - cols + 1);
        }

        free(arr[i]);
        arr[i] = newRow;
    }

    cols += arr[0][1];
    return arr;
}

int* find_zeros(int** arr, int rows, int cols, int& size) {
    int* ind = (int*)calloc(size, sizeof(int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                ind = addIndex(ind, size, j);
            }
        }
    }

    return ind;
}


int** rm_zeros(int** arr, int rows, int& cols, int* ind, int size) {
    for (int i = 0; i < rows; i++){
        for (int k = 0; k < size; k++) {
            int* newRow = (int*)calloc(cols - 1, sizeof(int));

            int newIndex = 0;
            for (int j = 0; j < cols; j++) {
                if (j != ind[k]) {
                    newRow[newIndex++] = arr[i][j];
                }
            }
        
            free(arr[i]);
            arr[i] = newRow;
        }
    }

    cols -= size;
    return arr;
}

int main() {
    std::cout << "Point 1" << std::endl;
    int a;
    int rows = 2;
    int cols = 2;
    int size = 0;

    int** arr = (int**)calloc(rows, sizeof(int*));

    for (int i = 0; i < 2; ++i) {
        arr[i] = (int*)calloc(cols, sizeof(int));
    }

    int k = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter number " << k + 1 << ": ";
            std::cin >> a;
            while (k <= 1 and a < 0) {
                std::cout << "Number" << k + 1 << "must be positive" << std::endl;
                std::cout << "Enter number " << k + 1 << ": ";
                std::cin >> a;
            } 
            arr[i][j] = a;
            k++;
        }
    }

    std::cout << "\n";

    arr = addRows(arr, rows, cols);
    arr = addCols(arr, rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        } std::cout << "\n";
    }

    int* ind = find_zeros(arr, rows, cols, size);

    arr = rm_zeros(arr, rows, cols, ind, size);

    std::cout << "\n"; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        } std::cout << "\n";
    } std::cout << "\n";

    //пункт 2
    
    {
        std::cout << "Point 2" << std::endl;
        float a;
        float b;
        float* tmp = new float;
        float* pa = &a;
        float* pb = &b;

        std::cout << "Enter number 1: ";std::cin >> a;
        std::cout << "Enter number 2: ";std::cin >> b;
        
        *pa *= 3;
        
        *tmp = *pa;
        *pa = *pb;
        *pb = *tmp;

        delete tmp;

        std::cout << *pa << " " << *pb << std::endl;
    }
}