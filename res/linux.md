# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |        7400 ns         7443 ns         4096
data |  6 |     tbb |        8522 ns         8552 ns         4096
data |  6 | avx     |        1209 ns         1186 ns         4096
data |  6 | avx tbb |        5639 ns         5636 ns         4096

mask |  6 |         |        7816 ns         7875 ns         4096
mask |  6 |     tbb |        6607 ns         6651 ns         4096
mask |  6 | avx     |        1127 ns         1114 ns         4096
mask |  6 | avx tbb |        5588 ns         5608 ns         4096

data | 12 |         |        4625 ns         4690 ns         4096
data | 12 |     tbb |        7798 ns         7844 ns         4096
data | 12 | avx     |        1294 ns         1280 ns         4096
data | 12 | avx tbb |        5591 ns         5578 ns         4096

mask | 12 |         |        8320 ns         8388 ns         4096
mask | 12 |     tbb |        6599 ns         6641 ns         4096
mask | 12 | avx     |        1181 ns         1183 ns         4096
mask | 12 | avx tbb |        5497 ns         5521 ns         4096

data | 24 |         |        2736 ns         2780 ns         4096
data | 24 |     tbb |        8450 ns         8487 ns         4096
data | 24 | avx     |        1351 ns         1348 ns         4096
data | 24 | avx tbb |        5616 ns         5608 ns         4096

mask | 24 |         |        8461 ns         8517 ns         4096
mask | 24 |     tbb |        6556 ns         6593 ns         4096
mask | 24 | avx     |        1203 ns         1202 ns         4096
mask | 24 | avx tbb |        5468 ns         5493 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       27840 ns        27891 ns         4096
data |  6 |     tbb |       10756 ns        10799 ns         4096
data |  6 | avx     |        2978 ns         2976 ns         4096
data |  6 | avx tbb |        6275 ns         6271 ns         4096

mask |  6 |         |       29709 ns        29773 ns         4096
mask |  6 |     tbb |        9693 ns         9725 ns         4096
mask |  6 | avx     |        2370 ns         2383 ns         4096
mask |  6 | avx tbb |        6220 ns         6238 ns         4096

data | 12 |         |       13943 ns        13994 ns         4096
data | 12 |     tbb |        9150 ns         9184 ns         4096
data | 12 | avx     |        3059 ns         3051 ns         4096
data | 12 | avx tbb |        6253 ns         6254 ns         4096

mask | 12 |         |       29685 ns        29751 ns         4096
mask | 12 |     tbb |        9658 ns         9689 ns         4096
mask | 12 | avx     |        2496 ns         2494 ns         4096
mask | 12 | avx tbb |        6217 ns         6238 ns         4096

data | 24 |         |        8066 ns         8116 ns         4096
data | 24 |     tbb |        8521 ns         8557 ns         4096
data | 24 | avx     |        2817 ns         2812 ns         4096
data | 24 | avx tbb |        6308 ns         6302 ns         4096

mask | 24 |         |       29506 ns        29565 ns         4096
mask | 24 |     tbb |        9650 ns         9687 ns         4096
mask | 24 | avx     |        2481 ns         2482 ns         4096
mask | 24 | avx tbb |        6043 ns         6071 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      106265 ns       106336 ns         2048
data |  6 |     tbb |       20300 ns        20202 ns         2048
data |  6 | avx     |       10103 ns        10126 ns         2048
data |  6 | avx tbb |        9581 ns         9472 ns         2048

mask |  6 |         |      113219 ns       113264 ns         2048
mask |  6 |     tbb |       21758 ns        21649 ns         2048
mask |  6 | avx     |        8137 ns         8157 ns         2048
mask |  6 | avx tbb |        9631 ns         9543 ns         2048

data | 12 |         |       53032 ns        53081 ns         2048
data | 12 |     tbb |       15167 ns        15081 ns         2048
data | 12 | avx     |        9955 ns         9968 ns         2048
data | 12 | avx tbb |        9625 ns         9516 ns         2048

mask | 12 |         |      113183 ns       113232 ns         2048
mask | 12 |     tbb |       21479 ns        21403 ns         2048
mask | 12 | avx     |        8050 ns         8008 ns         2048
mask | 12 | avx tbb |        9672 ns         9604 ns         2048

data | 24 |         |       27335 ns        27381 ns         2048
data | 24 |     tbb |       12561 ns        12466 ns         2048
data | 24 | avx     |        8871 ns         8882 ns         2048
data | 24 | avx tbb |        9696 ns         9575 ns         2048

