#include "student.h"
/*
student::student()
{
    result = studentGrade; 
    firstName = " ";
    lastName = " ";
    studentGrade = 0; 
}
*/
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
    double totalAverage = 0; 
    double sum = 0; 
    for(int i = 0; i < listOfGrades.size(); i++)
    {
        
       sum+= listOfGrades[i];
    }
   // totalAverage = sum / listOfGrades.size(); 
   // return totalAverage; 

        

    
}
