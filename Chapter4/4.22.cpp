#include <iostream>

int main()
{
    int grade = 76;
    std::string finalgrade = (grade > 90) ? "high pass"
                                          : (grade > 75) ? "pass"
                                          : (grade >= 60) ? "low pass"
                                          : "fail";
        std::cout << grade << " is a " << finalgrade << std::endl;
        
    if(grade > 90)
    {
        finalgrade = "high pass";
    }
    else if(grade > 75)
    {
        finalgrade = "pass";
    }
    else if(grade >= 60)
    {
        finalgrade = "low pass";
    }
    else
    {
        finalgrade = "fail";
    }
    
    std::cout << grade << " is a " << finalgrade << std::endl;
    
    return 0;
}