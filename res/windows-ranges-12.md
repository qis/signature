# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       84039 ns        83923 ns         2048
data |  6 |     tbb |       19418 ns        15259 ns         2048
mask |  6 |         |      125544 ns       129700 ns         2048
mask |  6 |     tbb |       39539 ns        38147 ns         2048

data | 12 |         |       43510 ns        38147 ns         2048
data | 12 |     tbb |       14023 ns        22888 ns         2048
mask | 12 |         |      125870 ns       129700 ns         2048
mask | 12 |     tbb |       37908 ns        38147 ns         2048

data | 24 |         |       23152 ns        30518 ns         2048
data | 24 |     tbb |       11076 ns        15259 ns         2048
mask | 24 |         |      123068 ns       129700 ns         2048
mask | 24 |     tbb |       37805 ns        22888 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17207 ns        0.000 ns         1024
data |  6 | avx tbb |       20394 ns        15259 ns         1024
mask |  6 | avx     |       18898 ns        15259 ns         1024
mask |  6 | avx tbb |       15424 ns        0.000 ns         1024

data | 12 | avx     |       16942 ns        15259 ns         1024
data | 12 | avx tbb |       15912 ns        15259 ns         1024
mask | 12 | avx     |       19027 ns        30518 ns         1024
mask | 12 | avx tbb |       15362 ns        15259 ns         1024

data | 24 | avx     |       17221 ns        15259 ns         1024
data | 24 | avx tbb |       15657 ns        15259 ns         1024
mask | 24 | avx     |       18927 ns        15259 ns         1024
mask | 24 | avx tbb |       15269 ns        45776 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      426348 ns       411987 ns         1024
data |  6 | avx     |       26188 ns        30518 ns         1024
data |  6 |     tbb |       69811 ns        76294 ns         1024
data |  6 | avx tbb |       24190 ns        45776 ns         1024
mask |  6 |         |      621328 ns       610352 ns         1024
mask |  6 | avx     |       29018 ns        45776 ns         1024
mask |  6 |     tbb |      210625 ns       228882 ns         1024
mask |  6 | avx tbb |       22308 ns        15259 ns         1024

data | 12 |         |      213341 ns       244141 ns         1024
data | 12 | avx     |       26232 ns        30518 ns         1024
data | 12 |     tbb |       42642 ns        61035 ns         1024
data | 12 | avx tbb |       21909 ns        0.000 ns         1024
mask | 12 |         |      623761 ns       640869 ns         1024
mask | 12 | avx     |       28973 ns        30518 ns         1024
mask | 12 |     tbb |      213030 ns       244141 ns         1024
mask | 12 | avx tbb |       22105 ns        15259 ns         1024

data | 24 |         |      109100 ns       122070 ns         1024
data | 24 | avx     |       27207 ns        30518 ns         1024
data | 24 |     tbb |       42298 ns        30518 ns         1024
data | 24 | avx tbb |       23129 ns        30518 ns         1024
mask | 24 |         |      625028 ns       656128 ns         1024
mask | 24 | avx     |       29006 ns        15259 ns         1024
mask | 24 |     tbb |      212170 ns       213623 ns         1024
mask | 24 | avx tbb |       22617 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1687982 ns      1678467 ns          512
data |  6 | avx     |      195341 ns       183105 ns          512
data |  6 |     tbb |      346934 ns       366211 ns          512
data |  6 | avx tbb |      165252 ns        91553 ns          512
mask |  6 |         |     2504649 ns      2471924 ns          512
mask |  6 | avx     |      200740 ns       305176 ns          512
mask |  6 |     tbb |      643910 ns       671387 ns          512
mask |  6 | avx tbb |      163996 ns       213623 ns          512

data | 12 |         |      861020 ns       854492 ns          512
data | 12 | avx     |      202944 ns       122070 ns          512
data | 12 |     tbb |      252846 ns       213623 ns          512
data | 12 | avx tbb |      163854 ns       152588 ns          512
mask | 12 |         |     2491492 ns      2471924 ns          512
mask | 12 | avx     |      198502 ns       183105 ns          512
mask | 12 |     tbb |      645626 ns       640869 ns          512
mask | 12 | avx tbb |      162624 ns       122070 ns          512

data | 24 |         |      461707 ns       488281 ns          512
data | 24 | avx     |      195865 ns       244141 ns          512
data | 24 |     tbb |      214038 ns       183105 ns          512
data | 24 | avx tbb |      161935 ns       183105 ns          512
mask | 24 |         |     2497101 ns      2471924 ns          512
mask | 24 | avx     |      196934 ns       213623 ns          512
mask | 24 |     tbb |      647294 ns       640869 ns          512
mask | 24 | avx tbb |      162206 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6698025 ns      6103516 ns           64
data |  6 | avx     |      796469 ns        0.000 ns           64
data |  6 |     tbb |     1069948 ns      1220703 ns           64
data |  6 | avx tbb |      646692 ns       488281 ns           64
mask |  6 |         |    10013498 ns     10253906 ns           64
mask |  6 | avx     |      829237 ns       732422 ns           64
mask |  6 |     tbb |     2349664 ns      2197266 ns           64
mask |  6 | avx tbb |      641836 ns       488281 ns           64

