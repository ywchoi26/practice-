#pragma once
#include "student.h"

namespace ywchoi2649052
{
    class studentStatus
    {
        student s;
        bool status;
    public:
        studentStatus(student s0 = student{1234567, 100, 'A'}, bool sts = true)
            :s{s0}, status{sts}
        {}

        void print()
        {
            s.print();
            if(status)
                std::cout << ", on school\n";
            else
                std::cout << "not on school\n";
        }

        void setStudent(const student& s0){s = s0;}
        const student& getStudent() const {return s;}
    };
}