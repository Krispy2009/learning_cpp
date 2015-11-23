#include <string>
#include "Window_mgr.h"
#include "Screen.h"

void Window_mgr::clear(ScreenIndex i)
{
    Screen *s = screens[i];
    s->contents = std::string(s->height*s->width, ' ');
}

int main()
{
    
}