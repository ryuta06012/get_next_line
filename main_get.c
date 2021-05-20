
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char *argv[])
{
    char *file_name;
    if (argc == 1)
    {
        file_name = "test.txt";
    }
    else
        file_name = argv[1];
    int fd = open(file_name, O_RDONLY);
    /*int reader = read(fd, buff, BUFFER_SIZE);
    printf("%d\n", reader);
    close(fd);
    return (0);*/
    // int fd = 999999;
    char *line;
    int status;

    printf("\n[START] %s\n\tfd: %d\n\n", file_name, fd);
    do{
        status = get_next_line(fd, &line);
        printf("status:  \t%d\n", status);
        printf("read txt:\t%s\n", line);
        free(line);
    }while (status == 1);
    printf("\n[FINISH] %s\n\tstatus: %d\n\n", file_name, status);
    
    close(fd);
    system("leaks a.out");
    return (0);
}