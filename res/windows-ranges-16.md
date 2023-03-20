# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83240 ns        76294 ns         2048
data |  6 |     tbb |       19346 ns        30518 ns         2048
mask |  6 |         |      125774 ns       129700 ns         2048
mask |  6 |     tbb |       33924 ns        22888 ns         2048

data | 12 |         |       43818 ns        38147 ns         2048
data | 12 |     tbb |       13494 ns        15259 ns         2048
mask | 12 |         |      127387 ns       137329 ns         2048
mask | 12 |     tbb |       37123 ns        38147 ns         2048

data | 24 |         |       23406 ns        30518 ns         2048
data | 24 |     tbb |       11281 ns        15259 ns         2048
mask | 24 |         |      123597 ns       129700 ns         2048
mask | 24 |     tbb |       35104 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17400 ns        30518 ns         1024
data |  6 | avx tbb |       14486 ns        30518 ns         1024
mask |  6 | avx     |       19025 ns        30518 ns         1024
mask |  6 | avx tbb |       14166 ns        30518 ns         1024

data | 12 | avx     |       17397 ns        30518 ns         1024
data | 12 | avx tbb |       16391 ns        30518 ns         1024
mask | 12 | avx     |       18995 ns        15259 ns         1024
mask | 12 | avx tbb |       15272 ns        15259 ns         1024

data | 24 | avx     |       17121 ns        15259 ns         1024
data | 24 | avx tbb |       15790 ns        0.000 ns         1024
mask | 24 | avx     |       18938 ns        30518 ns         1024
mask | 24 | avx tbb |       14571 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      425846 ns       411987 ns         1024
data |  6 | avx     |       26372 ns        15259 ns         1024
data |  6 |     tbb |       55310 ns        76294 ns         1024
data |  6 | avx tbb |       21179 ns        45776 ns         1024
mask |  6 |         |      624437 ns       610352 ns         1024
mask |  6 | avx     |       29143 ns        0.000 ns         1024
mask |  6 |     tbb |      153398 ns       106812 ns         1024
mask |  6 | avx tbb |       18853 ns        45776 ns         1024

data | 12 |         |      218980 ns       198364 ns         1024
data | 12 | avx     |       25835 ns        30518 ns         1024
data | 12 |     tbb |       37561 ns        30518 ns         1024
data | 12 | avx tbb |       21525 ns        15259 ns         1024
mask | 12 |         |      624551 ns       625610 ns         1024
mask | 12 | avx     |       29190 ns        30518 ns         1024
mask | 12 |     tbb |      192034 ns       228882 ns         1024
mask | 12 | avx tbb |       20943 ns        15259 ns         1024

data | 24 |         |      112647 ns       122070 ns         1024
data | 24 | avx     |       26814 ns        15259 ns         1024
data | 24 |     tbb |       27313 ns        61035 ns         1024
data | 24 | avx tbb |       20279 ns        45776 ns         1024
mask | 24 |         |      626097 ns       549316 ns         1024
mask | 24 | avx     |       29137 ns        45776 ns         1024
mask | 24 |     tbb |      162703 ns       167847 ns         1024
mask | 24 | avx tbb |       18984 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1676085 ns      1739502 ns          512
data |  6 | avx     |      199689 ns       213623 ns          512
data |  6 |     tbb |      262099 ns       274658 ns          512
data |  6 | avx tbb |      161003 ns       152588 ns          512
mask |  6 |         |     2490360 ns      2471924 ns          512
mask |  6 | avx     |      200834 ns       244141 ns          512
mask |  6 |     tbb |      565858 ns       518799 ns          512
mask |  6 | avx tbb |      160197 ns       152588 ns          512

data | 12 |         |      859980 ns       793457 ns          512
data | 12 | avx     |      200759 ns       183105 ns          512
data | 12 |     tbb |      230472 ns       213623 ns          512
data | 12 | avx tbb |      162580 ns       122070 ns          512
mask | 12 |         |     2504133 ns      2563477 ns          512
mask | 12 | avx     |      195229 ns       183105 ns          512
mask | 12 |     tbb |      617744 ns       671387 ns          512
mask | 12 | avx tbb |      161872 ns       274658 ns          512

data | 24 |         |      453542 ns       427246 ns          512
data | 24 | avx     |      196065 ns       183105 ns          512
data | 24 |     tbb |      198502 ns       152588 ns          512
data | 24 | avx tbb |      161327 ns       213623 ns          512
mask | 24 |         |     2496048 ns      2502441 ns          512
mask | 24 | avx     |      199513 ns       152588 ns          512
mask | 24 |     tbb |      575337 ns       610352 ns          512
mask | 24 | avx tbb |      159641 ns       274658 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6706411 ns      6347656 ns           64
data |  6 | avx     |      806728 ns       244141 ns           64
data |  6 |     tbb |      866139 ns       976562 ns           64
data |  6 | avx tbb |      634491 ns        0.000 ns           64
mask |  6 |         |    10034583 ns      9521484 ns           64
mask |  6 | avx     |      800964 ns      1708984 ns           64
mask |  6 |     tbb |     2159467 ns      2441406 ns           64
mask |  6 | avx tbb |      633652 ns       488281 ns           64