data | 12 |         |     3464928 ns      3417969 ns           64
data | 12 | avx     |      794445 ns       732422 ns           64
data | 12 |     tbb |      800022 ns       976562 ns           64
data | 12 | avx tbb |      650413 ns       976562 ns           64
mask | 12 |         |    10062402 ns     10009766 ns           64
mask | 12 | avx     |      798939 ns       244141 ns           64
mask | 12 |     tbb |     2429067 ns      2197266 ns           64
mask | 12 | avx tbb |      643756 ns       488281 ns           64

data | 24 |         |     1866147 ns      1953125 ns           64
data | 24 | avx     |      794989 ns       976562 ns           64
data | 24 |     tbb |      724502 ns       732422 ns           64
data | 24 | avx tbb |      647175 ns       976562 ns           64
mask | 24 |         |    10039033 ns     10009766 ns           64
mask | 24 | avx     |      793206 ns       732422 ns           64
mask | 24 |     tbb |     2392497 ns      2685547 ns           64
mask | 24 | avx tbb |      642680 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26754388 ns     19531250 ns           32
data |  6 | avx     |     3133881 ns      2441406 ns           32
data |  6 |     tbb |     3834613 ns      3906250 ns           32
data |  6 | avx tbb |     2426431 ns      2441406 ns           32
mask |  6 |         |    39839041 ns     40039062 ns           32
mask |  6 | avx     |     3154559 ns      5859375 ns           32
mask |  6 |     tbb |     8997156 ns      9277344 ns           32
mask |  6 | avx tbb |     2426634 ns      2929688 ns           32

data | 12 |         |    13603316 ns     13183594 ns           32
data | 12 | avx     |     3182703 ns      3906250 ns           32
data | 12 |     tbb |     2779291 ns        0.000 ns           32
data | 12 | avx tbb |     2401784 ns      1953125 ns           32
mask | 12 |         |    39809619 ns     40039062 ns           32
mask | 12 | avx     |     3194344 ns      3906250 ns           32
mask | 12 |     tbb |     9150291 ns      7324219 ns           32
mask | 12 | avx tbb |     2405994 ns      1953125 ns           32

data | 24 |         |     7116125 ns      6835938 ns           32
data | 24 | avx     |     3136484 ns      3417969 ns           32
data | 24 |     tbb |     2549028 ns      2441406 ns           32
data | 24 | avx tbb |     2410709 ns      1464844 ns           32
mask | 24 |         |    39792550 ns     39550781 ns           32
mask | 24 | avx     |     3154734 ns      4882812 ns           32
mask | 24 |     tbb |     9265284 ns      8300781 ns           32
mask | 24 | avx tbb |     2409856 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106299675 ns    105468750 ns           16
data |  6 | avx     |    12836700 ns     13671875 ns           16
data |  6 |     tbb |    14893319 ns     14648438 ns           16
data |  6 | avx tbb |     9451812 ns      5859375 ns           16
mask |  6 |         |   158752300 ns    158203125 ns           16
mask |  6 | avx     |    12673281 ns     13671875 ns           16
mask |  6 |     tbb |    33882781 ns     23437500 ns           16
mask |  6 | avx tbb |     9491875 ns     11718750 ns           16

data | 12 |         |    54266819 ns     56640625 ns           16
data | 12 | avx     |    12672613 ns     10742188 ns           16
data | 12 |     tbb |    10754119 ns     12695312 ns           16
data | 12 | avx tbb |     9759200 ns      8789062 ns           16
mask | 12 |         |   159082588 ns    157226562 ns           16
mask | 12 | avx     |    12656987 ns     11718750 ns           16
mask | 12 |     tbb |    34457375 ns     26367188 ns           16
mask | 12 | avx tbb |     9753588 ns      6835938 ns           16

data | 24 |         |    28895931 ns     30273438 ns           16
data | 24 | avx     |    12637750 ns     13671875 ns           16
data | 24 |     tbb |     9672862 ns      9765625 ns           16
data | 24 | avx tbb |     9479088 ns     10742188 ns           16
mask | 24 |         |   158943306 ns    158203125 ns           16
mask | 24 | avx     |    12719550 ns     10742188 ns           16
mask | 24 |     tbb |    33979413 ns     25390625 ns           16
mask | 24 | avx tbb |    10045762 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212763663 ns    212890625 ns            8
data |  6 | avx     |    25300225 ns     23437500 ns            8
data |  6 |     tbb |    29232262 ns     15625000 ns            8
data |  6 | avx tbb |    18747712 ns     17578125 ns            8
mask |  6 |         |   317913250 ns    320312500 ns            8
mask |  6 | avx     |    25396150 ns     23437500 ns            8
mask |  6 |     tbb |    68104175 ns     52734375 ns            8
mask |  6 | avx tbb |    18825838 ns     19531250 ns            8

data | 12 |         |   110129837 ns    109375000 ns            8
data | 12 | avx     |    27406375 ns     29296875 ns            8
data | 12 |     tbb |    23092587 ns     17578125 ns            8
data | 12 | avx tbb |    18779212 ns     17578125 ns            8
mask | 12 |         |   318453187 ns    314453125 ns            8
mask | 12 | avx     |    25571275 ns     23437500 ns            8
mask | 12 |     tbb |    67693000 ns     46875000 ns            8
mask | 12 | avx tbb |    18763975 ns     19531250 ns            8

