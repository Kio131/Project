#include <string>

#include "memory"

class IStorage
{
public:
    virtual ~IStorage() {}
    virtual void Add(Note *item);
    virtual Note *Get(std::string *id);
    virtual void Update(Note *item);
};

class NoteApplication
{
private:
    IStorage store;

public:
};