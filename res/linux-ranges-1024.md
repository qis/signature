# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       82823 ns        82901 ns         2048
data |  6 |     tbb |       34690 ns        34648 ns         2048
mask |  6 |         |       91492 ns        91597 ns         2048
mask |  6 |     tbb |       24120 ns        24068 ns         2048

data | 12 |         |       44394 ns        44458 ns         2048
data | 12 |     tbb |       27632 ns        27558 ns         2048
mask | 12 |         |       95608 ns        95680 ns         2048
mask | 12 |     tbb |       24106 ns        24008 ns         2048

data | 24 |         |       23074 ns        23123 ns         2048
data | 24 |     tbb |       26138 ns        26098 ns         2048
mask | 24 |         |       94541 ns        94640 ns         2048
mask | 24 |     tbb |       24563 ns        24491 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       39788 ns        39824 ns         1024
data |  6 | avx tbb |       30299 ns        30040 ns         1024
mask |  6 | avx     |       34847 ns        34847 ns         1024
mask |  6 | avx tbb |       29627 ns        29488 ns         1024

data | 12 | avx     |       40282 ns        40300 ns         1024
data | 12 | avx tbb |       29973 ns        29782 ns         1024
mask | 12 | avx     |       35192 ns        35264 ns         1024
mask | 12 | avx tbb |       28662 ns        28529 ns         1024

data | 24 | avx     |       36883 ns        36917 ns         1024
data | 24 | avx tbb |       30188 ns        30052 ns         1024
mask | 24 | avx     |       35581 ns        35619 ns         1024
mask | 24 | avx tbb |       28809 ns        28677 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      426833 ns       426947 ns         1024
data |  6 | avx     |       62927 ns        62940 ns         1024
data |  6 |     tbb |       66749 ns        66629 ns         1024
data |  6 | avx tbb |       42894 ns        42741 ns         1024
mask |  6 |         |      460739 ns       460918 ns         1024
mask |  6 | avx     |       56120 ns        56112 ns         1024
mask |  6 |     tbb |       71350 ns        71244 ns         1024
mask |  6 | avx tbb |       43892 ns        42998 ns         1024

data | 12 |         |      220408 ns       220504 ns         1024
data | 12 | avx     |       62276 ns        62324 ns         1024
data | 12 |     tbb |       51284 ns        51167 ns         1024
data | 12 | avx tbb |       43855 ns        43826 ns         1024
mask | 12 |         |      461564 ns       461694 ns         1024
mask | 12 | avx     |       55974 ns        55993 ns         1024
mask | 12 |     tbb |       70030 ns        69942 ns         1024
mask | 12 | avx tbb |       43342 ns        43294 ns         1024

data | 24 |         |      116413 ns       116493 ns         1024
data | 24 | avx     |       58461 ns        58497 ns         1024
data | 24 |     tbb |       50308 ns        50083 ns         1024
data | 24 | avx tbb |       42783 ns        42629 ns         1024
mask | 24 |         |      461905 ns       462053 ns         1024
mask | 24 | avx     |       56451 ns        56447 ns         1024
mask | 24 |     tbb |       67599 ns        67511 ns         1024
mask | 24 | avx tbb |       43632 ns        43528 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1688850 ns      1688941 ns          512
data |  6 | avx     |      252669 ns       252540 ns          512
data |  6 |     tbb |      298369 ns       298288 ns          512
data |  6 | avx tbb |      197295 ns       197114 ns          512
mask |  6 |         |     1836035 ns      1836081 ns          512
mask |  6 | avx     |      219705 ns       219542 ns          512
mask |  6 |     tbb |      321875 ns       321762 ns          512
mask |  6 | avx tbb |      194330 ns       194216 ns          512

data | 12 |         |      867691 ns       867752 ns          512
data | 12 | avx     |      257177 ns       257042 ns          512
data | 12 |     tbb |      282613 ns       282479 ns          512
data | 12 | avx tbb |      206142 ns       205930 ns          512
mask | 12 |         |     1851199 ns      1851258 ns          512
mask | 12 | avx     |      215159 ns       214935 ns          512
mask | 12 |     tbb |      319199 ns       319086 ns          512
mask | 12 | avx tbb |      196503 ns       196377 ns          512

data | 24 |         |      456916 ns       456869 ns          512
data | 24 | avx     |      227499 ns       227340 ns          512
data | 24 |     tbb |      266105 ns       266019 ns          512
data | 24 | avx tbb |      209579 ns       209407 ns          512
mask | 24 |         |     1855525 ns      1855584 ns          512
mask | 24 | avx     |      221420 ns       221242 ns          512
mask | 24 |     tbb |      323927 ns       323797 ns          512
mask | 24 | avx tbb |      197419 ns       197288 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6783200 ns      6783153 ns           64
data |  6 | avx     |     1010323 ns      1010348 ns           64
data |  6 |     tbb |      832414 ns       832456 ns           64
data |  6 | avx tbb |      681259 ns       681266 ns           64
mask |  6 |         |     7556108 ns      7556070 ns           64
mask |  6 | avx     |      831941 ns       831992 ns           64
mask |  6 |     tbb |     1004795 ns      1004522 ns           64
mask |  6 | avx tbb |      676580 ns       676559 ns           64

