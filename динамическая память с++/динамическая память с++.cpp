// динамическая память с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* array1 = new int[size];

    std::cout << "Введите " << size <<
        "элементов массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array1[i];
    }
    std::cout << "Массив 1:";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    array2[size] = 100;
    delete[] array1;

    std::cout << "Массив 2: ";
    for (int i = 0; i < size + 1; ++i)
    {

        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;
    delete[] array2;
    return 0;
