#pragma once
#ifndef LBOOL
#define LBOOL
class lbool
{
    short mem = 0b0000'0000;
    public:
    lbool(const short& data)
        : mem(data) {}
    lbool() {}
    const bool operator[] (const int& index) const
    {
        return (mem >> index) & 1;
    }
    void pushData(const int& index, const bool& data)
    {
        mem |= data << index;
    }
};
#endif