mask | 24 |         |      113014 ns       113068 ns         2048
mask | 24 |     tbb |       21494 ns        21403 ns         2048
mask | 24 | avx     |        8240 ns         8242 ns         2048
mask | 24 | avx tbb |        9370 ns         9267 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      417257 ns       417313 ns         1024
data |  6 |     tbb |       52655 ns        52594 ns         1024
data |  6 | avx     |       62206 ns        62174 ns         1024
data |  6 | avx tbb |       40632 ns        40522 ns         1024

mask |  6 |         |      455639 ns       455750 ns         1024
mask |  6 |     tbb |       66329 ns        66250 ns         1024
mask |  6 | avx     |       56408 ns        56425 ns         1024
mask |  6 | avx tbb |       39975 ns        39870 ns         1024

data | 12 |         |      217398 ns       217465 ns         1024
data | 12 |     tbb |       43421 ns        43343 ns         1024
data | 12 | avx     |       62217 ns        62236 ns         1024
data | 12 | avx tbb |       40302 ns        40187 ns         1024

mask | 12 |         |      455882 ns       455957 ns         1024
mask | 12 |     tbb |       70676 ns        70613 ns         1024
mask | 12 | avx     |       55826 ns        55843 ns         1024
mask | 12 | avx tbb |       39653 ns        39559 ns         1024

data | 24 |         |      112481 ns       112545 ns         1024
data | 24 |     tbb |       41937 ns        41865 ns         1024
data | 24 | avx     |       58051 ns        58063 ns         1024
data | 24 | avx tbb |       41050 ns        40908 ns         1024

mask | 24 |         |      455758 ns       455839 ns         1024
mask | 24 |     tbb |       63100 ns        63022 ns         1024
mask | 24 | avx     |       56702 ns        56717 ns         1024
mask | 24 | avx tbb |       39674 ns        39588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1661641 ns      1661760 ns          512
data |  6 |     tbb |      312179 ns       312215 ns          512
data |  6 | avx     |      249465 ns       249402 ns          512
data |  6 | avx tbb |      217905 ns       216428 ns          512

mask |  6 |         |     1825694 ns      1825810 ns          512
mask |  6 |     tbb |      326321 ns       326377 ns          512
mask |  6 | avx     |      207265 ns       207214 ns          512
mask |  6 | avx tbb |      216638 ns       216699 ns          512

data | 12 |         |      867533 ns       867537 ns          512
data | 12 |     tbb |      270561 ns       270657 ns          512
data | 12 | avx     |      248421 ns       248362 ns          512
data | 12 | avx tbb |      221244 ns       221282 ns          512

mask | 12 |         |     1822571 ns      1822647 ns          512
mask | 12 |     tbb |      333668 ns       333700 ns          512
mask | 12 | avx     |      203451 ns       203412 ns          512
mask | 12 | avx tbb |      219034 ns       219067 ns          512

data | 24 |         |      458247 ns       458210 ns          512
data | 24 |     tbb |      254456 ns       254466 ns          512
data | 24 | avx     |      220556 ns       220493 ns          512
data | 24 | avx tbb |      220548 ns       220626 ns          512

mask | 24 |         |     1819070 ns      1819180 ns          512
mask | 24 |     tbb |      330776 ns       330764 ns          512
mask | 24 | avx     |      207531 ns       207475 ns          512
mask | 24 | avx tbb |      209128 ns       209201 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6794361 ns      6794398 ns           64
data |  6 |     tbb |      845005 ns       845033 ns           64
data |  6 | avx     |      992716 ns       992605 ns           64
data |  6 | avx tbb |      681277 ns       681248 ns           64

mask |  6 |         |     7324628 ns      7324708 ns           64
mask |  6 |     tbb |     1023520 ns      1023548 ns           64
mask |  6 | avx     |      801428 ns       801241 ns           64
mask |  6 | avx tbb |      673536 ns       673506 ns           64

data | 12 |         |     3465956 ns      3465997 ns           64
data | 12 |     tbb |      739688 ns       739700 ns           64
data | 12 | avx     |      992417 ns       992270 ns           64
data | 12 | avx tbb |      683334 ns       683278 ns           64

mask | 12 |         |     7344511 ns      7332047 ns           64
mask | 12 |     tbb |     1020744 ns      1020730 ns           64
mask | 12 | avx     |      803259 ns       803112 ns           64
mask | 12 | avx tbb |      671709 ns       671664 ns           64

