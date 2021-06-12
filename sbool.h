#ifndef SBOOL
#define SBOOL
class sbool
{
    char mem = 0b0000;
    public:
    sbool(const char& data)
        : mem(data) {}
    sbool() {}
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