data | 12 |         |     3471711 ns      3173828 ns           64
data | 12 | avx     |      792436 ns       976562 ns           64
data | 12 |     tbb |      804313 ns       732422 ns           64
data | 12 | avx tbb |      656134 ns       976562 ns           64
mask | 12 |         |    10046589 ns     10009766 ns           64
mask | 12 | avx     |      788080 ns       488281 ns           64
mask | 12 |     tbb |     2330920 ns      2685547 ns           64
mask | 12 | avx tbb |      645483 ns      1220703 ns           64

data | 24 |         |     1866569 ns      2197266 ns           64
data | 24 | avx     |      791516 ns       244141 ns           64
data | 24 |     tbb |      698630 ns       488281 ns           64
data | 24 | avx tbb |      634752 ns       488281 ns           64
mask | 24 |         |    10042733 ns     10009766 ns           64
mask | 24 | avx     |      800858 ns       488281 ns           64
mask | 24 |     tbb |     2197580 ns      1953125 ns           64
mask | 24 | avx tbb |      636631 ns       244141 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26837409 ns     26367188 ns           32
data |  6 | avx     |     3147803 ns      3906250 ns           32
data |  6 |     tbb |     3030638 ns      3906250 ns           32
data |  6 | avx tbb |     2383859 ns      2441406 ns           32
mask |  6 |         |    39767231 ns     40527344 ns           32
mask |  6 | avx     |     3148341 ns      3906250 ns           32
mask |  6 |     tbb |     8243737 ns      6347656 ns           32
mask |  6 | avx tbb |     2366028 ns      1953125 ns           32

data | 12 |         |    13665622 ns     13671875 ns           32
data | 12 | avx     |     3197550 ns      3906250 ns           32
data | 12 |     tbb |     2802534 ns        0.000 ns           32
data | 12 | avx tbb |     2389506 ns      2441406 ns           32
mask | 12 |         |    39864787 ns     39062500 ns           32
mask | 12 | avx     |     3204713 ns      3906250 ns           32
mask | 12 |     tbb |     9214916 ns      9277344 ns           32
mask | 12 | avx tbb |     2412838 ns      2441406 ns           32

data | 24 |         |     7089834 ns      7812500 ns           32
data | 24 | avx     |     3156941 ns      5859375 ns           32
data | 24 |     tbb |     2492722 ns      2929688 ns           32
data | 24 | avx tbb |     2378756 ns      2441406 ns           32
mask | 24 |         |    39785316 ns     40039062 ns           32
mask | 24 | avx     |     3170838 ns      4394531 ns           32
mask | 24 |     tbb |     8367794 ns      6347656 ns           32
mask | 24 | avx tbb |     2383456 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106306500 ns    105468750 ns           16
data |  6 | avx     |    13165275 ns     11718750 ns           16
data |  6 |     tbb |    12271937 ns      9765625 ns           16
data |  6 | avx tbb |     9323819 ns      9765625 ns           16
mask |  6 |         |   159313238 ns    161132812 ns           16
mask |  6 | avx     |    13253763 ns     11718750 ns           16
mask |  6 |     tbb |    32648437 ns     25390625 ns           16
mask |  6 | avx tbb |     9318600 ns      8789062 ns           16

data | 12 |         |    54666581 ns     54687500 ns           16
data | 12 | avx     |    12612981 ns     12695312 ns           16
data | 12 |     tbb |    10858225 ns     15625000 ns           16
data | 12 | avx tbb |     9409106 ns     10742188 ns           16
mask | 12 |         |   159010019 ns    158203125 ns           16
mask | 12 | avx     |    12648125 ns     11718750 ns           16
mask | 12 |     tbb |    34565819 ns     22460938 ns           16
mask | 12 | avx tbb |     9445169 ns      6835938 ns           16

data | 24 |         |    28307062 ns     29296875 ns           16
data | 24 | avx     |    13533444 ns     16601562 ns           16
data | 24 |     tbb |     9585775 ns     10742188 ns           16
data | 24 | avx tbb |     9476913 ns      8789062 ns           16
mask | 24 |         |   158676350 ns    158203125 ns           16
mask | 24 | avx     |    12868856 ns     12695312 ns           16
mask | 24 |     tbb |    33175256 ns     24414062 ns           16
mask | 24 | avx tbb |     9585938 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212655450 ns    212890625 ns            8
data |  6 | avx     |    25898912 ns     25390625 ns            8
data |  6 |     tbb |    24459250 ns     21484375 ns            8
data |  6 | avx tbb |    18576262 ns     15625000 ns            8
mask |  6 |         |   318911200 ns    322265625 ns            8
mask |  6 | avx     |    25471362 ns     25390625 ns            8
mask |  6 |     tbb |    64500263 ns     44921875 ns            8
mask |  6 | avx tbb |    18634475 ns     19531250 ns            8

data | 12 |         |   109485475 ns    109375000 ns            8
data | 12 | avx     |    25120662 ns     21484375 ns            8
data | 12 |     tbb |    21506875 ns     15625000 ns            8
data | 12 | avx tbb |    18737300 ns     17578125 ns            8
mask | 12 |         |   318139700 ns    314453125 ns            8
mask | 12 | avx     |    25497725 ns     25390625 ns            8
mask | 12 |     tbb |    71699325 ns     42968750 ns            8
mask | 12 | avx tbb |    18742063 ns     21484375 ns            8

