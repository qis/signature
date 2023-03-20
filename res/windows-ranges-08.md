# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       84055 ns        91553 ns         2048
data |  6 |     tbb |       24930 ns         7629 ns         2048
mask |  6 |         |      127725 ns       129700 ns         2048
mask |  6 |     tbb |       49872 ns        45776 ns         2048

data | 12 |         |       44796 ns        45776 ns         2048
data | 12 |     tbb |       14511 ns        22888 ns         2048
mask | 12 |         |      125379 ns       122070 ns         2048
mask | 12 |     tbb |       39286 ns        45776 ns         2048

data | 24 |         |       23306 ns        22888 ns         2048
data | 24 |     tbb |       14886 ns        15259 ns         2048
mask | 24 |         |      125458 ns       129700 ns         2048
mask | 24 |     tbb |       55550 ns        61035 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17141 ns        30518 ns         1024
data |  6 | avx tbb |       17493 ns        15259 ns         1024
mask |  6 | avx     |       18857 ns        15259 ns         1024
mask |  6 | avx tbb |       16592 ns        30518 ns         1024

data | 12 | avx     |       17171 ns        15259 ns         1024
data | 12 | avx tbb |       16591 ns        30518 ns         1024
mask | 12 | avx     |       18882 ns        30518 ns         1024
mask | 12 | avx tbb |       15964 ns        15259 ns         1024

data | 24 | avx     |       17171 ns        15259 ns         1024
data | 24 | avx tbb |       18027 ns        0.000 ns         1024
mask | 24 | avx     |       18924 ns        30518 ns         1024
mask | 24 | avx tbb |       17933 ns        45776 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      430490 ns       457764 ns         1024
data |  6 | avx     |       26145 ns        0.000 ns         1024
data |  6 |     tbb |      118949 ns       122070 ns         1024
data |  6 | avx tbb |       25157 ns        45776 ns         1024
mask |  6 |         |      627285 ns       640869 ns         1024
mask |  6 | avx     |       29416 ns        15259 ns         1024
mask |  6 |     tbb |      226496 ns       244141 ns         1024
mask |  6 | avx tbb |       25018 ns        30518 ns         1024

data | 12 |         |      213413 ns       228882 ns         1024
data | 12 | avx     |       26414 ns        45776 ns         1024
data | 12 |     tbb |       61640 ns        76294 ns         1024
data | 12 | avx tbb |       24465 ns        45776 ns         1024
mask | 12 |         |      622931 ns       640869 ns         1024
mask | 12 | avx     |       29165 ns        15259 ns         1024
mask | 12 |     tbb |      210776 ns       213623 ns         1024
mask | 12 | avx tbb |       23593 ns        15259 ns         1024

data | 24 |         |      110326 ns        76294 ns         1024
data | 24 | avx     |       26237 ns        45776 ns         1024
data | 24 |     tbb |       47429 ns        30518 ns         1024
data | 24 | avx tbb |       25765 ns        45776 ns         1024
mask | 24 |         |      622401 ns       640869 ns         1024
mask | 24 | avx     |       29402 ns        0.000 ns         1024
mask | 24 |     tbb |      227971 ns       274658 ns         1024
mask | 24 | avx tbb |       25601 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1675535 ns      1708984 ns          512
data |  6 | avx     |      194516 ns       213623 ns          512
data |  6 |     tbb |      330897 ns       305176 ns          512
data |  6 | avx tbb |      167500 ns       213623 ns          512
mask |  6 |         |     2552860 ns      2471924 ns          512
mask |  6 | avx     |      303691 ns       366211 ns          512
mask |  6 |     tbb |      741663 ns       823975 ns          512
mask |  6 | avx tbb |      164513 ns       183105 ns          512

data | 12 |         |      877489 ns       976562 ns          512
data | 12 | avx     |      195102 ns       183105 ns          512
data | 12 |     tbb |      257506 ns       305176 ns          512
data | 12 | avx tbb |      166090 ns       122070 ns          512
mask | 12 |         |     2509386 ns      2471924 ns          512
mask | 12 | avx     |      196503 ns       274658 ns          512
mask | 12 |     tbb |      672257 ns       610352 ns          512
mask | 12 | avx tbb |      162919 ns       213623 ns          512

data | 24 |         |      452925 ns       488281 ns          512
data | 24 | avx     |      194151 ns       274658 ns          512
data | 24 |     tbb |      225683 ns       274658 ns          512
data | 24 | avx tbb |      176554 ns       183105 ns          512
mask | 24 |         |     2502510 ns      2441406 ns          512
mask | 24 | avx     |      196030 ns       274658 ns          512
mask | 24 |     tbb |      750671 ns       732422 ns          512
mask | 24 | avx tbb |      161152 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6829934 ns      6591797 ns           64
data |  6 | avx     |      787639 ns       976562 ns           64
data |  6 |     tbb |     1065481 ns      1708984 ns           64
data |  6 | avx tbb |      652395 ns       488281 ns           64
mask |  6 |         |    10069711 ns     10253906 ns           64
mask |  6 | avx     |      785784 ns       976562 ns           64
mask |  6 |     tbb |     2726914 ns      2929688 ns           64
mask |  6 | avx tbb |      647205 ns       488281 ns           64