data | 24 |         |    56923287 ns     56640625 ns            8
data | 24 | avx     |    27303500 ns     27343750 ns            8
data | 24 |     tbb |    19222287 ns     17578125 ns            8
data | 24 | avx tbb |    18758525 ns     19531250 ns            8
mask | 24 |         |   317810913 ns    318359375 ns            8
mask | 24 | avx     |    25472613 ns     27343750 ns            8
mask | 24 |     tbb |    66786600 ns     54687500 ns            8
mask | 24 | avx tbb |    19123725 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425741688 ns    427734375 ns            8
data |  6 | avx     |    50741775 ns     50781250 ns            8
data |  6 |     tbb |    59690312 ns     29296875 ns            8
data |  6 | avx tbb |    37399213 ns     35156250 ns            8
mask |  6 |         |   635594788 ns    638671875 ns            8
mask |  6 | avx     |    50980562 ns     50781250 ns            8
mask |  6 |     tbb |   141184387 ns     87890625 ns            8
mask |  6 | avx tbb |    37519088 ns     37109375 ns            8

data | 12 |         |   217455525 ns    218750000 ns            8
data | 12 | avx     |    52467025 ns     52734375 ns            8
data | 12 |     tbb |    43550100 ns     37109375 ns            8
data | 12 | avx tbb |    37485212 ns     35156250 ns            8
mask | 12 |         |   636436700 ns    636718750 ns            8
mask | 12 | avx     |    50869862 ns     52734375 ns            8
mask | 12 |     tbb |   133478575 ns     85937500 ns            8
mask | 12 | avx tbb |    38977925 ns     39062500 ns            8

data | 24 |         |   113355112 ns    113281250 ns            8
data | 24 | avx     |    50687950 ns     50781250 ns            8
data | 24 |     tbb |    38494400 ns     33203125 ns            8
data | 24 | avx tbb |    37429125 ns     39062500 ns            8
mask | 24 |         |   638993725 ns    638671875 ns            8
mask | 24 | avx     |    50666663 ns     48828125 ns            8
mask | 24 |     tbb |   141036638 ns     83984375 ns            8
mask | 24 | avx tbb |    39679550 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   850567362 ns    851562500 ns            8
data |  6 | avx     |   101150013 ns    103515625 ns            8
data |  6 |     tbb |   118768575 ns     58593750 ns            8
data |  6 | avx tbb |    75069225 ns     68359375 ns            8
mask |  6 |         |  1271541162 ns   1273437500 ns            8
mask |  6 | avx     |   101877138 ns    101562500 ns            8
mask |  6 |     tbb |   286415200 ns    177734375 ns            8
mask |  6 | avx tbb |    75254212 ns     76171875 ns            8

data | 12 |         |   439605887 ns    439453125 ns            8
data | 12 | avx     |   102318550 ns     99609375 ns            8
data | 12 |     tbb |    85431812 ns     64453125 ns            8
data | 12 | avx tbb |    75108738 ns     74218750 ns            8
mask | 12 |         |  1268934800 ns   1269531250 ns            8
mask | 12 | avx     |   102070038 ns    103515625 ns            8
mask | 12 |     tbb |   282916200 ns    203125000 ns            8
mask | 12 | avx tbb |    75041350 ns     76171875 ns            8

data | 24 |         |   227732875 ns    226562500 ns            8
data | 24 | avx     |   101257525 ns    101562500 ns            8
data | 24 |     tbb |    76853712 ns     54687500 ns            8
data | 24 | avx tbb |    75164525 ns     70312500 ns            8
mask | 24 |         |  1270685687 ns   1269531250 ns            8
mask | 24 | avx     |   102194775 ns    103515625 ns            8
mask | 24 |     tbb |   283545450 ns    183593750 ns            8
mask | 24 | avx tbb |    75234550 ns     74218750 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       78465 ns        76294 ns         2048
data |  6 |     tbb |       18637 ns        15259 ns         2048
mask |  6 |         |      111024 ns       106812 ns         2048
mask |  6 |     tbb |       35251 ns        30518 ns         2048

data | 12 |         |       39730 ns        45776 ns         2048
data | 12 |     tbb |       13638 ns         7629 ns         2048
mask | 12 |         |      114857 ns       114441 ns         2048
mask | 12 |     tbb |       35841 ns        38147 ns         2048

data | 24 |         |       20964 ns        30518 ns         2048
data | 24 |     tbb |       10753 ns        15259 ns         2048
mask | 24 |         |      110686 ns       106812 ns         2048
mask | 24 |     tbb |       35940 ns        30518 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18462 ns        30518 ns         1024
data |  6 | avx tbb |       21029 ns        15259 ns         1024
mask |  6 | avx     |       18014 ns        30518 ns         1024
mask |  6 | avx tbb |       16679 ns        15259 ns         1024

data | 12 | avx     |       18964 ns        15259 ns         1024
data | 12 | avx tbb |       16058 ns        15259 ns         1024
mask | 12 | avx     |       17976 ns        30518 ns         1024
mask | 12 | avx tbb |       15367 ns        15259 ns         1024

data | 24 | avx     |       18975 ns        15259 ns         1024
data | 24 | avx tbb |       15973 ns        15259 ns         1024
mask | 24 | avx     |       17916 ns        15259 ns         1024
mask | 24 | avx tbb |       15807 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      389508 ns       381470 ns         1024
data |  6 | avx     |       29124 ns        61035 ns         1024
data |  6 |     tbb |       64957 ns       106812 ns         1024
data |  6 | avx tbb |       23161 ns        15259 ns         1024
mask |  6 |         |      566721 ns       534058 ns         1024
mask |  6 | avx     |       27098 ns        30518 ns         1024
mask |  6 |     tbb |      199842 ns       228882 ns         1024
mask |  6 | avx tbb |       22196 ns        15259 ns         1024

