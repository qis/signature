# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83348 ns        91553 ns         2048
data |  6 |     tbb |       74373 ns        83923 ns         2048
mask |  6 |         |      124357 ns       114441 ns         2048
mask |  6 |     tbb |      141594 ns       137329 ns         2048

data | 12 |         |       44172 ns        45776 ns         2048
data | 12 |     tbb |       45536 ns        53406 ns         2048
mask | 12 |         |      127229 ns       129700 ns         2048
mask | 12 |     tbb |      139579 ns       144958 ns         2048

data | 24 |         |       23476 ns        22888 ns         2048
data | 24 |     tbb |       25760 ns        15259 ns         2048
mask | 24 |         |      127496 ns       106812 ns         2048
mask | 24 |     tbb |      144690 ns       144958 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17249 ns        45776 ns         1024
data |  6 | avx tbb |       27594 ns        15259 ns         1024
mask |  6 | avx     |       18877 ns        30518 ns         1024
mask |  6 | avx tbb |       26644 ns        45776 ns         1024

data | 12 | avx     |       17182 ns        15259 ns         1024
data | 12 | avx tbb |       26928 ns        15259 ns         1024
mask | 12 | avx     |       18904 ns        15259 ns         1024
mask | 12 | avx tbb |       28247 ns        30518 ns         1024

data | 24 | avx     |       17081 ns        30518 ns         1024
data | 24 | avx tbb |       25174 ns        15259 ns         1024
mask | 24 | avx     |       18918 ns        15259 ns         1024
mask | 24 | avx tbb |       29139 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      425232 ns       381470 ns         1024
data |  6 | avx     |       25950 ns        45776 ns         1024
data |  6 |     tbb |      281332 ns       274658 ns         1024
data |  6 | avx tbb |       39041 ns        45776 ns         1024
mask |  6 |         |      627811 ns       549316 ns         1024
mask |  6 | avx     |       29204 ns        0.000 ns         1024
mask |  6 |     tbb |      449033 ns       473022 ns         1024
mask |  6 | avx tbb |       39874 ns        30518 ns         1024

data | 12 |         |      221481 ns       228882 ns         1024
data | 12 | avx     |       26894 ns        30518 ns         1024
data | 12 |     tbb |      183063 ns       183105 ns         1024
data | 12 | avx tbb |       39685 ns        76294 ns         1024
mask | 12 |         |      628378 ns       625610 ns         1024
mask | 12 | avx     |       31201 ns        45776 ns         1024
mask | 12 |     tbb |      447961 ns       473022 ns         1024
mask | 12 | avx tbb |       40339 ns        30518 ns         1024

data | 24 |         |      115230 ns       106812 ns         1024
data | 24 | avx     |       26345 ns        15259 ns         1024
data | 24 |     tbb |      102574 ns       122070 ns         1024
data | 24 | avx tbb |       39898 ns        76294 ns         1024
mask | 24 |         |      631579 ns       610352 ns         1024
mask | 24 | avx     |       28983 ns        61035 ns         1024
mask | 24 |     tbb |      439225 ns       427246 ns         1024
mask | 24 | avx tbb |       40478 ns        61035 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1700681 ns      1647949 ns          512
data |  6 | avx     |      193825 ns       274658 ns          512
data |  6 |     tbb |      983021 ns       976562 ns          512
data |  6 | avx tbb |      208428 ns       244141 ns          512
mask |  6 |         |     2579961 ns      2655029 ns          512
mask |  6 | avx     |      198677 ns       213623 ns          512
mask |  6 |     tbb |     1471035 ns      1495361 ns          512
mask |  6 | avx tbb |      228580 ns       244141 ns          512

data | 12 |         |      863254 ns       976562 ns          512
data | 12 | avx     |      193055 ns       183105 ns          512
data | 12 |     tbb |      548795 ns       640869 ns          512
data | 12 | avx tbb |      215152 ns       335693 ns          512
mask | 12 |         |     2500308 ns      2380371 ns          512
mask | 12 | avx     |      203029 ns       244141 ns          512
mask | 12 |     tbb |     1478469 ns      1556396 ns          512
mask | 12 | avx tbb |      228687 ns       213623 ns          512

data | 24 |         |      459693 ns       457764 ns          512
data | 24 | avx     |      194427 ns       213623 ns          512
data | 24 |     tbb |      348494 ns       274658 ns          512
data | 24 | avx tbb |      214288 ns       183105 ns          512
mask | 24 |         |     2502092 ns      2441406 ns          512
mask | 24 | avx     |      199006 ns       305176 ns          512
mask | 24 |     tbb |     1471159 ns      1525879 ns          512
mask | 24 | avx tbb |      211354 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6806380 ns      6591797 ns           64
data |  6 | avx     |      802528 ns       976562 ns           64
data |  6 |     tbb |     3656186 ns      3906250 ns           64
data |  6 | avx tbb |      724269 ns      1220703 ns           64
mask |  6 |         |    10034348 ns     10253906 ns           64
mask |  6 | avx     |      799286 ns      1220703 ns           64
mask |  6 |     tbb |     5512019 ns      5126953 ns           64
mask |  6 | avx tbb |      718936 ns       488281 ns           64

