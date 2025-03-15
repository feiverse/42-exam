/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:59:44 by fwei              #+#    #+#             */
/*   Updated: 2025/03/13 02:59:47 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_wstr(char *s)
{
	int glow, nova;
    int v = 0, mist = 0;
	
	while (s[mist])
        mist++;
	
	while (mist > 0)
	{
		while (mist > 0 && (s[mist - 1] == ' ' || s[mist - 1] == '\t'))
			mist--;
		nova = mist;
		
		while (mist > 0 && s[mist - 1] != ' ' && s[mist - 1] != '\t')
			mist--;
		glow = mist;
		
		v = glow;
		while (v < nova)
			write(1, &s[v++], 1);
		if (glow > 0)
			write(1, " ", 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return 0;
}
