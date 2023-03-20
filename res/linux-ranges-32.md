# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83598 ns        83649 ns         2048
data |  6 |     tbb |       18602 ns        18520 ns         2048
mask |  6 |         |       95862 ns        95937 ns         2048
mask |  6 |     tbb |       20114 ns        20044 ns         2048

data | 12 |         |       44272 ns        44369 ns         2048
data | 12 |     tbb |       13991 ns        13920 ns         2048
mask | 12 |         |       96789 ns        96887 ns         2048
mask | 12 |     tbb |       19721 ns        19650 ns         2048

data | 24 |         |       23684 ns        23720 ns         2048
data | 24 |     tbb |       11650 ns        11568 ns         2048
mask | 24 |         |       96015 ns        96096 ns         2048
mask | 24 |     tbb |       20296 ns        20195 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       37866 ns        37868 ns         1024
data |  6 | avx tbb |       28415 ns        28243 ns         1024
mask |  6 | avx     |       34854 ns        34841 ns         1024
mask |  6 | avx tbb |       27507 ns        27378 ns         1024

data | 12 | avx     |       38077 ns        38109 ns         1024
data | 12 | avx tbb |       27641 ns        27494 ns         1024
mask | 12 | avx     |       36041 ns        36054 ns         1024
mask | 12 | avx tbb |       27777 ns        27604 ns         1024

data | 24 | avx     |       35300 ns        35376 ns         1024
data | 24 | avx tbb |       27378 ns        27191 ns         1024
mask | 24 | avx     |       35532 ns        35565 ns         1024
mask | 24 | avx tbb |       27249 ns        27048 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      438217 ns       438359 ns         1024
data |  6 | avx     |       59204 ns        59259 ns         1024
data |  6 |     tbb |       57774 ns        57692 ns         1024
data |  6 | avx tbb |       41431 ns        41293 ns         1024
mask |  6 |         |      469319 ns       469458 ns         1024
mask |  6 | avx     |       55638 ns        55655 ns         1024
mask |  6 |     tbb |       66612 ns        66536 ns         1024
mask |  6 | avx tbb |       40514 ns        40371 ns         1024

data | 12 |         |      220348 ns       220444 ns         1024
data | 12 | avx     |       59067 ns        59081 ns         1024
data | 12 |     tbb |       44741 ns        44641 ns         1024
data | 12 | avx tbb |       40782 ns        40611 ns         1024
mask | 12 |         |      460846 ns       461003 ns         1024
mask | 12 | avx     |       55415 ns        55426 ns         1024
mask | 12 |     tbb |       67240 ns        67106 ns         1024
mask | 12 | avx tbb |       40292 ns        40177 ns         1024

data | 24 |         |      117299 ns       117362 ns         1024
data | 24 | avx     |       56185 ns        56182 ns         1024
data | 24 |     tbb |       45264 ns        45165 ns         1024
data | 24 | avx tbb |       41324 ns        41181 ns         1024
mask | 24 |         |      477370 ns       477547 ns         1024
mask | 24 | avx     |       56647 ns        56650 ns         1024
mask | 24 |     tbb |       66132 ns        66053 ns         1024
mask | 24 | avx tbb |       41911 ns        41781 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1703673 ns      1703778 ns          512
data |  6 | avx     |      238419 ns       238325 ns          512
data |  6 |     tbb |      325228 ns       323756 ns          512
data |  6 | avx tbb |      202446 ns       202308 ns          512
mask |  6 |         |     1860340 ns      1860425 ns          512
mask |  6 | avx     |      219611 ns       219417 ns          512
mask |  6 |     tbb |      365444 ns       365280 ns          512
mask |  6 | avx tbb |      200021 ns       199909 ns          512

data | 12 |         |      888551 ns       888633 ns          512
data | 12 | avx     |      242058 ns       241986 ns          512
data | 12 |     tbb |      273202 ns       273038 ns          512
data | 12 | avx tbb |      202413 ns       202233 ns          512
mask | 12 |         |     1860837 ns      1860890 ns          512
mask | 12 | avx     |      224162 ns       223990 ns          512
mask | 12 |     tbb |      352898 ns       352772 ns          512
mask | 12 | avx tbb |      198533 ns       198372 ns          512

data | 24 |         |      457410 ns       457341 ns          512
data | 24 | avx     |      220401 ns       220321 ns          512
data | 24 |     tbb |      257946 ns       257822 ns          512
data | 24 | avx tbb |      210089 ns       209960 ns          512
mask | 24 |         |     1841458 ns      1841494 ns          512
mask | 24 | avx     |      222909 ns       222739 ns          512
mask | 24 |     tbb |      365888 ns       366100 ns          512
mask | 24 | avx tbb |      204486 ns       204440 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6877358 ns      6877164 ns           64
data |  6 | avx     |      948644 ns       948658 ns           64
data |  6 |     tbb |      916495 ns       916278 ns           64
data |  6 | avx tbb |      684013 ns       683978 ns           64
mask |  6 |         |     7385061 ns      7385070 ns           64
mask |  6 | avx     |      864516 ns       864455 ns           64
mask |  6 |     tbb |     1083355 ns      1083256 ns           64
mask |  6 | avx tbb |      681469 ns       681411 ns           64

