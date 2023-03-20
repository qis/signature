# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83209 ns        83923 ns         2048
data |  6 |     tbb |       18842 ns         7629 ns         2048
mask |  6 |         |      126019 ns       114441 ns         2048
mask |  6 |     tbb |       33549 ns        45776 ns         2048

data | 12 |         |       44176 ns        38147 ns         2048
data | 12 |     tbb |       13885 ns        15259 ns         2048
mask | 12 |         |      126689 ns       129700 ns         2048
mask | 12 |     tbb |       33238 ns        38147 ns         2048

data | 24 |         |       23441 ns        30518 ns         2048
data | 24 |     tbb |       11168 ns         7629 ns         2048
mask | 24 |         |      127567 ns       114441 ns         2048
mask | 24 |     tbb |       33441 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17168 ns        15259 ns         1024
data |  6 | avx tbb |       13423 ns        61035 ns         1024
mask |  6 | avx     |       18966 ns        15259 ns         1024
mask |  6 | avx tbb |       13089 ns        15259 ns         1024

data | 12 | avx     |       17368 ns        0.000 ns         1024
data | 12 | avx tbb |       14780 ns        15259 ns         1024
mask | 12 | avx     |       19056 ns        30518 ns         1024
mask | 12 | avx tbb |       13564 ns        0.000 ns         1024

data | 24 | avx     |       17250 ns        15259 ns         1024
data | 24 | avx tbb |       13497 ns        0.000 ns         1024
mask | 24 | avx     |       18995 ns        0.000 ns         1024
mask | 24 | avx tbb |       13206 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      423987 ns       427246 ns         1024
data |  6 | avx     |       26152 ns        30518 ns         1024
data |  6 |     tbb |       54077 ns        61035 ns         1024
data |  6 | avx tbb |       18201 ns        15259 ns         1024
mask |  6 |         |      623061 ns       610352 ns         1024
mask |  6 | avx     |       28884 ns        45776 ns         1024
mask |  6 |     tbb |      148885 ns       167847 ns         1024
mask |  6 | avx tbb |       17915 ns        30518 ns         1024

data | 12 |         |      213066 ns       213623 ns         1024
data | 12 | avx     |       26156 ns        30518 ns         1024
data | 12 |     tbb |       32029 ns        45776 ns         1024
data | 12 | avx tbb |       19659 ns        30518 ns         1024
mask | 12 |         |      625730 ns       595093 ns         1024
mask | 12 | avx     |       28895 ns        45776 ns         1024
mask | 12 |     tbb |      141139 ns       167847 ns         1024
mask | 12 | avx tbb |       17995 ns        45776 ns         1024

data | 24 |         |      110853 ns       122070 ns         1024
data | 24 | avx     |       26237 ns        30518 ns         1024
data | 24 |     tbb |       23658 ns        30518 ns         1024
data | 24 | avx tbb |       19813 ns        15259 ns         1024
mask | 24 |         |      632282 ns       610352 ns         1024
mask | 24 | avx     |       29235 ns        30518 ns         1024
mask | 24 |     tbb |      143708 ns       137329 ns         1024
mask | 24 | avx tbb |       18097 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1685222 ns      1678467 ns          512
data |  6 | avx     |      196540 ns       183105 ns          512
data |  6 |     tbb |      251035 ns       244141 ns          512
data |  6 | avx tbb |      160518 ns       213623 ns          512
mask |  6 |         |     2500066 ns      2532959 ns          512
mask |  6 | avx     |      197906 ns       274658 ns          512
mask |  6 |     tbb |      560175 ns       518799 ns          512
mask |  6 | avx tbb |      160362 ns       213623 ns          512

data | 12 |         |      856045 ns       823975 ns          512
data | 12 | avx     |      197280 ns       183105 ns          512
data | 12 |     tbb |      213679 ns       152588 ns          512
data | 12 | avx tbb |      160519 ns       244141 ns          512
mask | 12 |         |     2501030 ns      2532959 ns          512
mask | 12 | avx     |      195655 ns       183105 ns          512
mask | 12 |     tbb |      558567 ns       488281 ns          512
mask | 12 | avx tbb |      158680 ns       244141 ns          512

data | 24 |         |      450034 ns       549316 ns          512
data | 24 | avx     |      194390 ns       122070 ns          512
data | 24 |     tbb |      196615 ns       274658 ns          512
data | 24 | avx tbb |      160041 ns       183105 ns          512
mask | 24 |         |     2496894 ns      2502441 ns          512
mask | 24 | avx     |      196184 ns       152588 ns          512
mask | 24 |     tbb |      557665 ns       549316 ns          512
mask | 24 | avx tbb |      159012 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6711680 ns      6835938 ns           64
data |  6 | avx     |      796127 ns      1220703 ns           64
data |  6 |     tbb |      847728 ns       488281 ns           64
data |  6 | avx tbb |      634291 ns       732422 ns           64
mask |  6 |         |    10044934 ns     10009766 ns           64
mask |  6 | avx     |      806778 ns      1220703 ns           64
mask |  6 |     tbb |     2143389 ns      1953125 ns           64
mask |  6 | avx tbb |      633183 ns       732422 ns           64

