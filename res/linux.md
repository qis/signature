# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 kb        1132 ns         1102 ns         4096
find avx     noe 10 16 kb        1059 ns         1048 ns         4096
find avx tbb     10 16 kb        1067 ns         1060 ns         4096
find avx tbb noe 10 16 kb        1055 ns         1047 ns         4096
find             10 16 kb        4679 ns         4711 ns         4096
find         noe 10 16 kb        4683 ns         4726 ns         4096
find     tbb     10 16 kb        6330 ns         6356 ns         4096
find     tbb noe 10 16 kb        6377 ns         6416 ns         4096

scan avx         10 16 kb        5688 ns         5724 ns         4096
scan avx     noe 10 16 kb        5731 ns         5762 ns         4096
scan avx tbb     10 16 kb        5674 ns         5712 ns         4096
scan avx tbb noe 10 16 kb        5688 ns         5722 ns         4096
scan             10 16 kb        7780 ns         7836 ns         4096
scan         noe 10 16 kb        7779 ns         7819 ns         4096
scan     tbb     10 16 kb        6248 ns         6283 ns         4096
scan     tbb noe 10 16 kb        6138 ns         6166 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 kb        2417 ns         2416 ns         4096
find avx     noe 10 64 kb        2347 ns         2370 ns         4096
find avx tbb     10 64 kb        2531 ns         2531 ns         4096
find avx tbb noe 10 64 kb        2378 ns         2375 ns         4096
find             10 64 kb       17486 ns        17539 ns         4096
find         noe 10 64 kb       16602 ns        16661 ns         4096
find     tbb     10 64 kb        8485 ns         8519 ns         4096
find     tbb noe 10 64 kb        8093 ns         8137 ns         4096

scan avx         10 64 kb       21062 ns        21136 ns         4096
scan avx     noe 10 64 kb       20597 ns        20659 ns         4096
scan avx tbb     10 64 kb       20495 ns        20567 ns         4096
scan avx tbb noe 10 64 kb       20462 ns        20524 ns         4096
scan             10 64 kb       28787 ns        28863 ns         4096
scan         noe 10 64 kb       28888 ns        28953 ns         4096
scan     tbb     10 64 kb        9238 ns         9273 ns         4096
scan     tbb noe 10 64 kb        9966 ns         9986 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 kb       8386 ns         8384 ns         2048
find avx     noe 10 256 kb       8046 ns         8038 ns         2048
find avx tbb     10 256 kb       7677 ns         7675 ns         2048
find avx tbb noe 10 256 kb       7722 ns         7736 ns         2048
find             10 256 kb      63220 ns        63267 ns         2048
find         noe 10 256 kb      65169 ns        65257 ns         2048
find     tbb     10 256 kb      15147 ns        15052 ns         2048
find     tbb noe 10 256 kb      15368 ns        15282 ns         2048

scan avx         10 256 kb      89233 ns        82742 ns         2048
scan avx     noe 10 256 kb      79736 ns        79796 ns         2048
scan avx tbb     10 256 kb      80584 ns        80652 ns         2048
scan avx tbb noe 10 256 kb      79666 ns        79719 ns         2048
scan             10 256 kb     113173 ns       113231 ns         2048
scan         noe 10 256 kb     113454 ns       113509 ns         2048
scan     tbb     10 256 kb      21454 ns        21358 ns         2048
scan     tbb noe 10 256 kb      21373 ns        21268 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 mb        56548 ns        56535 ns         1024
find avx     noe 10 1 mb        55985 ns        55985 ns         1024
find avx tbb     10 1 mb        42214 ns        42111 ns         1024
find avx tbb noe 10 1 mb        40800 ns        40678 ns         1024
find             10 1 mb       258173 ns       258240 ns         1024
find         noe 10 1 mb       253758 ns       253813 ns         1024
find     tbb     10 1 mb        51000 ns        50930 ns         1024
find     tbb noe 10 1 mb        47427 ns        47347 ns         1024

