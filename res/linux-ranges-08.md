# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       82740 ns        82790 ns         2048
data |  6 |     tbb |       30759 ns        30698 ns         2048
mask |  6 |         |       95800 ns        95883 ns         2048
mask |  6 |     tbb |       31070 ns        31055 ns         2048

data | 12 |         |       46292 ns        46391 ns         2048
data | 12 |     tbb |       14681 ns        14637 ns         2048
mask | 12 |         |       95637 ns        95719 ns         2048
mask | 12 |     tbb |       23026 ns        22952 ns         2048

data | 24 |         |       23445 ns        23491 ns         2048
data | 24 |     tbb |       18731 ns        18694 ns         2048
mask | 24 |         |       95725 ns        95808 ns         2048
mask | 24 |     tbb |       43702 ns        43646 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       39103 ns        39137 ns         1024
data |  6 | avx tbb |       39499 ns        39449 ns         1024
mask |  6 | avx     |       36474 ns        36489 ns         1024
mask |  6 | avx tbb |       38951 ns        38891 ns         1024

data | 12 | avx     |       38679 ns        38707 ns         1024
data | 12 | avx tbb |       36138 ns        36039 ns         1024
mask | 12 | avx     |       35194 ns        35217 ns         1024
mask | 12 | avx tbb |       34301 ns        34247 ns         1024

data | 24 | avx     |       36211 ns        36282 ns         1024
data | 24 | avx tbb |       42016 ns        41953 ns         1024
mask | 24 | avx     |       35021 ns        35053 ns         1024
mask | 24 | avx tbb |       40944 ns        40162 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      437429 ns       437533 ns         1024
data |  6 | avx     |       62611 ns        62642 ns         1024
data |  6 |     tbb |      165963 ns       165995 ns         1024
data |  6 | avx tbb |       63201 ns        63242 ns         1024
mask |  6 |         |      460894 ns       461035 ns         1024
mask |  6 | avx     |       56474 ns        56504 ns         1024
mask |  6 |     tbb |      196250 ns       196233 ns         1024
mask |  6 | avx tbb |       61575 ns        61592 ns         1024

data | 12 |         |      225328 ns       225383 ns         1024
data | 12 | avx     |       62731 ns        62750 ns         1024
data | 12 |     tbb |       67773 ns        67750 ns         1024
data | 12 | avx tbb |       47875 ns        47831 ns         1024
mask | 12 |         |      462800 ns       462951 ns         1024
mask | 12 | avx     |       55533 ns        55556 ns         1024
mask | 12 |     tbb |      179452 ns       179370 ns         1024
mask | 12 | avx tbb |       48118 ns        48071 ns         1024

data | 24 |         |      117154 ns       117219 ns         1024
data | 24 | avx     |       58334 ns        58394 ns         1024
data | 24 |     tbb |       90511 ns        90635 ns         1024
data | 24 | avx tbb |       64129 ns        64112 ns         1024
mask | 24 |         |      473222 ns       473357 ns         1024
mask | 24 | avx     |       57010 ns        57057 ns         1024
mask | 24 |     tbb |      183792 ns       183802 ns         1024
mask | 24 | avx tbb |       62181 ns        62221 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1691998 ns      1692151 ns          512
data |  6 | avx     |      254757 ns       254643 ns          512
data |  6 |     tbb |      406263 ns       406181 ns          512
data |  6 | avx tbb |      218594 ns       218506 ns          512
mask |  6 |         |     1854248 ns      1854329 ns          512
mask |  6 | avx     |      215362 ns       215228 ns          512
mask |  6 |     tbb |      457739 ns       455958 ns          512
mask |  6 | avx tbb |      215609 ns       215517 ns          512

data | 12 |         |      889481 ns       889577 ns          512
data | 12 | avx     |      256220 ns       256052 ns          512
data | 12 |     tbb |      317683 ns       317732 ns          512
data | 12 | avx tbb |      215430 ns       215330 ns          512
mask | 12 |         |     1861022 ns      1861108 ns          512
mask | 12 | avx     |      215067 ns       214914 ns          512
mask | 12 |     tbb |      437015 ns       437028 ns          512
mask | 12 | avx tbb |      209194 ns       209143 ns          512

data | 24 |         |      470074 ns       470050 ns          512
data | 24 | avx     |      229421 ns       229286 ns          512
data | 24 |     tbb |      268218 ns       268342 ns          512
data | 24 | avx tbb |      214412 ns       214366 ns          512
mask | 24 |         |     1847353 ns      1847391 ns          512
mask | 24 | avx     |      218334 ns       218189 ns          512
mask | 24 |     tbb |      456961 ns       456710 ns          512
mask | 24 | avx tbb |      208113 ns       208111 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6879608 ns      6879403 ns           64
data |  6 | avx     |     1014203 ns      1014444 ns           64
data |  6 |     tbb |     1139023 ns      1138911 ns           64
data |  6 | avx tbb |      709844 ns       709361 ns           64
mask |  6 |         |     7412473 ns      7412456 ns           64
mask |  6 | avx     |      853911 ns       853841 ns           64
mask |  6 |     tbb |     1377019 ns      1376294 ns           64
mask |  6 | avx tbb |      706797 ns       706572 ns           64

