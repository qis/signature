# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |        8604 ns         7629 ns         4096
data |  6 |     tbb |        9503 ns        11444 ns         4096
data |  6 | avx     |        1025 ns        0.000 ns         4096
data |  6 | avx tbb |        5735 ns         7629 ns         4096

mask |  6 |         |       12081 ns        15259 ns         4096
mask |  6 |     tbb |        8291 ns         7629 ns         4096
mask |  6 | avx     |         952 ns        0.000 ns         4096
mask |  6 | avx tbb |        5490 ns         3815 ns         4096

data | 12 |         |        4049 ns         3815 ns         4096
data | 12 |     tbb |        8731 ns        11444 ns         4096
data | 12 | avx     |        1108 ns        0.000 ns         4096
data | 12 | avx tbb |        5669 ns         3815 ns         4096

mask | 12 |         |       13086 ns        15259 ns         4096
mask | 12 |     tbb |        8262 ns         7629 ns         4096
mask | 12 | avx     |        1043 ns         3815 ns         4096
mask | 12 | avx tbb |        5514 ns         7629 ns         4096

data | 24 |         |        2691 ns         3815 ns         4096
data | 24 |     tbb |        8362 ns         7629 ns         4096
data | 24 | avx     |        1111 ns         3815 ns         4096
data | 24 | avx tbb |        5685 ns         7629 ns         4096

mask | 24 |         |       12291 ns         7629 ns         4096
mask | 24 |     tbb |        8304 ns        11444 ns         4096
mask | 24 | avx     |        1092 ns        0.000 ns         4096
mask | 24 | avx tbb |        5557 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       27899 ns        30518 ns         4096
data |  6 |     tbb |       11667 ns        15259 ns         4096
data |  6 | avx     |        2146 ns         3815 ns         4096
data |  6 | avx tbb |        6177 ns         7629 ns         4096

mask |  6 |         |       47396 ns        49591 ns         4096
mask |  6 |     tbb |       15039 ns        15259 ns         4096
mask |  6 | avx     |        2186 ns        0.000 ns         4096
mask |  6 | avx tbb |        5984 ns         7629 ns         4096

data | 12 |         |       13867 ns        11444 ns         4096
data | 12 |     tbb |        9947 ns        15259 ns         4096
data | 12 | avx     |        2132 ns         3815 ns         4096
data | 12 | avx tbb |        6155 ns        0.000 ns         4096

mask | 12 |         |       46694 ns        49591 ns         4096
mask | 12 |     tbb |       15127 ns        15259 ns         4096
mask | 12 | avx     |        2178 ns         3815 ns         4096
mask | 12 | avx tbb |        6041 ns         7629 ns         4096

data | 24 |         |        7872 ns         7629 ns         4096
data | 24 |     tbb |        9055 ns        11444 ns         4096
data | 24 | avx     |        2285 ns         3815 ns         4096
data | 24 | avx tbb |        6115 ns         3815 ns         4096

mask | 24 |         |       47358 ns        49591 ns         4096
mask | 24 |     tbb |       15142 ns        15259 ns         4096
mask | 24 | avx     |        2228 ns         3815 ns         4096
mask | 24 | avx tbb |        6097 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      107602 ns        99182 ns         2048
data |  6 |     tbb |       22356 ns        22888 ns         2048
data |  6 | avx     |        7243 ns        0.000 ns         2048
data |  6 | avx tbb |       10210 ns         7629 ns         2048

mask |  6 |         |      195985 ns       205994 ns         2048
mask |  6 |     tbb |       42186 ns        30518 ns         2048
mask |  6 | avx     |        7922 ns        15259 ns         2048
mask |  6 | avx tbb |       10074 ns         7629 ns         2048

data | 12 |         |       53511 ns        45776 ns         2048
data | 12 |     tbb |       16977 ns        30518 ns         2048
data | 12 | avx     |        7154 ns         7629 ns         2048
data | 12 | avx tbb |       10301 ns         7629 ns         2048

mask | 12 |         |      189783 ns       183105 ns         2048
mask | 12 |     tbb |       42988 ns        53406 ns         2048
mask | 12 | avx     |        7607 ns         7629 ns         2048
mask | 12 | avx tbb |       10053 ns        15259 ns         2048

data | 24 |         |       27634 ns        30518 ns         2048
data | 24 |     tbb |       14387 ns        15259 ns         2048
data | 24 | avx     |        7401 ns         7629 ns         2048
data | 24 | avx tbb |       10254 ns         7629 ns         2048

mask | 24 |         |      195381 ns       205994 ns         2048
mask | 24 |     tbb |       42562 ns        38147 ns         2048
mask | 24 | avx     |        8310 ns         7629 ns         2048
mask | 24 | avx tbb |        9982 ns        15259 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      421711 ns       442505 ns         1024
data |  6 |     tbb |       54803 ns        45776 ns         1024
data |  6 | avx     |       26199 ns        15259 ns         1024
data |  6 | avx tbb |       17353 ns        0.000 ns         1024

mask |  6 |         |      778005 ns       747681 ns         1024
mask |  6 |     tbb |      140109 ns       167847 ns         1024
mask |  6 | avx     |       29791 ns        30518 ns         1024
mask |  6 | avx tbb |       17182 ns        30518 ns         1024

data | 12 |         |      216535 ns       213623 ns         1024
data | 12 |     tbb |       33200 ns        61035 ns         1024
data | 12 | avx     |       26133 ns        15259 ns         1024
data | 12 | avx tbb |       17301 ns        45776 ns         1024

mask | 12 |         |      779850 ns       778198 ns         1024
mask | 12 |     tbb |      138316 ns       167847 ns         1024
mask | 12 | avx     |       28306 ns        45776 ns         1024
mask | 12 | avx tbb |       17492 ns        15259 ns         1024

data | 24 |         |      110756 ns       122070 ns         1024
data | 24 |     tbb |       23228 ns        15259 ns         1024
data | 24 | avx     |       26000 ns        0.000 ns         1024
data | 24 | avx tbb |       17570 ns        15259 ns         1024

mask | 24 |         |      765419 ns       762939 ns         1024
mask | 24 |     tbb |      138699 ns       152588 ns         1024
mask | 24 | avx     |       29414 ns        30518 ns         1024
mask | 24 | avx tbb |       17099 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1680093 ns      1770020 ns          512
data |  6 |     tbb |      237088 ns        91553 ns          512
data |  6 | avx     |      197044 ns       183105 ns          512
data |  6 | avx tbb |      183122 ns       183105 ns          512