scan avx         10 1 mb       324845 ns       324931 ns         1024
scan avx     noe 10 1 mb       320686 ns       320738 ns         1024
scan avx tbb     10 1 mb        66043 ns        65935 ns         1024
scan avx tbb noe 10 1 mb       107783 ns       107683 ns         1024
scan             10 1 mb       457541 ns       457627 ns         1024
scan         noe 10 1 mb       456099 ns       456186 ns         1024
scan     tbb     10 1 mb        66315 ns        66207 ns         1024
scan     tbb noe 10 1 mb        68351 ns        68242 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 4 mb       199168 ns       198987 ns          512
find avx     noe 10 4 mb       203659 ns       203460 ns          512
find avx tbb     10 4 mb       213654 ns       213549 ns          512
find avx tbb noe 10 4 mb       213754 ns       213610 ns          512
find             10 4 mb      1028109 ns      1028027 ns          512
find         noe 10 4 mb      1009795 ns      1009716 ns          512
find     tbb     10 4 mb       292582 ns       291100 ns          512
find     tbb noe 10 4 mb       267291 ns       267173 ns          512

scan avx         10 4 mb      1294312 ns      1294364 ns          512
scan avx     noe 10 4 mb      1278068 ns      1277925 ns          512
scan avx tbb     10 4 mb       360192 ns       360077 ns          512
scan avx tbb noe 10 4 mb       453154 ns       451688 ns          512
scan             10 4 mb      1817112 ns      1817129 ns          512
scan         noe 10 4 mb      1805666 ns      1805650 ns          512
scan     tbb     10 4 mb       351682 ns       351581 ns          512
scan     tbb noe 10 4 mb       310671 ns       310516 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 mb      797736 ns       797756 ns           64
find avx     noe 10 16 mb      799205 ns       798984 ns           64
find avx tbb     10 16 mb      684084 ns       684063 ns           64
find avx tbb noe 10 16 mb      669136 ns       669139 ns           64
find             10 16 mb     4235006 ns      4235025 ns           64
find         noe 10 16 mb     4023534 ns      4023392 ns           64
find     tbb     10 16 mb      785709 ns       785887 ns           64
find     tbb noe 10 16 mb      769767 ns       769683 ns           64

scan avx         10 16 mb     5199139 ns      5199169 ns           64
scan avx     noe 10 16 mb     5119212 ns      5093489 ns           64
scan avx tbb     10 16 mb     1090195 ns      1090347 ns           64
scan avx tbb noe 10 16 mb     1591167 ns      1591092 ns           64
scan             10 16 mb     7299984 ns      7300044 ns           64
scan         noe 10 16 mb     7252953 ns      7252984 ns           64
scan     tbb     10 16 mb     1069139 ns      1069047 ns           64
scan     tbb noe 10 16 mb     1068455 ns      1068562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 mb     3162166 ns      3162062 ns           32
find avx     noe 10 64 mb     3098219 ns      3098175 ns           32
find avx tbb     10 64 mb     2435503 ns      2435056 ns           32
find avx tbb noe 10 64 mb     2446659 ns      2446887 ns           32
find             10 64 mb    16188725 ns     16188613 ns           32
find         noe 10 64 mb    16555997 ns     16555866 ns           32
find     tbb     10 64 mb     2674413 ns      2674134 ns           32
find     tbb noe 10 64 mb     2645706 ns      2645566 ns           32

scan avx         10 64 mb    20754634 ns     20754425 ns           32
scan avx     noe 10 64 mb    21281522 ns     21258547 ns           32
scan avx tbb     10 64 mb     3843166 ns      3841506 ns           32
scan avx tbb noe 10 64 mb     5772825 ns      5761197 ns           32
scan             10 64 mb    32276262 ns     32276684 ns           32
scan         noe 10 64 mb    30237978 ns     30219012 ns           32
scan     tbb     10 64 mb     3687544 ns      3687406 ns           32
scan     tbb noe 10 64 mb     3721706 ns      3721538 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 mb   13575075 ns     13574931 ns           16
find avx     noe 10 256 mb   13216100 ns     13215694 ns           16
find avx tbb     10 256 mb    9341131 ns      9116050 ns           16
find avx tbb noe 10 256 mb    9360156 ns      9360000 ns           16
find             10 256 mb   65431231 ns     65430975 ns           16
find         noe 10 256 mb   64573094 ns     64572981 ns           16
find     tbb     10 256 mb    9904144 ns      9903906 ns           16
find     tbb noe 10 256 mb    9916181 ns      9889625 ns           16

