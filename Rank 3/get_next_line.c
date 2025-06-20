#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 37
#endif

char	*findv(char *dmv)
{
	int fei = 0;

	while (dmv[fei])
		fei++;
	char *lsv = (char *)malloc(fei + 1);
	if (!lsv)
		return NULL;
	for (int v = 0; v <= fei; v++)
		lsv[v] = dmv[v];
	return lsv;
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE];
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
			v_v = read(fd, buf, BUFFER_SIZE);
			o_o = 0;
			if (v_v <= 0)
				break;
		}
		lsv[v] = buf[o_o++];
		if (lsv[v] == '\n')
		{
			v++;
			break;
		}
		v++;
	}
	lsv[v] = '\0';
	if (v == 0)
		return NULL;
	return (findv(lsv));
}