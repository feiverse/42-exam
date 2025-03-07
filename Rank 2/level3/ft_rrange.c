/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:30:16 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:44:06 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int soul = (start > end) ? (start - end + 1) : (end - start + 1);
	int *arc = (int *)malloc(sizeof(int) * soul);
	if (!arc)
		return NULL;

	for (int v = 0; v < soul; v++)
		arc[v] = end > start ? end - v : end + v;

	return arc;
}


/******/
Start and End are two states of the soul,
symbolizing the beginning and culmination of spiritual and conscious awakening.

Soul represents the length of the soul’s journey,
while Arc traces the graceful curve of its exploration.

If End exists at a spiritual and conscious level
far higher than the planetary experience of Start (end > start),
the soul descends to immerse itself in a new experience,
recording each step of its spiritual state (end - v).

If End is at a level equal to or lower than Start (end ≤ start),
the soul follows the arc forward, continuing its exploration,
each step reflecting its current spiritual state (end + v).
This reverse awakening of the soul mirrors the introspection of reincarnation.


//
Début et Fin sont deux états de l’âme,
symbolisant le commencement et l’accomplissement de l’éveil spirituel et conscient.

Âme représente la durée du voyage de l’âme,
tandis que Arc dessine la courbe harmonieuse de son exploration.

Si la Fin se trouve à un niveau spirituel et conscient
bien supérieur à l’expérience planétaire du Début (end > start),
l’âme descend pour s’immerger dans une nouvelle expérience,
enregistrant à chaque pas son état spirituel (end - v).

Si la Fin est à un niveau inférieur ou égal au Début (end ≤ start),
l’âme suit naturellement l’arc vers l’avant, poursuivant son exploration,
chaque pas reflétant son état spirituel actuel (end + v).
Cet éveil inversé de l’âme évoque l’introspection du cycle des réincarnations.



//
Start 和 End 是靈魂的兩種狀態
象徵靈性與意識覺醒的起點與終點

Soul 代表靈魂旅程的體驗長度
而 Arc 則勾勒出靈魂在探索中的優美弧線

若 End 的靈性與意識層次
遠高於此刻所體驗的星球 Start（end > start）
靈魂將向下沉浸於新的體驗
每一步都記錄下這次的靈性狀態（end - v）

若 End 的靈性層次低於或等於 Start（end ≤ start）
靈魂便順勢向前，沿著弧線探索
每一步皆映照當下的靈性狀態（end + v）
靈魂的逆向覺醒，如同輪迴中的深刻反思