data | 12 |         |     3535284 ns      3535283 ns           64
data | 12 | avx     |      955959 ns       955933 ns           64
data | 12 |     tbb |      770184 ns       770133 ns           64
data | 12 | avx tbb |      685228 ns       678380 ns           64
mask | 12 |         |     7358458 ns      7358481 ns           64
mask | 12 | avx     |      857902 ns       857913 ns           64
mask | 12 |     tbb |     1087530 ns      1087323 ns           64
mask | 12 | avx tbb |      679514 ns       679433 ns           64

data | 24 |         |     1870969 ns      1870933 ns           64
data | 24 | avx     |      857781 ns       857805 ns           64
data | 24 |     tbb |      731617 ns       731311 ns           64
data | 24 | avx tbb |      682180 ns       681983 ns           64
mask | 24 |         |     7422586 ns      7422567 ns           64
mask | 24 | avx     |      846647 ns       846730 ns           64
mask | 24 |     tbb |     1096538 ns      1096375 ns           64
mask | 24 | avx tbb |      681719 ns       682066 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26974919 ns     26974881 ns           32
data |  6 | avx     |     3773503 ns      3773256 ns           32
data |  6 |     tbb |     3081975 ns      3081869 ns           32
data |  6 | avx tbb |     2459397 ns      2459247 ns           32
mask |  6 |         |    29285222 ns     29285175 ns           32
mask |  6 | avx     |     3225344 ns      3225381 ns           32
mask |  6 |     tbb |     3753850 ns      3753744 ns           32
mask |  6 | avx tbb |     2447313 ns      2447484 ns           32

data | 12 |         |    13841769 ns     13841681 ns           32
data | 12 | avx     |     3709247 ns      3709356 ns           32
data | 12 |     tbb |     2628503 ns      2628369 ns           32
data | 12 | avx tbb |     2443319 ns      2443181 ns           32
mask | 12 |         |    29236569 ns     29225609 ns           32
mask | 12 | avx     |     3225634 ns      3225350 ns           32
mask | 12 |     tbb |     3758884 ns      3759000 ns           32
mask | 12 | avx tbb |     2439178 ns      2439081 ns           32

data | 24 |         |     7186025 ns      7185987 ns           32
data | 24 | avx     |     3213325 ns      3213353 ns           32
data | 24 |     tbb |     2534100 ns      2534028 ns           32
data | 24 | avx tbb |     2443778 ns      2443625 ns           32
mask | 24 |         |    29432559 ns     29432506 ns           32
mask | 24 | avx     |     3336975 ns      3336963 ns           32
mask | 24 |     tbb |     3802028 ns      3800162 ns           32
mask | 24 | avx tbb |     2454994 ns      2454834 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107608569 ns    107580725 ns           16
data |  6 | avx     |    15162419 ns     15162119 ns           16
data |  6 |     tbb |    11673000 ns     11559294 ns           16
data |  6 | avx tbb |     9464331 ns      9464200 ns           16
mask |  6 |         |   117196694 ns    117159875 ns           16
mask |  6 | avx     |    13217400 ns     13217269 ns           16
mask |  6 |     tbb |    14644156 ns     14505944 ns           16
mask |  6 | avx tbb |     9453656 ns      9453500 ns           16

data | 12 |         |    54923012 ns     54922975 ns           16
data | 12 | avx     |    14946681 ns     14946681 ns           16
data | 12 |     tbb |     9894175 ns      9893369 ns           16
data | 12 | avx tbb |     9479238 ns      9479131 ns           16
mask | 12 |         |   116431137 ns    116392350 ns           16
mask | 12 | avx     |    12862894 ns     12862925 ns           16
mask | 12 |     tbb |    14397719 ns     14283237 ns           16
mask | 12 | avx tbb |     9436506 ns      9436406 ns           16

data | 24 |         |    28599800 ns     28599700 ns           16
data | 24 | avx     |    12987769 ns     12987806 ns           16
data | 24 |     tbb |     9653694 ns      9613988 ns           16
data | 24 | avx tbb |     9470169 ns      9412181 ns           16
mask | 24 |         |   116404513 ns    116363938 ns           16
mask | 24 | avx     |    13118344 ns     13118294 ns           16
mask | 24 |     tbb |    14414388 ns     14287350 ns           16
mask | 24 | avx tbb |     9433700 ns      9412956 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214913863 ns    214911462 ns            8
data |  6 | avx     |    29934588 ns     29934500 ns            8
data |  6 |     tbb |    23244763 ns     23244763 ns            8
data |  6 | avx tbb |    18823425 ns     18645050 ns            8
mask |  6 |         |   232855263 ns    232855300 ns            8
mask |  6 | avx     |    25801988 ns     25801737 ns            8
mask |  6 |     tbb |    29404487 ns     27721688 ns            8
mask |  6 | avx tbb |    18788000 ns     18680038 ns            8

