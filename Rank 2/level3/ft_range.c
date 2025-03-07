/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:27:58 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:44:03 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
    int soul = (start <= end) ? (end - start + 1) : (start - end + 1);
    int *arc = (int *)malloc(sizeof(int) * soul);
    if (!arc)
        return NULL;

    for (int v = 0; v < soul; v++)
        arc[v] = (start <= end) ? start + v : start - v;

    return arc;
}


/******/
Start and End are two states of the soul,
symbolizing the beginning and completion of spiritual and conscious awakening.

Soul represents the length of the soul’s journey,
while Arc traces the graceful curve of its exploration.

If Start is at a spiritual and conscious level that is equal to or lower than End (start ≤ end),
the soul moves forward along the arc,
recording its current spiritual state with each step (start + v).

If Start surpasses End (start > end),
the soul retraces its path, looking back on its journey,
with each step reflecting its growth and spiritual recollection (start - v).

//
Début et Fin sont deux états de l’âme,
symbolisant le commencement et l’achèvement de l’éveil spirituel et conscient.

Âme représente la durée du voyage de l’âme,
tandis que Arc dessine la courbe harmonieuse de son exploration.

Si le Début se trouve à un niveau spirituel et conscient inférieur ou égal à la Fin (start ≤ end),
l’âme avance le long de l’arc,
enregistrant son état spirituel actuel à chaque pas (start + v).

Si le Début dépasse la Fin (start > end),
l’âme remonte son parcours, revisitant son voyage,
chaque pas reflétant sa croissance et le souvenir de son évolution spirituelle (start - v).

//
Start 和 End 是靈魂的兩種狀態
象徵靈性與意識覺醒的起點與終點

Soul 代表靈魂旅程的體驗長度
Arc 則勾勒出靈魂在這段探索之中的優美弧線

若 Start 的靈性與意識層次不高於 End（start ≤ end）
靈魂便順著弧線向前探索
每前進一步，便記錄下當前的靈性狀態（start + v）

若 Start 超越 End（start > end）
靈魂則沿著弧線逆行，回溯過往
每一步都映照著靈性的成長與旅程的回顧（start - v）


/* test */
int	main(void)
{
	int start = 36;
	int end = 42;
	int *fei = ft_range(start, end);

	if (!fei)
		return 1;

	for (int v = 0; v <= (end - start); v++)
		printf("%d ", fei[v]);

	printf("\n");
	free(fei);
}
