#include <iostream>
#include "Window_mgr.h"
class Screen {
	public:
		typedef std::string::size_type pos;
		
		Screen() = default;
		Screen(pos ht, pos wd): height(ht), width(ht), contents(ht*wd, ' '){}
		Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd,c){}
		
		char get() const {return contents[cursor];}
		inline char get(pos ht, pos wd) const;
		Screen &move(pos r, pos c);
        Screen &set(char);
        Screen &set(pos, pos,char);
        Screen &display(std::ostream&);
        
        friend void Window_mgr::clear(ScreenIndex);
        
	private:
		pos cursor = 0;
		pos height = 0, width =0;
		std::string contents;
        void do_display(std::ostream&);

};

inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row+c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

inline void Screen::do_display(std::ostream &os) { os << contents;}

inline Screen& Screen::display(std::ostream &os)
{
    do_display(os); return *this;
}
