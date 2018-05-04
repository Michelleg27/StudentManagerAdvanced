#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std; 

class student 
{
    private: 
        string first; 
        string last; 
        double letter;
        vector<double> listOfGrades; 
         

    public:
        void setName(string, string); 
        string fullName();
        double addGrade(double);
        double getScore(); 
       // student(); 
        

};
#endif
