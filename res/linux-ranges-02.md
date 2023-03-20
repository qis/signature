# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       85390 ns        85425 ns         2048
data |  6 |     tbb |       95028 ns        88677 ns         2048
mask |  6 |         |       95666 ns        95730 ns         2048
mask |  6 |     tbb |       89069 ns        89291 ns         2048

data | 12 |         |       44608 ns        44665 ns         2048
data | 12 |     tbb |       52039 ns        52097 ns         2048
mask | 12 |         |       95531 ns        95572 ns         2048
mask | 12 |     tbb |       81514 ns        81709 ns         2048

data | 24 |         |       23851 ns        23881 ns         2048
data | 24 |     tbb |       32974 ns        33039 ns         2048
mask | 24 |         |       95819 ns        95892 ns         2048
mask | 24 |     tbb |       86613 ns        86841 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       38941 ns        38925 ns         1024
data |  6 | avx tbb |       56716 ns        56743 ns         1024
mask |  6 | avx     |       34660 ns        34678 ns         1024
mask |  6 | avx tbb |       47259 ns        47246 ns         1024

data | 12 | avx     |       38829 ns        38857 ns         1024
data | 12 | avx tbb |       56133 ns        56167 ns         1024
mask | 12 | avx     |       34430 ns        34467 ns         1024
mask | 12 | avx tbb |       48141 ns        48223 ns         1024

data | 24 | avx     |       36282 ns        36312 ns         1024
data | 24 | avx tbb |       57218 ns        57049 ns         1024
mask | 24 | avx     |       35217 ns        35259 ns         1024
mask | 24 | avx tbb |       47730 ns        47730 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      431836 ns       431820 ns         1024
data |  6 | avx     |       63771 ns        63771 ns         1024
data |  6 |     tbb |      331165 ns       331335 ns         1024
data |  6 | avx tbb |       74466 ns        74623 ns         1024
mask |  6 |         |      476299 ns       476438 ns         1024
mask |  6 | avx     |       56028 ns        56040 ns         1024
mask |  6 |     tbb |      293936 ns       294078 ns         1024
mask |  6 | avx tbb |       70268 ns        70386 ns         1024

data | 12 |         |      226572 ns       226650 ns         1024
data | 12 | avx     |       62558 ns        62561 ns         1024
data | 12 |     tbb |      208005 ns       208448 ns         1024
data | 12 | avx tbb |       73414 ns        73511 ns         1024
mask | 12 |         |      467092 ns       467214 ns         1024
mask | 12 | avx     |       55654 ns        55671 ns         1024
mask | 12 |     tbb |      288390 ns       288506 ns         1024
mask | 12 | avx tbb |       71208 ns        71405 ns         1024

data | 24 |         |      121973 ns       122038 ns         1024
data | 24 | avx     |       58680 ns        58724 ns         1024
data | 24 |     tbb |      146115 ns       146129 ns         1024
data | 24 | avx tbb |       72557 ns        72643 ns         1024
mask | 24 |         |      465281 ns       465436 ns         1024
mask | 24 | avx     |       56515 ns        56526 ns         1024
mask | 24 |     tbb |      301426 ns       301556 ns         1024
mask | 24 | avx tbb |       69989 ns        70100 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1702072 ns      1702157 ns          512
data |  6 | avx     |      258776 ns       258658 ns          512
data |  6 |     tbb |     1032330 ns      1032278 ns          512
data |  6 | avx tbb |      256981 ns       256903 ns          512
mask |  6 |         |     1856733 ns      1855643 ns          512
mask |  6 | avx     |      223735 ns       223604 ns          512
mask |  6 |     tbb |      842874 ns       842768 ns          512
mask |  6 | avx tbb |      241337 ns       241340 ns          512

data | 12 |         |      877237 ns       877296 ns          512
data | 12 | avx     |      255208 ns       255082 ns          512
data | 12 |     tbb |      587747 ns       587717 ns          512
data | 12 | avx tbb |      250297 ns       250245 ns          512
mask | 12 |         |     1848411 ns      1848534 ns          512
mask | 12 | avx     |      223572 ns       223406 ns          512
mask | 12 |     tbb |      827726 ns       827668 ns          512
mask | 12 | avx tbb |      238084 ns       238077 ns          512

data | 24 |         |      469726 ns       469667 ns          512
data | 24 | avx     |      233472 ns       233321 ns          512
data | 24 |     tbb |      374557 ns       374520 ns          512
data | 24 | avx tbb |      249978 ns       249940 ns          512
mask | 24 |         |     1893513 ns      1893579 ns          512
mask | 24 | avx     |      226741 ns       226612 ns          512
mask | 24 |     tbb |      853310 ns       853276 ns          512
mask | 24 | avx tbb |      248048 ns       248049 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     7123667 ns      7123586 ns           64
data |  6 | avx     |     1012816 ns      1012567 ns           64
data |  6 |     tbb |     3717353 ns      3717116 ns           64
data |  6 | avx tbb |      786186 ns       785964 ns           64
mask |  6 |         |     7417936 ns      7417934 ns           64
mask |  6 | avx     |      870973 ns       870855 ns           64
mask |  6 |     tbb |     2908825 ns      2908644 ns           64
mask |  6 | avx tbb |      775169 ns       775009 ns           64