mask |  6 |         |     2932673 ns      2899170 ns          512
mask |  6 |     tbb |      568441 ns       579834 ns          512
mask |  6 | avx     |      196458 ns       122070 ns          512
mask |  6 | avx tbb |      177222 ns       213623 ns          512

data | 12 |         |      866406 ns       854492 ns          512
data | 12 |     tbb |      196662 ns       152588 ns          512
data | 12 | avx     |      197125 ns       213623 ns          512
data | 12 | avx tbb |      184556 ns       183105 ns          512

mask | 12 |         |     2955136 ns      2960205 ns          512
mask | 12 |     tbb |      562466 ns       549316 ns          512
mask | 12 | avx     |      200641 ns       244141 ns          512
mask | 12 | avx tbb |      174562 ns       244141 ns          512

data | 24 |         |      452854 ns       488281 ns          512
data | 24 |     tbb |      194527 ns       152588 ns          512
data | 24 | avx     |      198184 ns       183105 ns          512
data | 24 | avx tbb |      185434 ns       183105 ns          512

mask | 24 |         |     2961243 ns      3051758 ns          512
mask | 24 |     tbb |      568124 ns       488281 ns          512
mask | 24 | avx     |      199574 ns       213623 ns          512
mask | 24 | avx tbb |      175313 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6750825 ns      6835938 ns           64
data |  6 |     tbb |      800905 ns       976562 ns           64
data |  6 | avx     |      839575 ns       976562 ns           64
data |  6 | avx tbb |      645334 ns       244141 ns           64

mask |  6 |         |    12111403 ns     11230469 ns           64
mask |  6 |     tbb |     2107216 ns      1708984 ns           64
mask |  6 | avx     |      808600 ns       732422 ns           64
mask |  6 | avx tbb |      642145 ns       244141 ns           64

data | 12 |         |     3483341 ns      3173828 ns           64
data | 12 |     tbb |      696998 ns       488281 ns           64
data | 12 | avx     |      824088 ns       976562 ns           64
data | 12 | avx tbb |      640331 ns       488281 ns           64

mask | 12 |         |    11704536 ns     12207031 ns           64
mask | 12 |     tbb |     2125770 ns      1953125 ns           64
mask | 12 | avx     |      798894 ns       976562 ns           64
mask | 12 | avx tbb |      636736 ns       488281 ns           64

data | 24 |         |     1857513 ns      1220703 ns           64
data | 24 |     tbb |      671047 ns       732422 ns           64
data | 24 | avx     |      850272 ns       976562 ns           64
data | 24 | avx tbb |      641852 ns       488281 ns           64

mask | 24 |         |    12171608 ns     12207031 ns           64
mask | 24 |     tbb |     2109731 ns       976562 ns           64
mask | 24 | avx     |      810386 ns       976562 ns           64
mask | 24 | avx tbb |      643697 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26815656 ns     24414062 ns           32
data |  6 |     tbb |     2865459 ns       976562 ns           32
data |  6 | avx     |     3232509 ns      5371094 ns           32
data |  6 | avx tbb |     2361250 ns      2441406 ns           32

mask |  6 |         |    47390087 ns     47851562 ns           32
mask |  6 |     tbb |     8188088 ns      8300781 ns           32
mask |  6 | avx     |     3149769 ns      2929688 ns           32
mask |  6 | avx tbb |     2365384 ns      3417969 ns           32

data | 12 |         |    13593662 ns     13183594 ns           32
data | 12 |     tbb |     2458141 ns      1953125 ns           32
data | 12 | avx     |     3178544 ns      1953125 ns           32
data | 12 | avx tbb |     2368234 ns      1464844 ns           32

mask | 12 |         |    47967344 ns     47851562 ns           32
mask | 12 |     tbb |     8179653 ns      7812500 ns           32
mask | 12 | avx     |     3125300 ns        0.000 ns           32
mask | 12 | avx tbb |     2362153 ns      3417969 ns           32

data | 24 |         |     7070603 ns      6835938 ns           32
data | 24 |     tbb |     2433022 ns      1953125 ns           32
data | 24 | avx     |     3202787 ns      4394531 ns           32
data | 24 | avx tbb |     2360409 ns      1953125 ns           32

mask | 24 |         |    49011512 ns     50292969 ns           32
mask | 24 |     tbb |     8288078 ns      8300781 ns           32
mask | 24 | avx     |     3178178 ns      3906250 ns           32
mask | 24 | avx tbb |     2361719 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106887531 ns    105468750 ns           16
data |  6 |     tbb |    11049231 ns     15625000 ns           16
data |  6 | avx     |    12487488 ns     12695312 ns           16
data |  6 | avx tbb |     9299419 ns      9765625 ns           16

mask |  6 |         |   194570394 ns    193359375 ns           16
mask |  6 |     tbb |    32187787 ns     32226562 ns           16
mask |  6 | avx     |    12573344 ns     12695312 ns           16
mask |  6 | avx tbb |     9253437 ns      8789062 ns           16

data | 12 |         |    54391062 ns     55664062 ns           16
data | 12 |     tbb |     9533363 ns      9765625 ns           16
data | 12 | avx     |    13095200 ns      9765625 ns           16
data | 12 | avx tbb |     9240506 ns      8789062 ns           16

mask | 12 |         |   205402794 ns    206054688 ns           16
mask | 12 |     tbb |    32345962 ns     32226562 ns           16
mask | 12 | avx     |    12535413 ns     13671875 ns           16
mask | 12 | avx tbb |     9257575 ns      8789062 ns           16

data | 24 |         |    28765044 ns     30273438 ns           16
data | 24 |     tbb |     9448981 ns      7812500 ns           16
data | 24 | avx     |    12468531 ns     11718750 ns           16
data | 24 | avx tbb |     9247112 ns      8789062 ns           16

mask | 24 |         |   212539156 ns    214843750 ns           16
mask | 24 |     tbb |    32420875 ns     31250000 ns           16
mask | 24 | avx     |    12561413 ns     12695312 ns           16
mask | 24 | avx tbb |     9255000 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   213495512 ns    212890625 ns            8
data |  6 |     tbb |    21768000 ns     31250000 ns            8
data |  6 | avx     |    26699562 ns     25390625 ns            8
data |  6 | avx tbb |    18404300 ns     19531250 ns            8

mask |  6 |         |   420381988 ns    419921875 ns            8
mask |  6 |     tbb |    64301700 ns     62500000 ns            8
mask |  6 | avx     |    25076800 ns     25390625 ns            8
mask |  6 | avx tbb |    18692250 ns     21484375 ns            8