data | 12 |         |     3486853 ns      3662109 ns           64
data | 12 | avx     |      796402 ns       732422 ns           64
data | 12 |     tbb |      810469 ns       976562 ns           64
data | 12 | avx tbb |      650695 ns       488281 ns           64
mask | 12 |         |    10002009 ns      9765625 ns           64
mask | 12 | avx     |      795581 ns      1220703 ns           64
mask | 12 |     tbb |     2309795 ns      2685547 ns           64
mask | 12 | avx tbb |      648675 ns       976562 ns           64

data | 24 |         |     1865852 ns      1953125 ns           64
data | 24 | avx     |      791823 ns       732422 ns           64
data | 24 |     tbb |      706753 ns       976562 ns           64
data | 24 | avx tbb |      651127 ns       488281 ns           64
mask | 24 |         |    10072695 ns     10498047 ns           64
mask | 24 | avx     |      786108 ns       976562 ns           64
mask | 24 |     tbb |     2790505 ns      2197266 ns           64
mask | 24 | avx tbb |      643055 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26786716 ns     27343750 ns           32
data |  6 | avx     |     3138691 ns      1464844 ns           32
data |  6 |     tbb |     3822538 ns      3906250 ns           32
data |  6 | avx tbb |     2386837 ns      2441406 ns           32
mask |  6 |         |    39873587 ns     41015625 ns           32
mask |  6 | avx     |     3132997 ns      3906250 ns           32
mask |  6 |     tbb |    10191847 ns      9765625 ns           32
mask |  6 | avx tbb |     2484450 ns      2929688 ns           32

data | 12 |         |    13679141 ns     14160156 ns           32
data | 12 | avx     |     3182175 ns      3417969 ns           32
data | 12 |     tbb |     2822641 ns      1953125 ns           32
data | 12 | avx tbb |     2422809 ns      2441406 ns           32
mask | 12 |         |    39788644 ns     41015625 ns           32
mask | 12 | avx     |     3190306 ns       488281 ns           32
mask | 12 |     tbb |     8833203 ns      9277344 ns           32
mask | 12 | avx tbb |     2403312 ns      2441406 ns           32

data | 24 |         |     7271950 ns      6835938 ns           32
data | 24 | avx     |     3172675 ns      2441406 ns           32
data | 24 |     tbb |     2538734 ns      2441406 ns           32
data | 24 | avx tbb |     2377537 ns      1464844 ns           32
mask | 24 |         |    39879800 ns     41015625 ns           32
mask | 24 | avx     |     3130125 ns      7324219 ns           32
mask | 24 |     tbb |    10799647 ns      3417969 ns           32
mask | 24 | avx tbb |     2373094 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106395719 ns    106445312 ns           16
data |  6 | avx     |    13323375 ns     14648438 ns           16
data |  6 |     tbb |    15187225 ns     14648438 ns           16
data |  6 | avx tbb |     9345838 ns      7812500 ns           16
mask |  6 |         |   159343544 ns    160156250 ns           16
mask |  6 | avx     |    12834463 ns     11718750 ns           16
mask |  6 |     tbb |    39468731 ns     34179688 ns           16
mask |  6 | avx tbb |     9371906 ns      9765625 ns           16

data | 12 |         |    54252763 ns     53710938 ns           16
data | 12 | avx     |    12627712 ns     12695312 ns           16
data | 12 |     tbb |    10865069 ns     15625000 ns           16
data | 12 | avx tbb |     9392300 ns      8789062 ns           16
mask | 12 |         |   158890994 ns    159179688 ns           16
mask | 12 | avx     |    12652062 ns     13671875 ns           16
mask | 12 |     tbb |    35083612 ns     34179688 ns           16
mask | 12 | avx tbb |     9385769 ns      9765625 ns           16

data | 24 |         |    28445181 ns     26367188 ns           16
data | 24 | avx     |    12782606 ns     11718750 ns           16
data | 24 |     tbb |     9799156 ns      8789062 ns           16
data | 24 | avx tbb |     9332975 ns      9765625 ns           16
mask | 24 |         |   158632394 ns    159179688 ns           16
mask | 24 | avx     |    12623200 ns      9765625 ns           16
mask | 24 |     tbb |    41045769 ns     22460938 ns           16
mask | 24 | avx tbb |     9330281 ns     11718750 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212989700 ns    214843750 ns            8
data |  6 | avx     |    25614125 ns     25390625 ns            8
data |  6 |     tbb |    29701962 ns     27343750 ns            8
data |  6 | avx tbb |    18574500 ns     17578125 ns            8
mask |  6 |         |   317464338 ns    320312500 ns            8
mask |  6 | avx     |    25371950 ns     25390625 ns            8
mask |  6 |     tbb |    77715612 ns     72265625 ns            8
mask |  6 | avx tbb |    18726437 ns     19531250 ns            8

data | 12 |         |   110092963 ns    111328125 ns            8
data | 12 | avx     |    27584100 ns     27343750 ns            8
data | 12 |     tbb |    22380763 ns     25390625 ns            8
data | 12 | avx tbb |    18693913 ns     19531250 ns            8
mask | 12 |         |   318041837 ns    316406250 ns            8
mask | 12 | avx     |    25361513 ns     27343750 ns            8
mask | 12 |     tbb |    73150075 ns     70312500 ns            8
mask | 12 | avx tbb |    18683900 ns     15625000 ns            8

