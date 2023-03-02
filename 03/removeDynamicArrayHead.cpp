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
        std::cout << "������� ������ �������?(1 - ��, 0 - ����� ��� ��������):> ";
        std::cin >> removeUserData;

        while (!std::cin.good() || (removeUserData < 0 && removeUserData > 2))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "�� ����� �������� �������. ������ ��� ������������� ��������.\n";
            std::cout << "������� ������ �������?(1 - ��, 0 - ����� ��� ��������):> ";
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
            std::cout << "������!���������� ������ ������� �� ����� ��������� �����������!\n";

            PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
            return;
        }
         

        //���� ������ ��������
        if ((*arrLogicalSize) - 1 > (*arrActualSize) / 3)
        {
            // ����������� ������� ������� � ����� �� ��������� -1. ��������� ������� ��������
            for (int i = 1; i < *arrLogicalSize; i++)
            {
                arr[i - 1] = arr[i];
            };
            arr[(*arrLogicalSize) - 1] = 0;
        }
        
        if ((*arrLogicalSize) - 1 <= (*arrActualSize) / 3)
        {
            *arrActualSize /= 3; // ��������� ������ ������� ����� 
            int* arr2 = new int[*arrActualSize] {0};

            // ����������� ������� ������� � ����� �� ��������� -1
            for (int i = 1; i < *arrLogicalSize; i++)
            {
                arr2[i - 1] = arr[i];
            };

            arr = arr2; //����������� ����� ������ ������� �������
            arr2 = nullptr; // �������� ������ ������, �������� �� ���.
        };
        
        --* arrLogicalSize; //�������� ������� �� ����������� �������
       
        PrintDynamicArray(arr, *arrActualSize, *arrLogicalSize, stoppingActions);
        
	} while (true);
};