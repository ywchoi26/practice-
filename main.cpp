#include "student.h"
#include <array>

namespace ywchoi2649052
{
    void printArray(const student a[], const int n)
    {
        for(int i=0; i<n; ++i)
        {
            std::cout << a[i];
        }
    }
}
int main()
{
    using namespace ywchoi2649052;
    using namespace std;

    const int n{4};
    student a[n];
    a[0] = student{"KimPro", 1234567, 100, 'A'};
    a[1].setName("LeePro");
    a[1].setId(2345678);
    a[1].setScore(90);
    a[1].setGrade('A');
    a[2].input();
    std::cin >> a[3];
    printArray(a, n);

    std::array<student, n> arr{};
    for (int i = 0; i < arr.size(); ++i)
        arr.at(i) = a[i];

    for(const auto& arri : arr)
        arri.print();

    return 0;
}