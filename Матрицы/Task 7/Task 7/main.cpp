//Дана матрица. Элементы первой строки — количество осадков в соответствующий день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган? (ураган — когда самый сильный ветер был в самый дождливый день).

#include <iostream>
#include <array>
#include <stdlib.h>
#include <ctime>

int main() {
    srand(time(NULL));
    const int days = 7;

    std::array<std::array<int, days>, 2> mat;
    
    for (int i = 0; i < days; i++){
        for (int j = 0; j < 2; j++){
            mat[i][j] = rand() % 50;
        }
    }

    int max_wind_speed = 0;
    int max_rainfall = 0;
    int max_rainfall_index = -1;

  for (int i = 0; i < days; i++) {
    int wind_speed = mat[1][i];
    int rainfall = mat[0][i];

    if (wind_speed > max_wind_speed) {
      max_wind_speed = wind_speed;
      max_rainfall = rainfall;
      max_rainfall_index = i;
    } else if (wind_speed == max_wind_speed && rainfall > max_rainfall) {
      max_rainfall = rainfall;
      max_rainfall_index = i;
    }
  }

    std::cout << "Был ураган в день " << max_rainfall_index << std::endl;

  return 0;
}

