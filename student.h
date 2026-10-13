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
            if (id<1000000 || id>9999999)
            {
                std::cout << "Invalid id\n";
                std::exit(1);
            }    
        }
        void testScore()
        {
            if(score<0 || score>100)
            {
                std::cout << "Invalid score\n";
                std::exit(1);
            }    
        }
        void testGrade()
        {
            if(grade<'A' || grade>'F')
            {
                std::cout << "Invalid grade\n";
                std::exit(1);
            }
        }
    public:
        student(int d = 1234567, int s = 100, char g = 'A')
        :id{d}, score{s}, grade{g}
        {testId(); testScore(); testGrade();}

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
        void setGrade(char g){grade = g, testGrade();}

        void print() const 
        {
            std::cout << id << ", " << score << ", " << grade;
        }

        int getId() const {return id;}
        int getScore() const {return score;}
        char getGrade() const {return grade;}

        student operator++()
        {
            return student{id, ++score, grade};
        }

        student operator++(int)
        {
            student temp{id, score, grade};
            score++;
            return temp;
        }

        friend std::istream& operator>>(std::istream& is, student& s) 
        {
            std::cout << "Enter id: ";
            is >> s.id;
            std::cout << "Enter score: ";
            is >> s.score;
            std::cout << "Enter grade: ";
            is >> s.grade;
            return is;
        }

        friend std::ostream& operator<<(std::ostream& os, const student& s)
        {
            os << s.id << ", " << s.score << ", " << s.grade << std::endl;
            return os;
        }

        friend bool operator==(const student& s1, const student& s2)
        {
            return s1.id == s2.id && s1.score == s2.score && s1.grade == s2.grade;
        }

        friend int operator+(const student& s1, const student& s2)
        {return s1.score + s2.score;}
    };
}