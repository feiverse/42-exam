#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 37
#endif

static char	*ft_strdup(const char *s)
{
	int i = 0;
	char *dup;

	while (s[i])
		i++;
	dup = malloc(i + 1);
	if (!dup)
		return NULL;
	for (int j = 0; j <= i; j++)
		dup[j] = s[j];
	return dup;
}

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	static int	o_o = 0;
	static int	v_v = 0;
	char		lsv[77777];
	int			v = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	
	while (1)
	{
		if (o_o >= v_v)
		{
			v_v = read(fd, buffer, BUFFER_SIZE);
			o_o = 0;
			if (v_v <= 0)
				break;
		}
		char c = buffer[o_o++];
		lsv[v++] = c;
		if (c == '\n')
			break;
	}
	if (v == 0)
		return NULL;
	lsv[v] = '\0';
	return ft_strdup(lsv);
}
