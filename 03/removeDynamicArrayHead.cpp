#include "removeDynamicArrayHead.h"

enum class DynamicArrayMessage
{
    Exit = 0, OneEelementLeft = 1
};
											
void removeDynamicArrayHead(int* &arr, int* arrActualSize, int* arrLogicalSize)
{
    bool removeUserData = false;
    bool stoppingActions = false;

	do
	{
        std::cout << "”далить первый элемент?(1 - да, 0 - выход без удалений):> ";
        std::cin >> removeUserData;

        while (!std::cin.good() || (removeUserData < 0 && removeUserData > 2))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "¬ы ввели неверные даннные. ћассив дл€ целочисленных значений.\n";
            std::cout << "”далить первый элемент?(1 - да, 0 - выход без удалений):> ";
            std::cin >> removeUserData;
        }
        if (removeUserData == static_cast<int> (DynamicArrayMessage::Exit))
        {
            bool stoppingActions = true;
            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
            
            return;
        }
        if (*arrLogicalSize == static_cast<int> (DynamicArrayMessage::OneEelementLeft))
        {
            bool stoppingActions = true;
            std::cout << "ќшибка!Ћогический размер массива не может превышать фактический!\n";

            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
            return;
        }
         

        //если массив заполнен
        if ((*arrLogicalSize) - 1 > (*arrActualSize) / 3)
        {
            // копирование старого массива в новый со смещением -1. ѕоследний элемент обнул€ем
            for (int i = 1; i < *arrLogicalSize; i++)
            {
                arr[i - 1] = arr[i];
            };
            arr[(*arrLogicalSize) - 1] = 0;
        }
        
        if ((*arrLogicalSize) - 1 <= (*arrActualSize) / 3)
        {
            *arrActualSize /= 3; // уменьшаем размер массива вдвое 
            int* arr2 = new int[*arrActualSize] {0};

            // копирование старого массива в новый со смещением -1
            for (int i = 1; i < *arrLogicalSize; i++)
            {
                arr2[i - 1] = arr[i];
            };

            arr = arr2; //присваиваем адрес нового массива старому
            arr2 = nullptr; // обнул€ем адресс нового, удалитс€ он сам.
        };
        
        --* arrLogicalSize; //вычитаем единицу из логического размера
       
        PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
        
	} while (true);
};