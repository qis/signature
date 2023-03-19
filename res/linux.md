# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1195 ns         1184 ns         4096
find avx tbb 06 16 kb        1150 ns         1139 ns         4096
find         06 16 kb        7629 ns         7666 ns         4096
find     tbb 06 16 kb        9002 ns         9067 ns         4096
find avx     12 16 kb        1111 ns         1086 ns         4096
find avx tbb 12 16 kb        1174 ns         1187 ns         4096
find         12 16 kb        4345 ns         4375 ns         4096
find     tbb 12 16 kb        7979 ns         8026 ns         4096
find avx     24 16 kb        1338 ns         1331 ns         4096
find avx tbb 24 16 kb        1298 ns         1273 ns         4096
find         24 16 kb        2702 ns         2731 ns         4096
find     tbb 24 16 kb        7672 ns         7713 ns         4096

scan avx     06 16 kb        6232 ns         6264 ns         4096
scan avx tbb 06 16 kb        8337 ns         8400 ns         4096
scan         06 16 kb        8316 ns         8368 ns         4096
scan     tbb 06 16 kb        6714 ns         6762 ns         4096
scan avx     12 16 kb        1110 ns         1076 ns         4096
scan avx tbb 12 16 kb        1229 ns         1242 ns         4096
scan         12 16 kb        8150 ns         8204 ns         4096
scan     tbb 12 16 kb        6758 ns         6796 ns         4096
scan avx     24 16 kb        1157 ns         1153 ns         4096
scan avx tbb 24 16 kb        1290 ns         1278 ns         4096
scan         24 16 kb        8353 ns         8409 ns         4096
scan     tbb 24 16 kb        6742 ns         6764 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2611 ns         2607 ns         4096
find avx tbb 06 64 kb        2448 ns         2470 ns         4096
find         06 64 kb       28181 ns        28240 ns         4096
find     tbb 06 64 kb       11015 ns        11046 ns         4096
find avx     12 64 kb        2489 ns         2471 ns         4096
find avx tbb 12 64 kb        2442 ns         2423 ns         4096
find         12 64 kb       14846 ns        14912 ns         4096
find     tbb 12 64 kb        9331 ns         9401 ns         4096
find avx     24 64 kb        2876 ns         2863 ns         4096
find avx tbb 24 64 kb        2871 ns         2871 ns         4096
find         24 64 kb        8416 ns         8447 ns         4096
find     tbb 24 64 kb        8593 ns         8640 ns         4096

scan avx     06 64 kb       22165 ns        22225 ns         4096
scan avx tbb 06 64 kb       30119 ns        30182 ns         4096
scan         06 64 kb       29025 ns        29090 ns         4096
scan     tbb 06 64 kb        9699 ns         9733 ns         4096
scan avx     12 64 kb        2390 ns         2395 ns         4096
scan avx tbb 12 64 kb        2675 ns         2637 ns         4096
scan         12 64 kb       30578 ns        30631 ns         4096
scan     tbb 12 64 kb        9774 ns         9816 ns         4096
scan avx     24 64 kb        2505 ns         2501 ns         4096
scan avx tbb 24 64 kb        2789 ns         2771 ns         4096
scan         24 64 kb       31126 ns        31186 ns         4096
scan     tbb 24 64 kb        9787 ns         9799 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       8613 ns         8586 ns         2048
find avx tbb 06 256 kb       7986 ns         7993 ns         2048
find         06 256 kb     109389 ns       109461 ns         2048
find     tbb 06 256 kb      20609 ns        20556 ns         2048
find avx     12 256 kb       7901 ns         7941 ns         2048
find avx tbb 12 256 kb       7537 ns         7561 ns         2048
find         12 256 kb      53789 ns        53849 ns         2048
find     tbb 12 256 kb      15664 ns        15584 ns         2048
find avx     24 256 kb       8580 ns         8586 ns         2048
find avx tbb 24 256 kb       8978 ns         8979 ns         2048
find         24 256 kb      29742 ns        29785 ns         2048
find     tbb 24 256 kb      13045 ns        12967 ns         2048

