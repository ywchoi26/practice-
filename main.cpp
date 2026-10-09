#include "student.h"


int main()
{
    using namespace ywchoi2649052;

    student s1{};
    s1.input();
    s1.print();

    student s2{};
    s2.setId(1234567);
    s2.setScore(90);
    s2.setGrade('A');
    s2.print();

    if (s1.getId() == s2.getId() 
        && s1.getScore() == s2.getScore() 
        && s1.getGrade() == s2.getGrade())     
        std::cout << "same!\n";
    else std::cout << "different!\n";
    return 0;
}

