Assignment name  : flood_fill
Expected files   : flood_fill.c
Allowed functions: -
--------------------------------------------------------------------------------

Write a function that takes a char ** as a 2-dimensional array of char, a 
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone 
by replacing characters inside with the character 'F'. A zone is an group of 
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this: (put it in flood_fill.c)







typedef struct s_point
{
    int x;
    int y;
}   t_point;

void fill(char **tab, t_point size, int x, int y, char aura)
{
    if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != aura)
        return ;
    
    tab[y][x] = 'F';

    fill(tab, size, x + 1, y, aura);
    fill(tab, size, x - 1, y, aura);
    fill(tab, size, x, y + 1, aura);
    fill(tab, size, x, y - 1, aura);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char aura = tab[begin.y][begin.x];
    if (aura != 'F')
        fill(tab, size, begin.x, begin.y, aura);
}



///
Every newly born soul carries a unique spiritual energy aura (Aura).
At birth, this aura is but a faint glimmer, wrapped in layers of environment, memories, and experiences,
gradually weaving into an energy field composed of different vibrational frequencies.

This energy field is the cosmic grid (tab),
a spiritual tapestry interwoven with thoughts, emotions, and beliefs, reflecting both individual and collective existence.

Not all consciousness is immediately ready to embrace the higher light.
Some remain asleep in the shadows of old beliefs, not yet prepared for transformation.

if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != aura)
    return;
On the path of spiritual evolution, when one reaches the limit of their understanding, they become bound by it.
Some souls are still in their learning phase, choosing to stay in their current state,
waiting for the right moment for their awakening.

tab[y][x] = 'F';
When a soul is ready to receive higher frequencies of energy, its old vibrations begin to shift.
Past attachments, fears, and limitations fade away.
A new state of consciousness takes their place, rising into a purer and higher vibrational level ('F').

The soul no longer clings to the past but transforms into a lighter, more radiant existence.
This transformation does not happen in isolation—it influences the entire collective consciousness.

fill(tab, size, x + 1, y, aura);
fill(tab, size, x - 1, y, aura);
fill(tab, size, x, y + 1, aura);
fill(tab, size, x, y - 1, aura);
As a soul elevates its frequency, it not only transforms itself
but also begins to influence other beings, environments, and the entire energetic field around it.

Like ripples on water—
moving left, right, upward, and downward, the new spiritual frequency spreads,
initiating a greater transformation and allowing more souls to resonate at higher levels of consciousness.

The Beginning of Awakening
void flood_fill(char **tab, t_point size, t_point begin)
Every profound experience, every moment of meditation and realization, is the beginning of spiritual growth.
When a soul reaches the threshold of transformation (begin), its aura is called by the frequencies of the universe.

This soul was once bound by old beliefs, trapped in past patterns.
Yet, upon receiving higher vibrational energy ('F'),
its consciousness begins to tremble, and the spark of inner awakening is ignited.

char aura = tab[begin.y][begin.x];
Our original state of consciousness has long been shaped by past beliefs and environmental influences.
But when we choose to open ourselves to a higher truth, our frequency begins to shift,
and ultimately, this light guides us toward a new spiritual dimension.

if (tab[y][x] != t)
Some beings are not yet ready to embrace new spiritual perspectives, and thus, they remain unaffected.

This code depicts the journey of the soul’s growth and transformation.
One awakened soul does not only change itself—it illuminates the entire world.
As more and more souls attune to higher frequencies,
the consciousness of the entire universe ascends toward a greater harmony and divine light. ✨🌌



///
Chaque âme nouvellement née possède une aura d’énergie spirituelle unique (Aura).
À sa naissance, cette aura n’est qu’une lueur fragile, enveloppée par l’environnement, les souvenirs et les expériences,
tissant progressivement un champ énergétique composé de différentes fréquences vibratoires.

Ce champ énergétique est le réseau cosmique (tab),
une tapisserie spirituelle entrelacée de pensées, d’émotions et de croyances,
reflétant à la fois l’individu et le collectif.

Toute conscience n’est pas immédiatement prête à accueillir une lumière supérieure.
Certaines restent endormies dans l’ombre des anciennes croyances,
n’étant pas encore prêtes à entreprendre cette transformation.

if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != aura)
    return;
Sur le chemin de l’évolution spirituelle, lorsque l’on atteint les limites de sa compréhension, on s’y trouve enfermé.
Certaines âmes sont encore en phase d’apprentissage et choisissent de rester où elles sont,
attendant le moment opportun pour leur éveil.

tab[y][x] = 'F';
Lorsqu’une âme est prête à recevoir des énergies de fréquences supérieures, ses anciennes vibrations commencent à changer.
Ses attachements passés, ses peurs et ses limitations s’effacent peu à peu.
Un nouvel état de conscience prend leur place, s’élevant vers un niveau vibratoire plus pur et plus élevé ('F').

