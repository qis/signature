# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       85716 ns        85759 ns         2048
data |  6 |     tbb |       21674 ns        21565 ns         2048
mask |  6 |         |       67837 ns        67890 ns         2048
mask |  6 |     tbb |       31107 ns        31061 ns         2048

data | 12 |         |       45438 ns        45462 ns         2048
data | 12 |     tbb |       13299 ns        13234 ns         2048
mask | 12 |         |       67427 ns        67456 ns         2048
mask | 12 |     tbb |       30289 ns        30240 ns         2048

data | 24 |         |       23874 ns        23906 ns         2048
data | 24 |     tbb |       10690 ns        10624 ns         2048
mask | 24 |         |       67353 ns        67394 ns         2048
mask | 24 |     tbb |       30159 ns        30106 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       38967 ns        38967 ns         1024
data |  6 | avx tbb |       30473 ns        30351 ns         1024
mask |  6 | avx     |       34935 ns        34965 ns         1024
mask |  6 | avx tbb |       30900 ns        30770 ns         1024

data | 12 | avx     |       38116 ns        38104 ns         1024
data | 12 | avx tbb |       30004 ns        29860 ns         1024
mask | 12 | avx     |       34441 ns        34474 ns         1024
mask | 12 | avx tbb |       28595 ns        28499 ns         1024

data | 24 | avx     |       34876 ns        34878 ns         1024
data | 24 | avx tbb |       29586 ns        29469 ns         1024
mask | 24 | avx     |       35313 ns        35325 ns         1024
mask | 24 | avx tbb |       28260 ns        28170 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      433150 ns       433240 ns         1024
data |  6 | avx     |       59671 ns        59681 ns         1024
data |  6 |     tbb |      110262 ns       110287 ns         1024
data |  6 | avx tbb |       42829 ns        42684 ns         1024
mask |  6 |         |      329228 ns       329350 ns         1024
mask |  6 | avx     |       56282 ns        56300 ns         1024
mask |  6 |     tbb |      208337 ns       208317 ns         1024
mask |  6 | avx tbb |       40700 ns        40626 ns         1024

data | 12 |         |      220277 ns       220367 ns         1024
data | 12 | avx     |       60408 ns        60430 ns         1024
data | 12 |     tbb |       51669 ns        51631 ns         1024
data | 12 | avx tbb |       41436 ns        41344 ns         1024
mask | 12 |         |      327116 ns       327237 ns         1024
mask | 12 | avx     |       55761 ns        55767 ns         1024
mask | 12 |     tbb |      203994 ns       203249 ns         1024
mask | 12 | avx tbb |       41562 ns        41439 ns         1024

data | 24 |         |      117191 ns       117268 ns         1024
data | 24 | avx     |       56635 ns        56645 ns         1024
data | 24 |     tbb |       46059 ns        45996 ns         1024
data | 24 | avx tbb |       42780 ns        42696 ns         1024
mask | 24 |         |      327768 ns       327883 ns         1024
mask | 24 | avx     |       57130 ns        57143 ns         1024
mask | 24 |     tbb |      206217 ns       206236 ns         1024
mask | 24 | avx tbb |       41173 ns        41106 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1693680 ns      1693701 ns          512
data |  6 | avx     |      239420 ns       239271 ns          512
data |  6 |     tbb |      381352 ns       381406 ns          512
data |  6 | avx tbb |      209121 ns       208935 ns          512
mask |  6 |         |     1302938 ns      1302999 ns          512
mask |  6 | avx     |      218879 ns       218786 ns          512
mask |  6 |     tbb |      569438 ns       569364 ns          512
mask |  6 | avx tbb |      201936 ns       201764 ns          512

data | 12 |         |      880545 ns       880554 ns          512
data | 12 | avx     |      242536 ns       242385 ns          512
data | 12 |     tbb |      291561 ns       291445 ns          512
data | 12 | avx tbb |      208422 ns       208176 ns          512
mask | 12 |         |     1313739 ns      1313769 ns          512
mask | 12 | avx     |      218263 ns       218098 ns          512
mask | 12 |     tbb |      575657 ns       575633 ns          512
mask | 12 | avx tbb |      203897 ns       203758 ns          512

data | 24 |         |      463297 ns       463215 ns          512
data | 24 | avx     |      218042 ns       217939 ns          512
data | 24 |     tbb |      258286 ns       256622 ns          512
data | 24 | avx tbb |      210668 ns       210504 ns          512
mask | 24 |         |     1309294 ns      1309291 ns          512
mask | 24 | avx     |      223504 ns       223340 ns          512
mask | 24 |     tbb |      568913 ns       568881 ns          512
mask | 24 | avx tbb |      202439 ns       202317 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6876223 ns      6876116 ns           64
data |  6 | avx     |      963230 ns       963194 ns           64
data |  6 |     tbb |     1126466 ns      1126083 ns           64
data |  6 | avx tbb |      709714 ns       709537 ns           64
mask |  6 |         |     5244680 ns      5244633 ns           64
mask |  6 | avx     |      848175 ns       846936 ns           64
mask |  6 |     tbb |     1757905 ns      1758077 ns           64
mask |  6 | avx tbb |      703297 ns       703766 ns           64

