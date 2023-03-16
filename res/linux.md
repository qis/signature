# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1148 ns         1145 ns         4096
find avx tbb 06 16 kb        1169 ns         1164 ns         4096
find         06 16 kb        7531 ns         7563 ns         4096
find     tbb 06 16 kb        9138 ns         9176 ns         4096
find avx     12 16 kb        1247 ns         1240 ns         4096
find avx tbb 12 16 kb        1244 ns         1232 ns         4096
find         12 16 kb        4409 ns         4453 ns         4096
find     tbb 12 16 kb        7377 ns         7450 ns         4096
find avx     24 16 kb        1682 ns         1680 ns         4096
find avx tbb 24 16 kb        1691 ns         1685 ns         4096
find         24 16 kb        2689 ns         2727 ns         4096
find     tbb 24 16 kb        7252 ns         7290 ns         4096

scan avx     06 16 kb        6128 ns         6167 ns         4096
scan avx tbb 06 16 kb        6158 ns         6193 ns         4096
scan         06 16 kb        6003 ns         6047 ns         4096
scan     tbb 06 16 kb        6915 ns         6957 ns         4096
scan avx     12 16 kb        6133 ns         6173 ns         4096
scan avx tbb 12 16 kb        6211 ns         6262 ns         4096
scan         12 16 kb        6121 ns         6161 ns         4096
scan     tbb 12 16 kb        7622 ns         7702 ns         4096
scan avx     24 16 kb        6192 ns         6262 ns         4096
scan avx tbb 24 16 kb        6193 ns         6244 ns         4096
scan         24 16 kb        5842 ns         5884 ns         4096
scan     tbb 24 16 kb        7304 ns         7364 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2593 ns         2600 ns         4096
find avx tbb 06 64 kb        2618 ns         2613 ns         4096
find         06 64 kb       28641 ns        28725 ns         4096
find     tbb 06 64 kb       12977 ns        13027 ns         4096
find avx     12 64 kb        2533 ns         2526 ns         4096
find avx tbb 12 64 kb        2659 ns         2645 ns         4096
find         12 64 kb       15274 ns        15310 ns         4096
find     tbb 12 64 kb       10109 ns        10160 ns         4096
find avx     24 64 kb        6948 ns         6957 ns         4096
find avx tbb 24 64 kb        4033 ns         4025 ns         4096
find         24 64 kb        7671 ns         7711 ns         4096
find     tbb 24 64 kb        8646 ns         8727 ns         4096

scan avx     06 64 kb       21855 ns        21914 ns         4096
scan avx tbb 06 64 kb       21506 ns        21576 ns         4096
scan         06 64 kb       23712 ns        23790 ns         4096
scan     tbb 06 64 kb       14876 ns        14939 ns         4096
scan avx     12 64 kb       22508 ns        22572 ns         4096
scan avx tbb 12 64 kb       21842 ns        21901 ns         4096
scan         12 64 kb       21318 ns        21372 ns         4096
scan     tbb 12 64 kb       13963 ns        14025 ns         4096
scan avx     24 64 kb       25723 ns        21925 ns         4096
scan avx tbb 24 64 kb       20984 ns        21049 ns         4096
scan         24 64 kb       22199 ns        22260 ns         4096
scan     tbb 24 64 kb       15308 ns        15354 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       8842 ns         8835 ns         2048
find avx tbb 06 256 kb       8832 ns         8831 ns         2048
find         06 256 kb     108022 ns       108193 ns         2048
find     tbb 06 256 kb      29907 ns        29842 ns         2048
find avx     12 256 kb       8570 ns         8557 ns         2048
find avx tbb 12 256 kb       8548 ns         8528 ns         2048
find         12 256 kb      56975 ns        57062 ns         2048
find     tbb 12 256 kb      19278 ns        19137 ns         2048
find avx     24 256 kb      14460 ns        14462 ns         2048
find avx tbb 24 256 kb      14195 ns        14193 ns         2048
find         24 256 kb      29767 ns        29837 ns         2048
find     tbb 24 256 kb      15232 ns        15179 ns         2048

