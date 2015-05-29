#include "gamemaster.h"
#include <iostream>
using namespace genv;
using namespace std;

gamemaster::gamemaster(int pos_x, int pos_y) : widget(pos_x, pos_y){}
gamemaster::gamemaster(int pos_x, int pos_y, int size1, int size2)  : widget(pos_x, pos_y, size1, size2){}

bool gamemaster::chess(unsigned int kings)
{
    if(kings==31)
    {
        for(size_t c=0;c<8;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
            if((widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y+100)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y+100)){return 1;}
            }
        }
        for(size_t c=8;c<10;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
                bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y+100+k,c)!=32){temp1=1;}
                    if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y-100-k,c)!=32){temp2=1;}
                    if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y+100+k,c)!=32){temp3=1;}
                    if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y-100-k,c)!=32){temp4=1;}
                    if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x+100+k and !temp11)
                    or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x-100-k and !temp22)
                    or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x-100-k and !temp33)
                    or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x+100+k and !temp44))
                    {return 1;}
                    temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;
                }
            }
        }
        for(size_t c=10;c<12;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
            if((widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y+200)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y+200)
            or(widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y-200)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y-200)
            or(widgets[kings]->x==widgets[c]->x+200 and widgets[kings]->y==widgets[c]->y+100)
            or(widgets[kings]->x==widgets[c]->x-200 and widgets[kings]->y==widgets[c]->y+100)
            or(widgets[kings]->x==widgets[c]->x+200 and widgets[kings]->y==widgets[c]->y-100)
            or(widgets[kings]->x==widgets[c]->x-200 and widgets[kings]->y==widgets[c]->y-100)){return 1;}
            }
        }
        for(size_t c=12;c<14;c++)
        {
            for(unsigned int k=0;k<=700;k+=100)
            {
                if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
                {
                    bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                    bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                    for(unsigned int k=0;k<=700;k+=100)
                    {
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y+100+k,c)!=32){temp1=1;}
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y-100-k,c)!=32){temp2=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y,c)!=32){temp3=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y,c)!=32){temp4=1;}
                        if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x and !temp11)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x and !temp22)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x+100+k and !temp33)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x-100-k and !temp44))
                        {return 1;}
                        temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;
                    }
                }
            }
        }
            for(unsigned int k=0;k<=700;k+=100)
            {
                unsigned short c=14;
                if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
                {
                    bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                    bool temp5=0;bool temp6=0;bool temp7=0;bool temp8=0;
                    bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                    bool temp55=0;bool temp66=0;bool temp77=0;bool temp88=0;
                    for(unsigned int k=0;k<=700;k+=100)
                    {
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y+100+k,c)!=32){temp1=1;}
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y-100-k,c)!=32){temp2=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y,c)!=32){temp3=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y,c)!=32){temp4=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y+100+k,c)!=32){temp5=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y-100-k,c)!=32){temp6=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y+100+k,c)!=32){temp7=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y-100-k,c)!=32){temp8=1;}
                        if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x and !temp11)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x and !temp22)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x+100+k and !temp33)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x-100-k and !temp44)
                        or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x+100+k and !temp55)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x-100-k and !temp66)
                        or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x-100-k and !temp77)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x+100+k and !temp88))
                        {return 1;}
                        temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;temp55=temp5;temp66=temp6;temp7=temp7;temp88=temp8;
                    }
                }
            }
    }
    else
    {
        for(size_t c=15;c<24;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
            if((widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y-100)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y-100)){return 1;}
            }
        }
        for(size_t c=24;c<26;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
                bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y+100+k,c)!=32){temp1=1;}
                    if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y-100-k,c)!=32){temp2=1;}
                    if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y+100+k,c)!=32){temp3=1;}
                    if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y-100-k,c)!=32){temp4=1;}
                    if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x+100+k and !temp11)
                    or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x-100-k and !temp22)
                    or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x-100-k and !temp33)
                    or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x+100+k and !temp44))
                    {return 1;}
                    temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;
                }
            }
        }
        for(size_t c=26;c<28;c++)
        {
            if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
            {
            if((widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y+200)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y+200)
            or(widgets[kings]->x==widgets[c]->x+100 and widgets[kings]->y==widgets[c]->y-200)
            or(widgets[kings]->x==widgets[c]->x-100 and widgets[kings]->y==widgets[c]->y-200)
            or(widgets[kings]->x==widgets[c]->x+200 and widgets[kings]->y==widgets[c]->y+100)
            or(widgets[kings]->x==widgets[c]->x-200 and widgets[kings]->y==widgets[c]->y+100)
            or(widgets[kings]->x==widgets[c]->x+200 and widgets[kings]->y==widgets[c]->y-100)
            or(widgets[kings]->x==widgets[c]->x-200 and widgets[kings]->y==widgets[c]->y-100)){return 1;}
            }
        }
        for(size_t c=28;c<30;c++)
        {
            for(unsigned int k=0;k<=700;k+=100)
            {
                if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
                {
                    bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                    bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                    for(unsigned int k=0;k<=700;k+=100)
                    {
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y+100+k,c)!=32){temp1=1;}
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y-100-k,c)!=32){temp2=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y,c)!=32){temp3=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y,c)!=32){temp4=1;}
                        if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x and !temp11)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x and !temp22)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x+100+k and !temp33)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x-100-k and !temp44))
                        {return 1;}
                        temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;
                    }
                }
            }
        }
            for(unsigned int k=0;k<=700;k+=100)
            {
                unsigned short c=30;
                if(thereisnothingthere(widgets[c]->x,widgets[c]->y,c)==32)
                {
                    bool temp1=0;bool temp2=0;bool temp3=0;bool temp4=0;
                    bool temp5=0;bool temp6=0;bool temp7=0;bool temp8=0;
                    bool temp11=0;bool temp22=0;bool temp33=0;bool temp44=0;
                    bool temp55=0;bool temp66=0;bool temp77=0;bool temp88=0;
                    for(unsigned int k=0;k<=700;k+=100)
                    {
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y+100+k,c)!=32){temp1=1;}
                        if(thereisnothingthere(widgets[c]->x,widgets[c]->y-100-k,c)!=32){temp2=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y,c)!=32){temp3=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y,c)!=32){temp4=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y+100+k,c)!=32){temp5=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y-100-k,c)!=32){temp6=1;}
                        if(thereisnothingthere(widgets[c]->x-100-k,widgets[c]->y+100+k,c)!=32){temp7=1;}
                        if(thereisnothingthere(widgets[c]->x+100+k,widgets[c]->y-100-k,c)!=32){temp8=1;}
                        if((widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x and !temp11)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x and !temp22)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x+100+k and !temp33)
                        or(widgets[kings]->y==widgets[c]->y and widgets[kings]->x==widgets[c]->x-100-k and !temp44)
                        or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x+100+k and !temp55)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x-100-k and !temp66)
                        or(widgets[kings]->y==widgets[c]->y+100+k and widgets[kings]->x==widgets[c]->x-100-k and !temp77)
                        or(widgets[kings]->y==widgets[c]->y-100-k and widgets[kings]->x==widgets[c]->x+100+k and !temp88))
                        {return 1;}
                        temp11=temp1;temp22=temp2;temp33=temp3;temp44=temp4;temp55=temp5;temp66=temp6;temp7=temp7;temp88=temp8;
                    }
                }
            }
    }
    return 0;
}