data | 12 |         |     3504119 ns      3503997 ns           64
data | 12 | avx     |      965084 ns       965098 ns           64
data | 12 |     tbb |      863250 ns       863386 ns           64
data | 12 | avx tbb |      711441 ns       711494 ns           64
mask | 12 |         |     5228436 ns      5215648 ns           64
mask | 12 | avx     |      850803 ns       850792 ns           64
mask | 12 |     tbb |     1752273 ns      1751930 ns           64
mask | 12 | avx tbb |      707389 ns       707433 ns           64

data | 24 |         |     1873392 ns      1873291 ns           64
data | 24 | avx     |      843028 ns       843017 ns           64
data | 24 |     tbb |      765042 ns       764820 ns           64
data | 24 | avx tbb |      707178 ns       707006 ns           64
mask | 24 |         |     5206437 ns      5206380 ns           64
mask | 24 | avx     |      862886 ns       862833 ns           64
mask | 24 |     tbb |     1813131 ns      1812889 ns           64
mask | 24 | avx tbb |      703961 ns       703864 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27045303 ns     27044978 ns           32
data |  6 | avx     |     3697581 ns      3697497 ns           32
data |  6 |     tbb |     3940862 ns      3884894 ns           32
data |  6 | avx tbb |     2476534 ns      2476309 ns           32
mask |  6 |         |    20615144 ns     20615022 ns           32
mask |  6 | avx     |     3279075 ns      3267322 ns           32
mask |  6 |     tbb |     6673459 ns      6338516 ns           32
mask |  6 | avx tbb |     2473866 ns      2473441 ns           32

data | 12 |         |    13835078 ns     13834941 ns           32
data | 12 | avx     |     3850003 ns      3849903 ns           32
data | 12 |     tbb |     2867178 ns      2863519 ns           32
data | 12 | avx tbb |     2470459 ns      2468369 ns           32
mask | 12 |         |    20698434 ns     20698309 ns           32
mask | 12 | avx     |     3272650 ns      3272609 ns           32
mask | 12 |     tbb |     6630519 ns      6381497 ns           32
mask | 12 | avx tbb |     2457000 ns      2456759 ns           32

data | 24 |         |     7266897 ns      7256162 ns           32
data | 24 | avx     |     3260238 ns      3260156 ns           32
data | 24 |     tbb |     2589494 ns      2589019 ns           32
data | 24 | avx tbb |     2464781 ns      2464544 ns           32
mask | 24 |         |    20631459 ns     20631309 ns           32
mask | 24 | avx     |     3346591 ns      3346569 ns           32
mask | 24 |     tbb |     6945231 ns      6587984 ns           32
mask | 24 | avx tbb |     2468088 ns      2467903 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107822862 ns    107797519 ns           16
data |  6 | avx     |    15187756 ns     15187719 ns           16
data |  6 |     tbb |    15103994 ns     14281331 ns           16
data |  6 | avx tbb |     9564050 ns      9448431 ns           16
mask |  6 |         |    82269294 ns     82269169 ns           16
mask |  6 | avx     |    12923606 ns     12923644 ns           16
mask |  6 |     tbb |    25573506 ns     22420863 ns           16
mask |  6 | avx tbb |     9579069 ns      9463612 ns           16

data | 12 |         |    54765988 ns     54743787 ns           16
data | 12 | avx     |    14887781 ns     14887137 ns           16
data | 12 |     tbb |    10941056 ns      9495656 ns           16
data | 12 | avx tbb |     9566087 ns      9352363 ns           16
mask | 12 |         |    82174631 ns     82153412 ns           16
mask | 12 | avx     |    12894675 ns     12894544 ns           16
mask | 12 |     tbb |    25595631 ns     21061275 ns           16
mask | 12 | avx tbb |     9586813 ns      9488131 ns           16

data | 24 |         |    28682788 ns     28682887 ns           16
data | 24 | avx     |    13006594 ns     13006500 ns           16
data | 24 |     tbb |     9852294 ns      9852075 ns           16
data | 24 | avx tbb |     9579819 ns      9579675 ns           16
mask | 24 |         |    82241125 ns     82219875 ns           16
mask | 24 | avx     |    13004788 ns     13004663 ns           16
mask | 24 |     tbb |    27397538 ns     22946450 ns           16
mask | 24 | avx tbb |     9570456 ns      9471738 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214770300 ns    214770175 ns            8
data |  6 | avx     |    29879500 ns     29879350 ns            8
data |  6 |     tbb |    29910663 ns     24784300 ns            8
data |  6 | avx tbb |    19091575 ns     18567313 ns            8
mask |  6 |         |   164567275 ns    164567263 ns            8
mask |  6 | avx     |    25757825 ns     25757613 ns            8
mask |  6 |     tbb |    57575188 ns     40613975 ns            8
mask |  6 | avx tbb |    19088800 ns     18576550 ns            8

