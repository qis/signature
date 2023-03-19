# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        4613 ns        0.000 ns         4096
find avx tbb 06 16 kb        1870 ns        0.000 ns         4096
find         06 16 kb        8120 ns         7629 ns         4096
find     tbb 06 16 kb        9346 ns         7629 ns         4096
find avx     12 16 kb         968 ns        0.000 ns         4096
find avx tbb 12 16 kb         980 ns         3815 ns         4096
find         12 16 kb        4168 ns         3815 ns         4096
find     tbb 12 16 kb        9066 ns        11444 ns         4096
find avx     24 16 kb        1273 ns        0.000 ns         4096
find avx tbb 24 16 kb        1197 ns        0.000 ns         4096
find         24 16 kb        2674 ns         3815 ns         4096
find     tbb 24 16 kb        8394 ns         3815 ns         4096

scan avx     06 16 kb       14026 ns        15259 ns         4096
scan avx tbb 06 16 kb       11811 ns        11444 ns         4096
scan         06 16 kb       12535 ns        15259 ns         4096
scan     tbb 06 16 kb        8345 ns        11444 ns         4096
scan avx     12 16 kb         972 ns        0.000 ns         4096
scan avx tbb 12 16 kb        1001 ns        0.000 ns         4096
scan         12 16 kb       12810 ns        15259 ns         4096
scan     tbb 12 16 kb        8330 ns        11444 ns         4096
scan avx     24 16 kb        1073 ns        0.000 ns         4096
scan avx tbb 24 16 kb        1072 ns         3815 ns         4096
scan         24 16 kb       13041 ns        11444 ns         4096
scan     tbb 24 16 kb        8384 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2171 ns         3815 ns         4096
find avx tbb 06 64 kb        2155 ns         3815 ns         4096
find         06 64 kb       28391 ns        26703 ns         4096
find     tbb 06 64 kb       11795 ns        15259 ns         4096
find avx     12 64 kb        1983 ns         3815 ns         4096
find avx tbb 12 64 kb        1988 ns        0.000 ns         4096
find         12 64 kb       13945 ns        15259 ns         4096
find     tbb 12 64 kb        9979 ns         7629 ns         4096
find avx     24 64 kb        2469 ns        0.000 ns         4096
find avx tbb 24 64 kb        2461 ns         3815 ns         4096
find         24 64 kb        7402 ns        11444 ns         4096
find     tbb 24 64 kb        9065 ns         7629 ns         4096

scan avx     06 64 kb       50090 ns        41962 ns         4096
scan avx tbb 06 64 kb       42666 ns        41962 ns         4096
scan         06 64 kb       50329 ns        53406 ns         4096
scan     tbb 06 64 kb       15558 ns         3815 ns         4096
scan avx     12 64 kb        2355 ns        0.000 ns         4096
scan avx tbb 12 64 kb        2359 ns         3815 ns         4096
scan         12 64 kb       47863 ns        45776 ns         4096
scan     tbb 12 64 kb       14971 ns        15259 ns         4096
scan avx     24 64 kb        2409 ns        0.000 ns         4096
scan avx tbb 24 64 kb        2347 ns         3815 ns         4096
scan         24 64 kb       49093 ns        49591 ns         4096
scan     tbb 24 64 kb       15059 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7430 ns        0.000 ns         2048
find avx tbb 06 256 kb       7386 ns        0.000 ns         2048
find         06 256 kb     106947 ns       114441 ns         2048
find     tbb 06 256 kb      23620 ns        30518 ns         2048
find avx     12 256 kb       6783 ns         7629 ns         2048
find avx tbb 12 256 kb       6887 ns        15259 ns         2048
find         12 256 kb      55813 ns        61035 ns         2048
find     tbb 12 256 kb      16988 ns        15259 ns         2048
find avx     24 256 kb       8149 ns         7629 ns         2048
find avx tbb 24 256 kb       8043 ns        15259 ns         2048
find         24 256 kb      27354 ns        38147 ns         2048
find     tbb 24 256 kb      14162 ns        15259 ns         2048

scan avx     06 256 kb     203394 ns       205994 ns         2048
scan avx tbb 06 256 kb     169802 ns       167847 ns         2048
scan         06 256 kb     199472 ns       205994 ns         2048
scan     tbb 06 256 kb      42357 ns        53406 ns         2048
scan avx     12 256 kb       8079 ns         7629 ns         2048
scan avx tbb 12 256 kb       7912 ns         7629 ns         2048
scan         12 256 kb     201005 ns       205994 ns         2048
scan     tbb 12 256 kb      43012 ns        45776 ns         2048
scan avx     24 256 kb       8005 ns        0.000 ns         2048
scan avx tbb 24 256 kb       7883 ns         7629 ns         2048
scan         24 256 kb     201561 ns       205994 ns         2048
scan     tbb 24 256 kb      42261 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26906 ns        30518 ns         1024
find avx tbb 06 1 mb        17471 ns        30518 ns         1024
find         06 1 mb       426323 ns       411987 ns         1024
find     tbb 06 1 mb        54386 ns        30518 ns         1024
find avx     12 1 mb        25072 ns        15259 ns         1024
find avx tbb 12 1 mb        17976 ns        15259 ns         1024
find         12 1 mb       212072 ns       183105 ns         1024
find     tbb 12 1 mb        32722 ns        30518 ns         1024
find avx     24 1 mb        30568 ns        30518 ns         1024
find avx tbb 24 1 mb        18205 ns        30518 ns         1024
find         24 1 mb       109953 ns       106812 ns         1024
find     tbb 24 1 mb        23254 ns        15259 ns         1024

scan avx     06 1 mb       800503 ns       808716 ns         1024
scan avx tbb 06 1 mb       138680 ns       183105 ns         1024
scan         06 1 mb       814449 ns       808716 ns         1024
scan     tbb 06 1 mb       139929 ns       137329 ns         1024
scan avx     12 1 mb        29861 ns        45776 ns         1024
scan avx tbb 12 1 mb        17923 ns        0.000 ns         1024
scan         12 1 mb       819687 ns       793457 ns         1024
scan     tbb 12 1 mb       141246 ns       122070 ns         1024
scan avx     24 1 mb        30399 ns        15259 ns         1024
scan avx tbb 24 1 mb        17722 ns        30518 ns         1024
scan         24 1 mb       827608 ns       854492 ns         1024
scan     tbb 24 1 mb       141446 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       194384 ns       152588 ns          512
find avx tbb 06 4 mb       175150 ns       213623 ns          512
find         06 4 mb      1672704 ns      1739502 ns          512
find     tbb 06 4 mb       234493 ns       183105 ns          512
find avx     12 4 mb       188284 ns       183105 ns          512
find avx tbb 12 4 mb       176415 ns        91553 ns          512
find         12 4 mb       856633 ns       854492 ns          512
find     tbb 12 4 mb       203128 ns       152588 ns          512
find avx     24 4 mb       198087 ns       213623 ns          512
find avx tbb 24 4 mb       173778 ns       152588 ns          512
find         24 4 mb       451739 ns       488281 ns          512
find     tbb 24 4 mb       187578 ns       244141 ns          512

