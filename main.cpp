#include "student.h"

int main()
{
    using namespace ywchoi2649052;
    using namespace std;

    student s1;
    s1.input();
    s1.print();

    student s2;
    s2.input();
    s2.print();

    if(s1.getId() == s2.getId() 
        && s1.getScore() == s2.getScore() 
        && s1.getGrade() == s2.getGrade())
        std::cout << "same";
    else
        std::cout << "different";

    
    return 0;
}