#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

    int stdout = 1;
    char *fmt =  "%d  %s  %d  %s\n"; // PARENT_PID  STATE  SIZE   NAME

    if(argc > 1){
      printf(stdout, "Usage: ps\n");
      exit();
    }

    // TODO: populate the info table
    // getprocs();

    // TODO: iterate over the info table
    printf(stdout,  fmt, -1, "STATE", 0, "NAME");

    exit();
}
