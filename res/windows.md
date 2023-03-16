# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1586 ns        0.000 ns         4096
find avx tbb 06 16 kb        1010 ns         3815 ns         4096
find         06 16 kb        7362 ns         3815 ns         4096
find     tbb 06 16 kb        7629 ns         7629 ns         4096
find avx     12 16 kb        1024 ns        0.000 ns         4096
find avx tbb 12 16 kb        1019 ns        0.000 ns         4096
find         12 16 kb        4174 ns         7629 ns         4096
find     tbb 12 16 kb        7120 ns         7629 ns         4096
find avx     24 16 kb        1094 ns        0.000 ns         4096
find avx tbb 24 16 kb        1105 ns         3815 ns         4096
find         24 16 kb        2610 ns         3815 ns         4096
find     tbb 24 16 kb        6972 ns         7629 ns         4096

scan avx     06 16 kb       11769 ns        11444 ns         4096
scan avx tbb 06 16 kb       11104 ns        11444 ns         4096
scan         06 16 kb       11079 ns        11444 ns         4096
scan     tbb 06 16 kb        7617 ns         7629 ns         4096
scan avx     12 16 kb       11059 ns         7629 ns         4096
scan avx tbb 12 16 kb       11075 ns        11444 ns         4096
scan         12 16 kb       11080 ns        11444 ns         4096
scan     tbb 12 16 kb        7611 ns         7629 ns         4096
scan avx     24 16 kb       11163 ns        11444 ns         4096
scan avx tbb 24 16 kb       11080 ns        11444 ns         4096
scan         24 16 kb       11396 ns        11444 ns         4096
scan     tbb 24 16 kb        7659 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2119 ns         3815 ns         4096
find avx tbb 06 64 kb        2116 ns         3815 ns         4096
find         06 64 kb       26928 ns        26703 ns         4096
find     tbb 06 64 kb       10136 ns        11444 ns         4096
find avx     12 64 kb        2140 ns        0.000 ns         4096
find avx tbb 12 64 kb        2138 ns         3815 ns         4096
find         12 64 kb       13764 ns        15259 ns         4096
find     tbb 12 64 kb        8518 ns        11444 ns         4096
find avx     24 64 kb        2168 ns         3815 ns         4096
find avx tbb 24 64 kb        2217 ns        0.000 ns         4096
find         24 64 kb        7418 ns         7629 ns         4096
find     tbb 24 64 kb        7664 ns         3815 ns         4096

scan avx     06 64 kb       42582 ns        45776 ns         4096
scan avx tbb 06 64 kb       43191 ns        41962 ns         4096
scan         06 64 kb       43877 ns        45776 ns         4096
scan     tbb 06 64 kb       14305 ns        15259 ns         4096
scan avx     12 64 kb       42597 ns        45776 ns         4096
scan avx tbb 12 64 kb       42474 ns        41962 ns         4096
scan         12 64 kb       42691 ns        41962 ns         4096
scan     tbb 12 64 kb       14406 ns        15259 ns         4096
scan avx     24 64 kb       42620 ns        41962 ns         4096
scan avx tbb 24 64 kb       42849 ns        45776 ns         4096
scan         24 64 kb       42597 ns        45776 ns         4096
scan     tbb 24 64 kb       14519 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7129 ns         7629 ns         2048
find avx tbb 06 256 kb       7177 ns        0.000 ns         2048
find         06 256 kb     103971 ns       106812 ns         2048
find     tbb 06 256 kb      20731 ns        30518 ns         2048
find avx     12 256 kb       7215 ns        0.000 ns         2048
find avx tbb 12 256 kb       7319 ns         7629 ns         2048
find         12 256 kb      53360 ns        61035 ns         2048
find     tbb 12 256 kb      15720 ns        22888 ns         2048
find avx     24 256 kb       7351 ns         7629 ns         2048
find avx tbb 24 256 kb       7567 ns        15259 ns         2048
find         24 256 kb      27284 ns        30518 ns         2048
find     tbb 24 256 kb      12858 ns         7629 ns         2048