data | 24 |         |    58733363 ns     58593750 ns            8
data | 24 | avx     |    25233412 ns     27343750 ns            8
data | 24 |     tbb |    19644775 ns     19531250 ns            8
data | 24 | avx tbb |    18466687 ns     15625000 ns            8
mask | 24 |         |   317475500 ns    320312500 ns            8
mask | 24 | avx     |    25305725 ns     23437500 ns            8
mask | 24 |     tbb |    80507300 ns     58593750 ns            8
mask | 24 | avx tbb |    18728663 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425880950 ns    425781250 ns            8
data |  6 | avx     |    50450212 ns     50781250 ns            8
data |  6 |     tbb |    58929038 ns     58593750 ns            8
data |  6 | avx tbb |    36980362 ns     35156250 ns            8
mask |  6 |         |   635336438 ns    634765625 ns            8
mask |  6 | avx     |    55352525 ns     54687500 ns            8
mask |  6 |     tbb |   148044012 ns    119140625 ns            8
mask |  6 | avx tbb |    37076712 ns     35156250 ns            8

data | 12 |         |   221476263 ns    222656250 ns            8
data | 12 | avx     |    55014587 ns     52734375 ns            8
data | 12 |     tbb |    43559487 ns     44921875 ns            8
data | 12 | avx tbb |    37351600 ns     37109375 ns            8
mask | 12 |         |   634498437 ns    632812500 ns            8
mask | 12 | avx     |    50634863 ns     50781250 ns            8
mask | 12 |     tbb |   132270138 ns    134765625 ns            8
mask | 12 | avx tbb |    41433625 ns     41015625 ns            8

data | 24 |         |   113368538 ns    111328125 ns            8
data | 24 | avx     |    51123113 ns     48828125 ns            8
data | 24 |     tbb |    38930100 ns     37109375 ns            8
data | 24 | avx tbb |    36849575 ns     33203125 ns            8
mask | 24 |         |   636056800 ns    638671875 ns            8
mask | 24 | avx     |    53456913 ns     52734375 ns            8
mask | 24 |     tbb |   158431075 ns    111328125 ns            8
mask | 24 | avx tbb |    36911688 ns     33203125 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   849562387 ns    849609375 ns            8
data |  6 | avx     |   100927737 ns    101562500 ns            8
data |  6 |     tbb |   118522862 ns    121093750 ns            8
data |  6 | avx tbb |    73923725 ns     72265625 ns            8
mask |  6 |         |  1271016325 ns   1269531250 ns            8
mask |  6 | avx     |   101331338 ns    103515625 ns            8
mask |  6 |     tbb |   287322287 ns    234375000 ns            8
mask |  6 | avx tbb |    74289450 ns     68359375 ns            8

data | 12 |         |   437858088 ns    441406250 ns            8
data | 12 | avx     |   100969862 ns    101562500 ns            8
data | 12 |     tbb |    86958175 ns     83984375 ns            8
data | 12 | avx tbb |    74847988 ns     76171875 ns            8
mask | 12 |         |  1269019437 ns   1267578125 ns            8
mask | 12 | avx     |   101234487 ns    105468750 ns            8
mask | 12 |     tbb |   269631650 ns    265625000 ns            8
mask | 12 | avx tbb |    74691900 ns     72265625 ns            8

data | 24 |         |   231949000 ns    230468750 ns            8
data | 24 | avx     |   101666450 ns     99609375 ns            8
data | 24 |     tbb |    77955363 ns     78125000 ns            8
data | 24 | avx tbb |    81225938 ns     78125000 ns            8
mask | 24 |         |  1269396750 ns   1269531250 ns            8
mask | 24 | avx     |   102684512 ns    105468750 ns            8
mask | 24 |     tbb |   304596362 ns    263671875 ns            8
mask | 24 | avx tbb |    73697775 ns     66406250 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       78120 ns        83923 ns         2048
data |  6 |     tbb |       24046 ns        30518 ns         2048
mask |  6 |         |      116195 ns       122070 ns         2048
mask |  6 |     tbb |       46461 ns        45776 ns         2048

data | 12 |         |       40905 ns        45776 ns         2048
data | 12 |     tbb |       13891 ns        22888 ns         2048
mask | 12 |         |      114289 ns       122070 ns         2048
mask | 12 |     tbb |       36177 ns        45776 ns         2048

data | 24 |         |       21259 ns        30518 ns         2048
data | 24 |     tbb |       14525 ns         7629 ns         2048
mask | 24 |         |      114178 ns       122070 ns         2048
mask | 24 |     tbb |       55340 ns        68665 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18931 ns        15259 ns         1024
data |  6 | avx tbb |       17625 ns        15259 ns         1024
mask |  6 | avx     |       17929 ns        15259 ns         1024
mask |  6 | avx tbb |       16467 ns        45776 ns         1024

data | 12 | avx     |       18952 ns        30518 ns         1024
data | 12 | avx tbb |       16525 ns        15259 ns         1024
mask | 12 | avx     |       17699 ns        0.000 ns         1024
mask | 12 | avx tbb |       15753 ns        15259 ns         1024

data | 24 | avx     |       18933 ns        30518 ns         1024
data | 24 | avx tbb |       19267 ns        15259 ns         1024
mask | 24 | avx     |       17935 ns        45776 ns         1024
mask | 24 | avx tbb |       17353 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      387202 ns       396729 ns         1024
data |  6 | avx     |       28912 ns        45776 ns         1024
data |  6 |     tbb |      102894 ns        61035 ns         1024
data |  6 | avx tbb |       25483 ns        45776 ns         1024
mask |  6 |         |      567623 ns       564575 ns         1024
mask |  6 | avx     |       27528 ns        45776 ns         1024
mask |  6 |     tbb |      204356 ns       198364 ns         1024
mask |  6 | avx tbb |       24472 ns        15259 ns         1024