scan avx     06 4 mb      3220810 ns      3234863 ns          512
scan avx tbb 06 4 mb       564179 ns       579834 ns          512
scan         06 4 mb      3131185 ns      3204346 ns          512
scan     tbb 06 4 mb       566070 ns       335693 ns          512
scan avx     12 4 mb       195551 ns       213623 ns          512
scan avx tbb 12 4 mb       178074 ns       152588 ns          512
scan         12 4 mb      3113656 ns      3112793 ns          512
scan     tbb 12 4 mb       566667 ns       579834 ns          512
scan avx     24 4 mb       194432 ns       152588 ns          512
scan avx tbb 24 4 mb       175687 ns       244141 ns          512
scan         24 4 mb      3262255 ns      3234863 ns          512
scan     tbb 24 4 mb       571721 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      789641 ns       976562 ns           64
find avx tbb 06 16 mb      636956 ns       488281 ns           64
find         06 16 mb     6782392 ns      5615234 ns           64
find     tbb 06 16 mb      791823 ns       732422 ns           64
find avx     12 16 mb      777417 ns       976562 ns           64
find avx tbb 12 16 mb      640750 ns       244141 ns           64
find         12 16 mb     3466972 ns      2929688 ns           64
find     tbb 12 16 mb      694947 ns       976562 ns           64
find avx     24 16 mb      830363 ns      1220703 ns           64
find avx tbb 24 16 mb      642708 ns       244141 ns           64
find         24 16 mb     1841919 ns      1953125 ns           64
find     tbb 24 16 mb      675245 ns       732422 ns           64

scan avx     06 16 mb    13032220 ns     13183594 ns           64
scan avx tbb 06 16 mb     2119906 ns      1464844 ns           64
scan         06 16 mb    12645681 ns     12451172 ns           64
scan     tbb 06 16 mb     2119827 ns      2441406 ns           64
scan avx     12 16 mb      786300 ns       732422 ns           64
scan avx tbb 12 16 mb      634095 ns       244141 ns           64
scan         12 16 mb    13104331 ns     12939453 ns           64
scan     tbb 12 16 mb     2107911 ns      1708984 ns           64
scan avx     24 16 mb      780608 ns       488281 ns           64
scan avx tbb 24 16 mb      641063 ns       976562 ns           64
scan         24 16 mb    13012945 ns     13427734 ns           64
scan     tbb 24 16 mb     2121491 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3076225 ns      7812500 ns           32
find avx tbb 06 64 mb     2376778 ns      1953125 ns           32
find         06 64 mb    26657119 ns     29296875 ns           32
find     tbb 06 64 mb     2794600 ns      1464844 ns           32
find avx     12 64 mb     2993078 ns        0.000 ns           32
find avx tbb 12 64 mb     2366534 ns      2441406 ns           32
find         12 64 mb    13548378 ns     13671875 ns           32
find     tbb 12 64 mb     2494413 ns      1953125 ns           32
find avx     24 64 mb     3189753 ns      3906250 ns           32
find avx tbb 24 64 mb     2367841 ns      2441406 ns           32
find         24 64 mb     7123744 ns      6835938 ns           32
find     tbb 24 64 mb     2448916 ns      1953125 ns           32

scan avx     06 64 mb    46401750 ns     45898438 ns           32
scan avx tbb 06 64 mb     8222662 ns      8300781 ns           32
scan         06 64 mb    51652941 ns     51757812 ns           32
scan     tbb 06 64 mb     8179878 ns      7812500 ns           32
scan avx     12 64 mb     3200453 ns      3906250 ns           32
scan avx tbb 12 64 mb     2425150 ns      1464844 ns           32
scan         12 64 mb    51816628 ns     51269531 ns           32
scan     tbb 12 64 mb     8219103 ns      8300781 ns           32
scan avx     24 64 mb     3111416 ns      1464844 ns           32
scan avx tbb 24 64 mb     2439728 ns      2441406 ns           32
scan         24 64 mb    50165584 ns     51269531 ns           32
scan     tbb 24 64 mb     8260359 ns      8789062 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12076906 ns     12695312 ns           16
find avx tbb 06 256 mb    9268037 ns      8789062 ns           16
find         06 256 mb  106480019 ns    107421875 ns           16
find     tbb 06 256 mb   10976031 ns      6835938 ns           16
find avx     12 256 mb   12070544 ns      9765625 ns           16
find avx tbb 12 256 mb    9276337 ns      8789062 ns           16
find         12 256 mb   54252025 ns     55664062 ns           16
find     tbb 12 256 mb    9559319 ns     11718750 ns           16
find avx     24 256 mb   12567394 ns     12695312 ns           16
find avx tbb 24 256 mb    9316469 ns      7812500 ns           16
find         24 256 mb   28756931 ns     31250000 ns           16
find     tbb 24 256 mb    9510925 ns      8789062 ns           16

scan avx     06 256 mb  200348119 ns    200195312 ns           16
scan avx tbb 06 256 mb   32273925 ns     33203125 ns           16
scan         06 256 mb  205729606 ns    206054688 ns           16
scan     tbb 06 256 mb   32513294 ns     31250000 ns           16
scan avx     12 256 mb   12882937 ns     11718750 ns           16
scan avx tbb 12 256 mb    9255994 ns      8789062 ns           16
scan         12 256 mb  207769844 ns    208984375 ns           16
scan     tbb 12 256 mb   32385269 ns     33203125 ns           16
scan avx     24 256 mb   12839631 ns     11718750 ns           16
scan avx tbb 24 256 mb    9271837 ns      9765625 ns           16
scan         24 256 mb  201315369 ns    201171875 ns           16
scan     tbb 24 256 mb   32244537 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24274950 ns     25390625 ns            8
find avx tbb 06 512 mb   18438900 ns     17578125 ns            8
find         06 512 mb  213541475 ns    216796875 ns            8
find     tbb 06 512 mb   21732138 ns     15625000 ns            8
find avx     12 512 mb   24319413 ns     21484375 ns            8
find avx tbb 12 512 mb   18446650 ns     17578125 ns            8
find         12 512 mb  108409025 ns    103515625 ns            8
find     tbb 12 512 mb   18828963 ns     19531250 ns            8
find avx     24 512 mb   25168262 ns     19531250 ns            8
find avx tbb 24 512 mb   18649825 ns     21484375 ns            8
find         24 512 mb   56896625 ns     56640625 ns            8
find     tbb 24 512 mb   18832787 ns     21484375 ns            8