data | 24 |         |     1838937 ns      1838889 ns           64
data | 24 |     tbb |      714125 ns       714106 ns           64
data | 24 | avx     |      864695 ns       864536 ns           64
data | 24 | avx tbb |      682009 ns       681937 ns           64

mask | 24 |         |     7265289 ns      7265403 ns           64
mask | 24 |     tbb |     1028016 ns      1028020 ns           64
mask | 24 | avx     |      817183 ns       816961 ns           64
mask | 24 | avx tbb |      677509 ns       677494 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26700169 ns     26699997 ns           32
data |  6 |     tbb |     2894138 ns      2894412 ns           32
data |  6 | avx     |     3752791 ns      3752556 ns           32
data |  6 | avx tbb |     2438159 ns      2437828 ns           32

mask |  6 |         |    28762253 ns     28760581 ns           32
mask |  6 |     tbb |     3614334 ns      3600131 ns           32
mask |  6 | avx     |     3042225 ns      3041962 ns           32
mask |  6 | avx tbb |     2437263 ns      2437247 ns           32

data | 12 |         |    13541103 ns     13540816 ns           32
data | 12 |     tbb |     2548278 ns      2548931 ns           32
data | 12 | avx     |     3827066 ns      3826850 ns           32
data | 12 | avx tbb |     2438100 ns      2438253 ns           32

mask | 12 |         |    28787006 ns     28775966 ns           32
mask | 12 |     tbb |     3621212 ns      3620753 ns           32
mask | 12 | avx     |     3066434 ns      3066244 ns           32
mask | 12 | avx tbb |     2438484 ns      2438922 ns           32

data | 24 |         |     7022147 ns      7021856 ns           32
data | 24 |     tbb |     2519256 ns      2519119 ns           32
data | 24 | avx     |     3293313 ns      3293069 ns           32
data | 24 | avx tbb |     2437003 ns      2436875 ns           32

mask | 24 |         |    28808678 ns     28797631 ns           32
mask | 24 |     tbb |     3630197 ns      3630028 ns           32
mask | 24 | avx     |     3110497 ns      3110359 ns           32
mask | 24 | avx tbb |     2441141 ns      2440888 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106033081 ns    106010144 ns           16
data |  6 |     tbb |    10688544 ns     10688344 ns           16
data |  6 | avx     |    15151400 ns     15151206 ns           16
data |  6 | avx tbb |     9303031 ns      9302863 ns           16

mask |  6 |         |   115130331 ns    115091856 ns           16
mask |  6 |     tbb |    13836156 ns     13780006 ns           16
mask |  6 | avx     |    12136206 ns     12136056 ns           16
mask |  6 | avx tbb |     9309906 ns      9310500 ns           16

data | 12 |         |    55558500 ns     55520275 ns           16
data | 12 |     tbb |     9517106 ns      9517769 ns           16
data | 12 | avx     |    15065588 ns     15065300 ns           16
data | 12 | avx tbb |     9290675 ns      9290506 ns           16

mask | 12 |         |   115225262 ns    115183719 ns           16
mask | 12 |     tbb |    13721450 ns     13689438 ns           16
mask | 12 | avx     |    12062500 ns     12062338 ns           16
mask | 12 | avx tbb |     9288819 ns      9288675 ns           16

data | 24 |         |    28115119 ns     28076425 ns           16
data | 24 |     tbb |     9475100 ns      9474938 ns           16
data | 24 | avx     |    12855881 ns     12855706 ns           16
data | 24 | avx tbb |     9314731 ns      9315319 ns           16

mask | 24 |         |   115120781 ns    115078381 ns           16
mask | 24 |     tbb |    13744906 ns     13713750 ns           16
mask | 24 | avx     |    12263212 ns     12263394 ns           16
mask | 24 | avx tbb |     9291600 ns      9291375 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212059488 ns    212059288 ns            8
data |  6 |     tbb |    21749300 ns     21158850 ns            8
data |  6 | avx     |    30669375 ns     30669150 ns            8
data |  6 | avx tbb |    18532887 ns     18532550 ns            8

mask |  6 |         |   230075138 ns    230075087 ns            8
mask |  6 |     tbb |    27458787 ns     27362638 ns            8
mask |  6 | avx     |    24277650 ns     24277387 ns            8
mask |  6 | avx tbb |    18482675 ns     18482550 ns            8