data | 24 |         |    56793625 ns     56640625 ns            8
data | 24 | avx     |    25233400 ns     27343750 ns            8
data | 24 |     tbb |    19604088 ns     21484375 ns            8
data | 24 | avx tbb |    19267537 ns     21484375 ns            8
mask | 24 |         |   317875575 ns    318359375 ns            8
mask | 24 | avx     |    25570225 ns     23437500 ns            8
mask | 24 |     tbb |    68649375 ns     46875000 ns            8
mask | 24 | avx tbb |    18563612 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425484950 ns    423828125 ns            8
data |  6 | avx     |    51679262 ns     52734375 ns            8
data |  6 |     tbb |    45385750 ns     33203125 ns            8
data |  6 | avx tbb |    38363500 ns     35156250 ns            8
mask |  6 |         |   635420525 ns    636718750 ns            8
mask |  6 | avx     |    51138850 ns     50781250 ns            8
mask |  6 |     tbb |   129260812 ns     91796875 ns            8
mask |  6 | avx tbb |    38474725 ns     35156250 ns            8

data | 12 |         |   217064700 ns    210937500 ns            8
data | 12 | avx     |    50876475 ns     48828125 ns            8
data | 12 |     tbb |    42851375 ns     31250000 ns            8
data | 12 | avx tbb |    38969875 ns     35156250 ns            8
mask | 12 |         |   636020025 ns    638671875 ns            8
mask | 12 | avx     |    51287575 ns     52734375 ns            8
mask | 12 |     tbb |   147189625 ns     89843750 ns            8
mask | 12 | avx tbb |    37324537 ns     37109375 ns            8

data | 24 |         |   114663725 ns    117187500 ns            8
data | 24 | avx     |    50924813 ns     50781250 ns            8
data | 24 |     tbb |    38145850 ns     33203125 ns            8
data | 24 | avx tbb |    36933000 ns     37109375 ns            8
mask | 24 |         |   636017913 ns    634765625 ns            8
mask | 24 | avx     |    50805225 ns     50781250 ns            8
mask | 24 |     tbb |   133621825 ns     95703125 ns            8
mask | 24 | avx tbb |    38174613 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   851640413 ns    853515625 ns            8
data |  6 | avx     |   101243238 ns     99609375 ns            8
data |  6 |     tbb |    93984263 ns     64453125 ns            8
data |  6 | avx tbb |    74022963 ns     70312500 ns            8
mask |  6 |         |  1271582650 ns   1269531250 ns            8
mask |  6 | avx     |   102285925 ns    105468750 ns            8
mask |  6 |     tbb |   258323263 ns    189453125 ns            8
mask |  6 | avx tbb |    73873437 ns     70312500 ns            8

data | 12 |         |   434249875 ns    435546875 ns            8
data | 12 | avx     |   102050763 ns    101562500 ns            8
data | 12 |     tbb |    86196950 ns     48828125 ns            8
data | 12 | avx tbb |    74875688 ns     70312500 ns            8
mask | 12 |         |  1271417612 ns   1273437500 ns            8
mask | 12 | avx     |   102855988 ns    101562500 ns            8
mask | 12 |     tbb |   277276625 ns    175781250 ns            8
mask | 12 | avx tbb |    74962613 ns     70312500 ns            8

data | 24 |         |   226621862 ns    226562500 ns            8
data | 24 | avx     |   101532525 ns    101562500 ns            8
data | 24 |     tbb |    78253800 ns     58593750 ns            8
data | 24 | avx tbb |    73863538 ns     68359375 ns            8
mask | 24 |         |  1272579338 ns   1271484375 ns            8
mask | 24 | avx     |   101697863 ns    103515625 ns            8
mask | 24 |     tbb |   257717562 ns    199218750 ns            8
mask | 24 | avx tbb |    74045813 ns     72265625 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75831 ns        68665 ns         2048
data |  6 |     tbb |       18084 ns        22888 ns         2048
mask |  6 |         |      114219 ns       114441 ns         2048
mask |  6 |     tbb |       32837 ns        38147 ns         2048

data | 12 |         |       39873 ns        45776 ns         2048
data | 12 |     tbb |       13438 ns        15259 ns         2048
mask | 12 |         |      113852 ns       106812 ns         2048
mask | 12 |     tbb |       34094 ns        30518 ns         2048

data | 24 |         |       21430 ns        30518 ns         2048
data | 24 |     tbb |       10733 ns        15259 ns         2048
mask | 24 |         |      115309 ns       114441 ns         2048
mask | 24 |     tbb |       32304 ns        15259 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18784 ns        45776 ns         1024
data |  6 | avx tbb |       14547 ns        15259 ns         1024
mask |  6 | avx     |       17907 ns        30518 ns         1024
mask |  6 | avx tbb |       14379 ns        30518 ns         1024

data | 12 | avx     |       19026 ns        15259 ns         1024
data | 12 | avx tbb |       16396 ns        15259 ns         1024
mask | 12 | avx     |       18010 ns        0.000 ns         1024
mask | 12 | avx tbb |       14378 ns        30518 ns         1024

data | 24 | avx     |       18914 ns        30518 ns         1024
data | 24 | avx tbb |       14087 ns        15259 ns         1024
mask | 24 | avx     |       17967 ns        45776 ns         1024
mask | 24 | avx tbb |       13417 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      385752 ns       396729 ns         1024
data |  6 | avx     |       28994 ns        30518 ns         1024
data |  6 |     tbb |       51380 ns        30518 ns         1024
data |  6 | avx tbb |       19833 ns        30518 ns         1024
mask |  6 |         |      567702 ns       595093 ns         1024
mask |  6 | avx     |       27053 ns        0.000 ns         1024
mask |  6 |     tbb |      139193 ns       137329 ns         1024
mask |  6 | avx tbb |       18556 ns        15259 ns         1024