scan avx     06 512 mb  419342675 ns    416015625 ns            8
scan avx tbb 06 512 mb   65018125 ns     58593750 ns            8
scan         06 512 mb  397801575 ns    400390625 ns            8
scan     tbb 06 512 mb   64859913 ns     60546875 ns            8
scan avx     12 512 mb   24537587 ns     23437500 ns            8
scan avx tbb 12 512 mb   18432663 ns     17578125 ns            8
scan         12 512 mb  397613287 ns    402343750 ns            8
scan     tbb 12 512 mb   64865312 ns     58593750 ns            8
scan avx     24 512 mb   24736825 ns     25390625 ns            8
scan avx tbb 24 512 mb   18448475 ns     17578125 ns            8
scan         24 512 mb  414458975 ns    416015625 ns            8
scan     tbb 24 512 mb   65903000 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     49160138 ns     46875000 ns            8
find avx tbb 06 1 gb     37159763 ns     39062500 ns            8
find         06 1 gb    425503000 ns    425781250 ns            8
find     tbb 06 1 gb     42431075 ns     37109375 ns            8
find avx     12 1 gb     48840550 ns     46875000 ns            8
find avx tbb 12 1 gb     36732837 ns     37109375 ns            8
find         12 1 gb    217110375 ns    218750000 ns            8
find     tbb 12 1 gb     38220213 ns     39062500 ns            8
find avx     24 1 gb     51266750 ns     48828125 ns            8
find avx tbb 24 1 gb     36837025 ns     37109375 ns            8
find         24 1 gb    113502900 ns    113281250 ns            8
find     tbb 24 1 gb     37460800 ns     33203125 ns            8

scan avx     06 1 gb    836764825 ns    837890625 ns            8
scan avx tbb 06 1 gb    128824713 ns    119140625 ns            8
scan         06 1 gb    833572475 ns    830078125 ns            8
scan     tbb 06 1 gb    131015487 ns    117187500 ns            8
scan avx     12 1 gb     54045112 ns     54687500 ns            8
scan avx tbb 12 1 gb     36773763 ns     33203125 ns            8
scan         12 1 gb    829623863 ns    830078125 ns            8
scan     tbb 12 1 gb    129641925 ns    121093750 ns            8
scan avx     24 1 gb     49217950 ns     48828125 ns            8
scan avx tbb 24 1 gb     36819262 ns     37109375 ns            8
scan         24 1 gb    827062500 ns    824218750 ns            8
scan     tbb 24 1 gb    129122050 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98682625 ns     99609375 ns            8
find avx tbb 06 2 gb     73471025 ns     78125000 ns            8
find         06 2 gb    850482100 ns    851562500 ns            8
find     tbb 06 2 gb     84018812 ns     78125000 ns            8
find avx     12 2 gb     97067137 ns     99609375 ns            8
find avx tbb 12 2 gb     73622200 ns     74218750 ns            8
find         12 2 gb    435324450 ns    433593750 ns            8
find     tbb 12 2 gb     74849300 ns     70312500 ns            8
find avx     24 2 gb    101075375 ns     99609375 ns            8
find avx tbb 24 2 gb     73674875 ns     68359375 ns            8
find         24 2 gb    229241625 ns    230468750 ns            8
find     tbb 24 2 gb     75079500 ns     76171875 ns            8

scan avx     06 2 gb   1671054225 ns   1671875000 ns            8
scan avx tbb 06 2 gb    261645662 ns    234375000 ns            8
scan         06 2 gb   1647799400 ns   1650390625 ns            8
scan     tbb 06 2 gb    259323950 ns    244140625 ns            8
scan avx     12 2 gb     98338538 ns     97656250 ns            8
scan avx tbb 12 2 gb     73462250 ns     72265625 ns            8
scan         12 2 gb   1657906462 ns   1660156250 ns            8
scan     tbb 12 2 gb    259325825 ns    236328125 ns            8
scan avx     24 2 gb     98816562 ns     99609375 ns            8
scan avx tbb 24 2 gb     73518800 ns     76171875 ns            8
scan         24 2 gb   1601846175 ns   1603515625 ns            8
scan     tbb 24 2 gb    258151913 ns    240234375 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb         997 ns        0.000 ns         4096
find avx tbb 06 16 kb         959 ns        0.000 ns         4096
find         06 16 kb        6705 ns         7629 ns         4096
find     tbb 06 16 kb        9358 ns         7629 ns         4096
find avx     12 16 kb        1065 ns        0.000 ns         4096
find avx tbb 12 16 kb        1039 ns        0.000 ns         4096
find         12 16 kb        3833 ns        0.000 ns         4096
find     tbb 12 16 kb        8745 ns        11444 ns         4096
find avx     24 16 kb        1243 ns        0.000 ns         4096
find avx tbb 24 16 kb        1116 ns         3815 ns         4096
find         24 16 kb        2338 ns         3815 ns         4096
find     tbb 24 16 kb        8327 ns         7629 ns         4096

scan avx     06 16 kb       11825 ns        15259 ns         4096
scan avx tbb 06 16 kb       11777 ns         7629 ns         4096
scan         06 16 kb       28017 ns        30518 ns         4096
scan     tbb 06 16 kb        7849 ns         3815 ns         4096
scan avx     12 16 kb         926 ns        0.000 ns         4096
scan avx tbb 12 16 kb         976 ns         3815 ns         4096
scan         12 16 kb       27543 ns        26703 ns         4096
scan     tbb 12 16 kb        7963 ns        11444 ns         4096
scan avx     24 16 kb         967 ns        0.000 ns         4096
scan avx tbb 24 16 kb        1001 ns        0.000 ns         4096
scan         24 16 kb       27808 ns        22888 ns         4096
scan     tbb 24 16 kb        7929 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2071 ns        0.000 ns         4096
find avx tbb 06 64 kb        2062 ns         3815 ns         4096
find         06 64 kb       25749 ns        22888 ns         4096
find     tbb 06 64 kb       11584 ns        11444 ns         4096
find avx     12 64 kb        2120 ns         3815 ns         4096
find avx tbb 12 64 kb        2149 ns        0.000 ns         4096
find         12 64 kb       13174 ns        15259 ns         4096
find     tbb 12 64 kb        9945 ns         7629 ns         4096
find avx     24 64 kb        2949 ns         3815 ns         4096
find avx tbb 24 64 kb        2369 ns        0.000 ns         4096
find         24 64 kb        6718 ns        11444 ns         4096
find     tbb 24 64 kb        9054 ns        11444 ns         4096

