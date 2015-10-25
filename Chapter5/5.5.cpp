#include <iostream>

int main(){

    std::string letter_grades[5] = {"F","D", "C","B", "A"};
    std::string letter_grade = "";
    unsigned int grade;
    
    while(std::cin >> grade && grade < 101){
        if(grade==100)
        {
            letter_grade = "A++";
        }
        else
        {
            if(grade < 60)
            {
                letter_grade = "F";
            }
            else{
                letter_grade = letter_grades[(grade-50)/10];
                if(grade % 10 >= 7)
                {
                    letter_grade += "+";
                }
                
                if (grade % 10 < 3)
                {
                    letter_grade +="-";
                }
            }
        }
        
        std::cout << "A " << grade << " is a " << letter_grade << std::endl;
        
    }
    
}