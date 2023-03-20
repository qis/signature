# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       82773 ns        82808 ns         2048
data |  6 |     tbb |       18534 ns        18449 ns         2048
mask |  6 |         |       67870 ns        67907 ns         2048
mask |  6 |     tbb |       26524 ns        26448 ns         2048

data | 12 |         |       44365 ns        44406 ns         2048
data | 12 |     tbb |       14577 ns        14201 ns         2048
mask | 12 |         |       68062 ns        68084 ns         2048
mask | 12 |     tbb |       26846 ns        26760 ns         2048

data | 24 |         |       24100 ns        24142 ns         2048
data | 24 |     tbb |       12306 ns        12247 ns         2048
mask | 24 |         |       67629 ns        67704 ns         2048
mask | 24 |     tbb |       26825 ns        26747 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       37814 ns        37825 ns         1024
data |  6 | avx tbb |       28024 ns        27897 ns         1024
mask |  6 | avx     |       34389 ns        34455 ns         1024
mask |  6 | avx tbb |       27639 ns        27483 ns         1024

data | 12 | avx     |       37879 ns        37852 ns         1024
data | 12 | avx tbb |       28334 ns        28192 ns         1024
mask | 12 | avx     |       35458 ns        35524 ns         1024
mask | 12 | avx tbb |       27192 ns        27046 ns         1024

data | 24 | avx     |       35722 ns        35710 ns         1024
data | 24 | avx tbb |       27920 ns        27755 ns         1024
mask | 24 | avx     |       35184 ns        35199 ns         1024
mask | 24 | avx tbb |       26932 ns        26827 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      431872 ns       432031 ns         1024
data |  6 | avx     |       59246 ns        59264 ns         1024
data |  6 |     tbb |       55739 ns        55645 ns         1024
data |  6 | avx tbb |       40902 ns        40737 ns         1024
mask |  6 |         |      327425 ns       327530 ns         1024
mask |  6 | avx     |       55075 ns        55100 ns         1024
mask |  6 |     tbb |      102570 ns       102526 ns         1024
mask |  6 | avx tbb |       42034 ns        41889 ns         1024

data | 12 |         |      220629 ns       220681 ns         1024
data | 12 | avx     |       60026 ns        60014 ns         1024
data | 12 |     tbb |       46401 ns        46294 ns         1024
data | 12 | avx tbb |       42164 ns        42023 ns         1024
mask | 12 |         |      328964 ns       329064 ns         1024
mask | 12 | avx     |       56726 ns        56727 ns         1024
mask | 12 |     tbb |      102916 ns       102840 ns         1024
mask | 12 | avx tbb |       40434 ns        40317 ns         1024

data | 24 |         |      116924 ns       117009 ns         1024
data | 24 | avx     |       55824 ns        55841 ns         1024
data | 24 |     tbb |       44903 ns        44792 ns         1024
data | 24 | avx tbb |       41933 ns        41790 ns         1024
mask | 24 |         |      327793 ns       327892 ns         1024
mask | 24 | avx     |       55873 ns        55889 ns         1024
mask | 24 |     tbb |      102042 ns       101988 ns         1024
mask | 24 | avx tbb |       40990 ns        40848 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1705423 ns      1705502 ns          512
data |  6 | avx     |      235487 ns       235356 ns          512
data |  6 |     tbb |      327598 ns       327520 ns          512
data |  6 | avx tbb |      206906 ns       206816 ns          512
mask |  6 |         |     1312075 ns      1312172 ns          512
mask |  6 | avx     |      215460 ns       215272 ns          512
mask |  6 |     tbb |      468061 ns       467990 ns          512
mask |  6 | avx tbb |      195747 ns       194779 ns          512

data | 12 |         |      873960 ns       874037 ns          512
data | 12 | avx     |      237989 ns       237827 ns          512
data | 12 |     tbb |      282350 ns       282292 ns          512
data | 12 | avx tbb |      203690 ns       203580 ns          512
mask | 12 |         |     1316562 ns      1316658 ns          512
mask | 12 | avx     |      216012 ns       215881 ns          512
mask | 12 |     tbb |      473066 ns       472909 ns          512
mask | 12 | avx tbb |      197532 ns       196009 ns          512

data | 24 |         |      459455 ns       459361 ns          512
data | 24 | avx     |      220945 ns       220782 ns          512
data | 24 |     tbb |      253799 ns       253754 ns          512
data | 24 | avx tbb |      209825 ns       208298 ns          512
mask | 24 |         |     1318065 ns      1318121 ns          512
mask | 24 | avx     |      220201 ns       220037 ns          512
mask | 24 |     tbb |      467400 ns       467328 ns          512
mask | 24 | avx tbb |      198846 ns       198768 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6759750 ns      6759725 ns           64
data |  6 | avx     |      947833 ns       947817 ns           64
data |  6 |     tbb |      917336 ns       917394 ns           64
data |  6 | avx tbb |      686355 ns       686205 ns           64
mask |  6 |         |     5241936 ns      5241428 ns           64
mask |  6 | avx     |      840597 ns       840586 ns           64
mask |  6 |     tbb |     1604055 ns      1603917 ns           64
mask |  6 | avx tbb |      680213 ns       680172 ns           64