scan avx     06 64 kb       44337 ns        41962 ns         4096
scan avx tbb 06 64 kb       42886 ns        45776 ns         4096
scan         06 64 kb      107635 ns       106812 ns         4096
scan     tbb 06 64 kb       15064 ns        19073 ns         4096
scan avx     12 64 kb        2167 ns         3815 ns         4096
scan avx tbb 12 64 kb        2258 ns         3815 ns         4096
scan         12 64 kb      109968 ns       110626 ns         4096
scan     tbb 12 64 kb       14358 ns        15259 ns         4096
scan avx     24 64 kb        2190 ns        0.000 ns         4096
scan avx tbb 24 64 kb        2229 ns        0.000 ns         4096
scan         24 64 kb      110992 ns       114441 ns         4096
scan     tbb 24 64 kb       14465 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       6908 ns        0.000 ns         2048
find avx tbb 06 256 kb       6831 ns        0.000 ns         2048
find         06 256 kb     100478 ns        91553 ns         2048
find     tbb 06 256 kb      21718 ns        30518 ns         2048
find avx     12 256 kb       6886 ns        15259 ns         2048
find avx tbb 12 256 kb       6953 ns        0.000 ns         2048
find         12 256 kb      49585 ns        53406 ns         2048
find     tbb 12 256 kb      17072 ns         7629 ns         2048
find avx     24 256 kb       9865 ns         7629 ns         2048
find avx tbb 24 256 kb       8005 ns         7629 ns         2048
find         24 256 kb      26025 ns        22888 ns         2048
find     tbb 24 256 kb      13993 ns        30518 ns         2048

scan avx     06 256 kb     173514 ns       167847 ns         2048
scan avx tbb 06 256 kb     169473 ns       167847 ns         2048
scan         06 256 kb     430615 ns       419617 ns         2048
scan     tbb 06 256 kb      41161 ns        53406 ns         2048
scan avx     12 256 kb       7273 ns         7629 ns         2048
scan avx tbb 12 256 kb       7370 ns         7629 ns         2048
scan         12 256 kb     432742 ns       442505 ns         2048
scan     tbb 12 256 kb      41175 ns        45776 ns         2048
scan avx     24 256 kb       7308 ns        15259 ns         2048
scan avx tbb 24 256 kb       7259 ns         7629 ns         2048
scan         24 256 kb     436409 ns       434875 ns         2048
scan     tbb 24 256 kb      41520 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25685 ns        61035 ns         1024
find avx tbb 06 1 mb        17753 ns        0.000 ns         1024
find         06 1 mb       378540 ns       381470 ns         1024
find     tbb 06 1 mb        50364 ns        61035 ns         1024
find avx     12 1 mb        25262 ns        45776 ns         1024
find avx tbb 12 1 mb        17535 ns        30518 ns         1024
find         12 1 mb       192250 ns       213623 ns         1024
find     tbb 12 1 mb        31777 ns        61035 ns         1024
find avx     24 1 mb        36970 ns        30518 ns         1024
find avx tbb 24 1 mb        18375 ns        30518 ns         1024
find         24 1 mb        99316 ns       122070 ns         1024
find     tbb 24 1 mb        22826 ns        30518 ns         1024

scan avx     06 1 mb       678415 ns       656128 ns         1024
scan avx tbb 06 1 mb       139492 ns       152588 ns         1024
scan         06 1 mb      1722123 ns      1754761 ns         1024
scan     tbb 06 1 mb       138310 ns       183105 ns         1024
scan avx     12 1 mb        27342 ns        15259 ns         1024
scan avx tbb 12 1 mb        17465 ns        15259 ns         1024
scan         12 1 mb      1732230 ns      1754761 ns         1024
scan     tbb 12 1 mb       138287 ns        76294 ns         1024
scan avx     24 1 mb        27265 ns        30518 ns         1024
scan avx tbb 24 1 mb        17221 ns        15259 ns         1024
scan         24 1 mb      1722374 ns      1739502 ns         1024
scan     tbb 24 1 mb       137773 ns       152588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       188467 ns       183105 ns          512
find avx tbb 06 4 mb       172447 ns        91553 ns          512
find         06 4 mb      1517911 ns      1464844 ns          512
find     tbb 06 4 mb       223136 ns       274658 ns          512
find avx     12 4 mb       189836 ns        61035 ns          512
find avx tbb 12 4 mb       175903 ns       122070 ns          512
find         12 4 mb       778191 ns       701904 ns          512
find     tbb 12 4 mb       196705 ns       152588 ns          512
find avx     24 4 mb       211134 ns       213623 ns          512
find avx tbb 24 4 mb       181392 ns        91553 ns          512
find         24 4 mb       422584 ns       396729 ns          512
find     tbb 24 4 mb       189789 ns       152588 ns          512

scan avx     06 4 mb      2721115 ns      2655029 ns          512
scan avx tbb 06 4 mb       567500 ns       610352 ns          512
scan         06 4 mb      6893563 ns      6927490 ns          512
scan     tbb 06 4 mb       559351 ns       579834 ns          512
scan avx     12 4 mb       192130 ns       213623 ns          512
scan avx tbb 12 4 mb       179107 ns       152588 ns          512
scan         12 4 mb      6915903 ns      6896973 ns          512
scan     tbb 12 4 mb       563304 ns       579834 ns          512
scan avx     24 4 mb       190234 ns       274658 ns          512
scan avx tbb 24 4 mb       176772 ns       244141 ns          512
scan         24 4 mb      6906577 ns      6896973 ns          512
scan     tbb 24 4 mb       561941 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      773258 ns       732422 ns           64
find avx tbb 06 16 mb      625458 ns       732422 ns           64
find         06 16 mb     6124961 ns      5371094 ns           64
find     tbb 06 16 mb      758300 ns       732422 ns           64
find avx     12 16 mb      789523 ns       488281 ns           64
find avx tbb 12 16 mb      639797 ns        0.000 ns           64
find         12 16 mb     3172313 ns      2685547 ns           64
find     tbb 12 16 mb      695730 ns       244141 ns           64
find avx     24 16 mb      858405 ns       976562 ns           64
find avx tbb 24 16 mb      642942 ns       244141 ns           64
find         24 16 mb     1693119 ns      1708984 ns           64
find     tbb 24 16 mb      673609 ns       488281 ns           64