data | 12 |         |   108226975 ns    107421875 ns            8
data | 12 |     tbb |    18974887 ns     17578125 ns            8
data | 12 | avx     |    25119562 ns     25390625 ns            8
data | 12 | avx tbb |    18405312 ns     19531250 ns            8

mask | 12 |         |   383203712 ns    380859375 ns            8
mask | 12 |     tbb |    64743775 ns     64453125 ns            8
mask | 12 | avx     |    26778000 ns     27343750 ns            8
mask | 12 | avx tbb |    18430525 ns     17578125 ns            8

data | 24 |         |    56518900 ns     58593750 ns            8
data | 24 |     tbb |    18815075 ns     17578125 ns            8
data | 24 | avx     |    25371650 ns     21484375 ns            8
data | 24 | avx tbb |    18684913 ns     15625000 ns            8

mask | 24 |         |   399816350 ns    404296875 ns            8
mask | 24 |     tbb |    64273275 ns     62500000 ns            8
mask | 24 | avx     |    25147325 ns     23437500 ns            8
mask | 24 | avx tbb |    18404088 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   428409625 ns    427734375 ns            8
data |  6 |     tbb |    43611175 ns     33203125 ns            8
data |  6 | avx     |    50464163 ns     52734375 ns            8
data |  6 | avx tbb |    36732212 ns     39062500 ns            8

mask |  6 |         |   846877863 ns    847656250 ns            8
mask |  6 |     tbb |   130598462 ns    125000000 ns            8
mask |  6 | avx     |    50539112 ns     48828125 ns            8
mask |  6 | avx tbb |    36746763 ns     35156250 ns            8

data | 12 |         |   221563212 ns    220703125 ns            8
data | 12 |     tbb |    37244325 ns     39062500 ns            8
data | 12 | avx     |    54088300 ns     54687500 ns            8
data | 12 | avx tbb |    36725025 ns     35156250 ns            8

mask | 12 |         |   853445625 ns    853515625 ns            8
mask | 12 |     tbb |   129104875 ns    123046875 ns            8
mask | 12 | avx     |    50333100 ns     46875000 ns            8
mask | 12 | avx tbb |    36736000 ns     37109375 ns            8

data | 24 |         |   120901550 ns    119140625 ns            8
data | 24 |     tbb |    37339888 ns     33203125 ns            8
data | 24 | avx     |    50259750 ns     46875000 ns            8
data | 24 | avx tbb |    36720800 ns     37109375 ns            8

mask | 24 |         |   838858212 ns    841796875 ns            8
mask | 24 |     tbb |   128531825 ns    117187500 ns            8
mask | 24 | avx     |    50618938 ns     50781250 ns            8
mask | 24 | avx tbb |    36698588 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   852551162 ns    849609375 ns            8
data |  6 |     tbb |    86245700 ns     83984375 ns            8
data |  6 | avx     |   102322063 ns    103515625 ns            8
data |  6 | avx tbb |    73427400 ns     66406250 ns            8

mask |  6 |         |  1696122387 ns   1701171875 ns            8
mask |  6 |     tbb |   258420937 ns    242187500 ns            8
mask |  6 | avx     |   100681025 ns    103515625 ns            8
mask |  6 | avx tbb |    73380138 ns     72265625 ns            8

data | 12 |         |   432902162 ns    437500000 ns            8
data | 12 |     tbb |    74381187 ns     68359375 ns            8
data | 12 | avx     |   100543137 ns     97656250 ns            8
data | 12 | avx tbb |    73275263 ns     60546875 ns            8

mask | 12 |         |  1524922787 ns   1523437500 ns            8
mask | 12 |     tbb |   257641125 ns    238281250 ns            8
mask | 12 | avx     |   100994112 ns    101562500 ns            8
mask | 12 | avx tbb |    73265812 ns     62500000 ns            8

data | 24 |         |   227319562 ns    222656250 ns            8
data | 24 |     tbb |    74676863 ns     72265625 ns            8
data | 24 | avx     |   101371975 ns     99609375 ns            8
data | 24 | avx tbb |    73321012 ns     72265625 ns            8

mask | 24 |         |  1713118825 ns   1714843750 ns            8
mask | 24 |     tbb |   258049250 ns    251953125 ns            8
mask | 24 | avx     |   101302962 ns    101562500 ns            8
mask | 24 | avx tbb |    73442513 ns     76171875 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |        7474 ns         7629 ns         4096
data |  6 |     tbb |        9103 ns         7629 ns         4096
data |  6 | avx     |        1033 ns        0.000 ns         4096
data |  6 | avx tbb |        5591 ns         7629 ns         4096

mask |  6 |         |       11001 ns        11444 ns         4096
mask |  6 |     tbb |        8003 ns         3815 ns         4096
mask |  6 | avx     |         918 ns        0.000 ns         4096
mask |  6 | avx tbb |        5383 ns         7629 ns         4096

data | 12 |         |        3712 ns         3815 ns         4096
data | 12 |     tbb |        8749 ns        11444 ns         4096
data | 12 | avx     |        1081 ns        0.000 ns         4096
data | 12 | avx tbb |        5626 ns         7629 ns         4096

mask | 12 |         |       13083 ns        15259 ns         4096
mask | 12 |     tbb |        8001 ns         7629 ns         4096
mask | 12 | avx     |        1009 ns        0.000 ns         4096
mask | 12 | avx tbb |        5372 ns         3815 ns         4096

data | 24 |         |        2465 ns        0.000 ns         4096
data | 24 |     tbb |        8147 ns        11444 ns         4096
data | 24 | avx     |        1126 ns        0.000 ns         4096
data | 24 | avx tbb |        5545 ns         3815 ns         4096

mask | 24 |         |       11975 ns        15259 ns         4096
mask | 24 |     tbb |        8025 ns         7629 ns         4096
mask | 24 | avx     |         958 ns        0.000 ns         4096
mask | 24 | avx tbb |        5406 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       25104 ns        26703 ns         4096
data |  6 |     tbb |       11344 ns        11444 ns         4096
data |  6 | avx     |        2430 ns         3815 ns         4096
data |  6 | avx tbb |        6258 ns        11444 ns         4096

mask |  6 |         |       43434 ns        38147 ns         4096
mask |  6 |     tbb |       14437 ns        11444 ns         4096
mask |  6 | avx     |        2130 ns        0.000 ns         4096
mask |  6 | avx tbb |        5922 ns         7629 ns         4096