data | 12 |         |     3441397 ns      3173828 ns           64
data | 12 | avx     |      798044 ns       732422 ns           64
data | 12 |     tbb |      731814 ns       732422 ns           64
data | 12 | avx tbb |      635048 ns       732422 ns           64
mask | 12 |         |    10043178 ns      9765625 ns           64
mask | 12 | avx     |      790322 ns       488281 ns           64
mask | 12 |     tbb |     2140845 ns      2441406 ns           64
mask | 12 | avx tbb |      633098 ns       488281 ns           64

data | 24 |         |     1858259 ns      1464844 ns           64
data | 24 | avx     |      791020 ns       732422 ns           64
data | 24 |     tbb |      682089 ns       732422 ns           64
data | 24 | avx tbb |      635258 ns       732422 ns           64
mask | 24 |         |    10020891 ns     10498047 ns           64
mask | 24 | avx     |      807384 ns      1708984 ns           64
mask | 24 |     tbb |     2144439 ns      1953125 ns           64
mask | 24 | avx tbb |      631022 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26768322 ns     30273438 ns           32
data |  6 | avx     |     3168325 ns      3906250 ns           32
data |  6 |     tbb |     2978506 ns      5371094 ns           32
data |  6 | avx tbb |     2375503 ns      2929688 ns           32
mask |  6 |         |    39761481 ns     40039062 ns           32
mask |  6 | avx     |     3192831 ns      3906250 ns           32
mask |  6 |     tbb |     8174641 ns      8789062 ns           32
mask |  6 | avx tbb |     2373759 ns      2441406 ns           32

data | 12 |         |    13658509 ns     13671875 ns           32
data | 12 | avx     |     3341087 ns      2441406 ns           32
data | 12 |     tbb |     2476887 ns      2441406 ns           32
data | 12 | avx tbb |     2395253 ns       976562 ns           32
mask | 12 |         |    39670619 ns     40527344 ns           32
mask | 12 | avx     |     3212841 ns      3417969 ns           32
mask | 12 |     tbb |     8167991 ns      7812500 ns           32
mask | 12 | avx tbb |     2396987 ns      2929688 ns           32

data | 24 |         |     7091353 ns      7324219 ns           32
data | 24 | avx     |     3111331 ns       976562 ns           32
data | 24 |     tbb |     2522962 ns      2441406 ns           32
data | 24 | avx tbb |     2374109 ns      2929688 ns           32
mask | 24 |         |    39742972 ns     39062500 ns           32
mask | 24 | avx     |     3200072 ns      4394531 ns           32
mask | 24 |     tbb |     8153850 ns      7812500 ns           32
mask | 24 | avx tbb |     2365425 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106443725 ns    105468750 ns           16
data |  6 | avx     |    13161563 ns     10742188 ns           16
data |  6 |     tbb |    11427831 ns      9765625 ns           16
data |  6 | avx tbb |     9287544 ns      8789062 ns           16
mask |  6 |         |   159106331 ns    159179688 ns           16
mask |  6 | avx     |    12920713 ns     14648438 ns           16
mask |  6 |     tbb |    32332469 ns     21484375 ns           16
mask |  6 | avx tbb |     9302856 ns      8789062 ns           16

data | 12 |         |    54623237 ns     55664062 ns           16
data | 12 | avx     |    12619219 ns     11718750 ns           16
data | 12 |     tbb |     9555350 ns      9765625 ns           16
data | 12 | avx tbb |     9307906 ns     10742188 ns           16
mask | 12 |         |   158886844 ns    157226562 ns           16
mask | 12 | avx     |    12719237 ns     11718750 ns           16
mask | 12 |     tbb |    32149794 ns     22460938 ns           16
mask | 12 | avx tbb |     9286275 ns      8789062 ns           16

data | 24 |         |    28768769 ns     27343750 ns           16
data | 24 | avx     |    13128119 ns      9765625 ns           16
data | 24 |     tbb |     9951013 ns      9765625 ns           16
data | 24 | avx tbb |     9313438 ns      9765625 ns           16
mask | 24 |         |   158783275 ns    158203125 ns           16
mask | 24 | avx     |    13266225 ns     12695312 ns           16
mask | 24 |     tbb |    32257675 ns     24414062 ns           16
mask | 24 | avx tbb |     9305700 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212506675 ns    212890625 ns            8
data |  6 | avx     |    25571000 ns     27343750 ns            8
data |  6 |     tbb |    22806850 ns     15625000 ns            8
data |  6 | avx tbb |    18449100 ns     17578125 ns            8
mask |  6 |         |   318980462 ns    318359375 ns            8
mask |  6 | avx     |    27512737 ns     25390625 ns            8
mask |  6 |     tbb |    64876850 ns     52734375 ns            8
mask |  6 | avx tbb |    18522962 ns     17578125 ns            8

data | 12 |         |   108348025 ns    105468750 ns            8
data | 12 | avx     |    25672300 ns     23437500 ns            8
data | 12 |     tbb |    18931550 ns     15625000 ns            8
data | 12 | avx tbb |    18454900 ns     17578125 ns            8
mask | 12 |         |   317971338 ns    318359375 ns            8
mask | 12 | avx     |    25550075 ns     27343750 ns            8
mask | 12 |     tbb |    64613925 ns     44921875 ns            8
mask | 12 | avx tbb |    19118913 ns     15625000 ns            8