scan avx     06 256 kb      84293 ns        84384 ns         2048
scan avx tbb 06 256 kb     114342 ns       114412 ns         2048
scan         06 256 kb     114854 ns       114928 ns         2048
scan     tbb 06 256 kb      22175 ns        22111 ns         2048
scan avx     12 256 kb       7866 ns         7841 ns         2048
scan avx tbb 12 256 kb       8498 ns         8511 ns         2048
scan         12 256 kb     114935 ns       115026 ns         2048
scan     tbb 12 256 kb      22978 ns        22891 ns         2048
scan avx     24 256 kb       7977 ns         7994 ns         2048
scan avx tbb 24 256 kb       8577 ns         8580 ns         2048
scan         24 256 kb     116904 ns       116979 ns         2048
scan     tbb 24 256 kb      21822 ns        21711 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        55267 ns        55292 ns         1024
find avx tbb 06 1 mb        40712 ns        40576 ns         1024
find         06 1 mb       424060 ns       424205 ns         1024
find     tbb 06 1 mb        54866 ns        54775 ns         1024
find avx     12 1 mb        56094 ns        56138 ns         1024
find avx tbb 12 1 mb        41050 ns        40946 ns         1024
find         12 1 mb       218518 ns       218651 ns         1024
find     tbb 12 1 mb        44692 ns        44602 ns         1024
find avx     24 1 mb        57374 ns        57387 ns         1024
find avx tbb 24 1 mb        42765 ns        42661 ns         1024
find         24 1 mb       125368 ns       125441 ns         1024
find     tbb 24 1 mb        43770 ns        43687 ns         1024

scan avx     06 1 mb       332478 ns       332598 ns         1024
scan avx tbb 06 1 mb        64540 ns        64442 ns         1024
scan         06 1 mb       460498 ns       460695 ns         1024
scan     tbb 06 1 mb        65380 ns        65279 ns         1024
scan avx     12 1 mb        55904 ns        55924 ns         1024
scan avx tbb 12 1 mb        40530 ns        40394 ns         1024
scan         12 1 mb       466617 ns       466783 ns         1024
scan     tbb 12 1 mb        64620 ns        64522 ns         1024
scan avx     24 1 mb        57606 ns        57612 ns         1024
scan avx tbb 24 1 mb        40276 ns        40153 ns         1024
scan         24 1 mb       460692 ns       460881 ns         1024
scan     tbb 24 1 mb        64152 ns        64018 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       208061 ns       207977 ns          512
find avx tbb 06 4 mb       215992 ns       215878 ns          512
find         06 4 mb      1700007 ns      1700100 ns          512
find     tbb 06 4 mb       312627 ns       312538 ns          512
find avx     12 4 mb       222717 ns       222617 ns          512
find avx tbb 12 4 mb       224556 ns       224487 ns          512
find         12 4 mb       879546 ns       877968 ns          512
find     tbb 12 4 mb       264582 ns       264530 ns          512
find avx     24 4 mb       230487 ns       230371 ns          512
find avx tbb 24 4 mb       223804 ns       223658 ns          512
find         24 4 mb       488657 ns       488565 ns          512
find     tbb 24 4 mb       254783 ns       254721 ns          512

scan avx     06 4 mb      1309565 ns      1309710 ns          512
scan avx tbb 06 4 mb       328679 ns       328617 ns          512
scan         06 4 mb      1838725 ns      1838861 ns          512
scan     tbb 06 4 mb       327268 ns       327231 ns          512
scan avx     12 4 mb       220939 ns       220756 ns          512
scan avx tbb 12 4 mb       205559 ns       205501 ns          512
scan         12 4 mb      1850557 ns      1850712 ns          512
scan     tbb 12 4 mb       328389 ns       328294 ns          512
scan avx     24 4 mb       225739 ns       225662 ns          512
scan avx tbb 24 4 mb       221823 ns       221776 ns          512
scan         24 4 mb      1837559 ns      1837666 ns          512
scan     tbb 24 4 mb       342469 ns       341130 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      817570 ns       817559 ns           64
find avx tbb 06 16 mb      684623 ns       684828 ns           64
find         06 16 mb     6852270 ns      6852219 ns           64
find     tbb 06 16 mb      856609 ns       856605 ns           64
find avx     12 16 mb      855102 ns       855048 ns           64
find avx tbb 12 16 mb      683978 ns       683886 ns           64
find         12 16 mb     3485252 ns      3485259 ns           64
find     tbb 12 16 mb      749705 ns       749734 ns           64
find avx     24 16 mb      846283 ns       846261 ns           64
find avx tbb 24 16 mb      686952 ns       686961 ns           64
find         24 16 mb     1966925 ns      1966898 ns           64
find     tbb 24 16 mb      722567 ns       722773 ns           64