scan avx     06 256 kb      91241 ns        91335 ns         2048
scan avx tbb 06 256 kb      81815 ns        81932 ns         2048
scan         06 256 kb      87056 ns        87144 ns         2048
scan     tbb 06 256 kb      41549 ns        41478 ns         2048
scan avx     12 256 kb      83875 ns        83930 ns         2048
scan avx tbb 12 256 kb      81870 ns        81953 ns         2048
scan         12 256 kb      96355 ns        96496 ns         2048
scan     tbb 12 256 kb      38489 ns        38417 ns         2048
scan avx     24 256 kb      92680 ns        92714 ns         2048
scan avx tbb 24 256 kb      84005 ns        84074 ns         2048
scan         24 256 kb      80696 ns        80740 ns         2048
scan     tbb 24 256 kb      46923 ns        46831 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        61553 ns        61595 ns         1024
find avx tbb 06 1 mb        49732 ns        49611 ns         1024
find         06 1 mb       433530 ns       433762 ns         1024
find     tbb 06 1 mb        99048 ns        97781 ns         1024
find avx     12 1 mb        60036 ns        60070 ns         1024
find avx tbb 12 1 mb        57553 ns        57535 ns         1024
find         12 1 mb       225678 ns       225811 ns         1024
find     tbb 12 1 mb        69018 ns        69023 ns         1024
find avx     24 1 mb        71694 ns        71724 ns         1024
find avx tbb 24 1 mb        51992 ns        51902 ns         1024
find         24 1 mb       123623 ns       123725 ns         1024
find     tbb 24 1 mb        60192 ns        59912 ns         1024

scan avx     06 1 mb       335252 ns       335498 ns         1024
scan avx tbb 06 1 mb       105389 ns       105317 ns         1024
scan         06 1 mb       330902 ns       331030 ns         1024
scan     tbb 06 1 mb       132490 ns       132513 ns         1024
scan avx     12 1 mb       347128 ns       347340 ns         1024
scan avx tbb 12 1 mb       103983 ns       104015 ns         1024
scan         12 1 mb       349841 ns       350050 ns         1024
scan     tbb 12 1 mb       128939 ns       128897 ns         1024
scan avx     24 1 mb       340122 ns       340437 ns         1024
scan avx tbb 24 1 mb        98651 ns        98600 ns         1024
scan         24 1 mb       330959 ns       331121 ns         1024
scan     tbb 24 1 mb       143806 ns       143821 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       259103 ns       259070 ns          512
find avx tbb 06 4 mb       290559 ns       290543 ns          512
find         06 4 mb      1820198 ns      1820324 ns          512
find     tbb 06 4 mb       394440 ns       394334 ns          512
find avx     12 4 mb       238874 ns       238816 ns          512
find avx tbb 12 4 mb       294546 ns       294431 ns          512
find         12 4 mb       888627 ns       888561 ns          512
find     tbb 12 4 mb       358750 ns       358711 ns          512
find avx     24 4 mb       298282 ns       298278 ns          512
find avx tbb 24 4 mb       311974 ns       312028 ns          512
find         24 4 mb       483496 ns       483559 ns          512
find     tbb 24 4 mb       328984 ns       328858 ns          512

scan avx     06 4 mb      1362780 ns      1362837 ns          512
scan avx tbb 06 4 mb       454220 ns       454228 ns          512
scan         06 4 mb      1320078 ns      1320155 ns          512
scan     tbb 06 4 mb       501153 ns       501123 ns          512
scan avx     12 4 mb      1326178 ns      1326246 ns          512
scan avx tbb 12 4 mb       450522 ns       450150 ns          512
scan         12 4 mb      1376357 ns      1376357 ns          512
scan     tbb 12 4 mb       513820 ns       513801 ns          512
scan avx     24 4 mb      1379751 ns      1379841 ns          512
scan avx tbb 24 4 mb       457001 ns       456999 ns          512
scan         24 4 mb      1361840 ns      1361919 ns          512
scan     tbb 24 4 mb       504090 ns       504119 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      880531 ns       880409 ns           64
find avx tbb 06 16 mb      738769 ns       739034 ns           64
find         06 16 mb     6945775 ns      6945805 ns           64
find     tbb 06 16 mb      974439 ns       974791 ns           64
find avx     12 16 mb      896841 ns       896294 ns           64
find avx tbb 12 16 mb      739822 ns       739977 ns           64
find         12 16 mb     3546172 ns      3546166 ns           64
find     tbb 12 16 mb      819402 ns       819605 ns           64
find avx     24 16 mb     1116323 ns      1116097 ns           64
find avx tbb 24 16 mb      762342 ns       763014 ns           64
find         24 16 mb     2160884 ns      2112167 ns           64
find     tbb 24 16 mb      783859 ns       783891 ns           64