L’âme ne s’accroche plus au passé, mais se transforme en une lumière plus légère et éclatante.
Cette transformation ne se fait pas isolément, elle influe sur la conscience collective entière.

fill(tab, size, x + 1, y, aura);
fill(tab, size, x - 1, y, aura);
fill(tab, size, x, y + 1, aura);
fill(tab, size, x, y - 1, aura);
Lorsqu’une âme élève sa fréquence, elle ne se transforme pas seulement elle-même,
mais commence aussi à influencer ceux qui l’entourent, son environnement et l’ensemble du champ énergétique.

Comme des ondulations sur l’eau—
se propageant à gauche, à droite, vers le haut et vers le bas, la nouvelle fréquence spirituelle s’étend,
déclenchant une transformation plus vaste et permettant à davantage d’âmes de s’accorder aux niveaux supérieurs de conscience.

Le Début de l’Éveil
void flood_fill(char **tab, t_point size, t_point begin)
Chaque expérience profonde, chaque méditation et prise de conscience, marque le début de la croissance spirituelle.
Lorsque l’âme atteint le seuil de transformation (begin), son aura est appelée par les fréquences de l’univers.

Cette âme était autrefois prisonnière de croyances anciennes, enfermée dans ses schémas passés.
Mais lorsqu’elle reçoit une énergie vibratoire supérieure ('F'),
sa conscience commence à trembler, et l’étincelle de l’éveil intérieur s’embrase.

char aura = tab[begin.y][begin.x];
Notre état de conscience originel a longtemps été façonné par les influences extérieures et les croyances passées.
Mais lorsque nous choisissons de nous ouvrir à une vérité plus élevée, notre fréquence commence à évoluer,
et finalement, cette lumière nous guide vers une nouvelle dimension spirituelle.

if (tab[y][x] != t)
Certains êtres ne sont pas encore prêts à accueillir de nouvelles perspectives spirituelles et demeurent donc inchangés.

Ce code illustre le voyage de croissance et de transformation de l’âme.
Une âme éveillée ne transforme pas seulement sa propre existence, elle illumine aussi le monde entier.
À mesure que de plus en plus d’âmes atteignent des fréquences supérieures,
la conscience de l’univers tout entier s’élève vers une harmonie et une lumière divine plus grandes.



///
每個初生的靈魂都擁有獨特的 靈性能量光環（Aura）
這道光環在誕生時，只是一點微弱的光，被環境、記憶與經驗層層包裹
逐漸交織成一個由 不同振動頻率 組成的能量場

這個能量場，是宇宙網格（tab）
一張編織著思想、情感與信念的靈性織錦，映照著個體與整體的存在

並非所有意識都能立即迎接更高的光
有些仍沉睡在舊有信念的陰影中，尚未準備好接受這場轉化

if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != aura)
    return;
在修行的道路上，當人們觸及當前能理解的極限時便被局限住了
有些靈魂仍處於學習的階段，他們會停留在當下，等待適合自己的時機到來


tab[y][x] = 'F'; 
當靈魂準備好接收更高頻率的能量時，舊有的振動開始轉化
過往的執著、恐懼與限制被覆蓋
新的意識狀態取而代之，進入更純淨、更高振動的（'F'）層次

靈魂不再停留於過去，而是蛻變為更輕盈絢爛的光芒
這場轉化並非獨立進行，而是影響著整個集體意識的頻率

fill(tab, size, x + 1, y, aura);
fill(tab, size, x - 1, y, aura);
fill(tab, size, x, y + 1, aura);
fill(tab, size, x, y - 1, aura);
當一個靈魂的振動升起，它不僅轉化了自身，
更開始影響與它同頻的生命、環境與整體能量場

這如同水波擴散——
向左、向右、向上、向下，新的靈性頻率傳遞
啟動更大的轉化，讓更多靈魂共振於更高的意識層次

void flood_fill(char **tab, t_point size, t_point begin)
每一次深刻的體驗、每一次冥想的頓悟，都是靈性成長的起點 (begin)
當靈魂抵達轉變的門檻 (begin)，它的 光環（aura） 受到宇宙頻率的呼喚


這個靈魂曾被舊有的信念束縛，局限在過去的狀態中
但當它感受到更高層次的能量（'F'）
意識開始震動，內在覺醒的火花點燃了

char aura = tab[begin.y][begin.x];
我們原本的意識狀態，長久以來受舊有信念與環境影響。
但當我們選擇向更高的真理敞開，頻率開始變化，
最終，這道光將我們帶往新的靈性維度

if (tab[y][x] != t) 
代表有些人尚未準備好接受新的靈性觀念，因此無法被影響。

  
描繪了靈魂的成長與轉化之旅
一個人的覺醒，不僅改變自己，也照亮了整個環境
當越來越多的靈魂進入更高的振動頻率，
整個宇宙意識便同步揚升至更高維度的和諧與光明