data | 12 |         |      193761 ns       167847 ns         1024
data | 12 | avx     |       28954 ns        15259 ns         1024
data | 12 |     tbb |       35122 ns        61035 ns         1024
data | 12 | avx tbb |       21503 ns        30518 ns         1024
mask | 12 |         |      568458 ns       579834 ns         1024
mask | 12 | avx     |       27315 ns        15259 ns         1024
mask | 12 |     tbb |      181112 ns       213623 ns         1024
mask | 12 | avx tbb |       20687 ns        30518 ns         1024

data | 24 |         |       99200 ns       106812 ns         1024
data | 24 | avx     |       29715 ns        30518 ns         1024
data | 24 |     tbb |       26400 ns        0.000 ns         1024
data | 24 | avx tbb |       21455 ns        30518 ns         1024
mask | 24 |         |      567711 ns       579834 ns         1024
mask | 24 | avx     |       27571 ns        0.000 ns         1024
mask | 24 |     tbb |      148850 ns       137329 ns         1024
mask | 24 | avx tbb |       19452 ns        0.000 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1517508 ns      1525879 ns          512
data |  6 | avx     |      192571 ns       213623 ns          512
data |  6 |     tbb |      251741 ns       244141 ns          512
data |  6 | avx tbb |      160286 ns       152588 ns          512
mask |  6 |         |     2266464 ns      2288818 ns          512
mask |  6 | avx     |      196858 ns       183105 ns          512
mask |  6 |     tbb |      524571 ns       518799 ns          512
mask |  6 | avx tbb |      160440 ns       244141 ns          512

data | 12 |         |      778422 ns       793457 ns          512
data | 12 | avx     |      190370 ns       244141 ns          512
data | 12 |     tbb |      223858 ns       152588 ns          512
data | 12 | avx tbb |      161668 ns        61035 ns          512
mask | 12 |         |     2276403 ns      2349854 ns          512
mask | 12 | avx     |      196594 ns       274658 ns          512
mask | 12 |     tbb |      576088 ns       427246 ns          512
mask | 12 | avx tbb |      161894 ns       183105 ns          512

data | 24 |         |      417064 ns       396729 ns          512
data | 24 | avx     |      192385 ns       244141 ns          512
data | 24 |     tbb |      199610 ns       122070 ns          512
data | 24 | avx tbb |      159871 ns        91553 ns          512
mask | 24 |         |     2270910 ns      2258301 ns          512
mask | 24 | avx     |      198133 ns       213623 ns          512
mask | 24 |     tbb |      524672 ns       396729 ns          512
mask | 24 | avx tbb |      161302 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6081900 ns      7080078 ns           64
data |  6 | avx     |      772148 ns       488281 ns           64
data |  6 |     tbb |      846108 ns       732422 ns           64
data |  6 | avx tbb |      634038 ns       488281 ns           64
mask |  6 |         |     9154417 ns      9033203 ns           64
mask |  6 | avx     |      793348 ns       732422 ns           64
mask |  6 |     tbb |     1962134 ns      1953125 ns           64
mask |  6 | avx tbb |      630344 ns       488281 ns           64

data | 12 |         |     3170077 ns      3417969 ns           64
data | 12 | avx     |      813695 ns      1220703 ns           64
data | 12 |     tbb |      773339 ns       488281 ns           64
data | 12 | avx tbb |      647833 ns       244141 ns           64
mask | 12 |         |     9118558 ns      9277344 ns           64
mask | 12 | avx     |      817403 ns       244141 ns           64
mask | 12 |     tbb |     2135441 ns      1708984 ns           64
mask | 12 | avx tbb |      644131 ns       244141 ns           64

data | 24 |         |     1685333 ns      1220703 ns           64
data | 24 | avx     |      771223 ns       976562 ns           64
data | 24 |     tbb |      701667 ns       488281 ns           64
data | 24 | avx tbb |      640030 ns       244141 ns           64
mask | 24 |         |     9161645 ns      9277344 ns           64
mask | 24 | avx     |      798930 ns       976562 ns           64
mask | 24 |     tbb |     1992063 ns      1220703 ns           64
mask | 24 | avx tbb |      633080 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24340344 ns     25390625 ns           32
data |  6 | avx     |     3099066 ns      7324219 ns           32
data |  6 |     tbb |     2879816 ns        0.000 ns           32
data |  6 | avx tbb |     2400672 ns      2441406 ns           32
mask |  6 |         |    36090353 ns     37109375 ns           32
mask |  6 | avx     |     3169800 ns      2929688 ns           32
mask |  6 |     tbb |     7469653 ns      7324219 ns           32
mask |  6 | avx tbb |     2382237 ns      2441406 ns           32

data | 12 |         |    12265856 ns     12695312 ns           32
data | 12 | avx     |     3111319 ns       488281 ns           32
data | 12 |     tbb |     2857591 ns      6835938 ns           32
data | 12 | avx tbb |     2397844 ns      1953125 ns           32
mask | 12 |         |    36131953 ns     36132812 ns           32
mask | 12 | avx     |     3192656 ns      4394531 ns           32
mask | 12 |     tbb |     8157934 ns      7324219 ns           32
mask | 12 | avx tbb |     2408428 ns      2929688 ns           32

