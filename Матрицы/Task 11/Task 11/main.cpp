/* Реализовать сложение, вычитание, умножение, транспонирование матриц
 (разрешается фиксированный размер матриц). */

#include <iostream>
#include <array>
#include <stdlib.h>
#include <ctime>
const int nrows = 3, ncols = 3;

void summMat(std::array<std::array<int, ncols>, nrows> mat1, std::array<std::array<int, ncols>, nrows> mat2){
    std::cout << "Cумма\n";
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            std::cout << mat1[i][j] + mat2[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void minMat(std::array<std::array<int, ncols>, nrows> mat1, std::array<std::array<int, ncols>, nrows> mat2){
    std::cout << "Разность\n";
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            std::cout << mat1[i][j] - mat2[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void ymnozhMat(std::array<std::array<int, ncols>, nrows> mat1, std::array<std::array<int, ncols>, nrows> mat2){
    std::array<std::array<int, ncols>, nrows> res;
    std::cout << "Умножение\n";
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            for (int k = 0; k < nrows; k++){
                res[i][j] = mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            std::cout << res[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void trancMat(std::array<std::array<int, ncols>, nrows> mat){
    std::array<std::array<int, ncols>, nrows> res;
    std::cout << "Транспонирование\n";
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            res[i][j] = mat[j][i];
        }
    }
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            std::cout << res[i][j] << " ";
        }
        std::cout << "\n";
    }
}


int main(){
    std::array<std::array<int, ncols>, nrows> mat1;
    srand(time(NULL));
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat1[i][j] = rand() % 10;
            std::cout << mat1[i][j] << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    
    std::array<std::array<int, ncols>, nrows> mat2;
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat2[i][j] = rand() % 10;
            std::cout << mat2[i][j] << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    
    summMat(mat1, mat2);
    minMat(mat1, mat2);
    ymnozhMat(mat1, mat2);
    trancMat(mat1);
    trancMat(mat2);
    
    return 0;
}