data | 12 |         |   108440800 ns    108365538 ns            8
data | 12 |     tbb |    18980387 ns     18906363 ns            8
data | 12 | avx     |    30655300 ns     30655075 ns            8
data | 12 | avx tbb |    18501513 ns     18501262 ns            8

mask | 12 |         |   230226650 ns    230226500 ns            8
mask | 12 |     tbb |    27345862 ns     27251325 ns            8
mask | 12 | avx     |    24220325 ns     24220087 ns            8
mask | 12 | avx tbb |    18503438 ns     18503325 ns            8

data | 24 |         |    56220825 ns     56150212 ns            8
data | 24 |     tbb |    18853562 ns     18853562 ns            8
data | 24 | avx     |    25553912 ns     25553775 ns            8
data | 24 | avx tbb |    18498600 ns     18498338 ns            8

mask | 24 |         |   230088388 ns    230088275 ns            8
mask | 24 |     tbb |    27321700 ns     27025200 ns            8
mask | 24 | avx     |    24546713 ns     24546500 ns            8
mask | 24 | avx tbb |    18487675 ns     18487587 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   424166887 ns    424166687 ns            8
data |  6 |     tbb |    42981163 ns     42259875 ns            8
data |  6 | avx     |    61726838 ns     61726438 ns            8
data |  6 | avx tbb |    37032075 ns     36177462 ns            8

mask |  6 |         |   460167287 ns    460092287 ns            8
mask |  6 |     tbb |    55348788 ns     54536587 ns            8
mask |  6 | avx     |    48312875 ns     48312550 ns            8
mask |  6 | avx tbb |    36948462 ns     36936063 ns            8

data | 12 |         |   216580413 ns    216505900 ns            8
data | 12 |     tbb |    37535375 ns     37230462 ns            8
data | 12 | avx     |    61404813 ns     61329888 ns            8
data | 12 | avx tbb |    36997563 ns     36819312 ns            8

mask | 12 |         |   460241163 ns    460170963 ns            8
mask | 12 |     tbb |    54496525 ns     53007125 ns            8
mask | 12 | avx     |    48646625 ns     48646325 ns            8
mask | 12 | avx tbb |    36937987 ns     36906737 ns            8

data | 24 |         |   112103125 ns    112102925 ns            8
data | 24 |     tbb |    37660750 ns     37630062 ns            8
data | 24 | avx     |    51074775 ns     50999050 ns            8
data | 24 | avx tbb |    36962013 ns     36961862 ns            8

mask | 24 |         |   460247225 ns    460172275 ns            8
mask | 24 |     tbb |    54558850 ns     54062475 ns            8
mask | 24 | avx     |    48742925 ns     48742600 ns            8
mask | 24 | avx tbb |    36939850 ns     36923200 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   848413175 ns    848372100 ns            8
data |  6 |     tbb |    86006050 ns     83639387 ns            8
data |  6 | avx     |   121445600 ns    121373662 ns            8
data |  6 | avx tbb |    73845175 ns     72491950 ns            8

mask |  6 |         |   920562475 ns    920404300 ns            8
mask |  6 |     tbb |   109193038 ns    106293925 ns            8
mask |  6 | avx     |    97157300 ns     97157188 ns            8
mask |  6 | avx tbb |    73854925 ns     73181887 ns            8

data | 12 |         |   436954963 ns    436954925 ns            8
data | 12 |     tbb |    75116613 ns     73674487 ns            8
data | 12 | avx     |   121999987 ns    121957212 ns            8
data | 12 | avx tbb |    73788262 ns     70960437 ns            8

mask | 12 |         |   920602662 ns    920563725 ns            8
mask | 12 |     tbb |   109549612 ns    108511312 ns            8
mask | 12 | avx     |    96689963 ns     96689725 ns            8
mask | 12 | avx tbb |    73717525 ns     73550338 ns            8

data | 24 |         |   224368387 ns    224368512 ns            8
data | 24 |     tbb |    75086100 ns     74032362 ns            8
data | 24 | avx     |   103494500 ns    103494262 ns            8
data | 24 | avx tbb |    73749437 ns     72856900 ns            8

mask | 24 |         |   920574975 ns    920535012 ns            8
mask | 24 |     tbb |   109798075 ns    106688988 ns            8
mask | 24 | avx     |    98211313 ns     98211050 ns            8
mask | 24 | avx tbb |    73725150 ns     73196163 ns            8
```

</details>

