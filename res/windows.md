# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1655 ns         3815 ns         4096
find avx tbb 06 16 kb        1033 ns        0.000 ns         4096
find         06 16 kb        7247 ns        11444 ns         4096
find     tbb 06 16 kb        9517 ns         7629 ns         4096
find avx     12 16 kb        1008 ns        0.000 ns         4096
find avx tbb 12 16 kb        1032 ns        0.000 ns         4096
find         12 16 kb        4205 ns         3815 ns         4096
find     tbb 12 16 kb        8844 ns         7629 ns         4096
find avx     24 16 kb        1151 ns         3815 ns         4096
find avx tbb 24 16 kb        1135 ns        0.000 ns         4096
find         24 16 kb        2702 ns         3815 ns         4096
find     tbb 24 16 kb        8585 ns        11444 ns         4096

scan avx     06 16 kb       11688 ns        11444 ns         4096
scan avx tbb 06 16 kb       11100 ns        11444 ns         4096
scan         06 16 kb       11789 ns        15259 ns         4096
scan     tbb 06 16 kb        8374 ns         7629 ns         4096
scan avx     12 16 kb        1002 ns        0.000 ns         4096
scan avx tbb 12 16 kb         941 ns        0.000 ns         4096
scan         12 16 kb       11294 ns        11444 ns         4096
scan     tbb 12 16 kb        8889 ns        11444 ns         4096
scan avx     24 16 kb        1014 ns         3815 ns         4096
scan avx tbb 24 16 kb        1015 ns        0.000 ns         4096
scan         24 16 kb       11481 ns         7629 ns         4096
scan     tbb 24 16 kb        8327 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2227 ns        0.000 ns         4096
find avx tbb 06 64 kb        2256 ns         3815 ns         4096
find         06 64 kb       28530 ns        26703 ns         4096
find     tbb 06 64 kb       11934 ns         3815 ns         4096
find avx     12 64 kb        2093 ns         3815 ns         4096
find avx tbb 12 64 kb        2081 ns         3815 ns         4096
find         12 64 kb       14325 ns        15259 ns         4096
find     tbb 12 64 kb       10049 ns         7629 ns         4096
find avx     24 64 kb        2364 ns        0.000 ns         4096
find avx tbb 24 64 kb        2346 ns         3815 ns         4096
find         24 64 kb        7562 ns         7629 ns         4096
find     tbb 24 64 kb        9131 ns        11444 ns         4096

scan avx     06 64 kb       44587 ns        49591 ns         4096
scan avx tbb 06 64 kb       43542 ns        41962 ns         4096
scan         06 64 kb       44160 ns        41962 ns         4096
scan     tbb 06 64 kb       14973 ns        19073 ns         4096
scan avx     12 64 kb        2344 ns         3815 ns         4096
scan avx tbb 12 64 kb        2333 ns         3815 ns         4096
scan         12 64 kb       44264 ns        45776 ns         4096
scan     tbb 12 64 kb       14990 ns        19073 ns         4096
scan avx     24 64 kb        2360 ns         3815 ns         4096
scan avx tbb 24 64 kb        2341 ns         3815 ns         4096
scan         24 64 kb       44265 ns        45776 ns         4096
scan     tbb 24 64 kb       15078 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7160 ns         7629 ns         2048
find avx tbb 06 256 kb       7129 ns        0.000 ns         2048
find         06 256 kb     107684 ns       114441 ns         2048
find     tbb 06 256 kb      22327 ns        30518 ns         2048
find avx     12 256 kb       7152 ns        0.000 ns         2048
find avx tbb 12 256 kb       6946 ns         7629 ns         2048
find         12 256 kb      55618 ns        61035 ns         2048
find     tbb 12 256 kb      17168 ns        15259 ns         2048
find avx     24 256 kb       7683 ns        0.000 ns         2048
find avx tbb 24 256 kb       7743 ns         7629 ns         2048
find         24 256 kb      29141 ns        30518 ns         2048
find     tbb 24 256 kb      14304 ns        30518 ns         2048

scan avx     06 256 kb     173356 ns       167847 ns         2048
scan avx tbb 06 256 kb     168876 ns       183105 ns         2048
scan         06 256 kb     169767 ns       160217 ns         2048
scan     tbb 06 256 kb      42111 ns        38147 ns         2048
scan avx     12 256 kb       8078 ns         7629 ns         2048
scan avx tbb 12 256 kb       8328 ns         7629 ns         2048
scan         12 256 kb     171727 ns       175476 ns         2048
scan     tbb 12 256 kb      42090 ns        53406 ns         2048
scan avx     24 256 kb       8162 ns         7629 ns         2048
scan avx tbb 24 256 kb       8046 ns        15259 ns         2048
scan         24 256 kb     172123 ns       167847 ns         2048
scan     tbb 24 256 kb      42058 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26208 ns        15259 ns         1024
find avx tbb 06 1 mb        17863 ns        15259 ns         1024
find         06 1 mb       419315 ns       396729 ns         1024
find     tbb 06 1 mb        54101 ns        61035 ns         1024
find avx     12 1 mb        26448 ns        0.000 ns         1024
find avx tbb 12 1 mb        17298 ns        30518 ns         1024
find         12 1 mb       216041 ns       213623 ns         1024
find     tbb 12 1 mb        33889 ns        15259 ns         1024
find avx     24 1 mb        28781 ns        15259 ns         1024
find avx tbb 24 1 mb        17644 ns        0.000 ns         1024
find         24 1 mb       111027 ns       106812 ns         1024
find     tbb 24 1 mb        23374 ns        15259 ns         1024

scan avx     06 1 mb       682578 ns       701904 ns         1024
scan avx tbb 06 1 mb       139657 ns       152588 ns         1024
scan         06 1 mb       694275 ns       656128 ns         1024
scan     tbb 06 1 mb       140156 ns       183105 ns         1024
scan avx     12 1 mb        31088 ns        45776 ns         1024
scan avx tbb 12 1 mb        17241 ns        45776 ns         1024
scan         12 1 mb       691856 ns       686646 ns         1024
scan     tbb 12 1 mb       139383 ns       167847 ns         1024
scan avx     24 1 mb        30716 ns        61035 ns         1024
scan avx tbb 24 1 mb        17478 ns        0.000 ns         1024
scan         24 1 mb       681270 ns       701904 ns         1024
scan     tbb 24 1 mb       140010 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189279 ns       244141 ns          512
find avx tbb 06 4 mb       175260 ns       183105 ns          512
find         06 4 mb      1695772 ns      1647949 ns          512
find     tbb 06 4 mb       233195 ns       122070 ns          512
find avx     12 4 mb       189302 ns       244141 ns          512
find avx tbb 12 4 mb       169902 ns       213623 ns          512
find         12 4 mb       859641 ns       854492 ns          512
find     tbb 12 4 mb       202086 ns       152588 ns          512
find avx     24 4 mb       199974 ns       122070 ns          512
find avx tbb 24 4 mb       175931 ns       152588 ns          512
find         24 4 mb       452476 ns       457764 ns          512
find     tbb 24 4 mb       191285 ns       305176 ns          512

