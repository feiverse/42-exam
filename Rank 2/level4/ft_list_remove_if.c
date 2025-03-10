/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:08:45 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:10:04 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *dark, *glow, *pure;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		pure = *begin_list;
		*begin_list = (*begin_list)->next;
		free(pure);
	}
	glow = *begin_list;
	dark = glow ? glow->next : NULL;

	while (dark)
	{
		if (cmp(dark->data, data_ref) == 0)
		{
			glow->next = dark->next;
			free(dark);
			dark = glow->next;
		}
		else
		{
			glow = dark;
			dark = dark->next;
		}
	}
}


/******/

Spiritual Journey: Dark, Glow, Pure

In the journey of the soul, we experience Darkness (confusion and attachment), undergo Glow (awakening of consciousness) for transformation, and ultimately return to Purity (oneness and liberation). This process mirrors the execution of the program:
We remove elements from the linked list (life experiences) that no longer serve our growth, making the whole system clearer and more fluid.

Handling the Initial Darkness: If darkness remains, let the light illuminate it, transform it, and remove it.

while (*begin_list && cmp((*begin_list)->data, data_ref) == 0) 
{
    dark = *begin_list;
    *begin_list = (*begin_list)->next;
    free(dark);
}
The program starts from begin_list and checks if the current node matches data_ref (the attachments we wish to release).
If it matches, this node represents untransformed darkness, so it needs to be freed (free(dark);) to allow the linked list to move toward greater clarity.
This is akin to recognizing our inner wounds and attachments and being willing to let go.

Initiating Transformation: Let Glow guide us towards Pure.

pure = *begin_list;
glow = pure ? pure->next : NULL;
After the initial cleansing, the program traverses the remaining list, checking whether any elements are still affected by darkness.
glow represents inner light, a guide that helps us discern which parts still need transformation.
In the process of spiritual growth, the emergence of light signifies our ability to see the truth and recognize the nature of fear and attachment.