data | 12 |         |      192822 ns       183105 ns         1024
data | 12 | avx     |       28972 ns        30518 ns         1024
data | 12 |     tbb |       39017 ns        45776 ns         1024
data | 12 | avx tbb |       23476 ns        15259 ns         1024
mask | 12 |         |      567054 ns       579834 ns         1024
mask | 12 | avx     |       27599 ns        0.000 ns         1024
mask | 12 |     tbb |      198195 ns       213623 ns         1024
mask | 12 | avx tbb |       22427 ns        30518 ns         1024

data | 24 |         |       99319 ns        91553 ns         1024
data | 24 | avx     |       29073 ns        15259 ns         1024
data | 24 |     tbb |       39754 ns        61035 ns         1024
data | 24 | avx tbb |       23042 ns        30518 ns         1024
mask | 24 |         |      568051 ns       534058 ns         1024
mask | 24 | avx     |       28184 ns        15259 ns         1024
mask | 24 |     tbb |      201556 ns       152588 ns         1024
mask | 24 | avx tbb |       22273 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1519263 ns      1495361 ns          512
data |  6 | avx     |      192355 ns       244141 ns          512
data |  6 |     tbb |      315650 ns       274658 ns          512
data |  6 | avx tbb |      163613 ns       213623 ns          512
mask |  6 |         |     2262560 ns      2197266 ns          512
mask |  6 | avx     |      198679 ns       244141 ns          512
mask |  6 |     tbb |      592443 ns       549316 ns          512
mask |  6 | avx tbb |      164442 ns       122070 ns          512

data | 12 |         |      778117 ns       762939 ns          512
data | 12 | avx     |      192270 ns       244141 ns          512
data | 12 |     tbb |      233447 ns       183105 ns          512
data | 12 | avx tbb |      163581 ns       152588 ns          512
mask | 12 |         |     2277868 ns      2258301 ns          512
mask | 12 | avx     |      196869 ns       274658 ns          512
mask | 12 |     tbb |      598367 ns       579834 ns          512
mask | 12 | avx tbb |      163684 ns        91553 ns          512

data | 24 |         |      416819 ns       335693 ns          512
data | 24 | avx     |      190944 ns       305176 ns          512
data | 24 |     tbb |      207257 ns       213623 ns          512
data | 24 | avx tbb |      163590 ns       122070 ns          512
mask | 24 |         |     2265965 ns      2258301 ns          512
mask | 24 | avx     |      196218 ns       152588 ns          512
mask | 24 |     tbb |      586937 ns       610352 ns          512
mask | 24 | avx tbb |      161980 ns       122070 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6088794 ns      6103516 ns           64
data |  6 | avx     |      786136 ns       244141 ns           64
data |  6 |     tbb |     1004658 ns      1464844 ns           64
data |  6 | avx tbb |      648511 ns       732422 ns           64
mask |  6 |         |     9116097 ns      9277344 ns           64
mask |  6 | avx     |      796955 ns       732422 ns           64
mask |  6 |     tbb |     2242337 ns      2197266 ns           64
mask |  6 | avx tbb |      643258 ns       488281 ns           64

data | 12 |         |     3150088 ns      3173828 ns           64
data | 12 | avx     |      777548 ns      1220703 ns           64
data | 12 |     tbb |      793456 ns       488281 ns           64
data | 12 | avx tbb |      647553 ns       976562 ns           64
mask | 12 |         |     9172820 ns      9277344 ns           64
mask | 12 | avx     |      795623 ns       488281 ns           64
mask | 12 |     tbb |     2227208 ns      2441406 ns           64
mask | 12 | avx tbb |      647367 ns       732422 ns           64

data | 24 |         |     1709203 ns      1953125 ns           64
data | 24 | avx     |      781602 ns       488281 ns           64
data | 24 |     tbb |      711695 ns       732422 ns           64
data | 24 | avx tbb |      648441 ns       488281 ns           64
mask | 24 |         |     9109506 ns      9277344 ns           64
mask | 24 | avx     |      791400 ns      1220703 ns           64
mask | 24 |     tbb |     2114469 ns      1220703 ns           64
mask | 24 | avx tbb |      650080 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24227734 ns     25390625 ns           32
data |  6 | avx     |     3067037 ns      3906250 ns           32
data |  6 |     tbb |     3605084 ns      3906250 ns           32
data |  6 | avx tbb |     2407756 ns      2441406 ns           32
mask |  6 |         |    36019375 ns     36132812 ns           32
mask |  6 | avx     |     3152937 ns      5371094 ns           32
mask |  6 |     tbb |     8459856 ns      6835938 ns           32
mask |  6 | avx tbb |     2427416 ns      2929688 ns           32

data | 12 |         |    12387753 ns     12695312 ns           32
data | 12 | avx     |     3080169 ns      2929688 ns           32
data | 12 |     tbb |     2724797 ns       488281 ns           32
data | 12 | avx tbb |     2411066 ns      1464844 ns           32
mask | 12 |         |    36128916 ns     35644531 ns           32
mask | 12 | avx     |     3147409 ns      3417969 ns           32
mask | 12 |     tbb |     7977616 ns      5859375 ns           32
mask | 12 | avx tbb |     2409272 ns      2441406 ns           32

