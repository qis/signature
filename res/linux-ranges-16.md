# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       82983 ns        83050 ns         2048
data |  6 |     tbb |       19830 ns        19740 ns         2048
mask |  6 |         |       95969 ns        96074 ns         2048
mask |  6 |     tbb |       20758 ns        20685 ns         2048

data | 12 |         |       44473 ns        44512 ns         2048
data | 12 |     tbb |       13677 ns        13597 ns         2048
mask | 12 |         |       94613 ns        94692 ns         2048
mask | 12 |     tbb |       20922 ns        20844 ns         2048

data | 24 |         |       23798 ns        23820 ns         2048
data | 24 |     tbb |       10463 ns        10390 ns         2048
mask | 24 |         |       95998 ns        96075 ns         2048
mask | 24 |     tbb |       19750 ns        19661 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       39531 ns        39576 ns         1024
data |  6 | avx tbb |       28559 ns        28420 ns         1024
mask |  6 | avx     |       35200 ns        35275 ns         1024
mask |  6 | avx tbb |       27101 ns        26963 ns         1024

data | 12 | avx     |       39429 ns        39494 ns         1024
data | 12 | avx tbb |       28181 ns        28026 ns         1024
mask | 12 | avx     |       35510 ns        35591 ns         1024
mask | 12 | avx tbb |       27726 ns        27593 ns         1024

data | 24 | avx     |       37384 ns        37463 ns         1024
data | 24 | avx tbb |       27547 ns        27395 ns         1024
mask | 24 | avx     |       35601 ns        35659 ns         1024
mask | 24 | avx tbb |       27429 ns        27302 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      434663 ns       434787 ns         1024
data |  6 | avx     |       62397 ns        62411 ns         1024
data |  6 |     tbb |       62798 ns        62726 ns         1024
data |  6 | avx tbb |       41052 ns        40914 ns         1024
mask |  6 |         |      460829 ns       460968 ns         1024
mask |  6 | avx     |       55681 ns        55702 ns         1024
mask |  6 |     tbb |       78906 ns        78856 ns         1024
mask |  6 | avx tbb |       41030 ns        40885 ns         1024

data | 12 |         |      220237 ns       220323 ns         1024
data | 12 | avx     |       62528 ns        62535 ns         1024
data | 12 |     tbb |       49592 ns        49431 ns         1024
data | 12 | avx tbb |       42148 ns        42049 ns         1024
mask | 12 |         |      461252 ns       461375 ns         1024
mask | 12 | avx     |       55845 ns        55845 ns         1024
mask | 12 |     tbb |      116740 ns       116756 ns         1024
mask | 12 | avx tbb |       40627 ns        40527 ns         1024

data | 24 |         |      116821 ns       116890 ns         1024
data | 24 | avx     |       58790 ns        58808 ns         1024
data | 24 |     tbb |       44774 ns        44683 ns         1024
data | 24 | avx tbb |       41018 ns        40925 ns         1024
mask | 24 |         |      461161 ns       461308 ns         1024
mask | 24 | avx     |       57362 ns        57429 ns         1024
mask | 24 |     tbb |       94587 ns        94521 ns         1024
mask | 24 | avx tbb |       41201 ns        41055 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1694046 ns      1694171 ns          512
data |  6 | avx     |      255940 ns       255832 ns          512
data |  6 |     tbb |      339467 ns       339299 ns          512
data |  6 | avx tbb |      209581 ns       207926 ns          512
mask |  6 |         |     1855637 ns      1855737 ns          512
mask |  6 | avx     |      217332 ns       217169 ns          512
mask |  6 |     tbb |      386772 ns       386632 ns          512
mask |  6 | avx tbb |      208729 ns       208661 ns          512

data | 12 |         |      872236 ns       872262 ns          512
data | 12 | avx     |      253658 ns       253496 ns          512
data | 12 |     tbb |      294715 ns       294652 ns          512
data | 12 | avx tbb |      209711 ns       209619 ns          512
mask | 12 |         |     1845505 ns      1845607 ns          512
mask | 12 | avx     |      214212 ns       214074 ns          512
mask | 12 |     tbb |      405163 ns       405299 ns          512
mask | 12 | avx tbb |      201920 ns       201853 ns          512

data | 24 |         |      464613 ns       464549 ns          512
data | 24 | avx     |      234394 ns       234265 ns          512
data | 24 |     tbb |      252278 ns       252261 ns          512
data | 24 | avx tbb |      205155 ns       205061 ns          512
mask | 24 |         |     1851830 ns      1851924 ns          512
mask | 24 | avx     |      223184 ns       223021 ns          512
mask | 24 |     tbb |      390741 ns       390710 ns          512
mask | 24 | avx tbb |      205500 ns       205445 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6955945 ns      6956038 ns           64
data |  6 | avx     |     1023269 ns      1023278 ns           64
data |  6 |     tbb |      945473 ns       945669 ns           64
data |  6 | avx tbb |      690911 ns       690820 ns           64
mask |  6 |         |     7411038 ns      7410998 ns           64
mask |  6 | avx     |      851137 ns       851081 ns           64
mask |  6 |     tbb |     1130631 ns      1130475 ns           64
mask |  6 | avx tbb |      682339 ns       682469 ns           64

