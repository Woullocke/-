// В квадратной матрице найти сумму положительных элементов, лежащих на и выше главной диагонали и расположенных в чётных столбцах

#include <iostream>
#include <array>
#include <stdlib.h>
#include <ctime>

int main(){
    const int nrows = 4;
    const int ncols = 4;
    srand(time(NULL));
    int summ = 0;
    
    std::array<std::array<int, ncols>, nrows> mat;
    
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat[i][j] = rand() % 200 - 100;
            std::cout << mat[i][j] << "  ";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    
    for (int i = 0; i < nrows; i++){
        for (int j = i; j < ncols; j++){ // просматриваем элементы на и выше главной оси
            if (j % 2 == 0 && mat[i][j] > 0){ // проверяем, что столбец четный и число положительное
                summ += mat[i][j];
            }
        }
    }
    std::cout << summ;
    
    return 0;
}