data | 12 |         |      198834 ns       152588 ns         1024
data | 12 | avx     |       28968 ns        15259 ns         1024
data | 12 |     tbb |       60089 ns        30518 ns         1024
data | 12 | avx tbb |       24821 ns        15259 ns         1024
mask | 12 |         |      567482 ns       579834 ns         1024
mask | 12 | avx     |       27265 ns        0.000 ns         1024
mask | 12 |     tbb |      197148 ns       213623 ns         1024
mask | 12 | avx tbb |       23667 ns        45776 ns         1024

data | 24 |         |       99056 ns        91553 ns         1024
data | 24 | avx     |       29195 ns        30518 ns         1024
data | 24 |     tbb |       59504 ns        45776 ns         1024
data | 24 | avx tbb |       26219 ns        15259 ns         1024
mask | 24 |         |      567701 ns       595093 ns         1024
mask | 24 | avx     |       27351 ns        30518 ns         1024
mask | 24 |     tbb |      214741 ns       228882 ns         1024
mask | 24 | avx tbb |       24932 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1521677 ns      1525879 ns          512
data |  6 | avx     |      191894 ns       213623 ns          512
data |  6 |     tbb |      325029 ns       366211 ns          512
data |  6 | avx tbb |      170980 ns       183105 ns          512
mask |  6 |         |     2273288 ns      2319336 ns          512
mask |  6 | avx     |      198626 ns       244141 ns          512
mask |  6 |     tbb |      688485 ns       762939 ns          512
mask |  6 | avx tbb |      166941 ns       152588 ns          512

data | 12 |         |      797007 ns       701904 ns          512
data | 12 | avx     |      191446 ns       244141 ns          512
data | 12 |     tbb |      250556 ns       213623 ns          512
data | 12 | avx tbb |      166169 ns       244141 ns          512
mask | 12 |         |     2269348 ns      2227783 ns          512
mask | 12 | avx     |      198347 ns       244141 ns          512
mask | 12 |     tbb |      603194 ns       427246 ns          512
mask | 12 | avx tbb |      160785 ns       183105 ns          512

data | 24 |         |      416039 ns       366211 ns          512
data | 24 | avx     |      190781 ns       122070 ns          512
data | 24 |     tbb |      209481 ns       274658 ns          512
data | 24 | avx tbb |      173349 ns       213623 ns          512
mask | 24 |         |     2269613 ns      2349854 ns          512
mask | 24 | avx     |      197893 ns       244141 ns          512
mask | 24 |     tbb |      688421 ns       610352 ns          512
mask | 24 | avx tbb |      165287 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6227953 ns      5859375 ns           64
data |  6 | avx     |      780292 ns      1220703 ns           64
data |  6 |     tbb |      966436 ns      1220703 ns           64
data |  6 | avx tbb |      651372 ns       732422 ns           64
mask |  6 |         |     9161009 ns      9033203 ns           64
mask |  6 | avx     |      784656 ns       976562 ns           64
mask |  6 |     tbb |     2451748 ns      2197266 ns           64
mask |  6 | avx tbb |      646430 ns       488281 ns           64

data | 12 |         |     3152169 ns      3417969 ns           64
data | 12 | avx     |      772766 ns       976562 ns           64
data | 12 |     tbb |      792844 ns       732422 ns           64
data | 12 | avx tbb |      654878 ns       976562 ns           64
mask | 12 |         |     9097664 ns      9521484 ns           64
mask | 12 | avx     |      792233 ns      1220703 ns           64
mask | 12 |     tbb |     2181923 ns      2197266 ns           64
mask | 12 | avx tbb |      651931 ns       488281 ns           64

data | 24 |         |     1681153 ns      1464844 ns           64
data | 24 | avx     |      774003 ns       488281 ns           64
data | 24 |     tbb |      734650 ns       732422 ns           64
data | 24 | avx tbb |      652225 ns       244141 ns           64
mask | 24 |         |     9122547 ns      9521484 ns           64
mask | 24 | avx     |      792384 ns       488281 ns           64
mask | 24 |     tbb |     2554173 ns      2685547 ns           64
mask | 24 | avx tbb |      645352 ns       976562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24235219 ns     23925781 ns           32
data |  6 | avx     |     3120741 ns      4394531 ns           32
data |  6 |     tbb |     3496972 ns      3906250 ns           32
data |  6 | avx tbb |     2386500 ns      2441406 ns           32
mask |  6 |         |    36418966 ns     35156250 ns           32
mask |  6 | avx     |     3138741 ns      4394531 ns           32
mask |  6 |     tbb |     9326059 ns      9765625 ns           32
mask |  6 | avx tbb |     2386784 ns      1953125 ns           32

data | 12 |         |    12406050 ns     12207031 ns           32
data | 12 | avx     |     3073988 ns      2929688 ns           32
data | 12 |     tbb |     2740869 ns        0.000 ns           32
data | 12 | avx tbb |     2412263 ns      1953125 ns           32
mask | 12 |         |    36150997 ns     36132812 ns           32
mask | 12 | avx     |     3162222 ns      3906250 ns           32
mask | 12 |     tbb |     8106275 ns      6835938 ns           32
mask | 12 | avx tbb |     2398062 ns      1953125 ns           32