data | 24 |         |     6557391 ns      5859375 ns           32
data | 24 | avx     |     3105938 ns      3906250 ns           32
data | 24 |     tbb |     2495622 ns      1953125 ns           32
data | 24 | avx tbb |     2409003 ns      2929688 ns           32
mask | 24 |         |    36202359 ns     36132812 ns           32
mask | 24 | avx     |     3316909 ns      1953125 ns           32
mask | 24 |     tbb |     8424603 ns      8300781 ns           32
mask | 24 | avx tbb |     2394522 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96355456 ns     95703125 ns           16
data |  6 | avx     |    12356425 ns     11718750 ns           16
data |  6 |     tbb |    13805463 ns     11718750 ns           16
data |  6 | avx tbb |     9459544 ns      8789062 ns           16
mask |  6 |         |   144402344 ns    144531250 ns           16
mask |  6 | avx     |    13347012 ns     12695312 ns           16
mask |  6 |     tbb |    32107550 ns     27343750 ns           16
mask |  6 | avx tbb |     9456463 ns      8789062 ns           16

data | 12 |         |    49602031 ns     49804688 ns           16
data | 12 | avx     |    12972219 ns     12695312 ns           16
data | 12 |     tbb |    10454725 ns      4882812 ns           16
data | 12 | avx tbb |     9454256 ns      9765625 ns           16
mask | 12 |         |   144659837 ns    146484375 ns           16
mask | 12 | avx     |    12673144 ns     12695312 ns           16
mask | 12 |     tbb |    31503063 ns     23437500 ns           16
mask | 12 | avx tbb |     9721419 ns      7812500 ns           16

data | 24 |         |    26150531 ns     26367188 ns           16
data | 24 | avx     |    12492556 ns     10742188 ns           16
data | 24 |     tbb |     9696338 ns     10742188 ns           16
data | 24 | avx tbb |     9450044 ns      8789062 ns           16
mask | 24 |         |   145552231 ns    147460938 ns           16
mask | 24 | avx     |    13273231 ns     12695312 ns           16
mask | 24 |     tbb |    31103681 ns     26367188 ns           16
mask | 24 | avx tbb |     9442894 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193153825 ns    203125000 ns            8
data |  6 | avx     |    24724337 ns     23437500 ns            8
data |  6 |     tbb |    27485487 ns     19531250 ns            8
data |  6 | avx tbb |    18823725 ns     17578125 ns            8
mask |  6 |         |   289339962 ns    287109375 ns            8
mask |  6 | avx     |    25399400 ns     25390625 ns            8
mask |  6 |     tbb |    63683950 ns     42968750 ns            8
mask |  6 | avx tbb |    18825363 ns     19531250 ns            8

data | 12 |         |    98145287 ns     95703125 ns            8
data | 12 | avx     |    24777712 ns     23437500 ns            8
data | 12 |     tbb |    20780812 ns     15625000 ns            8
data | 12 | avx tbb |    20193262 ns     19531250 ns            8
mask | 12 |         |   288792400 ns    296875000 ns            8
mask | 12 | avx     |    25675537 ns     27343750 ns            8
mask | 12 |     tbb |    66991550 ns     39062500 ns            8
mask | 12 | avx tbb |    18864263 ns     17578125 ns            8

data | 24 |         |    52570487 ns     46875000 ns            8
data | 24 | avx     |    24688300 ns     27343750 ns            8
data | 24 |     tbb |    19189800 ns     19531250 ns            8
data | 24 | avx tbb |    18833550 ns     15625000 ns            8
mask | 24 |         |   289233738 ns    291015625 ns            8
mask | 24 | avx     |    25526288 ns     23437500 ns            8
mask | 24 |     tbb |    67764150 ns     41015625 ns            8
mask | 24 | avx tbb |    18871038 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386326363 ns    386718750 ns            8
data |  6 | avx     |    49640113 ns     52734375 ns            8
data |  6 |     tbb |    55413787 ns     29296875 ns            8
data |  6 | avx tbb |    37493912 ns     37109375 ns            8
mask |  6 |         |   577296125 ns    578125000 ns            8
mask |  6 | avx     |    52719862 ns     52734375 ns            8
mask |  6 |     tbb |   128885212 ns     80078125 ns            8
mask |  6 | avx tbb |    39684075 ns     41015625 ns            8

data | 12 |         |   196243187 ns    197265625 ns            8
data | 12 | avx     |    49573962 ns     48828125 ns            8
data | 12 |     tbb |    42068325 ns     31250000 ns            8
data | 12 | avx tbb |    37433738 ns     37109375 ns            8
mask | 12 |         |   577249937 ns    576171875 ns            8
mask | 12 | avx     |    50766975 ns     52734375 ns            8
mask | 12 |     tbb |   128153413 ns     85937500 ns            8
mask | 12 | avx tbb |    37542738 ns     37109375 ns            8

