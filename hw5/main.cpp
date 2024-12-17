#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>



int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    
  /*  Задание 1
    const int size = 10;
    int arr[size];
    int min, max;

    std::srand(std::time(0));

    std::cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;*/

   /* //Задание 2
    const int size1 = 10;
    int arr[size1];
    int threshold, sum = 0;

    std::srand(std::time(0));

    std::cout << "Массив: ";
    for (int i = 0; i < size1; i++) {
        arr[i] = std::rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Введите пороговое значение: ";
    std::cin >> threshold;

    for (int i = 0; i < size1; i++) {
        if (arr[i] < threshold) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма элементов, меньших " << threshold << ": " << sum << std::endl;*/

    //Задание 3
    const int months = 12;
    double profits[months];
    int startMonth, endMonth;

    std::cout << "Введите прибыль за 12 месяцев:\n";
    for (int i = 0; i < months; i++) {
        std::cout << "Месяц " << (i + 1) << ": ";
        std::cin >> profits[i];
    }

    std::cout << "Введите диапазон (начальный и конечный месяц): ";
    std::cin >> startMonth >> endMonth;

    if (startMonth < 1 || endMonth > months || startMonth > endMonth) {
        std::cout << "Ошибка: некорректный диапазон." << std::endl;
        return 1;
    }

    double maxProfit = profits[startMonth - 1];
    double minProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxMonth = i;
        }
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minMonth = i;
        }
    }

    std::cout << "Максимальная прибыль в месяце " << maxMonth << ": " << maxProfit << std::endl;
    std::cout << "Минимальная прибыль в месяце " << minMonth << ": " << minProfit << std::endl;

    return 0;
}