scan avx     06 4 mb      2710265 ns      2746582 ns          512
scan avx tbb 06 4 mb       571879 ns       549316 ns          512
scan         06 4 mb      2727401 ns      2746582 ns          512
scan     tbb 06 4 mb       568782 ns       457764 ns          512
scan avx     12 4 mb       192136 ns       152588 ns          512
scan avx tbb 12 4 mb       176780 ns       122070 ns          512
scan         12 4 mb      2718059 ns      2685547 ns          512
scan     tbb 12 4 mb       568635 ns       610352 ns          512
scan avx     24 4 mb       193039 ns       213623 ns          512
scan avx tbb 24 4 mb       173881 ns       152588 ns          512
scan         24 4 mb      2712709 ns      2807617 ns          512
scan     tbb 24 4 mb       569664 ns       671387 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      767581 ns       976562 ns           64
find avx tbb 06 16 mb      638894 ns      1464844 ns           64
find         06 16 mb     6837366 ns      6835938 ns           64
find     tbb 06 16 mb      799414 ns       488281 ns           64
find avx     12 16 mb      781070 ns       976562 ns           64
find avx tbb 12 16 mb      642184 ns       732422 ns           64
find         12 16 mb     3457172 ns      2929688 ns           64
find     tbb 12 16 mb      698455 ns       732422 ns           64
find avx     24 16 mb      811931 ns       732422 ns           64
find avx tbb 24 16 mb      650983 ns       244141 ns           64
find         24 16 mb     1865255 ns      2197266 ns           64
find     tbb 24 16 mb      671161 ns       976562 ns           64

scan avx     06 16 mb    10904163 ns     10986328 ns           64
scan avx tbb 06 16 mb     2119495 ns      1708984 ns           64
scan         06 16 mb    10853367 ns     10009766 ns           64
scan     tbb 06 16 mb     2119978 ns      1464844 ns           64
scan avx     12 16 mb      784294 ns      1708984 ns           64
scan avx tbb 12 16 mb      627134 ns       976562 ns           64
scan         12 16 mb    10909459 ns     10986328 ns           64
scan     tbb 12 16 mb     2111659 ns      1708984 ns           64
scan avx     24 16 mb      784258 ns       488281 ns           64
scan avx tbb 24 16 mb      641997 ns       732422 ns           64
scan         24 16 mb    10964433 ns     11474609 ns           64
scan     tbb 24 16 mb     2128527 ns      1708984 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3012187 ns      3417969 ns           32
find avx tbb 06 64 mb     2366638 ns      2441406 ns           32
find         06 64 mb    26676556 ns     30273438 ns           32
find     tbb 06 64 mb     2835675 ns        0.000 ns           32
find avx     12 64 mb     3043450 ns      2929688 ns           32
find avx tbb 12 64 mb     2351859 ns      1953125 ns           32
find         12 64 mb    13632272 ns     13671875 ns           32
find     tbb 12 64 mb     2487988 ns      3906250 ns           32
find avx     24 64 mb     3258688 ns      2929688 ns           32
find avx tbb 24 64 mb     2378072 ns       976562 ns           32
find         24 64 mb     7346475 ns      7324219 ns           32
find     tbb 24 64 mb     2445128 ns      2929688 ns           32

scan avx     06 64 mb    43318128 ns     42968750 ns           32
scan avx tbb 06 64 mb     8227444 ns      8300781 ns           32
scan         06 64 mb    43470719 ns     41992188 ns           32
scan     tbb 06 64 mb     8311906 ns      8789062 ns           32
scan avx     12 64 mb     3107828 ns      5859375 ns           32
scan avx tbb 12 64 mb     2364069 ns      2929688 ns           32
scan         12 64 mb    43226578 ns     43457031 ns           32
scan     tbb 12 64 mb     8239512 ns      9277344 ns           32
scan avx     24 64 mb     3150216 ns      2441406 ns           32
scan avx tbb 24 64 mb     2367159 ns      2441406 ns           32
scan         24 64 mb    43833297 ns     44433594 ns           32
scan     tbb 24 64 mb     8251266 ns      8789062 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12407956 ns     16601562 ns           16
find avx tbb 06 256 mb    9260063 ns      7812500 ns           16
find         06 256 mb  106725206 ns    106445312 ns           16
find     tbb 06 256 mb   11111863 ns     15625000 ns           16
find avx     12 256 mb   12652350 ns     15625000 ns           16
find avx tbb 12 256 mb    9269194 ns      7812500 ns           16
find         12 256 mb   54203869 ns     53710938 ns           16
find     tbb 12 256 mb    9521744 ns      8789062 ns           16
find avx     24 256 mb   13148225 ns     14648438 ns           16
find avx tbb 24 256 mb    9293019 ns      9765625 ns           16
find         24 256 mb   28414894 ns     28320312 ns           16
find     tbb 24 256 mb    9460181 ns      9765625 ns           16

scan avx     06 256 mb  172957206 ns    173828125 ns           16
scan avx tbb 06 256 mb   32472469 ns     29296875 ns           16
scan         06 256 mb  173267025 ns    171875000 ns           16
scan     tbb 06 256 mb   32529937 ns     31250000 ns           16
scan avx     12 256 mb   12627656 ns     14648438 ns           16
scan avx tbb 12 256 mb    9273244 ns      9765625 ns           16
scan         12 256 mb  172945631 ns    171875000 ns           16
scan     tbb 12 256 mb   32437956 ns     33203125 ns           16
scan avx     24 256 mb   12304262 ns     12695312 ns           16
scan avx tbb 24 256 mb    9308150 ns      8789062 ns           16
scan         24 256 mb  172846844 ns    171875000 ns           16
scan     tbb 24 256 mb   32600956 ns     33203125 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24276825 ns     17578125 ns            8
find avx tbb 06 512 mb   18409263 ns     19531250 ns            8
find         06 512 mb  212884388 ns    212890625 ns            8
find     tbb 06 512 mb   21712088 ns     15625000 ns            8
find avx     12 512 mb   25890463 ns     23437500 ns            8
find avx tbb 12 512 mb   18444100 ns     19531250 ns            8
find         12 512 mb  109988200 ns    107421875 ns            8
find     tbb 12 512 mb   18911875 ns     17578125 ns            8
find avx     24 512 mb   25183562 ns     27343750 ns            8
find avx tbb 24 512 mb   18489187 ns     17578125 ns            8
find         24 512 mb   56996300 ns     58593750 ns            8
find     tbb 24 512 mb   18814062 ns     21484375 ns            8