data | 24 |         |    56686900 ns     58593750 ns            8
data | 24 | avx     |    25307475 ns     21484375 ns            8
data | 24 |     tbb |    19059813 ns     19531250 ns            8
data | 24 | avx tbb |    18554975 ns     19531250 ns            8
mask | 24 |         |   317313075 ns    318359375 ns            8
mask | 24 | avx     |    27691000 ns     29296875 ns            8
mask | 24 |     tbb |    64508825 ns     44921875 ns            8
mask | 24 | avx tbb |    18449862 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425447913 ns    425781250 ns            8
data |  6 | avx     |    51315013 ns     52734375 ns            8
data |  6 |     tbb |    45342700 ns     33203125 ns            8
data |  6 | avx tbb |    36903088 ns     37109375 ns            8
mask |  6 |         |   634390613 ns    636718750 ns            8
mask |  6 | avx     |    51161000 ns     50781250 ns            8
mask |  6 |     tbb |   129187400 ns     99609375 ns            8
mask |  6 | avx tbb |    37991100 ns     39062500 ns            8

data | 12 |         |   216928975 ns    218750000 ns            8
data | 12 | avx     |    52649363 ns     52734375 ns            8
data | 12 |     tbb |    37751838 ns     31250000 ns            8
data | 12 | avx tbb |    38266437 ns     37109375 ns            8
mask | 12 |         |   634778738 ns    636718750 ns            8
mask | 12 | avx     |    50940838 ns     50781250 ns            8
mask | 12 |     tbb |   129216750 ns     91796875 ns            8
mask | 12 | avx tbb |    36860737 ns     37109375 ns            8

data | 24 |         |   113385375 ns    113281250 ns            8
data | 24 | avx     |    50519950 ns     50781250 ns            8
data | 24 |     tbb |    37774437 ns     33203125 ns            8
data | 24 | avx tbb |    36833913 ns     35156250 ns            8
mask | 24 |         |   633992725 ns    634765625 ns            8
mask | 24 | avx     |    51525288 ns     54687500 ns            8
mask | 24 |     tbb |   128936138 ns    101562500 ns            8
mask | 24 | avx tbb |    36916663 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   849586350 ns    851562500 ns            8
data |  6 | avx     |   101494100 ns    101562500 ns            8
data |  6 |     tbb |    90472287 ns     62500000 ns            8
data |  6 | avx tbb |    73639950 ns     68359375 ns            8
mask |  6 |         |  1270982812 ns   1273437500 ns            8
mask |  6 | avx     |   101625100 ns     97656250 ns            8
mask |  6 |     tbb |   257467800 ns    189453125 ns            8
mask |  6 | avx tbb |    73789125 ns     68359375 ns            8

data | 12 |         |   433861337 ns    433593750 ns            8
data | 12 | avx     |   101236013 ns    101562500 ns            8
data | 12 |     tbb |    75233975 ns     58593750 ns            8
data | 12 | avx tbb |    73814087 ns     78125000 ns            8
mask | 12 |         |  1269366688 ns   1269531250 ns            8
mask | 12 | avx     |   101883037 ns    101562500 ns            8
mask | 12 |     tbb |   256082225 ns    173828125 ns            8
mask | 12 | avx tbb |    74263025 ns     68359375 ns            8

data | 24 |         |   226829875 ns    226562500 ns            8
data | 24 | avx     |   101291013 ns     99609375 ns            8
data | 24 |     tbb |    76327412 ns     62500000 ns            8
data | 24 | avx tbb |    73734562 ns     68359375 ns            8
mask | 24 |         |  1269097137 ns   1271484375 ns            8
mask | 24 | avx     |   102809400 ns     99609375 ns            8
mask | 24 |     tbb |   256119188 ns    183593750 ns            8
mask | 24 | avx tbb |    73703850 ns     78125000 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       74643 ns        68665 ns         2048
data |  6 |     tbb |       17796 ns        22888 ns         2048
mask |  6 |         |      114230 ns       122070 ns         2048
mask |  6 |     tbb |       31271 ns        45776 ns         2048

data | 12 |         |       39421 ns        22888 ns         2048
data | 12 |     tbb |       13263 ns        15259 ns         2048
mask | 12 |         |      115520 ns       122070 ns         2048
mask | 12 |     tbb |       31654 ns        30518 ns         2048

data | 24 |         |       20992 ns        22888 ns         2048
data | 24 |     tbb |       10995 ns        15259 ns         2048
mask | 24 |         |      117388 ns       122070 ns         2048
mask | 24 |     tbb |       31674 ns        45776 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18944 ns        30518 ns         1024
data |  6 | avx tbb |       14283 ns        30518 ns         1024
mask |  6 | avx     |       17760 ns        30518 ns         1024
mask |  6 | avx tbb |       14457 ns        30518 ns         1024

data | 12 | avx     |       19269 ns        15259 ns         1024
data | 12 | avx tbb |       13681 ns        30518 ns         1024
mask | 12 | avx     |       17766 ns        15259 ns         1024
mask | 12 | avx tbb |       14201 ns        0.000 ns         1024

data | 24 | avx     |       18965 ns        30518 ns         1024
data | 24 | avx tbb |       14651 ns        15259 ns         1024
mask | 24 | avx     |       17887 ns        30518 ns         1024
mask | 24 | avx tbb |       13574 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      380050 ns       350952 ns         1024
data |  6 | avx     |       29028 ns        45776 ns         1024
data |  6 |     tbb |       49701 ns        30518 ns         1024
data |  6 | avx tbb |       18265 ns        0.000 ns         1024
mask |  6 |         |      569063 ns       579834 ns         1024
mask |  6 | avx     |       27606 ns        0.000 ns         1024
mask |  6 |     tbb |      129822 ns       152588 ns         1024
mask |  6 | avx tbb |       18226 ns        30518 ns         1024

