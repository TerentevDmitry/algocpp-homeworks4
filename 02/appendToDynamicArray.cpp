#include "appendToDynamicArray.h"

											
void appendToDynamicArray(int* &arr, int* arrActualSize, int* arrLogicalSize) 
{
    int appendUserData = 0;
    bool stopAppend = false;

	do
	{
        std::cout << "������� ������� ��� ����������(0 - ����� ��� ����������):> ";
        std::cin >> appendUserData;

        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "�� ����� �������� �������. ������ ��� ������������� ��������.\n";
            std::cout << "������� ������� ��� ����������(0 - ����� ��� ����������):> ";
            std::cin >> appendUserData;
        }
        if (appendUserData == 0)
        {
            bool stopAppend = true;
            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stopAppend);
            
            return;
        }

        //���� ������ ��������
        if (*arrActualSize == *arrLogicalSize)
        {
            *arrActualSize *= 2; // ����������� ������ ������� ����� 
            int* arr2 = new int[*arrActualSize] {};
        
            // ����������� ������� ������� � �����
            for (int i = 0; i < *arrLogicalSize; i++)
            {
                arr2[i] = arr[i];
            };
            
            arr = arr2; //����������� ����� ������ ������� �������
            arr2 = nullptr; // �������� ������ ������, �������� �� ���.
        }
            arr[*arrLogicalSize] = appendUserData; // ��������� �������� � ����� �������.
            ++* arrLogicalSize; //���������� ������� � ����������� �������
       
            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stopAppend);
        
	} while (true);








};

