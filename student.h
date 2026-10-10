#pragma once
#include <iostream>

namespace ywchoi2649052
{
    class student
    {
        int id{};
        int score{};
        char grade{};
        void testId()
        {
            if (id < 1000000 || id > 9999999)
            {
                std::cout << "Invalid id";
                std::exit(1);
            }
        }
        void testScore()
        {
            if (score < 0 || score > 100)
            {
                std::cout << "Invalid score";
                std::exit(1);
            }
        }
        void testGrade()
        {
            if (grade < 'A' || grade > 'F')
            {
                std::cout << "Invalid grade";
                std::exit(1);
            }
        }

    public:
        void input()
        {
            std::cout << "Enter id: ";
            std::cin >> id; testId();
            std::cout << "Enter score: ";
            std::cin >> score; testScore();
            std::cout << "Enter grade: ";
            std::cin >> grade; testGrade();
        }

        void setId(int d){id = d; testId();}
        void setScore(int s){score = s; testScore();}
        void setGrade(char g){grade = g; testGrade();}

        void print()
        {
            std::cout << id << ", " << score << ", " << grade << std::endl;
        }

        int getId(){return id;}
        int getScore(){return score;}
        char getGrade(){return grade;}

    };

}
