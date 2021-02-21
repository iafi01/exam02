static int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static char *ft_memcpy(char *dst, char *src, int n)
{
     int i = 0;
     while (i < n)
     {
         dst[i] = src[i];
         i++;
     }
     dst[i] = 0;
     return (dst);
}

int get_next_line(char **line)
{
    char c;
    char *str;
    int i = 0;
    int o = 0;
    char buf[99999];

    while (i < 99999)
        buf[i++] = 0;
    i = 0;
    while ((o = read(0, &c, 1)) > 1)
    {
        if (c == '\n')
            break;
        buf[i++] = c;
    }
    buf[i] = 0;
    if (!(str = (char *)malloc(ft_strlen(buf) + 1)))
        str = 0;
    ft_memcpy(str, buf, ft_strlen(buf) + 1);
    *line = str;
    return (o);
}
/*#include <stdio.h>
int main()
{
    char **line = NULL;
    printf("%d",get_next_line(line));
}*/