data | 12 |         |       13378 ns        15259 ns         4096
data | 12 |     tbb |        9766 ns        11444 ns         4096
data | 12 | avx     |        2670 ns         3815 ns         4096
data | 12 | avx tbb |        6241 ns         3815 ns         4096

mask | 12 |         |       45249 ns        45776 ns         4096
mask | 12 |     tbb |       14459 ns        19073 ns         4096
mask | 12 | avx     |        2134 ns        0.000 ns         4096
mask | 12 | avx tbb |        5891 ns         3815 ns         4096

data | 24 |         |        7282 ns         3815 ns         4096
data | 24 |     tbb |        8761 ns        11444 ns         4096
data | 24 | avx     |        2638 ns        0.000 ns         4096
data | 24 | avx tbb |        6165 ns         7629 ns         4096

mask | 24 |         |       48257 ns        53406 ns         4096
mask | 24 |     tbb |       14498 ns        15259 ns         4096
mask | 24 | avx     |        2164 ns         3815 ns         4096
mask | 24 | avx tbb |        5873 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       95911 ns        91553 ns         2048
data |  6 |     tbb |       21770 ns         7629 ns         2048
data |  6 | avx     |        8347 ns        0.000 ns         2048
data |  6 | avx tbb |       10228 ns        15259 ns         2048

mask |  6 |         |      170789 ns       160217 ns         2048
mask |  6 |     tbb |       42074 ns        53406 ns         2048
mask |  6 | avx     |        8033 ns        0.000 ns         2048
mask |  6 | avx tbb |        9821 ns        22888 ns         2048

data | 12 |         |       49521 ns        38147 ns         2048
data | 12 |     tbb |       16479 ns        15259 ns         2048
data | 12 | avx     |        8243 ns        15259 ns         2048
data | 12 | avx tbb |       10020 ns        15259 ns         2048

mask | 12 |         |      185193 ns       190735 ns         2048
mask | 12 |     tbb |       41243 ns        38147 ns         2048
mask | 12 | avx     |        7368 ns        15259 ns         2048
mask | 12 | avx tbb |        9811 ns        0.000 ns         2048

data | 24 |         |       24652 ns        22888 ns         2048
data | 24 |     tbb |       13805 ns        15259 ns         2048
data | 24 | avx     |        8255 ns         7629 ns         2048
data | 24 | avx tbb |       10096 ns         7629 ns         2048

mask | 24 |         |      168573 ns       175476 ns         2048
mask | 24 |     tbb |       42292 ns        38147 ns         2048
mask | 24 | avx     |        7876 ns         7629 ns         2048
mask | 24 | avx tbb |        9799 ns        15259 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      377624 ns       381470 ns         1024
data |  6 |     tbb |       49893 ns        61035 ns         1024
data |  6 | avx     |       32193 ns        30518 ns         1024
data |  6 | avx tbb |       17354 ns        30518 ns         1024

mask |  6 |         |      681996 ns       701904 ns         1024
mask |  6 |     tbb |      140340 ns       137329 ns         1024
mask |  6 | avx     |       29263 ns        30518 ns         1024
mask |  6 | avx tbb |       16791 ns        45776 ns         1024

data | 12 |         |      191778 ns       198364 ns         1024
data | 12 |     tbb |       31974 ns        45776 ns         1024
data | 12 | avx     |       33073 ns        45776 ns         1024
data | 12 | avx tbb |       17340 ns        15259 ns         1024

mask | 12 |         |      689174 ns       656128 ns         1024
mask | 12 |     tbb |      139251 ns       183105 ns         1024
mask | 12 | avx     |       29253 ns        30518 ns         1024
mask | 12 | avx tbb |       16883 ns        30518 ns         1024

data | 24 |         |       98679 ns       122070 ns         1024
data | 24 |     tbb |       22973 ns        45776 ns         1024
data | 24 | avx     |       33182 ns        45776 ns         1024
data | 24 | avx tbb |       17668 ns        30518 ns         1024

mask | 24 |         |      684896 ns       671387 ns         1024
mask | 24 |     tbb |      139098 ns       152588 ns         1024
mask | 24 | avx     |       29239 ns        30518 ns         1024
mask | 24 | avx tbb |       17324 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1510854 ns      1586914 ns          512
data |  6 |     tbb |      216867 ns       213623 ns          512
data |  6 | avx     |      214449 ns       335693 ns          512
data |  6 | avx tbb |      186050 ns       183105 ns          512

mask |  6 |         |     2850339 ns      2868652 ns          512
mask |  6 |     tbb |      562492 ns       549316 ns          512
mask |  6 | avx     |      197438 ns       183105 ns          512
mask |  6 | avx tbb |      176849 ns       122070 ns          512

data | 12 |         |      783173 ns       915527 ns          512
data | 12 |     tbb |      193877 ns       274658 ns          512
data | 12 | avx     |      214267 ns       274658 ns          512
data | 12 | avx tbb |      180584 ns       213623 ns          512

mask | 12 |         |     2862544 ns      2838135 ns          512
mask | 12 |     tbb |      567531 ns       549316 ns          512
mask | 12 | avx     |      198926 ns       183105 ns          512
mask | 12 | avx tbb |      175773 ns       152588 ns          512

data | 24 |         |      416646 ns       488281 ns          512
data | 24 |     tbb |      199931 ns       244141 ns          512
data | 24 | avx     |      218846 ns       366211 ns          512
data | 24 | avx tbb |      179658 ns       244141 ns          512

mask | 24 |         |     2773717 ns      2777100 ns          512
mask | 24 |     tbb |      561876 ns       549316 ns          512
mask | 24 | avx     |      201666 ns       152588 ns          512
mask | 24 | avx tbb |      176350 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6071317 ns      6103516 ns           64
data |  6 |     tbb |      747575 ns       732422 ns           64
data |  6 | avx     |      895541 ns       976562 ns           64
data |  6 | avx tbb |      638042 ns       976562 ns           64

mask |  6 |         |    12511420 ns     12939453 ns           64
mask |  6 |     tbb |     2110611 ns      2685547 ns           64
mask |  6 | avx     |      803097 ns       732422 ns           64
mask |  6 | avx tbb |      642977 ns       732422 ns           64

data | 12 |         |     3124544 ns      2929688 ns           64
data | 12 |     tbb |      687073 ns      1464844 ns           64
data | 12 | avx     |      949656 ns       732422 ns           64
data | 12 | avx tbb |      640120 ns       976562 ns           64

mask | 12 |         |    12250302 ns     12207031 ns           64
mask | 12 |     tbb |     2111456 ns      2441406 ns           64
mask | 12 | avx     |      803252 ns       976562 ns           64
mask | 12 | avx tbb |      638833 ns       488281 ns           64