data | 24 |         |     6820159 ns      7324219 ns           32
data | 24 | avx     |     3133519 ns      4394531 ns           32
data | 24 |     tbb |     2512447 ns      2929688 ns           32
data | 24 | avx tbb |     2460566 ns      2441406 ns           32
mask | 24 |         |    36052750 ns     36621094 ns           32
mask | 24 | avx     |     3163097 ns      3417969 ns           32
mask | 24 |     tbb |     7585303 ns      7812500 ns           32
mask | 24 | avx tbb |     2389363 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96661362 ns     95703125 ns           16
data |  6 | avx     |    12321862 ns     11718750 ns           16
data |  6 |     tbb |    10884700 ns     11718750 ns           16
data |  6 | avx tbb |     9304819 ns      9765625 ns           16
mask |  6 |         |   144648538 ns    145507812 ns           16
mask |  6 | avx     |    12705744 ns     13671875 ns           16
mask |  6 |     tbb |    29364937 ns     26367188 ns           16
mask |  6 | avx tbb |     9333550 ns     10742188 ns           16

data | 12 |         |    49234462 ns     49804688 ns           16
data | 12 | avx     |    12448919 ns     11718750 ns           16
data | 12 |     tbb |    10629662 ns     11718750 ns           16
data | 12 | avx tbb |     9433025 ns      7812500 ns           16
mask | 12 |         |   144529731 ns    143554688 ns           16
mask | 12 | avx     |    13053638 ns     12695312 ns           16
mask | 12 |     tbb |    32888012 ns     26367188 ns           16
mask | 12 | avx tbb |     9411288 ns      8789062 ns           16

data | 24 |         |    26219163 ns     29296875 ns           16
data | 24 | avx     |    12358456 ns     12695312 ns           16
data | 24 |     tbb |     9628619 ns      8789062 ns           16
data | 24 | avx tbb |     9325081 ns      9765625 ns           16
mask | 24 |         |   144625450 ns    145507812 ns           16
mask | 24 | avx     |    12704000 ns     12695312 ns           16
mask | 24 |     tbb |    29976381 ns     21484375 ns           16
mask | 24 | avx tbb |     9359088 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193586888 ns    199218750 ns            8
data |  6 | avx     |    25902387 ns     25390625 ns            8
data |  6 |     tbb |    23453875 ns     17578125 ns            8
data |  6 | avx tbb |    18531175 ns     19531250 ns            8
mask |  6 |         |   288674788 ns    287109375 ns            8
mask |  6 | avx     |    26744588 ns     27343750 ns            8
mask |  6 |     tbb |    58808238 ns     41015625 ns            8
mask |  6 | avx tbb |    18570388 ns     19531250 ns            8

data | 12 |         |    98330488 ns     97656250 ns            8
data | 12 | avx     |    24778087 ns     25390625 ns            8
data | 12 |     tbb |    22102600 ns     15625000 ns            8
data | 12 | avx tbb |    18747863 ns     21484375 ns            8
mask | 12 |         |   288835150 ns    283203125 ns            8
mask | 12 | avx     |    25415300 ns     25390625 ns            8
mask | 12 |     tbb |    66015900 ns     37109375 ns            8
mask | 12 | avx tbb |    18780513 ns     19531250 ns            8

data | 24 |         |    53306900 ns     56640625 ns            8
data | 24 | avx     |    25107900 ns     23437500 ns            8
data | 24 |     tbb |    19478962 ns     19531250 ns            8
data | 24 | avx tbb |    18698125 ns     19531250 ns            8
mask | 24 |         |   294627762 ns    289062500 ns            8
mask | 24 | avx     |    26656275 ns     25390625 ns            8
mask | 24 |     tbb |    59629488 ns     44921875 ns            8
mask | 24 | avx tbb |    18562662 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386151875 ns    386718750 ns            8
data |  6 | avx     |    49518700 ns     50781250 ns            8
data |  6 |     tbb |    48336000 ns     31250000 ns            8
data |  6 | avx tbb |    36871638 ns     37109375 ns            8
mask |  6 |         |   579631262 ns    580078125 ns            8
mask |  6 | avx     |    51021850 ns     52734375 ns            8
mask |  6 |     tbb |   118349150 ns     83984375 ns            8
mask |  6 | avx tbb |    36992375 ns     37109375 ns            8

data | 12 |         |   196380675 ns    195312500 ns            8
data | 12 | avx     |    49604525 ns     48828125 ns            8
data | 12 |     tbb |    42014613 ns     31250000 ns            8
data | 12 | avx tbb |    37291375 ns     37109375 ns            8
mask | 12 |         |   576235487 ns    578125000 ns            8
mask | 12 | avx     |    52016488 ns     52734375 ns            8
mask | 12 |     tbb |   133691725 ns     78125000 ns            8
mask | 12 | avx tbb |    37377588 ns     31250000 ns            8