scan avx     06 512 mb  345915300 ns    345703125 ns            8
scan avx tbb 06 512 mb   64557575 ns     60546875 ns            8
scan         06 512 mb  345650213 ns    343750000 ns            8
scan     tbb 06 512 mb   65758612 ns     60546875 ns            8
scan avx     12 512 mb   24824387 ns     25390625 ns            8
scan avx tbb 12 512 mb   18414512 ns     17578125 ns            8
scan         12 512 mb  345419287 ns    343750000 ns            8
scan     tbb 12 512 mb   64640262 ns     60546875 ns            8
scan avx     24 512 mb   24595163 ns     25390625 ns            8
scan avx tbb 24 512 mb   18441500 ns     15625000 ns            8
scan         24 512 mb  346200250 ns    345703125 ns            8
scan     tbb 24 512 mb   64534000 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     51006962 ns     48828125 ns            8
find avx tbb 06 1 gb     36797562 ns     39062500 ns            8
find         06 1 gb    424975075 ns    423828125 ns            8
find     tbb 06 1 gb     42942050 ns     41015625 ns            8
find avx     12 1 gb     48581612 ns     50781250 ns            8
find avx tbb 12 1 gb     36806988 ns     37109375 ns            8
find         12 1 gb    217260200 ns    214843750 ns            8
find     tbb 12 1 gb     37828425 ns     37109375 ns            8
find avx     24 1 gb     55088400 ns     56640625 ns            8
find avx tbb 24 1 gb     36869862 ns     37109375 ns            8
find         24 1 gb    116432250 ns    115234375 ns            8
find     tbb 24 1 gb     37439363 ns     39062500 ns            8

scan avx     06 1 gb    690532050 ns    691406250 ns            8
scan avx tbb 06 1 gb    129743863 ns    121093750 ns            8
scan         06 1 gb    690523350 ns    691406250 ns            8
scan     tbb 06 1 gb    129134062 ns    123046875 ns            8
scan avx     12 1 gb     49331050 ns     46875000 ns            8
scan avx tbb 12 1 gb     36826938 ns     35156250 ns            8
scan         12 1 gb    697030725 ns    695312500 ns            8
scan     tbb 12 1 gb    130579175 ns    123046875 ns            8
scan avx     24 1 gb     49396437 ns     46875000 ns            8
scan avx tbb 24 1 gb     37065100 ns     41015625 ns            8
scan         24 1 gb    691037200 ns    693359375 ns            8
scan     tbb 24 1 gb    130116212 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98416900 ns     97656250 ns            8
find avx tbb 06 2 gb     73455550 ns     74218750 ns            8
find         06 2 gb    852229812 ns    857421875 ns            8
find     tbb 06 2 gb     83871638 ns     78125000 ns            8
find avx     12 2 gb     97234512 ns     95703125 ns            8
find avx tbb 12 2 gb     73503425 ns     72265625 ns            8
find         12 2 gb    434767450 ns    433593750 ns            8
find     tbb 12 2 gb     74841375 ns     72265625 ns            8
find avx     24 2 gb    100984663 ns    101562500 ns            8
find avx tbb 24 2 gb     73615363 ns     78125000 ns            8
find         24 2 gb    227791788 ns    226562500 ns            8
find     tbb 24 2 gb     74929850 ns     72265625 ns            8

scan avx     06 2 gb   1382241800 ns   1382812500 ns            8
scan avx tbb 06 2 gb    260828187 ns    250000000 ns            8
scan         06 2 gb   1381932737 ns   1382812500 ns            8
scan     tbb 06 2 gb    262161563 ns    251953125 ns            8
scan avx     12 2 gb    105576413 ns    107421875 ns            8
scan avx tbb 12 2 gb     73445937 ns     74218750 ns            8
scan         12 2 gb   1382167087 ns   1384765625 ns            8
scan     tbb 12 2 gb    259397687 ns    244140625 ns            8
scan avx     24 2 gb     98760500 ns     97656250 ns            8
scan avx tbb 24 2 gb     73606475 ns     74218750 ns            8
scan         24 2 gb   1381918000 ns   1380859375 ns            8
scan     tbb 24 2 gb    260481063 ns    242187500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1595 ns         3815 ns         4096
find avx tbb 06 16 kb        1029 ns        0.000 ns         4096
find         06 16 kb        6624 ns         3815 ns         4096
find     tbb 06 16 kb        9410 ns        11444 ns         4096
find avx     12 16 kb        1021 ns         3815 ns         4096
find avx tbb 12 16 kb        1059 ns        0.000 ns         4096
find         12 16 kb        3917 ns        0.000 ns         4096
find     tbb 12 16 kb        8837 ns         7629 ns         4096
find avx     24 16 kb        1062 ns         3815 ns         4096
find avx tbb 24 16 kb        1052 ns        0.000 ns         4096
find         24 16 kb        2346 ns        0.000 ns         4096
find     tbb 24 16 kb        8532 ns         7629 ns         4096

scan avx     06 16 kb       11997 ns        11444 ns         4096
scan avx tbb 06 16 kb       11805 ns        11444 ns         4096
scan         06 16 kb       28765 ns        30518 ns         4096
scan     tbb 06 16 kb        7795 ns         3815 ns         4096
scan avx     12 16 kb         937 ns         3815 ns         4096
scan avx tbb 12 16 kb         944 ns        0.000 ns         4096
scan         12 16 kb       27450 ns        30518 ns         4096
scan     tbb 12 16 kb        7890 ns         3815 ns         4096
scan avx     24 16 kb         926 ns         3815 ns         4096
scan avx tbb 24 16 kb         928 ns        0.000 ns         4096
scan         24 16 kb       27178 ns        22888 ns         4096
scan     tbb 24 16 kb        7767 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2056 ns         3815 ns         4096
find avx tbb 06 64 kb        2092 ns        0.000 ns         4096
find         06 64 kb       24721 ns        22888 ns         4096
find     tbb 06 64 kb       11381 ns         3815 ns         4096
find avx     12 64 kb        2231 ns         3815 ns         4096
find avx tbb 12 64 kb        2171 ns         3815 ns         4096
find         12 64 kb       12704 ns        15259 ns         4096
find     tbb 12 64 kb        9972 ns        11444 ns         4096
find avx     24 64 kb        2572 ns        0.000 ns         4096
find avx tbb 24 64 kb        2582 ns         3815 ns         4096
find         24 64 kb        7134 ns         7629 ns         4096
find     tbb 24 64 kb        9480 ns        11444 ns         4096

