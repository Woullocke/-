// Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <array>

int main(){
    const int nrows = 3;
    const int ncols = 3;
    srand(time(NULL));

    std::array<std::array<int, ncols>, nrows> mat;
    
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat[i][j] = rand() % 100;
            std::cout << mat[i][j] << "  ";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat[i][j] *= mat[i][1];
            std::cout << mat[i][j] << "  ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