data | 12 |         |      192647 ns       213623 ns         1024
data | 12 | avx     |       28907 ns        45776 ns         1024
data | 12 |     tbb |       30464 ns        45776 ns         1024
data | 12 | avx tbb |       18551 ns        30518 ns         1024
mask | 12 |         |      567157 ns       564575 ns         1024
mask | 12 | avx     |       27308 ns        45776 ns         1024
mask | 12 |     tbb |      133483 ns       167847 ns         1024
mask | 12 | avx tbb |       17879 ns        0.000 ns         1024

data | 24 |         |       99920 ns       106812 ns         1024
data | 24 | avx     |       29052 ns        30518 ns         1024
data | 24 |     tbb |       23588 ns        15259 ns         1024
data | 24 | avx tbb |       18662 ns        45776 ns         1024
mask | 24 |         |      567019 ns       534058 ns         1024
mask | 24 | avx     |       27228 ns        0.000 ns         1024
mask | 24 |     tbb |      126724 ns       106812 ns         1024
mask | 24 | avx tbb |       17808 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1518606 ns      1525879 ns          512
data |  6 | avx     |      195035 ns       213623 ns          512
data |  6 |     tbb |      240205 ns       213623 ns          512
data |  6 | avx tbb |      161520 ns       152588 ns          512
mask |  6 |         |     2267001 ns      2349854 ns          512
mask |  6 | avx     |      199795 ns       213623 ns          512
mask |  6 |     tbb |      513761 ns       610352 ns          512
mask |  6 | avx tbb |      159004 ns       152588 ns          512

data | 12 |         |      777196 ns       701904 ns          512
data | 12 | avx     |      191613 ns       213623 ns          512
data | 12 |     tbb |      215949 ns       274658 ns          512
data | 12 | avx tbb |      159915 ns       122070 ns          512
mask | 12 |         |     2266900 ns      2288818 ns          512
mask | 12 | avx     |      199221 ns       152588 ns          512
mask | 12 |     tbb |      517856 ns       579834 ns          512
mask | 12 | avx tbb |      158847 ns       213623 ns          512

data | 24 |         |      416499 ns       427246 ns          512
data | 24 | avx     |      194412 ns       213623 ns          512
data | 24 |     tbb |      194336 ns       122070 ns          512
data | 24 | avx tbb |      160548 ns       152588 ns          512
mask | 24 |         |     2268004 ns      2288818 ns          512
mask | 24 | avx     |      198469 ns       213623 ns          512
mask | 24 |     tbb |      512454 ns       488281 ns          512
mask | 24 | avx tbb |      158701 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6099528 ns      6103516 ns           64
data |  6 | avx     |      786230 ns      1220703 ns           64
data |  6 |     tbb |      808867 ns       732422 ns           64
data |  6 | avx tbb |      636370 ns       244141 ns           64
mask |  6 |         |     9138047 ns      9277344 ns           64
mask |  6 | avx     |      797150 ns      1220703 ns           64
mask |  6 |     tbb |     1938742 ns      2197266 ns           64
mask |  6 | avx tbb |      629295 ns       244141 ns           64

data | 12 |         |     3148505 ns      2929688 ns           64
data | 12 | avx     |      785917 ns       732422 ns           64
data | 12 |     tbb |      709323 ns       976562 ns           64
data | 12 | avx tbb |      635405 ns       976562 ns           64
mask | 12 |         |     9105316 ns      9521484 ns           64
mask | 12 | avx     |      804261 ns       976562 ns           64
mask | 12 |     tbb |     1961547 ns      1464844 ns           64
mask | 12 | avx tbb |      629186 ns       488281 ns           64

data | 24 |         |     1679017 ns      1953125 ns           64
data | 24 | avx     |      774264 ns       732422 ns           64
data | 24 |     tbb |      683830 ns      1220703 ns           64
data | 24 | avx tbb |      635238 ns       732422 ns           64
mask | 24 |         |     9154883 ns      9033203 ns           64
mask | 24 | avx     |      791094 ns       488281 ns           64
mask | 24 |     tbb |     1954941 ns      2441406 ns           64
mask | 24 | avx tbb |      632022 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24339737 ns     25390625 ns           32
data |  6 | avx     |     3099394 ns      1953125 ns           32
data |  6 |     tbb |     2775994 ns       976562 ns           32
data |  6 | avx tbb |     2382456 ns      2441406 ns           32
mask |  6 |         |    36172328 ns     35156250 ns           32
mask |  6 | avx     |     3237062 ns      3906250 ns           32
mask |  6 |     tbb |     7423859 ns      6835938 ns           32
mask |  6 | avx tbb |     2372697 ns      1464844 ns           32

data | 12 |         |    12311663 ns     10742188 ns           32
data | 12 | avx     |     3071544 ns      1464844 ns           32
data | 12 |     tbb |     2478506 ns      2929688 ns           32
data | 12 | avx tbb |     2369697 ns      2441406 ns           32
mask | 12 |         |    36237850 ns     35644531 ns           32
mask | 12 | avx     |     3232606 ns      2441406 ns           32
mask | 12 |     tbb |     7431737 ns      5859375 ns           32
mask | 12 | avx tbb |     2370350 ns      1953125 ns           32