scan avx     06 64 kb       44769 ns        45776 ns         4096
scan avx tbb 06 64 kb       42682 ns        38147 ns         4096
scan         06 64 kb      107980 ns       102997 ns         4096
scan     tbb 06 64 kb       13923 ns        19073 ns         4096
scan avx     12 64 kb        2135 ns         3815 ns         4096
scan avx tbb 12 64 kb        2148 ns        0.000 ns         4096
scan         12 64 kb      110823 ns       110626 ns         4096
scan     tbb 12 64 kb       14072 ns        15259 ns         4096
scan avx     24 64 kb        2155 ns         3815 ns         4096
scan avx tbb 24 64 kb        2184 ns         3815 ns         4096
scan         24 64 kb      107804 ns       102997 ns         4096
scan     tbb 24 64 kb       14391 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7133 ns        0.000 ns         2048
find avx tbb 06 256 kb       7029 ns         7629 ns         2048
find         06 256 kb      94813 ns        91553 ns         2048
find     tbb 06 256 kb      21972 ns        15259 ns         2048
find avx     12 256 kb       7120 ns         7629 ns         2048
find avx tbb 12 256 kb       7074 ns        0.000 ns         2048
find         12 256 kb      49973 ns        45776 ns         2048
find     tbb 12 256 kb      16853 ns        22888 ns         2048
find avx     24 256 kb       8830 ns        22888 ns         2048
find avx tbb 24 256 kb       8614 ns         7629 ns         2048
find         24 256 kb      26388 ns        22888 ns         2048
find     tbb 24 256 kb      13986 ns        22888 ns         2048

scan avx     06 256 kb     173284 ns       167847 ns         2048
scan avx tbb 06 256 kb     168895 ns       175476 ns         2048
scan         06 256 kb     431046 ns       434875 ns         2048
scan     tbb 06 256 kb      40323 ns        45776 ns         2048
scan avx     12 256 kb       7529 ns         7629 ns         2048
scan avx tbb 12 256 kb       7300 ns        0.000 ns         2048
scan         12 256 kb     433777 ns       427246 ns         2048
scan     tbb 12 256 kb      40303 ns        45776 ns         2048
scan avx     24 256 kb       7473 ns        15259 ns         2048
scan avx tbb 24 256 kb       7355 ns         7629 ns         2048
scan         24 256 kb     432952 ns       427246 ns         2048
scan     tbb 24 256 kb      40377 ns        30518 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25996 ns        45776 ns         1024
find avx tbb 06 1 mb        18256 ns        30518 ns         1024
find         06 1 mb       384386 ns       396729 ns         1024
find     tbb 06 1 mb        51131 ns        61035 ns         1024
find avx     12 1 mb        26110 ns        15259 ns         1024
find avx tbb 12 1 mb        17387 ns        0.000 ns         1024
find         12 1 mb       192419 ns       198364 ns         1024
find     tbb 12 1 mb        33257 ns        0.000 ns         1024
find avx     24 1 mb        33398 ns        30518 ns         1024
find avx tbb 24 1 mb        18151 ns        0.000 ns         1024
find         24 1 mb        98990 ns       106812 ns         1024
find     tbb 24 1 mb        22719 ns        45776 ns         1024

scan avx     06 1 mb       677471 ns       671387 ns         1024
scan avx tbb 06 1 mb       137083 ns        91553 ns         1024
scan         06 1 mb      1720730 ns      1708984 ns         1024
scan     tbb 06 1 mb       137442 ns       106812 ns         1024
scan avx     12 1 mb        27175 ns        30518 ns         1024
scan avx tbb 12 1 mb        17370 ns        30518 ns         1024
scan         12 1 mb      1723012 ns      1724243 ns         1024
scan     tbb 12 1 mb       137152 ns       152588 ns         1024
scan avx     24 1 mb        27572 ns        0.000 ns         1024
scan avx tbb 24 1 mb        17637 ns        45776 ns         1024
scan         24 1 mb      1723730 ns      1739502 ns         1024
scan     tbb 24 1 mb       137209 ns       183105 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       190159 ns       183105 ns          512
find avx tbb 06 4 mb       181798 ns       122070 ns          512
find         06 4 mb      1523526 ns      1525879 ns          512
find     tbb 06 4 mb       221277 ns       274658 ns          512
find avx     12 4 mb       189626 ns       244141 ns          512
find avx tbb 12 4 mb       174251 ns       213623 ns          512
find         12 4 mb       780153 ns       793457 ns          512
find     tbb 12 4 mb       202541 ns       152588 ns          512
find avx     24 4 mb       214572 ns       244141 ns          512
find avx tbb 24 4 mb       178262 ns       183105 ns          512
find         24 4 mb       422807 ns       396729 ns          512
find     tbb 24 4 mb       184974 ns       305176 ns          512

scan avx     06 4 mb      2708689 ns      2746582 ns          512
scan avx tbb 06 4 mb       556151 ns       488281 ns          512
scan         06 4 mb      6901735 ns      6927490 ns          512
scan     tbb 06 4 mb       557729 ns       579834 ns          512
scan avx     12 4 mb       192444 ns       183105 ns          512
scan avx tbb 12 4 mb       170576 ns       183105 ns          512
scan         12 4 mb      6889782 ns      6774902 ns          512
scan     tbb 12 4 mb       556668 ns       518799 ns          512
scan avx     24 4 mb       193255 ns       244141 ns          512
scan avx tbb 24 4 mb       179896 ns       183105 ns          512
scan         24 4 mb      6913202 ns      6835938 ns          512
scan     tbb 24 4 mb       555852 ns       579834 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      779767 ns       732422 ns           64
find avx tbb 06 16 mb      636761 ns       976562 ns           64
find         06 16 mb     6082398 ns      6103516 ns           64
find     tbb 06 16 mb      756741 ns       976562 ns           64
find avx     12 16 mb      770166 ns       976562 ns           64
find avx tbb 12 16 mb      636019 ns       732422 ns           64
find         12 16 mb     3152408 ns      3906250 ns           64
find     tbb 12 16 mb      687458 ns       732422 ns           64
find avx     24 16 mb      905069 ns       732422 ns           64
find avx tbb 24 16 mb      656969 ns       732422 ns           64
find         24 16 mb     1691931 ns      1953125 ns           64
find     tbb 24 16 mb      678734 ns       976562 ns           64

