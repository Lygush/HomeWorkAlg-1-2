#include <iostream>

int Alg(int* arr, int elem, int point) {
    int left{};
    int right{elem - 1};
    int middle{};

    while (left <= right) {
        middle = (left + right) / 2;
        if ((arr[middle] < point) || (arr[middle] == point)) {
            left = middle + 1;
        }
        else if (arr[middle] > point) {
            right = middle - 1;
        }
    }
    return  elem - right - 1;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[9] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    std::cout << "Введите точку отсчёта: ";
    int point{};
    std::cin >> point;
    std::cout << "Количество элементов в массиве больших, чем " << point << ": " << Alg(arr, 9, point);
}

