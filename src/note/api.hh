#include <string>

#include "memory.hh"

class INote
{
public:
    virtual void Push(Note *item);
    virtual Note *Pull(std::string *id);
    virtual void Edit(Note *item);
};

class NoteAPI
{
private:
    INote note;

public:
    NoteAPI();
    ~NoteAPI();
    ServeAPI();
    Push();
    Pull();
    Edit();
};