data | 24 |         |   104831787 ns    101562500 ns            8
data | 24 | avx     |    49596325 ns     52734375 ns            8
data | 24 |     tbb |    38055900 ns     37109375 ns            8
data | 24 | avx tbb |    37323825 ns     37109375 ns            8
mask | 24 |         |   577435037 ns    578125000 ns            8
mask | 24 | avx     |    50894563 ns     50781250 ns            8
mask | 24 |     tbb |   120912113 ns     82031250 ns            8
mask | 24 | avx tbb |    36981313 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771639275 ns    773437500 ns            8
data |  6 | avx     |    99342637 ns     97656250 ns            8
data |  6 |     tbb |    87719187 ns     56640625 ns            8
data |  6 | avx tbb |    73892150 ns     74218750 ns            8
mask |  6 |         |  1154985663 ns   1154296875 ns            8
mask |  6 | avx     |   101523587 ns    101562500 ns            8
mask |  6 |     tbb |   235185538 ns    158203125 ns            8
mask |  6 | avx tbb |    73803138 ns     72265625 ns            8

data | 12 |         |   392757987 ns    390625000 ns            8
data | 12 | avx     |    99829963 ns     99609375 ns            8
data | 12 |     tbb |    85399387 ns     58593750 ns            8
data | 12 | avx tbb |    74971525 ns     74218750 ns            8
mask | 12 |         |  1155628337 ns   1156250000 ns            8
mask | 12 | avx     |   101869662 ns    101562500 ns            8
mask | 12 |     tbb |   245455237 ns    156250000 ns            8
mask | 12 | avx tbb |    74479037 ns     70312500 ns            8

data | 24 |         |   209028463 ns    208984375 ns            8
data | 24 | avx     |    99063487 ns     99609375 ns            8
data | 24 |     tbb |    76519337 ns     64453125 ns            8
data | 24 | avx tbb |    74746262 ns     66406250 ns            8
mask | 24 |         |  1154760325 ns   1156250000 ns            8
mask | 24 | avx     |   101791650 ns    101562500 ns            8
mask | 24 |     tbb |   239286175 ns    175781250 ns            8
mask | 24 | avx tbb |    74111900 ns     74218750 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76223 ns        83923 ns         2048
data |  6 |     tbb |       17931 ns        22888 ns         2048
mask |  6 |         |      136774 ns       137329 ns         2048
mask |  6 |     tbb |       36059 ns        38147 ns         2048

data | 12 |         |       39812 ns        30518 ns         2048
data | 12 |     tbb |       13934 ns        0.000 ns         2048
mask | 12 |         |      139797 ns       144958 ns         2048
mask | 12 |     tbb |       38223 ns        45776 ns         2048

data | 24 |         |       20609 ns        22888 ns         2048
data | 24 |     tbb |       10813 ns        15259 ns         2048
mask | 24 |         |      139052 ns       144958 ns         2048
mask | 24 |     tbb |       36250 ns        30518 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18635 ns        30518 ns         1024
data |  6 | avx tbb |       14860 ns        15259 ns         1024
mask |  6 | avx     |       17579 ns        30518 ns         1024
mask |  6 | avx tbb |       13271 ns        0.000 ns         1024

data | 12 | avx     |       18927 ns        30518 ns         1024
data | 12 | avx tbb |       14261 ns        15259 ns         1024
mask | 12 | avx     |       17688 ns        15259 ns         1024
mask | 12 | avx tbb |       13906 ns        0.000 ns         1024

data | 24 | avx     |       18923 ns        15259 ns         1024
data | 24 | avx tbb |       14240 ns        0.000 ns         1024
mask | 24 | avx     |       17799 ns        30518 ns         1024
mask | 24 | avx tbb |       13942 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      387218 ns       411987 ns         1024
data |  6 | avx     |       29220 ns        61035 ns         1024
data |  6 |     tbb |       51167 ns        76294 ns         1024
data |  6 | avx tbb |       19076 ns        0.000 ns         1024
mask |  6 |         |      690810 ns       671387 ns         1024
mask |  6 | avx     |       27463 ns        45776 ns         1024
mask |  6 |     tbb |      164857 ns       137329 ns         1024
mask |  6 | avx tbb |       18820 ns        0.000 ns         1024

data | 12 |         |      194543 ns       152588 ns         1024
data | 12 | avx     |       29531 ns        15259 ns         1024
data | 12 |     tbb |       35602 ns        30518 ns         1024
data | 12 | avx tbb |       21084 ns        15259 ns         1024
mask | 12 |         |      696417 ns       732422 ns         1024
mask | 12 | avx     |       27144 ns        15259 ns         1024
mask | 12 |     tbb |      203120 ns       167847 ns         1024
mask | 12 | avx tbb |       20788 ns        0.000 ns         1024

data | 24 |         |       99977 ns        76294 ns         1024
data | 24 | avx     |       29013 ns        45776 ns         1024
data | 24 |     tbb |       26799 ns        15259 ns         1024
data | 24 | avx tbb |       19938 ns        15259 ns         1024
mask | 24 |         |      696975 ns       656128 ns         1024
mask | 24 | avx     |       27176 ns        45776 ns         1024
mask | 24 |     tbb |      173664 ns       228882 ns         1024
mask | 24 | avx tbb |       19257 ns        0.000 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1518840 ns      1586914 ns          512
data |  6 | avx     |      190886 ns       213623 ns          512
data |  6 |     tbb |      248444 ns       305176 ns          512
data |  6 | avx tbb |      159457 ns        61035 ns          512
mask |  6 |         |     2715585 ns      2624512 ns          512
mask |  6 | avx     |      199714 ns       152588 ns          512
mask |  6 |     tbb |      608922 ns       640869 ns          512
mask |  6 | avx tbb |      159639 ns       152588 ns          512