data | 24 |         |     6548663 ns      6835938 ns           32
data | 24 | avx     |     3090159 ns      3906250 ns           32
data | 24 |     tbb |     2457334 ns      1464844 ns           32
data | 24 | avx tbb |     2385287 ns      2441406 ns           32
mask | 24 |         |    36104884 ns     36132812 ns           32
mask | 24 | avx     |     3179381 ns      3417969 ns           32
mask | 24 |     tbb |     7425288 ns      7324219 ns           32
mask | 24 | avx tbb |     2376728 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96735925 ns     98632812 ns           16
data |  6 | avx     |    12313863 ns     12695312 ns           16
data |  6 |     tbb |    10902562 ns     13671875 ns           16
data |  6 | avx tbb |     9303531 ns      9765625 ns           16
mask |  6 |         |   144286888 ns    144531250 ns           16
mask |  6 | avx     |    12791456 ns     13671875 ns           16
mask |  6 |     tbb |    29326787 ns     26367188 ns           16
mask |  6 | avx tbb |     9325050 ns     10742188 ns           16

data | 12 |         |    49961750 ns     48828125 ns           16
data | 12 | avx     |    12496044 ns     12695312 ns           16
data | 12 |     tbb |     9767894 ns     10742188 ns           16
data | 12 | avx tbb |     9282263 ns      8789062 ns           16
mask | 12 |         |   144613762 ns    142578125 ns           16
mask | 12 | avx     |    12806288 ns     12695312 ns           16
mask | 12 |     tbb |    29355862 ns     25390625 ns           16
mask | 12 | avx tbb |     9305737 ns      9765625 ns           16

data | 24 |         |    26354675 ns     23437500 ns           16
data | 24 | avx     |    12486775 ns     11718750 ns           16
data | 24 |     tbb |     9511925 ns      7812500 ns           16
data | 24 | avx tbb |     9432125 ns      9765625 ns           16
mask | 24 |         |   144449394 ns    143554688 ns           16
mask | 24 | avx     |    12796487 ns     11718750 ns           16
mask | 24 |     tbb |    29372263 ns     24414062 ns           16
mask | 24 | avx tbb |     9303894 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193087150 ns    189453125 ns            8
data |  6 | avx     |    24996775 ns     23437500 ns            8
data |  6 |     tbb |    21300087 ns     17578125 ns            8
data |  6 | avx tbb |    18528988 ns     15625000 ns            8
mask |  6 |         |   289141637 ns    287109375 ns            8
mask |  6 | avx     |    25664625 ns     23437500 ns            8
mask |  6 |     tbb |    58789512 ns     44921875 ns            8
mask |  6 | avx tbb |    18515488 ns     17578125 ns            8

data | 12 |         |    98236363 ns     95703125 ns            8
data | 12 | avx     |    24950175 ns     27343750 ns            8
data | 12 |     tbb |    19917325 ns     15625000 ns            8
data | 12 | avx tbb |    18496050 ns     17578125 ns            8
mask | 12 |         |   288734500 ns    292968750 ns            8
mask | 12 | avx     |    25672100 ns     25390625 ns            8
mask | 12 |     tbb |    58920662 ns     44921875 ns            8
mask | 12 | avx tbb |    18489463 ns     15625000 ns            8

data | 24 |         |    54151287 ns     58593750 ns            8
data | 24 | avx     |    26834050 ns     23437500 ns            8
data | 24 |     tbb |    19000275 ns     19531250 ns            8
data | 24 | avx tbb |    19257250 ns     19531250 ns            8
mask | 24 |         |   288084687 ns    296875000 ns            8
mask | 24 | avx     |    25635375 ns     27343750 ns            8
mask | 24 |     tbb |    58811450 ns     39062500 ns            8
mask | 24 | avx tbb |    18514162 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385522512 ns    382812500 ns            8
data |  6 | avx     |    50125000 ns     52734375 ns            8
data |  6 |     tbb |    42356125 ns     31250000 ns            8
data |  6 | avx tbb |    36862138 ns     33203125 ns            8
mask |  6 |         |   576600725 ns    578125000 ns            8
mask |  6 | avx     |    51352238 ns     50781250 ns            8
mask |  6 |     tbb |   116896375 ns     78125000 ns            8
mask |  6 | avx tbb |    36944750 ns     33203125 ns            8

data | 12 |         |   197863787 ns    199218750 ns            8
data | 12 | avx     |    51694725 ns     50781250 ns            8
data | 12 |     tbb |    37855213 ns     29296875 ns            8
data | 12 | avx tbb |    36920312 ns     37109375 ns            8
mask | 12 |         |   577397512 ns    578125000 ns            8
mask | 12 | avx     |    53581900 ns     48828125 ns            8
mask | 12 |     tbb |   116918850 ns     91796875 ns            8
mask | 12 | avx tbb |    36883500 ns     35156250 ns            8