data | 12 |         |     3460472 ns      4150391 ns           64
data | 12 | avx     |      810509 ns       488281 ns           64
data | 12 |     tbb |     1898489 ns      2197266 ns           64
data | 12 | avx tbb |      730598 ns       976562 ns           64
mask | 12 |         |    10079280 ns     10253906 ns           64
mask | 12 | avx     |      789453 ns       732422 ns           64
mask | 12 |     tbb |     5391492 ns      5126953 ns           64
mask | 12 | avx tbb |      721616 ns      1464844 ns           64

data | 24 |         |     1849566 ns      1953125 ns           64
data | 24 | avx     |      787036 ns       976562 ns           64
data | 24 |     tbb |     1084719 ns       488281 ns           64
data | 24 | avx tbb |      728123 ns       488281 ns           64
mask | 24 |         |    10032995 ns     10253906 ns           64
mask | 24 | avx     |      790406 ns       976562 ns           64
mask | 24 |     tbb |     5479275 ns      6347656 ns           64
mask | 24 | avx tbb |      719302 ns       976562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26814022 ns     21972656 ns           32
data |  6 | avx     |     3204425 ns      2441406 ns           32
data |  6 |     tbb |    13718234 ns     13183594 ns           32
data |  6 | avx tbb |     2635938 ns      1464844 ns           32
mask |  6 |         |    39783172 ns     39550781 ns           32
mask |  6 | avx     |     3140359 ns       488281 ns           32
mask |  6 |     tbb |    21225766 ns     21484375 ns           32
mask |  6 | avx tbb |     2580000 ns      1464844 ns           32

data | 12 |         |    13788725 ns     14160156 ns           32
data | 12 | avx     |     3153403 ns      2929688 ns           32
data | 12 |     tbb |     7291025 ns      7324219 ns           32
data | 12 | avx tbb |     2616103 ns      3417969 ns           32
mask | 12 |         |    39642294 ns     39550781 ns           32
mask | 12 | avx     |     3165025 ns      2929688 ns           32
mask | 12 |     tbb |    21182353 ns     21484375 ns           32
mask | 12 | avx tbb |     2614022 ns      2441406 ns           32

data | 24 |         |     7105478 ns      6347656 ns           32
data | 24 | avx     |     3131384 ns        0.000 ns           32
data | 24 |     tbb |     3931441 ns      2929688 ns           32
data | 24 | avx tbb |     2612672 ns      2929688 ns           32
mask | 24 |         |    40073962 ns     40039062 ns           32
mask | 24 | avx     |     3151287 ns      2929688 ns           32
mask | 24 |     tbb |    21324622 ns     21972656 ns           32
mask | 24 | avx tbb |     2580963 ns      3417969 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106443431 ns    106445312 ns           16
data |  6 | avx     |    13443706 ns     14648438 ns           16
data |  6 |     tbb |    55410506 ns     56640625 ns           16
data |  6 | avx tbb |    10587094 ns     14648438 ns           16
mask |  6 |         |   158839456 ns    161132812 ns           16
mask |  6 | avx     |    12610469 ns     12695312 ns           16
mask |  6 |     tbb |    84388331 ns     83984375 ns           16
mask |  6 | avx tbb |    10701150 ns     12695312 ns           16

data | 12 |         |    54637044 ns     54687500 ns           16
data | 12 | avx     |    12808975 ns     15625000 ns           16
data | 12 |     tbb |    28626475 ns     30273438 ns           16
data | 12 | avx tbb |    10231975 ns      8789062 ns           16
mask | 12 |         |   159328275 ns    159179688 ns           16
mask | 12 | avx     |    13199413 ns     14648438 ns           16
mask | 12 |     tbb |    83011613 ns     83984375 ns           16
mask | 12 | avx tbb |    10123575 ns      9765625 ns           16

data | 24 |         |    29262356 ns     28320312 ns           16
data | 24 | avx     |    13171031 ns     13671875 ns           16
data | 24 |     tbb |    14926113 ns     14648438 ns           16
data | 24 | avx tbb |    10293613 ns     11718750 ns           16
mask | 24 |         |   159240169 ns    161132812 ns           16
mask | 24 | avx     |    12619181 ns     10742188 ns           16
mask | 24 |     tbb |    84931200 ns     85937500 ns           16
mask | 24 | avx tbb |    10162763 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   213741138 ns    210937500 ns            8
data |  6 | avx     |    25210812 ns     23437500 ns            8
data |  6 |     tbb |   113687325 ns    113281250 ns            8
data |  6 | avx tbb |    20455387 ns     19531250 ns            8
mask |  6 |         |   317921100 ns    312500000 ns            8
mask |  6 | avx     |    25518825 ns     25390625 ns            8
mask |  6 |     tbb |   162961125 ns    164062500 ns            8
mask |  6 | avx tbb |    22549687 ns     23437500 ns            8

data | 12 |         |   110164000 ns    109375000 ns            8
data | 12 | avx     |    27367675 ns     27343750 ns            8
data | 12 |     tbb |    57064812 ns     56640625 ns            8
data | 12 | avx tbb |    20213337 ns     19531250 ns            8
mask | 12 |         |   317868900 ns    318359375 ns            8
mask | 12 | avx     |    25611213 ns     23437500 ns            8
mask | 12 |     tbb |   163070050 ns    160156250 ns            8
mask | 12 | avx tbb |    20052875 ns     19531250 ns            8

