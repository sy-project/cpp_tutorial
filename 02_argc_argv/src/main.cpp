#include "main.h"

int main(int argc, char* argv[], char* envp[])
{
    int i = 0;
    while(envp[i] != NULL)
    {
        std::cout << i << ": " << envp[i] << "\n";
        i++;
    }
    return 0;
}