data | 24 |         |   104658200 ns    103515625 ns            8
data | 24 | avx     |    49432237 ns     52734375 ns            8
data | 24 |     tbb |    37755287 ns     29296875 ns            8
data | 24 | avx tbb |    36875838 ns     31250000 ns            8
mask | 24 |         |   576770713 ns    574218750 ns            8
mask | 24 | avx     |    53337750 ns     52734375 ns            8
mask | 24 |     tbb |   116919163 ns     78125000 ns            8
mask | 24 | avx tbb |    36843250 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   770671200 ns    771484375 ns            8
data |  6 | avx     |    99210513 ns     99609375 ns            8
data |  6 |     tbb |    84493350 ns     66406250 ns            8
data |  6 | avx tbb |    73724300 ns     58593750 ns            8
mask |  6 |         |  1152886012 ns   1156250000 ns            8
mask |  6 | avx     |   101544862 ns     99609375 ns            8
mask |  6 |     tbb |   230449063 ns    183593750 ns            8
mask |  6 | avx tbb |    73744475 ns     76171875 ns            8

data | 12 |         |   393166250 ns    392578125 ns            8
data | 12 | avx     |   100865650 ns    101562500 ns            8
data | 12 |     tbb |    75415212 ns     60546875 ns            8
data | 12 | avx tbb |    73727500 ns     72265625 ns            8
mask | 12 |         |  1156849363 ns   1158203125 ns            8
mask | 12 | avx     |   103838850 ns    103515625 ns            8
mask | 12 |     tbb |   229253950 ns    158203125 ns            8
mask | 12 | avx tbb |    73970100 ns     78125000 ns            8

data | 24 |         |   210494637 ns    207031250 ns            8
data | 24 | avx     |    99067688 ns     97656250 ns            8
data | 24 |     tbb |    75552612 ns     66406250 ns            8
data | 24 | avx tbb |    73943162 ns     70312500 ns            8
mask | 24 |         |  1151141100 ns   1148437500 ns            8
mask | 24 | avx     |   101648425 ns    103515625 ns            8
mask | 24 |     tbb |   230010550 ns    179687500 ns            8
mask | 24 | avx tbb |    73846913 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75795 ns        83923 ns         2048
data |  6 |     tbb |       17927 ns        15259 ns         2048
mask |  6 |         |      136515 ns       129700 ns         2048
mask |  6 |     tbb |       35110 ns        30518 ns         2048

data | 12 |         |       39830 ns        38147 ns         2048
data | 12 |     tbb |       13129 ns        15259 ns         2048
mask | 12 |         |      133463 ns       137329 ns         2048
mask | 12 |     tbb |       34931 ns        38147 ns         2048

data | 24 |         |       20699 ns        22888 ns         2048
data | 24 |     tbb |       10970 ns         7629 ns         2048
mask | 24 |         |      137425 ns       144958 ns         2048
mask | 24 |     tbb |       35472 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18581 ns        15259 ns         1024
data |  6 | avx tbb |       14134 ns        0.000 ns         1024
mask |  6 | avx     |       17689 ns        0.000 ns         1024
mask |  6 | avx tbb |       13833 ns        15259 ns         1024

data | 12 | avx     |       19010 ns        15259 ns         1024
data | 12 | avx tbb |       14285 ns        30518 ns         1024
mask | 12 | avx     |       17727 ns        0.000 ns         1024
mask | 12 | avx tbb |       13701 ns        15259 ns         1024

data | 24 | avx     |       19181 ns        0.000 ns         1024
data | 24 | avx tbb |       13330 ns        0.000 ns         1024
mask | 24 | avx     |       17727 ns        15259 ns         1024
mask | 24 | avx tbb |       13570 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      384702 ns       366211 ns         1024
data |  6 | avx     |       29094 ns        30518 ns         1024
data |  6 |     tbb |       49862 ns        45776 ns         1024
data |  6 | avx tbb |       18430 ns        0.000 ns         1024
mask |  6 |         |      691996 ns       686646 ns         1024
mask |  6 | avx     |       27356 ns        15259 ns         1024
mask |  6 |     tbb |      158141 ns       167847 ns         1024
mask |  6 | avx tbb |       18301 ns        15259 ns         1024

data | 12 |         |      193318 ns       198364 ns         1024
data | 12 | avx     |       29097 ns        30518 ns         1024
data | 12 |     tbb |       30345 ns        45776 ns         1024
data | 12 | avx tbb |       18381 ns        30518 ns         1024
mask | 12 |         |      681980 ns       671387 ns         1024
mask | 12 | avx     |       27471 ns        45776 ns         1024
mask | 12 |     tbb |      158897 ns       183105 ns         1024
mask | 12 | avx tbb |       18036 ns        15259 ns         1024

data | 24 |         |       99166 ns        91553 ns         1024
data | 24 | avx     |       29277 ns        45776 ns         1024
data | 24 |     tbb |       23059 ns        15259 ns         1024
data | 24 | avx tbb |       18624 ns        15259 ns         1024
mask | 24 |         |      693495 ns       732422 ns         1024
mask | 24 | avx     |       27699 ns        15259 ns         1024
mask | 24 |     tbb |      164088 ns       152588 ns         1024
mask | 24 | avx tbb |       18024 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1520404 ns      1495361 ns          512
data |  6 | avx     |      193337 ns       274658 ns          512
data |  6 |     tbb |      249403 ns       183105 ns          512
data |  6 | avx tbb |      159938 ns       183105 ns          512
mask |  6 |         |     2715107 ns      2655029 ns          512
mask |  6 | avx     |      197348 ns       122070 ns          512
mask |  6 |     tbb |      603536 ns       579834 ns          512
mask |  6 | avx tbb |      159592 ns       183105 ns          512