data | 12 |         |     3488042 ns      3487959 ns           64
data | 12 | avx     |      995438 ns       995478 ns           64
data | 12 |     tbb |      734233 ns       734105 ns           64
data | 12 | avx tbb |      683955 ns       683964 ns           64
mask | 12 |         |     7395902 ns      7381545 ns           64
mask | 12 | avx     |      844058 ns       843998 ns           64
mask | 12 |     tbb |     1004936 ns      1004530 ns           64
mask | 12 | avx tbb |      678122 ns       678103 ns           64

data | 24 |         |     1882984 ns      1882963 ns           64
data | 24 | avx     |      906337 ns       906189 ns           64
data | 24 |     tbb |      719858 ns       719878 ns           64
data | 24 | avx tbb |      678502 ns       678508 ns           64
mask | 24 |         |     7356247 ns      7356214 ns           64
mask | 24 | avx     |      848053 ns       848006 ns           64
mask | 24 |     tbb |      988267 ns       988237 ns           64
mask | 24 | avx tbb |      682009 ns       682039 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27002019 ns     27001928 ns           32
data |  6 | avx     |     3919269 ns      3919197 ns           32
data |  6 |     tbb |     2779550 ns      2779872 ns           32
data |  6 | avx tbb |     2413269 ns      2413425 ns           32
mask |  6 |         |    29125200 ns     29125284 ns           32
mask |  6 | avx     |     3258237 ns      3258275 ns           32
mask |  6 |     tbb |     3512625 ns      3512809 ns           32
mask |  6 | avx tbb |     2418550 ns      2418672 ns           32

data | 12 |         |    13725238 ns     13725122 ns           32
data | 12 | avx     |     3922172 ns      3922125 ns           32
data | 12 |     tbb |     2498847 ns      2498994 ns           32
data | 12 | avx tbb |     2411000 ns      2411069 ns           32
mask | 12 |         |    29230406 ns     29229275 ns           32
mask | 12 | avx     |     3236850 ns      3236834 ns           32
mask | 12 |     tbb |     3518659 ns      3518791 ns           32
mask | 12 | avx tbb |     2417697 ns      2417800 ns           32

data | 24 |         |     7227209 ns      7227225 ns           32
data | 24 | avx     |     3517147 ns      3517097 ns           32
data | 24 |     tbb |     2479719 ns      2479897 ns           32
data | 24 | avx tbb |     2416231 ns      2416350 ns           32
mask | 24 |         |    29221419 ns     29221169 ns           32
mask | 24 | avx     |     3270234 ns      3270253 ns           32
mask | 24 |     tbb |     3523722 ns      3523744 ns           32
mask | 24 | avx tbb |     2421497 ns      2421647 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107218469 ns    107217788 ns           16
data |  6 | avx     |    15640719 ns     15640688 ns           16
data |  6 |     tbb |    10598844 ns     10599806 ns           16
data |  6 | avx tbb |     9409225 ns      9408850 ns           16
mask |  6 |         |   116791213 ns    116766556 ns           16
mask |  6 | avx     |    12891813 ns     12891775 ns           16
mask |  6 |     tbb |    13542950 ns     13543094 ns           16
mask |  6 | avx tbb |     9392919 ns      9393194 ns           16

data | 12 |         |    55140594 ns     55140544 ns           16
data | 12 | avx     |    15784887 ns     15785100 ns           16
data | 12 |     tbb |     9562344 ns      9562481 ns           16
data | 12 | avx tbb |     9404194 ns      9404300 ns           16
mask | 12 |         |   116950581 ns    116927706 ns           16
mask | 12 | avx     |    12914494 ns     12914431 ns           16
mask | 12 |     tbb |    13550206 ns     13550400 ns           16
mask | 12 | avx tbb |     9384681 ns      9384788 ns           16

data | 24 |         |    28479181 ns     28479019 ns           16
data | 24 | avx     |    14010087 ns     13986500 ns           16
data | 24 |     tbb |     9542906 ns      9543006 ns           16
data | 24 | avx tbb |     9387763 ns      9387987 ns           16
mask | 24 |         |   116906975 ns    116906956 ns           16
mask | 24 | avx     |    13075781 ns     13075719 ns           16
mask | 24 |     tbb |    13543600 ns     13542875 ns           16
mask | 24 | avx tbb |     9375175 ns      9375187 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214456950 ns    214456800 ns            8
data |  6 | avx     |    31305488 ns     31305187 ns            8
data |  6 |     tbb |    20959425 ns     20959538 ns            8
data |  6 | avx tbb |    18685337 ns     18685513 ns            8
mask |  6 |         |   233149538 ns    233149638 ns            8
mask |  6 | avx     |    25966737 ns     25966562 ns            8
mask |  6 |     tbb |    26904362 ns     26904413 ns            8
mask |  6 | avx tbb |    18675400 ns     18675688 ns            8