data | 12 |         |     3556736 ns      3556641 ns           64
data | 12 | avx     |      947081 ns       947050 ns           64
data | 12 |     tbb |      757634 ns       757603 ns           64
data | 12 | avx tbb |      689720 ns       689702 ns           64
mask | 12 |         |     5224106 ns      5210380 ns           64
mask | 12 | avx     |      840456 ns       840439 ns           64
mask | 12 |     tbb |     1607755 ns      1607798 ns           64
mask | 12 | avx tbb |      680706 ns       680677 ns           64

data | 24 |         |     1887941 ns      1887894 ns           64
data | 24 | avx     |      849055 ns       849014 ns           64
data | 24 |     tbb |      732650 ns       732745 ns           64
data | 24 | avx tbb |      681023 ns       681019 ns           64
mask | 24 |         |     5219850 ns      5219822 ns           64
mask | 24 | avx     |      844395 ns       844384 ns           64
mask | 24 |     tbb |     1608256 ns      1608325 ns           64
mask | 24 | avx tbb |      679584 ns       679564 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27059212 ns     27059144 ns           32
data |  6 | avx     |     3752928 ns      3752950 ns           32
data |  6 |     tbb |     3062434 ns      3062097 ns           32
data |  6 | avx tbb |     2450400 ns      2450291 ns           32
mask |  6 |         |    20611256 ns     20611209 ns           32
mask |  6 | avx     |     3229519 ns      3229859 ns           32
mask |  6 |     tbb |     5819381 ns      5818066 ns           32
mask |  6 | avx tbb |     2439713 ns      2439587 ns           32

data | 12 |         |    13761759 ns     13761513 ns           32
data | 12 | avx     |     3748337 ns      3747963 ns           32
data | 12 |     tbb |     2615922 ns      2615778 ns           32
data | 12 | avx tbb |     2443075 ns      2442519 ns           32
mask | 12 |         |    20610072 ns     20609919 ns           32
mask | 12 | avx     |     3219769 ns      3219700 ns           32
mask | 12 |     tbb |     5844447 ns      5844747 ns           32
mask | 12 | avx tbb |     2447841 ns      2446913 ns           32

data | 24 |         |     7215903 ns      7215859 ns           32
data | 24 | avx     |     3221494 ns      3221400 ns           32
data | 24 |     tbb |     2540819 ns      2541184 ns           32
data | 24 | avx tbb |     2441753 ns      2419522 ns           32
mask | 24 |         |    20755063 ns     20755016 ns           32
mask | 24 | avx     |     3272162 ns      3272403 ns           32
mask | 24 |     tbb |     5885628 ns      5885534 ns           32
mask | 24 | avx tbb |     2455278 ns      2455128 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107268075 ns    107244956 ns           16
data |  6 | avx     |    14682394 ns     14682200 ns           16
data |  6 |     tbb |    11693838 ns     11475675 ns           16
data |  6 | avx tbb |     9468100 ns      9467950 ns           16
mask |  6 |         |    82444456 ns     82407656 ns           16
mask |  6 | avx     |    12938663 ns     12938625 ns           16
mask |  6 |     tbb |    22647988 ns     21744269 ns           16
mask |  6 | avx tbb |     9413456 ns      9410956 ns           16

data | 12 |         |    54801706 ns     54762488 ns           16
data | 12 | avx     |    14736631 ns     14736437 ns           16
data | 12 |     tbb |     9969250 ns      9881325 ns           16
data | 12 | avx tbb |     9457669 ns      9457563 ns           16
mask | 12 |         |    82983731 ns     82983762 ns           16
mask | 12 | avx     |    12898181 ns     12898169 ns           16
mask | 12 |     tbb |    23090075 ns     21802006 ns           16
mask | 12 | avx tbb |     9441119 ns      9440975 ns           16

data | 24 |         |    28522856 ns     28483688 ns           16
data | 24 | avx     |    12894569 ns     12894412 ns           16
data | 24 |     tbb |     9636469 ns      9635906 ns           16
data | 24 | avx tbb |     9456106 ns      9455969 ns           16
mask | 24 |         |    82287300 ns     82250612 ns           16
mask | 24 | avx     |    13085375 ns     13085169 ns           16
mask | 24 |     tbb |    22956550 ns     21605844 ns           16
mask | 24 | avx tbb |     9431206 ns      9431163 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214447988 ns    214447112 ns            8
data |  6 | avx     |    29655450 ns     29655213 ns            8
data |  6 |     tbb |    23213337 ns     20636325 ns            8
data |  6 | avx tbb |    18769587 ns     18684775 ns            8
mask |  6 |         |   164382688 ns    164382750 ns            8
mask |  6 | avx     |    25762188 ns     25762013 ns            8
mask |  6 |     tbb |    45710287 ns     43109138 ns            8
mask |  6 | avx tbb |    18785050 ns     18581000 ns            8