data | 24 |         |     6698028 ns      5371094 ns           32
data | 24 | avx     |     3077016 ns      7812500 ns           32
data | 24 |     tbb |     2636381 ns      1953125 ns           32
data | 24 | avx tbb |     2365750 ns      2441406 ns           32
mask | 24 |         |    36122547 ns     36132812 ns           32
mask | 24 | avx     |     3196772 ns      1464844 ns           32
mask | 24 |     tbb |     9816234 ns      7812500 ns           32
mask | 24 | avx tbb |     2377056 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96379081 ns     96679688 ns           16
data |  6 | avx     |    12402163 ns     12695312 ns           16
data |  6 |     tbb |    13545300 ns     13671875 ns           16
data |  6 | avx tbb |     9347287 ns      8789062 ns           16
mask |  6 |         |   144222056 ns    140625000 ns           16
mask |  6 | avx     |    12632331 ns     10742188 ns           16
mask |  6 |     tbb |    35481719 ns     29296875 ns           16
mask |  6 | avx tbb |     9399906 ns      9765625 ns           16

data | 12 |         |    49846031 ns     50781250 ns           16
data | 12 | avx     |    12388050 ns     10742188 ns           16
data | 12 |     tbb |    10521075 ns      8789062 ns           16
data | 12 | avx tbb |     9399375 ns     11718750 ns           16
mask | 12 |         |   144361556 ns    148437500 ns           16
mask | 12 | avx     |    13232506 ns     14648438 ns           16
mask | 12 |     tbb |    32915369 ns     28320312 ns           16
mask | 12 | avx tbb |     9410038 ns      7812500 ns           16

data | 24 |         |    26599481 ns     27343750 ns           16
data | 24 | avx     |    12389094 ns     10742188 ns           16
data | 24 |     tbb |     9816325 ns     10742188 ns           16
data | 24 | avx tbb |     9792412 ns      7812500 ns           16
mask | 24 |         |   144587988 ns    143554688 ns           16
mask | 24 | avx     |    12714350 ns     13671875 ns           16
mask | 24 |     tbb |    36592044 ns     24414062 ns           16
mask | 24 | avx tbb |     9315194 ns     11718750 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193253363 ns    199218750 ns            8
data |  6 | avx     |    24829662 ns     23437500 ns            8
data |  6 |     tbb |    27027875 ns     27343750 ns            8
data |  6 | avx tbb |    18645587 ns     17578125 ns            8
mask |  6 |         |   288669325 ns    281250000 ns            8
mask |  6 | avx     |    25293525 ns     25390625 ns            8
mask |  6 |     tbb |    71384538 ns     58593750 ns            8
mask |  6 | avx tbb |    18728900 ns     17578125 ns            8

data | 12 |         |   101386138 ns    101562500 ns            8
data | 12 | avx     |    24896600 ns     25390625 ns            8
data | 12 |     tbb |    22540663 ns     23437500 ns            8
data | 12 | avx tbb |    18695388 ns     17578125 ns            8
mask | 12 |         |   292678488 ns    291015625 ns            8
mask | 12 | avx     |    25583325 ns     23437500 ns            8
mask | 12 |     tbb |    69641212 ns     68359375 ns            8
mask | 12 | avx tbb |    18789900 ns     19531250 ns            8

data | 24 |         |    52301338 ns     54687500 ns            8
data | 24 | avx     |    26039425 ns     23437500 ns            8
data | 24 |     tbb |    19503338 ns     19531250 ns            8
data | 24 | avx tbb |    18924775 ns     21484375 ns            8
mask | 24 |         |   289126763 ns    283203125 ns            8
mask | 24 | avx     |    27705087 ns     25390625 ns            8
mask | 24 |     tbb |    73363038 ns     56640625 ns            8
mask | 24 | avx tbb |    18562387 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385454250 ns    384765625 ns            8
data |  6 | avx     |    49994000 ns     48828125 ns            8
data |  6 |     tbb |    58002575 ns     56640625 ns            8
data |  6 | avx tbb |    40189013 ns     35156250 ns            8
mask |  6 |         |   577376550 ns    578125000 ns            8
mask |  6 | avx     |    51131225 ns     50781250 ns            8
mask |  6 |     tbb |   129375000 ns    109375000 ns            8
mask |  6 | avx tbb |    37397238 ns     31250000 ns            8

data | 12 |         |   199458100 ns    199218750 ns            8
data | 12 | avx     |    49394175 ns     46875000 ns            8
data | 12 |     tbb |    45383187 ns     48828125 ns            8
data | 12 | avx tbb |    37385850 ns     37109375 ns            8
mask | 12 |         |   577618600 ns    576171875 ns            8
mask | 12 | avx     |    50518287 ns     50781250 ns            8
mask | 12 |     tbb |   129048200 ns    119140625 ns            8
mask | 12 | avx tbb |    39143800 ns     37109375 ns            8