scan avx     06 16 mb    10861698 ns     10986328 ns           64
scan avx tbb 06 16 mb     2109613 ns      2929688 ns           64
scan         06 16 mb    27534650 ns     27832031 ns           64
scan     tbb 06 16 mb     2116700 ns      2197266 ns           64
scan avx     12 16 mb      776122 ns       244141 ns           64
scan avx tbb 12 16 mb      627606 ns       976562 ns           64
scan         12 16 mb    28855531 ns     28076172 ns           64
scan     tbb 12 16 mb     2110694 ns      1220703 ns           64
scan avx     24 16 mb      776022 ns       244141 ns           64
scan avx tbb 24 16 mb      640247 ns       732422 ns           64
scan         24 16 mb    27745516 ns     27343750 ns           64
scan     tbb 24 16 mb     2110613 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3112006 ns      2441406 ns           32
find avx tbb 06 64 mb     2357731 ns      3417969 ns           32
find         06 64 mb    24564075 ns     24414062 ns           32
find     tbb 06 64 mb     2648388 ns      2441406 ns           32
find avx     12 64 mb     3220153 ns      7812500 ns           32
find avx tbb 12 64 mb     2374603 ns      1953125 ns           32
find         12 64 mb    12431672 ns     12207031 ns           32
find     tbb 12 64 mb     2479288 ns      1953125 ns           32
find avx     24 64 mb     3557166 ns      4394531 ns           32
find avx tbb 24 64 mb     2365816 ns      2929688 ns           32
find         24 64 mb     6856734 ns      6835938 ns           32
find     tbb 24 64 mb     2440116 ns      1953125 ns           32

scan avx     06 64 mb    43114166 ns     41992188 ns           32
scan avx tbb 06 64 mb     8245481 ns      7812500 ns           32
scan         06 64 mb   110442506 ns    110351562 ns           32
scan     tbb 06 64 mb     8200350 ns      8789062 ns           32
scan avx     12 64 mb     3221981 ns      1953125 ns           32
scan avx tbb 12 64 mb     2365019 ns      2441406 ns           32
scan         12 64 mb   109989356 ns    110839844 ns           32
scan     tbb 12 64 mb     8206731 ns      8300781 ns           32
scan avx     24 64 mb     3100291 ns      4394531 ns           32
scan avx tbb 24 64 mb     2368962 ns      1953125 ns           32
scan         24 64 mb   110191044 ns    109863281 ns           32
scan     tbb 24 64 mb     8169722 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12311338 ns     12695312 ns           16
find avx tbb 06 256 mb    9268769 ns      8789062 ns           16
find         06 256 mb   96989944 ns     97656250 ns           16
find     tbb 06 256 mb   10145937 ns     11718750 ns           16
find avx     12 256 mb   12220663 ns     10742188 ns           16
find avx tbb 12 256 mb    9535706 ns     10742188 ns           16
find         12 256 mb   49031494 ns     48828125 ns           16
find     tbb 12 256 mb    9651175 ns      8789062 ns           16
find avx     24 256 mb   13629794 ns     13671875 ns           16
find avx tbb 24 256 mb    9282337 ns      8789062 ns           16
find         24 256 mb   26646981 ns     22460938 ns           16
find     tbb 24 256 mb    9467388 ns      8789062 ns           16

scan avx     06 256 mb  172786156 ns    173828125 ns           16
scan avx tbb 06 256 mb   32263244 ns     31250000 ns           16
scan         06 256 mb  440547088 ns    441406250 ns           16
scan     tbb 06 256 mb   32457213 ns     33203125 ns           16
scan avx     12 256 mb   12147356 ns      7812500 ns           16
scan avx tbb 12 256 mb    9264675 ns      8789062 ns           16
scan         12 256 mb  440408350 ns    439453125 ns           16
scan     tbb 12 256 mb   32453394 ns     31250000 ns           16
scan avx     24 256 mb   12690425 ns     16601562 ns           16
scan avx tbb 24 256 mb    9262588 ns      8789062 ns           16
scan         24 256 mb  441022081 ns    439453125 ns           16
scan     tbb 24 256 mb   32306812 ns     29296875 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24368325 ns     25390625 ns            8
find avx tbb 06 512 mb   18437262 ns     15625000 ns            8
find         06 512 mb  193153587 ns    197265625 ns            8
find     tbb 06 512 mb   20495463 ns     19531250 ns            8
find avx     12 512 mb   24321450 ns     23437500 ns            8
find avx tbb 12 512 mb   18503837 ns     19531250 ns            8
find         12 512 mb   99169325 ns     97656250 ns            8
find     tbb 12 512 mb   18913888 ns     19531250 ns            8
find avx     24 512 mb   27386300 ns     25390625 ns            8
find avx tbb 24 512 mb   20243312 ns     15625000 ns            8
find         24 512 mb   54708225 ns     56640625 ns            8
find     tbb 24 512 mb   18843838 ns     17578125 ns            8

scan avx     06 512 mb  345546150 ns    343750000 ns            8
scan avx tbb 06 512 mb   65902150 ns     60546875 ns            8
scan         06 512 mb  881374937 ns    884765625 ns            8
scan     tbb 06 512 mb   64938925 ns     60546875 ns            8
scan avx     12 512 mb   24433387 ns     25390625 ns            8
scan avx tbb 12 512 mb   18440412 ns     17578125 ns            8
scan         12 512 mb  882296150 ns    878906250 ns            8
scan     tbb 12 512 mb   64777325 ns     64453125 ns            8
scan avx     24 512 mb   24537363 ns     27343750 ns            8
scan avx tbb 24 512 mb   18453975 ns     17578125 ns            8
scan         24 512 mb  880429150 ns    882812500 ns            8
scan     tbb 24 512 mb   64560163 ns     58593750 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48608675 ns     48828125 ns            8
find avx tbb 06 1 gb     36773813 ns     37109375 ns            8
find         06 1 gb    388304100 ns    390625000 ns            8
find     tbb 06 1 gb     40196125 ns     35156250 ns            8
find avx     12 1 gb     48826487 ns     50781250 ns            8
find avx tbb 12 1 gb     36802463 ns     35156250 ns            8
find         12 1 gb    202318925 ns    203125000 ns            8
find     tbb 12 1 gb     37907050 ns     37109375 ns            8
find avx     24 1 gb     63255925 ns     64453125 ns            8
find avx tbb 24 1 gb     36830925 ns     35156250 ns            8
find         24 1 gb    107212025 ns    107421875 ns            8
find     tbb 24 1 gb     37402337 ns     35156250 ns            8