data | 12 |         |     3518477 ns      3518425 ns           64
data | 12 | avx     |     1061369 ns      1047358 ns           64
data | 12 |     tbb |     1990905 ns      1990702 ns           64
data | 12 | avx tbb |      846786 ns       846541 ns           64
mask | 12 |         |     7860884 ns      7860844 ns           64
mask | 12 | avx     |      960703 ns       960491 ns           64
mask | 12 |     tbb |     3018725 ns      3018569 ns           64
mask | 12 | avx tbb |      795939 ns       795842 ns           64

data | 24 |         |     1933417 ns      1932930 ns           64
data | 24 | avx     |     1021092 ns      1021042 ns           64
data | 24 |     tbb |     1141509 ns      1141325 ns           64
data | 24 | avx tbb |      788530 ns       788344 ns           64
mask | 24 |         |     7720892 ns      7720683 ns           64
mask | 24 | avx     |      934205 ns       934144 ns           64
mask | 24 |     tbb |     2925175 ns      2925017 ns           64
mask | 24 | avx tbb |      767445 ns       766981 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    28670819 ns     28670600 ns           32
data |  6 | avx     |     4368394 ns      4368447 ns           32
data |  6 |     tbb |    14761434 ns     14739684 ns           32
data |  6 | avx tbb |     2742456 ns      2742244 ns           32
mask |  6 |         |    29669169 ns     29658181 ns           32
mask |  6 | avx     |     3351050 ns      3351081 ns           32
mask |  6 |     tbb |    10908397 ns     10908187 ns           32
mask |  6 | avx tbb |     2637350 ns      2637159 ns           32

data | 12 |         |    13802069 ns     13801997 ns           32
data | 12 | avx     |     3939519 ns      3939544 ns           32
data | 12 |     tbb |     7406038 ns      7405775 ns           32
data | 12 | avx tbb |     2746491 ns      2746281 ns           32
mask | 12 |         |    30824322 ns     30824478 ns           32
mask | 12 | avx     |     3226719 ns      3226687 ns           32
mask | 12 |     tbb |    11020425 ns     11020212 ns           32
mask | 12 | avx tbb |     2634153 ns      2633919 ns           32

data | 24 |         |     7169059 ns      7168844 ns           32
data | 24 | avx     |     3495775 ns      3495737 ns           32
data | 24 |     tbb |     4000531 ns      4000262 ns           32
data | 24 | avx tbb |     2697531 ns      2697319 ns           32
mask | 24 |         |    29247434 ns     29236666 ns           32
mask | 24 | avx     |     3260250 ns      3260250 ns           32
mask | 24 |     tbb |    10936244 ns     10936016 ns           32
mask | 24 | avx tbb |     2702656 ns      2702419 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   109182781 ns    109181425 ns           16
data |  6 | avx     |    16020313 ns     16020238 ns           16
data |  6 |     tbb |    56282087 ns     56281581 ns           16
data |  6 | avx tbb |    10568281 ns     10568062 ns           16
mask |  6 |         |   117208644 ns    117172850 ns           16
mask |  6 | avx     |    12892125 ns     12892037 ns           16
mask |  6 |     tbb |    46799850 ns     46799656 ns           16
mask |  6 | avx tbb |    10307194 ns     10306913 ns           16

data | 12 |         |    54611175 ns     54610975 ns           16
data | 12 | avx     |    15660337 ns     15660244 ns           16
data | 12 |     tbb |    28740225 ns     28736819 ns           16
data | 12 | avx tbb |    10468306 ns     10468156 ns           16
mask | 12 |         |   116282694 ns    116245681 ns           16
mask | 12 | avx     |    12910938 ns     12910900 ns           16
mask | 12 |     tbb |    42523169 ns     42522931 ns           16
mask | 12 | avx tbb |    10285931 ns     10285619 ns           16

data | 24 |         |    28760331 ns     28760194 ns           16
data | 24 | avx     |    13992763 ns     13992700 ns           16
data | 24 |     tbb |    15154213 ns     15151469 ns           16
data | 24 | avx tbb |    10478406 ns     10478206 ns           16
mask | 24 |         |   116529250 ns    116487938 ns           16
mask | 24 | avx     |    13116956 ns     13116850 ns           16
mask | 24 |     tbb |    43798281 ns     43798100 ns           16
mask | 24 | avx tbb |    10284462 ns     10284137 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214343575 ns    214296737 ns            8
data |  6 | avx     |    31279187 ns     31278950 ns            8
data |  6 |     tbb |   112652188 ns    112651388 ns            8
data |  6 | avx tbb |    20899738 ns     20899575 ns            8
mask |  6 |         |   233023237 ns    233023025 ns            8
mask |  6 | avx     |    25764875 ns     25764663 ns            8
mask |  6 |     tbb |    95348075 ns     95347875 ns            8
mask |  6 | avx tbb |    20743950 ns     20735675 ns            8