data | 12 |         |   109563713 ns    109562650 ns            8
data | 12 | avx     |    29704662 ns     29704513 ns            8
data | 12 |     tbb |    19597862 ns     19515412 ns            8
data | 12 | avx tbb |    18786962 ns     18788575 ns            8
mask | 12 |         |   164519375 ns    164519387 ns            8
mask | 12 | avx     |    25763800 ns     25763538 ns            8
mask | 12 |     tbb |    45905900 ns     44678987 ns            8
mask | 12 | avx tbb |    18792575 ns     18792425 ns            8

data | 24 |         |    57051025 ns     57049950 ns            8
data | 24 | avx     |    25739413 ns     25739238 ns            8
data | 24 |     tbb |    19155137 ns     18932050 ns            8
data | 24 | avx tbb |    18829612 ns     18743413 ns            8
mask | 24 |         |   164708088 ns    164634338 ns            8
mask | 24 | avx     |    26318662 ns     26318512 ns            8
mask | 24 |     tbb |    46132087 ns     43948038 ns            8
mask | 24 | avx tbb |    18847450 ns     18773987 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429052838 ns    429006037 ns            8
data |  6 | avx     |    59722912 ns     59721987 ns            8
data |  6 |     tbb |    46073188 ns     43535263 ns            8
data |  6 | avx tbb |    37452100 ns     37452138 ns            8
mask |  6 |         |   329322025 ns    329242375 ns            8
mask |  6 | avx     |    51684200 ns     51683825 ns            8
mask |  6 |     tbb |    90500588 ns     85029912 ns            8
mask |  6 | avx tbb |    37437863 ns     37436725 ns            8

data | 12 |         |   218918025 ns    218840863 ns            8
data | 12 | avx     |    59675362 ns     59675238 ns            8
data | 12 |     tbb |    39070437 ns     37983437 ns            8
data | 12 | avx tbb |    37388175 ns     36885650 ns            8
mask | 12 |         |   328769250 ns    328768025 ns            8
mask | 12 | avx     |    51435775 ns     51435625 ns            8
mask | 12 |     tbb |    91686250 ns     85173362 ns            8
mask | 12 | avx tbb |    37490350 ns     37083125 ns            8

data | 24 |         |   114182487 ns    114181688 ns            8
data | 24 | avx     |    51969575 ns     51968588 ns            8
data | 24 |     tbb |    38243488 ns     37157762 ns            8
data | 24 | avx tbb |    37523612 ns     37042300 ns            8
mask | 24 |         |   328818362 ns    328736138 ns            8
mask | 24 | avx     |    52341537 ns     52339762 ns            8
mask | 24 |     tbb |    92744737 ns     88809725 ns            8
mask | 24 | avx tbb |    37481450 ns     37481650 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   858500237 ns    858494813 ns            8
data |  6 | avx     |   119021888 ns    118947725 ns            8
data |  6 |     tbb |    92267488 ns     87113275 ns            8
data |  6 | avx tbb |    74982787 ns     72968150 ns            8
mask |  6 |         |   658373988 ns    658288725 ns            8
mask |  6 | avx     |   103863150 ns    103863050 ns            8
mask |  6 |     tbb |   184660375 ns    167363937 ns            8
mask |  6 | avx tbb |    74885388 ns     73098763 ns            8

data | 12 |         |   438911487 ns    438909438 ns            8
data | 12 | avx     |   119300550 ns    119226338 ns            8
data | 12 |     tbb |    78300862 ns     73850350 ns            8
data | 12 | avx tbb |    75110387 ns     72516625 ns            8
mask | 12 |         |   658554650 ns    658483562 ns            8
mask | 12 | avx     |   103480675 ns    103479725 ns            8
mask | 12 |     tbb |   182854175 ns    163682700 ns            8
mask | 12 | avx tbb |    74956925 ns     72994950 ns            8

data | 24 |         |   228447163 ns    228443250 ns            8
data | 24 | avx     |   103645075 ns    103644037 ns            8
data | 24 |     tbb |    76256137 ns     74417313 ns            8
data | 24 | avx tbb |    74858563 ns     74847925 ns            8
mask | 24 |         |   657731112 ns    657654363 ns            8
mask | 24 | avx     |   104691562 ns    104690538 ns            8
mask | 24 |     tbb |   188869338 ns    177701512 ns            8
mask | 24 | avx tbb |    74923025 ns     73096875 ns            8
```

</details>