scan avx     06 1 gb    691962300 ns    691406250 ns            8
scan avx tbb 06 1 gb    129012025 ns    123046875 ns            8
scan         06 1 gb   1764569387 ns   1765625000 ns            8
scan     tbb 06 1 gb    128918162 ns    119140625 ns            8
scan avx     12 1 gb     48550850 ns     46875000 ns            8
scan avx tbb 12 1 gb     36732500 ns     37109375 ns            8
scan         12 1 gb   1762705575 ns   1765625000 ns            8
scan     tbb 12 1 gb    131054863 ns    128906250 ns            8
scan avx     24 1 gb     48812738 ns     46875000 ns            8
scan avx tbb 24 1 gb     36845750 ns     33203125 ns            8
scan         24 1 gb   1763100650 ns   1761718750 ns            8
scan     tbb 24 1 gb    129981562 ns    121093750 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97457050 ns     97656250 ns            8
find avx tbb 06 2 gb     73392612 ns     76171875 ns            8
find         06 2 gb    771622287 ns    765625000 ns            8
find     tbb 06 2 gb     80403813 ns     76171875 ns            8
find avx     12 2 gb    101789313 ns    101562500 ns            8
find avx tbb 12 2 gb     73653362 ns     72265625 ns            8
find         12 2 gb    393557763 ns    390625000 ns            8
find     tbb 12 2 gb     75435188 ns     72265625 ns            8
find avx     24 2 gb    109549550 ns    109375000 ns            8
find avx tbb 24 2 gb     73617488 ns     68359375 ns            8
find         24 2 gb    209568200 ns    210937500 ns            8
find     tbb 24 2 gb     74684188 ns     74218750 ns            8

scan avx     06 2 gb   1380122487 ns   1380859375 ns            8
scan avx tbb 06 2 gb    257604263 ns    238281250 ns            8
scan         06 2 gb   3525678437 ns   3527343750 ns            8
scan     tbb 06 2 gb    259014975 ns    242187500 ns            8
scan avx     12 2 gb     97993162 ns     97656250 ns            8
scan avx tbb 12 2 gb     73538000 ns     72265625 ns            8
scan         12 2 gb   3521958200 ns   3521484375 ns            8
scan     tbb 12 2 gb    258864175 ns    238281250 ns            8
scan avx     24 2 gb     98086575 ns     95703125 ns            8
scan avx tbb 24 2 gb     73532150 ns     70312500 ns            8
scan         24 2 gb   3524961350 ns   3525390625 ns            8
scan     tbb 24 2 gb    257814725 ns    244140625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1661 ns        0.000 ns         4096
find avx tbb 06 16 kb        1075 ns         3815 ns         4096
find         06 16 kb        6673 ns         7629 ns         4096
find     tbb 06 16 kb        9332 ns         7629 ns         4096
find avx     12 16 kb        1029 ns        0.000 ns         4096
find avx tbb 12 16 kb         978 ns         3815 ns         4096
find         12 16 kb        4059 ns         3815 ns         4096
find     tbb 12 16 kb        8887 ns        11444 ns         4096
find avx     24 16 kb        1449 ns        0.000 ns         4096
find avx tbb 24 16 kb        1208 ns        0.000 ns         4096
find         24 16 kb        2416 ns         3815 ns         4096
find     tbb 24 16 kb        8458 ns         7629 ns         4096

scan avx     06 16 kb       12048 ns        15259 ns         4096
scan avx tbb 06 16 kb       11804 ns        11444 ns         4096
scan         06 16 kb       27890 ns        30518 ns         4096
scan     tbb 06 16 kb        7945 ns         7629 ns         4096
scan avx     12 16 kb         934 ns        0.000 ns         4096
scan avx tbb 12 16 kb         941 ns         3815 ns         4096
scan         12 16 kb       27847 ns        26703 ns         4096
scan     tbb 12 16 kb        8056 ns         7629 ns         4096
scan avx     24 16 kb         968 ns        0.000 ns         4096
scan avx tbb 24 16 kb         982 ns        0.000 ns         4096
scan         24 16 kb       27578 ns        26703 ns         4096
scan     tbb 24 16 kb        8142 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2340 ns         3815 ns         4096
find avx tbb 06 64 kb        2301 ns        0.000 ns         4096
find         06 64 kb       24309 ns        26703 ns         4096
find     tbb 06 64 kb       11427 ns        11444 ns         4096
find avx     12 64 kb        2053 ns        0.000 ns         4096
find avx tbb 12 64 kb        2047 ns        0.000 ns         4096
find         12 64 kb       13128 ns        11444 ns         4096
find     tbb 12 64 kb       10327 ns         7629 ns         4096
find avx     24 64 kb        2651 ns        0.000 ns         4096
find avx tbb 24 64 kb        2489 ns        0.000 ns         4096
find         24 64 kb        6727 ns         7629 ns         4096
find     tbb 24 64 kb        9211 ns         7629 ns         4096

scan avx     06 64 kb       44655 ns        49591 ns         4096
scan avx tbb 06 64 kb       42646 ns        41962 ns         4096
scan         06 64 kb      107793 ns       110626 ns         4096
scan     tbb 06 64 kb       14742 ns        11444 ns         4096
scan avx     12 64 kb        2093 ns         3815 ns         4096
scan avx tbb 12 64 kb        2182 ns        0.000 ns         4096
scan         12 64 kb      110031 ns       106812 ns         4096
scan     tbb 12 64 kb       14417 ns        15259 ns         4096
scan avx     24 64 kb        2062 ns         3815 ns         4096
scan avx tbb 24 64 kb        2092 ns         3815 ns         4096
scan         24 64 kb      109413 ns       110626 ns         4096
scan     tbb 24 64 kb       14691 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7676 ns         7629 ns         2048
find avx tbb 06 256 kb       7858 ns         7629 ns         2048
find         06 256 kb      97743 ns        99182 ns         2048
find     tbb 06 256 kb      21891 ns        22888 ns         2048
find avx     12 256 kb       7050 ns        15259 ns         2048
find avx tbb 12 256 kb       6982 ns         7629 ns         2048
find         12 256 kb      48170 ns        53406 ns         2048
find     tbb 12 256 kb      16884 ns        15259 ns         2048
find avx     24 256 kb       8394 ns         7629 ns         2048
find avx tbb 24 256 kb       8249 ns         7629 ns         2048
find         24 256 kb      25507 ns        30518 ns         2048
find     tbb 24 256 kb      14061 ns         7629 ns         2048