data | 12 |         |   109385325 ns    109385175 ns            8
data | 12 | avx     |    29767100 ns     29721562 ns            8
data | 12 |     tbb |    21583225 ns     20757612 ns            8
data | 12 | avx tbb |    19018825 ns     18493538 ns            8
mask | 12 |         |   164512612 ns    164512500 ns            8
mask | 12 | avx     |    25908200 ns     25908087 ns            8
mask | 12 |     tbb |    53890725 ns     42434487 ns            8
mask | 12 | avx tbb |    19008400 ns     18446437 ns            8

data | 24 |         |    57096087 ns     57095750 ns            8
data | 24 | avx     |    25853200 ns     25853062 ns            8
data | 24 |     tbb |    19485400 ns     19485262 ns            8
data | 24 | avx tbb |    19121062 ns     19095800 ns            8
mask | 24 |         |   164770538 ns    164721037 ns            8
mask | 24 | avx     |    26287100 ns     26287062 ns            8
mask | 24 |     tbb |    49584100 ns     36915825 ns            8
mask | 24 | avx tbb |    19034688 ns     18445400 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429967575 ns    429924238 ns            8
data |  6 | avx     |    59926188 ns     59925750 ns            8
data |  6 |     tbb |    59996313 ns     49495475 ns            8
data |  6 | avx tbb |    37954537 ns     34383837 ns            8
mask |  6 |         |   329117512 ns    329117775 ns            8
mask |  6 | avx     |    51789950 ns     51789762 ns            8
mask |  6 |     tbb |   110180175 ns     69385250 ns            8
mask |  6 | avx tbb |    38041112 ns     35526450 ns            8

data | 12 |         |   219088538 ns    219047413 ns            8
data | 12 | avx     |    60096737 ns     60096487 ns            8
data | 12 |     tbb |    42778563 ns     40998588 ns            8
data | 12 | avx tbb |    38113987 ns     34623100 ns            8
mask | 12 |         |   329018425 ns    329018712 ns            8
mask | 12 | avx     |    51686800 ns     51686663 ns            8
mask | 12 |     tbb |   108139150 ns    105503837 ns            8
mask | 12 | avx tbb |    38058300 ns     37681175 ns            8

data | 24 |         |   114255925 ns    114255713 ns            8
data | 24 | avx     |    51580413 ns     51580025 ns            8
data | 24 |     tbb |    38823925 ns     38824325 ns            8
data | 24 | avx tbb |    38113225 ns     38029188 ns            8
mask | 24 |         |   329388012 ns    329317863 ns            8
mask | 24 | avx     |    52253562 ns     52253350 ns            8
mask | 24 |     tbb |   108172588 ns     73696037 ns            8
mask | 24 | avx tbb |    38003400 ns     37911975 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   859690325 ns    859690275 ns            8
data |  6 | avx     |   119736287 ns    119735987 ns            8
data |  6 |     tbb |   120174663 ns     70478250 ns            8
data |  6 | avx tbb |    76388425 ns     64058887 ns            8
mask |  6 |         |   657696613 ns    657627600 ns            8
mask |  6 | avx     |   103122850 ns    103122450 ns            8
mask |  6 |     tbb |   220165063 ns    143499138 ns            8
mask |  6 | avx tbb |    76594438 ns     63586100 ns            8

data | 12 |         |   437937125 ns    437937200 ns            8
data | 12 | avx     |   120226650 ns    120226600 ns            8
data | 12 |     tbb |    86770600 ns     68623650 ns            8
data | 12 | avx tbb |    76570350 ns     63790063 ns            8
mask | 12 |         |   658437025 ns    658368262 ns            8
mask | 12 | avx     |   103609362 ns    103609050 ns            8
mask | 12 |     tbb |   213047112 ns    143905050 ns            8
mask | 12 | avx tbb |    76559575 ns     73267562 ns            8

data | 24 |         |   229081063 ns    229013863 ns            8
data | 24 | avx     |   104770412 ns    104770225 ns            8
data | 24 |     tbb |    78002462 ns     59940637 ns            8
data | 24 | avx tbb |    76587562 ns     61591375 ns            8
mask | 24 |         |   658194625 ns    658122338 ns            8
mask | 24 | avx     |   104582025 ns    104581562 ns            8
mask | 24 |     tbb |   218264850 ns    163891763 ns            8
mask | 24 | avx tbb |    76581350 ns     76003737 ns            8
```

</details>