scan avx     06 256 kb     168784 ns       175476 ns         2048
scan avx tbb 06 256 kb     168568 ns       160217 ns         2048
scan         06 256 kb     172493 ns       167847 ns         2048
scan     tbb 06 256 kb      42566 ns        53406 ns         2048
scan avx     12 256 kb     168800 ns       175476 ns         2048
scan avx tbb 12 256 kb     171249 ns       175476 ns         2048
scan         12 256 kb     168694 ns       175476 ns         2048
scan     tbb 12 256 kb      42597 ns        45776 ns         2048
scan avx     24 256 kb     171127 ns       167847 ns         2048
scan avx tbb 24 256 kb     168543 ns       167847 ns         2048
scan         24 256 kb     168482 ns       160217 ns         2048
scan     tbb 24 256 kb      41941 ns        22888 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25638 ns        61035 ns         1024
find avx tbb 06 1 mb        18149 ns        0.000 ns         1024
find         06 1 mb       423614 ns       411987 ns         1024
find     tbb 06 1 mb        52482 ns        15259 ns         1024
find avx     12 1 mb        25742 ns        45776 ns         1024
find avx tbb 12 1 mb        18339 ns        30518 ns         1024
find         12 1 mb       211546 ns       228882 ns         1024
find     tbb 12 1 mb        31946 ns        30518 ns         1024
find avx     24 1 mb        28229 ns        15259 ns         1024
find avx tbb 24 1 mb        17976 ns        30518 ns         1024
find         24 1 mb       109854 ns        91553 ns         1024
find     tbb 24 1 mb        23003 ns        61035 ns         1024

scan avx     06 1 mb       671463 ns       640869 ns         1024
scan avx tbb 06 1 mb       145096 ns       183105 ns         1024
scan         06 1 mb       675552 ns       686646 ns         1024
scan     tbb 06 1 mb       145433 ns       183105 ns         1024
scan avx     12 1 mb       676583 ns       671387 ns         1024
scan avx tbb 12 1 mb       144903 ns       106812 ns         1024
scan         12 1 mb       676318 ns       656128 ns         1024
scan     tbb 12 1 mb       144562 ns       183105 ns         1024
scan avx     24 1 mb       674765 ns       701904 ns         1024
scan avx tbb 24 1 mb       145497 ns       152588 ns         1024
scan         24 1 mb       675769 ns       671387 ns         1024
scan     tbb 24 1 mb       147859 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       188781 ns       183105 ns          512
find avx tbb 06 4 mb       174482 ns       183105 ns          512
find         06 4 mb      1672410 ns      1739502 ns          512
find     tbb 06 4 mb       240228 ns       213623 ns          512
find avx     12 4 mb       190136 ns       213623 ns          512
find avx tbb 12 4 mb       178804 ns       213623 ns          512
find         12 4 mb       861785 ns       946045 ns          512
find     tbb 12 4 mb       209573 ns       213623 ns          512
find avx     24 4 mb       197020 ns       183105 ns          512
find avx tbb 24 4 mb       188736 ns       244141 ns          512
find         24 4 mb       455333 ns       457764 ns          512
find     tbb 24 4 mb       196245 ns       152588 ns          512

scan avx     06 4 mb      2716649 ns      2746582 ns          512
scan avx tbb 06 4 mb       600754 ns       701904 ns          512
scan         06 4 mb      2696634 ns      2685547 ns          512
scan     tbb 06 4 mb       597895 ns       671387 ns          512
scan avx     12 4 mb      2698942 ns      2716064 ns          512
scan avx tbb 12 4 mb       599283 ns       549316 ns          512
scan         12 4 mb      2715500 ns      2746582 ns          512
scan     tbb 12 4 mb       599761 ns       640869 ns          512
scan avx     24 4 mb      2708843 ns      2655029 ns          512
scan avx tbb 24 4 mb       597210 ns       640869 ns          512
scan         24 4 mb      2775001 ns      2746582 ns          512
scan     tbb 24 4 mb       599124 ns       579834 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      767894 ns      1464844 ns           64
find avx tbb 06 16 mb      631967 ns       244141 ns           64
find         06 16 mb     6804950 ns      6835938 ns           64
find     tbb 06 16 mb      855711 ns       976562 ns           64
find avx     12 16 mb      771450 ns       732422 ns           64
find avx tbb 12 16 mb      639566 ns       732422 ns           64
find         12 16 mb     3499358 ns      3173828 ns           64
find     tbb 12 16 mb      715256 ns      1220703 ns           64
find avx     24 16 mb      805897 ns      1220703 ns           64
find avx tbb 24 16 mb      646528 ns       244141 ns           64
find         24 16 mb     1825867 ns      2197266 ns           64
find     tbb 24 16 mb      689523 ns       732422 ns           64

