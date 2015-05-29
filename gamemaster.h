#ifndef GAMEMASTER_H_INCLUDED
#define GAMEMASTER_H_INCLUDED
#include "widget.hpp"
class gamemaster : public widget
{
private:
    unsigned int late_x,late_y;
    unsigned short line_checker=32;
    unsigned short target=32;
    short late_target=-1;
    unsigned short havetokill=32;
    std::vector<widget*> widgets;
public:
    gamemaster(int pos_x, int pos_y);
    gamemaster(int pos_x, int pos_y, int size1, int size2);
    void checked(genv::event ev);
    void get_target(unsigned short y){target=y;}
    unsigned short thereisnothingthere(unsigned int __x, unsigned int __y, unsigned short self);
    void knowhatistheretokwnow(std::vector<widget*> & figures);
    bool chess(unsigned int kings);
};


#endif // GAMEMASTER_H_INCLUDED
