/* Реализовать вычисление матричных норм из списка выше (только для квадратных
 матриц). Преобразовать матрицу, умножив элементы каждой строки на значение второго
 элемента этой строки. */

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <array>
const int nrows = 3;
const int ncols = 3;

int normal(std::array<std::array<int,ncols>, nrows> mat){
    std::array<int,3> summ;
    int num_summ;
    int num_max = -1;
    for(int i = 0; i < nrows; i++)
    {
        num_summ = 0;
        for(int j = 0; j < ncols; j++)
        {
            num_summ += abs(mat[j][i]);
        }
        summ[i] = num_summ;
    }

    for(int a=0;a<3;a++)
    {
        if(summ[a]>num_max)
        {
            num_max = summ[a];
        }
    }

    return num_max;
}


int main(){
    srand(time(NULL));

    std::array<std::array<int, ncols>, nrows> mat;
    
    for (int i = 0; i < nrows; i++){
        for (int j = 0; j < ncols; j++){
            mat[i][j] = rand() % 10;
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
    std::cout << "\n" << "Normal: " << normal(mat);
    
    return 0;
}