scan avx     06 16 mb     5211719 ns      5211706 ns           64
scan avx tbb 06 16 mb     1032897 ns      1033112 ns           64
scan         06 16 mb     7404958 ns      7404861 ns           64
scan     tbb 06 16 mb     1031092 ns      1031102 ns           64
scan avx     12 16 mb      850603 ns       850553 ns           64
scan avx tbb 12 16 mb      674372 ns       674322 ns           64
scan         12 16 mb     7388703 ns      7388703 ns           64
scan     tbb 12 16 mb     1028716 ns      1028686 ns           64
scan avx     24 16 mb      870723 ns       870677 ns           64
scan avx tbb 24 16 mb      689931 ns       690019 ns           64
scan         24 16 mb     7325488 ns      7325425 ns           64
scan     tbb 24 16 mb     1033691 ns      1033917 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3174047 ns      3174003 ns           32
find avx tbb 06 64 mb     2421972 ns      2422184 ns           32
find         06 64 mb    27029384 ns     27029356 ns           32
find     tbb 06 64 mb     2927756 ns      2927741 ns           32
find avx     12 64 mb     3184641 ns      3184553 ns           32
find avx tbb 12 64 mb     2418922 ns      2419169 ns           32
find         12 64 mb    13775897 ns     13775812 ns           32
find     tbb 12 64 mb     2548212 ns      2548650 ns           32
find avx     24 64 mb     3246878 ns      3246750 ns           32
find avx tbb 24 64 mb     2437519 ns      2437928 ns           32
find         24 64 mb     7589256 ns      7589156 ns           32
find     tbb 24 64 mb     2505725 ns      2499928 ns           32

scan avx     06 64 mb    20611247 ns     20611200 ns           32
scan avx tbb 06 64 mb     3654781 ns      3652897 ns           32
scan         06 64 mb    29104169 ns     29093091 ns           32
scan     tbb 06 64 mb     3643369 ns      3643034 ns           32
scan avx     12 64 mb     3183478 ns      3183503 ns           32
scan avx tbb 12 64 mb     2425619 ns      2426188 ns           32
scan         12 64 mb    29133784 ns     29133619 ns           32
scan     tbb 12 64 mb     3663928 ns      3662909 ns           32
scan avx     24 64 mb     3228669 ns      3228662 ns           32
scan avx tbb 24 64 mb     2431803 ns      2431609 ns           32
scan         24 64 mb    29107069 ns     29107419 ns           32
scan     tbb 24 64 mb     3630991 ns      3630978 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12470519 ns     12470244 ns           16
find avx tbb 06 256 mb    9378394 ns      9378463 ns           16
find         06 256 mb  107406231 ns    107354544 ns           16
find     tbb 06 256 mb   11026931 ns     10867069 ns           16
find avx     12 256 mb   12509975 ns     12509875 ns           16
find avx tbb 12 256 mb    9403025 ns      9403019 ns           16
find         12 256 mb   54935663 ns     54883456 ns           16
find     tbb 12 256 mb    9684606 ns      9671894 ns           16
find avx     24 256 mb   12804012 ns     12804013 ns           16
find avx tbb 24 256 mb    9397300 ns      9397219 ns           16
find         24 256 mb   30159125 ns     30102987 ns           16
find     tbb 24 256 mb    9605650 ns      9606487 ns           16

scan avx     06 256 mb   82221556 ns     82165706 ns           16
scan avx tbb 06 256 mb   13950881 ns     13872869 ns           16
scan         06 256 mb  116716994 ns    116662331 ns           16
scan     tbb 06 256 mb   13961912 ns     13927906 ns           16
scan avx     12 256 mb   12480819 ns     12480719 ns           16
scan avx tbb 12 256 mb    9374812 ns      9374819 ns           16
scan         12 256 mb  116448025 ns    116392075 ns           16
scan     tbb 12 256 mb   13916963 ns     13898000 ns           16
scan avx     24 256 mb   12874363 ns     12874281 ns           16
scan avx tbb 24 256 mb    9410000 ns      9409987 ns           16
scan         24 256 mb  116452931 ns    116398344 ns           16
scan     tbb 24 256 mb   14205862 ns     14187000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25010963 ns     25010787 ns            8
find avx tbb 06 512 mb   18646725 ns     18645487 ns            8
find         06 512 mb  214741112 ns    214740750 ns            8
find     tbb 06 512 mb   21897787 ns     21210438 ns            8
find avx     12 512 mb   25100163 ns     25099900 ns            8
find avx tbb 12 512 mb   18646637 ns     18646612 ns            8
find         12 512 mb  109528937 ns    109528788 ns            8
find     tbb 12 512 mb   19050812 ns     19050850 ns            8
find avx     24 512 mb   25756750 ns     25756475 ns            8
find avx tbb 24 512 mb   18717363 ns     18717275 ns            8
find         24 512 mb   60379875 ns     60379725 ns            8
find     tbb 24 512 mb   19106738 ns     19106788 ns            8

