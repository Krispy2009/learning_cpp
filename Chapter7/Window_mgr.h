#ifndef WINDOW_MGR
#define WINDOW_MGR
#include <vector>

class Screen;

class Window_mgr
{
    public:
        using ScreenIndex = std::vector<Screen*>::size_type;
        void clear(ScreenIndex);
    private:
        std::vector<Screen*> screens;
};
#endif