data | 12 |         |      778181 ns       762939 ns          512
data | 12 | avx     |      191496 ns       152588 ns          512
data | 12 |     tbb |      215156 ns        61035 ns          512
data | 12 | avx tbb |      163163 ns        91553 ns          512
mask | 12 |         |     2714329 ns      2716064 ns          512
mask | 12 | avx     |      196053 ns       183105 ns          512
mask | 12 |     tbb |      662002 ns       732422 ns          512
mask | 12 | avx tbb |      161625 ns       183105 ns          512

data | 24 |         |      415452 ns       427246 ns          512
data | 24 | avx     |      192309 ns       213623 ns          512
data | 24 |     tbb |      199705 ns       213623 ns          512
data | 24 | avx tbb |      161470 ns       213623 ns          512
mask | 24 |         |     2719124 ns      2624512 ns          512
mask | 24 | avx     |      197877 ns        91553 ns          512
mask | 24 |     tbb |      619593 ns       671387 ns          512
mask | 24 | avx tbb |      160437 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6123944 ns      5859375 ns           64
data |  6 | avx     |      779484 ns      1220703 ns           64
data |  6 |     tbb |      830388 ns       732422 ns           64
data |  6 | avx tbb |      633692 ns       732422 ns           64
mask |  6 |         |    10952778 ns     10742188 ns           64
mask |  6 | avx     |      801595 ns       488281 ns           64
mask |  6 |     tbb |     2325537 ns      2197266 ns           64
mask |  6 | avx tbb |      633089 ns       488281 ns           64

data | 12 |         |     3169345 ns      2929688 ns           64
data | 12 | avx     |      781352 ns       488281 ns           64
data | 12 |     tbb |      771542 ns       976562 ns           64
data | 12 | avx tbb |      646102 ns       976562 ns           64
mask | 12 |         |    10900213 ns     10253906 ns           64
mask | 12 | avx     |      797356 ns      1220703 ns           64
mask | 12 |     tbb |     2554431 ns      2197266 ns           64
mask | 12 | avx tbb |      638331 ns       244141 ns           64

data | 24 |         |     1716416 ns      1464844 ns           64
data | 24 | avx     |      777009 ns       488281 ns           64
data | 24 |     tbb |      688230 ns      1464844 ns           64
data | 24 | avx tbb |      637081 ns       732422 ns           64
mask | 24 |         |    10887973 ns     10498047 ns           64
mask | 24 | avx     |      804411 ns       976562 ns           64
mask | 24 |     tbb |     2362914 ns      1953125 ns           64
mask | 24 | avx tbb |      632283 ns      1220703 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24313972 ns     24902344 ns           32
data |  6 | avx     |     3063622 ns       488281 ns           32
data |  6 |     tbb |     2887375 ns      3906250 ns           32
data |  6 | avx tbb |     2373084 ns      2929688 ns           32
mask |  6 |         |    43378803 ns     42968750 ns           32
mask |  6 | avx     |     3190734 ns      3906250 ns           32
mask |  6 |     tbb |     8967159 ns      7324219 ns           32
mask |  6 | avx tbb |     2374053 ns      1953125 ns           32

data | 12 |         |    12319362 ns     12695312 ns           32
data | 12 | avx     |     3058006 ns      4882812 ns           32
data | 12 |     tbb |     2841872 ns       488281 ns           32
data | 12 | avx tbb |     2412459 ns      1953125 ns           32
mask | 12 |         |    43300541 ns     43945312 ns           32
mask | 12 | avx     |     3190294 ns      2441406 ns           32
mask | 12 |     tbb |     9842309 ns      8789062 ns           32
mask | 12 | avx tbb |     2393587 ns      2441406 ns           32

data | 24 |         |     6588941 ns      6835938 ns           32
data | 24 | avx     |     3140541 ns      3417969 ns           32
data | 24 |     tbb |     2484463 ns      2929688 ns           32
data | 24 | avx tbb |     2393475 ns      2929688 ns           32
mask | 24 |         |    43380953 ns     43457031 ns           32
mask | 24 | avx     |     3201900 ns      3906250 ns           32
mask | 24 |     tbb |     9074628 ns      7324219 ns           32
mask | 24 | avx tbb |     2379684 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    97158619 ns     98632812 ns           16
data |  6 | avx     |    12343350 ns     13671875 ns           16
data |  6 |     tbb |    10898206 ns      5859375 ns           16
data |  6 | avx tbb |     9331088 ns     12695312 ns           16
mask |  6 |         |   172907675 ns    172851562 ns           16
mask |  6 | avx     |    12954125 ns     13671875 ns           16
mask |  6 |     tbb |    34739537 ns     25390625 ns           16
mask |  6 | avx tbb |     9348431 ns      6835938 ns           16

data | 12 |         |    49615594 ns     48828125 ns           16
data | 12 | avx     |    12317812 ns     11718750 ns           16
data | 12 |     tbb |    10616231 ns     10742188 ns           16
data | 12 | avx tbb |     9558606 ns     11718750 ns           16
mask | 12 |         |   173252887 ns    170898438 ns           16
mask | 12 | avx     |    12744544 ns     13671875 ns           16
mask | 12 |     tbb |    36782906 ns     25390625 ns           16
mask | 12 | avx tbb |     9441687 ns      7812500 ns           16

