#include <stdio.h>
#include <errno.h>

#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <datawarp.h>


int main(int argc, char **argv)
{

    struct timespec t0, tf, dt;
    struct stat st;
    char *infile, *outfile;
    double dt_secs;
    int direction;
    int ret;

    if (argc < 3) {
        fprintf( stderr, "Syntax: %s <source> <destination>\n", argv[0] );
        return -EINVAL;
    }

    int ret_wait;
    infile = argv[1];
    outfile = argv[2];

    ret_wait = dw_stage_file_out(infile, outfile, DW_STAGE_IMMEDIATE);


    return 0;

}