data | 12 |         |   109666825 ns    109666662 ns            8
data | 12 | avx     |    29992700 ns     29992575 ns            8
data | 12 |     tbb |    19679638 ns     19440138 ns            8
data | 12 | avx tbb |    18774413 ns     18774288 ns            8
mask | 12 |         |   233852988 ns    233853025 ns            8
mask | 12 | avx     |    26064800 ns     26064687 ns            8
mask | 12 |     tbb |    28586375 ns     27499175 ns            8
mask | 12 | avx tbb |    18773575 ns     18773313 ns            8

data | 24 |         |    57189425 ns     57189075 ns            8
data | 24 | avx     |    26149750 ns     26149738 ns            8
data | 24 |     tbb |    19309287 ns     19309312 ns            8
data | 24 | avx tbb |    18801562 ns     18638600 ns            8
mask | 24 |         |   233545825 ns    233545825 ns            8
mask | 24 | avx     |    26406575 ns     26406413 ns            8
mask | 24 |     tbb |    29521938 ns     28554462 ns            8
mask | 24 | avx tbb |    18801675 ns     18573312 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   430570437 ns    430560512 ns            8
data |  6 | avx     |    59876075 ns     59875812 ns            8
data |  6 |     tbb |    46192075 ns     40176350 ns            8
data |  6 | avx tbb |    37556050 ns     37279537 ns            8
mask |  6 |         |   466944175 ns    466867050 ns            8
mask |  6 | avx     |    52388787 ns     52388675 ns            8
mask |  6 |     tbb |    58401788 ns     53088900 ns            8
mask |  6 | avx tbb |    37478250 ns     37142225 ns            8

data | 12 |         |   219016237 ns    218940212 ns            8
data | 12 | avx     |    60005075 ns     60004863 ns            8
data | 12 |     tbb |    39213963 ns     37438138 ns            8
data | 12 | avx tbb |    37570737 ns     37435775 ns            8
mask | 12 |         |   466355588 ns    466280125 ns            8
mask | 12 | avx     |    51798087 ns     51797813 ns            8
mask | 12 |     tbb |    57151925 ns     55140363 ns            8
mask | 12 | avx tbb |    37478238 ns     37271300 ns            8

data | 24 |         |   114362475 ns    114361775 ns            8
data | 24 | avx     |    51810050 ns     51809775 ns            8
data | 24 |     tbb |    38280800 ns     36625213 ns            8
data | 24 | avx tbb |    37558350 ns     36956350 ns            8
mask | 24 |         |   466548012 ns    466476538 ns            8
mask | 24 | avx     |    53304463 ns     53304375 ns            8
mask | 24 |     tbb |    58475787 ns     55162937 ns            8
mask | 24 | avx tbb |    37560387 ns     36692500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   860477187 ns    860475937 ns            8
data |  6 | avx     |   120124788 ns    120051350 ns            8
data |  6 |     tbb |    92223788 ns     87107950 ns            8
data |  6 | avx tbb |    74959525 ns     72643350 ns            8
mask |  6 |         |   934122738 ns    934044637 ns            8
mask |  6 | avx     |   104127612 ns    104127212 ns            8
mask |  6 |     tbb |   116737900 ns    108032613 ns            8
mask |  6 | avx tbb |    74985975 ns     73083488 ns            8

data | 12 |         |   439260938 ns    439260838 ns            8
data | 12 | avx     |   120709600 ns    120640400 ns            8
data | 12 |     tbb |    78363962 ns     74801825 ns            8
data | 12 | avx tbb |    74977125 ns     72906212 ns            8
mask | 12 |         |   931468275 ns    931397888 ns            8
mask | 12 | avx     |   104628675 ns    104628562 ns            8
mask | 12 |     tbb |   119444462 ns    109305125 ns            8
mask | 12 | avx tbb |    74915087 ns     73031800 ns            8

data | 24 |         |   229345225 ns    229273900 ns            8
data | 24 | avx     |   103497587 ns    103497400 ns            8
data | 24 |     tbb |    76550275 ns     73131900 ns            8
data | 24 | avx tbb |    75019613 ns     71819825 ns            8
mask | 24 |         |   932865888 ns    932796662 ns            8
mask | 24 | avx     |   108125687 ns    108125575 ns            8
mask | 24 |     tbb |   115791987 ns    107597850 ns            8
mask | 24 | avx tbb |    74836213 ns     72989375 ns            8
```

</details>

