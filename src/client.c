#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
//#include <common.h>

int main(){
    int pipe = open("pipe",O_WRONLY);
    write(pipe,"ola\0",sizeof(char) * 4);
    close(pipe);
    return 0;
}