#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>



int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    
  /*  ������� 1
    const int size = 10;
    int arr[size];
    int min, max;

    std::srand(std::time(0));

    std::cout << "������: ";
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

    std::cout << "����������� �������: " << min << std::endl;
    std::cout << "������������ �������: " << max << std::endl;*/

   /* //������� 2
    const int size1 = 10;
    int arr[size1];
    int threshold, sum = 0;

    std::srand(std::time(0));

    std::cout << "������: ";
    for (int i = 0; i < size1; i++) {
        arr[i] = std::rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "������� ��������� ��������: ";
    std::cin >> threshold;

    for (int i = 0; i < size1; i++) {
        if (arr[i] < threshold) {
            sum += arr[i];
        }
    }

    std::cout << "����� ���������, ������� " << threshold << ": " << sum << std::endl;*/

    //������� 3
    const int months = 12;
    double profits[months];
    int startMonth, endMonth;

    std::cout << "������� ������� �� 12 �������:\n";
    for (int i = 0; i < months; i++) {
        std::cout << "����� " << (i + 1) << ": ";
        std::cin >> profits[i];
    }

    std::cout << "������� �������� (��������� � �������� �����): ";
    std::cin >> startMonth >> endMonth;

    if (startMonth < 1 || endMonth > months || startMonth > endMonth) {
        std::cout << "������: ������������ ��������." << std::endl;
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

    std::cout << "������������ ������� � ������ " << maxMonth << ": " << maxProfit << std::endl;
    std::cout << "����������� ������� � ������ " << minMonth << ": " << minProfit << std::endl;

    return 0;
}