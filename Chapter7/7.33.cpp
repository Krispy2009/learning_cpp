#include "Screen.h"

//We need to add Screen:: before pos to specify that we are using the pos defined in Screen.h. 
Screen::pos Screen::size() const
{
    return height * width;
}
int main(){}