data | 24 |         |   105098350 ns    103515625 ns            8
data | 24 | avx     |    49602662 ns     50781250 ns            8
data | 24 |     tbb |    38514225 ns     31250000 ns            8
data | 24 | avx tbb |    39729738 ns     29296875 ns            8
mask | 24 |         |   577571888 ns    578125000 ns            8
mask | 24 | avx     |    50897600 ns     52734375 ns            8
mask | 24 |     tbb |   137696775 ns     85937500 ns            8
mask | 24 | avx tbb |    37636637 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771513238 ns    769531250 ns            8
data |  6 | avx     |    98944450 ns     97656250 ns            8
data |  6 |     tbb |   110469213 ns     60546875 ns            8
data |  6 | avx tbb |    75133325 ns     68359375 ns            8
mask |  6 |         |  1153800775 ns   1154296875 ns            8
mask |  6 | avx     |   101822650 ns     99609375 ns            8
mask |  6 |     tbb |   239948100 ns    160156250 ns            8
mask |  6 | avx tbb |    75137975 ns     74218750 ns            8

data | 12 |         |   393045362 ns    390625000 ns            8
data | 12 | avx     |    99429375 ns     99609375 ns            8
data | 12 |     tbb |    83836850 ns     62500000 ns            8
data | 12 | avx tbb |    75207388 ns     76171875 ns            8
mask | 12 |         |  1152835012 ns   1146484375 ns            8
mask | 12 | avx     |   101798800 ns    103515625 ns            8
mask | 12 |     tbb |   268215563 ns    156250000 ns            8
mask | 12 | avx tbb |    75263200 ns     70312500 ns            8

data | 24 |         |   209489550 ns    210937500 ns            8
data | 24 | avx     |    99601612 ns     99609375 ns            8
data | 24 |     tbb |    77888362 ns     58593750 ns            8
data | 24 | avx tbb |    75046613 ns     74218750 ns            8
mask | 24 |         |  1155696638 ns   1156250000 ns            8
mask | 24 | avx     |   101629738 ns    103515625 ns            8
mask | 24 |     tbb |   243429800 ns    183593750 ns            8
mask | 24 | avx tbb |    75332400 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76362 ns        76294 ns         2048
data |  6 |     tbb |       18878 ns        15259 ns         2048
mask |  6 |         |      136581 ns       137329 ns         2048
mask |  6 |     tbb |       39836 ns        38147 ns         2048

data | 12 |         |       39886 ns        45776 ns         2048
data | 12 |     tbb |       13459 ns        15259 ns         2048
mask | 12 |         |      139038 ns       137329 ns         2048
mask | 12 |     tbb |       39998 ns        22888 ns         2048

data | 24 |         |       21013 ns        30518 ns         2048
data | 24 |     tbb |       11088 ns         7629 ns         2048
mask | 24 |         |      134971 ns       137329 ns         2048
mask | 24 |     tbb |       39931 ns        53406 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19225 ns        15259 ns         1024
data |  6 | avx tbb |       20233 ns        0.000 ns         1024
mask |  6 | avx     |       17493 ns        30518 ns         1024
mask |  6 | avx tbb |       15669 ns        15259 ns         1024

data | 12 | avx     |       19268 ns        45776 ns         1024
data | 12 | avx tbb |       15866 ns        0.000 ns         1024
mask | 12 | avx     |       17710 ns        15259 ns         1024
mask | 12 | avx tbb |       15242 ns        30518 ns         1024

data | 24 | avx     |       19209 ns        30518 ns         1024
data | 24 | avx tbb |       16196 ns        0.000 ns         1024
mask | 24 | avx     |       17733 ns        15259 ns         1024
mask | 24 | avx tbb |       15779 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      388194 ns       396729 ns         1024
data |  6 | avx     |       29436 ns        30518 ns         1024
data |  6 |     tbb |       63603 ns        61035 ns         1024
data |  6 | avx tbb |       23190 ns        30518 ns         1024
mask |  6 |         |      685406 ns       686646 ns         1024
mask |  6 | avx     |       26766 ns        30518 ns         1024
mask |  6 |     tbb |      215844 ns       228882 ns         1024
mask |  6 | avx tbb |       22638 ns        15259 ns         1024

data | 12 |         |      192624 ns       167847 ns         1024
data | 12 | avx     |       29851 ns        15259 ns         1024
data | 12 |     tbb |       41148 ns        45776 ns         1024
data | 12 | avx tbb |       23996 ns        30518 ns         1024
mask | 12 |         |      707185 ns       732422 ns         1024
mask | 12 | avx     |       27489 ns        0.000 ns         1024
mask | 12 |     tbb |      217496 ns       244141 ns         1024
mask | 12 | avx tbb |       22540 ns        45776 ns         1024

data | 24 |         |      100391 ns       122070 ns         1024
data | 24 | avx     |       29525 ns        45776 ns         1024
data | 24 |     tbb |       45393 ns        30518 ns         1024
data | 24 | avx tbb |       23509 ns        15259 ns         1024
mask | 24 |         |      692564 ns       732422 ns         1024
mask | 24 | avx     |       27125 ns        0.000 ns         1024
mask | 24 |     tbb |      217125 ns       213623 ns         1024
mask | 24 | avx tbb |       22246 ns        0.000 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1518662 ns      1556396 ns          512
data |  6 | avx     |      190702 ns       183105 ns          512
data |  6 |     tbb |      315540 ns       396729 ns          512
data |  6 | avx tbb |      164280 ns       152588 ns          512
mask |  6 |         |     2724569 ns      2685547 ns          512
mask |  6 | avx     |      196969 ns       152588 ns          512
mask |  6 |     tbb |      680675 ns       762939 ns          512
mask |  6 | avx tbb |      161882 ns       122070 ns          512