data | 24 |         |    56819737 ns     56640625 ns            8
data | 24 | avx     |    27787700 ns     27343750 ns            8
data | 24 |     tbb |    29374075 ns     31250000 ns            8
data | 24 | avx tbb |    20436450 ns     19531250 ns            8
mask | 24 |         |   318072087 ns    326171875 ns            8
mask | 24 | avx     |    25613300 ns     27343750 ns            8
mask | 24 |     tbb |   168901450 ns    167968750 ns            8
mask | 24 | avx tbb |    20142688 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   427062675 ns    427734375 ns            8
data |  6 | avx     |    50462125 ns     50781250 ns            8
data |  6 |     tbb |   224320837 ns    222656250 ns            8
data |  6 | avx tbb |    45463462 ns     46875000 ns            8
mask |  6 |         |   633378050 ns    634765625 ns            8
mask |  6 | avx     |    50849550 ns     50781250 ns            8
mask |  6 |     tbb |   335420950 ns    337890625 ns            8
mask |  6 | avx tbb |    44124787 ns     44921875 ns            8

data | 12 |         |   216907025 ns    216796875 ns            8
data | 12 | avx     |    51413387 ns     52734375 ns            8
data | 12 |     tbb |   110134775 ns    109375000 ns            8
data | 12 | avx tbb |    40404962 ns     39062500 ns            8
mask | 12 |         |   635497063 ns    636718750 ns            8
mask | 12 | avx     |    51301987 ns     50781250 ns            8
mask | 12 |     tbb |   333984262 ns    335937500 ns            8
mask | 12 | avx tbb |    42621250 ns     42968750 ns            8

data | 24 |         |   118686900 ns    117187500 ns            8
data | 24 | avx     |    51317962 ns     48828125 ns            8
data | 24 |     tbb |    59879212 ns     56640625 ns            8
data | 24 | avx tbb |    45485413 ns     44921875 ns            8
mask | 24 |         |   635970600 ns    634765625 ns            8
mask | 24 | avx     |    51638712 ns     52734375 ns            8
mask | 24 |     tbb |   337134900 ns    339843750 ns            8
mask | 24 | avx tbb |    44342075 ns     42968750 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   855557450 ns    855468750 ns            8
data |  6 | avx     |   102815662 ns    101562500 ns            8
data |  6 |     tbb |   444204900 ns    445312500 ns            8
data |  6 | avx tbb |    81274062 ns     80078125 ns            8
mask |  6 |         |  1277516450 ns   1277343750 ns            8
mask |  6 | avx     |   102686838 ns    101562500 ns            8
mask |  6 |     tbb |   666288437 ns    667968750 ns            8
mask |  6 | avx tbb |    87294925 ns     87890625 ns            8

data | 12 |         |   433645800 ns    437500000 ns            8
data | 12 | avx     |   102495737 ns     95703125 ns            8
data | 12 |     tbb |   223289612 ns    224609375 ns            8
data | 12 | avx tbb |    81297837 ns     78125000 ns            8
mask | 12 |         |  1269220175 ns   1273437500 ns            8
mask | 12 | avx     |   102681100 ns    103515625 ns            8
mask | 12 |     tbb |   667733350 ns    669921875 ns            8
mask | 12 | avx tbb |    80505450 ns     82031250 ns            8

data | 24 |         |   232946700 ns    232421875 ns            8
data | 24 | avx     |   102779762 ns    107421875 ns            8
data | 24 |     tbb |   119626300 ns    121093750 ns            8
data | 24 | avx tbb |    81519200 ns     78125000 ns            8
mask | 24 |         |  1272123138 ns   1271484375 ns            8
mask | 24 | avx     |   102827050 ns    101562500 ns            8
mask | 24 |     tbb |   668077762 ns    667968750 ns            8
mask | 24 | avx tbb |    80286375 ns     78125000 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75441 ns        83923 ns         2048
data |  6 |     tbb |       67283 ns        76294 ns         2048
mask |  6 |         |      114199 ns       122070 ns         2048
mask |  6 |     tbb |      139019 ns       137329 ns         2048

data | 12 |         |       39534 ns        38147 ns         2048
data | 12 |     tbb |       38787 ns        22888 ns         2048
mask | 12 |         |      116102 ns       122070 ns         2048
mask | 12 |     tbb |      141382 ns       152588 ns         2048

data | 24 |         |       21266 ns        30518 ns         2048
data | 24 |     tbb |       23062 ns        15259 ns         2048
mask | 24 |         |      116297 ns       114441 ns         2048
mask | 24 |     tbb |      135184 ns       122070 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       20210 ns        15259 ns         1024
data |  6 | avx tbb |       31264 ns        45776 ns         1024
mask |  6 | avx     |       17859 ns        30518 ns         1024
mask |  6 | avx tbb |       23759 ns        0.000 ns         1024

data | 12 | avx     |       20175 ns        45776 ns         1024
data | 12 | avx tbb |       26948 ns        30518 ns         1024
mask | 12 | avx     |       17854 ns        15259 ns         1024
mask | 12 | avx tbb |       24445 ns        30518 ns         1024

data | 24 | avx     |       20178 ns        0.000 ns         1024
data | 24 | avx tbb |       27050 ns        15259 ns         1024
mask | 24 | avx     |       17905 ns        30518 ns         1024
mask | 24 | avx tbb |       23942 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      384015 ns       396729 ns         1024
data |  6 | avx     |       30794 ns        30518 ns         1024
data |  6 |     tbb |      257470 ns       259399 ns         1024
data |  6 | avx tbb |       41412 ns        30518 ns         1024
mask |  6 |         |      572159 ns       579834 ns         1024
mask |  6 | avx     |       27339 ns        45776 ns         1024
mask |  6 |     tbb |      397322 ns       396729 ns         1024
mask |  6 | avx tbb |       37362 ns        30518 ns         1024

