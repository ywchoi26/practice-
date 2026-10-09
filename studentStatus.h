#pragma once
#include "student.h"

namespace ywchoi2649052
{
    class studentStatus
    {
        student s{};
        bool status{};
    public:
        studentStatus(student s0 = student{1234567, 100, 'A'}, bool sts = true)
            :s{s0}, status{sts}
        {}
        
        void print() const
        {
            s.print();
            if(status) std::cout << "on school\n";
            else std::cout << "NOT on school\n";
        }
    
        const student& getStudent() const {return s;} 
        void setStudent(const student& s0){s = s0;}
    };
}