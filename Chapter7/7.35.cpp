#include <string>

typedef std::string Type;
Type initVal();

class Exercise
{
public:
    typedef double Type; //new definition of Type
    Type setVal(Type);
    Type initVal() {return 0;}
    //we need to add a return value so that the function call in setVal works correctly.
private:
    int val;
};
  //This is using the ouside def of Type (i.e. string). It will fail to compile right now, but if we use Exercise::Type the val will be converted from an int to a double and the compiler will be happy.
Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal(); //This initVal() is the one in Exercise.
    return val; // val here is an int and the return Type is a typedef string (unless we use Exercise::Type).
}

int main(){}