data | 12 |         |      197949 ns       183105 ns         1024
data | 12 | avx     |       30943 ns        45776 ns         1024
data | 12 |     tbb |      154759 ns       122070 ns         1024
data | 12 | avx tbb |       41466 ns        30518 ns         1024
mask | 12 |         |      567548 ns       579834 ns         1024
mask | 12 | avx     |       27942 ns        15259 ns         1024
mask | 12 |     tbb |      402904 ns       411987 ns         1024
mask | 12 | avx tbb |       38040 ns        15259 ns         1024

data | 24 |         |       99533 ns        91553 ns         1024
data | 24 | avx     |       32863 ns        61035 ns         1024
data | 24 |     tbb |       88060 ns       106812 ns         1024
data | 24 | avx tbb |       41518 ns        45776 ns         1024
mask | 24 |         |      565577 ns       549316 ns         1024
mask | 24 | avx     |       27256 ns        30518 ns         1024
mask | 24 |     tbb |      402434 ns       411987 ns         1024
mask | 24 | avx tbb |       37970 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1533363 ns      1556396 ns          512
data |  6 | avx     |      204869 ns       152588 ns          512
data |  6 |     tbb |      890565 ns       885010 ns          512
data |  6 | avx tbb |      216826 ns       183105 ns          512
mask |  6 |         |     2271297 ns      2258301 ns          512
mask |  6 | avx     |      197825 ns       152588 ns          512
mask |  6 |     tbb |     1351863 ns      1220703 ns          512
mask |  6 | avx tbb |      218631 ns       122070 ns          512

data | 12 |         |      790372 ns       732422 ns          512
data | 12 | avx     |      210980 ns       152588 ns          512
data | 12 |     tbb |      505939 ns       457764 ns          512
data | 12 | avx tbb |      205776 ns       213623 ns          512
mask | 12 |         |     2271691 ns      2288818 ns          512
mask | 12 | avx     |      198588 ns       183105 ns          512
mask | 12 |     tbb |     1345633 ns      1403809 ns          512
mask | 12 | avx tbb |      203962 ns       183105 ns          512

data | 24 |         |      426486 ns       427246 ns          512
data | 24 | avx     |      209891 ns       244141 ns          512
data | 24 |     tbb |      308446 ns       305176 ns          512
data | 24 | avx tbb |      204699 ns       244141 ns          512
mask | 24 |         |     2282543 ns      2197266 ns          512
mask | 24 | avx     |      197772 ns       183105 ns          512
mask | 24 |     tbb |     1367630 ns      1373291 ns          512
mask | 24 | avx tbb |      223310 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6199841 ns      6591797 ns           64
data |  6 | avx     |      838867 ns      1708984 ns           64
data |  6 |     tbb |     3314273 ns      3173828 ns           64
data |  6 | avx tbb |      737316 ns        0.000 ns           64
mask |  6 |         |     9104037 ns      9277344 ns           64
mask |  6 | avx     |      786786 ns       732422 ns           64
mask |  6 |     tbb |     4917030 ns      4394531 ns           64
mask |  6 | avx tbb |      721384 ns       976562 ns           64

data | 12 |         |     3125017 ns      2685547 ns           64
data | 12 | avx     |      838469 ns       732422 ns           64
data | 12 |     tbb |     1746225 ns      1464844 ns           64
data | 12 | avx tbb |      733777 ns       732422 ns           64
mask | 12 |         |     9088839 ns      9033203 ns           64
mask | 12 | avx     |      787819 ns       732422 ns           64
mask | 12 |     tbb |     5027928 ns      4882812 ns           64
mask | 12 | avx tbb |      718886 ns       488281 ns           64

data | 24 |         |     1719105 ns      1220703 ns           64
data | 24 | avx     |      841684 ns       488281 ns           64
data | 24 |     tbb |     1012088 ns      1464844 ns           64
data | 24 | avx tbb |      752345 ns       976562 ns           64
mask | 24 |         |     9135550 ns      8789062 ns           64
mask | 24 | avx     |      784955 ns       244141 ns           64
mask | 24 |     tbb |     4953497 ns      4882812 ns           64
mask | 24 | avx tbb |      720150 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24264419 ns     23925781 ns           32
data |  6 | avx     |     3390347 ns      3417969 ns           32
data |  6 |     tbb |    12840947 ns     12695312 ns           32
data |  6 | avx tbb |     2643994 ns      2441406 ns           32
mask |  6 |         |    36312997 ns     36621094 ns           32
mask |  6 | avx     |     3170678 ns      3906250 ns           32
mask |  6 |     tbb |    19157803 ns     19042969 ns           32
mask |  6 | avx tbb |     2743944 ns      1953125 ns           32

data | 12 |         |    12352856 ns     12207031 ns           32
data | 12 | avx     |     3407294 ns      3417969 ns           32
data | 12 |     tbb |     6583066 ns      5859375 ns           32
data | 12 | avx tbb |     2634706 ns      1953125 ns           32
mask | 12 |         |    36085019 ns     35644531 ns           32
mask | 12 | avx     |     3201728 ns      5371094 ns           32
mask | 12 |     tbb |    19633962 ns     20019531 ns           32
mask | 12 | avx tbb |     2581866 ns      1464844 ns           32