data | 12 |         |      778487 ns       701904 ns          512
data | 12 | avx     |      190787 ns       152588 ns          512
data | 12 |     tbb |      240020 ns       152588 ns          512
data | 12 | avx tbb |      162968 ns       183105 ns          512
mask | 12 |         |     2718711 ns      2777100 ns          512
mask | 12 | avx     |      196863 ns       213623 ns          512
mask | 12 |     tbb |      686298 ns       701904 ns          512
mask | 12 | avx tbb |      161324 ns       183105 ns          512

data | 24 |         |      414363 ns       427246 ns          512
data | 24 | avx     |      190811 ns       152588 ns          512
data | 24 |     tbb |      209558 ns       183105 ns          512
data | 24 | avx tbb |      164328 ns       152588 ns          512
mask | 24 |         |     2717594 ns      2777100 ns          512
mask | 24 | avx     |      198309 ns       213623 ns          512
mask | 24 |     tbb |      684375 ns       640869 ns          512
mask | 24 | avx tbb |      162504 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6083702 ns      5859375 ns           64
data |  6 | avx     |      768303 ns       732422 ns           64
data |  6 |     tbb |     1005745 ns      1464844 ns           64
data |  6 | avx tbb |      649767 ns       488281 ns           64
mask |  6 |         |    10954298 ns     10498047 ns           64
mask |  6 | avx     |      790516 ns       732422 ns           64
mask |  6 |     tbb |     2538644 ns      2929688 ns           64
mask |  6 | avx tbb |      646938 ns       976562 ns           64

data | 12 |         |     3132881 ns      3173828 ns           64
data | 12 | avx     |      777373 ns       976562 ns           64
data | 12 |     tbb |      791844 ns       732422 ns           64
data | 12 | avx tbb |      646588 ns       732422 ns           64
mask | 12 |         |    11023652 ns     10742188 ns           64
mask | 12 | avx     |      797470 ns       488281 ns           64
mask | 12 |     tbb |     2568598 ns      2685547 ns           64
mask | 12 | avx tbb |      645069 ns       732422 ns           64

data | 24 |         |     1688570 ns      1708984 ns           64
data | 24 | avx     |      768175 ns       488281 ns           64
data | 24 |     tbb |      714797 ns        0.000 ns           64
data | 24 | avx tbb |      650478 ns       976562 ns           64
mask | 24 |         |    10962820 ns     11718750 ns           64
mask | 24 | avx     |      796003 ns       732422 ns           64
mask | 24 |     tbb |     2562244 ns      2441406 ns           64
mask | 24 | avx tbb |      644377 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24219462 ns     24414062 ns           32
data |  6 | avx     |     3079047 ns      2441406 ns           32
data |  6 |     tbb |     3540828 ns      3417969 ns           32
data |  6 | avx tbb |     2405713 ns      1953125 ns           32
mask |  6 |         |    43420822 ns     43945312 ns           32
mask |  6 | avx     |     3178397 ns      3417969 ns           32
mask |  6 |     tbb |     9690138 ns      7812500 ns           32
mask |  6 | avx tbb |     2407847 ns      2929688 ns           32

data | 12 |         |    12295453 ns     12695312 ns           32
data | 12 | avx     |     3078400 ns        0.000 ns           32
data | 12 |     tbb |     2713412 ns      3417969 ns           32
data | 12 | avx tbb |     2405847 ns      1953125 ns           32
mask | 12 |         |    43604875 ns     43945312 ns           32
mask | 12 | avx     |     3194706 ns      1953125 ns           32
mask | 12 |     tbb |    10053394 ns     10253906 ns           32
mask | 12 | avx tbb |     2408347 ns      2441406 ns           32

data | 24 |         |     6602831 ns      5859375 ns           32
data | 24 | avx     |     3439231 ns      5371094 ns           32
data | 24 |     tbb |     2507800 ns      1464844 ns           32
data | 24 | avx tbb |     2413550 ns      2441406 ns           32
mask | 24 |         |    43321069 ns     44921875 ns           32
mask | 24 | avx     |     3163144 ns      4394531 ns           32
mask | 24 |     tbb |     9683887 ns      9765625 ns           32
mask | 24 | avx tbb |     2418613 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96556581 ns     95703125 ns           16
data |  6 | avx     |    13114031 ns     13671875 ns           16
data |  6 |     tbb |    13858463 ns     12695312 ns           16
data |  6 | avx tbb |     9471375 ns      9765625 ns           16
mask |  6 |         |   172985444 ns    175781250 ns           16
mask |  6 | avx     |    12760612 ns     13671875 ns           16
mask |  6 |     tbb |    35947650 ns     23437500 ns           16
mask |  6 | avx tbb |     9474237 ns      9765625 ns           16

data | 12 |         |    49508638 ns     48828125 ns           16
data | 12 | avx     |    13025200 ns     15625000 ns           16
data | 12 |     tbb |    10444287 ns      6835938 ns           16
data | 12 | avx tbb |     9469775 ns      9765625 ns           16
mask | 12 |         |   173030225 ns    172851562 ns           16
mask | 12 | avx     |    13240181 ns     13671875 ns           16
mask | 12 |     tbb |    36053738 ns     24414062 ns           16
mask | 12 | avx tbb |     9438519 ns      7812500 ns           16