data | 24 |         |     1657097 ns      2197266 ns           64
data | 24 |     tbb |      673650 ns      1708984 ns           64
data | 24 | avx     |      883227 ns       488281 ns           64
data | 24 | avx tbb |      639284 ns       976562 ns           64

mask | 24 |         |    11599353 ns     10986328 ns           64
mask | 24 |     tbb |     2131527 ns      2929688 ns           64
mask | 24 | avx     |      808789 ns      1220703 ns           64
mask | 24 | avx tbb |      639903 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24202484 ns     23925781 ns           32
data |  6 |     tbb |     2654228 ns      1953125 ns           32
data |  6 | avx     |     3336031 ns      3417969 ns           32
data |  6 | avx tbb |     2366900 ns      2441406 ns           32

mask |  6 |         |    49463425 ns     49804688 ns           32
mask |  6 |     tbb |     8231747 ns      8300781 ns           32
mask |  6 | avx     |     3123016 ns        0.000 ns           32
mask |  6 | avx tbb |     2365272 ns      2441406 ns           32

data | 12 |         |    12249222 ns     12207031 ns           32
data | 12 |     tbb |     2464737 ns      2441406 ns           32
data | 12 | avx     |     3363538 ns      3906250 ns           32
data | 12 | avx tbb |     2364078 ns      1953125 ns           32

mask | 12 |         |    49130156 ns     48828125 ns           32
mask | 12 |     tbb |     8203812 ns      7812500 ns           32
mask | 12 | avx     |     3176800 ns      5859375 ns           32
mask | 12 | avx tbb |     2363828 ns      2929688 ns           32

data | 24 |         |     6548934 ns      6347656 ns           32
data | 24 |     tbb |     2429756 ns      1464844 ns           32
data | 24 | avx     |     3368316 ns      3906250 ns           32
data | 24 | avx tbb |     2374528 ns      1953125 ns           32

mask | 24 |         |    52138988 ns     53222656 ns           32
mask | 24 |     tbb |     8206319 ns      8789062 ns           32
mask | 24 | avx     |     3173631 ns       976562 ns           32
mask | 24 | avx tbb |     2366194 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    95944019 ns     96679688 ns           16
data |  6 |     tbb |    10040812 ns      8789062 ns           16
data |  6 | avx     |    13534494 ns     12695312 ns           16
data |  6 | avx tbb |     9257594 ns      9765625 ns           16

mask |  6 |         |   203577531 ns    202148438 ns           16
mask |  6 |     tbb |    32527913 ns     32226562 ns           16
mask |  6 | avx     |    12843919 ns     11718750 ns           16
mask |  6 | avx tbb |     9248400 ns     10742188 ns           16

data | 12 |         |    49209400 ns     49804688 ns           16
data | 12 |     tbb |     9454425 ns     11718750 ns           16
data | 12 | avx     |    13409375 ns     14648438 ns           16
data | 12 | avx tbb |     9261112 ns      8789062 ns           16

mask | 12 |         |   206928656 ns    207031250 ns           16
mask | 12 |     tbb |    32434975 ns     31250000 ns           16
mask | 12 | avx     |    12580206 ns      9765625 ns           16
mask | 12 | avx tbb |     9267850 ns      9765625 ns           16

data | 24 |         |    26337844 ns     28320312 ns           16
data | 24 |     tbb |     9438850 ns      9765625 ns           16
data | 24 | avx     |    13557731 ns     13671875 ns           16
data | 24 | avx tbb |     9376950 ns      8789062 ns           16

mask | 24 |         |   203777600 ns    202148438 ns           16
mask | 24 |     tbb |    32609356 ns     31250000 ns           16
mask | 24 | avx     |    12546319 ns     11718750 ns           16
mask | 24 | avx tbb |     9251737 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192519412 ns    195312500 ns            8
data |  6 |     tbb |    19949500 ns     21484375 ns            8
data |  6 | avx     |    30264650 ns     31250000 ns            8
data |  6 | avx tbb |    18609900 ns     19531250 ns            8

mask |  6 |         |   393960288 ns    394531250 ns            8
mask |  6 |     tbb |    64964813 ns     64453125 ns            8
mask |  6 | avx     |    25219100 ns     25390625 ns            8
mask |  6 | avx tbb |    18408675 ns     17578125 ns            8

data | 12 |         |    98180387 ns     97656250 ns            8
data | 12 |     tbb |    18762250 ns     17578125 ns            8
data | 12 | avx     |    28676025 ns     29296875 ns            8
data | 12 | avx tbb |    18408625 ns     19531250 ns            8

mask | 12 |         |   404644450 ns    406250000 ns            8
mask | 12 |     tbb |    64769512 ns     60546875 ns            8
mask | 12 | avx     |    25172988 ns     25390625 ns            8
mask | 12 | avx tbb |    18663062 ns     17578125 ns            8

data | 24 |         |    53398388 ns     52734375 ns            8
data | 24 |     tbb |    18703637 ns     19531250 ns            8
data | 24 | avx     |    30234462 ns     29296875 ns            8
data | 24 | avx tbb |    18425050 ns     17578125 ns            8

mask | 24 |         |   417755500 ns    416015625 ns            8
mask | 24 |     tbb |    64574162 ns     60546875 ns            8
mask | 24 | avx     |    25191212 ns     27343750 ns            8
mask | 24 | avx tbb |    18426187 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   383731513 ns    384765625 ns            8
data |  6 |     tbb |    39699813 ns     35156250 ns            8
data |  6 | avx     |    53990000 ns     52734375 ns            8
data |  6 | avx tbb |    37304837 ns     35156250 ns            8

mask |  6 |         |   828159237 ns    830078125 ns            8
mask |  6 |     tbb |   129490762 ns    121093750 ns            8
mask |  6 | avx     |    50409263 ns     52734375 ns            8
mask |  6 | avx tbb |    36706788 ns     37109375 ns            8

data | 12 |         |   195536338 ns    193359375 ns            8
data | 12 |     tbb |    37618975 ns     39062500 ns            8
data | 12 | avx     |    53884487 ns     54687500 ns            8
data | 12 | avx tbb |    36748075 ns     37109375 ns            8

mask | 12 |         |   804481413 ns    804687500 ns            8
mask | 12 |     tbb |   129996687 ns    119140625 ns            8
mask | 12 | avx     |    50318625 ns     50781250 ns            8
mask | 12 | avx tbb |    36727362 ns     35156250 ns            8