data | 24 |         |     6565872 ns      5859375 ns           32
data | 24 | avx     |     3357413 ns      3417969 ns           32
data | 24 |     tbb |     3608522 ns      3906250 ns           32
data | 24 | avx tbb |     2624512 ns      1953125 ns           32
mask | 24 |         |    36141441 ns     35156250 ns           32
mask | 24 | avx     |     3127503 ns      2929688 ns           32
mask | 24 |     tbb |    19351369 ns     20019531 ns           32
mask | 24 | avx tbb |     2589106 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96550725 ns     97656250 ns           16
data |  6 | avx     |    13810688 ns     12695312 ns           16
data |  6 |     tbb |    51445913 ns     50781250 ns           16
data |  6 | avx tbb |    10220212 ns     10742188 ns           16
mask |  6 |         |   144537250 ns    142578125 ns           16
mask |  6 | avx     |    12637331 ns     12695312 ns           16
mask |  6 |     tbb |    75919438 ns     77148438 ns           16
mask |  6 | avx tbb |    10138269 ns      9765625 ns           16

data | 12 |         |    49449150 ns     49804688 ns           16
data | 12 | avx     |    13459363 ns     12695312 ns           16
data | 12 |     tbb |    25740775 ns     29296875 ns           16
data | 12 | avx tbb |    10252937 ns     12695312 ns           16
mask | 12 |         |   144865019 ns    145507812 ns           16
mask | 12 | avx     |    12631744 ns     12695312 ns           16
mask | 12 |     tbb |    78215275 ns     77148438 ns           16
mask | 12 | avx tbb |    10153294 ns     11718750 ns           16

data | 24 |         |    26617056 ns     22460938 ns           16
data | 24 | avx     |    13505050 ns     12695312 ns           16
data | 24 |     tbb |    13985638 ns     13671875 ns           16
data | 24 | avx tbb |    10323906 ns     14648438 ns           16
mask | 24 |         |   144072931 ns    145507812 ns           16
mask | 24 | avx     |    12647787 ns     13671875 ns           16
mask | 24 |     tbb |    77091738 ns     77148438 ns           16
mask | 24 | avx tbb |    10161531 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192774737 ns    189453125 ns            8
data |  6 | avx     |    27073575 ns     25390625 ns            8
data |  6 |     tbb |   104140188 ns    105468750 ns            8
data |  6 | avx tbb |    20319187 ns     21484375 ns            8
mask |  6 |         |   289870225 ns    285156250 ns            8
mask |  6 | avx     |    25350738 ns     25390625 ns            8
mask |  6 |     tbb |   152777238 ns    154296875 ns            8
mask |  6 | avx tbb |    20190675 ns     21484375 ns            8

data | 12 |         |    98776250 ns     99609375 ns            8
data | 12 | avx     |    27166238 ns     27343750 ns            8
data | 12 |     tbb |    51277950 ns     48828125 ns            8
data | 12 | avx tbb |    20531463 ns     21484375 ns            8
mask | 12 |         |   289191050 ns    283203125 ns            8
mask | 12 | avx     |    25252537 ns     21484375 ns            8
mask | 12 |     tbb |   154348438 ns    154296875 ns            8
mask | 12 | avx tbb |    20144938 ns     21484375 ns            8

data | 24 |         |    56180063 ns     56640625 ns            8
data | 24 | avx     |    27494338 ns     25390625 ns            8
data | 24 |     tbb |    29729750 ns     29296875 ns            8
data | 24 | avx tbb |    20540212 ns     21484375 ns            8
mask | 24 |         |   288919588 ns    292968750 ns            8
mask | 24 | avx     |    27580687 ns     27343750 ns            8
mask | 24 |     tbb |   151585200 ns    152343750 ns            8
mask | 24 | avx tbb |    20237487 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386212413 ns    386718750 ns            8
data |  6 | avx     |    54424400 ns     54687500 ns            8
data |  6 |     tbb |   199072813 ns    197265625 ns            8
data |  6 | avx tbb |    40729713 ns     42968750 ns            8
mask |  6 |         |   576929575 ns    578125000 ns            8
mask |  6 | avx     |    50441663 ns     50781250 ns            8
mask |  6 |     tbb |   300311187 ns    302734375 ns            8
mask |  6 | avx tbb |    40043400 ns     41015625 ns            8

data | 12 |         |   199550513 ns    201171875 ns            8
data | 12 | avx     |    54978838 ns     54687500 ns            8
data | 12 |     tbb |   105346000 ns    103515625 ns            8
data | 12 | avx tbb |    40464413 ns     41015625 ns            8
mask | 12 |         |   577798837 ns    576171875 ns            8
mask | 12 | avx     |    55805475 ns     58593750 ns            8
mask | 12 |     tbb |   300026863 ns    300781250 ns            8
mask | 12 | avx tbb |    40187712 ns     42968750 ns            8