data | 12 |         |      775722 ns       823975 ns          512
data | 12 | avx     |      191885 ns       244141 ns          512
data | 12 |     tbb |      204189 ns       244141 ns          512
data | 12 | avx tbb |      160457 ns       183105 ns          512
mask | 12 |         |     2710876 ns      2746582 ns          512
mask | 12 | avx     |      196781 ns       183105 ns          512
mask | 12 |     tbb |      599641 ns       701904 ns          512
mask | 12 | avx tbb |      158638 ns       274658 ns          512

data | 24 |         |      414090 ns       457764 ns          512
data | 24 | avx     |      191945 ns       183105 ns          512
data | 24 |     tbb |      198616 ns       183105 ns          512
data | 24 | avx tbb |      160694 ns        61035 ns          512
mask | 24 |         |     2712570 ns      2655029 ns          512
mask | 24 | avx     |      198162 ns       213623 ns          512
mask | 24 |     tbb |      600116 ns       610352 ns          512
mask | 24 | avx tbb |      159908 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6076498 ns      6835938 ns           64
data |  6 | avx     |      775092 ns       732422 ns           64
data |  6 |     tbb |      808130 ns       976562 ns           64
data |  6 | avx tbb |      636367 ns       976562 ns           64
mask |  6 |         |    10912102 ns     10986328 ns           64
mask |  6 | avx     |      800702 ns       976562 ns           64
mask |  6 |     tbb |     2301787 ns      2441406 ns           64
mask |  6 | avx tbb |      624619 ns       488281 ns           64

data | 12 |         |     3182841 ns      3417969 ns           64
data | 12 | avx     |      784520 ns       976562 ns           64
data | 12 |     tbb |      710300 ns       488281 ns           64
data | 12 | avx tbb |      635178 ns       732422 ns           64
mask | 12 |         |    10947733 ns     10498047 ns           64
mask | 12 | avx     |      804584 ns       244141 ns           64
mask | 12 |     tbb |     2297247 ns      2197266 ns           64
mask | 12 | avx tbb |      624941 ns       732422 ns           64

data | 24 |         |     1689406 ns      1708984 ns           64
data | 24 | avx     |      775881 ns       244141 ns           64
data | 24 |     tbb |      680370 ns       488281 ns           64
data | 24 | avx tbb |      635048 ns       732422 ns           64
mask | 24 |         |    10942244 ns     10986328 ns           64
mask | 24 | avx     |      792873 ns       976562 ns           64
mask | 24 |     tbb |     2314163 ns      2197266 ns           64
mask | 24 | avx tbb |      628322 ns       976562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24233734 ns     25390625 ns           32
data |  6 | avx     |     3099341 ns      1953125 ns           32
data |  6 |     tbb |     2788959 ns       976562 ns           32
data |  6 | avx tbb |     2395222 ns       976562 ns           32
mask |  6 |         |    43443888 ns     43457031 ns           32
mask |  6 | avx     |     3167078 ns      1464844 ns           32
mask |  6 |     tbb |     8867934 ns      7812500 ns           32
mask |  6 | avx tbb |     2367859 ns      2441406 ns           32

data | 12 |         |    12294847 ns     12207031 ns           32
data | 12 | avx     |     3291509 ns      6347656 ns           32
data | 12 |     tbb |     2488719 ns      2441406 ns           32
data | 12 | avx tbb |     2386637 ns      1953125 ns           32
mask | 12 |         |    43384800 ns     42968750 ns           32
mask | 12 | avx     |     3130316 ns      5371094 ns           32
mask | 12 |     tbb |     8872128 ns      8300781 ns           32
mask | 12 | avx tbb |     2373231 ns      2929688 ns           32

data | 24 |         |     6696691 ns      7324219 ns           32
data | 24 | avx     |     3052100 ns        0.000 ns           32
data | 24 |     tbb |     2455969 ns      3417969 ns           32
data | 24 | avx tbb |     2373456 ns      1953125 ns           32
mask | 24 |         |    43273219 ns     43945312 ns           32
mask | 24 | avx     |     3154097 ns      4394531 ns           32
mask | 24 |     tbb |     8876431 ns      8789062 ns           32
mask | 24 | avx tbb |     2394094 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96281606 ns     96679688 ns           16
data |  6 | avx     |    12280550 ns     11718750 ns           16
data |  6 |     tbb |    10702287 ns     15625000 ns           16
data |  6 | avx tbb |     9310087 ns      7812500 ns           16
mask |  6 |         |   173101662 ns    171875000 ns           16
mask |  6 | avx     |    12825288 ns     12695312 ns           16
mask |  6 |     tbb |    34700687 ns     26367188 ns           16
mask |  6 | avx tbb |     9294712 ns      9765625 ns           16

data | 12 |         |    49378237 ns     48828125 ns           16
data | 12 | avx     |    12557125 ns     14648438 ns           16
data | 12 |     tbb |     9546850 ns      7812500 ns           16
data | 12 | avx tbb |     9316862 ns      7812500 ns           16
mask | 12 |         |   173666237 ns    171875000 ns           16
mask | 12 | avx     |    12644050 ns     13671875 ns           16
mask | 12 |     tbb |    34831212 ns     27343750 ns           16
mask | 12 | avx tbb |     9297963 ns      7812500 ns           16

