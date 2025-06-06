#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 37
#endif

char	*findv(char *dmv) //chasing dreams
{
	int lsv = 0; // if without acid
	while (dmv[lsv])
		lsv++; // looking for the tabs
	char *fei = (char *)malloc(lsv + 1); // find the dealer
	if (!fei) // if not what i want
		return NULL; // just don't but it.
	for (int v = 0; v <= lsv; v++) // keeping looking
		fei[v] = dmv[v]; //finally found
	return fei; // mission done
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE];
	static int	o_o = 0; // good
	static int	v_v = 0; // thinking
	char		lsv[77777]; //my soul space
	int			v = 0; // calm

	if (fd < 0 || BUFFER_SIZE <= 0) 
		return (NULL); // if empty tabs, no trip happend

	while (1) // took a tab
	{
		if (o_o >= v_v) // if good tab
		{
			v_v = read(fd, buf, BUFFER_SIZE); //read ur mind
			o_o = 0; // it's amazing trip
			if (v_v <= 0) // if someting wrong
				break ; // stop
		}
		lsv[v] = buf[o_o++]; // keep the truth
		if (lsv[v] == '\n') // if found some empty
		{
			v++; // thinking
			break ; //saved it
		}
		v++; // keep thinking
	}
	lsv[v] = '\0'; // stop trip
	if (v == 0) // if everything done
		return (NULL); // back universe
	return (findv(lsv)); // find next target
}