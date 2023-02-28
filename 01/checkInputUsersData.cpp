#include "checkInputUsersData.h"


bool checkInputUsersData(int uda)
{
    while (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Вы ввели неверные даннные. Размер массива положительное целое число.\n";
        std::cout << "Введите фактичеcкий размер массива:> ";
    }
    return false;
}