scan avx     06 16 mb    10846917 ns     10986328 ns           64
scan avx tbb 06 16 mb     2205063 ns      2441406 ns           64
scan         06 16 mb    10809959 ns     10009766 ns           64
scan     tbb 06 16 mb     2197103 ns      2441406 ns           64
scan avx     12 16 mb    10806436 ns     10253906 ns           64
scan avx tbb 12 16 mb     2198803 ns      2197266 ns           64
scan         12 16 mb    10799525 ns     10986328 ns           64
scan     tbb 12 16 mb     2170292 ns      1708984 ns           64
scan avx     24 16 mb    10815623 ns     10986328 ns           64
scan avx tbb 24 16 mb     2202344 ns      2197266 ns           64
scan         24 16 mb    10801709 ns     10986328 ns           64
scan     tbb 24 16 mb     2199792 ns      2685547 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3014088 ns        0.000 ns           32
find avx tbb 06 64 mb     2368747 ns      1464844 ns           32
find         06 64 mb    26526625 ns     31250000 ns           32
find     tbb 06 64 mb     3007137 ns      4882812 ns           32
find avx     12 64 mb     2990594 ns        0.000 ns           32
find avx tbb 12 64 mb     2379100 ns      2441406 ns           32
find         12 64 mb    13505919 ns     14160156 ns           32
find     tbb 12 64 mb     2541166 ns      2929688 ns           32
find avx     24 64 mb     3088931 ns        0.000 ns           32
find avx tbb 24 64 mb     2382894 ns      3417969 ns           32
find         24 64 mb     7072016 ns      7812500 ns           32
find     tbb 24 64 mb     2473603 ns      2441406 ns           32

scan avx     06 64 mb    43078181 ns     42968750 ns           32
scan avx tbb 06 64 mb     8438222 ns      8300781 ns           32
scan         06 64 mb    42949916 ns     42480469 ns           32
scan     tbb 06 64 mb     8426959 ns      9277344 ns           32
scan avx     12 64 mb    42987162 ns     42968750 ns           32
scan avx tbb 12 64 mb     8440359 ns      6835938 ns           32
scan         12 64 mb    43009847 ns     42480469 ns           32
scan     tbb 12 64 mb     8406781 ns      7812500 ns           32
scan avx     24 64 mb    42983062 ns     42968750 ns           32
scan avx tbb 24 64 mb     8526378 ns      9277344 ns           32
scan         24 64 mb    43002362 ns     43945312 ns           32
scan     tbb 24 64 mb     8493691 ns      9277344 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12041656 ns     15625000 ns           16
find avx tbb 06 256 mb    9245475 ns      7812500 ns           16
find         06 256 mb  106514237 ns    104492188 ns           16
find     tbb 06 256 mb   11359319 ns     15625000 ns           16
find avx     12 256 mb   12069362 ns     13671875 ns           16
find avx tbb 12 256 mb    9256231 ns      8789062 ns           16
find         12 256 mb   54420500 ns     55664062 ns           16
find     tbb 12 256 mb    9694269 ns      7812500 ns           16
find avx     24 256 mb   12339481 ns     12695312 ns           16
find avx tbb 24 256 mb    9368869 ns      8789062 ns           16
find         24 256 mb   28588737 ns     25390625 ns           16
find     tbb 24 256 mb    9442825 ns      8789062 ns           16

scan avx     06 256 mb  171756275 ns    171875000 ns           16
scan avx tbb 06 256 mb   33417206 ns     33203125 ns           16
scan         06 256 mb  172132444 ns    171875000 ns           16
scan     tbb 06 256 mb   33719213 ns     33203125 ns           16
scan avx     12 256 mb  172680425 ns    172851562 ns           16
scan avx tbb 12 256 mb   34070862 ns     33203125 ns           16
scan         12 256 mb  172336619 ns    171875000 ns           16
scan     tbb 12 256 mb   33955438 ns     32226562 ns           16
scan avx     24 256 mb  172009056 ns    171875000 ns           16
scan avx tbb 24 256 mb   33448512 ns     32226562 ns           16
scan         24 256 mb  171773338 ns    171875000 ns           16
scan     tbb 24 256 mb   33366119 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24129088 ns     21484375 ns            8
find avx tbb 06 512 mb   18393575 ns     19531250 ns            8
find         06 512 mb  212002250 ns    212890625 ns            8
find     tbb 06 512 mb   22566575 ns     15625000 ns            8
find avx     12 512 mb   28909975 ns     29296875 ns            8
find avx tbb 12 512 mb   18434363 ns     19531250 ns            8
find         12 512 mb  109493275 ns    109375000 ns            8
find     tbb 12 512 mb   19347800 ns     17578125 ns            8
find avx     24 512 mb   24778512 ns     25390625 ns            8
find avx tbb 24 512 mb   18464950 ns     19531250 ns            8
find         24 512 mb   56283575 ns     58593750 ns            8
find     tbb 24 512 mb   19193000 ns     19531250 ns            8

