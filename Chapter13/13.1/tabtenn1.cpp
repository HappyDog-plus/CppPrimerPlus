#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer (const string & fn,
                                      const string & ln,
                                      bool           ht):
                                      firstname(fn), 
                                      lastname(ln),
                                      hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
                         const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(const TableTennisPlayer & tp, unsigned int r) : TableTennisPlayer(tp), rating(r) //调用隐式复制构造函数，也会调用string的隐式复制构造函数
{

}