data | 12 |         |     3491036 ns      3490991 ns           64
data | 12 | avx     |      995584 ns       995566 ns           64
data | 12 |     tbb |      837923 ns       837688 ns           64
data | 12 | avx tbb |      703791 ns       697975 ns           64
mask | 12 |         |     7362378 ns      7362327 ns           64
mask | 12 | avx     |      844327 ns       844317 ns           64
mask | 12 |     tbb |     1195541 ns      1195380 ns           64
mask | 12 | avx tbb |      695673 ns       695561 ns           64

data | 24 |         |     1885955 ns      1885905 ns           64
data | 24 | avx     |      898998 ns       898947 ns           64
data | 24 |     tbb |      745187 ns       744856 ns           64
data | 24 | avx tbb |      690312 ns       690239 ns           64
mask | 24 |         |     7376753 ns      7376728 ns           64
mask | 24 | avx     |      850686 ns       850630 ns           64
mask | 24 |     tbb |     1149281 ns      1149125 ns           64
mask | 24 | avx tbb |      686334 ns       686538 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27015150 ns     27014803 ns           32
data |  6 | avx     |     3977419 ns      3977438 ns           32
data |  6 |     tbb |     3133031 ns      3110731 ns           32
data |  6 | avx tbb |     2441172 ns      2440991 ns           32
mask |  6 |         |    29400925 ns     29400744 ns           32
mask |  6 | avx     |     3242888 ns      3242581 ns           32
mask |  6 |     tbb |     3933800 ns      3906012 ns           32
mask |  6 | avx tbb |     2438100 ns      2437934 ns           32

data | 12 |         |    13931688 ns     13931637 ns           32
data | 12 | avx     |     3982556 ns      3982547 ns           32
data | 12 |     tbb |     2859162 ns      2859012 ns           32
data | 12 | avx tbb |     2472091 ns      2471931 ns           32
mask | 12 |         |    29322516 ns     29322688 ns           32
mask | 12 | avx     |     3295900 ns      3295869 ns           32
mask | 12 |     tbb |     4308406 ns      4228316 ns           32
mask | 12 | avx tbb |     2462303 ns      2462134 ns           32

data | 24 |         |     7259209 ns      7259409 ns           32
data | 24 | avx     |     3532228 ns      3531969 ns           32
data | 24 |     tbb |     2560291 ns      2560172 ns           32
data | 24 | avx tbb |     2465753 ns      2465584 ns           32
mask | 24 |         |    29237981 ns     29237947 ns           32
mask | 24 | avx     |     3321109 ns      3321122 ns           32
mask | 24 |     tbb |     3980881 ns      3957766 ns           32
mask | 24 | avx tbb |     2440284 ns      2440166 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107779337 ns    107756456 ns           16
data |  6 | avx     |    15592600 ns     15592262 ns           16
data |  6 |     tbb |    11880056 ns     11625556 ns           16
data |  6 | avx tbb |     9456187 ns      9455469 ns           16
mask |  6 |         |   116687094 ns    116665300 ns           16
mask |  6 | avx     |    13040181 ns     13040781 ns           16
mask |  6 |     tbb |    15360187 ns     14922600 ns           16
mask |  6 | avx tbb |     9429700 ns      9427213 ns           16

data | 12 |         |    54677275 ns     54677225 ns           16
data | 12 | avx     |    15790794 ns     15790675 ns           16
data | 12 |     tbb |    11002325 ns     10619188 ns           16
data | 12 | avx tbb |     9568256 ns      9521406 ns           16
mask | 12 |         |   116448006 ns    116426481 ns           16
mask | 12 | avx     |    12945500 ns     12945400 ns           16
mask | 12 |     tbb |    16396125 ns     14929869 ns           16
mask | 12 | avx tbb |     9535300 ns      9405806 ns           16

data | 24 |         |    28612688 ns     28590369 ns           16
data | 24 | avx     |    14010188 ns     14010200 ns           16
data | 24 |     tbb |     9862213 ns      9822331 ns           16
data | 24 | avx tbb |     9409656 ns      9399375 ns           16
mask | 24 |         |   116419538 ns    116398125 ns           16
mask | 24 | avx     |    13119156 ns     13119088 ns           16
mask | 24 |     tbb |    15320312 ns     14894519 ns           16
mask | 24 | avx tbb |     9462231 ns      9460081 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214629938 ns    214629125 ns            8
data |  6 | avx     |    32075150 ns     32075000 ns            8
data |  6 |     tbb |    24838700 ns     22427562 ns            8
data |  6 | avx tbb |    18850088 ns     18849925 ns            8
mask |  6 |         |   232845100 ns    232845137 ns            8
mask |  6 | avx     |    26074650 ns     26074450 ns            8
mask |  6 |     tbb |    30160288 ns     26975787 ns            8
mask |  6 | avx tbb |    18863038 ns     18171113 ns            8

