#include "student.h"

void student::setName(string name1, string name2)
{
    first = name1; 
    last = name2; 
}
string student::fullName() 
{
    string name = first; 
    name.append(" "); 
    name.append(last); 
    return name; 
}
double student::addGrade(double result)
{
 
    listOfGrades.push_back(result); 
    listOfGrades.pop_back(); 
}
double student::getScore()
{
    double total = 0; 
    double sum = 0; 
    double value; 
    for(int value = 0; value < listOfGrades.size(); value++)
    {
        
       sum += value;  
        value++; 
    }
    total = sum / value; 
    return total; 

        

    
}