data | 24 |         |   108941763 ns    109375000 ns            8
data | 24 | avx     |    49442812 ns     52734375 ns            8
data | 24 |     tbb |    38802075 ns     39062500 ns            8
data | 24 | avx tbb |    36847563 ns     35156250 ns            8
mask | 24 |         |   577513225 ns    576171875 ns            8
mask | 24 | avx     |    55489363 ns     52734375 ns            8
mask | 24 |     tbb |   140411087 ns    107421875 ns            8
mask | 24 | avx tbb |    36892025 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771141425 ns    773437500 ns            8
data |  6 | avx     |    99074362 ns     97656250 ns            8
data |  6 |     tbb |   108194663 ns    109375000 ns            8
data |  6 | avx tbb |    74323850 ns     72265625 ns            8
mask |  6 |         |  1152303062 ns   1152343750 ns            8
mask |  6 | avx     |   101662500 ns     99609375 ns            8
mask |  6 |     tbb |   266671713 ns    218750000 ns            8
mask |  6 | avx tbb |    74194600 ns     70312500 ns            8

data | 12 |         |   392514000 ns    392578125 ns            8
data | 12 | avx     |    98794400 ns     97656250 ns            8
data | 12 |     tbb |    83986262 ns     82031250 ns            8
data | 12 | avx tbb |    74996325 ns     76171875 ns            8
mask | 12 |         |  1157475138 ns   1156250000 ns            8
mask | 12 | avx     |   102137812 ns     99609375 ns            8
mask | 12 |     tbb |   257306037 ns    234375000 ns            8
mask | 12 | avx tbb |    75112587 ns     72265625 ns            8

data | 24 |         |   208973462 ns    208984375 ns            8
data | 24 | avx     |    99207237 ns     97656250 ns            8
data | 24 |     tbb |    78019387 ns     78125000 ns            8
data | 24 | avx tbb |    74114912 ns     70312500 ns            8
mask | 24 |         |  1159966750 ns   1160156250 ns            8
mask | 24 | avx     |   102502025 ns     93750000 ns            8
mask | 24 |     tbb |   280184088 ns    226562500 ns            8
mask | 24 | avx tbb |    74147550 ns     68359375 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76049 ns        68665 ns         2048
data |  6 |     tbb |       23914 ns        22888 ns         2048
mask |  6 |         |      139216 ns       144958 ns         2048
mask |  6 |     tbb |       53575 ns        45776 ns         2048

data | 12 |         |       40976 ns        38147 ns         2048
data | 12 |     tbb |       13822 ns        15259 ns         2048
mask | 12 |         |      137908 ns       137329 ns         2048
mask | 12 |     tbb |       41188 ns        45776 ns         2048

data | 24 |         |       20967 ns        22888 ns         2048
data | 24 |     tbb |       14353 ns        15259 ns         2048
mask | 24 |         |      139711 ns       137329 ns         2048
mask | 24 |     tbb |       61785 ns        61035 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       20249 ns        30518 ns         1024
data |  6 | avx tbb |       22274 ns        45776 ns         1024
mask |  6 | avx     |       17862 ns        30518 ns         1024
mask |  6 | avx tbb |       16686 ns        0.000 ns         1024

data | 12 | avx     |       20237 ns        15259 ns         1024
data | 12 | avx tbb |       16929 ns        0.000 ns         1024
mask | 12 | avx     |       17546 ns        0.000 ns         1024
mask | 12 | avx tbb |       15816 ns        0.000 ns         1024

data | 24 | avx     |       20195 ns        30518 ns         1024
data | 24 | avx tbb |       18822 ns        30518 ns         1024
mask | 24 | avx     |       17722 ns        15259 ns         1024
mask | 24 | avx tbb |       17346 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      387118 ns       396729 ns         1024
data |  6 | avx     |       31168 ns        15259 ns         1024
data |  6 |     tbb |      105771 ns       152588 ns         1024
data |  6 | avx tbb |       25450 ns        30518 ns         1024
mask |  6 |         |      679469 ns       671387 ns         1024
mask |  6 | avx     |       27402 ns        45776 ns         1024
mask |  6 |     tbb |      236837 ns       228882 ns         1024
mask |  6 | avx tbb |       24332 ns        61035 ns         1024

data | 12 |         |      192959 ns       183105 ns         1024
data | 12 | avx     |       31054 ns        30518 ns         1024
data | 12 |     tbb |       57805 ns        76294 ns         1024
data | 12 | avx tbb |       24713 ns        15259 ns         1024
mask | 12 |         |      697387 ns       732422 ns         1024
mask | 12 | avx     |       27535 ns        30518 ns         1024
mask | 12 |     tbb |      214387 ns       228882 ns         1024
mask | 12 | avx tbb |       23475 ns        0.000 ns         1024

data | 24 |         |       98824 ns        91553 ns         1024
data | 24 | avx     |       30772 ns        45776 ns         1024
data | 24 |     tbb |       57244 ns        61035 ns         1024
data | 24 | avx tbb |       26286 ns        30518 ns         1024
mask | 24 |         |      690087 ns       717163 ns         1024
mask | 24 | avx     |       27626 ns        45776 ns         1024
mask | 24 |     tbb |      237557 ns       198364 ns         1024
mask | 24 | avx tbb |       24950 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1531976 ns      1556396 ns          512
data |  6 | avx     |      204681 ns       183105 ns          512
data |  6 |     tbb |      317780 ns       396729 ns          512
data |  6 | avx tbb |      170518 ns       213623 ns          512
mask |  6 |         |     2744449 ns      2777100 ns          512
mask |  6 | avx     |      196681 ns       244141 ns          512
mask |  6 |     tbb |      790346 ns       793457 ns          512
mask |  6 | avx tbb |      162540 ns       183105 ns          512