data | 24 |         |    26112044 ns     31250000 ns           16
data | 24 | avx     |    12311506 ns     12695312 ns           16
data | 24 |     tbb |     9618694 ns      8789062 ns           16
data | 24 | avx tbb |     9336381 ns     10742188 ns           16
mask | 24 |         |   173273875 ns    172851562 ns           16
mask | 24 | avx     |    13257019 ns     14648438 ns           16
mask | 24 |     tbb |    35086044 ns     24414062 ns           16
mask | 24 | avx tbb |     9300600 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193334950 ns    191406250 ns            8
data |  6 | avx     |    26136750 ns     29296875 ns            8
data |  6 |     tbb |    21389513 ns     15625000 ns            8
data |  6 | avx tbb |    18616512 ns     17578125 ns            8
mask |  6 |         |   345509062 ns    345703125 ns            8
mask |  6 | avx     |    25557925 ns     25390625 ns            8
mask |  6 |     tbb |    68904800 ns     50781250 ns            8
mask |  6 | avx tbb |    18593588 ns     17578125 ns            8

data | 12 |         |    98237125 ns     97656250 ns            8
data | 12 | avx     |    24959225 ns     23437500 ns            8
data | 12 |     tbb |    20891863 ns     17578125 ns            8
data | 12 | avx tbb |    18755087 ns     17578125 ns            8
mask | 12 |         |   355547562 ns    357421875 ns            8
mask | 12 | avx     |    26668287 ns     29296875 ns            8
mask | 12 |     tbb |    75343362 ns     46875000 ns            8
mask | 12 | avx tbb |    18802938 ns     17578125 ns            8

data | 24 |         |    52360800 ns     54687500 ns            8
data | 24 | avx     |    24847400 ns     25390625 ns            8
data | 24 |     tbb |    19107975 ns     15625000 ns            8
data | 24 | avx tbb |    18643600 ns     19531250 ns            8
mask | 24 |         |   347024288 ns    345703125 ns            8
mask | 24 | avx     |    25493563 ns     25390625 ns            8
mask | 24 |     tbb |    72469525 ns     46875000 ns            8
mask | 24 | avx tbb |    18531450 ns     15625000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386729538 ns    384765625 ns            8
data |  6 | avx     |    49937025 ns     48828125 ns            8
data |  6 |     tbb |    44092150 ns     31250000 ns            8
data |  6 | avx tbb |    37066275 ns     35156250 ns            8
mask |  6 |         |   691324575 ns    691406250 ns            8
mask |  6 | avx     |    52032775 ns     50781250 ns            8
mask |  6 |     tbb |   139506800 ns     93750000 ns            8
mask |  6 | avx tbb |    36973963 ns     37109375 ns            8

data | 12 |         |   197256788 ns    197265625 ns            8
data | 12 | avx     |    50002137 ns     52734375 ns            8
data | 12 |     tbb |    42106363 ns     33203125 ns            8
data | 12 | avx tbb |    37329625 ns     37109375 ns            8
mask | 12 |         |   691549137 ns    689453125 ns            8
mask | 12 | avx     |    50700300 ns     48828125 ns            8
mask | 12 |     tbb |   151073538 ns     99609375 ns            8
mask | 12 | avx tbb |    37415000 ns     35156250 ns            8

data | 24 |         |   105046038 ns    103515625 ns            8
data | 24 | avx     |    49361913 ns     46875000 ns            8
data | 24 |     tbb |    39761138 ns     29296875 ns            8
data | 24 | avx tbb |    37071788 ns     39062500 ns            8
mask | 24 |         |   694225912 ns    693359375 ns            8
mask | 24 | avx     |    50907562 ns     52734375 ns            8
mask | 24 |     tbb |   140726725 ns    101562500 ns            8
mask | 24 | avx tbb |    37433475 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771586900 ns    771484375 ns            8
data |  6 | avx     |   100020712 ns    101562500 ns            8
data |  6 |     tbb |    88071300 ns     60546875 ns            8
data |  6 | avx tbb |    74118013 ns     74218750 ns            8
mask |  6 |         |  1387633987 ns   1382812500 ns            8
mask |  6 | avx     |   102738187 ns    101562500 ns            8
mask |  6 |     tbb |   273662587 ns    210937500 ns            8
mask |  6 | avx tbb |    73767463 ns     72265625 ns            8

data | 12 |         |   393614512 ns    392578125 ns            8
data | 12 | avx     |    99971613 ns     99609375 ns            8
data | 12 |     tbb |    85156500 ns     62500000 ns            8
data | 12 | avx tbb |    74961700 ns     68359375 ns            8
mask | 12 |         |  1384173725 ns   1380859375 ns            8
mask | 12 | avx     |   102752113 ns    103515625 ns            8
mask | 12 |     tbb |   309802813 ns    197265625 ns            8
mask | 12 | avx tbb |    74767275 ns     76171875 ns            8

data | 24 |         |   209539988 ns    208984375 ns            8
data | 24 | avx     |    99048737 ns     99609375 ns            8
data | 24 |     tbb |    76713600 ns     62500000 ns            8
data | 24 | avx tbb |    73988375 ns     70312500 ns            8
mask | 24 |         |  1384396900 ns   1380859375 ns            8
mask | 24 | avx     |   102969363 ns    109375000 ns            8
mask | 24 |     tbb |   286781437 ns    193359375 ns            8
mask | 24 | avx tbb |    74155312 ns     74218750 ns            8
```

</details>