data | 24 |         |   105323650 ns    105468750 ns            8
data | 24 | avx     |    53987888 ns     54687500 ns            8
data | 24 |     tbb |    57020150 ns     58593750 ns            8
data | 24 | avx tbb |    40493213 ns     42968750 ns            8
mask | 24 |         |   577754512 ns    578125000 ns            8
mask | 24 | avx     |    50985125 ns     52734375 ns            8
mask | 24 |     tbb |   305342550 ns    306640625 ns            8
mask | 24 | avx tbb |    40457463 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   770823000 ns    771484375 ns            8
data |  6 | avx     |   108656550 ns    107421875 ns            8
data |  6 |     tbb |   395852475 ns    396484375 ns            8
data |  6 | avx tbb |    80949850 ns     78125000 ns            8
mask |  6 |         |  1155495800 ns   1154296875 ns            8
mask |  6 | avx     |   101618337 ns    103515625 ns            8
mask |  6 |     tbb |   598132087 ns    597656250 ns            8
mask |  6 | avx tbb |    80648263 ns     82031250 ns            8

data | 12 |         |   394095537 ns    392578125 ns            8
data | 12 | avx     |   108286375 ns    109375000 ns            8
data | 12 |     tbb |   205327387 ns    205078125 ns            8
data | 12 | avx tbb |    81786900 ns     82031250 ns            8
mask | 12 |         |  1154327475 ns   1156250000 ns            8
mask | 12 | avx     |   101990588 ns    101562500 ns            8
mask | 12 |     tbb |   596233737 ns    597656250 ns            8
mask | 12 | avx tbb |    80631300 ns     83984375 ns            8

data | 24 |         |   209665662 ns    208984375 ns            8
data | 24 | avx     |   109543875 ns    109375000 ns            8
data | 24 |     tbb |   112155825 ns    111328125 ns            8
data | 24 | avx tbb |    81730637 ns     82031250 ns            8
mask | 24 |         |  1156055312 ns   1154296875 ns            8
mask | 24 | avx     |   101254575 ns    103515625 ns            8
mask | 24 |     tbb |   605441087 ns    605468750 ns            8
mask | 24 | avx tbb |    80351200 ns     78125000 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75605 ns        76294 ns         2048
data |  6 |     tbb |       68659 ns        61035 ns         2048
mask |  6 |         |      136653 ns       129700 ns         2048
mask |  6 |     tbb |      144636 ns       160217 ns         2048

data | 12 |         |       39379 ns        30518 ns         2048
data | 12 |     tbb |       42247 ns        45776 ns         2048
mask | 12 |         |      138551 ns       144958 ns         2048
mask | 12 |     tbb |      146655 ns       137329 ns         2048

data | 24 |         |       20962 ns        15259 ns         2048
data | 24 |     tbb |       23294 ns        30518 ns         2048
mask | 24 |         |      138067 ns       144958 ns         2048
mask | 24 |     tbb |      144000 ns       137329 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19009 ns        15259 ns         1024
data |  6 | avx tbb |       30016 ns        30518 ns         1024
mask |  6 | avx     |       17802 ns        15259 ns         1024
mask |  6 | avx tbb |       24011 ns        15259 ns         1024

data | 12 | avx     |       18956 ns        30518 ns         1024
data | 12 | avx tbb |       26503 ns        45776 ns         1024
mask | 12 | avx     |       17598 ns        15259 ns         1024
mask | 12 | avx tbb |       23433 ns        30518 ns         1024

data | 24 | avx     |       18900 ns        30518 ns         1024
data | 24 | avx tbb |       26695 ns        0.000 ns         1024
mask | 24 | avx     |       17711 ns        15259 ns         1024
mask | 24 | avx tbb |       27910 ns        45776 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      385490 ns       381470 ns         1024
data |  6 | avx     |       28937 ns        30518 ns         1024
data |  6 |     tbb |      266923 ns       213623 ns         1024
data |  6 | avx tbb |       41901 ns        30518 ns         1024
mask |  6 |         |      690988 ns       671387 ns         1024
mask |  6 | avx     |       27191 ns        30518 ns         1024
mask |  6 |     tbb |      471804 ns       503540 ns         1024
mask |  6 | avx tbb |       37287 ns        45776 ns         1024

data | 12 |         |      199472 ns       198364 ns         1024
data | 12 | avx     |       29450 ns        45776 ns         1024
data | 12 |     tbb |      156732 ns       122070 ns         1024
data | 12 | avx tbb |       41562 ns        30518 ns         1024
mask | 12 |         |      694028 ns       732422 ns         1024
mask | 12 | avx     |       27541 ns        30518 ns         1024
mask | 12 |     tbb |      444289 ns       411987 ns         1024
mask | 12 | avx tbb |       37490 ns        61035 ns         1024

data | 24 |         |      102515 ns        76294 ns         1024
data | 24 | avx     |       30040 ns        45776 ns         1024
data | 24 |     tbb |       97737 ns        61035 ns         1024
data | 24 | avx tbb |       41015 ns        61035 ns         1024
mask | 24 |         |      688592 ns       671387 ns         1024
mask | 24 | avx     |       26912 ns        30518 ns         1024
mask | 24 |     tbb |      460594 ns       488281 ns         1024
mask | 24 | avx tbb |       37609 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1529343 ns      1495361 ns          512
data |  6 | avx     |      190059 ns       152588 ns          512
data |  6 |     tbb |      899234 ns       976562 ns          512
data |  6 | avx tbb |      216475 ns       213623 ns          512
mask |  6 |         |     2730040 ns      2716064 ns          512
mask |  6 | avx     |      196665 ns       152588 ns          512
mask |  6 |     tbb |     1600775 ns      1647949 ns          512
mask |  6 | avx tbb |      218677 ns       244141 ns          512