scan avx     06 512 mb  164426087 ns    164312638 ns            8
scan avx tbb 06 512 mb   27884975 ns     27302963 ns            8
scan         06 512 mb  233590038 ns    233484863 ns            8
scan     tbb 06 512 mb   27741963 ns     27107487 ns            8
scan avx     12 512 mb   24955725 ns     24955650 ns            8
scan avx tbb 12 512 mb   18637675 ns     18637712 ns            8
scan         12 512 mb  232887437 ns    232783100 ns            8
scan     tbb 12 512 mb   27591662 ns     27104013 ns            8
scan avx     24 512 mb   25684737 ns     25684575 ns            8
scan avx tbb 24 512 mb   18694663 ns     18694737 ns            8
scan         24 512 mb  232522525 ns    232522825 ns            8
scan     tbb 24 512 mb   27741475 ns     27331825 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50152175 ns     50151900 ns            8
find avx tbb 06 1 gb     37200088 ns     37198937 ns            8
find         06 1 gb    429812337 ns    429704988 ns            8
find     tbb 06 1 gb     43021188 ns     41927050 ns            8
find avx     12 1 gb     51159525 ns     51053913 ns            8
find avx tbb 12 1 gb     37257150 ns     37231413 ns            8
find         12 1 gb    219359650 ns    219247563 ns            8
find     tbb 12 1 gb     38149025 ns     37782975 ns            8
find avx     24 1 gb     51398338 ns     51397563 ns            8
find avx tbb 24 1 gb     37333850 ns     37306250 ns            8
find         24 1 gb    120392425 ns    120392238 ns            8
find     tbb 24 1 gb     38002650 ns     37693037 ns            8

scan avx     06 1 gb    329198913 ns    329094262 ns            8
scan avx tbb 06 1 gb     55645250 ns     54440225 ns            8
scan         06 1 gb    465547037 ns    465443987 ns            8
scan     tbb 06 1 gb     55029037 ns     54443338 ns            8
scan avx     12 1 gb     50358150 ns     50358000 ns            8
scan avx tbb 12 1 gb     37228300 ns     37194463 ns            8
scan         12 1 gb    465597875 ns    465493288 ns            8
scan     tbb 12 1 gb     55152137 ns     53351125 ns            8
scan avx     24 1 gb     51811963 ns     51701212 ns            8
scan avx tbb 24 1 gb     37231888 ns     37185100 ns            8
scan         24 1 gb    466421850 ns    466311000 ns            8
scan     tbb 24 1 gb     55044662 ns     54507025 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    100529837 ns    100480450 ns            8
find avx tbb 06 2 gb     74398462 ns     72824087 ns            8
find         06 2 gb    859850913 ns    859737475 ns            8
find     tbb 06 2 gb     85958537 ns     85172062 ns            8
find avx     12 2 gb    100181700 ns    100181525 ns            8
find avx tbb 12 2 gb     74355750 ns     73998150 ns            8
find         12 2 gb    438344862 ns    438344725 ns            8
find     tbb 12 2 gb     76366213 ns     74640975 ns            8
find avx     24 2 gb    102482675 ns    102482463 ns            8
find avx tbb 24 2 gb     74500588 ns     74356475 ns            8
find         24 2 gb    241314213 ns    241205638 ns            8
find     tbb 24 2 gb     75697050 ns     75071125 ns            8

scan avx     06 2 gb    658523575 ns    658406550 ns            8
scan avx tbb 06 2 gb    110604888 ns    107248438 ns            8
scan         06 2 gb    931551012 ns    931450387 ns            8
scan     tbb 06 2 gb    109837900 ns    106514400 ns            8
scan avx     12 2 gb    100651187 ns    100650938 ns            8
scan avx tbb 12 2 gb     74308725 ns     73703175 ns            8
scan         12 2 gb    931067562 ns    930963450 ns            8
scan     tbb 12 2 gb    112069575 ns    108656300 ns            8
scan avx     24 2 gb    102579700 ns    102579487 ns            8
scan avx tbb 24 2 gb     74434575 ns     73721050 ns            8
scan         24 2 gb    930680250 ns    930572500 ns            8
scan     tbb 24 2 gb    111484888 ns    108471850 ns            8
```

</details>

