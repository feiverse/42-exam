/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:17:34 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:19:17 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	for (unsigned int v = 1; v < size; v++)
	{
		int fei = tab[v];
		int w = v - 1;
		
		while (w >= 0 && tab[w] > fei)
		{
			tab[w + 1] = tab[w];
			w = w - 1;
		}
		tab[w + 1] = fei;
	}
}




/* test */ 

int	main(int ac, char **av) 
{
	if (ac >= 2) 
	{
		unsigned int fei = ac - 1;
		int tab[fei];
		
		for (unsigned int v = 0; v < fei; v++)
		tab[v] = atoi(av[v + 1]);
		sort_int_tab(tab, fei);
		for (unsigned int v = 0; v < fei; v++)
			printf("%d ", tab[v]);
	}
	printf("\n");
	return 0;
}