scan avx     06 16 mb    10896567 ns     10498047 ns           64
scan avx tbb 06 16 mb     2118603 ns      1220703 ns           64
scan         06 16 mb    27570728 ns     27587891 ns           64
scan     tbb 06 16 mb     2118092 ns      2441406 ns           64
scan avx     12 16 mb      785558 ns      1220703 ns           64
scan avx tbb 12 16 mb      633477 ns       488281 ns           64
scan         12 16 mb    27665647 ns     26855469 ns           64
scan     tbb 12 16 mb     2127719 ns      2197266 ns           64
scan avx     24 16 mb      779298 ns       976562 ns           64
scan avx tbb 24 16 mb      644733 ns       976562 ns           64
scan         24 16 mb    27588791 ns     27343750 ns           64
scan     tbb 24 16 mb     2112295 ns      1220703 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3064028 ns        0.000 ns           32
find avx tbb 06 64 mb     2355287 ns      2441406 ns           32
find         06 64 mb    24214906 ns     23437500 ns           32
find     tbb 06 64 mb     2633809 ns      1464844 ns           32
find avx     12 64 mb     3015178 ns        0.000 ns           32
find avx tbb 12 64 mb     2366875 ns      1464844 ns           32
find         12 64 mb    12321234 ns     11718750 ns           32
find     tbb 12 64 mb     2471388 ns      1464844 ns           32
find avx     24 64 mb     3365878 ns      3417969 ns           32
find avx tbb 24 64 mb     2378928 ns      2441406 ns           32
find         24 64 mb     6616988 ns      6835938 ns           32
find     tbb 24 64 mb     2435275 ns      1953125 ns           32

scan avx     06 64 mb    43295834 ns     43457031 ns           32
scan avx tbb 06 64 mb     8242431 ns      8789062 ns           32
scan         06 64 mb   110209834 ns    109863281 ns           32
scan     tbb 06 64 mb     8262981 ns      7324219 ns           32
scan avx     12 64 mb     3106422 ns      3417969 ns           32
scan avx tbb 12 64 mb     2368119 ns      1953125 ns           32
scan         12 64 mb   110237662 ns    110839844 ns           32
scan     tbb 12 64 mb     8185841 ns      7812500 ns           32
scan avx     24 64 mb     3092447 ns      4394531 ns           32
scan avx tbb 24 64 mb     2369403 ns      2441406 ns           32
scan         24 64 mb   110263559 ns    110839844 ns           32
scan     tbb 24 64 mb     8249069 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12547831 ns     12695312 ns           16
find avx tbb 06 256 mb    9273762 ns      9765625 ns           16
find         06 256 mb   96537044 ns     95703125 ns           16
find     tbb 06 256 mb   10229906 ns     13671875 ns           16
find avx     12 256 mb   12016519 ns      9765625 ns           16
find avx tbb 12 256 mb    9256381 ns      7812500 ns           16
find         12 256 mb   49444000 ns     49804688 ns           16
find     tbb 12 256 mb    9573919 ns     10742188 ns           16
find avx     24 256 mb   13378313 ns     11718750 ns           16
find avx tbb 24 256 mb    9337275 ns      8789062 ns           16
find         24 256 mb   26307544 ns     22460938 ns           16
find     tbb 24 256 mb    9474394 ns     12695312 ns           16

scan avx     06 256 mb  172968944 ns    172851562 ns           16
scan avx tbb 06 256 mb   32393119 ns     30273438 ns           16
scan         06 256 mb  440865763 ns    437500000 ns           16
scan     tbb 06 256 mb   32321775 ns     30273438 ns           16
scan avx     12 256 mb   12164694 ns      9765625 ns           16
scan avx tbb 12 256 mb    9661900 ns      7812500 ns           16
scan         12 256 mb  440687231 ns    440429688 ns           16
scan     tbb 12 256 mb   32367619 ns     32226562 ns           16
scan avx     24 256 mb   12137219 ns     12695312 ns           16
scan avx tbb 24 256 mb    9278950 ns      8789062 ns           16
scan         24 256 mb  441246288 ns    440429688 ns           16
scan     tbb 24 256 mb   32311056 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24277563 ns     23437500 ns            8
find avx tbb 06 512 mb   18469938 ns     21484375 ns            8
find         06 512 mb  193962337 ns    197265625 ns            8
find     tbb 06 512 mb   20113087 ns     19531250 ns            8
find avx     12 512 mb   24547513 ns     25390625 ns            8
find avx tbb 12 512 mb   18601137 ns     19531250 ns            8
find         12 512 mb   99814637 ns     97656250 ns            8
find     tbb 12 512 mb   18950175 ns     19531250 ns            8
find avx     24 512 mb   26912863 ns     25390625 ns            8
find avx tbb 24 512 mb   18550037 ns     15625000 ns            8
find         24 512 mb   54303775 ns     54687500 ns            8
find     tbb 24 512 mb   18781512 ns     19531250 ns            8

scan avx     06 512 mb  345977500 ns    345703125 ns            8
scan avx tbb 06 512 mb   65337025 ns     62500000 ns            8
scan         06 512 mb  881057037 ns    878906250 ns            8
scan     tbb 06 512 mb   64440675 ns     60546875 ns            8
scan avx     12 512 mb   24596288 ns     25390625 ns            8
scan avx tbb 12 512 mb   18429287 ns     19531250 ns            8
scan         12 512 mb  879881775 ns    880859375 ns            8
scan     tbb 12 512 mb   64788888 ns     62500000 ns            8
scan avx     24 512 mb   24355938 ns     23437500 ns            8
scan avx tbb 24 512 mb   18458438 ns     19531250 ns            8
scan         24 512 mb  882161475 ns    880859375 ns            8
scan     tbb 24 512 mb   64692263 ns     58593750 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48419850 ns     48828125 ns            8
find avx tbb 06 1 gb     36748587 ns     33203125 ns            8
find         06 1 gb    388199775 ns    388671875 ns            8
find     tbb 06 1 gb     40270913 ns     39062500 ns            8
find avx     12 1 gb     48967375 ns     48828125 ns            8
find avx tbb 12 1 gb     36807925 ns     37109375 ns            8
find         12 1 gb    196817263 ns    197265625 ns            8
find     tbb 12 1 gb     38099737 ns     37109375 ns            8
find avx     24 1 gb     54012475 ns     50781250 ns            8
find avx tbb 24 1 gb     36955613 ns     37109375 ns            8
find         24 1 gb    109128350 ns    107421875 ns            8
find     tbb 24 1 gb     37880050 ns     39062500 ns            8

