// # Домашнее задание к занятию «Динамический массив. Списки. Деки»
// # Задача 1. Вывод изменяемого динамического массива
// В этом задании нужно реализовать функцию вывода динамического массива целых чисел на экран.


#include <iostream>
#include <string>
#include "printDynamicArray.h"
#include "checkInputUsersData.h"



int main()
{
    setlocale(LC_ALL, "Russian");

    int arrActualSize = 0; //фактичеcкий размер массива
    int arrLogicalSize = 0; //логический размер массива
    

    std::cout << "Введите фактичеcкий размер массива:> ";
    std::cin >> arrActualSize;
    
    while (!std::cin.good() || arrActualSize <= 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Вы ввели неверные даннные. Размер массива положительное целое число.\n";
        std::cout << "Введите фактичеcкий размер массива:> ";
        std::cin >> arrActualSize;
    }

    bool ErrorUserData = false; // для проверки "Ошибка! Логический размер массива не может превышать фактический!"

    do
    {
        std::cout << "Введите логичеcкий размер массива:> ";
        std::cin >> arrLogicalSize;

        while (!std::cin.good() || arrActualSize <= 0)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Вы ввели неверные даннные. Размер массива положительное целое число.\n";
            std::cout << "Введите логичеcкий размер массива:> ";
            std::cin >> arrLogicalSize;
        }

        if (arrLogicalSize > arrActualSize)
        {
            std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
            ErrorUserData = false;
        }
        else 
        {
            ErrorUserData = true;
        }
            
    } while (!ErrorUserData);
    
    //std::cin.clear();
    int userData = 0;

    int* arr = new int[arrActualSize] {};

    // ввод массива полозователем
    for (int i = 0; i < arrLogicalSize; i++)
    {
        std::cout << "Введите arr[" << i << "]:> ";
        std::cin >> userData;   
        arr[i] = userData;
    };

    PrintDynamicArray(arr, arrActualSize, arrLogicalSize);

    delete[]arr;
    arr = nullptr;
}