scan avx     06 16 mb     5348747 ns      5348331 ns           64
scan avx tbb 06 16 mb     1289942 ns      1290606 ns           64
scan         06 16 mb     5277053 ns      5277109 ns           64
scan     tbb 06 16 mb     1489575 ns      1489467 ns           64
scan avx     12 16 mb     5575891 ns      5576028 ns           64
scan avx tbb 12 16 mb     1201648 ns      1201138 ns           64
scan         12 16 mb     5306652 ns      5306705 ns           64
scan     tbb 12 16 mb     1492923 ns      1493003 ns           64
scan avx     24 16 mb     5283333 ns      5283322 ns           64
scan avx tbb 24 16 mb     1190753 ns      1190691 ns           64
scan         24 16 mb     5494195 ns      5494822 ns           64
scan     tbb 24 16 mb     1495313 ns      1494975 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3393638 ns      3393313 ns           32
find avx tbb 06 64 mb     2579603 ns      2579497 ns           32
find         06 64 mb    27398972 ns     27398900 ns           32
find     tbb 06 64 mb     3432975 ns      3429731 ns           32
find avx     12 64 mb     3421603 ns      3421512 ns           32
find avx tbb 12 64 mb     2596381 ns      2596888 ns           32
find         12 64 mb    13854203 ns     13853759 ns           32
find     tbb 12 64 mb     2798278 ns      2798209 ns           32
find avx     24 64 mb     4336969 ns      4336862 ns           32
find avx tbb 24 64 mb     2669753 ns      2669050 ns           32
find         24 64 mb     7501603 ns      7501387 ns           32
find     tbb 24 64 mb     2772016 ns      2771984 ns           32

scan avx     06 64 mb    21221500 ns     21221459 ns           32
scan avx tbb 06 64 mb     4242234 ns      4238725 ns           32
scan         06 64 mb    21235338 ns     21233378 ns           32
scan     tbb 06 64 mb     5362259 ns      5349912 ns           32
scan avx     12 64 mb    20816728 ns     20816862 ns           32
scan avx tbb 12 64 mb     4301716 ns      4299125 ns           32
scan         12 64 mb    21027719 ns     21027734 ns           32
scan     tbb 12 64 mb     5410141 ns      5383641 ns           32
scan avx     24 64 mb    20807516 ns     20808241 ns           32
scan avx tbb 24 64 mb     4248697 ns      4242850 ns           32
scan         24 64 mb    20709791 ns     20692047 ns           32
scan     tbb 24 64 mb     5447331 ns      5414913 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   14123962 ns     14123250 ns           16
find avx tbb 06 256 mb   10090606 ns     10023131 ns           16
find         06 256 mb  108931350 ns    108866431 ns           16
find     tbb 06 256 mb   13737256 ns     12919731 ns           16
find avx     12 256 mb   13828012 ns     13825762 ns           16
find avx tbb 12 256 mb    9979394 ns      9931769 ns           16
find         12 256 mb   55489056 ns     55489069 ns           16
find     tbb 12 256 mb   10714706 ns     10494475 ns           16
find avx     24 256 mb   17994712 ns     17994500 ns           16
find avx tbb 24 256 mb    9843244 ns      9718056 ns           16
find         24 256 mb   30723225 ns     30723325 ns           16
find     tbb 24 256 mb   10605400 ns     10456188 ns           16

scan avx     06 256 mb   85783306 ns     85719519 ns           16
scan avx tbb 06 256 mb   16425119 ns     15721194 ns           16
scan         06 256 mb   85394475 ns     85394700 ns           16
scan     tbb 06 256 mb   21152988 ns     20321594 ns           16
scan avx     12 256 mb   88175163 ns     88175381 ns           16
scan avx tbb 12 256 mb   16563088 ns     15525181 ns           16
scan         12 256 mb   83658944 ns     83595575 ns           16
scan     tbb 12 256 mb   21258931 ns     20351350 ns           16
scan avx     24 256 mb   87204506 ns     87204281 ns           16
scan avx tbb 24 256 mb   16617056 ns     15606512 ns           16
scan         24 256 mb   84776825 ns     84709488 ns           16
scan     tbb 24 256 mb   21445238 ns     20176731 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   29219663 ns     29219225 ns            8
find avx tbb 06 512 mb   20172762 ns     19488275 ns            8
find         06 512 mb  218342450 ns    218199912 ns            8
find     tbb 06 512 mb   26648088 ns     25271750 ns            8
find avx     12 512 mb   28256338 ns     28255750 ns            8
find avx tbb 12 512 mb   20039213 ns     19480213 ns            8
find         12 512 mb  110821650 ns    110821487 ns            8
find     tbb 12 512 mb   21602325 ns     20611625 ns            8
find avx     24 512 mb   37198687 ns     37198337 ns            8
find avx tbb 24 512 mb   20661775 ns     20248363 ns            8
find         24 512 mb   62606913 ns     62315475 ns            8
find     tbb 24 512 mb   21066025 ns     20336300 ns            8