data | 12 |         |     3531136 ns      3530947 ns           64
data | 12 | avx     |     1005344 ns      1005323 ns           64
data | 12 |     tbb |      866567 ns       866744 ns           64
data | 12 | avx tbb |      715648 ns       715269 ns           64
mask | 12 |         |     7432852 ns      7432728 ns           64
mask | 12 | avx     |      840434 ns       840423 ns           64
mask | 12 |     tbb |     1231130 ns      1230920 ns           64
mask | 12 | avx tbb |      707261 ns       706875 ns           64

data | 24 |         |     1866630 ns      1866544 ns           64
data | 24 | avx     |      925200 ns       925134 ns           64
data | 24 |     tbb |      757927 ns       757812 ns           64
data | 24 | avx tbb |      705394 ns       705128 ns           64
mask | 24 |         |     7395395 ns      7395481 ns           64
mask | 24 | avx     |      851441 ns       851419 ns           64
mask | 24 |     tbb |     1418387 ns      1414883 ns           64
mask | 24 | avx tbb |      703898 ns       703673 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27088234 ns     27088006 ns           32
data |  6 | avx     |     3963544 ns      3963512 ns           32
data |  6 |     tbb |     3911191 ns      3910859 ns           32
data |  6 | avx tbb |     2461416 ns      2461241 ns           32
mask |  6 |         |    29623841 ns     29623597 ns           32
mask |  6 | avx     |     3216062 ns      3215934 ns           32
mask |  6 |     tbb |     5057384 ns      4458828 ns           32
mask |  6 | avx tbb |     2474522 ns      2474369 ns           32

data | 12 |         |    13802144 ns     13801837 ns           32
data | 12 | avx     |     3932666 ns      3932659 ns           32
data | 12 |     tbb |     2899025 ns      2898844 ns           32
data | 12 | avx tbb |     2475456 ns      2475291 ns           32
mask | 12 |         |    29140172 ns     29139678 ns           32
mask | 12 | avx     |     3219547 ns      3219506 ns           32
mask | 12 |     tbb |     4473306 ns      4341197 ns           32
mask | 12 | avx tbb |     2465150 ns      2464981 ns           32

data | 24 |         |     7242591 ns      7242544 ns           32
data | 24 | avx     |     3493622 ns      3493653 ns           32
data | 24 |     tbb |     2617850 ns      2617731 ns           32
data | 24 | avx tbb |     2460766 ns      2441925 ns           32
mask | 24 |         |    29346566 ns     29346313 ns           32
mask | 24 | avx     |     3338969 ns      3338972 ns           32
mask | 24 |     tbb |     5150534 ns      4116381 ns           32
mask | 24 | avx tbb |     2471056 ns      2452587 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107331506 ns    107308213 ns           16
data |  6 | avx     |    15737087 ns     15737038 ns           16
data |  6 |     tbb |    15112862 ns     15112875 ns           16
data |  6 | avx tbb |     9551637 ns      9285494 ns           16
mask |  6 |         |   117168894 ns    117129256 ns           16
mask |  6 | avx     |    13003688 ns     13003325 ns           16
mask |  6 |     tbb |    19398012 ns     16899675 ns           16
mask |  6 | avx tbb |     9537606 ns      9270294 ns           16

data | 12 |         |    54802625 ns     54802562 ns           16
data | 12 | avx     |    16025300 ns     16025319 ns           16
data | 12 |     tbb |    11093256 ns     11031369 ns           16
data | 12 | avx tbb |     9544094 ns      9543969 ns           16
mask | 12 |         |   117440737 ns    117401450 ns           16
mask | 12 | avx     |    13078031 ns     13077962 ns           16
mask | 12 |     tbb |    17092381 ns     16591044 ns           16
mask | 12 | avx tbb |     9571150 ns      9570938 ns           16

data | 24 |         |    28612169 ns     28611937 ns           16
data | 24 | avx     |    14010794 ns     14010794 ns           16
data | 24 |     tbb |     9967606 ns      9967506 ns           16
data | 24 | avx tbb |     9474862 ns      9045669 ns           16
mask | 24 |         |   117006438 ns    117006363 ns           16
mask | 24 | avx     |    13261038 ns     13261044 ns           16
mask | 24 |     tbb |    19496200 ns     14738338 ns           16
mask | 24 | avx tbb |     9490256 ns      8708962 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   214752850 ns    214752125 ns            8
data |  6 | avx     |    31897375 ns     31892812 ns            8
data |  6 |     tbb |    30126400 ns     30126513 ns            8
data |  6 | avx tbb |    19031287 ns     18036687 ns            8
mask |  6 |         |   233753800 ns    233753962 ns            8
mask |  6 | avx     |    25779800 ns     25779713 ns            8
mask |  6 |     tbb |    38113987 ns     32218775 ns            8
mask |  6 | avx tbb |    18867862 ns     18071900 ns            8