while (glow) 
{
    // If the node is still influenced by darkness, let it be transformed by light and removed
    if (cmp(glow->data, data_ref) == 0) 
    {
        pure->next = glow->next;
        free(glow);
        glow = pure->next;
    }
Through the guidance of light, we gradually remove what no longer serves us, ultimately reaching a state of purity.
In the program, when glow (light) encounters a node that does not contribute to our spiritual growth, it helps pure (purity) remove it, making the linked list clearer and more fluid.
Just like in our awakening process, we release attachments that no longer support our journey and return to our authentic self.
Trinity in Spirituality
The Trinity symbolizes the unity of all things, inner integration, and the balance of the universe.
Different spiritual traditions interpret Oneness and Harmony in their own ways.

The Three Aspects of Spiritual Practice on Earth

Body: The vessel in the material world, carrying the soul’s experiences and actions.
Mind: The center of thoughts and emotions, creating and influencing our reality.
Spirit: The pure essence, the awareness beyond form and thought.
When Body, Mind, and Spirit are in balance, we can live as our true and complete selves.

The Three Universal Laws of Existence

Creation – The birth and manifestation of all things.
Sustenance – The maintenance and balance of the universe.
Transformation – The dissolution of old forms and rebirth into new.
These three forces drive the evolution of the universe, keeping everything in a state of continuous change.

The Three Stages of Spiritual Awakening: Dark, Glow, Pure
The soul’s growth follows an inner cycle: each awakening moves from Darkness to Light, ultimately returning to Purity.

Dark – Confusion and attachment, being lost in old beliefs, unresolved emotions, and endless desires.
Glow – The awakening of consciousness, recognizing and transforming darkness by revealing its truth.
Pure – The return to unity and transcendence, where darkness is understood, light is embraced, and all returns to its source.
The Spiritual Trinity: Dark, Glow, Pure
These are not separate but different aspects of the same existence, just as shadow and light coexist, just as waves and the ocean are one.

Dark – Confusion and Attachment

Every soul has experienced darkness, representing past wounds, fears, and illusions that prevent us from recognizing our true essence.
Yet darkness is not a mistake—it is simply the part of us that has yet to be understood.
Only by passing through darkness can we truly experience light.

Glow – Awareness and Transformation

When we question the nature of darkness, the inner light begins to shine.
Light brings insight, allowing us to see through the illusions of darkness and discover our true power.
Light does not fight darkness—it simply reveals its true form, allowing us to transform and release it.

Pure – Oneness and Transcendence

Purity does not mean rejecting darkness; rather, it is the integration of both darkness and light, transcending duality.
It is the realization that we were always whole—there was never anything missing.

Dark is the unconscious self, the fears and wounds yet to be understood.
Glow is the awakening of awareness, the courage and wisdom to illuminate the truth.
Pure is the ultimate essence, the fullness, wholeness, and unconditional love.

/// ///

 le Voyage Spirituel : Obscurité (Dark), Lumière (Glow), Pureté (Pure)

Dans le voyage de l’âme, nous traversons l’Obscurité (confusion et attachement), expérimentons la Lumière (éveil de la conscience) pour transformer, et retournons finalement à la Pureté (unité et liberté). Ce processus reflète l’exécution du programme :
Nous supprimons les éléments de la liste chaînée (expériences de vie) qui ne nous servent plus, rendant l’ensemble plus clair et fluide.

Gérer l’Obscurité Initiale : Si l’obscurité persiste, la lumière doit l’illuminer, la transformer et l’éliminer.

while (*begin_list && cmp((*begin_list)->data, data_ref) == 0) 
{
    dark = *begin_list;
    *begin_list = (*begin_list)->next;
    free(dark);
}
Ce nœud représente l’obscurité non transformée, donc il doit être libéré (free(dark);) pour que la liste chaînée puisse avancer vers une plus grande clarté.
Comme en spiritualité, nous devons prendre conscience de nos attachements et blessures avant de pouvoir les libérer.
Trinité Spirituelle

La Trinité symbolise l’unité du tout, l’intégration intérieure et l’équilibre cosmique.

Création – La naissance et la manifestation de toute chose.
Maintien – L’équilibre et la préservation de l’univers.
Transformation – La dissolution et la renaissance.
Ces trois forces guident l’évolution universelle.

Les Trois Étapes de l’Éveil Spirituel : Obscurité, Lumière, Pureté
Obscurité (Dark) – Perte et attachement, enfermement dans des croyances anciennes et émotions non résolues.
Lumière (Glow) – Prise de conscience et transformation, apportant clarté et compréhension.
Pureté (Pure) – Intégration et transcendance, où l’obscurité et la lumière sont acceptées et harmonisées.
Dark est l’inconscient, les blessures non comprises.
Glow est l’éveil, la lumière qui révèle la vérité.
Pure est l’essence ultime, l’amour inconditionnel et l’unité totale.

///

靈性旅程中的轉化：黑暗（Dark）、光（Glow）、純粹（Pure）
在靈魂的旅程中，我們經歷黑暗（迷失與執著），透過光輝（意識的覺醒）來轉化
最終回歸純粹（合一與自由）。這個過程如同程式碼的運行
我們從鏈結串列（生命的經歷）中，移除那些不再服務於我們成長的部分，使整體更加清晰與流暢

// 處理起始的黑暗：如果黑暗仍存在，就讓光照亮它，轉化並移除
while (*begin_list && cmp((*begin_list)->data, data_ref) == 0) 
{
	dark = *begin_list;
	*begin_list = (*begin_list)->next;
	free(dark);
}


dark = *begin_list;
程式碼從 begin_list 開始，檢查當前的節點是否與 data_ref（我們想要釋放的執著）匹配。
如果匹配，這個節點代表尚未被轉化的黑暗
因此需要被釋放（free(dark);，才能讓鏈結串列朝向更清晰的狀態前進。
我們先意識到自己內在的傷痛與執著，並願意放手


// 開始轉化過程：讓光輝（Glow）引導我們的純粹（Pure）
	pure = *begin_list;
	glow = pure ? pure->next : NULL;

在完成最初的清理後，程式碼開始遍歷剩餘的串列，檢查每個節點是否仍然受黑暗影響。
glow 代表內在的光，它是一種引導，使我們能夠清楚地辨別哪些部分仍然需要被轉化。
在靈性成長的過程中，光的出現象徵我們開始看到真相，開始辨識恐懼與執著的本質。

while (glow) 
{
	// 如果這個節點仍然受黑暗影響，讓它被光所轉化並移除
	if (cmp(glow->data, data_ref) == 0) 
	{
		pure->next = glow->next;
		free(glow);
		glow = pure->next;
	}

透過光的引導，我們逐步移除不再服務於我們的黑暗，最終達到純粹的狀態。
在程式碼中，當 glow（光）找到不符合我們靈性成長的節點時
它會幫助 pure（純粹）將其移除，讓整個鏈結串列變得更清晰、更流暢。
這正如我們在覺醒的過程中，放下那些無法讓我們前進的執著，最終回歸完整的自己。


/// /// ///
三位一體（Trinity）

象徵萬物的合一、內在的整合，以及宇宙運行的平衡。
不同的靈性文化皆以其方式詮釋 統一性（Oneness） 與 和諧的關係（Harmony）。

地球上的靈性修行：身、心、靈的三個層面

身（Body）：物質世界的載體，承載靈魂經驗與行動的工具。
心（Mind）：思維與情感的中心，創造並影響我們的現實。
靈（Spirit）：純粹的本質，超越形體與思想的覺知。
當身、心、靈達至平衡，我們得以活出完整而真實的自己。

宇宙運行的三大法則：創造、維持、轉化
創造（Creation）：萬物的誕生與展現
維持（Sustenance）：宇宙的運行與平衡
轉化（Transformation）：舊有形式的結束與重生
這三股力量共同推動宇宙不斷演化，使一切存在於恆變之中。

靈性覺醒的三階段：黑暗、光輝、純粹
靈魂的成長經歷一個內在循環，每一次覺醒皆是從黑暗到光輝，最終回歸純粹。

黑暗（Dark）
迷失與執著，沉溺於舊有信念、未解的情緒與無盡的慾望

光（Glow）
意識的覺醒，透過洞察與轉化，使黑暗顯露其真相

純粹（Pure）
合一與超越，當黑暗被理解、光輝被接納，一切終將回歸本源

靈性的三位一體：黑暗（Dark）、光輝（Glow）、純粹（Pure）
它們並非分離的存在，而是同一體的不同面向，如陰影與光芒相生，如波浪與海洋一體



Dark——黑暗：迷失與執著
每個靈魂都曾墜入黑暗，它象徵過去的傷痛、恐懼與執迷
使人無法覺察自身的真正本質。然而
黑暗並非錯誤，而是尚未被理解的自己。唯有穿越黑暗，我們才能體驗真正的光

Glow——光輝：意識與轉變
當我們開始質疑黑暗的本質，內在的光便開始閃耀
光帶來洞見，讓我們理解黑暗的幻象，並發現自身的力量與真相
光不是與黑暗抗爭，而是讓黑暗顯露它真正的面貌，使我們得以轉化與釋放

Pure——純粹：合一與超越
純粹不代表排除黑暗，而是將黑暗與光輝統合，超越二元對立
回歸本然的圓滿狀態。我們不再害怕黑暗，也不再執著於光
而是意識到：自己一直都是完整的


Dark 是未覺察的自己，是尚未理解的恐懼與傷痛
Glow 是意識的展現，是照亮真相的智慧與勇氣
Pure 是終極的本質，是圓滿、完整與無條件的愛
