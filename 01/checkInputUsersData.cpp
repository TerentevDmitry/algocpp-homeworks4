#include "checkInputUsersData.h"


bool checkInputUsersData(int uda)
{
    while (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "�� ����� �������� �������. ������ ������� ������������� ����� �����.\n";
        std::cout << "������� �������c��� ������ �������:> ";
    }
    return false;
}