data | 12 |         |   109387563 ns    109387438 ns            8
data | 12 | avx     |    31247288 ns     31247088 ns            8
data | 12 |     tbb |    19013913 ns     19015837 ns            8
data | 12 | avx tbb |    18693437 ns     18693487 ns            8
mask | 12 |         |   233060312 ns    233060450 ns            8
mask | 12 | avx     |    25779850 ns     25779650 ns            8
mask | 12 |     tbb |    26910525 ns     26910550 ns            8
mask | 12 | avx tbb |    18653125 ns     18653137 ns            8

data | 24 |         |    57284363 ns     57284163 ns            8
data | 24 | avx     |    28058900 ns     28058712 ns            8
data | 24 |     tbb |    18974700 ns     18974838 ns            8
data | 24 | avx tbb |    18706238 ns     18706350 ns            8
mask | 24 |         |   232976312 ns    232976288 ns            8
mask | 24 | avx     |    26148013 ns     26147825 ns            8
mask | 24 |     tbb |    26940013 ns     26943187 ns            8
mask | 24 | avx tbb |    18692887 ns     18692925 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   428936700 ns    428894237 ns            8
data |  6 | avx     |    62923913 ns     62923612 ns            8
data |  6 |     tbb |    41779488 ns     41712450 ns            8
data |  6 | avx tbb |    37280250 ns     37280363 ns            8
mask |  6 |         |   466251100 ns    466207112 ns            8
mask |  6 | avx     |    52037813 ns     52037550 ns            8
mask |  6 |     tbb |    53676113 ns     53626587 ns            8
mask |  6 | avx tbb |    37278700 ns     37279012 ns            8

data | 12 |         |   219062937 ns    219018800 ns            8
data | 12 | avx     |    63238912 ns     63238650 ns            8
data | 12 |     tbb |    37868875 ns     37871100 ns            8
data | 12 | avx tbb |    37375200 ns     37378562 ns            8
mask | 12 |         |   466525663 ns    466507875 ns            8
mask | 12 | avx     |    52127275 ns     52127025 ns            8
mask | 12 |     tbb |    53629975 ns     53630088 ns            8
mask | 12 | avx tbb |    37281450 ns     37281713 ns            8

data | 24 |         |   114221125 ns    114220850 ns            8
data | 24 | avx     |    55738900 ns     55738500 ns            8
data | 24 |     tbb |    37834737 ns     37835425 ns            8
data | 24 | avx tbb |    37322950 ns     37323025 ns            8
mask | 24 |         |   466281825 ns    466237513 ns            8
mask | 24 | avx     |    52667050 ns     52666825 ns            8
mask | 24 |     tbb |    53741088 ns     53741213 ns            8
mask | 24 | avx tbb |    37273200 ns     37273413 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   859301637 ns    859300925 ns            8
data |  6 | avx     |   126189012 ns    126148137 ns            8
data |  6 |     tbb |    83277888 ns     83214200 ns            8
data |  6 | avx tbb |    74575713 ns     74575675 ns            8
mask |  6 |         |   932397388 ns    932358525 ns            8
mask |  6 | avx     |   104155075 ns    104155100 ns            8
mask |  6 |     tbb |   107396488 ns    107347912 ns            8
mask |  6 | avx tbb |    74440900 ns     74319725 ns            8

data | 12 |         |   437581600 ns    437581450 ns            8
data | 12 | avx     |   126213787 ns    126213450 ns            8
data | 12 |     tbb |    75662900 ns     75662938 ns            8
data | 12 | avx tbb |    74500713 ns     74392575 ns            8
mask | 12 |         |   933198687 ns    933158800 ns            8
mask | 12 | avx     |   103935663 ns    103935562 ns            8
mask | 12 |     tbb |   107371012 ns    107322988 ns            8
mask | 12 | avx tbb |    74496237 ns     74383050 ns            8

data | 24 |         |   228248800 ns    228209475 ns            8
data | 24 | avx     |   111373188 ns    111372725 ns            8
data | 24 |     tbb |    75505388 ns     75421775 ns            8
data | 24 | avx tbb |    74475125 ns     74354250 ns            8
mask | 24 |         |   932928238 ns    932889112 ns            8
mask | 24 | avx     |   107150100 ns    107149963 ns            8
mask | 24 |     tbb |   107598975 ns    107547887 ns            8
mask | 24 | avx tbb |    74429337 ns     74321788 ns            8
```

</details>

