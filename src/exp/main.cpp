#include <pipewire/pipewire.h>

#include <iostream>

int main(int argc, char* argv[])
{
    pw_init(&argc, &argv);

    std::cout << "headers version: " << pw_get_headers_version() << "\n";
    std::cout << "library version: " << pw_get_library_version() << "\n";
}