scan avx     06 1 gb    690907325 ns    689453125 ns            8
scan avx tbb 06 1 gb    129345675 ns    121093750 ns            8
scan         06 1 gb   1763912150 ns   1761718750 ns            8
scan     tbb 06 1 gb    129118575 ns    123046875 ns            8
scan avx     12 1 gb     48943212 ns     48828125 ns            8
scan avx tbb 12 1 gb     36781463 ns     39062500 ns            8
scan         12 1 gb   1763963850 ns   1763671875 ns            8
scan     tbb 12 1 gb    130709775 ns    121093750 ns            8
scan avx     24 1 gb     49384637 ns     48828125 ns            8
scan avx tbb 24 1 gb     36801162 ns     35156250 ns            8
scan         24 1 gb   1764008637 ns   1763671875 ns            8
scan     tbb 24 1 gb    129703400 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98011825 ns     95703125 ns            8
find avx tbb 06 2 gb     73481250 ns     74218750 ns            8
find         06 2 gb    777328388 ns    781250000 ns            8
find     tbb 06 2 gb     79016925 ns     76171875 ns            8
find avx     12 2 gb     98040150 ns     97656250 ns            8
find avx tbb 12 2 gb     73524288 ns     74218750 ns            8
find         12 2 gb    392517363 ns    396484375 ns            8
find     tbb 12 2 gb     76317800 ns     76171875 ns            8
find avx     24 2 gb    108784637 ns    109375000 ns            8
find avx tbb 24 2 gb     73753313 ns     68359375 ns            8
find         24 2 gb    210018162 ns    212890625 ns            8
find     tbb 24 2 gb     74774913 ns     74218750 ns            8

scan avx     06 2 gb   1388547400 ns   1390625000 ns            8
scan avx tbb 06 2 gb    260087013 ns    240234375 ns            8
scan         06 2 gb   3526043675 ns   3527343750 ns            8
scan     tbb 06 2 gb    258369975 ns    240234375 ns            8
scan avx     12 2 gb     98459525 ns     99609375 ns            8
scan avx tbb 12 2 gb     73522087 ns     72265625 ns            8
scan         12 2 gb   3529485638 ns   3531250000 ns            8
scan     tbb 12 2 gb    257996663 ns    238281250 ns            8
scan avx     24 2 gb     98234463 ns     97656250 ns            8
scan avx tbb 24 2 gb     73606187 ns     78125000 ns            8
scan         24 2 gb   3527419213 ns   3521484375 ns            8
scan     tbb 24 2 gb    260298837 ns    240234375 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1609 ns        0.000 ns         4096
find avx tbb 06 16 kb         985 ns        0.000 ns         4096
find         06 16 kb        6695 ns         7629 ns         4096
find     tbb 06 16 kb        9383 ns         7629 ns         4096
find avx     12 16 kb        1031 ns         3815 ns         4096
find avx tbb 12 16 kb        1039 ns        0.000 ns         4096
find         12 16 kb        4083 ns         7629 ns         4096
find     tbb 12 16 kb        8688 ns         7629 ns         4096
find avx     24 16 kb        1189 ns         3815 ns         4096
find avx tbb 24 16 kb        1139 ns        0.000 ns         4096
find         24 16 kb        2517 ns         3815 ns         4096
find     tbb 24 16 kb        8368 ns        11444 ns         4096

scan avx     06 16 kb       12173 ns        11444 ns         4096
scan avx tbb 06 16 kb       11781 ns        15259 ns         4096
scan         06 16 kb       28162 ns        26703 ns         4096
scan     tbb 06 16 kb        7784 ns         3815 ns         4096
scan avx     12 16 kb         941 ns        0.000 ns         4096
scan avx tbb 12 16 kb         951 ns        0.000 ns         4096
scan         12 16 kb       27973 ns        26703 ns         4096
scan     tbb 12 16 kb        7863 ns         7629 ns         4096
scan avx     24 16 kb         981 ns         3815 ns         4096
scan avx tbb 24 16 kb         988 ns        0.000 ns         4096
scan         24 16 kb       27583 ns        30518 ns         4096
scan     tbb 24 16 kb        7762 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        1962 ns         3815 ns         4096
find avx tbb 06 64 kb        1983 ns         3815 ns         4096
find         06 64 kb       24300 ns        26703 ns         4096
find     tbb 06 64 kb       11332 ns        11444 ns         4096
find avx     12 64 kb        2167 ns        0.000 ns         4096
find avx tbb 12 64 kb        2138 ns         3815 ns         4096
find         12 64 kb       12942 ns        11444 ns         4096
find     tbb 12 64 kb        9949 ns        11444 ns         4096
find avx     24 64 kb        2588 ns         3815 ns         4096
find avx tbb 24 64 kb        2336 ns        0.000 ns         4096
find         24 64 kb        6956 ns         7629 ns         4096
find     tbb 24 64 kb        8932 ns        11444 ns         4096

scan avx     06 64 kb       45745 ns        45776 ns         4096
scan avx tbb 06 64 kb       42907 ns        45776 ns         4096
scan         06 64 kb      107890 ns       106812 ns         4096
scan     tbb 06 64 kb       14542 ns        15259 ns         4096
scan avx     12 64 kb        2182 ns         3815 ns         4096
scan avx tbb 12 64 kb        2083 ns         3815 ns         4096
scan         12 64 kb      109531 ns       110626 ns         4096
scan     tbb 12 64 kb       13996 ns        15259 ns         4096
scan avx     24 64 kb        2174 ns        0.000 ns         4096
scan avx tbb 24 64 kb        2090 ns        0.000 ns         4096
scan         24 64 kb      111628 ns       110626 ns         4096
scan     tbb 24 64 kb       13977 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7089 ns        0.000 ns         2048
find avx tbb 06 256 kb       7265 ns         7629 ns         2048
find         06 256 kb      98010 ns       106812 ns         2048
find     tbb 06 256 kb      21649 ns        22888 ns         2048
find avx     12 256 kb       7085 ns         7629 ns         2048
find avx tbb 12 256 kb       7282 ns        0.000 ns         2048
find         12 256 kb      50005 ns        53406 ns         2048
find     tbb 12 256 kb      16931 ns        22888 ns         2048
find avx     24 256 kb       8779 ns        0.000 ns         2048
find avx tbb 24 256 kb       7500 ns         7629 ns         2048
find         24 256 kb      25578 ns        15259 ns         2048
find     tbb 24 256 kb      13874 ns        30518 ns         2048

