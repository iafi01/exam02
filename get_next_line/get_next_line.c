#include "get_next_line.h"

static char *charjoin(char *s, char c, int max)
{
	char *ret = malloc(max + 2);
	int i = -1;
	while(s[++i])
		ret[i] = s[i];
	ret[i++] = c;
	ret[i] = 0;
	free(s);
	return (ret);
}

int get_next_line(int fd, char **line)
{
	char c;
	int i, max = 0;
	if(line == 0)
		return -1;
	*line = malloc(1);
	*line[0] = 0;
	while((i = read(fd, &c, 1)) > 0)
	{
		if(c == '\n')
			break;
		*line = charjoin(*line, c, max++);
	}
	if (i == -1)
		return(-1);
	if (i == 1)
		return (1);
	return (0);
}
