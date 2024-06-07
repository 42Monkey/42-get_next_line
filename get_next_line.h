#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h> // printf (main)
# include <fcntl.h> // open (main)
# include <stdlib.h> // malloc, free
# include <unistd.h> // read

char		*get_next_line(int fd);
char		*step_1_fd_to_stash(int fd, char *stash);
char		*step_2_extract_line(char *stash);
char		*step_3_new_stash(char *stash);

char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlen(const char *s);

#endif
