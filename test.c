#include <stdio.h>

int main(int argc, char *argv[])
{

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argumnet2 = argv[1];
    
    printf("Number of arguments: %d", numberOfArguments);
    printf("Argumnet 1 is the program name: %s",argument1);
    printf("Argument 2 is the command line argument %s",argumnet2);

return 0;

}