data | 12 |         |   109434312 ns    109434012 ns            8
data | 12 | avx     |    31691800 ns     31691637 ns            8
data | 12 |     tbb |    55892375 ns     55892100 ns            8
data | 12 | avx tbb |    21122100 ns     21121937 ns            8
mask | 12 |         |   232989913 ns    232939800 ns            8
mask | 12 | avx     |    26101687 ns     26101513 ns            8
mask | 12 |     tbb |    93365675 ns     93244363 ns            8
mask | 12 | avx tbb |    20408275 ns     20407912 ns            8

data | 24 |         |    57034988 ns     57034825 ns            8
data | 24 | avx     |    28150763 ns     28150500 ns            8
data | 24 |     tbb |    29493162 ns     29492887 ns            8
data | 24 | avx tbb |    20857988 ns     20857837 ns            8
mask | 24 |         |   232624375 ns    232579125 ns            8
mask | 24 | avx     |    26005587 ns     26005588 ns            8
mask | 24 |     tbb |    88956500 ns     88956275 ns            8
mask | 24 | avx tbb |    20557075 ns     20556713 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   428541675 ns    428500963 ns            8
data |  6 | avx     |    63088750 ns     63088487 ns            8
data |  6 |     tbb |   224325737 ns    224325775 ns            8
data |  6 | avx tbb |    41421388 ns     41421175 ns            8
mask |  6 |         |   465890125 ns    465850413 ns            8
mask |  6 | avx     |    51565350 ns     51565187 ns            8
mask |  6 |     tbb |   180644088 ns    178960225 ns            8
mask |  6 | avx tbb |    40308550 ns     40308100 ns            8

data | 12 |         |   218784225 ns    218742887 ns            8
data | 12 | avx     |    63021300 ns     63020975 ns            8
data | 12 |     tbb |   113164213 ns    113157763 ns            8
data | 12 | avx tbb |    41674863 ns     41670363 ns            8
mask | 12 |         |   465721038 ns    465713887 ns            8
mask | 12 | avx     |    51617387 ns     51615950 ns            8
mask | 12 |     tbb |   181546412 ns    181499900 ns            8
mask | 12 | avx tbb |    40427913 ns     40427500 ns            8

data | 24 |         |   114109775 ns    114109250 ns            8
data | 24 | avx     |    55966538 ns     55966200 ns            8
data | 24 |     tbb |    60095412 ns     60087475 ns            8
data | 24 | avx tbb |    41434800 ns     41434425 ns            8
mask | 24 |         |   465917700 ns    465877512 ns            8
mask | 24 | avx     |    52199475 ns     52199375 ns            8
mask | 24 |     tbb |   167520100 ns    167429525 ns            8
mask | 24 | avx tbb |    40806662 ns     40806388 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   856750613 ns    856737213 ns            8
data |  6 | avx     |   126552787 ns    126470275 ns            8
data |  6 |     tbb |   446179325 ns    446143950 ns            8
data |  6 | avx tbb |    84064850 ns     83981225 ns            8
mask |  6 |         |   932953225 ns    932785600 ns            8
mask |  6 | avx     |   103446913 ns    103378837 ns            8
mask |  6 |     tbb |   384885025 ns    384850925 ns            8
mask |  6 | avx tbb |    81354050 ns     81353262 ns            8

data | 12 |         |   437407775 ns    437407362 ns            8
data | 12 | avx     |   126562450 ns    126562112 ns            8
data | 12 |     tbb |   225070012 ns    225061612 ns            8
data | 12 | avx tbb |    83038750 ns     83038650 ns            8
mask | 12 |         |   931614187 ns    931541250 ns            8
mask | 12 | avx     |   103920125 ns    103919913 ns            8
mask | 12 |     tbb |   365655900 ns    365508975 ns            8
mask | 12 | avx tbb |    81333450 ns     81332562 ns            8

data | 24 |         |   228434275 ns    228356438 ns            8
data | 24 | avx     |   112134800 ns    112133362 ns            8
data | 24 |     tbb |   119746850 ns    119740338 ns            8
data | 24 | avx tbb |    83158575 ns     83158250 ns            8
mask | 24 |         |   937350412 ns    937278388 ns            8
mask | 24 | avx     |   104339200 ns    104338938 ns            8
mask | 24 |     tbb |   364972100 ns    364848175 ns            8
mask | 24 | avx tbb |    81592237 ns     81591337 ns            8
```

</details>