scan avx     06 512 mb  166566450 ns    166437062 ns            8
scan avx tbb 06 512 mb   32835738 ns     31196288 ns            8
scan         06 512 mb  169206275 ns    169026363 ns            8
scan     tbb 06 512 mb   41985675 ns     38577512 ns            8
scan avx     12 512 mb  173868412 ns    173868537 ns            8
scan avx tbb 12 512 mb   33349738 ns     31230638 ns            8
scan         12 512 mb  172423612 ns    172296550 ns            8
scan     tbb 12 512 mb   42329875 ns     40125975 ns            8
scan avx     24 512 mb  166988650 ns    166814925 ns            8
scan avx tbb 24 512 mb   33588025 ns     31821488 ns            8
scan         24 512 mb  173517450 ns    173388088 ns            8
scan     tbb 24 512 mb   42705962 ns     40317675 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     58217312 ns     58217050 ns            8
find avx tbb 06 1 gb     40168975 ns     39592188 ns            8
find         06 1 gb    443055750 ns    442922875 ns            8
find     tbb 06 1 gb     54958750 ns     48850050 ns            8
find avx     12 1 gb     64898425 ns     64741812 ns            8
find avx tbb 12 1 gb     40223462 ns     39404938 ns            8
find         12 1 gb    231162700 ns    231034363 ns            8
find     tbb 12 1 gb     43330675 ns     39750450 ns            8
find avx     24 1 gb     72059775 ns     72059325 ns            8
find avx tbb 24 1 gb     40540388 ns     39045713 ns            8
find         24 1 gb    122323587 ns    122323400 ns            8
find     tbb 24 1 gb     42152900 ns     40830187 ns            8

scan avx     06 1 gb    361602162 ns    361475000 ns            8
scan avx tbb 06 1 gb     66588188 ns     64026112 ns            8
scan         06 1 gb    348336737 ns    348336375 ns            8
scan     tbb 06 1 gb     84272800 ns     78426575 ns            8
scan avx     12 1 gb    345418437 ns    345418200 ns            8
scan avx tbb 12 1 gb     66614887 ns     62415875 ns            8
scan         12 1 gb    344413688 ns    344413125 ns            8
scan     tbb 12 1 gb     84811400 ns     79014562 ns            8
scan avx     24 1 gb    348366325 ns    348366175 ns            8
scan avx tbb 24 1 gb     66707725 ns     62337900 ns            8
scan         24 1 gb    344395875 ns    344395713 ns            8
scan     tbb 24 1 gb     86357800 ns     81872700 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    121372713 ns    121267200 ns            8
find avx tbb 06 2 gb     80027988 ns     78468737 ns            8
find         06 2 gb    906995513 ns    906981838 ns            8
find     tbb 06 2 gb    109597388 ns     96975525 ns            8
find avx     12 2 gb    119742000 ns    119741025 ns            8
find avx tbb 12 2 gb     80068412 ns     78579362 ns            8
find         12 2 gb    455927300 ns    455797525 ns            8
find     tbb 12 2 gb     86496825 ns     80271400 ns            8
find avx     24 2 gb    148716725 ns    148642637 ns            8
find avx tbb 24 2 gb     82124650 ns     79531150 ns            8
find         24 2 gb    250090912 ns    250090512 ns            8
find     tbb 24 2 gb     84717162 ns     77871950 ns            8

scan avx     06 2 gb    739026013 ns    739022675 ns            8
scan avx tbb 06 2 gb    135884650 ns    130018650 ns            8
scan         06 2 gb    746264875 ns    746257050 ns            8
scan     tbb 06 2 gb    172995338 ns    163163575 ns            8
scan avx     12 2 gb    720550800 ns    720545150 ns            8
scan avx tbb 12 2 gb    133536338 ns    122306937 ns            8
scan         12 2 gb    678802025 ns    678664325 ns            8
scan     tbb 12 2 gb    160067713 ns    143280750 ns            8
scan avx     24 2 gb    666337825 ns    666198875 ns            8
scan avx tbb 24 2 gb    124262150 ns    113513000 ns            8
scan         24 2 gb    680249812 ns    680246912 ns            8
scan     tbb 24 2 gb    155862863 ns    149337137 ns            8
```

</details>

