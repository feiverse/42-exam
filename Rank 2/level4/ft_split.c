Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);












#include <stdlib.h>

int	lim(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');	
}

int	galaxy(char *star)
{
	int	count = 0;

	while (*star)
	{
		while (*star && lim(*star))
			star++;
		if (*star)
		{
			count++;
			while (*star && !lim(*star))
				star++;
		}
	}
	return count;
}

char	*planet(char *s)
{
	int	arc = 0;
	
	while (s[arc] && !lim(s[arc]))
		arc++;
	char *fei = (char *)malloc(arc + 1);
	if (!fei)
		return NULL;
	for (int v = 0; v < arc; v++)
		fei[v] = s[v];
	fei[arc] = '\0';
	return fei;
}

char	**ft_split(char *str)
{
	int	fei = galaxy(str);
	char **verse = (char **)malloc((fei + 1) * sizeof(char *));
	
	if (!verse)
		return NULL;
	
	int v = 0;
	while (*str)
	{
		while (*str && lim(*str))
			str++;
		if (*str)
		{
			verse[v++] = planet(str);
			while (*str && !lim(*str))
				str++;
		}
	}
	verse[v] = NULL;
	return verse;
}


///***
In the boundless universe, countless galaxies are scattered across the cosmos.
They are separated by mysterious boundaries, like the limits of the universe,
formed by drifting interstellar dust (spaces, tabs, newlines).
These boundaries not only serve as barriers between galaxies but also mark the belonging of each celestial body.

lim (limit) . c
It helps us distinguish between different galaxies (' ', '\t', '\n').

galaxy . star
A galactic scanner that allows us to traverse the cosmic dust,
counting the stars within the visible galaxy, ensuring that no star is overlooked.

*planet . s

My interstellar collection device, designed to capture and record each celestial body's complete shape and radiance.

**ft_split . str

Represents a grand interstellar expedition.
As we set off, we journey through nebulae and cross cosmic boundaries,
gathering all the scattered planets in the universe.
We then carefully arrange them within our meticulously crafted universal atlas (verse),
constructing our very own stellar map.




    
///***
Dans l'univers infini, d'innombrables galaxies sont dispersées à travers le cosmos.
Elles sont séparées par des frontières mystérieuses, semblables aux limites de l'univers,
formées par une poussière interstellaire flottante (espaces, tabulations, sauts de ligne).
Ces frontières ne sont pas seulement des barrières entre les galaxies, mais aussi des marques délimitant l’appartenance de chaque astre.

lim (limit) .c
Elle nous aide à distinguer les différentes galaxies (' ', '\t', '\n').

galaxy .star

Un scanner galactique qui nous permet de traverser la poussière cosmique,
de compter les étoiles visibles dans la galaxie et de nous assurer qu'aucune ne soit oubliée.

planet .s

Mon dispositif de collection interstellaire, conçu pour capturer et enregistrer la silhouette et l'éclat de chaque planète.

ft_split .str

Représente une grande exploration interstellaire.
En partant, nous traversons les nébuleuses et franchissons les frontières cosmiques,
réunissant toutes les planètes dispersées dans l’univers.
Nous les disposons ensuite avec soin dans notre atlas universel (verse),
construisant ainsi notre propre carte stellaire.



///***
無垠的宇宙中，散布著無數的星系（galaxy）
它們之間由神秘的邊界隔開。這些邊界猶如宇宙的「界限」（limit）
由飄渺的星際塵埃（空格、製表符、換行符）構成
既是星系間的屏障，也是界定每顆星球歸屬的標誌

lim (limit) .c 
幫助我們分辨不同的星系 (' ', '\t', '\n') 

galaxy .star
是一部銀河掃描儀，使我們能夠穿越這片宇宙塵埃
細數眼前銀河中的星辰（star）數量，確保每顆星星都不會被遺漏

*plante .s
是我的星際收藏裝置，專門用來捕捉並記錄每顆星球完整的輪廓與光芒

**ft_split .str
代表著一段壯麗的星際探索之旅
啟程後，我們穿越星雲、跨越界限，收集所有散落在宇宙中的星球
並將它們有序排列在我們精心繪製的宇宙圖譜（verse）中，構建出屬於自己的星際地圖


// test
int main() 
{
    char *c = "   Bonjour   fei\tthis is  answers  !  \n";
    char **w = ft_split(c);

    for (int v = 0; w[v]; v++)
        printf("universe %d: %s\n", v + 1, w[v]);

    return 0;
}