scan avx     06 256 kb     174002 ns       183105 ns         2048
scan avx tbb 06 256 kb     168814 ns       152588 ns         2048
scan         06 256 kb     431202 ns       419617 ns         2048
scan     tbb 06 256 kb      41191 ns        53406 ns         2048
scan avx     12 256 kb       7249 ns         7629 ns         2048
scan avx tbb 12 256 kb       7149 ns         7629 ns         2048
scan         12 256 kb     433344 ns       427246 ns         2048
scan     tbb 12 256 kb      41198 ns        45776 ns         2048
scan avx     24 256 kb       7108 ns         7629 ns         2048
scan avx tbb 24 256 kb       7046 ns        0.000 ns         2048
scan         24 256 kb     433137 ns       442505 ns         2048
scan     tbb 24 256 kb      41233 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        28439 ns        45776 ns         1024
find avx tbb 06 1 mb        18091 ns        30518 ns         1024
find         06 1 mb       380170 ns       396729 ns         1024
find     tbb 06 1 mb        51079 ns        61035 ns         1024
find avx     12 1 mb        25578 ns        0.000 ns         1024
find avx tbb 12 1 mb        17410 ns        15259 ns         1024
find         12 1 mb       193550 ns       167847 ns         1024
find     tbb 12 1 mb        32161 ns        30518 ns         1024
find avx     24 1 mb        31668 ns        30518 ns         1024
find avx tbb 24 1 mb        18140 ns        0.000 ns         1024
find         24 1 mb        99791 ns       122070 ns         1024
find     tbb 24 1 mb        22798 ns        15259 ns         1024

scan avx     06 1 mb       688097 ns       701904 ns         1024
scan avx tbb 06 1 mb       140240 ns       167847 ns         1024
scan         06 1 mb      1731187 ns      1739502 ns         1024
scan     tbb 06 1 mb       139535 ns       198364 ns         1024
scan avx     12 1 mb        27367 ns        45776 ns         1024
scan avx tbb 12 1 mb        17347 ns        61035 ns         1024
scan         12 1 mb      1727961 ns      1724243 ns         1024
scan     tbb 12 1 mb       139577 ns       167847 ns         1024
scan avx     24 1 mb        26639 ns        45776 ns         1024
scan avx tbb 24 1 mb        17274 ns        15259 ns         1024
scan         24 1 mb      1724038 ns      1693726 ns         1024
scan     tbb 24 1 mb       139112 ns       137329 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       188853 ns       183105 ns          512
find avx tbb 06 4 mb       169549 ns       183105 ns          512
find         06 4 mb      1518813 ns      1434326 ns          512
find     tbb 06 4 mb       222115 ns       183105 ns          512
find avx     12 4 mb       189570 ns       274658 ns          512
find avx tbb 12 4 mb       177313 ns       244141 ns          512
find         12 4 mb       776551 ns       762939 ns          512
find     tbb 12 4 mb       199707 ns       244141 ns          512
find avx     24 4 mb       195980 ns       183105 ns          512
find avx tbb 24 4 mb       182278 ns       213623 ns          512
find         24 4 mb       419096 ns       396729 ns          512
find     tbb 24 4 mb       191446 ns       213623 ns          512

scan avx     06 4 mb      2707084 ns      2685547 ns          512
scan avx tbb 06 4 mb       564646 ns       457764 ns          512
scan         06 4 mb      6902135 ns      6927490 ns          512
scan     tbb 06 4 mb       564736 ns       427246 ns          512
scan avx     12 4 mb       192571 ns       183105 ns          512
scan avx tbb 12 4 mb       176630 ns       244141 ns          512
scan         12 4 mb      6906639 ns      6835938 ns          512
scan     tbb 12 4 mb       560187 ns       518799 ns          512
scan avx     24 4 mb       190336 ns       152588 ns          512
scan avx tbb 24 4 mb       171327 ns       213623 ns          512
scan         24 4 mb      6899234 ns      6866455 ns          512
scan     tbb 24 4 mb       564599 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      780494 ns       488281 ns           64
find avx tbb 06 16 mb      633531 ns       976562 ns           64
find         06 16 mb     6139159 ns      6591797 ns           64
find     tbb 06 16 mb      756339 ns       976562 ns           64
find avx     12 16 mb      782531 ns       732422 ns           64
find avx tbb 12 16 mb      631692 ns       488281 ns           64
find         12 16 mb     3137080 ns      3173828 ns           64
find     tbb 12 16 mb      699925 ns       732422 ns           64
find avx     24 16 mb      832197 ns       488281 ns           64
find avx tbb 24 16 mb      645750 ns       244141 ns           64
find         24 16 mb     1667017 ns      2197266 ns           64
find     tbb 24 16 mb      676291 ns       488281 ns           64

scan avx     06 16 mb    10941220 ns     10986328 ns           64
scan avx tbb 06 16 mb     2129528 ns      1953125 ns           64
scan         06 16 mb    27540787 ns     28076172 ns           64
scan     tbb 06 16 mb     2108631 ns      1708984 ns           64
scan avx     12 16 mb      775050 ns       732422 ns           64
scan avx tbb 12 16 mb      641339 ns       732422 ns           64
scan         12 16 mb    27646020 ns     26855469 ns           64
scan     tbb 12 16 mb     2116458 ns      2929688 ns           64
scan avx     24 16 mb      788245 ns       732422 ns           64
scan avx tbb 24 16 mb      632361 ns       732422 ns           64
scan         24 16 mb    27639072 ns     27587891 ns           64
scan     tbb 24 16 mb     2114042 ns      2685547 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3017103 ns      6835938 ns           32
find avx tbb 06 64 mb     2357266 ns      1953125 ns           32
find         06 64 mb    24282266 ns     25390625 ns           32
find     tbb 06 64 mb     2644050 ns      2929688 ns           32
find avx     12 64 mb     3076516 ns      3906250 ns           32
find avx tbb 12 64 mb     2367775 ns      1953125 ns           32
find         12 64 mb    12435359 ns     12207031 ns           32
find     tbb 12 64 mb     2480969 ns      3417969 ns           32
find avx     24 64 mb     3089422 ns        0.000 ns           32
find avx tbb 24 64 mb     2374100 ns      1953125 ns           32
find         24 64 mb     6733000 ns      7812500 ns           32
find     tbb 24 64 mb     2444212 ns      3417969 ns           32