data | 12 |         |      790901 ns       854492 ns          512
data | 12 | avx     |      191423 ns       213623 ns          512
data | 12 |     tbb |      506118 ns       518799 ns          512
data | 12 | avx tbb |      216662 ns       152588 ns          512
mask | 12 |         |     2725535 ns      2716064 ns          512
mask | 12 | avx     |      198035 ns       213623 ns          512
mask | 12 |     tbb |     1594682 ns      1586914 ns          512
mask | 12 | avx tbb |      223382 ns       213623 ns          512

data | 24 |         |      424584 ns       427246 ns          512
data | 24 | avx     |      189382 ns       244141 ns          512
data | 24 |     tbb |      314978 ns       396729 ns          512
data | 24 | avx tbb |      201641 ns       122070 ns          512
mask | 24 |         |     2718340 ns      2685547 ns          512
mask | 24 | avx     |      194932 ns       305176 ns          512
mask | 24 |     tbb |     1583867 ns      1617432 ns          512
mask | 24 | avx tbb |      226747 ns       244141 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6142797 ns      5615234 ns           64
data |  6 | avx     |      769594 ns       976562 ns           64
data |  6 |     tbb |     3296164 ns      3173828 ns           64
data |  6 | avx tbb |      735097 ns       488281 ns           64
mask |  6 |         |    10900650 ns     10742188 ns           64
mask |  6 | avx     |      798200 ns      1220703 ns           64
mask |  6 |     tbb |     5945192 ns      6103516 ns           64
mask |  6 | avx tbb |      712003 ns       732422 ns           64

data | 12 |         |     3146258 ns      3662109 ns           64
data | 12 | avx     |      767300 ns       488281 ns           64
data | 12 |     tbb |     1738495 ns      1464844 ns           64
data | 12 | avx tbb |      721384 ns       976562 ns           64
mask | 12 |         |    10898127 ns     10742188 ns           64
mask | 12 | avx     |      794728 ns       732422 ns           64
mask | 12 |     tbb |     5889769 ns      5615234 ns           64
mask | 12 | avx tbb |      726700 ns       488281 ns           64

data | 24 |         |     1712998 ns      1220703 ns           64
data | 24 | avx     |      767575 ns       732422 ns           64
data | 24 |     tbb |     1011636 ns       488281 ns           64
data | 24 | avx tbb |      736225 ns       732422 ns           64
mask | 24 |         |    10901083 ns     10498047 ns           64
mask | 24 | avx     |      792236 ns       976562 ns           64
mask | 24 |     tbb |     5905858 ns      5371094 ns           64
mask | 24 | avx tbb |      723420 ns       976562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24249666 ns     23437500 ns           32
data |  6 | avx     |     3077666 ns      4394531 ns           32
data |  6 |     tbb |    12759281 ns     13183594 ns           32
data |  6 | avx tbb |     2622475 ns      2441406 ns           32
mask |  6 |         |    43368806 ns     43457031 ns           32
mask |  6 | avx     |     3131434 ns      2929688 ns           32
mask |  6 |     tbb |    23093584 ns     23437500 ns           32
mask |  6 | avx tbb |     2581078 ns      1953125 ns           32

data | 12 |         |    12280091 ns     12207031 ns           32
data | 12 | avx     |     3051987 ns      7324219 ns           32
data | 12 |     tbb |     6606138 ns      5371094 ns           32
data | 12 | avx tbb |     2616531 ns      1464844 ns           32
mask | 12 |         |    43405506 ns     44433594 ns           32
mask | 12 | avx     |     3145300 ns      2441406 ns           32
mask | 12 |     tbb |    23080044 ns     22460938 ns           32
mask | 12 | avx tbb |     2685534 ns      3906250 ns           32

data | 24 |         |     6549981 ns      7324219 ns           32
data | 24 | avx     |     3048081 ns        0.000 ns           32
data | 24 |     tbb |     3659756 ns      3906250 ns           32
data | 24 | avx tbb |     2614131 ns      2441406 ns           32
mask | 24 |         |    43406063 ns     43457031 ns           32
mask | 24 | avx     |     3170369 ns      3417969 ns           32
mask | 24 |     tbb |    22415047 ns     21484375 ns           32
mask | 24 | avx tbb |     2604687 ns      3417969 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    97605631 ns     97656250 ns           16
data |  6 | avx     |    12841931 ns      9765625 ns           16
data |  6 |     tbb |    50653794 ns     48828125 ns           16
data |  6 | avx tbb |    10270744 ns      9765625 ns           16
mask |  6 |         |   173120569 ns    171875000 ns           16
mask |  6 | avx     |    12624125 ns     11718750 ns           16
mask |  6 |     tbb |    89652100 ns     89843750 ns           16
mask |  6 | avx tbb |    10168644 ns      9765625 ns           16

data | 12 |         |    49908506 ns     49804688 ns           16
data | 12 | avx     |    12660194 ns     11718750 ns           16
data | 12 |     tbb |    25364281 ns     24414062 ns           16
data | 12 | avx tbb |    10296094 ns      9765625 ns           16
mask | 12 |         |   172849487 ns    171875000 ns           16
mask | 12 | avx     |    12639719 ns     12695312 ns           16
mask | 12 |     tbb |    92863863 ns     92773438 ns           16
mask | 12 | avx tbb |    10230812 ns      8789062 ns           16

