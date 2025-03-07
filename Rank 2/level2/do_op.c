/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:50:44 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 14:50:46 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int a = atoi(av[1]);
		int b = atoi(av[3]);
		char o = av[2][0];

		if (o == '+') printf("%d", a + b);
		else if (o == '-') printf("%d", a - b);
		else if (o == '*') printf("%d", a * b);
		else if (o == '%') printf("%d", a % b);
		else if (o == '/') printf("%d", a / b);
	}
	printf("\n");
	return 0;
}
