#pragma once
#ifndef LLBOOL
#define LLBOOL
class llbool
{
    int mem = 0b0000'0000'0000'0000;
    public:
    llbool(const int& data)
        : mem(data) {}
    llbool() {}
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