scan avx     06 512 mb  344021988 ns    343750000 ns            8
scan avx tbb 06 512 mb   68148562 ns     60546875 ns            8
scan         06 512 mb  344959300 ns    347656250 ns            8
scan     tbb 06 512 mb   66429162 ns     70312500 ns            8
scan avx     12 512 mb  345136863 ns    345703125 ns            8
scan avx tbb 12 512 mb   68191425 ns     60546875 ns            8
scan         12 512 mb  345807313 ns    345703125 ns            8
scan     tbb 12 512 mb   67101262 ns     62500000 ns            8
scan avx     24 512 mb  344493150 ns    343750000 ns            8
scan avx tbb 24 512 mb   67047225 ns     60546875 ns            8
scan         24 512 mb  344707575 ns    345703125 ns            8
scan     tbb 24 512 mb   67083263 ns     64453125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48250900 ns     48828125 ns            8
find avx tbb 06 1 gb     36753725 ns     33203125 ns            8
find         06 1 gb    423551250 ns    421875000 ns            8
find     tbb 06 1 gb     45549488 ns     46875000 ns            8
find avx     12 1 gb     48223925 ns     50781250 ns            8
find avx tbb 12 1 gb     36705913 ns     33203125 ns            8
find         12 1 gb    215925688 ns    212890625 ns            8
find     tbb 12 1 gb     38398775 ns     35156250 ns            8
find avx     24 1 gb     49570775 ns     48828125 ns            8
find avx tbb 24 1 gb     37422688 ns     35156250 ns            8
find         24 1 gb    112614125 ns    111328125 ns            8
find     tbb 24 1 gb     37374888 ns     35156250 ns            8

scan avx     06 1 gb    687995425 ns    687500000 ns            8
scan avx tbb 06 1 gb    131467850 ns    121093750 ns            8
scan         06 1 gb    687458112 ns    687500000 ns            8
scan     tbb 06 1 gb    135844937 ns    117187500 ns            8
scan avx     12 1 gb    688193425 ns    689453125 ns            8
scan avx tbb 12 1 gb    132525737 ns    119140625 ns            8
scan         12 1 gb    688012713 ns    689453125 ns            8
scan     tbb 12 1 gb    133274538 ns    123046875 ns            8
scan avx     24 1 gb    688383312 ns    687500000 ns            8
scan avx tbb 24 1 gb    134423987 ns    125000000 ns            8
scan         24 1 gb    687933587 ns    687500000 ns            8
scan     tbb 24 1 gb    135300888 ns    125000000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     99674950 ns     99609375 ns            8
find avx tbb 06 2 gb     73696350 ns     64453125 ns            8
find         06 2 gb    850478700 ns    855468750 ns            8
find     tbb 06 2 gb     90339950 ns     76171875 ns            8
find avx     12 2 gb     97409312 ns     95703125 ns            8
find avx tbb 12 2 gb     73379450 ns     76171875 ns            8
find         12 2 gb    432066725 ns    431640625 ns            8
find     tbb 12 2 gb     76656488 ns     74218750 ns            8
find avx     24 2 gb    102129550 ns    105468750 ns            8
find avx tbb 24 2 gb     73592238 ns     76171875 ns            8
find         24 2 gb    233154838 ns    236328125 ns            8
find     tbb 24 2 gb     76908725 ns     76171875 ns            8

