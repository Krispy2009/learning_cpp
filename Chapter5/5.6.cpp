#include <iostream>

int main()
{
    std::string letter_grades[5] = {"F","D", "C","B", "A"};
    std::string letter_grade = "";
    unsigned int grade;
    
    while(std::cin >> grade && grade < 101)
    {
        letter_grade = (grade==100) ? "A++" : 
            (grade<60) ? "F" :
            letter_grades[(grade-50)/10];
        
        letter_grade = (letter_grade == "A++"|| letter_grade == "F") ? letter_grade :
        (grade % 10 >= 7) ? letter_grade+="+" : 
            (grade % 10 < 3) ? letter_grade+="-": letter_grade;
        
        std::cout << "A " << grade << " is a " << letter_grade << std::endl;
   
    }
    
}