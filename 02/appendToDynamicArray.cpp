#include "appendToDynamicArray.h"

enum class DynamicArrayMessage
{
    Exit
};

void appendToDynamicArray(int* &arr, int* arrActualSize, int* arrLogicalSize) 
{
    int appendUserData = 0;
    bool stoppingActions = false;

	do
	{
        std::cout << "Введите элемент для добавления(0 - выход без добавлений):> ";
        std::cin >> appendUserData;

        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Вы ввели неверные даннные. Массив для целочисленных значений.\n";
            std::cout << "Введите элемент для добавления(0 - выход без добавлений):> ";
            std::cin >> appendUserData;
        }
        if (appendUserData == static_cast<int> (DynamicArrayMessage::Exit))
        {
            bool stoppingActions = true;
            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
            
            return;
        }

        //если массив заполнен
        if (*arrActualSize == *arrLogicalSize)
        {
            *arrActualSize *= 2; // увеличиваем размер массива вдвое 
            int* arr2 = new int[*arrActualSize] {};
        
            // копирование старого массива в новый
            for (int i = 0; i < *arrLogicalSize; i++)
            {
                arr2[i] = arr[i];
            };
            
            arr = arr2; //присваиваем адрес нового массива старому
            arr2 = nullptr; // обнуляем адресс нового, удалится он сам.
        }
            arr[*arrLogicalSize] = appendUserData; // добавляем значение в конец массива.
            ++* arrLogicalSize; //прибавляем единицу к логическому размеру
       
            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
        
	} while (true);
};