scan avx     06 2 gb   1374750263 ns   1375000000 ns            8
scan avx tbb 06 2 gb    264754350 ns    240234375 ns            8
scan         06 2 gb   1378987612 ns   1382812500 ns            8
scan     tbb 06 2 gb    267432887 ns    240234375 ns            8
scan avx     12 2 gb   1375901662 ns   1375000000 ns            8
scan avx tbb 12 2 gb    268046625 ns    238281250 ns            8
scan         12 2 gb   1375187625 ns   1375000000 ns            8
scan     tbb 12 2 gb    263420250 ns    248046875 ns            8
scan avx     24 2 gb   1376516612 ns   1375000000 ns            8
scan avx tbb 24 2 gb    264045788 ns    244140625 ns            8
scan         24 2 gb   1375576413 ns   1376953125 ns            8
scan     tbb 24 2 gb    267043987 ns    242187500 ns            8
```

</details>


## LLVM (clang)


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1633 ns        0.000 ns         4096
find avx tbb 06 16 kb        1060 ns         3815 ns         4096
find         06 16 kb        6619 ns         7629 ns         4096
find     tbb 06 16 kb        7440 ns         3815 ns         4096
find avx     12 16 kb        1022 ns         3815 ns         4096
find avx tbb 12 16 kb        1016 ns        0.000 ns         4096
find         12 16 kb        3702 ns         3815 ns         4096
find     tbb 12 16 kb        6858 ns         7629 ns         4096
find avx     24 16 kb        1208 ns         3815 ns         4096
find avx tbb 24 16 kb        1264 ns        0.000 ns         4096
find         24 16 kb        2423 ns         3815 ns         4096
find     tbb 24 16 kb        6749 ns         7629 ns         4096

scan avx     06 16 kb       11953 ns        11444 ns         4096
scan avx tbb 06 16 kb       11035 ns        11444 ns         4096
scan         06 16 kb       11036 ns        11444 ns         4096
scan     tbb 06 16 kb        7286 ns         7629 ns         4096
scan avx     12 16 kb       11037 ns        11444 ns         4096
scan avx tbb 12 16 kb       11041 ns        11444 ns         4096
scan         12 16 kb       11066 ns        15259 ns         4096
scan     tbb 12 16 kb        7310 ns         7629 ns         4096
scan avx     24 16 kb       11051 ns        11444 ns         4096
scan avx tbb 24 16 kb       11248 ns        11444 ns         4096
scan         24 16 kb       11914 ns        11444 ns         4096
scan     tbb 24 16 kb        7433 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2310 ns         3815 ns         4096
find avx tbb 06 64 kb        2280 ns         3815 ns         4096
find         06 64 kb       24154 ns        26703 ns         4096
find     tbb 06 64 kb        9637 ns        11444 ns         4096
find avx     12 64 kb        2214 ns         3815 ns         4096
find avx tbb 12 64 kb        2217 ns         3815 ns         4096
find         12 64 kb       12501 ns        15259 ns         4096
find     tbb 12 64 kb        8193 ns         3815 ns         4096
find avx     24 64 kb        2671 ns         3815 ns         4096
find avx tbb 24 64 kb        2664 ns         3815 ns         4096
find         24 64 kb        6668 ns         3815 ns         4096
find     tbb 24 64 kb        7457 ns        11444 ns         4096

scan avx     06 64 kb       42550 ns        41962 ns         4096
scan avx tbb 06 64 kb       42493 ns        45776 ns         4096
scan         06 64 kb       42505 ns        41962 ns         4096
scan     tbb 06 64 kb       14122 ns        15259 ns         4096
scan avx     12 64 kb       42477 ns        45776 ns         4096
scan avx tbb 12 64 kb       42482 ns        38147 ns         4096
scan         12 64 kb       42529 ns        41962 ns         4096
scan     tbb 12 64 kb       14077 ns        15259 ns         4096
scan avx     24 64 kb       42478 ns        45776 ns         4096
scan avx tbb 24 64 kb       42475 ns        41962 ns         4096
scan         24 64 kb       42872 ns        38147 ns         4096
scan     tbb 24 64 kb       13919 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7698 ns        0.000 ns         2048
find avx tbb 06 256 kb       7681 ns         7629 ns         2048
find         06 256 kb      94343 ns        99182 ns         2048
find     tbb 06 256 kb      20536 ns        30518 ns         2048
find avx     12 256 kb       7463 ns        15259 ns         2048
find avx tbb 12 256 kb       7422 ns        0.000 ns         2048
find         12 256 kb      47810 ns        53406 ns         2048
find     tbb 12 256 kb      14982 ns        15259 ns         2048
find avx     24 256 kb       9285 ns         7629 ns         2048
find avx tbb 24 256 kb       9318 ns        15259 ns         2048
find         24 256 kb      24605 ns        30518 ns         2048
find     tbb 24 256 kb      12581 ns         7629 ns         2048

scan avx     06 256 kb     168358 ns       167847 ns         2048
scan avx tbb 06 256 kb     168331 ns       167847 ns         2048
scan         06 256 kb     168403 ns       152588 ns         2048
scan     tbb 06 256 kb      42505 ns        30518 ns         2048
scan avx     12 256 kb     169541 ns       175476 ns         2048
scan avx tbb 12 256 kb     168240 ns       175476 ns         2048
scan         12 256 kb     168306 ns       175476 ns         2048
scan     tbb 12 256 kb      42958 ns        61035 ns         2048
scan avx     24 256 kb     169934 ns       167847 ns         2048
scan avx tbb 24 256 kb     168698 ns       167847 ns         2048
scan         24 256 kb     168639 ns       160217 ns         2048
scan     tbb 24 256 kb      41620 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        28082 ns        15259 ns         1024
find avx tbb 06 1 mb        19092 ns        15259 ns         1024
find         06 1 mb       379907 ns       335693 ns         1024
find     tbb 06 1 mb        48872 ns        45776 ns         1024
find avx     12 1 mb        27464 ns        61035 ns         1024
find avx tbb 12 1 mb        18555 ns        0.000 ns         1024
find         12 1 mb       194096 ns       198364 ns         1024
find     tbb 12 1 mb        29994 ns        61035 ns         1024
find avx     24 1 mb        34734 ns        30518 ns         1024
find avx tbb 24 1 mb        18791 ns        30518 ns         1024
find         24 1 mb        98193 ns       106812 ns         1024
find     tbb 24 1 mb        22547 ns        30518 ns         1024

scan avx     06 1 mb       675042 ns       671387 ns         1024
scan avx tbb 06 1 mb       147017 ns       137329 ns         1024
scan         06 1 mb       676155 ns       686646 ns         1024
scan     tbb 06 1 mb       145072 ns       167847 ns         1024
scan avx     12 1 mb       675200 ns       640869 ns         1024
scan avx tbb 12 1 mb       145996 ns       167847 ns         1024
scan         12 1 mb       676456 ns       701904 ns         1024
scan     tbb 12 1 mb       144500 ns       198364 ns         1024
scan avx     24 1 mb       675265 ns       656128 ns         1024
scan avx tbb 24 1 mb       146723 ns       152588 ns         1024
scan         24 1 mb       675946 ns       640869 ns         1024
scan     tbb 24 1 mb       145929 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       192876 ns        91553 ns          512
find avx tbb 06 4 mb       176036 ns       274658 ns          512
find         06 4 mb      1523197 ns      1586914 ns          512
find     tbb 06 4 mb       231816 ns       274658 ns          512
find avx     12 4 mb       194788 ns       152588 ns          512
find avx tbb 12 4 mb       179936 ns       122070 ns          512
find         12 4 mb       783225 ns       946045 ns          512
find     tbb 12 4 mb       205251 ns        91553 ns          512
find avx     24 4 mb       229500 ns        91553 ns          512
find avx tbb 24 4 mb       174817 ns       244141 ns          512
find         24 4 mb       420645 ns       396729 ns          512
find     tbb 24 4 mb       193950 ns       152588 ns          512

scan avx     06 4 mb      2699616 ns      2716064 ns          512
scan avx tbb 06 4 mb       606711 ns       549316 ns          512
scan         06 4 mb      2700595 ns      2777100 ns          512
scan     tbb 06 4 mb       597658 ns       579834 ns          512
scan avx     12 4 mb      2698534 ns      2716064 ns          512
scan avx tbb 12 4 mb       602224 ns       640869 ns          512
scan         12 4 mb      2694482 ns      2655029 ns          512
scan     tbb 12 4 mb       598407 ns       549316 ns          512
scan avx     24 4 mb      2701245 ns      2716064 ns          512
scan avx tbb 24 4 mb       603252 ns       549316 ns          512
scan         24 4 mb      2694811 ns      2746582 ns          512
scan     tbb 24 4 mb       595450 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      778283 ns       732422 ns           64
find avx tbb 06 16 mb      642044 ns       732422 ns           64
find         06 16 mb     6065302 ns      5615234 ns           64
find     tbb 06 16 mb      806306 ns       732422 ns           64
find avx     12 16 mb      779173 ns       488281 ns           64
find avx tbb 12 16 mb      637353 ns       244141 ns           64
find         12 16 mb     3159730 ns      3173828 ns           64
find     tbb 12 16 mb      712441 ns       732422 ns           64
find avx     24 16 mb      925000 ns       976562 ns           64
find avx tbb 24 16 mb      652242 ns       244141 ns           64
find         24 16 mb     1682163 ns      2197266 ns           64
find     tbb 24 16 mb      673317 ns        0.000 ns           64

scan avx     06 16 mb    10858583 ns     10742188 ns           64
scan avx tbb 06 16 mb     2223691 ns      2441406 ns           64
scan         06 16 mb    10780756 ns     10009766 ns           64
scan     tbb 06 16 mb     2176958 ns      1953125 ns           64
scan avx     12 16 mb    10774280 ns     10253906 ns           64
scan avx tbb 12 16 mb     2207330 ns      2685547 ns           64
scan         12 16 mb    10826255 ns     10253906 ns           64
scan     tbb 12 16 mb     2210042 ns      2197266 ns           64
scan avx     24 16 mb    10788491 ns      9765625 ns           64
scan avx tbb 24 16 mb     2218466 ns      1953125 ns           64
scan         24 16 mb    10804311 ns      9521484 ns           64
scan     tbb 24 16 mb     2192413 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3057628 ns        0.000 ns           32
find avx tbb 06 64 mb     2376047 ns      1953125 ns           32
find         06 64 mb    24078019 ns     23437500 ns           32
find     tbb 06 64 mb     2795513 ns      5859375 ns           32
find avx     12 64 mb     3023794 ns        0.000 ns           32
find avx tbb 12 64 mb     2382797 ns      1953125 ns           32
find         12 64 mb    12374428 ns     12207031 ns           32
find     tbb 12 64 mb     2532175 ns       976562 ns           32
find avx     24 64 mb     3679837 ns      4394531 ns           32
find avx tbb 24 64 mb     2403284 ns      1953125 ns           32
find         24 64 mb     6519931 ns      6347656 ns           32
find     tbb 24 64 mb     2461000 ns      1953125 ns           32

scan avx     06 64 mb    43033222 ns     42968750 ns           32
scan avx tbb 06 64 mb     8501050 ns      8300781 ns           32
scan         06 64 mb    43017116 ns     43457031 ns           32
scan     tbb 06 64 mb     8331481 ns      8300781 ns           32
scan avx     12 64 mb    43045038 ns     43457031 ns           32
scan avx tbb 12 64 mb     8605072 ns      7324219 ns           32
scan         12 64 mb    42980550 ns     42968750 ns           32
scan     tbb 12 64 mb     8440384 ns      6347656 ns           32
scan avx     24 64 mb    43073978 ns     42968750 ns           32
scan avx tbb 24 64 mb     8554738 ns      8300781 ns           32
scan         24 64 mb    43060122 ns     43457031 ns           32
scan     tbb 24 64 mb     8402037 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12494694 ns     15625000 ns           16
find avx tbb 06 256 mb    9340163 ns      8789062 ns           16
find         06 256 mb   96230431 ns     96679688 ns           16
find     tbb 06 256 mb   10735725 ns        0.000 ns           16
find avx     12 256 mb   13258106 ns     13671875 ns           16
find avx tbb 12 256 mb    9266294 ns      8789062 ns           16
find         12 256 mb   49660081 ns     48828125 ns           16
find     tbb 12 256 mb    9659463 ns      9765625 ns           16
find avx     24 256 mb   15849112 ns     14648438 ns           16
find avx tbb 24 256 mb    9295262 ns      9765625 ns           16
find         24 256 mb   27070275 ns     26367188 ns           16
find     tbb 24 256 mb    9528006 ns     11718750 ns           16

scan avx     06 256 mb  171973219 ns    171875000 ns           16
scan avx tbb 06 256 mb   33811719 ns     34179688 ns           16
scan         06 256 mb  171909775 ns    171875000 ns           16
scan     tbb 06 256 mb   33594775 ns     31250000 ns           16
scan avx     12 256 mb  171941662 ns    171875000 ns           16
scan avx tbb 12 256 mb   34453550 ns     32226562 ns           16
scan         12 256 mb  171804538 ns    171875000 ns           16
scan     tbb 12 256 mb   33901844 ns     32226562 ns           16
scan avx     24 256 mb  171913094 ns    171875000 ns           16
scan avx tbb 24 256 mb   34311600 ns     31250000 ns           16
scan         24 256 mb  172026775 ns    171875000 ns           16
scan     tbb 24 256 mb   33724888 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24414912 ns     21484375 ns            8
find avx tbb 06 512 mb   18449050 ns     19531250 ns            8
find         06 512 mb  193129900 ns    197265625 ns            8
find     tbb 06 512 mb   21215362 ns     17578125 ns            8
find avx     12 512 mb   24479262 ns     23437500 ns            8
find avx tbb 12 512 mb   18455413 ns     17578125 ns            8
find         12 512 mb   99274975 ns     97656250 ns            8
find     tbb 12 512 mb   19626812 ns     17578125 ns            8
find avx     24 512 mb   29191600 ns     29296875 ns            8
find avx tbb 24 512 mb   18488350 ns     17578125 ns            8
find         24 512 mb   53913688 ns     54687500 ns            8
find     tbb 24 512 mb   18778075 ns     19531250 ns            8

scan avx     06 512 mb  344154213 ns    345703125 ns            8
scan avx tbb 06 512 mb   68204763 ns     60546875 ns            8
scan         06 512 mb  343625613 ns    343750000 ns            8
scan     tbb 06 512 mb   68226087 ns     62500000 ns            8
scan avx     12 512 mb  344055375 ns    343750000 ns            8
scan avx tbb 12 512 mb   68493438 ns     58593750 ns            8
scan         12 512 mb  343706450 ns    343750000 ns            8
scan     tbb 12 512 mb   66173363 ns     60546875 ns            8
scan avx     24 512 mb  344663138 ns    347656250 ns            8
scan avx tbb 24 512 mb   69083725 ns     64453125 ns            8
scan         24 512 mb  344620038 ns    343750000 ns            8
scan     tbb 24 512 mb   68994138 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48908925 ns     46875000 ns            8
find avx tbb 06 1 gb     36793213 ns     39062500 ns            8
find         06 1 gb    386162750 ns    384765625 ns            8
find     tbb 06 1 gb     42903287 ns     37109375 ns            8
find avx     12 1 gb     48760900 ns     48828125 ns            8
find avx tbb 12 1 gb     37422888 ns     37109375 ns            8
find         12 1 gb    195524913 ns    199218750 ns            8
find     tbb 12 1 gb     38206437 ns     39062500 ns            8
find avx     24 1 gb     62984475 ns     62500000 ns            8
find avx tbb 24 1 gb     36933787 ns     35156250 ns            8
find         24 1 gb    107919650 ns    111328125 ns            8
find     tbb 24 1 gb     37304013 ns     33203125 ns            8

scan avx     06 1 gb    687772838 ns    689453125 ns            8
scan avx tbb 06 1 gb    136635188 ns    117187500 ns            8
scan         06 1 gb    688218975 ns    689453125 ns            8
scan     tbb 06 1 gb    136947188 ns    126953125 ns            8
scan avx     12 1 gb    688347975 ns    689453125 ns            8
scan avx tbb 12 1 gb    134190912 ns    123046875 ns            8
scan         12 1 gb    687625550 ns    687500000 ns            8
scan     tbb 12 1 gb    132300562 ns    121093750 ns            8
scan avx     24 1 gb    688199375 ns    687500000 ns            8
scan avx tbb 24 1 gb    135275775 ns    123046875 ns            8
scan         24 1 gb    687899188 ns    687500000 ns            8
scan     tbb 24 1 gb    134702412 ns    125000000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97805262 ns     99609375 ns            8
find avx tbb 06 2 gb     73484063 ns     64453125 ns            8
find         06 2 gb    768307713 ns    769531250 ns            8
find     tbb 06 2 gb     84490550 ns     70312500 ns            8
find avx     12 2 gb     98687225 ns     97656250 ns            8
find avx tbb 12 2 gb     73486387 ns     76171875 ns            8
find         12 2 gb    391173862 ns    392578125 ns            8
find     tbb 12 2 gb     76135500 ns     70312500 ns            8
find avx     24 2 gb    118503925 ns    113281250 ns            8
find avx tbb 24 2 gb     73650688 ns     68359375 ns            8
find         24 2 gb    209573225 ns    207031250 ns            8
find     tbb 24 2 gb     74718475 ns     70312500 ns            8

scan avx     06 2 gb   1378750988 ns   1378906250 ns            8
scan avx tbb 06 2 gb    266369625 ns    242187500 ns            8
scan         06 2 gb   1374231112 ns   1375000000 ns            8
scan     tbb 06 2 gb    266121663 ns    238281250 ns            8
scan avx     12 2 gb   1374424975 ns   1375000000 ns            8
scan avx tbb 12 2 gb    270236125 ns    240234375 ns            8
scan         12 2 gb   1375340150 ns   1376953125 ns            8
scan     tbb 12 2 gb    266792600 ns    240234375 ns            8
scan avx     24 2 gb   1375647513 ns   1375000000 ns            8
scan avx tbb 24 2 gb    269422862 ns    244140625 ns            8
scan         24 2 gb   1375290650 ns   1375000000 ns            8
scan     tbb 24 2 gb    267286200 ns    250000000 ns            8
```

</details>