data | 24 |         |    26327737 ns     31250000 ns           16
data | 24 | avx     |    12430038 ns     11718750 ns           16
data | 24 |     tbb |     9523225 ns      9765625 ns           16
data | 24 | avx tbb |     9478094 ns      9765625 ns           16
mask | 24 |         |   172838981 ns    173828125 ns           16
mask | 24 | avx     |    12787506 ns     11718750 ns           16
mask | 24 |     tbb |    34680781 ns     23437500 ns           16
mask | 24 | avx tbb |     9306856 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193291775 ns    199218750 ns            8
data |  6 | avx     |    24724875 ns     23437500 ns            8
data |  6 |     tbb |    22043137 ns     31250000 ns            8
data |  6 | avx tbb |    18509975 ns     19531250 ns            8
mask |  6 |         |   345634112 ns    347656250 ns            8
mask |  6 | avx     |    27622187 ns     25390625 ns            8
mask |  6 |     tbb |    69032075 ns     50781250 ns            8
mask |  6 | avx tbb |    18468925 ns     19531250 ns            8

data | 12 |         |    98154750 ns     97656250 ns            8
data | 12 | avx     |    24935500 ns     25390625 ns            8
data | 12 |     tbb |    19987300 ns     21484375 ns            8
data | 12 | avx tbb |    19273775 ns     17578125 ns            8
mask | 12 |         |   345741112 ns    345703125 ns            8
mask | 12 | avx     |    25252038 ns     27343750 ns            8
mask | 12 |     tbb |    68868675 ns     48828125 ns            8
mask | 12 | avx tbb |    18565088 ns     17578125 ns            8

data | 24 |         |    52402775 ns     46875000 ns            8
data | 24 | avx     |    24933200 ns     23437500 ns            8
data | 24 |     tbb |    18936438 ns     13671875 ns            8
data | 24 | avx tbb |    18527187 ns     19531250 ns            8
mask | 24 |         |   346371637 ns    349609375 ns            8
mask | 24 | avx     |    27450512 ns     25390625 ns            8
mask | 24 |     tbb |    68872425 ns     52734375 ns            8
mask | 24 | avx tbb |    18503037 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385260188 ns    382812500 ns            8
data |  6 | avx     |    51670888 ns     52734375 ns            8
data |  6 |     tbb |    42412462 ns     31250000 ns            8
data |  6 | avx tbb |    36961663 ns     31250000 ns            8
mask |  6 |         |   698884175 ns    697265625 ns            8
mask |  6 | avx     |    50805688 ns     50781250 ns            8
mask |  6 |     tbb |   138242900 ns     95703125 ns            8
mask |  6 | avx tbb |    36970800 ns     37109375 ns            8

data | 12 |         |   196433838 ns    197265625 ns            8
data | 12 | avx     |    49368000 ns     48828125 ns            8
data | 12 |     tbb |    37962375 ns     29296875 ns            8
data | 12 | avx tbb |    36865725 ns     33203125 ns            8
mask | 12 |         |   694431338 ns    693359375 ns            8
mask | 12 | avx     |    50715475 ns     52734375 ns            8
mask | 12 |     tbb |   138916725 ns    105468750 ns            8
mask | 12 | avx tbb |    38269300 ns     39062500 ns            8

data | 24 |         |   106975750 ns    107421875 ns            8
data | 24 | avx     |    49769262 ns     48828125 ns            8
data | 24 |     tbb |    37897200 ns     33203125 ns            8
data | 24 | avx tbb |    36922913 ns     35156250 ns            8
mask | 24 |         |   692768625 ns    693359375 ns            8
mask | 24 | avx     |    51275850 ns     50781250 ns            8
mask | 24 |     tbb |   136710700 ns     99609375 ns            8
mask | 24 | avx tbb |    36935362 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   770957388 ns    775390625 ns            8
data |  6 | avx     |    99935137 ns    101562500 ns            8
data |  6 |     tbb |    84458663 ns     64453125 ns            8
data |  6 | avx tbb |    73703325 ns     66406250 ns            8
mask |  6 |         |  1380961625 ns   1380859375 ns            8
mask |  6 | avx     |   101253913 ns    101562500 ns            8
mask |  6 |     tbb |   276764200 ns    193359375 ns            8
mask |  6 | avx tbb |    73806938 ns     72265625 ns            8

data | 12 |         |   392158838 ns    390625000 ns            8
data | 12 | avx     |    98884512 ns     97656250 ns            8
data | 12 |     tbb |    75447775 ns     66406250 ns            8
data | 12 | avx tbb |    75018513 ns     68359375 ns            8
mask | 12 |         |  1381059987 ns   1378906250 ns            8
mask | 12 | avx     |   101173287 ns    103515625 ns            8
mask | 12 |     tbb |   276005300 ns    187500000 ns            8
mask | 12 | avx tbb |    73791888 ns     72265625 ns            8

data | 24 |         |   209390287 ns    208984375 ns            8
data | 24 | avx     |    99074225 ns    101562500 ns            8
data | 24 |     tbb |    75612925 ns     66406250 ns            8
data | 24 | avx tbb |    73719763 ns     66406250 ns            8
mask | 24 |         |  1381814900 ns   1386718750 ns            8
mask | 24 | avx     |   101279150 ns     99609375 ns            8
mask | 24 |     tbb |   276279638 ns    197265625 ns            8
mask | 24 | avx tbb |    73780212 ns     66406250 ns            8
```

</details>