scan avx     06 256 kb     174066 ns       183105 ns         2048
scan avx tbb 06 256 kb     169110 ns       175476 ns         2048
scan         06 256 kb     431155 ns       434875 ns         2048
scan     tbb 06 256 kb      41525 ns        61035 ns         2048
scan avx     12 256 kb       7739 ns         7629 ns         2048
scan avx tbb 12 256 kb       7169 ns        15259 ns         2048
scan         12 256 kb     433541 ns       434875 ns         2048
scan     tbb 12 256 kb      40590 ns        53406 ns         2048
scan avx     24 256 kb       7688 ns        0.000 ns         2048
scan avx tbb 24 256 kb       7095 ns        0.000 ns         2048
scan         24 256 kb     433312 ns       434875 ns         2048
scan     tbb 24 256 kb      40872 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26480 ns        30518 ns         1024
find avx tbb 06 1 mb        18264 ns        15259 ns         1024
find         06 1 mb       380635 ns       396729 ns         1024
find     tbb 06 1 mb        50615 ns        45776 ns         1024
find avx     12 1 mb        25553 ns        0.000 ns         1024
find avx tbb 12 1 mb        17550 ns        45776 ns         1024
find         12 1 mb       194024 ns       198364 ns         1024
find     tbb 12 1 mb        31632 ns        15259 ns         1024
find avx     24 1 mb        31753 ns        45776 ns         1024
find avx tbb 24 1 mb        18013 ns        15259 ns         1024
find         24 1 mb       100338 ns       122070 ns         1024
find     tbb 24 1 mb        23272 ns        45776 ns         1024

scan avx     06 1 mb       688013 ns       686646 ns         1024
scan avx tbb 06 1 mb       140751 ns       167847 ns         1024
scan         06 1 mb      1722844 ns      1693726 ns         1024
scan     tbb 06 1 mb       136735 ns       137329 ns         1024
scan avx     12 1 mb        28274 ns        15259 ns         1024
scan avx tbb 12 1 mb        17221 ns        30518 ns         1024
scan         12 1 mb      1730173 ns      1754761 ns         1024
scan     tbb 12 1 mb       136396 ns       137329 ns         1024
scan avx     24 1 mb        27232 ns        30518 ns         1024
scan avx tbb 24 1 mb        17345 ns        0.000 ns         1024
scan         24 1 mb      1729381 ns      1724243 ns         1024
scan     tbb 24 1 mb       136217 ns       183105 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189612 ns       183105 ns          512
find avx tbb 06 4 mb       180270 ns       244141 ns          512
find         06 4 mb      1517854 ns      1525879 ns          512
find     tbb 06 4 mb       218565 ns       213623 ns          512
find avx     12 4 mb       189389 ns       183105 ns          512
find avx tbb 12 4 mb       174120 ns       213623 ns          512
find         12 4 mb       779383 ns       762939 ns          512
find     tbb 12 4 mb       195249 ns       152588 ns          512
find avx     24 4 mb       216745 ns       122070 ns          512
find avx tbb 24 4 mb       175918 ns       213623 ns          512
find         24 4 mb       416687 ns       457764 ns          512
find     tbb 24 4 mb       191195 ns       152588 ns          512

scan avx     06 4 mb      2720174 ns      2746582 ns          512
scan avx tbb 06 4 mb       567392 ns       488281 ns          512
scan         06 4 mb      6906908 ns      6927490 ns          512
scan     tbb 06 4 mb       556725 ns       640869 ns          512
scan avx     12 4 mb       195078 ns       213623 ns          512
scan avx tbb 12 4 mb       170309 ns       152588 ns          512
scan         12 4 mb      6889279 ns      7019043 ns          512
scan     tbb 12 4 mb       559082 ns       579834 ns          512
scan avx     24 4 mb       193009 ns       152588 ns          512
scan avx tbb 24 4 mb       177934 ns       122070 ns          512
scan         24 4 mb      6902852 ns      6958008 ns          512
scan     tbb 24 4 mb       559589 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      762386 ns       976562 ns           64
find avx tbb 06 16 mb      634367 ns       488281 ns           64
find         06 16 mb     6133781 ns      6103516 ns           64
find     tbb 06 16 mb      768841 ns       732422 ns           64
find avx     12 16 mb      774189 ns       488281 ns           64
find avx tbb 12 16 mb      627628 ns       732422 ns           64
find         12 16 mb     3146488 ns      3417969 ns           64
find     tbb 12 16 mb      693567 ns       488281 ns           64
find avx     24 16 mb      892036 ns       732422 ns           64
find avx tbb 24 16 mb      646366 ns       244141 ns           64
find         24 16 mb     1673863 ns      1708984 ns           64
find     tbb 24 16 mb      679630 ns       488281 ns           64

scan avx     06 16 mb    10871002 ns     11230469 ns           64
scan avx tbb 06 16 mb     2116850 ns      1708984 ns           64
scan         06 16 mb    27531230 ns     27832031 ns           64
scan     tbb 06 16 mb     2114594 ns      2197266 ns           64
scan avx     12 16 mb      793141 ns       488281 ns           64
scan avx tbb 12 16 mb      636756 ns       488281 ns           64
scan         12 16 mb    27637594 ns     27343750 ns           64
scan     tbb 12 16 mb     2102439 ns      2685547 ns           64
scan avx     24 16 mb      782827 ns       244141 ns           64
scan avx tbb 24 16 mb      633830 ns       244141 ns           64
scan         24 16 mb    27762650 ns     27832031 ns           64
scan     tbb 24 16 mb     2118480 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3023278 ns        0.000 ns           32
find avx tbb 06 64 mb     2369637 ns      2929688 ns           32
find         06 64 mb    24116184 ns     23925781 ns           32
find     tbb 06 64 mb     2665759 ns      1953125 ns           32
find avx     12 64 mb     3014469 ns        0.000 ns           32
find avx tbb 12 64 mb     2371941 ns      2441406 ns           32
find         12 64 mb    12564631 ns     13671875 ns           32
find     tbb 12 64 mb     2474591 ns      2441406 ns           32
find avx     24 64 mb     3501134 ns      2929688 ns           32
find avx tbb 24 64 mb     2379034 ns      3417969 ns           32
find         24 64 mb     6575922 ns      6835938 ns           32
find     tbb 24 64 mb     2439381 ns      1464844 ns           32

scan avx     06 64 mb    43146641 ns     41503906 ns           32
scan avx tbb 06 64 mb     8186791 ns      7812500 ns           32
scan         06 64 mb   110123922 ns    108886719 ns           32
scan     tbb 06 64 mb     8238666 ns      8789062 ns           32
scan avx     12 64 mb     3144134 ns      1953125 ns           32
scan avx tbb 12 64 mb     2367616 ns      2441406 ns           32
scan         12 64 mb   110010097 ns    110351562 ns           32
scan     tbb 12 64 mb     8169506 ns      8789062 ns           32
scan avx     24 64 mb     3109556 ns        0.000 ns           32
scan avx tbb 24 64 mb     2360581 ns      2441406 ns           32
scan         24 64 mb   110070963 ns    110839844 ns           32
scan     tbb 24 64 mb     8190944 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12520325 ns     15625000 ns           16
find avx tbb 06 256 mb    9261137 ns      9765625 ns           16
find         06 256 mb   96485269 ns     96679688 ns           16
find     tbb 06 256 mb   10190313 ns      8789062 ns           16
find avx     12 256 mb   12578850 ns     12695312 ns           16
find avx tbb 12 256 mb    9261894 ns      8789062 ns           16
find         12 256 mb   50726413 ns     49804688 ns           16
find     tbb 12 256 mb    9554587 ns      8789062 ns           16
find avx     24 256 mb   13638631 ns     13671875 ns           16
find avx tbb 24 256 mb    9304788 ns      9765625 ns           16
find         24 256 mb   27420413 ns     32226562 ns           16
find     tbb 24 256 mb    9446475 ns      9765625 ns           16