data | 24 |         |    26228356 ns     27343750 ns           16
data | 24 | avx     |    12415637 ns     13671875 ns           16
data | 24 |     tbb |     9631544 ns      8789062 ns           16
data | 24 | avx tbb |     9456894 ns      9765625 ns           16
mask | 24 |         |   173017381 ns    172851562 ns           16
mask | 24 | avx     |    13027169 ns     12695312 ns           16
mask | 24 |     tbb |    36035731 ns     25390625 ns           16
mask | 24 | avx tbb |     9803613 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192812650 ns    189453125 ns            8
data |  6 | avx     |    24634800 ns     23437500 ns            8
data |  6 |     tbb |    27548563 ns     17578125 ns            8
data |  6 | avx tbb |    20234475 ns     21484375 ns            8
mask |  6 |         |   346327788 ns    345703125 ns            8
mask |  6 | avx     |    25551387 ns     27343750 ns            8
mask |  6 |     tbb |    75918688 ns     46875000 ns            8
mask |  6 | avx tbb |    18820850 ns     23437500 ns            8

data | 12 |         |    99566812 ns    103515625 ns            8
data | 12 | avx     |    24769338 ns     23437500 ns            8
data | 12 |     tbb |    20786525 ns     17578125 ns            8
data | 12 | avx tbb |    18837075 ns     19531250 ns            8
mask | 12 |         |   346529350 ns    347656250 ns            8
mask | 12 | avx     |    25679600 ns     25390625 ns            8
mask | 12 |     tbb |    76182888 ns     48828125 ns            8
mask | 12 | avx tbb |    18899888 ns     15625000 ns            8

data | 24 |         |    52612138 ns     56640625 ns            8
data | 24 | avx     |    26862900 ns     25390625 ns            8
data | 24 |     tbb |    19253050 ns     15625000 ns            8
data | 24 | avx tbb |    18838562 ns     19531250 ns            8
mask | 24 |         |   346126900 ns    343750000 ns            8
mask | 24 | avx     |    25430625 ns     25390625 ns            8
mask | 24 |     tbb |    75713012 ns     48828125 ns            8
mask | 24 | avx tbb |    18828138 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385504087 ns    382812500 ns            8
data |  6 | avx     |    50058100 ns     50781250 ns            8
data |  6 |     tbb |    54993050 ns     35156250 ns            8
data |  6 | avx tbb |    37475375 ns     35156250 ns            8
mask |  6 |         |   691111437 ns    689453125 ns            8
mask |  6 | avx     |    50905263 ns     52734375 ns            8
mask |  6 |     tbb |   157527825 ns     99609375 ns            8
mask |  6 | avx tbb |    37547038 ns     37109375 ns            8

data | 12 |         |   196312838 ns    197265625 ns            8
data | 12 | avx     |    49872288 ns     48828125 ns            8
data | 12 |     tbb |    42190462 ns     31250000 ns            8
data | 12 | avx tbb |    37507162 ns     39062500 ns            8
mask | 12 |         |   691457550 ns    691406250 ns            8
mask | 12 | avx     |    53233663 ns     52734375 ns            8
mask | 12 |     tbb |   146200625 ns     95703125 ns            8
mask | 12 | avx tbb |    39372037 ns     39062500 ns            8

data | 24 |         |   105129287 ns    105468750 ns            8
data | 24 | avx     |    50006225 ns     50781250 ns            8
data | 24 |     tbb |    40532187 ns     31250000 ns            8
data | 24 | avx tbb |    37522625 ns     37109375 ns            8
mask | 24 |         |   691403550 ns    691406250 ns            8
mask | 24 | avx     |    51029988 ns     50781250 ns            8
mask | 24 |     tbb |   143720988 ns     93750000 ns            8
mask | 24 | avx tbb |    37611188 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771545612 ns    771484375 ns            8
data |  6 | avx     |    99818762 ns     99609375 ns            8
data |  6 |     tbb |   110525163 ns     56640625 ns            8
data |  6 | avx tbb |    75315125 ns     70312500 ns            8
mask |  6 |         |  1383777325 ns   1388671875 ns            8
mask |  6 | avx     |   101886687 ns    101562500 ns            8
mask |  6 |     tbb |   297900188 ns    187500000 ns            8
mask |  6 | avx tbb |    75139837 ns     70312500 ns            8

data | 12 |         |   393405888 ns    392578125 ns            8
data | 12 | avx     |    99951500 ns     99609375 ns            8
data | 12 |     tbb |    83479038 ns     56640625 ns            8
data | 12 | avx tbb |    76543863 ns     56640625 ns            8
mask | 12 |         |  1383708362 ns   1384765625 ns            8
mask | 12 | avx     |   102641850 ns    103515625 ns            8
mask | 12 |     tbb |   298482800 ns    191406250 ns            8
mask | 12 | avx tbb |    75213875 ns     70312500 ns            8

data | 24 |         |   209996275 ns    208984375 ns            8
data | 24 | avx     |   100101488 ns    101562500 ns            8
data | 24 |     tbb |    77124213 ns     60546875 ns            8
data | 24 | avx tbb |    76270175 ns     72265625 ns            8
mask | 24 |         |  1383116525 ns   1384765625 ns            8
mask | 24 | avx     |   103015787 ns    103515625 ns            8
mask | 24 |     tbb |   293263625 ns    189453125 ns            8
mask | 24 | avx tbb |    75328188 ns     66406250 ns            8
```

</details>