scan avx     06 64 mb    43423716 ns     43457031 ns           32
scan avx tbb 06 64 mb     8216744 ns      8789062 ns           32
scan         06 64 mb   110227200 ns    110351562 ns           32
scan     tbb 06 64 mb     8193294 ns      7812500 ns           32
scan avx     12 64 mb     3053641 ns        0.000 ns           32
scan avx tbb 12 64 mb     2361209 ns      2441406 ns           32
scan         12 64 mb   110064181 ns    109863281 ns           32
scan     tbb 12 64 mb     8215531 ns      8789062 ns           32
scan avx     24 64 mb     3290581 ns      4882812 ns           32
scan avx tbb 24 64 mb     2400937 ns      3417969 ns           32
scan         24 64 mb   110272366 ns    109863281 ns           32
scan     tbb 24 64 mb     8278931 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12149319 ns     12695312 ns           16
find avx tbb 06 256 mb    9279569 ns      9765625 ns           16
find         06 256 mb   96661475 ns     96679688 ns           16
find     tbb 06 256 mb   10226713 ns     12695312 ns           16
find avx     12 256 mb   12196475 ns     11718750 ns           16
find avx tbb 12 256 mb    9470150 ns     11718750 ns           16
find         12 256 mb   49164006 ns     51757812 ns           16
find     tbb 12 256 mb    9546775 ns      7812500 ns           16
find avx     24 256 mb   12352800 ns     11718750 ns           16
find avx tbb 24 256 mb    9293075 ns      8789062 ns           16
find         24 256 mb   26641531 ns     28320312 ns           16
find     tbb 24 256 mb    9457788 ns      8789062 ns           16

scan avx     06 256 mb  172854075 ns    172851562 ns           16
scan avx tbb 06 256 mb   32425250 ns     32226562 ns           16
scan         06 256 mb  440594281 ns    443359375 ns           16
scan     tbb 06 256 mb   32418631 ns     32226562 ns           16
scan avx     12 256 mb   12210825 ns     15625000 ns           16
scan avx tbb 12 256 mb    9266262 ns      8789062 ns           16
scan         12 256 mb  440745488 ns    443359375 ns           16
scan     tbb 12 256 mb   32356150 ns     31250000 ns           16
scan avx     24 256 mb   12736825 ns     13671875 ns           16
scan avx tbb 24 256 mb    9274037 ns      8789062 ns           16
scan         24 256 mb  440989269 ns    441406250 ns           16
scan     tbb 24 256 mb   32454194 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24283863 ns     31250000 ns            8
find avx tbb 06 512 mb   18486650 ns     19531250 ns            8
find         06 512 mb  192772662 ns    195312500 ns            8
find     tbb 06 512 mb   20338200 ns     17578125 ns            8
find avx     12 512 mb   28976037 ns     27343750 ns            8
find avx tbb 12 512 mb   18430950 ns     19531250 ns            8
find         12 512 mb   98152537 ns     99609375 ns            8
find     tbb 12 512 mb   18976700 ns     17578125 ns            8
find avx     24 512 mb   24930175 ns     23437500 ns            8
find avx tbb 24 512 mb   18545863 ns     17578125 ns            8
find         24 512 mb   52427725 ns     50781250 ns            8
find     tbb 24 512 mb   18841625 ns     19531250 ns            8

scan avx     06 512 mb  345331125 ns    343750000 ns            8
scan avx tbb 06 512 mb   64877463 ns     62500000 ns            8
scan         06 512 mb  879781738 ns    880859375 ns            8
scan     tbb 06 512 mb   64808838 ns     58593750 ns            8
scan avx     12 512 mb   24183475 ns     23437500 ns            8
scan avx tbb 12 512 mb   18434025 ns     19531250 ns            8
scan         12 512 mb  880706887 ns    875000000 ns            8
scan     tbb 12 512 mb   64925737 ns     58593750 ns            8
scan avx     24 512 mb   24472138 ns     23437500 ns            8
scan avx tbb 24 512 mb   18456025 ns     17578125 ns            8
scan         24 512 mb  882547325 ns    884765625 ns            8
scan     tbb 24 512 mb   64710350 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48767763 ns     48828125 ns            8
find avx tbb 06 1 gb     36793400 ns     37109375 ns            8
find         06 1 gb    387696650 ns    388671875 ns            8
find     tbb 06 1 gb     40617888 ns     39062500 ns            8
find avx     12 1 gb     48591462 ns     46875000 ns            8
find avx tbb 12 1 gb     36777900 ns     35156250 ns            8
find         12 1 gb    199709588 ns    199218750 ns            8
find     tbb 12 1 gb     37682075 ns     37109375 ns            8
find avx     24 1 gb     54508525 ns     56640625 ns            8
find avx tbb 24 1 gb     36968750 ns     37109375 ns            8
find         24 1 gb    104410662 ns    103515625 ns            8
find     tbb 24 1 gb     37464063 ns     37109375 ns            8

scan avx     06 1 gb    691134775 ns    689453125 ns            8
scan avx tbb 06 1 gb    128894325 ns    121093750 ns            8
scan         06 1 gb   1764515238 ns   1765625000 ns            8
scan     tbb 06 1 gb    129732275 ns    119140625 ns            8
scan avx     12 1 gb     53382425 ns     50781250 ns            8
scan avx tbb 12 1 gb     36752662 ns     33203125 ns            8
scan         12 1 gb   1760686912 ns   1759765625 ns            8
scan     tbb 12 1 gb    130854263 ns    117187500 ns            8
scan avx     24 1 gb     48805875 ns     46875000 ns            8
scan avx tbb 24 1 gb     36832463 ns     37109375 ns            8
scan         24 1 gb   1760862975 ns   1757812500 ns            8
scan     tbb 24 1 gb    130408638 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98670225 ns     97656250 ns            8
find avx tbb 06 2 gb     73725075 ns     70312500 ns            8
find         06 2 gb    771734262 ns    771484375 ns            8
find     tbb 06 2 gb     80659675 ns     74218750 ns            8
find avx     12 2 gb     97859950 ns     97656250 ns            8
find avx tbb 12 2 gb     73467363 ns     72265625 ns            8
find         12 2 gb    397409488 ns    400390625 ns            8
find     tbb 12 2 gb     75752138 ns     70312500 ns            8
find avx     24 2 gb     99940350 ns    101562500 ns            8
find avx tbb 24 2 gb     73613275 ns     68359375 ns            8
find         24 2 gb    215389750 ns    212890625 ns            8
find     tbb 24 2 gb     74959412 ns     78125000 ns            8

scan avx     06 2 gb   1383554125 ns   1382812500 ns            8
scan avx tbb 06 2 gb    258700575 ns    244140625 ns            8
scan         06 2 gb   3526693125 ns   3527343750 ns            8
scan     tbb 06 2 gb    258429325 ns    238281250 ns            8
scan avx     12 2 gb     97490512 ns     97656250 ns            8
scan avx tbb 12 2 gb     73397075 ns     72265625 ns            8
scan         12 2 gb   3522747638 ns   3527343750 ns            8
scan     tbb 12 2 gb    259221875 ns    246093750 ns            8
scan avx     24 2 gb     98897850 ns    101562500 ns            8
scan avx tbb 24 2 gb     73768050 ns     66406250 ns            8
scan         24 2 gb   3523450387 ns   3525390625 ns            8
scan     tbb 24 2 gb    257561112 ns    240234375 ns            8
```

</details>

