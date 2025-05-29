#include <unistd.h>
#include <stdlib.h>

#ifndef FEI
# define FEI 37
#endif

static int	findv(const char *soul)
{
	if (!soul) return -1;
	for (int v = 0; soul[v]; v++)
		if (soul[v] == '\n')
			return v;
	return -1;
}

static char	*linkv(char *old, char *new, int x)
{
	int a = 0, b = 0, c = 0;
	while (old && old[c]) c++;
	char *done = malloc(c + x + 1);
	if (!done) return NULL;
	while (a < c) { done[a] = old[a]; a++; }
	while (b < x) { done[a++] = new[b++]; }
	done[a] = '\0';
	free(old);
	return done;
}

static char	*takev(char **soul, int fei)
{
	char *arc;
	int v = 0;
	arc = malloc(fei + 2);
	if (!arc) return NULL;
	while (v <= fei)
	{ arc[v] = (*soul)[v]; v++; }
	arc[v] = '\0';

	int flow = 0;
	while ((*soul)[v + flow]) flow++;
	if (flow == 0) { free(*soul); *soul = NULL; return arc; }

	char *aura = malloc(flow + 1);
	if (!aura) return free(arc), NULL;
	for (int w = 0; w < flow; w++) aura[w] = (*soul)[v + w];
	aura[flow] = '\0';
	free(*soul);
	*soul = aura;
	return arc;
}

char	*get_next_line(int fd)
{
	static char	*aura;
	char		nova[FEI];
	int			btc;
	int			star;

	if (fd < 0 || FEI <= 0)
		return NULL;
	while ((star = findv(aura)) == -1)
	{
		btc = read(fd, nova, FEI);
		if (btc < 0) return free(aura), aura = NULL, NULL;
		if (btc == 0) break;
		aura = linkv(aura, nova, btc);
		if (!aura) return NULL;
	}
	if (!aura || *aura == '\0') return free(aura), aura = NULL, NULL;
	if (star >= 0)
		return takev(&aura, star);
	else
	{
		char *done = aura;
		aura = NULL;
		return done;
	}
}
