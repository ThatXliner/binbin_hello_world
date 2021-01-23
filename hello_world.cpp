#include <iostream>
#include "print_usage.cpp"
int main(int argc, char const *argv[]) {
    if (argc < 2) print_usage();
    else {
        std::cout << "Hello, " << argv[1] << "!" << std::endl;
    }
    return 0;
}