scan avx     06 256 mb  172789069 ns    171875000 ns           16
scan avx tbb 06 256 mb   32557519 ns     31250000 ns           16
scan         06 256 mb  440974731 ns    440429688 ns           16
scan     tbb 06 256 mb   32292644 ns     32226562 ns           16
scan avx     12 256 mb   12140394 ns     15625000 ns           16
scan avx tbb 12 256 mb    9279700 ns      7812500 ns           16
scan         12 256 mb  441310075 ns    441406250 ns           16
scan     tbb 12 256 mb   32293119 ns     30273438 ns           16
scan avx     24 256 mb   12229869 ns     12695312 ns           16
scan avx tbb 24 256 mb    9288644 ns      9765625 ns           16
scan         24 256 mb  440408450 ns    439453125 ns           16
scan     tbb 24 256 mb   32362288 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24319612 ns     23437500 ns            8
find avx tbb 06 512 mb   18396363 ns     17578125 ns            8
find         06 512 mb  194021100 ns    197265625 ns            8
find     tbb 06 512 mb   20312250 ns     23437500 ns            8
find avx     12 512 mb   24258238 ns     23437500 ns            8
find avx tbb 12 512 mb   18463450 ns     17578125 ns            8
find         12 512 mb  100137150 ns     99609375 ns            8
find     tbb 12 512 mb   18909000 ns     19531250 ns            8
find avx     24 512 mb   27638625 ns     27343750 ns            8
find avx tbb 24 512 mb   18467687 ns     19531250 ns            8
find         24 512 mb   52248837 ns     54687500 ns            8
find     tbb 24 512 mb   18809413 ns     17578125 ns            8

scan avx     06 512 mb  348249187 ns    345703125 ns            8
scan avx tbb 06 512 mb   64903400 ns     60546875 ns            8
scan         06 512 mb  887263225 ns    892578125 ns            8
scan     tbb 06 512 mb   65234862 ns     58593750 ns            8
scan avx     12 512 mb   26746600 ns     29296875 ns            8
scan avx tbb 12 512 mb   18489925 ns     19531250 ns            8
scan         12 512 mb  880868225 ns    878906250 ns            8
scan     tbb 12 512 mb   64507475 ns     60546875 ns            8
scan avx     24 512 mb   24544713 ns     23437500 ns            8
scan avx tbb 24 512 mb   18511350 ns     19531250 ns            8
scan         24 512 mb  882981638 ns    888671875 ns            8
scan     tbb 24 512 mb   65223462 ns     58593750 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48890825 ns     48828125 ns            8
find avx tbb 06 1 gb     37077650 ns     39062500 ns            8
find         06 1 gb    385996700 ns    378906250 ns            8
find     tbb 06 1 gb     39945675 ns     37109375 ns            8
find avx     12 1 gb     48560300 ns     48828125 ns            8
find avx tbb 12 1 gb     36802338 ns     39062500 ns            8
find         12 1 gb    200127187 ns    203125000 ns            8
find     tbb 12 1 gb     37784737 ns     35156250 ns            8
find avx     24 1 gb     54752612 ns     54687500 ns            8
find avx tbb 24 1 gb     36855475 ns     35156250 ns            8
find         24 1 gb    104926950 ns    105468750 ns            8
find     tbb 24 1 gb     37735225 ns     37109375 ns            8

scan avx     06 1 gb    692472450 ns    695312500 ns            8
scan avx tbb 06 1 gb    129170862 ns    121093750 ns            8
scan         06 1 gb   1763148050 ns   1763671875 ns            8
scan     tbb 06 1 gb    129720513 ns    117187500 ns            8
scan avx     12 1 gb     49388413 ns     48828125 ns            8
scan avx tbb 12 1 gb     37037213 ns     35156250 ns            8
scan         12 1 gb   1761447300 ns   1761718750 ns            8
scan     tbb 12 1 gb    128957488 ns    121093750 ns            8
scan avx     24 1 gb     48969812 ns     46875000 ns            8
scan avx tbb 24 1 gb     36865450 ns     37109375 ns            8
scan         24 1 gb   1761933075 ns   1763671875 ns            8
scan     tbb 24 1 gb    129787363 ns    121093750 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97417213 ns     97656250 ns            8
find avx tbb 06 2 gb     73430325 ns     68359375 ns            8
find         06 2 gb    772665675 ns    773437500 ns            8
find     tbb 06 2 gb     81283812 ns     74218750 ns            8
find avx     12 2 gb     97565912 ns     97656250 ns            8
find avx tbb 12 2 gb     73507938 ns     70312500 ns            8
find         12 2 gb    396227050 ns    394531250 ns            8
find     tbb 12 2 gb     75348350 ns     76171875 ns            8
find avx     24 2 gb    110110537 ns    109375000 ns            8
find avx tbb 24 2 gb     73706575 ns     78125000 ns            8
find         24 2 gb    215013175 ns    216796875 ns            8
find     tbb 24 2 gb     76000400 ns     72265625 ns            8

scan avx     06 2 gb   1383771188 ns   1384765625 ns            8
scan avx tbb 06 2 gb    258555350 ns    236328125 ns            8
scan         06 2 gb   3524707575 ns   3519531250 ns            8
scan     tbb 06 2 gb    260446525 ns    244140625 ns            8
scan avx     12 2 gb     98944575 ns     99609375 ns            8
scan avx tbb 12 2 gb     73553225 ns     74218750 ns            8
scan         12 2 gb   3525130775 ns   3525390625 ns            8
scan     tbb 12 2 gb    258989287 ns    234375000 ns            8
scan avx     24 2 gb     98748537 ns     99609375 ns            8
scan avx tbb 24 2 gb     73778600 ns     72265625 ns            8
scan         24 2 gb   3523303025 ns   3525390625 ns            8
scan     tbb 24 2 gb    259571725 ns    242187500 ns            8
```

</details>

