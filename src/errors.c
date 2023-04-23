#include <unistd.h>

#include "errors.h"

int print_error(int error) {
  int print_status;
  switch (error) {
  case WRONG_NUM_ARGUMENTS:
    print_status =
        write(STDOUT_FILENO,
              "Program usage: ./tracer <command> (options) (arguments)\n",
              sizeof(char) * 57);
    return print_status;
  case UNKNOWN_COMMAND:
    print_status = write(STDOUT_FILENO, "Unknown command\n", sizeof(char) * 17);
    return print_status;
  case UNKNOWN_OPTION:
    print_status = write(STDOUT_FILENO, "Unknown option\n", sizeof(char) * 16);
    return print_status;
  case FIFO_CREATING_ERROR:
    print_status =
        write(STDOUT_FILENO, "Error creating FIFO\n", sizeof(char) * 21);
    return print_status;
  default:
    return -1;
  }
}