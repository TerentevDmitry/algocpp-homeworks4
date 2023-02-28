#include "printDynamicArray.h"

                                        //5                   //3
void PrintDynamicArray(int* arr, int arrActualSize, int arrLogicalSize)
{
    std::cout << "Динамический массив:";

    for (int i = 0; i < arrLogicalSize; i++)
    {
            std::cout << " ";
            std::cout << arr[i];
    };

    for (int i = arrLogicalSize; i < arrActualSize; i++)
    {
        std::cout << " ";
        std::cout << "_";
    };
    
    std::cout << std::endl;
};