data | 24 |         |   107425988 ns    107421875 ns            8
data | 24 |     tbb |    37336075 ns     35156250 ns            8
data | 24 | avx     |    53637813 ns     50781250 ns            8
data | 24 | avx tbb |    36728837 ns     37109375 ns            8

mask | 24 |         |   804668063 ns    804687500 ns            8
mask | 24 |     tbb |   129132562 ns    121093750 ns            8
mask | 24 | avx     |    50324838 ns     50781250 ns            8
mask | 24 | avx tbb |    36718825 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   767574813 ns    771484375 ns            8
data |  6 |     tbb |    79151012 ns     78125000 ns            8
data |  6 | avx     |   110217263 ns    111328125 ns            8
data |  6 | avx tbb |    75088875 ns     70312500 ns            8

mask |  6 |         |  1650551212 ns   1644531250 ns            8
mask |  6 |     tbb |   257729437 ns    242187500 ns            8
mask |  6 | avx     |   100214950 ns     99609375 ns            8
mask |  6 | avx tbb |    73498013 ns     76171875 ns            8

data | 12 |         |   390648063 ns    390625000 ns            8
data | 12 |     tbb |    75064188 ns     72265625 ns            8
data | 12 | avx     |   109288563 ns    107421875 ns            8
data | 12 | avx tbb |    74173288 ns     74218750 ns            8

mask | 12 |         |  1656613863 ns   1656250000 ns            8
mask | 12 |     tbb |   258158612 ns    244140625 ns            8
mask | 12 | avx     |   100680325 ns     99609375 ns            8
mask | 12 | avx tbb |    73400800 ns     76171875 ns            8

data | 24 |         |   210107638 ns    205078125 ns            8
data | 24 |     tbb |    74766575 ns     76171875 ns            8
data | 24 | avx     |   108052688 ns    109375000 ns            8
data | 24 | avx tbb |    73399237 ns     74218750 ns            8

mask | 24 |         |  1602035125 ns   1605468750 ns            8
mask | 24 |     tbb |   258082563 ns    244140625 ns            8
mask | 24 | avx     |   101030400 ns    101562500 ns            8
mask | 24 | avx tbb |    73399375 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |        7736 ns         7629 ns         4096
data |  6 |     tbb |        9471 ns        11444 ns         4096
data |  6 | avx     |        1019 ns        0.000 ns         4096
data |  6 | avx tbb |        5893 ns        0.000 ns         4096

mask |  6 |         |       11738 ns        11444 ns         4096
mask |  6 |     tbb |        8430 ns         7629 ns         4096
mask |  6 | avx     |         908 ns         3815 ns         4096
mask |  6 | avx tbb |        5522 ns         3815 ns         4096

data | 12 |         |        3967 ns         7629 ns         4096
data | 12 |     tbb |        8646 ns         7629 ns         4096
data | 12 | avx     |        1119 ns         3815 ns         4096
data | 12 | avx tbb |        5699 ns         7629 ns         4096

mask | 12 |         |       12021 ns        11444 ns         4096
mask | 12 |     tbb |        8368 ns        11444 ns         4096
mask | 12 | avx     |        1001 ns        0.000 ns         4096
mask | 12 | avx tbb |        5526 ns         7629 ns         4096

data | 24 |         |        2467 ns         3815 ns         4096
data | 24 |     tbb |        8275 ns        11444 ns         4096
data | 24 | avx     |        1108 ns        0.000 ns         4096
data | 24 | avx tbb |        5676 ns         7629 ns         4096

mask | 24 |         |       11957 ns        11444 ns         4096
mask | 24 |     tbb |        8469 ns        11444 ns         4096
mask | 24 | avx     |         933 ns        0.000 ns         4096
mask | 24 | avx tbb |        5571 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 KiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       25435 ns        26703 ns         4096
data |  6 |     tbb |       11288 ns        15259 ns         4096
data |  6 | avx     |        2411 ns         3815 ns         4096
data |  6 | avx tbb |        6293 ns        11444 ns         4096

mask |  6 |         |       43432 ns        45776 ns         4096
mask |  6 |     tbb |       15271 ns        15259 ns         4096
mask |  6 | avx     |        2127 ns         3815 ns         4096
mask |  6 | avx tbb |        6073 ns         7629 ns         4096

data | 12 |         |       13417 ns        15259 ns         4096
data | 12 |     tbb |        9782 ns         7629 ns         4096
data | 12 | avx     |        2626 ns         3815 ns         4096
data | 12 | avx tbb |        6193 ns         3815 ns         4096

mask | 12 |         |       43417 ns        41962 ns         4096
mask | 12 |     tbb |       15096 ns        19073 ns         4096
mask | 12 | avx     |        2098 ns        0.000 ns         4096
mask | 12 | avx tbb |        6034 ns         3815 ns         4096

data | 24 |         |        7132 ns         3815 ns         4096
data | 24 |     tbb |        8940 ns        11444 ns         4096
data | 24 | avx     |        2554 ns         3815 ns         4096
data | 24 | avx tbb |        6436 ns         3815 ns         4096

mask | 24 |         |       43442 ns        45776 ns         4096
mask | 24 |     tbb |       14865 ns        15259 ns         4096
mask | 24 | avx     |        2095 ns         3815 ns         4096
mask | 24 | avx tbb |        6128 ns         3815 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       96129 ns        99182 ns         2048
data |  6 |     tbb |       21536 ns        22888 ns         2048
data |  6 | avx     |        8257 ns        0.000 ns         2048
data |  6 | avx tbb |       10133 ns        15259 ns         2048

mask |  6 |         |      168301 ns       167847 ns         2048
mask |  6 |     tbb |       42687 ns        45776 ns         2048
mask |  6 | avx     |        7198 ns        15259 ns         2048
mask |  6 | avx tbb |        9803 ns        15259 ns         2048

data | 12 |         |       49494 ns        45776 ns         2048
data | 12 |     tbb |       16778 ns        22888 ns         2048
data | 12 | avx     |        8268 ns         7629 ns         2048
data | 12 | avx tbb |       10176 ns        15259 ns         2048

mask | 12 |         |      168205 ns       160217 ns         2048
mask | 12 |     tbb |       42383 ns        45776 ns         2048
mask | 12 | avx     |        7968 ns         7629 ns         2048
mask | 12 | avx tbb |        9870 ns         7629 ns         2048

data | 24 |         |       26095 ns        15259 ns         2048
data | 24 |     tbb |       13780 ns        15259 ns         2048
data | 24 | avx     |        9075 ns         7629 ns         2048
data | 24 | avx tbb |       10228 ns         7629 ns         2048