void gamemaster::knowhatistheretokwnow(vector<widget*> & figures)
{
    while(widgets.size()!=0)
    {
    widgets.pop_back();
    }
    widgets.insert(widgets.end(), figures.begin(), figures.end());
    figures[havetokill]->x=800;figures[havetokill]->y=800;

}

unsigned short gamemaster::thereisnothingthere(unsigned int __x, unsigned int __y, unsigned short self)
{
        for(size_t c=0;c<widgets.size();c++)
        {
            if(c!=self and widgets[c]->x==__x and widgets[c]->y==__y)
            {
                return c;
            }
        }
        return 32;

}

void gamemaster::checked(event ev)
{
    havetokill=32;line_checker=32;
    if(ev.type == ev_mouse and ev.button==0)
    {
        _x=ev.pos_x;
        _y=ev.pos_y;
    }
    if(ev.button==1 and ((late_target<=15 and target > 15) or (late_target>15 and target<=15)))
    {
         late_x=widgets[target]->x;late_y=widgets[target]->y;
            if (target<8)
            {
                if(widgets[target]->y==100 and _y<=widgets[target]->y+300 and _y>widgets[target]->y+200
                and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5
                and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y+100,target)and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y+200,target))
                {
                    widgets[target]->y+=200;
                    late_target=target;
                }
                if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5
                and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y+100,target))
                {

                    widgets[target]->y+=100;
                    late_target=target;
                }
                if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y+100,target);
                    if(32!=temp and 15<=temp)
                    {

                        widgets[target]->y+=100;widgets[target]->x+=100;
                        late_target=target;
                        havetokill=temp;
                    }

                }
                if( _y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y+100,target);
                    if(32!=temp and 15<=temp)
                    {

                        widgets[target]->y+=100;widgets[target]->x-=100;
                        late_target=target;
                        havetokill=temp;
                    }
                }
            }
            if (target>15 and target < 24)
            {
                if(widgets[target]->y==600 and _y>=widgets[target]->y-200 and _y<widgets[target]->y-100
                and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5
                and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y-100,target) and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y-200,target))
                {

                    widgets[target]->y-=200;
                    late_target=target;
                }
                if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5
                and 32==thereisnothingthere(widgets[target]->x,widgets[target]->y-100,target))
                {

                    widgets[target]->y-=100;
                    late_target=target;
                }
                if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y-100,target);
                    if(32!=temp and 15>temp)
                    {

                        widgets[target]->y-=100;widgets[target]->x+=100;
                        late_target=target;
                        havetokill=temp;
                    }

                }
                if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y-100,target);
                    if(32!=temp and 15>temp)
                    {

                        widgets[target]->y-=100;widgets[target]->x-=100;
                        late_target=target;
                        havetokill=temp;
                    }
                }
            }
            if (target==8 or target==9 or target==24 or target==25)
            {
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {

                        if((15<temp and (target==8 or target==9)) or ((temp<=15 or temp==32) and (target==24 or target==25)))
                        {

                            widgets[target]->y+=k+100;widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}

                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and (target==8 or target==9)) or ((temp<=15 or temp==32) and (target==24 or target==25)))
                        {

                            widgets[target]->y+=k+100;widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}

                }
                line_checker=32;
                 for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {
                        if((15<temp and (target==8 or target==9)) or ((temp<=15 or temp==32) and (target==24 or target==25)))
                        {

                            widgets[target]->y-=k+100;widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and (target==8 or target==9)) or ((temp<=15 or temp==32) and (target==24 or target==25)))
                        {

                            widgets[target]->y-=k+100;widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
            }
            if(target == 10 or target == 11 or target == 26 or target == 27)
            {

                    if(_y<=widgets[target]->y+300 and _y>widgets[target]->y+200
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y+200,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y+=200;widgets[target]->x+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(_y<=widgets[target]->y+300 and _y>widgets[target]->y+200
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y+200,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y+=200;widgets[target]->x-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }



                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x>=widgets[target]->x-205 and _x<widgets[target]->x-105)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-200,widgets[target]->y+100,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y+=100;widgets[target]->x-=200;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }

                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x<=widgets[target]->x+295 and _x>widgets[target]->x+195)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+200,widgets[target]->y+100,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y+=100;widgets[target]->x+=200;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }

                    if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x>=widgets[target]->x-205 and _x<widgets[target]->x-105)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-200,widgets[target]->y-100,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y-=100;widgets[target]->x-=200;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }

                    if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x<=widgets[target]->x+295 and _x>widgets[target]->x+195)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+200,widgets[target]->y-100,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y-=100;widgets[target]->x+=200;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }




                    if(_y>=widgets[target]->y-200 and _y<widgets[target]->y-100
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y-200,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y-=200;widgets[target]->x+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(_y>=widgets[target]->y-200 and _y<widgets[target]->y-100
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y-200,target);
                        if((15<temp and (target==10 or target==11)) or ((temp<=15 or temp==32) and (target==26 or target==27)))
                        {

                            widgets[target]->y-=200;widgets[target]->x-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }



            }
            if(target == 12 or target == 13 or target == 28 or target == 29)
            {
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5 and line_checker==32)
                    {

                        if((15<temp and (target==12 or target==13)) or ((temp<=15 or temp==32) and (target==28 or target==29)))
                        {

                            widgets[target]->y+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y,target);
                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and (target==12 or target==13)) or ((temp<=15 or temp==32) and (target==28 or target==29)))
                        {

                            widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5 and line_checker==32)
                    {
                        if((15<temp and (target==12 or target==13)) or ((temp<=15 or temp==32) and (target==28 or target==29)))
                        {

                            widgets[target]->y-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                 for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y,target);
                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {
                        if((15<temp and (target==12 or target==13)) or ((temp<=15 or temp==32) and (target==28 or target==29)))
                        {

                            widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
            }
            if(target == 30 or target == 14)
            {
                 for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {

                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y+=k+100;widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y+=k+100;widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                 for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y-=k+100;widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y-=k+100;widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y+100+k,target);
                    if(_y<=widgets[target]->y+200+k and _y>widgets[target]->y+100+k
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5 and line_checker==32)
                    {

                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x-100-k,widgets[target]->y,target);
                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x>=widgets[target]->x-105-k and _x<widgets[target]->x-5-k and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->x-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y-100-k,target);
                    if(_y>=widgets[target]->y-100-k and _y<widgets[target]->y-k
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5 and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->y-=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
                 for(unsigned int k=0;k<=700;k+=100)
                {
                    size_t temp=thereisnothingthere(widgets[target]->x+100+k,widgets[target]->y,target);
                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x<=widgets[target]->x+195+k and _x>widgets[target]->x+95+k and line_checker==32)
                    {
                        if((15<temp and target==14) or ((temp<=15 or temp==32) and target==30))
                        {

                            widgets[target]->x+=k+100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }
                    if(temp!=32){line_checker=temp;}
                }
                line_checker=32;
            }
            if(target == 31 or target == 15)
            {

                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y+100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y+=100;widgets[target]->x+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }



                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y+100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y+=100;widgets[target]->x-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }



                    if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y-100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y-=100;widgets[target]->x+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }



                    if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y-100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y-=100;widgets[target]->x-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }





                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y+100
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y+100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }




                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x>=widgets[target]->x-105 and _x<widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x-100,widgets[target]->y,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->x-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }
                    }




                    if(_y>=widgets[target]->y-100 and _y<widgets[target]->y
                    and _x<=widgets[target]->x+95 and _x>widgets[target]->x-5)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x,widgets[target]->y-100,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->y-=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }




                    if(_y<=widgets[target]->y+200 and _y>widgets[target]->y
                    and _x<=widgets[target]->x+195 and _x>widgets[target]->x+95)
                    {
                        size_t temp=thereisnothingthere(widgets[target]->x+100,widgets[target]->y,target);
                        if((15<temp and target==15) or ((temp<=15 or temp==32) and target==31))
                        {

                            widgets[target]->x+=100;
                            late_target=target;
                            {
                                havetokill=temp;
                            }
                        }

                    }




        }
            if((target>15 and chess(31)) or (target<=15 and chess(15)))
            {
                widgets[target]->x=late_x;widgets[target]->y=late_y;havetokill=32;
                if(target>15){late_target=-1;}else{late_target=32;}
            }

    }
}
