#include "student.h"

int main()
{
    using namespace ywchoi2649052;

    student s1;
    student s2;
    std::cin >> s1;
    std::cout << s1;
    std::cin >> s2;
    std::cout << s2;
    std::cout << ++s2;
    std::cout << s2++;
    std::cout << s2;

    if (s1 == s2)
        std::cout << "same\n";
    else
        std::cout << "different\n";

    return 0;
}