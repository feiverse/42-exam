#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 37
#endif

int findv(const char *soul)
{
	if (!soul) return -1;
	for (int v = 0; soul[v]; v++)
		if (soul[v] == '\n')
			return v;
	return -1;
}

char *linkv(char *gold, char *glow, int v)
{
	int ag = 0, ti = 0, pt = 0;
	while (gold && gold[pt]) pt++;
	char *done = malloc(pt + v + 1);
	if (!done) return NULL;
	while (ag < pt) { done[ag] = gold[ag]; ag++; }
	while (ti < v) { done[ag++] = glow[ti++]; }
	done[ag] = '\0';
	free(gold);
	return done;
}

char *takev(char **soul, int fei)
{
	char *lsv;
	int v = 0;
	lsv = malloc(fei + 2);
	if (!lsv) return NULL;
	while (v <= fei)
	{ lsv[v] = (*soul)[v]; v++; }
	lsv[v] = '\0';

	int dmt = 0;
	while ((*soul)[v + dmt]) dmt++;
	if (dmt == 0) { free(*soul); *soul = NULL; return lsv; }

	char *aura = malloc(dmt + 1);
	if (!aura) return free(lsv), NULL;
	for (int w = 0; w < dmt; w++) aura[w] = (*soul)[v + w];
	aura[dmt] = '\0';
	free(*soul);
	*soul = aura;
	return lsv;
}

char	*get_next_line(int fd)
{
	static char	*aura;
	char	nova[BUFFER_SIZE];
	int		btc;
	int		lsv;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	while ((lsv = findv(aura)) == -1)
	{
		btc = read(fd, nova, BUFFER_SIZE);
		if (btc < 0) return free(aura), aura = NULL, NULL;
		if (btc == 0) break;
		aura = linkv(aura, nova, btc);
		if (!aura) return NULL;
	}
	if (!aura || *aura == '\0') return free(aura), aura = NULL, NULL;
	if (lsv >= 0)
		return takev(&aura, lsv);
	else
	{
		char *done = aura;
		aura = NULL;
		return done;
	}
}
