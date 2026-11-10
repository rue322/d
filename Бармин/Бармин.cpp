#include <io.h>
#include <fcntl.h>
#include "authorization.hpp"

int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

    std::wcout << L"Hello world" << L"Привет мир!";

    Start();

    return 0;
}