data | 12 |         |   109407238 ns    109407200 ns            8
data | 12 | avx     |    31842238 ns     31842025 ns            8
data | 12 |     tbb |    21765163 ns     19846013 ns            8
data | 12 | avx tbb |    19050850 ns     18665063 ns            8
mask | 12 |         |   232886175 ns    232886287 ns            8
mask | 12 | avx     |    26087075 ns     26087063 ns            8
mask | 12 |     tbb |    33516650 ns     29607450 ns            8
mask | 12 | avx tbb |    18963338 ns     18733162 ns            8

data | 24 |         |    57201750 ns     57201638 ns            8
data | 24 | avx     |    27968662 ns     27968325 ns            8
data | 24 |     tbb |    19543138 ns     19387263 ns            8
data | 24 | avx tbb |    18912600 ns     18660875 ns            8
mask | 24 |         |   233069125 ns    233069262 ns            8
mask | 24 | avx     |    26068400 ns     26068087 ns            8
mask | 24 |     tbb |    30260188 ns     29114775 ns            8
mask | 24 | avx tbb |    18893412 ns     18553375 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429521587 ns    429478612 ns            8
data |  6 | avx     |    63623138 ns     63622912 ns            8
data |  6 |     tbb |    49917013 ns     46292500 ns            8
data |  6 | avx tbb |    37685350 ns     36085150 ns            8
mask |  6 |         |   465184463 ns    465184675 ns            8
mask |  6 | avx     |    52246975 ns     52246637 ns            8
mask |  6 |     tbb |    59876875 ns     52467500 ns            8
mask |  6 | avx tbb |    37443688 ns     37271350 ns            8

data | 12 |         |   219159613 ns    219114313 ns            8
data | 12 | avx     |    63672713 ns     63671787 ns            8
data | 12 |     tbb |    42890412 ns     41290788 ns            8
data | 12 | avx tbb |    38007687 ns     30944675 ns            8
mask | 12 |         |   466762975 ns    466722088 ns            8
mask | 12 | avx     |    52255737 ns     52255762 ns            8
mask | 12 |     tbb |    68008725 ns     56906938 ns            8
mask | 12 | avx tbb |    37660075 ns     37169125 ns            8

data | 24 |         |   114192263 ns    114192050 ns            8
data | 24 | avx     |    56470050 ns     56469750 ns            8
data | 24 |     tbb |    38633713 ns     38268288 ns            8
data | 24 | avx tbb |    37544200 ns     37143275 ns            8
mask | 24 |         |   467279975 ns    467279713 ns            8
mask | 24 | avx     |    52784225 ns     52783012 ns            8
mask | 24 |     tbb |    61337362 ns     58379537 ns            8
mask | 24 | avx tbb |    37523888 ns     36678400 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   859320863 ns    859320363 ns            8
data |  6 | avx     |   127113538 ns    127068538 ns            8
data |  6 |     tbb |    99204575 ns     92387188 ns            8
data |  6 | avx tbb |    75259650 ns     68071213 ns            8
mask |  6 |         |   933270962 ns    933231387 ns            8
mask |  6 | avx     |   103573288 ns    103572862 ns            8
mask |  6 |     tbb |   120162500 ns    106746413 ns            8
mask |  6 | avx tbb |    74869362 ns     71516737 ns            8

data | 12 |         |   437899325 ns    437899125 ns            8
data | 12 | avx     |   127494375 ns    127494162 ns            8
data | 12 |     tbb |    87199938 ns     70914563 ns            8
data | 12 | avx tbb |    76082875 ns     58434488 ns            8
mask | 12 |         |   933717250 ns    933678375 ns            8
mask | 12 | avx     |   103630800 ns    103629913 ns            8
mask | 12 |     tbb |   138872750 ns    122819162 ns            8
mask | 12 | avx tbb |    76125412 ns     73354150 ns            8

data | 24 |         |   228975738 ns    228935063 ns            8
data | 24 | avx     |   112442863 ns    112397350 ns            8
data | 24 |     tbb |    77927725 ns     73739537 ns            8
data | 24 | avx tbb |    75142100 ns     65991050 ns            8
mask | 24 |         |   932568225 ns    932527962 ns            8
mask | 24 | avx     |   109300375 ns    109259950 ns            8
mask | 24 |     tbb |   120193012 ns    111237287 ns            8
mask | 24 | avx tbb |    74881575 ns     74303500 ns            8
```

</details>