data | 12 |         |      790289 ns       793457 ns          512
data | 12 | avx     |      205504 ns       183105 ns          512
data | 12 |     tbb |      236677 ns       274658 ns          512
data | 12 | avx tbb |      162929 ns       183105 ns          512
mask | 12 |         |     2712025 ns      2685547 ns          512
mask | 12 | avx     |      195698 ns       305176 ns          512
mask | 12 |     tbb |      687433 ns       701904 ns          512
mask | 12 | avx tbb |      162071 ns       122070 ns          512

data | 24 |         |      414836 ns       457764 ns          512
data | 24 | avx     |      203609 ns       152588 ns          512
data | 24 |     tbb |      205031 ns       183105 ns          512
data | 24 | avx tbb |      168777 ns       122070 ns          512
mask | 24 |         |     2734496 ns      2655029 ns          512
mask | 24 | avx     |      196124 ns       122070 ns          512
mask | 24 |     tbb |      804509 ns       762939 ns          512
mask | 24 | avx tbb |      162501 ns       122070 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6190927 ns      6591797 ns           64
data |  6 | avx     |      842767 ns       488281 ns           64
data |  6 |     tbb |      978555 ns       488281 ns           64
data |  6 | avx tbb |      652200 ns       244141 ns           64
mask |  6 |         |    10937716 ns     10986328 ns           64
mask |  6 | avx     |      787397 ns       732422 ns           64
mask |  6 |     tbb |     2914141 ns      2685547 ns           64
mask |  6 | avx tbb |      641727 ns       732422 ns           64

data | 12 |         |     3192513 ns      2441406 ns           64
data | 12 | avx     |      858522 ns       488281 ns           64
data | 12 |     tbb |      788694 ns       488281 ns           64
data | 12 | avx tbb |      658308 ns       488281 ns           64
mask | 12 |         |    10891823 ns     10253906 ns           64
mask | 12 | avx     |      789992 ns       488281 ns           64
mask | 12 |     tbb |     2552270 ns      2441406 ns           64
mask | 12 | avx tbb |      646606 ns       488281 ns           64

data | 24 |         |     1724450 ns      1708984 ns           64
data | 24 | avx     |      879108 ns       732422 ns           64
data | 24 |     tbb |      717928 ns       732422 ns           64
data | 24 | avx tbb |      652523 ns       976562 ns           64
mask | 24 |         |    10949420 ns     10986328 ns           64
mask | 24 | avx     |      810066 ns       244141 ns           64
mask | 24 |     tbb |     3010750 ns      2441406 ns           64
mask | 24 | avx tbb |      646239 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24248200 ns     23925781 ns           32
data |  6 | avx     |     3368050 ns      1953125 ns           32
data |  6 |     tbb |     3501453 ns      3906250 ns           32
data |  6 | avx tbb |     2390853 ns      1953125 ns           32
mask |  6 |         |    43239328 ns     42968750 ns           32
mask |  6 | avx     |     3145856 ns      2441406 ns           32
mask |  6 |     tbb |    11375547 ns     11230469 ns           32
mask |  6 | avx tbb |     2379434 ns      1953125 ns           32

data | 12 |         |    12545116 ns     12695312 ns           32
data | 12 | avx     |     3386763 ns      3906250 ns           32
data | 12 |     tbb |     2736316 ns      3417969 ns           32
data | 12 | avx tbb |     2405197 ns      2441406 ns           32
mask | 12 |         |    43312866 ns     43945312 ns           32
mask | 12 | avx     |     3219366 ns       488281 ns           32
mask | 12 |     tbb |    10081684 ns      8300781 ns           32
mask | 12 | avx tbb |     2403244 ns      1953125 ns           32

data | 24 |         |     6623275 ns      6835938 ns           32
data | 24 | avx     |     3428897 ns      2929688 ns           32
data | 24 |     tbb |     2532644 ns      3417969 ns           32
data | 24 | avx tbb |     2438631 ns      3906250 ns           32
mask | 24 |         |    43242169 ns     43457031 ns           32
mask | 24 | avx     |     3178269 ns      5859375 ns           32
mask | 24 |     tbb |    11667925 ns      9765625 ns           32
mask | 24 | avx tbb |     2375919 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96377037 ns     95703125 ns           16
data |  6 | avx     |    13462994 ns     13671875 ns           16
data |  6 |     tbb |    13575887 ns     13671875 ns           16
data |  6 | avx tbb |     9366856 ns      8789062 ns           16
mask |  6 |         |   173593919 ns    172851562 ns           16
mask |  6 | avx     |    12661213 ns     13671875 ns           16
mask |  6 |     tbb |    42664863 ns     35156250 ns           16
mask |  6 | avx tbb |     9840763 ns      7812500 ns           16

data | 12 |         |    49473206 ns     50781250 ns           16
data | 12 | avx     |    13989406 ns     15625000 ns           16
data | 12 |     tbb |    10445913 ns      9765625 ns           16
data | 12 | avx tbb |     9391950 ns      9765625 ns           16
mask | 12 |         |   173163731 ns    172851562 ns           16
mask | 12 | avx     |    13220881 ns     14648438 ns           16
mask | 12 |     tbb |    36726737 ns     35156250 ns           16
mask | 12 | avx tbb |     9421762 ns     11718750 ns           16