data | 12 |         |   109649150 ns    109649163 ns            8
data | 12 | avx     |    31398750 ns     31398675 ns            8
data | 12 |     tbb |    21721775 ns     21721850 ns            8
data | 12 | avx tbb |    19080562 ns     19060687 ns            8
mask | 12 |         |   233296338 ns    233221250 ns            8
mask | 12 | avx     |    25901662 ns     25900350 ns            8
mask | 12 |     tbb |    32645063 ns     31713025 ns            8
mask | 12 | avx tbb |    19087112 ns     19021825 ns            8

data | 24 |         |    57228550 ns     57228450 ns            8
data | 24 | avx     |    28059938 ns     28059712 ns            8
data | 24 |     tbb |    19865337 ns     19865612 ns            8
data | 24 | avx tbb |    18712562 ns     17792437 ns            8
mask | 24 |         |   233619475 ns    233619312 ns            8
mask | 24 | avx     |    26371337 ns     26371113 ns            8
mask | 24 |     tbb |    39778800 ns     32075212 ns            8
mask | 24 | avx tbb |    18869012 ns     17722012 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429666425 ns    429665375 ns            8
data |  6 | avx     |    64193675 ns     64193375 ns            8
data |  6 |     tbb |    59883175 ns     59603513 ns            8
data |  6 | avx tbb |    37932850 ns     36578800 ns            8
mask |  6 |         |   466794200 ns    466717850 ns            8
mask |  6 | avx     |    52734337 ns     52734387 ns            8
mask |  6 |     tbb |    76248088 ns     66498500 ns            8
mask |  6 | avx tbb |    37626463 ns     36545313 ns            8

data | 12 |         |   219389762 ns    219389737 ns            8
data | 12 | avx     |    64146012 ns     64145900 ns            8
data | 12 |     tbb |    43684662 ns     43411913 ns            8
data | 12 | avx tbb |    38209963 ns     37947225 ns            8
mask | 12 |         |   467671638 ns    467595013 ns            8
mask | 12 | avx     |    52344687 ns     52344575 ns            8
mask | 12 |     tbb |    69295863 ns     67723312 ns            8
mask | 12 | avx tbb |    37910075 ns     37767075 ns            8

data | 24 |         |   114540125 ns    114539888 ns            8
data | 24 | avx     |    56078113 ns     56077850 ns            8
data | 24 |     tbb |    39552962 ns     39525337 ns            8
data | 24 | avx tbb |    37535375 ns     36784850 ns            8
mask | 24 |         |   467166250 ns    467094700 ns            8
mask | 24 | avx     |    53275563 ns     53275412 ns            8
mask | 24 |     tbb |    74231850 ns     61059138 ns            8
mask | 24 | avx tbb |    37618887 ns     36074850 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   860172512 ns    860172588 ns            8
data |  6 | avx     |   127468375 ns    127373450 ns            8
data |  6 |     tbb |   120282013 ns    119962687 ns            8
data |  6 | avx tbb |    75794600 ns     73709837 ns            8
mask |  6 |         |   934615787 ns    934577062 ns            8
mask |  6 | avx     |   105344713 ns    105304562 ns            8
mask |  6 |     tbb |   141224263 ns    129835762 ns            8
mask |  6 | avx tbb |    75549550 ns     73271513 ns            8

data | 12 |         |   438570963 ns    438570975 ns            8
data | 12 | avx     |   127204287 ns    127204025 ns            8
data | 12 |     tbb |    87114038 ns     86751550 ns            8
data | 12 | avx tbb |    76566025 ns     76247775 ns            8
mask | 12 |         |   933090387 ns    933051150 ns            8
mask | 12 | avx     |   104372088 ns    104371700 ns            8
mask | 12 |     tbb |   132385650 ns    129389725 ns            8
mask | 12 | avx tbb |    75992713 ns     75330350 ns            8

data | 24 |         |   229249100 ns    229208350 ns            8
data | 24 | avx     |   112078138 ns    112037000 ns            8
data | 24 |     tbb |    78945875 ns     78872312 ns            8
data | 24 | avx tbb |    74973625 ns     72794337 ns            8
mask | 24 |         |   933937012 ns    933894062 ns            8
mask | 24 | avx     |   105346637 ns    105306763 ns            8
mask | 24 |     tbb |   147380812 ns    126287500 ns            8
mask | 24 | avx tbb |    75171225 ns     71197513 ns            8
```

</details>