mask | 24 |         |      170317 ns       160217 ns         2048
mask | 24 |     tbb |       42650 ns        45776 ns         2048
mask | 24 | avx     |        7413 ns        0.000 ns         2048
mask | 24 | avx tbb |        9830 ns        0.000 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      377700 ns       366211 ns         1024
data |  6 |     tbb |       49384 ns        30518 ns         1024
data |  6 | avx     |       30816 ns        0.000 ns         1024
data |  6 | avx tbb |       17854 ns        30518 ns         1024

mask |  6 |         |      671317 ns       701904 ns         1024
mask |  6 |     tbb |      138342 ns        91553 ns         1024
mask |  6 | avx     |       26970 ns        30518 ns         1024
mask |  6 | avx tbb |       17262 ns        30518 ns         1024

data | 12 |         |      191332 ns       213623 ns         1024
data | 12 |     tbb |       31057 ns        45776 ns         1024
data | 12 | avx     |       30655 ns        30518 ns         1024
data | 12 | avx tbb |       17890 ns        15259 ns         1024

mask | 12 |         |      674974 ns       701904 ns         1024
mask | 12 |     tbb |      138356 ns       106812 ns         1024
mask | 12 | avx     |       26968 ns        30518 ns         1024
mask | 12 | avx tbb |       17045 ns        0.000 ns         1024

data | 24 |         |       98074 ns       106812 ns         1024
data | 24 |     tbb |       22663 ns        15259 ns         1024
data | 24 | avx     |       32823 ns        15259 ns         1024
data | 24 | avx tbb |       17379 ns        30518 ns         1024

mask | 24 |         |      675961 ns       701904 ns         1024
mask | 24 |     tbb |      140635 ns       122070 ns         1024
mask | 24 | avx     |       29119 ns        30518 ns         1024
mask | 24 | avx tbb |       16828 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1509188 ns      1464844 ns          512
data |  6 |     tbb |      221922 ns       244141 ns          512
data |  6 | avx     |      215622 ns        91553 ns          512
data |  6 | avx tbb |      180993 ns       152588 ns          512

mask |  6 |         |     2699943 ns      2746582 ns          512
mask |  6 |     tbb |      569375 ns       610352 ns          512
mask |  6 | avx     |      197998 ns       152588 ns          512
mask |  6 | avx tbb |      180309 ns       183105 ns          512

data | 12 |         |      778416 ns       793457 ns          512
data | 12 |     tbb |      201554 ns       152588 ns          512
data | 12 | avx     |      216890 ns       213623 ns          512
data | 12 | avx tbb |      171313 ns       152588 ns          512

mask | 12 |         |     2694186 ns      2685547 ns          512
mask | 12 |     tbb |      562797 ns       579834 ns          512
mask | 12 | avx     |      199192 ns       274658 ns          512
mask | 12 | avx tbb |      172588 ns       122070 ns          512

data | 24 |         |      417125 ns       518799 ns          512
data | 24 |     tbb |      190379 ns       305176 ns          512
data | 24 | avx     |      216633 ns       213623 ns          512
data | 24 | avx tbb |      180587 ns       152588 ns          512

mask | 24 |         |     2704263 ns      2746582 ns          512
mask | 24 |     tbb |      564142 ns       518799 ns          512
mask | 24 | avx     |      200341 ns       244141 ns          512
mask | 24 | avx tbb |      177598 ns       244141 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6134258 ns      6591797 ns           64
data |  6 |     tbb |      734853 ns       976562 ns           64
data |  6 | avx     |      903431 ns      1220703 ns           64
data |  6 | avx tbb |      642184 ns       488281 ns           64

mask |  6 |         |    10817136 ns     10986328 ns           64
mask |  6 |     tbb |     2108587 ns      2685547 ns           64
mask |  6 | avx     |      813387 ns       976562 ns           64
mask |  6 | avx tbb |      639581 ns       732422 ns           64

data | 12 |         |     3102578 ns      3173828 ns           64
data | 12 |     tbb |      693084 ns       976562 ns           64
data | 12 | avx     |      878902 ns       488281 ns           64
data | 12 | avx tbb |      640359 ns       732422 ns           64

mask | 12 |         |    10869656 ns     11474609 ns           64
mask | 12 |     tbb |     2113264 ns      2685547 ns           64
mask | 12 | avx     |      799995 ns       732422 ns           64
mask | 12 | avx tbb |      632302 ns       732422 ns           64

data | 24 |         |     1696881 ns      1953125 ns           64
data | 24 |     tbb |      668805 ns      1708984 ns           64
data | 24 | avx     |      940547 ns      1220703 ns           64
data | 24 | avx tbb |      645719 ns       732422 ns           64

mask | 24 |         |    10824633 ns     11718750 ns           64
mask | 24 |     tbb |     2120433 ns      1708984 ns           64
mask | 24 | avx     |      803873 ns       976562 ns           64
mask | 24 | avx tbb |      639877 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24059313 ns     24902344 ns           32
data |  6 |     tbb |     2697122 ns      2929688 ns           32
data |  6 | avx     |     3327578 ns      2929688 ns           32
data |  6 | avx tbb |     2372850 ns      2929688 ns           32

mask |  6 |         |    42935544 ns     42480469 ns           32
mask |  6 |     tbb |     8219684 ns      7812500 ns           32
mask |  6 | avx     |     3115338 ns        0.000 ns           32
mask |  6 | avx tbb |     2371856 ns      2929688 ns           32

data | 12 |         |    12262925 ns     12695312 ns           32
data | 12 |     tbb |     2461175 ns      1953125 ns           32
data | 12 | avx     |     3342150 ns      2441406 ns           32
data | 12 | avx tbb |     2360566 ns      2441406 ns           32

mask | 12 |         |    42950297 ns     43457031 ns           32
mask | 12 |     tbb |     8136025 ns      7324219 ns           32
mask | 12 | avx     |     3162091 ns      7812500 ns           32
mask | 12 | avx tbb |     2364353 ns      2441406 ns           32

data | 24 |         |     6564125 ns      6835938 ns           32
data | 24 |     tbb |     2422950 ns      2441406 ns           32
data | 24 | avx     |     3370316 ns      3906250 ns           32
data | 24 | avx tbb |     2361338 ns      1953125 ns           32