data | 24 |         |    27099100 ns     27343750 ns           16
data | 24 | avx     |    13413063 ns     13671875 ns           16
data | 24 |     tbb |     9798394 ns      8789062 ns           16
data | 24 | avx tbb |    10058181 ns      7812500 ns           16
mask | 24 |         |   173464550 ns    173828125 ns           16
mask | 24 | avx     |    12680869 ns     11718750 ns           16
mask | 24 |     tbb |    42116387 ns     33203125 ns           16
mask | 24 | avx tbb |     9323413 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192766850 ns    191406250 ns            8
data |  6 | avx     |    27310150 ns     25390625 ns            8
data |  6 |     tbb |    28385175 ns     27343750 ns            8
data |  6 | avx tbb |    18596513 ns     19531250 ns            8
mask |  6 |         |   347566750 ns    345703125 ns            8
mask |  6 | avx     |    27733487 ns     27343750 ns            8
mask |  6 |     tbb |    85860738 ns     66406250 ns            8
mask |  6 | avx tbb |    18648300 ns     17578125 ns            8

data | 12 |         |    99914550 ns     95703125 ns            8
data | 12 | avx     |    28536300 ns     25390625 ns            8
data | 12 |     tbb |    20792663 ns     17578125 ns            8
data | 12 | avx tbb |    18745387 ns     19531250 ns            8
mask | 12 |         |   345608212 ns    343750000 ns            8
mask | 12 | avx     |    25419825 ns     25390625 ns            8
mask | 12 |     tbb |    75264350 ns     68359375 ns            8
mask | 12 | avx tbb |    18742825 ns     17578125 ns            8

data | 24 |         |    52379775 ns     46875000 ns            8
data | 24 | avx     |    27300188 ns     25390625 ns            8
data | 24 |     tbb |    19488550 ns     19531250 ns            8
data | 24 | avx tbb |    18598738 ns     15625000 ns            8
mask | 24 |         |   345259575 ns    343750000 ns            8
mask | 24 | avx     |    25207537 ns     23437500 ns            8
mask | 24 |     tbb |    86746738 ns     68359375 ns            8
mask | 24 | avx tbb |    18644025 ns     15625000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385797587 ns    382812500 ns            8
data |  6 | avx     |    58828825 ns     60546875 ns            8
data |  6 |     tbb |    56762438 ns     56640625 ns            8
data |  6 | avx tbb |    37191550 ns     33203125 ns            8
mask |  6 |         |   693645438 ns    697265625 ns            8
mask |  6 | avx     |    51330950 ns     48828125 ns            8
mask |  6 |     tbb |   160555463 ns    130859375 ns            8
mask |  6 | avx tbb |    37167375 ns     39062500 ns            8

data | 12 |         |   196063700 ns    195312500 ns            8
data | 12 | avx     |    54219362 ns     52734375 ns            8
data | 12 |     tbb |    42289100 ns     42968750 ns            8
data | 12 | avx tbb |    39717413 ns     37109375 ns            8
mask | 12 |         |   692876050 ns    693359375 ns            8
mask | 12 | avx     |    50681675 ns     48828125 ns            8
mask | 12 |     tbb |   143994225 ns    142578125 ns            8
mask | 12 | avx tbb |    39767525 ns     41015625 ns            8

data | 24 |         |   104669700 ns    105468750 ns            8
data | 24 | avx     |    54389238 ns     54687500 ns            8
data | 24 |     tbb |    44155475 ns     42968750 ns            8
data | 24 | avx tbb |    36783200 ns     31250000 ns            8
mask | 24 |         |   691514800 ns    691406250 ns            8
mask | 24 | avx     |    51038388 ns     48828125 ns            8
mask | 24 |     tbb |   168201350 ns    146484375 ns            8
mask | 24 | avx tbb |    42131675 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771243213 ns    773437500 ns            8
data |  6 | avx     |   108609063 ns    107421875 ns            8
data |  6 |     tbb |   107777150 ns    105468750 ns            8
data |  6 | avx tbb |    81074225 ns     78125000 ns            8
mask |  6 |         |  1382269562 ns   1382812500 ns            8
mask |  6 | avx     |   101757375 ns    103515625 ns            8
mask |  6 |     tbb |   320994913 ns    265625000 ns            8
mask |  6 | avx tbb |    74615363 ns     72265625 ns            8

data | 12 |         |   393427300 ns    392578125 ns            8
data | 12 | avx     |   108838613 ns    109375000 ns            8
data | 12 |     tbb |    83915575 ns     82031250 ns            8
data | 12 | avx tbb |    75015562 ns     76171875 ns            8
mask | 12 |         |  1383313713 ns   1380859375 ns            8
mask | 12 | avx     |   101619075 ns    101562500 ns            8
mask | 12 |     tbb |   288880925 ns    285156250 ns            8
mask | 12 | avx tbb |    75042312 ns     74218750 ns            8

data | 24 |         |   208812337 ns    208984375 ns            8
data | 24 | avx     |   108532975 ns    109375000 ns            8
data | 24 |     tbb |    78357212 ns     78125000 ns            8
data | 24 | avx tbb |    73979663 ns     70312500 ns            8
mask | 24 |         |  1387705200 ns   1390625000 ns            8
mask | 24 | avx     |   101906275 ns    103515625 ns            8
mask | 24 |     tbb |   322021287 ns    259765625 ns            8
mask | 24 | avx tbb |    74013413 ns     64453125 ns            8
```

</details>

