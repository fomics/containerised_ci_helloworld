#include <iostream>
#include <unistd.h>

// Some minor documentation
int main(int argc, char* argv[]) {
    char hostname[128];
    if (gethostname(hostname, sizeof(hostname)) != 0) {
        std::cerr << "Error getting hostname" << std::endl;
        return 1;
    }
    std::cout << "Newest hello world from " << hostname << std::endl;

    return 0;
}
