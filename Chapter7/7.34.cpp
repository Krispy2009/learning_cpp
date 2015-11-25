#include <string>
int height;

class Screen {
public:
    typedef std::string::size_type pos;
  
    void dummy_fcn(pos height)
    {
        cursor = width * height;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    
};

int main(){}
// If pos was the last line in the class, then the compiler would complain when compiling
// the dummy_fcn because it uses the type pos for its parameter.