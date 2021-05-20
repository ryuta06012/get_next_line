#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"
# include "stdlib.h"
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

int		new_line_return(char *mem);
int		get_next_line(const int fd, char **line);
size_t	ft_strlen (const char *str);
size_t	new_line_strlen(const char *line);
char	*ft_strjoin(char *s1, char const *s2);

#endif