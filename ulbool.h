#pragma once
#ifndef ULBOOL
#define ULBOOL
class ulbool
{
    long long mem = 0b0000'0000'0000'0000'0000'0000'0000'0000;
    public:
    ulbool(const long long& data)
        : mem(data) {}
    ulbool() {}
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