data | 24 |         |    26083706 ns     23437500 ns           16
data | 24 | avx     |    12808500 ns     16601562 ns           16
data | 24 |     tbb |    13878075 ns     13671875 ns           16
data | 24 | avx tbb |    10297887 ns     11718750 ns           16
mask | 24 |         |   172688487 ns    171875000 ns           16
mask | 24 | avx     |    12579438 ns     13671875 ns           16
mask | 24 |     tbb |    92376919 ns     87890625 ns           16
mask | 24 | avx tbb |    10121175 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192785538 ns    189453125 ns            8
data |  6 | avx     |    24623488 ns     21484375 ns            8
data |  6 |     tbb |   102031625 ns    101562500 ns            8
data |  6 | avx tbb |    20739937 ns     17578125 ns            8
mask |  6 |         |   345793950 ns    345703125 ns            8
mask |  6 | avx     |    25700250 ns     25390625 ns            8
mask |  6 |     tbb |   182432412 ns    183593750 ns            8
mask |  6 | avx tbb |    20121425 ns     19531250 ns            8

data | 12 |         |    98127175 ns     95703125 ns            8
data | 12 | avx     |    24684950 ns     23437500 ns            8
data | 12 |     tbb |    52252062 ns     52734375 ns            8
data | 12 | avx tbb |    21902787 ns     21484375 ns            8
mask | 12 |         |   346056600 ns    349609375 ns            8
mask | 12 | avx     |    25364312 ns     23437500 ns            8
mask | 12 |     tbb |   183157713 ns    181640625 ns            8
mask | 12 | avx tbb |    22515875 ns     21484375 ns            8

data | 24 |         |    52661375 ns     48828125 ns            8
data | 24 | avx     |    24793650 ns     25390625 ns            8
data | 24 |     tbb |    27968512 ns     29296875 ns            8
data | 24 | avx tbb |    21802762 ns     21484375 ns            8
mask | 24 |         |   346120012 ns    349609375 ns            8
mask | 24 | avx     |    25580800 ns     23437500 ns            8
mask | 24 |     tbb |   180653138 ns    185546875 ns            8
mask | 24 | avx tbb |    22554925 ns     21484375 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385440250 ns    384765625 ns            8
data |  6 | avx     |    49266138 ns     46875000 ns            8
data |  6 |     tbb |   201859713 ns    203125000 ns            8
data |  6 | avx tbb |    40803963 ns     39062500 ns            8
mask |  6 |         |   691457137 ns    693359375 ns            8
mask |  6 | avx     |    55260237 ns     56640625 ns            8
mask |  6 |     tbb |   359115075 ns    357421875 ns            8
mask |  6 | avx tbb |    40269900 ns     42968750 ns            8

data | 12 |         |   196143037 ns    197265625 ns            8
data | 12 | avx     |    49523425 ns     50781250 ns            8
data | 12 |     tbb |   105161025 ns    107421875 ns            8
data | 12 | avx tbb |    40762925 ns     41015625 ns            8
mask | 12 |         |   692179675 ns    687500000 ns            8
mask | 12 | avx     |    51174475 ns     48828125 ns            8
mask | 12 |     tbb |   364063863 ns    365234375 ns            8
mask | 12 | avx tbb |    40052462 ns     37109375 ns            8

data | 24 |         |   104420675 ns    105468750 ns            8
data | 24 | avx     |    49422113 ns     50781250 ns            8
data | 24 |     tbb |    54717025 ns     54687500 ns            8
data | 24 | avx tbb |    40640275 ns     39062500 ns            8
mask | 24 |         |   692261462 ns    691406250 ns            8
mask | 24 | avx     |    50764800 ns     50781250 ns            8
mask | 24 |     tbb |   364123475 ns    363281250 ns            8
mask | 24 | avx tbb |    40221725 ns     41015625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771312862 ns    771484375 ns            8
data |  6 | avx     |    98632137 ns     97656250 ns            8
data |  6 |     tbb |   398940825 ns    396484375 ns            8
data |  6 | avx tbb |    81582087 ns     78125000 ns            8
mask |  6 |         |  1384652575 ns   1386718750 ns            8
mask |  6 | avx     |   102279038 ns    101562500 ns            8
mask |  6 |     tbb |   728804750 ns    728515625 ns            8
mask |  6 | avx tbb |    80418925 ns     82031250 ns            8

data | 12 |         |   394118950 ns    394531250 ns            8
data | 12 | avx     |    98850312 ns     97656250 ns            8
data | 12 |     tbb |   202630787 ns    203125000 ns            8
data | 12 | avx tbb |    81283850 ns     82031250 ns            8
mask | 12 |         |  1382150338 ns   1380859375 ns            8
mask | 12 | avx     |   101148262 ns    101562500 ns            8
mask | 12 |     tbb |   723738750 ns    718750000 ns            8
mask | 12 | avx tbb |    80133437 ns     78125000 ns            8

data | 24 |         |   208913850 ns    210937500 ns            8
data | 24 | avx     |    99433913 ns     99609375 ns            8
data | 24 |     tbb |   109299513 ns    109375000 ns            8
data | 24 | avx tbb |    81155237 ns     80078125 ns            8
mask | 24 |         |  1384965150 ns   1384765625 ns            8
mask | 24 | avx     |   101289575 ns     97656250 ns            8
mask | 24 |     tbb |   726610900 ns    722656250 ns            8
mask | 24 | avx tbb |    80189950 ns     80078125 ns            8
```

</details>