scan avx         10 256 mb   81602862 ns     81531850 ns           16
scan avx     noe 10 256 mb   82971819 ns     82971925 ns           16
scan avx tbb     10 256 mb   14436712 ns     13863075 ns           16
scan avx tbb noe 10 256 mb   22997831 ns     22359512 ns           16
scan             10 256 mb  115665812 ns    115595169 ns           16
scan         noe 10 256 mb  117480737 ns    117481000 ns           16
scan     tbb     10 256 mb   14460175 ns     14284600 ns           16
scan     tbb noe 10 256 mb   14162506 ns     14014456 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 512 mb   27271537 ns     27271463 ns            8
find avx     noe 10 512 mb   27109813 ns     27109688 ns            8
find avx tbb     10 512 mb   18580900 ns     18580650 ns            8
find avx tbb noe 10 512 mb   18670363 ns     18670050 ns            8
find             10 512 mb  130176762 ns    130176525 ns            8
find         noe 10 512 mb  130655087 ns    130655050 ns            8
find     tbb     10 512 mb   19751888 ns     18856988 ns            8
find     tbb noe 10 512 mb   19728288 ns     19585488 ns            8

scan avx         10 512 mb  165352325 ns    165217563 ns            8
scan avx     noe 10 512 mb  164417537 ns    164417525 ns            8
scan avx tbb     10 512 mb   28554450 ns     27672300 ns            8
scan avx tbb noe 10 512 mb   46124463 ns     42765650 ns            8
scan             10 512 mb  232598012 ns    232453662 ns            8
scan         noe 10 512 mb  233003037 ns    232862312 ns            8
scan     tbb     10 512 mb   29045812 ns     28720350 ns            8
scan     tbb noe 10 512 mb   29614125 ns     29277887 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 gb     56084775 ns     56084700 ns            8
find avx     noe 10 1 gb     55424625 ns     55423950 ns            8
find avx tbb     10 1 gb     37839625 ns     37809600 ns            8
find avx tbb noe 10 1 gb     37276513 ns     36852362 ns            8
find             10 1 gb    257689037 ns    257552550 ns            8
find         noe 10 1 gb    257441725 ns    257305362 ns            8
find     tbb     10 1 gb     39312888 ns     37458900 ns            8
find     tbb noe 10 1 gb     39566800 ns     36361863 ns            8

scan avx         10 1 gb    329039625 ns    328898100 ns            8
scan avx     noe 10 1 gb    326865138 ns    326722925 ns            8
scan avx tbb     10 1 gb     57490950 ns     55201875 ns            8
scan avx tbb noe 10 1 gb     91609038 ns     85381138 ns            8
scan             10 1 gb    464593575 ns    464449662 ns            8
scan         noe 10 1 gb    465509487 ns    465363962 ns            8
scan     tbb     10 1 gb     57946750 ns     56364450 ns            8
scan     tbb noe 10 1 gb     59532662 ns     54989263 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 2 gb    111224063 ns    111221875 ns            8
find avx     noe 10 2 gb    111431038 ns    111430050 ns            8
find avx tbb     10 2 gb     74604688 ns     73041788 ns            8
find avx tbb noe 10 2 gb     74818000 ns     73419175 ns            8
find             10 2 gb    516543412 ns    516469875 ns            8
find         noe 10 2 gb    515958725 ns    515886837 ns            8
find     tbb     10 2 gb     78603025 ns     72005300 ns            8
find     tbb noe 10 2 gb     78805787 ns     73048225 ns            8

scan avx         10 2 gb    657715150 ns    657643525 ns            8
scan avx     noe 10 2 gb    652997913 ns    652988612 ns            8
scan avx tbb     10 2 gb    116395237 ns    107875412 ns            8
scan avx tbb noe 10 2 gb    180023900 ns    175170825 ns            8
scan             10 2 gb    923127762 ns    923120575 ns            8
scan         noe 10 2 gb    923551462 ns    923544837 ns            8
scan     tbb     10 2 gb    115238250 ns    101284663 ns            8
scan     tbb noe 10 2 gb    116072312 ns    108742350 ns            8
```

</details>