mask | 24 |         |    42949163 ns     42968750 ns           32
mask | 24 |     tbb |     8169581 ns      7324219 ns           32
mask | 24 | avx     |     3216225 ns      4394531 ns           32
mask | 24 | avx tbb |     2361766 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    95940169 ns     96679688 ns           16
data |  6 |     tbb |    10201869 ns      9765625 ns           16
data |  6 | avx     |    13435037 ns     13671875 ns           16
data |  6 | avx tbb |     9286219 ns      7812500 ns           16

mask |  6 |         |   172009731 ns    171875000 ns           16
mask |  6 |     tbb |    32524956 ns     32226562 ns           16
mask |  6 | avx     |    12534175 ns     11718750 ns           16
mask |  6 | avx tbb |     9255269 ns      9765625 ns           16

data | 12 |         |    49043962 ns     49804688 ns           16
data | 12 |     tbb |     9516819 ns      9765625 ns           16
data | 12 | avx     |    13557506 ns     12695312 ns           16
data | 12 | avx tbb |     9251087 ns      9765625 ns           16

mask | 12 |         |   171835369 ns    171875000 ns           16
mask | 12 |     tbb |    32184638 ns     34179688 ns           16
mask | 12 | avx     |    12521700 ns      9765625 ns           16
mask | 12 | avx tbb |     9244638 ns      8789062 ns           16

data | 24 |         |    26529569 ns     29296875 ns           16
data | 24 |     tbb |     9428156 ns     10742188 ns           16
data | 24 | avx     |    13429775 ns     11718750 ns           16
data | 24 | avx tbb |     9388819 ns     11718750 ns           16

mask | 24 |         |   172045075 ns    171875000 ns           16
mask | 24 |     tbb |    32548588 ns     31250000 ns           16
mask | 24 | avx     |    13111675 ns     16601562 ns           16
mask | 24 | avx tbb |     9265044 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192689275 ns    189453125 ns            8
data |  6 |     tbb |    19742287 ns     19531250 ns            8
data |  6 | avx     |    26981287 ns     29296875 ns            8
data |  6 | avx tbb |    18402687 ns     19531250 ns            8

mask |  6 |         |   343434575 ns    343750000 ns            8
mask |  6 |     tbb |    64320425 ns     62500000 ns            8
mask |  6 | avx     |    25048300 ns     23437500 ns            8
mask |  6 | avx tbb |    18428462 ns     17578125 ns            8

data | 12 |         |   100309875 ns    101562500 ns            8
data | 12 |     tbb |    18890112 ns     17578125 ns            8
data | 12 | avx     |    26931563 ns     27343750 ns            8
data | 12 | avx tbb |    18653475 ns     17578125 ns            8

mask | 12 |         |   343791787 ns    343750000 ns            8
mask | 12 |     tbb |    65039188 ns     62500000 ns            8
mask | 12 | avx     |    26879250 ns     25390625 ns            8
mask | 12 | avx tbb |    18409912 ns     17578125 ns            8

data | 24 |         |    51944838 ns     52734375 ns            8
data | 24 |     tbb |    18677650 ns     15625000 ns            8
data | 24 | avx     |    28862738 ns     31250000 ns            8
data | 24 | avx tbb |    18419813 ns     19531250 ns            8

mask | 24 |         |   347020350 ns    343750000 ns            8
mask | 24 |     tbb |    64290900 ns     62500000 ns            8
mask | 24 | avx     |    25109675 ns     25390625 ns            8
mask | 24 | avx tbb |    18413037 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   383761925 ns    382812500 ns            8
data |  6 |     tbb |    39835713 ns     41015625 ns            8
data |  6 | avx     |    53850237 ns     54687500 ns            8
data |  6 | avx tbb |    36749738 ns     37109375 ns            8

mask |  6 |         |   686983913 ns    687500000 ns            8
mask |  6 |     tbb |   128068062 ns    121093750 ns            8
mask |  6 | avx     |    54237313 ns     54687500 ns            8
mask |  6 | avx tbb |    36733025 ns     35156250 ns            8

data | 12 |         |   195822512 ns    197265625 ns            8
data | 12 |     tbb |    38530413 ns     37109375 ns            8
data | 12 | avx     |    54245363 ns     56640625 ns            8
data | 12 | avx tbb |    36683150 ns     33203125 ns            8

mask | 12 |         |   686799275 ns    687500000 ns            8
mask | 12 |     tbb |   128455075 ns    119140625 ns            8
mask | 12 | avx     |    50725087 ns     50781250 ns            8
mask | 12 | avx tbb |    36705475 ns     31250000 ns            8

data | 24 |         |   104004375 ns    105468750 ns            8
data | 24 |     tbb |    37417312 ns     37109375 ns            8
data | 24 | avx     |    58126462 ns     58593750 ns            8
data | 24 | avx tbb |    36746150 ns     39062500 ns            8

mask | 24 |         |   686736700 ns    687500000 ns            8
mask | 24 |     tbb |   128302325 ns    119140625 ns            8
mask | 24 | avx     |    50386100 ns     50781250 ns            8
mask | 24 | avx tbb |    36761637 ns     31250000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   768356913 ns    767578125 ns            8
data |  6 |     tbb |    78455925 ns     74218750 ns            8
data |  6 | avx     |   108522825 ns    107421875 ns            8
data |  6 | avx tbb |    73345025 ns     64453125 ns            8

mask |  6 |         |  1374243500 ns   1375000000 ns            8
mask |  6 |     tbb |   257579062 ns    240234375 ns            8
mask |  6 | avx     |   100606863 ns     99609375 ns            8
mask |  6 | avx tbb |    73397637 ns     78125000 ns            8

data | 12 |         |   396542350 ns    394531250 ns            8
data | 12 |     tbb |    75105512 ns     72265625 ns            8
data | 12 | avx     |   109085963 ns    107421875 ns            8
data | 12 | avx tbb |    73283913 ns     74218750 ns            8

mask | 12 |         |  1374164450 ns   1373046875 ns            8
mask | 12 |     tbb |   258833150 ns    244140625 ns            8
mask | 12 | avx     |   100466537 ns     99609375 ns            8
mask | 12 | avx tbb |    73387388 ns     70312500 ns            8

data | 24 |         |   208137350 ns    208984375 ns            8
data | 24 |     tbb |    74612125 ns     74218750 ns            8
data | 24 | avx     |   110332638 ns    113281250 ns            8
data | 24 | avx tbb |    73379000 ns     76171875 ns            8

mask | 24 |         |  1373966763 ns   1373046875 ns            8
mask | 24 |     tbb |   257946163 ns    238281250 ns            8
mask | 24 | avx     |   100907213 ns     99609375 ns            8
mask | 24 | avx tbb |    73835500 ns     74218750 ns            8
```

</details>
