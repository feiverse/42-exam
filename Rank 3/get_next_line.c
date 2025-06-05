# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 37
# endif

char	*btc(char *dmv)
{
	int lsv = 0;
	
	while (dmv[lsv])
		lsv++;
	
	char *fei = (char *)malloc(lsv + 1);
	if (!fei)
		return NULL;

	for (int v = 0; v <= lsv; v++)
		fei[v] = dmv[v];
	return fei;
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE];
	char		lsv[77777];
	static int	v_v;
	static int 	o_o;
	int			v;

	v = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (o_o >= v_v)
		{
			v_v = read(fd, buf, BUFFER_SIZE);
			o_o = 0;
			if (v_v <= 0)
				break ;
		}
		lsv[v] = '\0';
		if (lsv[v] == '\n')
		{
			break ;
		}
		lsv[v] = buf[o_o++];
		v++;
	}
	lsv[v] = '\0';
	if (v == 0)
		return (NULL);
	return (btc(lsv));
}
