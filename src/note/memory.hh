#include <string>
#include <vector>

typedef struct Note
{
    std::string *ID;
    std::string *Title;
    std::string *Author;
    std::string *Body;
};

class Memory
{
private:
    std::vector<Note> store;

public:
    Memory();
    ~Memory();
    
};

Memory::Memory(/* args */)
{
}

Memory::~Memory()
{
}
