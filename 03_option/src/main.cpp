#include "main.h"

void usage(char* cmd)
{
    fprintf(stderr, "usage: \n");
    fprintf(stderr, "\t%s -h\t: show help\n", cmd);
    fprintf(stderr, "\t%s -b\t: say good-bye\n", cmd);
    fprintf(stderr, "\t%s -n <name>\t: greeting to <name>\n", cmd);
}

int main(int argc, char* argv[])
{
    int opt;
    char* greeting = "Hello, ";
    char* target = "world";

    while((opt= getopt(argc,argv,"bhn:")) != -1)
    {
        switch(opt)
        {
            case 'b':
            greeting = "Good-bye. ";
            break;
            case 'n':
            target = optarg;
            break;
            case 'h':
            default:
            usage(argv[0]);
            return EXIT_FAILURE;
        }
    }
    std::cout << greeting << target << std::endl;
    return 0;
}