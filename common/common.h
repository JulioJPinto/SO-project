#ifndef COMMON_H
#define COMMON_H
#include <sys/time.h>
#include <sys/types.h>

#define MAX_PID_LENGTH 5
#define NAME_MAX 30
#define REQUEST_PIPE_PATH "request_pipe"

char *pid_running_msg(pid_t PID);

/*Converts the two fields in struct timeval into one integer in ms
  (ONLY USE FOR TIME INTERVALS, NOT TO DISPLAY TIME SINCE EPOCH)*/
long time_struct_to_long(struct timeval time);

char *time_taken_msg(struct timeval time);

char *get_pipe_name(pid_t pid);

// Calculates the time difference between two timestamps
struct timeval calculate_time_taken(struct timeval init_time,
                                    struct timeval finish_time);

#endif