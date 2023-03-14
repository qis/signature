# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1407 ns         3815 ns         4096
find avx     noe 06 16 kb         872 ns        0.000 ns         4096
find avx tbb     06 16 kb         867 ns        0.000 ns         4096
find avx tbb noe 06 16 kb         862 ns        0.000 ns         4096
find             06 16 kb        7321 ns         7629 ns         4096
find         noe 06 16 kb        7122 ns         3815 ns         4096
find     tbb     06 16 kb        7384 ns         7629 ns         4096
find     tbb noe 06 16 kb        7212 ns         3815 ns         4096
find avx         12 16 kb        1029 ns        0.000 ns         4096
find avx     noe 12 16 kb         881 ns         3815 ns         4096
find avx tbb     12 16 kb         938 ns        0.000 ns         4096
find avx tbb noe 12 16 kb         889 ns        0.000 ns         4096
find             12 16 kb        4188 ns         3815 ns         4096
find         noe 12 16 kb        3911 ns         3815 ns         4096
find     tbb     12 16 kb        6822 ns         3815 ns         4096
find     tbb noe 12 16 kb        6785 ns        11444 ns         4096
find avx         24 16 kb         981 ns        0.000 ns         4096
find avx     noe 24 16 kb        1047 ns        0.000 ns         4096
find avx tbb     24 16 kb         976 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1010 ns        0.000 ns         4096
find             24 16 kb        2584 ns         3815 ns         4096
find         noe 24 16 kb        2517 ns         3815 ns         4096
find     tbb     24 16 kb        6676 ns         3815 ns         4096
find     tbb noe 24 16 kb        6634 ns         7629 ns         4096

scan avx         06 16 kb       11909 ns        11444 ns         4096
scan avx     noe 06 16 kb       10172 ns        11444 ns         4096
scan avx tbb     06 16 kb       13439 ns        15259 ns         4096
scan avx tbb noe 06 16 kb       13253 ns        11444 ns         4096
scan             06 16 kb       11031 ns         7629 ns         4096
scan         noe 06 16 kb       12614 ns        15259 ns         4096
scan     tbb     06 16 kb        7547 ns         7629 ns         4096
scan     tbb noe 06 16 kb        7555 ns         7629 ns         4096
scan avx         12 16 kb       12007 ns        11444 ns         4096
scan avx     noe 12 16 kb       10855 ns        11444 ns         4096
scan avx tbb     12 16 kb       12450 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11151 ns        15259 ns         4096
scan             12 16 kb       11065 ns        11444 ns         4096
scan         noe 12 16 kb       13372 ns        11444 ns         4096
scan     tbb     12 16 kb        7541 ns        11444 ns         4096
scan     tbb noe 12 16 kb        7583 ns         3815 ns         4096
scan avx         24 16 kb       11644 ns        11444 ns         4096
scan avx     noe 24 16 kb       10813 ns         7629 ns         4096
scan avx tbb     24 16 kb       12799 ns        15259 ns         4096
scan avx tbb noe 24 16 kb       11724 ns        11444 ns         4096
scan             24 16 kb       11074 ns        11444 ns         4096
scan         noe 24 16 kb       13364 ns        15259 ns         4096
scan     tbb     24 16 kb        7742 ns         7629 ns         4096
scan     tbb noe 24 16 kb        7591 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2084 ns         3815 ns         4096
find avx     noe 06 64 kb        2073 ns        0.000 ns         4096
find avx tbb     06 64 kb        2062 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2013 ns        0.000 ns         4096
find             06 64 kb       28494 ns        30518 ns         4096
find         noe 06 64 kb       26532 ns        22888 ns         4096
find     tbb     06 64 kb        9977 ns        11444 ns         4096
find     tbb noe 06 64 kb        9893 ns        11444 ns         4096
find avx         12 64 kb        2192 ns         3815 ns         4096
find avx     noe 12 64 kb        2188 ns        0.000 ns         4096
find avx tbb     12 64 kb        2229 ns        0.000 ns         4096
find avx tbb noe 12 64 kb        2083 ns         3815 ns         4096
find             12 64 kb       14842 ns        11444 ns         4096
find         noe 12 64 kb       14012 ns        15259 ns         4096
find     tbb     12 64 kb        8332 ns        11444 ns         4096
find     tbb noe 12 64 kb        8287 ns         7629 ns         4096
find avx         24 64 kb        2197 ns        0.000 ns         4096
find avx     noe 24 64 kb        2383 ns         3815 ns         4096
find avx tbb     24 64 kb        2218 ns        0.000 ns         4096
find avx tbb noe 24 64 kb        2171 ns         3815 ns         4096
find             24 64 kb        7864 ns         3815 ns         4096
find         noe 24 64 kb        7773 ns         7629 ns         4096
find     tbb     24 64 kb        7621 ns         7629 ns         4096
find     tbb noe 24 64 kb        7543 ns         3815 ns         4096

scan avx         06 64 kb       45900 ns        41962 ns         4096
scan avx     noe 06 64 kb       39664 ns        41962 ns         4096
scan avx tbb     06 64 kb       50049 ns        49591 ns         4096
scan avx tbb noe 06 64 kb       52169 ns        57220 ns         4096
scan             06 64 kb       42630 ns        38147 ns         4096
scan         noe 06 64 kb       50232 ns        45776 ns         4096
scan     tbb     06 64 kb       14419 ns         7629 ns         4096
scan     tbb noe 06 64 kb       14384 ns        15259 ns         4096
scan avx         12 64 kb       44644 ns        45776 ns         4096
scan avx     noe 12 64 kb       39201 ns        34332 ns         4096
scan avx tbb     12 64 kb       43061 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       43050 ns        30518 ns         4096
scan             12 64 kb       42591 ns        41962 ns         4096
scan         noe 12 64 kb       51013 ns        53406 ns         4096
scan     tbb     12 64 kb       14377 ns        15259 ns         4096
scan     tbb noe 12 64 kb       14536 ns        19073 ns         4096
scan avx         24 64 kb       43933 ns        45776 ns         4096
scan avx     noe 24 64 kb       39081 ns        38147 ns         4096
scan avx tbb     24 64 kb       47023 ns        45776 ns         4096
scan avx tbb noe 24 64 kb       44906 ns        49591 ns         4096
scan             24 64 kb       42549 ns        38147 ns         4096
scan         noe 24 64 kb       50860 ns        53406 ns         4096
scan     tbb     24 64 kb       14515 ns        15259 ns         4096
scan     tbb noe 24 64 kb       14359 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       7363 ns        15259 ns         2048
find avx     noe 06 256 kb       7427 ns         7629 ns         2048
find avx tbb     06 256 kb       7525 ns         7629 ns         2048
find avx tbb noe 06 256 kb       7464 ns        0.000 ns         2048
find             06 256 kb     107192 ns        99182 ns         2048
find         noe 06 256 kb     106782 ns       106812 ns         2048
find     tbb     06 256 kb      20731 ns        30518 ns         2048
find     tbb noe 06 256 kb      20703 ns        15259 ns         2048
find avx         12 256 kb       7531 ns        15259 ns         2048
find avx     noe 12 256 kb       7255 ns        0.000 ns         2048
find avx tbb     12 256 kb       6951 ns        0.000 ns         2048
find avx tbb noe 12 256 kb       6951 ns        15259 ns         2048
find             12 256 kb      54165 ns        45776 ns         2048
find         noe 12 256 kb      52841 ns        45776 ns         2048
find     tbb     12 256 kb      15342 ns        15259 ns         2048
find     tbb noe 12 256 kb      15315 ns         7629 ns         2048
find avx         24 256 kb       7821 ns         7629 ns         2048
find avx     noe 24 256 kb       7716 ns        15259 ns         2048
find avx tbb     24 256 kb       7104 ns        0.000 ns         2048
find avx tbb noe 24 256 kb       7414 ns         7629 ns         2048
find             24 256 kb      27602 ns        30518 ns         2048
find         noe 24 256 kb      27259 ns        30518 ns         2048
find     tbb     24 256 kb      12741 ns        15259 ns         2048
find     tbb noe 24 256 kb      12689 ns        15259 ns         2048

scan avx         06 256 kb     193548 ns       190735 ns         2048
scan avx     noe 06 256 kb     156197 ns       167847 ns         2048
scan avx tbb     06 256 kb     195497 ns       190735 ns         2048
scan avx tbb noe 06 256 kb     200574 ns       198364 ns         2048
scan             06 256 kb     169151 ns       167847 ns         2048
scan         noe 06 256 kb     203348 ns       183105 ns         2048
scan     tbb     06 256 kb      43143 ns        53406 ns         2048
scan     tbb noe 06 256 kb      42517 ns        38147 ns         2048
scan avx         12 256 kb     173903 ns       183105 ns         2048
scan avx     noe 12 256 kb     155667 ns       152588 ns         2048
scan avx tbb     12 256 kb     176662 ns       175476 ns         2048
scan avx tbb noe 12 256 kb     175434 ns       183105 ns         2048
scan             12 256 kb     169187 ns       175476 ns         2048
scan         noe 12 256 kb     206327 ns       213623 ns         2048
scan     tbb     12 256 kb      42359 ns        30518 ns         2048
scan     tbb noe 12 256 kb      42800 ns        45776 ns         2048
scan avx         24 256 kb     175332 ns       175476 ns         2048
scan avx     noe 24 256 kb     156220 ns       160217 ns         2048
scan avx tbb     24 256 kb     187299 ns       190735 ns         2048
scan avx tbb noe 24 256 kb     177174 ns       183105 ns         2048
scan             24 256 kb     168918 ns       144958 ns         2048
scan         noe 24 256 kb     209533 ns       205994 ns         2048
scan     tbb     24 256 kb      42435 ns        38147 ns         2048
scan     tbb noe 24 256 kb      42208 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        27996 ns        15259 ns         1024
find avx     noe 06 1 mb        26694 ns        61035 ns         1024
find avx tbb     06 1 mb        18019 ns        15259 ns         1024
find avx tbb noe 06 1 mb        16755 ns        0.000 ns         1024
find             06 1 mb       427572 ns       457764 ns         1024
find         noe 06 1 mb       421005 ns       411987 ns         1024
find     tbb     06 1 mb        52902 ns        61035 ns         1024
find     tbb noe 06 1 mb        52839 ns        61035 ns         1024
find avx         12 1 mb        27564 ns        30518 ns         1024
find avx     noe 12 1 mb        25614 ns        30518 ns         1024
find avx tbb     12 1 mb        18557 ns        15259 ns         1024
find avx tbb noe 12 1 mb        17619 ns        15259 ns         1024
find             12 1 mb       217317 ns       244141 ns         1024
find         noe 12 1 mb       208677 ns       228882 ns         1024
find     tbb     12 1 mb        34326 ns        61035 ns         1024
find     tbb noe 12 1 mb        32433 ns        30518 ns         1024
find avx         24 1 mb        27794 ns        30518 ns         1024
find avx     noe 24 1 mb        27026 ns        30518 ns         1024
find avx tbb     24 1 mb        18634 ns        15259 ns         1024
find avx tbb noe 24 1 mb        17590 ns        0.000 ns         1024
find             24 1 mb       111468 ns       122070 ns         1024
find         noe 24 1 mb       105690 ns       122070 ns         1024
find     tbb     24 1 mb        22420 ns        15259 ns         1024
find     tbb noe 24 1 mb        21944 ns        30518 ns         1024

scan avx         06 1 mb       782952 ns       793457 ns         1024
scan avx     noe 06 1 mb       618962 ns       640869 ns         1024
scan avx tbb     06 1 mb       149675 ns       167847 ns         1024
scan avx tbb noe 06 1 mb       146930 ns       137329 ns         1024
scan             06 1 mb       679111 ns       671387 ns         1024
scan         noe 06 1 mb       819336 ns       823975 ns         1024
scan     tbb     06 1 mb       146804 ns       137329 ns         1024
scan     tbb noe 06 1 mb       146412 ns       122070 ns         1024
scan avx         12 1 mb       776158 ns       778198 ns         1024
scan avx     noe 12 1 mb       625973 ns       640869 ns         1024
scan avx tbb     12 1 mb       146501 ns        76294 ns         1024
scan avx tbb noe 12 1 mb       146425 ns       106812 ns         1024
scan             12 1 mb       678960 ns       686646 ns         1024
scan         noe 12 1 mb       811733 ns       793457 ns         1024
scan     tbb     12 1 mb       147327 ns       137329 ns         1024
scan     tbb noe 12 1 mb       145620 ns       167847 ns         1024
scan avx         24 1 mb       767957 ns       762939 ns         1024
scan avx     noe 24 1 mb       639424 ns       640869 ns         1024
scan avx tbb     24 1 mb       147222 ns       122070 ns         1024
scan avx tbb noe 24 1 mb       146118 ns       122070 ns         1024
scan             24 1 mb       679990 ns       686646 ns         1024
scan         noe 24 1 mb       814727 ns       823975 ns         1024
scan     tbb     24 1 mb       146266 ns       152588 ns         1024
scan     tbb noe 24 1 mb       146170 ns       152588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       188569 ns       213623 ns          512
find avx     noe 06 4 mb       186612 ns       152588 ns          512
find avx tbb     06 4 mb       175821 ns       183105 ns          512
find avx tbb noe 06 4 mb       158187 ns       122070 ns          512
find             06 4 mb      1708427 ns      1770020 ns          512
find         noe 06 4 mb      1666793 ns      1739502 ns          512
find     tbb     06 4 mb       241679 ns       244141 ns          512
find     tbb noe 06 4 mb       212437 ns       213623 ns          512
find avx         12 4 mb       189568 ns       213623 ns          512
find avx     noe 12 4 mb       186323 ns       213623 ns          512
find avx tbb     12 4 mb       177040 ns       122070 ns          512
find avx tbb noe 12 4 mb       158796 ns        61035 ns          512
find             12 4 mb       878226 ns       915527 ns          512
find         noe 12 4 mb       853854 ns       793457 ns          512
find     tbb     12 4 mb       202919 ns       244141 ns          512
find     tbb noe 12 4 mb       175742 ns       122070 ns          512
find avx         24 4 mb       195858 ns       213623 ns          512
find avx     noe 24 4 mb       193458 ns       213623 ns          512
find avx tbb     24 4 mb       175806 ns       122070 ns          512
find avx tbb noe 24 4 mb       159535 ns       122070 ns          512
find             24 4 mb       454386 ns       488281 ns          512
find         noe 24 4 mb       445218 ns       366211 ns          512
find     tbb     24 4 mb       196616 ns       213623 ns          512
find     tbb noe 24 4 mb       168314 ns       122070 ns          512

scan avx         06 4 mb      3159901 ns      3204346 ns          512
scan avx     noe 06 4 mb      2478914 ns      2471924 ns          512
scan avx tbb     06 4 mb       604240 ns       610352 ns          512
scan avx tbb noe 06 4 mb       588268 ns       488281 ns          512
scan             06 4 mb      2716502 ns      2716064 ns          512
scan         noe 06 4 mb      3255760 ns      3295898 ns          512
scan     tbb     06 4 mb       606819 ns       640869 ns          512
scan     tbb noe 06 4 mb       587411 ns       671387 ns          512
scan avx         12 4 mb      3097589 ns      3204346 ns          512
scan avx     noe 12 4 mb      2483177 ns      2532959 ns          512
scan avx tbb     12 4 mb       604794 ns       579834 ns          512
scan avx tbb noe 12 4 mb       586823 ns       640869 ns          512
scan             12 4 mb      2711997 ns      2777100 ns          512
scan         noe 12 4 mb      3241994 ns      3326416 ns          512
scan     tbb     12 4 mb       604567 ns       732422 ns          512
scan     tbb noe 12 4 mb       587053 ns       457764 ns          512
scan avx         24 4 mb      3223067 ns      3204346 ns          512
scan avx     noe 24 4 mb      2486282 ns      2502441 ns          512
scan avx tbb     24 4 mb       604123 ns       671387 ns          512
scan avx tbb noe 24 4 mb       586402 ns       549316 ns          512
scan             24 4 mb      2707600 ns      2716064 ns          512
scan         noe 24 4 mb      3272196 ns      3356934 ns          512
scan     tbb     24 4 mb       603639 ns       579834 ns          512
scan     tbb noe 24 4 mb       587288 ns       488281 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      766503 ns       732422 ns           64
find avx     noe 06 16 mb      756194 ns      1220703 ns           64
find avx tbb     06 16 mb      642595 ns       732422 ns           64
find avx tbb noe 06 16 mb      628003 ns       732422 ns           64
find             06 16 mb     6918427 ns      7324219 ns           64
find         noe 06 16 mb     6653997 ns      6835938 ns           64
find     tbb     06 16 mb      845919 ns       976562 ns           64
find     tbb noe 06 16 mb      854337 ns       976562 ns           64
find avx         12 16 mb      763444 ns       732422 ns           64
find avx     noe 12 16 mb      759137 ns       488281 ns           64
find avx tbb     12 16 mb      633941 ns       488281 ns           64
find avx tbb noe 12 16 mb      627311 ns       732422 ns           64
find             12 16 mb     3533827 ns      2685547 ns           64
find         noe 12 16 mb     3395853 ns      3417969 ns           64
find     tbb     12 16 mb      723895 ns       732422 ns           64
find     tbb noe 12 16 mb      714395 ns       976562 ns           64
find avx         24 16 mb      806966 ns       488281 ns           64
find avx     noe 24 16 mb      778634 ns       732422 ns           64
find avx tbb     24 16 mb      636605 ns       488281 ns           64
find avx tbb noe 24 16 mb      633811 ns       732422 ns           64
find             24 16 mb     1854280 ns      2441406 ns           64
find         noe 24 16 mb     1771711 ns      1220703 ns           64
find     tbb     24 16 mb      686361 ns       732422 ns           64
find     tbb noe 24 16 mb      676837 ns       732422 ns           64

scan avx         06 16 mb    12630645 ns     12207031 ns           64
scan avx     noe 06 16 mb     9927512 ns     10009766 ns           64
scan avx tbb     06 16 mb     2246802 ns      1953125 ns           64
scan avx tbb noe 06 16 mb     2210070 ns      2441406 ns           64
scan             06 16 mb    10836186 ns     10742188 ns           64
scan         noe 06 16 mb    12942384 ns     13183594 ns           64
scan     tbb     06 16 mb     2229056 ns      1953125 ns           64
scan     tbb noe 06 16 mb     2193645 ns      1953125 ns           64
scan avx         12 16 mb    12729616 ns     12451172 ns           64
scan avx     noe 12 16 mb     9906572 ns     10253906 ns           64
scan avx tbb     12 16 mb     2257031 ns      2441406 ns           64
scan avx tbb noe 12 16 mb     2185697 ns      1708984 ns           64
scan             12 16 mb    10978411 ns     10986328 ns           64
scan         noe 12 16 mb    12749784 ns     12939453 ns           64
scan     tbb     12 16 mb     2236331 ns      2441406 ns           64
scan     tbb noe 12 16 mb     2175559 ns      1953125 ns           64
scan avx         24 16 mb    12924961 ns     13427734 ns           64
scan avx     noe 24 16 mb     9904820 ns      9765625 ns           64
scan avx tbb     24 16 mb     2272217 ns      2197266 ns           64
scan avx tbb noe 24 16 mb     2218950 ns      1953125 ns           64
scan             24 16 mb    11012594 ns     11230469 ns           64
scan         noe 24 16 mb    12642039 ns     12207031 ns           64
scan     tbb     24 16 mb     2250138 ns      1953125 ns           64
scan     tbb noe 24 16 mb     2189880 ns      1953125 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3045838 ns        0.000 ns           32
find avx     noe 06 64 mb     3028947 ns        0.000 ns           32
find avx tbb     06 64 mb     2386141 ns      2441406 ns           32
find avx tbb noe 06 64 mb     2371163 ns      2929688 ns           32
find             06 64 mb    27096291 ns     26855469 ns           32
find         noe 06 64 mb    26610437 ns     30273438 ns           32
find     tbb     06 64 mb     2999303 ns        0.000 ns           32
find     tbb noe 06 64 mb     2988750 ns      6835938 ns           32
find avx         12 64 mb     3017431 ns      7812500 ns           32
find avx     noe 12 64 mb     3007581 ns        0.000 ns           32
find avx tbb     12 64 mb     2377925 ns      1953125 ns           32
find avx tbb noe 12 64 mb     2382213 ns      2441406 ns           32
find             12 64 mb    13863322 ns     14160156 ns           32
find         noe 12 64 mb    13584272 ns     14160156 ns           32
find     tbb     12 64 mb     2549450 ns      2929688 ns           32
find     tbb noe 12 64 mb     2555269 ns      1953125 ns           32
find avx         24 64 mb     3073347 ns      5859375 ns           32
find avx     noe 24 64 mb     3074266 ns      7324219 ns           32
find avx tbb     24 64 mb     2389700 ns      1464844 ns           32
find avx tbb noe 24 64 mb     2397084 ns      2929688 ns           32
find             24 64 mb     7230875 ns      7324219 ns           32
find         noe 24 64 mb     7065847 ns      7324219 ns           32
find     tbb     24 64 mb     2467569 ns      1953125 ns           32
find     tbb noe 24 64 mb     2454062 ns      3417969 ns           32

scan avx         06 64 mb    50356959 ns     50292969 ns           32
scan avx     noe 06 64 mb    39683266 ns     40527344 ns           32
scan avx tbb     06 64 mb     8614853 ns      7812500 ns           32
scan avx tbb noe 06 64 mb     8652819 ns      8789062 ns           32
scan             06 64 mb    43270722 ns     44433594 ns           32
scan         noe 06 64 mb    51482994 ns     51757812 ns           32
scan     tbb     06 64 mb     8742844 ns      8300781 ns           32
scan     tbb noe 06 64 mb     8630675 ns      9277344 ns           32
scan avx         12 64 mb    50868569 ns     51269531 ns           32
scan avx     noe 12 64 mb    39685306 ns     40527344 ns           32
scan avx tbb     12 64 mb     8670525 ns      8300781 ns           32
scan avx tbb noe 12 64 mb     8721741 ns      9277344 ns           32
scan             12 64 mb    43299528 ns     44921875 ns           32
scan         noe 12 64 mb    47463828 ns     47851562 ns           32
scan     tbb     12 64 mb     8733894 ns      8789062 ns           32
scan     tbb noe 12 64 mb     8675806 ns      9277344 ns           32
scan avx         24 64 mb    51088900 ns     50781250 ns           32
scan avx     noe 24 64 mb    39625509 ns     39550781 ns           32
scan avx tbb     24 64 mb     8662794 ns      9277344 ns           32
scan avx tbb noe 24 64 mb     8734472 ns      8789062 ns           32
scan             24 64 mb    43332944 ns     42480469 ns           32
scan         noe 24 64 mb    51168441 ns     51269531 ns           32
scan     tbb     24 64 mb     8716250 ns      9277344 ns           32
scan     tbb noe 24 64 mb     8685478 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   12873931 ns     12695312 ns           16
find avx     noe 06 256 mb   12808713 ns     14648438 ns           16
find avx tbb     06 256 mb    9294494 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9282100 ns      9765625 ns           16
find             06 256 mb  108380588 ns    108398438 ns           16
find         noe 06 256 mb  106419994 ns    107421875 ns           16
find     tbb     06 256 mb   11477044 ns     12695312 ns           16
find     tbb noe 06 256 mb   11578069 ns      8789062 ns           16
find avx         12 256 mb   12831581 ns     13671875 ns           16
find avx     noe 12 256 mb   12841225 ns     12695312 ns           16
find avx tbb     12 256 mb    9327187 ns      8789062 ns           16
find avx tbb noe 12 256 mb    9303212 ns     10742188 ns           16
find             12 256 mb   55372012 ns     56640625 ns           16
find         noe 12 256 mb   54112394 ns     53710938 ns           16
find     tbb     12 256 mb    9766619 ns      9765625 ns           16
find     tbb noe 12 256 mb    9764488 ns     10742188 ns           16
find avx         24 256 mb   13107100 ns     13671875 ns           16
find avx     noe 24 256 mb   13099638 ns     14648438 ns           16
find avx tbb     24 256 mb    9296875 ns      7812500 ns           16
find avx tbb noe 24 256 mb    9309525 ns      8789062 ns           16
find             24 256 mb   28567962 ns     29296875 ns           16
find         noe 24 256 mb   28183512 ns     28320312 ns           16
find     tbb     24 256 mb    9492975 ns     10742188 ns           16
find     tbb noe 24 256 mb    9494437 ns      9765625 ns           16

scan avx         06 256 mb  201891100 ns    198242188 ns           16
scan avx     noe 06 256 mb  158594256 ns    158203125 ns           16
scan avx tbb     06 256 mb   33558681 ns     28320312 ns           16
scan avx tbb noe 06 256 mb   33717881 ns     32226562 ns           16
scan             06 256 mb  172788238 ns    174804688 ns           16
scan         noe 06 256 mb  205731081 ns    206054688 ns           16
scan     tbb     06 256 mb   33657425 ns     32226562 ns           16
scan     tbb noe 06 256 mb   33775275 ns     33203125 ns           16
scan avx         12 256 mb  201218206 ns    201171875 ns           16
scan avx     noe 12 256 mb  161548181 ns    161132812 ns           16
scan avx tbb     12 256 mb   33892212 ns     30273438 ns           16
scan avx tbb noe 12 256 mb   33743569 ns     32226562 ns           16
scan             12 256 mb  172417719 ns    171875000 ns           16
scan         noe 12 256 mb  208042956 ns    207031250 ns           16
scan     tbb     12 256 mb   34099412 ns     33203125 ns           16
scan     tbb noe 12 256 mb   33855144 ns     31250000 ns           16
scan avx         24 256 mb  200968375 ns    202148438 ns           16
scan avx     noe 24 256 mb  159021900 ns    158203125 ns           16
scan avx tbb     24 256 mb   33886881 ns     33203125 ns           16
scan avx tbb noe 24 256 mb   33556531 ns     29296875 ns           16
scan             24 256 mb  172773494 ns    171875000 ns           16
scan         noe 24 256 mb  196646363 ns    197265625 ns           16
scan     tbb     24 256 mb   33640506 ns     31250000 ns           16
scan     tbb noe 24 256 mb   33663856 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26412800 ns     27343750 ns            8
find avx     noe 06 512 mb   26387650 ns     25390625 ns            8
find avx tbb     06 512 mb   18495137 ns     19531250 ns            8
find avx tbb noe 06 512 mb   18500212 ns     17578125 ns            8
find             06 512 mb  216724488 ns    216796875 ns            8
find         noe 06 512 mb  212512025 ns    210937500 ns            8
find     tbb     06 512 mb   22721662 ns     15625000 ns            8
find     tbb noe 06 512 mb   22593950 ns     29296875 ns            8
find avx         12 512 mb   26462000 ns     25390625 ns            8
find avx     noe 12 512 mb   26394300 ns     27343750 ns            8
find avx tbb     12 512 mb   18486313 ns     17578125 ns            8
find avx tbb noe 12 512 mb   18521488 ns     15625000 ns            8
find             12 512 mb  110571125 ns    109375000 ns            8
find         noe 12 512 mb  108408637 ns    109375000 ns            8
find     tbb     12 512 mb   19797775 ns     17578125 ns            8
find     tbb noe 12 512 mb   19405250 ns     17578125 ns            8
find avx         24 512 mb   27024687 ns     27343750 ns            8
find avx     noe 24 512 mb   27334275 ns     25390625 ns            8
find avx tbb     24 512 mb   18525137 ns     17578125 ns            8
find avx tbb noe 24 512 mb   18526888 ns     17578125 ns            8
find             24 512 mb   57065087 ns     54687500 ns            8
find         noe 24 512 mb   56508500 ns     54687500 ns            8
find     tbb     24 512 mb   18860737 ns     15625000 ns            8
find     tbb noe 24 512 mb   18937562 ns     21484375 ns            8

scan avx         06 512 mb  398033175 ns    402343750 ns            8
scan avx     noe 06 512 mb  317002200 ns    318359375 ns            8
scan avx tbb     06 512 mb   68250787 ns     62500000 ns            8
scan avx tbb noe 06 512 mb   67319412 ns     58593750 ns            8
scan             06 512 mb  346920175 ns    345703125 ns            8
scan         noe 06 512 mb  411980337 ns    416015625 ns            8
scan     tbb     06 512 mb   67382925 ns     58593750 ns            8
scan     tbb noe 06 512 mb   67691850 ns     62500000 ns            8
scan avx         12 512 mb  395785150 ns    394531250 ns            8
scan avx     noe 12 512 mb  318167800 ns    318359375 ns            8
scan avx tbb     12 512 mb   67945650 ns     58593750 ns            8
scan avx tbb noe 12 512 mb   67433800 ns     62500000 ns            8
scan             12 512 mb  345074250 ns    343750000 ns            8
scan         noe 12 512 mb  414591312 ns    414062500 ns            8
scan     tbb     12 512 mb   68074700 ns     62500000 ns            8
scan     tbb noe 12 512 mb   67334950 ns     54687500 ns            8
scan avx         24 512 mb  402125487 ns    398437500 ns            8
scan avx     noe 24 512 mb  317811237 ns    316406250 ns            8
scan avx tbb     24 512 mb   67578275 ns     60546875 ns            8
scan avx tbb noe 24 512 mb   67154100 ns     60546875 ns            8
scan             24 512 mb  344877563 ns    345703125 ns            8
scan         noe 24 512 mb  418708300 ns    417968750 ns            8
scan     tbb     24 512 mb   67494650 ns     60546875 ns            8
scan     tbb noe 24 512 mb   67616100 ns     66406250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     53530100 ns     54687500 ns            8
find avx     noe 06 1 gb     53837700 ns     54687500 ns            8
find avx tbb     06 1 gb     36890262 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36839950 ns     31250000 ns            8
find             06 1 gb    433687663 ns    433593750 ns            8
find         noe 06 1 gb    425237175 ns    425781250 ns            8
find     tbb     06 1 gb     45202863 ns     44921875 ns            8
find     tbb noe 06 1 gb     45288625 ns     46875000 ns            8
find avx         12 1 gb     53678088 ns     52734375 ns            8
find avx     noe 12 1 gb     53537962 ns     52734375 ns            8
find avx tbb     12 1 gb     36917025 ns     37109375 ns            8
find avx tbb noe 12 1 gb     36896388 ns     35156250 ns            8
find             12 1 gb    220514525 ns    220703125 ns            8
find         noe 12 1 gb    216272662 ns    218750000 ns            8
find     tbb     12 1 gb     38497075 ns     39062500 ns            8
find     tbb noe 12 1 gb     38528975 ns     39062500 ns            8
find avx         24 1 gb     54867888 ns     54687500 ns            8
find avx     noe 24 1 gb     54753525 ns     56640625 ns            8
find avx tbb     24 1 gb     36985938 ns     39062500 ns            8
find avx tbb noe 24 1 gb     37210887 ns     41015625 ns            8
find             24 1 gb    114960175 ns    117187500 ns            8
find         noe 24 1 gb    112481225 ns    111328125 ns            8
find     tbb     24 1 gb     37606550 ns     39062500 ns            8
find     tbb noe 24 1 gb     37754238 ns     31250000 ns            8

scan avx         06 1 gb    807937150 ns    806640625 ns            8
scan avx     noe 06 1 gb    634444638 ns    632812500 ns            8
scan avx tbb     06 1 gb    133122550 ns    119140625 ns            8
scan avx tbb noe 06 1 gb    134194387 ns    119140625 ns            8
scan             06 1 gb    689917125 ns    689453125 ns            8
scan         noe 06 1 gb    837152425 ns    837890625 ns            8
scan     tbb     06 1 gb    135244050 ns    121093750 ns            8
scan     tbb noe 06 1 gb    133688662 ns    119140625 ns            8
scan avx         12 1 gb    815638325 ns    814453125 ns            8
scan avx     noe 12 1 gb    635461712 ns    636718750 ns            8
scan avx tbb     12 1 gb    135009062 ns    125000000 ns            8
scan avx tbb noe 12 1 gb    136470350 ns    117187500 ns            8
scan             12 1 gb    689834200 ns    689453125 ns            8
scan         noe 12 1 gb    823472625 ns    822265625 ns            8
scan     tbb     12 1 gb    134966288 ns    117187500 ns            8
scan     tbb noe 12 1 gb    134950537 ns    119140625 ns            8
scan avx         24 1 gb    806596013 ns    808593750 ns            8
scan avx     noe 24 1 gb    634641288 ns    634765625 ns            8
scan avx tbb     24 1 gb    135934350 ns    117187500 ns            8
scan avx tbb noe 24 1 gb    135233662 ns    125000000 ns            8
scan             24 1 gb    691567562 ns    691406250 ns            8
scan         noe 24 1 gb    835348925 ns    835937500 ns            8
scan     tbb     24 1 gb    134841450 ns    121093750 ns            8
scan     tbb noe 24 1 gb    134618225 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    107914437 ns    107421875 ns            8
find avx     noe 06 2 gb    108051788 ns    107421875 ns            8
find avx tbb     06 2 gb     73695763 ns     70312500 ns            8
find avx tbb noe 06 2 gb     73760950 ns     74218750 ns            8
find             06 2 gb    867116650 ns    867187500 ns            8
find         noe 06 2 gb    851322637 ns    851562500 ns            8
find     tbb     06 2 gb     90310212 ns     78125000 ns            8
find     tbb noe 06 2 gb     90502987 ns     80078125 ns            8
find avx         12 2 gb    108228812 ns    107421875 ns            8
find avx     noe 12 2 gb    107970963 ns    107421875 ns            8
find avx tbb     12 2 gb     73743300 ns     72265625 ns            8
find avx tbb noe 12 2 gb     73856325 ns     68359375 ns            8
find             12 2 gb    440834200 ns    441406250 ns            8
find         noe 12 2 gb    433304587 ns    431640625 ns            8
find     tbb     12 2 gb     77023513 ns     72265625 ns            8
find     tbb noe 12 2 gb     76997975 ns     74218750 ns            8
find avx         24 2 gb    110673125 ns    111328125 ns            8
find avx     noe 24 2 gb    110240163 ns    109375000 ns            8
find avx tbb     24 2 gb     73972675 ns     68359375 ns            8
find avx tbb noe 24 2 gb     74026737 ns     76171875 ns            8
find             24 2 gb    227860500 ns    226562500 ns            8
find         noe 24 2 gb    224879475 ns    228515625 ns            8
find     tbb     24 2 gb     75135313 ns     74218750 ns            8
find     tbb noe 24 2 gb     75171638 ns     72265625 ns            8

scan avx         06 2 gb   1662800200 ns   1662109375 ns            8
scan avx     noe 06 2 gb   1270775975 ns   1271484375 ns            8
scan avx tbb     06 2 gb    270725487 ns    238281250 ns            8
scan avx tbb noe 06 2 gb    269031212 ns    240234375 ns            8
scan             06 2 gb   1381466762 ns   1380859375 ns            8
scan         noe 06 2 gb   1682373387 ns   1681640625 ns            8
scan     tbb     06 2 gb    269385400 ns    238281250 ns            8
scan     tbb noe 06 2 gb    266099200 ns    238281250 ns            8
scan avx         12 2 gb   1630483237 ns   1632812500 ns            8
scan avx     noe 12 2 gb   1268325025 ns   1269531250 ns            8
scan avx tbb     12 2 gb    267243000 ns    240234375 ns            8
scan avx tbb noe 12 2 gb    268154513 ns    244140625 ns            8
scan             12 2 gb   1382256750 ns   1384765625 ns            8
scan         noe 12 2 gb   1662538662 ns   1660156250 ns            8
scan     tbb     12 2 gb    269692125 ns    240234375 ns            8
scan     tbb noe 12 2 gb    270310012 ns    251953125 ns            8
scan avx         24 2 gb   1613045325 ns   1615234375 ns            8
scan avx     noe 24 2 gb   1267999337 ns   1269531250 ns            8
scan avx tbb     24 2 gb    274198713 ns    248046875 ns            8
scan avx tbb noe 24 2 gb    270533538 ns    236328125 ns            8
scan             24 2 gb   1381636950 ns   1380859375 ns            8
scan         noe 24 2 gb   1597887087 ns   1599609375 ns            8
scan     tbb     24 2 gb    271287025 ns    238281250 ns            8
scan     tbb noe 24 2 gb    269032263 ns    242187500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1468 ns        0.000 ns         4096
find avx     noe 06 16 kb         858 ns        0.000 ns         4096
find avx tbb     06 16 kb         865 ns        0.000 ns         4096
find avx tbb noe 06 16 kb         865 ns        0.000 ns         4096
find             06 16 kb        6577 ns         7629 ns         4096
find         noe 06 16 kb        6514 ns         3815 ns         4096
find     tbb     06 16 kb        7344 ns         7629 ns         4096
find     tbb noe 06 16 kb        7184 ns        11444 ns         4096
find avx         12 16 kb         925 ns        0.000 ns         4096
find avx     noe 12 16 kb         917 ns         3815 ns         4096
find avx tbb     12 16 kb         918 ns        0.000 ns         4096
find avx tbb noe 12 16 kb         915 ns        0.000 ns         4096
find             12 16 kb        3792 ns         7629 ns         4096
find         noe 12 16 kb        3848 ns         3815 ns         4096
find     tbb     12 16 kb        6802 ns         7629 ns         4096
find     tbb noe 12 16 kb        6777 ns         7629 ns         4096
find avx         24 16 kb        1158 ns        0.000 ns         4096
find avx     noe 24 16 kb        1144 ns        0.000 ns         4096
find avx tbb     24 16 kb        1116 ns         3815 ns         4096
find avx tbb noe 24 16 kb        1080 ns        0.000 ns         4096
find             24 16 kb        2253 ns         3815 ns         4096
find         noe 24 16 kb        2190 ns         3815 ns         4096
find     tbb     24 16 kb        6675 ns         3815 ns         4096
find     tbb noe 24 16 kb        6648 ns         3815 ns         4096

scan avx         06 16 kb       12124 ns        15259 ns         4096
scan avx     noe 06 16 kb       11752 ns        11444 ns         4096
scan avx tbb     06 16 kb       11756 ns        11444 ns         4096
scan avx tbb noe 06 16 kb       11503 ns        11444 ns         4096
scan             06 16 kb       11037 ns        11444 ns         4096
scan         noe 06 16 kb       11020 ns        11444 ns         4096
scan     tbb     06 16 kb        7323 ns         7629 ns         4096
scan     tbb noe 06 16 kb        7328 ns         7629 ns         4096
scan avx         12 16 kb       11444 ns        11444 ns         4096
scan avx     noe 12 16 kb       11062 ns        15259 ns         4096
scan avx tbb     12 16 kb       11543 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11749 ns         7629 ns         4096
scan             12 16 kb       11229 ns        11444 ns         4096
scan         noe 12 16 kb       11037 ns        11444 ns         4096
scan     tbb     12 16 kb        7365 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7360 ns         3815 ns         4096
scan avx         24 16 kb       11705 ns        11444 ns         4096
scan avx     noe 24 16 kb       11761 ns        15259 ns         4096
scan avx tbb     24 16 kb       11607 ns         7629 ns         4096
scan avx tbb noe 24 16 kb       11045 ns        11444 ns         4096
scan             24 16 kb       11053 ns        11444 ns         4096
scan         noe 24 16 kb       11035 ns        11444 ns         4096
scan     tbb     24 16 kb        7444 ns        11444 ns         4096
scan     tbb noe 24 16 kb        7367 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2186 ns        0.000 ns         4096
find avx     noe 06 64 kb        2219 ns         3815 ns         4096
find avx tbb     06 64 kb        2233 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2096 ns        0.000 ns         4096
find             06 64 kb       25524 ns        22888 ns         4096
find         noe 06 64 kb       24067 ns        26703 ns         4096
find     tbb     06 64 kb        9686 ns         7629 ns         4096
find     tbb noe 06 64 kb        9626 ns        11444 ns         4096
find avx         12 64 kb        2175 ns        0.000 ns         4096
find avx     noe 12 64 kb        2194 ns         3815 ns         4096
find avx tbb     12 64 kb        2216 ns         3815 ns         4096
find avx tbb noe 12 64 kb        2091 ns        0.000 ns         4096
find             12 64 kb       12912 ns        11444 ns         4096
find         noe 12 64 kb       13212 ns        15259 ns         4096
find     tbb     12 64 kb        8178 ns        11444 ns         4096
find     tbb noe 12 64 kb        8083 ns         7629 ns         4096
find avx         24 64 kb        2684 ns        0.000 ns         4096
find avx     noe 24 64 kb        2669 ns         3815 ns         4096
find avx tbb     24 64 kb        2667 ns         7629 ns         4096
find avx tbb noe 24 64 kb        2568 ns         3815 ns         4096
find             24 64 kb        6575 ns        0.000 ns         4096
find         noe 24 64 kb        6935 ns         7629 ns         4096
find     tbb     24 64 kb        7418 ns        11444 ns         4096
find     tbb noe 24 64 kb        7364 ns         7629 ns         4096

scan avx         06 64 kb       44577 ns        45776 ns         4096
scan avx     noe 06 64 kb       42623 ns        41962 ns         4096
scan avx tbb     06 64 kb       42542 ns        45776 ns         4096
scan avx tbb noe 06 64 kb       42820 ns        45776 ns         4096
scan             06 64 kb       42532 ns        30518 ns         4096
scan         noe 06 64 kb       42496 ns        41962 ns         4096
scan     tbb     06 64 kb       14047 ns        15259 ns         4096
scan     tbb noe 06 64 kb       14219 ns        15259 ns         4096
scan avx         12 64 kb       44580 ns        41962 ns         4096
scan avx     noe 12 64 kb       42514 ns        41962 ns         4096
scan avx tbb     12 64 kb       42679 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       42574 ns        45776 ns         4096
scan             12 64 kb       42632 ns        38147 ns         4096
scan         noe 12 64 kb       42607 ns        41962 ns         4096
scan     tbb     12 64 kb       14101 ns        15259 ns         4096
scan     tbb noe 12 64 kb       14056 ns        11444 ns         4096
scan avx         24 64 kb       44273 ns        45776 ns         4096
scan avx     noe 24 64 kb       42891 ns        45776 ns         4096
scan avx tbb     24 64 kb       42601 ns        41962 ns         4096
scan avx tbb noe 24 64 kb       42545 ns        41962 ns         4096
scan             24 64 kb       42806 ns        45776 ns         4096
scan         noe 24 64 kb       42575 ns        41962 ns         4096
scan     tbb     24 64 kb       14045 ns         7629 ns         4096
scan     tbb noe 24 64 kb       14060 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       7715 ns         7629 ns         2048
find avx     noe 06 256 kb       7558 ns        0.000 ns         2048
find avx tbb     06 256 kb       7591 ns        0.000 ns         2048
find avx tbb noe 06 256 kb       7853 ns        15259 ns         2048
find             06 256 kb      98287 ns        91553 ns         2048
find         noe 06 256 kb      96868 ns        99182 ns         2048
find     tbb     06 256 kb      20012 ns        15259 ns         2048
find     tbb noe 06 256 kb      20398 ns        15259 ns         2048
find avx         12 256 kb       7763 ns         7629 ns         2048
find avx     noe 12 256 kb       7849 ns        15259 ns         2048
find avx tbb     12 256 kb       7491 ns        15259 ns         2048
find avx tbb noe 12 256 kb       7619 ns         7629 ns         2048
find             12 256 kb      49214 ns        38147 ns         2048
find         noe 12 256 kb      48091 ns        53406 ns         2048
find     tbb     12 256 kb      14973 ns        22888 ns         2048
find     tbb noe 12 256 kb      15033 ns        22888 ns         2048
find avx         24 256 kb       9165 ns        15259 ns         2048
find avx     noe 24 256 kb       8938 ns        15259 ns         2048
find avx tbb     24 256 kb       8734 ns         7629 ns         2048
find avx tbb noe 24 256 kb       9089 ns         7629 ns         2048
find             24 256 kb      26050 ns        22888 ns         2048
find         noe 24 256 kb      24809 ns        30518 ns         2048
find     tbb     24 256 kb      12534 ns         7629 ns         2048
find     tbb noe 24 256 kb      12449 ns        15259 ns         2048

scan avx         06 256 kb     172771 ns       183105 ns         2048
scan avx     noe 06 256 kb     168879 ns       167847 ns         2048
scan avx tbb     06 256 kb     169583 ns       160217 ns         2048
scan avx tbb noe 06 256 kb     171815 ns       160217 ns         2048
scan             06 256 kb     168806 ns       160217 ns         2048
scan         noe 06 256 kb     171217 ns       183105 ns         2048
scan     tbb     06 256 kb      42716 ns        38147 ns         2048
scan     tbb noe 06 256 kb      42870 ns        61035 ns         2048
scan avx         12 256 kb     170630 ns       152588 ns         2048
scan avx     noe 12 256 kb     168839 ns       160217 ns         2048
scan avx tbb     12 256 kb     169038 ns       175476 ns         2048
scan avx tbb noe 12 256 kb     168907 ns       167847 ns         2048
scan             12 256 kb     168872 ns       167847 ns         2048
scan         noe 12 256 kb     168838 ns       175476 ns         2048
scan     tbb     12 256 kb      41855 ns        53406 ns         2048
scan     tbb noe 12 256 kb      41840 ns        45776 ns         2048
scan avx         24 256 kb     173315 ns       167847 ns         2048
scan avx     noe 24 256 kb     168835 ns       175476 ns         2048
scan avx tbb     24 256 kb     168763 ns       160217 ns         2048
scan avx tbb noe 24 256 kb     169277 ns       175476 ns         2048
scan             24 256 kb     169152 ns       160217 ns         2048
scan         noe 24 256 kb     169008 ns       175476 ns         2048
scan     tbb     24 256 kb      42180 ns        30518 ns         2048
scan     tbb noe 24 256 kb      42316 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        28667 ns        30518 ns         1024
find avx     noe 06 1 mb        26661 ns        30518 ns         1024
find avx tbb     06 1 mb        18624 ns        30518 ns         1024
find avx tbb noe 06 1 mb        16635 ns        0.000 ns         1024
find             06 1 mb       381264 ns       396729 ns         1024
find         noe 06 1 mb       375018 ns       335693 ns         1024
find     tbb     06 1 mb        49230 ns        45776 ns         1024
find     tbb noe 06 1 mb        49037 ns        61035 ns         1024
find avx         12 1 mb        28677 ns        30518 ns         1024
find avx     noe 12 1 mb        26789 ns        15259 ns         1024
find avx tbb     12 1 mb        18572 ns        30518 ns         1024
find avx tbb noe 12 1 mb        16944 ns        15259 ns         1024
find             12 1 mb       193881 ns       198364 ns         1024
find         noe 12 1 mb       188486 ns       183105 ns         1024
find     tbb     12 1 mb        30454 ns        30518 ns         1024
find     tbb noe 12 1 mb        30062 ns        0.000 ns         1024
find avx         24 1 mb        35655 ns        45776 ns         1024
find avx     noe 24 1 mb        33054 ns        30518 ns         1024
find avx tbb     24 1 mb        18436 ns        15259 ns         1024
find avx tbb noe 24 1 mb        18226 ns        30518 ns         1024
find             24 1 mb        98368 ns       122070 ns         1024
find         noe 24 1 mb        94894 ns        45776 ns         1024
find     tbb     24 1 mb        23894 ns        0.000 ns         1024
find     tbb noe 24 1 mb        21544 ns        45776 ns         1024

scan avx         06 1 mb       680642 ns       656128 ns         1024
scan avx     noe 06 1 mb       674481 ns       640869 ns         1024
scan avx tbb     06 1 mb       147945 ns       106812 ns         1024
scan avx tbb noe 06 1 mb       144951 ns       137329 ns         1024
scan             06 1 mb       679461 ns       686646 ns         1024
scan         noe 06 1 mb       677058 ns       717163 ns         1024
scan     tbb     06 1 mb       145164 ns       152588 ns         1024
scan     tbb noe 06 1 mb       145421 ns       122070 ns         1024
scan avx         12 1 mb       678914 ns       701904 ns         1024
scan avx     noe 12 1 mb       673709 ns       671387 ns         1024
scan avx tbb     12 1 mb       147633 ns       183105 ns         1024
scan avx tbb noe 12 1 mb       145155 ns       137329 ns         1024
scan             12 1 mb       679407 ns       701904 ns         1024
scan         noe 12 1 mb       674008 ns       656128 ns         1024
scan     tbb     12 1 mb       145087 ns       152588 ns         1024
scan     tbb noe 12 1 mb       145814 ns       183105 ns         1024
scan avx         24 1 mb       677259 ns       671387 ns         1024
scan avx     noe 24 1 mb       674631 ns       686646 ns         1024
scan avx tbb     24 1 mb       147291 ns       122070 ns         1024
scan avx tbb noe 24 1 mb       144812 ns       122070 ns         1024
scan             24 1 mb       678783 ns       671387 ns         1024
scan         noe 24 1 mb       673230 ns       671387 ns         1024
scan     tbb     24 1 mb       146424 ns       152588 ns         1024
scan     tbb noe 24 1 mb       145539 ns       183105 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       195356 ns       213623 ns          512
find avx     noe 06 4 mb       193616 ns       183105 ns          512
find avx tbb     06 4 mb       181421 ns       244141 ns          512
find avx tbb noe 06 4 mb       157562 ns       152588 ns          512
find             06 4 mb      1518051 ns      1495361 ns          512
find         noe 06 4 mb      1508186 ns      1403809 ns          512
find     tbb     06 4 mb       231390 ns       152588 ns          512
find     tbb noe 06 4 mb       200634 ns       152588 ns          512
find avx         12 4 mb       193638 ns       183105 ns          512
find avx     noe 12 4 mb       190681 ns       183105 ns          512
find avx tbb     12 4 mb       176543 ns       152588 ns          512
find avx tbb noe 12 4 mb       157864 ns       122070 ns          512
find             12 4 mb       778307 ns       854492 ns          512
find         noe 12 4 mb       768732 ns       793457 ns          512
find     tbb     12 4 mb       202086 ns       183105 ns          512
find     tbb noe 12 4 mb       174225 ns       152588 ns          512
find avx         24 4 mb       208932 ns       244141 ns          512
find avx     noe 24 4 mb       205972 ns       274658 ns          512
find avx tbb     24 4 mb       171431 ns       122070 ns          512
find avx tbb noe 24 4 mb       158771 ns       152588 ns          512
find             24 4 mb       413665 ns       366211 ns          512
find         noe 24 4 mb       408906 ns       427246 ns          512
find     tbb     24 4 mb       192564 ns       274658 ns          512
find     tbb noe 24 4 mb       168974 ns        91553 ns          512

scan avx         06 4 mb      2708485 ns      2807617 ns          512
scan avx     noe 06 4 mb      2702109 ns      2777100 ns          512
scan avx tbb     06 4 mb       604610 ns       518799 ns          512
scan avx tbb noe 06 4 mb       580768 ns       579834 ns          512
scan             06 4 mb      2710262 ns      2746582 ns          512
scan         noe 06 4 mb      2701649 ns      2746582 ns          512
scan     tbb     06 4 mb       598485 ns       640869 ns          512
scan     tbb noe 06 4 mb       583381 ns       518799 ns          512
scan avx         12 4 mb      2716002 ns      2685547 ns          512
scan avx     noe 12 4 mb      2696668 ns      2624512 ns          512
scan avx tbb     12 4 mb       604123 ns       610352 ns          512
scan avx tbb noe 12 4 mb       583023 ns       488281 ns          512
scan             12 4 mb      2706948 ns      2716064 ns          512
scan         noe 12 4 mb      2697430 ns      2593994 ns          512
scan     tbb     12 4 mb       598623 ns       671387 ns          512
scan     tbb noe 12 4 mb       581897 ns       549316 ns          512
scan avx         24 4 mb      2704325 ns      2716064 ns          512
scan avx     noe 24 4 mb      2698110 ns      2777100 ns          512
scan avx tbb     24 4 mb       602045 ns       579834 ns          512
scan avx tbb noe 24 4 mb       581358 ns       610352 ns          512
scan             24 4 mb      2704196 ns      2685547 ns          512
scan         noe 24 4 mb      2696499 ns      2716064 ns          512
scan     tbb     24 4 mb       597674 ns       610352 ns          512
scan     tbb noe 24 4 mb       583509 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      791681 ns       976562 ns           64
find avx     noe 06 16 mb      777136 ns       732422 ns           64
find avx tbb     06 16 mb      643097 ns       488281 ns           64
find avx tbb noe 06 16 mb      629578 ns       976562 ns           64
find             06 16 mb     6138717 ns      6347656 ns           64
find         noe 06 16 mb     6043819 ns      6347656 ns           64
find     tbb     06 16 mb      809066 ns      1220703 ns           64
find     tbb noe 06 16 mb      805986 ns       732422 ns           64
find avx         12 16 mb      798581 ns      1708984 ns           64
find avx     noe 12 16 mb      786522 ns       244141 ns           64
find avx tbb     12 16 mb      649347 ns       976562 ns           64
find avx tbb noe 12 16 mb      630303 ns       732422 ns           64
find             12 16 mb     3132914 ns      3662109 ns           64
find         noe 12 16 mb     3066873 ns      3662109 ns           64
find     tbb     12 16 mb      705491 ns      1464844 ns           64
find     tbb noe 12 16 mb      707822 ns      1220703 ns           64
find avx         24 16 mb      859152 ns       732422 ns           64
find avx     noe 24 16 mb      830022 ns       244141 ns           64
find avx tbb     24 16 mb      644248 ns       732422 ns           64
find avx tbb noe 24 16 mb      634864 ns       732422 ns           64
find             24 16 mb     1703841 ns      2197266 ns           64
find         noe 24 16 mb     1657177 ns       732422 ns           64
find     tbb     24 16 mb      685745 ns       488281 ns           64
find     tbb noe 24 16 mb      681330 ns       732422 ns           64

scan avx         06 16 mb    10871762 ns     11474609 ns           64
scan avx     noe 06 16 mb    10879706 ns     11474609 ns           64
scan avx tbb     06 16 mb     2242681 ns      2197266 ns           64
scan avx tbb noe 06 16 mb     2179341 ns      2441406 ns           64
scan             06 16 mb    10837827 ns     10986328 ns           64
scan         noe 06 16 mb    10774741 ns     10498047 ns           64
scan     tbb     06 16 mb     2220622 ns      1953125 ns           64
scan     tbb noe 06 16 mb     2170142 ns      2441406 ns           64
scan avx         12 16 mb    10824506 ns     10742188 ns           64
scan avx     noe 12 16 mb    10783253 ns     10986328 ns           64
scan avx tbb     12 16 mb     2232584 ns      2441406 ns           64
scan avx tbb noe 12 16 mb     2171375 ns      2685547 ns           64
scan             12 16 mb    10829172 ns     11230469 ns           64
scan         noe 12 16 mb    10787291 ns     10742188 ns           64
scan     tbb     12 16 mb     2193998 ns      2685547 ns           64
scan     tbb noe 12 16 mb     2179773 ns      1953125 ns           64
scan avx         24 16 mb    10922473 ns     11230469 ns           64
scan avx     noe 24 16 mb    10775442 ns     10498047 ns           64
scan avx tbb     24 16 mb     2229895 ns      2197266 ns           64
scan avx tbb noe 24 16 mb     2153280 ns      2197266 ns           64
scan             24 16 mb    10844377 ns     10742188 ns           64
scan         noe 24 16 mb    10783134 ns     10742188 ns           64
scan     tbb     24 16 mb     2214486 ns      1953125 ns           64
scan     tbb noe 24 16 mb     2165569 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3098434 ns        0.000 ns           32
find avx     noe 06 64 mb     3054537 ns        0.000 ns           32
find avx tbb     06 64 mb     2391606 ns      1953125 ns           32
find avx tbb noe 06 64 mb     2391513 ns      1953125 ns           32
find             06 64 mb    24088556 ns     24902344 ns           32
find         noe 06 64 mb    24115191 ns     23437500 ns           32
find     tbb     06 64 mb     2801319 ns       976562 ns           32
find     tbb noe 06 64 mb     2803809 ns        0.000 ns           32
find avx         12 64 mb     3075781 ns       488281 ns           32
find avx     noe 12 64 mb     3058728 ns      3417969 ns           32
find avx tbb     12 64 mb     2388566 ns      2441406 ns           32
find avx tbb noe 12 64 mb     2387162 ns      1953125 ns           32
find             12 64 mb    12266194 ns     12207031 ns           32
find         noe 12 64 mb    12290475 ns     12695312 ns           32
find     tbb     12 64 mb     2544891 ns      2929688 ns           32
find     tbb noe 12 64 mb     2537900 ns      3417969 ns           32
find avx         24 64 mb     3319000 ns      3906250 ns           32
find avx     noe 24 64 mb     3267484 ns      2441406 ns           32
find avx tbb     24 64 mb     2404116 ns      2441406 ns           32
find avx tbb noe 24 64 mb     2390753 ns      3417969 ns           32
find             24 64 mb     6531066 ns      6347656 ns           32
find         noe 24 64 mb     6515791 ns      6347656 ns           32
find     tbb     24 64 mb     2467781 ns      2441406 ns           32
find     tbb noe 24 64 mb     2464291 ns      2929688 ns           32

scan avx         06 64 mb    43296719 ns     41503906 ns           32
scan avx     noe 06 64 mb    43154591 ns     44433594 ns           32
scan avx tbb     06 64 mb     8618631 ns      8789062 ns           32
scan avx tbb noe 06 64 mb     8521481 ns      8300781 ns           32
scan             06 64 mb    43398269 ns     42968750 ns           32
scan         noe 06 64 mb    43047566 ns     41503906 ns           32
scan     tbb     06 64 mb     8368534 ns      8789062 ns           32
scan     tbb noe 06 64 mb     8630094 ns      8789062 ns           32
scan avx         12 64 mb    43332050 ns     42968750 ns           32
scan avx     noe 12 64 mb    43223075 ns     41992188 ns           32
scan avx tbb     12 64 mb     8663969 ns      9765625 ns           32
scan avx tbb noe 12 64 mb     8576331 ns      8789062 ns           32
scan             12 64 mb    43335181 ns     43945312 ns           32
scan         noe 12 64 mb    43198725 ns     44433594 ns           32
scan     tbb     12 64 mb     8570131 ns      8789062 ns           32
scan     tbb noe 12 64 mb     8496322 ns      8300781 ns           32
scan avx         24 64 mb    43335113 ns     43457031 ns           32
scan avx     noe 24 64 mb    43140416 ns     44921875 ns           32
scan avx tbb     24 64 mb     8699869 ns      8300781 ns           32
scan avx tbb noe 24 64 mb     8704009 ns      9277344 ns           32
scan             24 64 mb    43319122 ns     43945312 ns           32
scan         noe 24 64 mb    43218447 ns     44921875 ns           32
scan     tbb     24 64 mb     8516550 ns      8300781 ns           32
scan     tbb noe 24 64 mb     8660509 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13099812 ns     12695312 ns           16
find avx     noe 06 256 mb   13031500 ns     11718750 ns           16
find avx tbb     06 256 mb    9302081 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9318025 ns      8789062 ns           16
find             06 256 mb   96559675 ns     96679688 ns           16
find         noe 06 256 mb   96440075 ns     96679688 ns           16
find     tbb     06 256 mb   10748094 ns      3906250 ns           16
find     tbb noe 06 256 mb   10838438 ns     15625000 ns           16
find avx         12 256 mb   13037438 ns     12695312 ns           16
find avx     noe 12 256 mb   12992713 ns     13671875 ns           16
find avx tbb     12 256 mb    9307975 ns      8789062 ns           16
find avx tbb noe 12 256 mb    9295169 ns      7812500 ns           16
find             12 256 mb   49018938 ns     48828125 ns           16
find         noe 12 256 mb   49029738 ns     49804688 ns           16
find     tbb     12 256 mb    9692406 ns      7812500 ns           16
find     tbb noe 12 256 mb    9685575 ns      9765625 ns           16
find avx         24 256 mb   13739925 ns     13671875 ns           16
find avx     noe 24 256 mb   13784831 ns     12695312 ns           16
find avx tbb     24 256 mb    9334931 ns      9765625 ns           16
find avx tbb noe 24 256 mb    9329925 ns      6835938 ns           16
find             24 256 mb   26040106 ns     25390625 ns           16
find         noe 24 256 mb   26061144 ns     26367188 ns           16
find     tbb     24 256 mb    9481137 ns      8789062 ns           16
find     tbb noe 24 256 mb    9485063 ns      9765625 ns           16

scan avx         06 256 mb  172978344 ns    172851562 ns           16
scan avx     noe 06 256 mb  172449119 ns    172851562 ns           16
scan avx tbb     06 256 mb   34221719 ns     32226562 ns           16
scan avx tbb noe 06 256 mb   33547994 ns     32226562 ns           16
scan             06 256 mb  172317169 ns    172851562 ns           16
scan         noe 06 256 mb  172427206 ns    171875000 ns           16
scan     tbb     06 256 mb   33074112 ns     31250000 ns           16
scan     tbb noe 06 256 mb   33381725 ns     30273438 ns           16
scan avx         12 256 mb  173134938 ns    174804688 ns           16
scan avx     noe 12 256 mb  172640700 ns    174804688 ns           16
scan avx tbb     12 256 mb   33948431 ns     32226562 ns           16
scan avx tbb noe 12 256 mb   33279606 ns     32226562 ns           16
scan             12 256 mb  172453394 ns    171875000 ns           16
scan         noe 12 256 mb  172906181 ns    173828125 ns           16
scan     tbb     12 256 mb   33227194 ns     29296875 ns           16
scan     tbb noe 12 256 mb   33715475 ns     31250000 ns           16
scan avx         24 256 mb  172432356 ns    171875000 ns           16
scan avx     noe 24 256 mb  172700913 ns    173828125 ns           16
scan avx tbb     24 256 mb   33832087 ns     30273438 ns           16
scan avx tbb noe 24 256 mb   33788125 ns     30273438 ns           16
scan             24 256 mb  172378444 ns    173828125 ns           16
scan         noe 24 256 mb  172358412 ns    171875000 ns           16
scan     tbb     24 256 mb   33034500 ns     32226562 ns           16
scan     tbb noe 24 256 mb   33626475 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26728750 ns     25390625 ns            8
find avx     noe 06 512 mb   26780863 ns     27343750 ns            8
find avx tbb     06 512 mb   18530788 ns     17578125 ns            8
find avx tbb noe 06 512 mb   18516687 ns     17578125 ns            8
find             06 512 mb  192763525 ns    191406250 ns            8
find         noe 06 512 mb  192882688 ns    193359375 ns            8
find     tbb     06 512 mb   21275025 ns     17578125 ns            8
find     tbb noe 06 512 mb   21251650 ns     17578125 ns            8
find avx         12 512 mb   26809537 ns     27343750 ns            8
find avx     noe 12 512 mb   26770200 ns     27343750 ns            8
find avx tbb     12 512 mb   18532050 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18553588 ns     17578125 ns            8
find             12 512 mb   98053200 ns     97656250 ns            8
find         noe 12 512 mb   98047312 ns     95703125 ns            8
find     tbb     12 512 mb   19319825 ns     21484375 ns            8
find     tbb noe 12 512 mb   19240850 ns     19531250 ns            8
find avx         24 512 mb   28272350 ns     27343750 ns            8
find avx     noe 24 512 mb   28161750 ns     25390625 ns            8
find avx tbb     24 512 mb   18573675 ns     17578125 ns            8
find avx tbb noe 24 512 mb   18593725 ns     17578125 ns            8
find             24 512 mb   51991887 ns     50781250 ns            8
find         noe 24 512 mb   51998637 ns     50781250 ns            8
find     tbb     24 512 mb   18840562 ns     19531250 ns            8
find     tbb noe 24 512 mb   18889688 ns     19531250 ns            8

scan avx         06 512 mb  345112225 ns    345703125 ns            8
scan avx     noe 06 512 mb  345247600 ns    343750000 ns            8
scan avx tbb     06 512 mb   67964825 ns     60546875 ns            8
scan avx tbb noe 06 512 mb   66598575 ns     62500000 ns            8
scan             06 512 mb  345632500 ns    347656250 ns            8
scan         noe 06 512 mb  345591000 ns    345703125 ns            8
scan     tbb     06 512 mb   67193663 ns     62500000 ns            8
scan     tbb noe 06 512 mb   68180250 ns     60546875 ns            8
scan avx         12 512 mb  344972775 ns    345703125 ns            8
scan avx     noe 12 512 mb  344842988 ns    345703125 ns            8
scan avx tbb     12 512 mb   67908762 ns     64453125 ns            8
scan avx tbb noe 12 512 mb   67062063 ns     62500000 ns            8
scan             12 512 mb  344824113 ns    343750000 ns            8
scan         noe 12 512 mb  345320975 ns    345703125 ns            8
scan     tbb     12 512 mb   67239338 ns     62500000 ns            8
scan     tbb noe 12 512 mb   67031025 ns     62500000 ns            8
scan avx         24 512 mb  345521337 ns    345703125 ns            8
scan avx     noe 24 512 mb  345039100 ns    345703125 ns            8
scan avx tbb     24 512 mb   67281325 ns     56640625 ns            8
scan avx tbb noe 24 512 mb   68425663 ns     58593750 ns            8
scan             24 512 mb  344835950 ns    345703125 ns            8
scan         noe 24 512 mb  344786712 ns    347656250 ns            8
scan     tbb     24 512 mb   66786337 ns     58593750 ns            8
scan     tbb noe 24 512 mb   68037075 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     54451750 ns     54687500 ns            8
find avx     noe 06 1 gb     54426850 ns     54687500 ns            8
find avx tbb     06 1 gb     36948762 ns     39062500 ns            8
find avx tbb noe 06 1 gb     36914175 ns     37109375 ns            8
find             06 1 gb    385420938 ns    384765625 ns            8
find         noe 06 1 gb    385536925 ns    386718750 ns            8
find     tbb     06 1 gb     42493938 ns     35156250 ns            8
find     tbb noe 06 1 gb     42323763 ns     37109375 ns            8
find avx         12 1 gb     54268212 ns     52734375 ns            8
find avx     noe 12 1 gb     54547363 ns     54687500 ns            8
find avx tbb     12 1 gb     36939425 ns     39062500 ns            8
find avx tbb noe 12 1 gb     36967513 ns     39062500 ns            8
find             12 1 gb    196066513 ns    197265625 ns            8
find         noe 12 1 gb    196222100 ns    191406250 ns            8
find     tbb     12 1 gb     38231225 ns     35156250 ns            8
find     tbb noe 12 1 gb     38248275 ns     39062500 ns            8
find avx         24 1 gb     57054400 ns     54687500 ns            8
find avx     noe 24 1 gb     57118863 ns     58593750 ns            8
find avx tbb     24 1 gb     37075875 ns     37109375 ns            8
find avx tbb noe 24 1 gb     37050437 ns     37109375 ns            8
find             24 1 gb    103914550 ns    105468750 ns            8
find         noe 24 1 gb    104582613 ns    103515625 ns            8
find     tbb     24 1 gb     37560400 ns     37109375 ns            8
find     tbb noe 24 1 gb     37866575 ns     35156250 ns            8

scan avx         06 1 gb    689606725 ns    691406250 ns            8
scan avx     noe 06 1 gb    690125300 ns    691406250 ns            8
scan avx tbb     06 1 gb    136709988 ns    128906250 ns            8
scan avx tbb noe 06 1 gb    134360937 ns    119140625 ns            8
scan             06 1 gb    690287963 ns    691406250 ns            8
scan         noe 06 1 gb    690669875 ns    691406250 ns            8
scan     tbb     06 1 gb    132894925 ns    119140625 ns            8
scan     tbb noe 06 1 gb    134828613 ns    121093750 ns            8
scan avx         12 1 gb    696232900 ns    697265625 ns            8
scan avx     noe 12 1 gb    689644425 ns    687500000 ns            8
scan avx tbb     12 1 gb    136675950 ns    115234375 ns            8
scan avx tbb noe 12 1 gb    138197700 ns    119140625 ns            8
scan             12 1 gb    689529325 ns    689453125 ns            8
scan         noe 12 1 gb    689502362 ns    691406250 ns            8
scan     tbb     12 1 gb    133417037 ns    121093750 ns            8
scan     tbb noe 12 1 gb    136221675 ns    119140625 ns            8
scan avx         24 1 gb    689553062 ns    691406250 ns            8
scan avx     noe 24 1 gb    689642875 ns    689453125 ns            8
scan avx tbb     24 1 gb    136775062 ns    123046875 ns            8
scan avx tbb noe 24 1 gb    137287825 ns    125000000 ns            8
scan             24 1 gb    691035737 ns    691406250 ns            8
scan         noe 24 1 gb    689793275 ns    691406250 ns            8
scan     tbb     24 1 gb    134839912 ns    119140625 ns            8
scan     tbb noe 24 1 gb    136087500 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    109103175 ns    111328125 ns            8
find avx     noe 06 2 gb    110003250 ns    109375000 ns            8
find avx tbb     06 2 gb     73872262 ns     74218750 ns            8
find avx tbb noe 06 2 gb     73856563 ns     76171875 ns            8
find             06 2 gb    771488350 ns    769531250 ns            8
find         noe 06 2 gb    771383037 ns    771484375 ns            8
find     tbb     06 2 gb     84978300 ns     74218750 ns            8
find     tbb noe 06 2 gb     84636913 ns     70312500 ns            8
find avx         12 2 gb    109509500 ns    109375000 ns            8
find avx     noe 12 2 gb    109673350 ns    109375000 ns            8
find avx tbb     12 2 gb     73974650 ns     62500000 ns            8
find avx tbb noe 12 2 gb     73895025 ns     76171875 ns            8
find             12 2 gb    394487975 ns    394531250 ns            8
find         noe 12 2 gb    392569675 ns    390625000 ns            8
find     tbb     12 2 gb     76453525 ns     74218750 ns            8
find     tbb noe 12 2 gb     76445875 ns     72265625 ns            8
find avx         24 2 gb    115975825 ns    113281250 ns            8
find avx     noe 24 2 gb    115710075 ns    115234375 ns            8
find avx tbb     24 2 gb     74109812 ns     74218750 ns            8
find avx tbb noe 24 2 gb     74082612 ns     74218750 ns            8
find             24 2 gb    208180863 ns    208984375 ns            8
find         noe 24 2 gb    207933700 ns    208984375 ns            8
find     tbb     24 2 gb     74946075 ns     74218750 ns            8
find     tbb noe 24 2 gb     75022762 ns     72265625 ns            8

scan avx         06 2 gb   1379441250 ns   1382812500 ns            8
scan avx     noe 06 2 gb   1380867225 ns   1378906250 ns            8
scan avx tbb     06 2 gb    268540375 ns    236328125 ns            8
scan avx tbb noe 06 2 gb    271210338 ns    238281250 ns            8
scan             06 2 gb   1380726038 ns   1382812500 ns            8
scan         noe 06 2 gb   1381693138 ns   1382812500 ns            8
scan     tbb     06 2 gb    267649512 ns    240234375 ns            8
scan     tbb noe 06 2 gb    264413725 ns    236328125 ns            8
scan avx         12 2 gb   1382199088 ns   1382812500 ns            8
scan avx     noe 12 2 gb   1379692713 ns   1380859375 ns            8
scan avx tbb     12 2 gb    271491875 ns    242187500 ns            8
scan avx tbb noe 12 2 gb    269319787 ns    244140625 ns            8
scan             12 2 gb   1379307313 ns   1380859375 ns            8
scan         noe 12 2 gb   1381447700 ns   1382812500 ns            8
scan     tbb     12 2 gb    269194312 ns    236328125 ns            8
scan     tbb noe 12 2 gb    270094575 ns    242187500 ns            8
scan avx         24 2 gb   1380401312 ns   1376953125 ns            8
scan avx     noe 24 2 gb   1382706713 ns   1378906250 ns            8
scan avx tbb     24 2 gb    273330062 ns    236328125 ns            8
scan avx tbb noe 24 2 gb    270542338 ns    240234375 ns            8
scan             24 2 gb   1380106613 ns   1382812500 ns            8
scan         noe 24 2 gb   1379189475 ns   1380859375 ns            8
scan     tbb     24 2 gb    266116100 ns    236328125 ns            8
scan     tbb noe 24 2 gb    270775250 ns    238281250 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1476 ns        0.000 ns         4096
find avx     noe 06 16 kb         904 ns        0.000 ns         4096
find avx tbb     06 16 kb         870 ns        0.000 ns         4096
find avx tbb noe 06 16 kb         874 ns         3815 ns         4096
find             06 16 kb        6541 ns         3815 ns         4096
find         noe 06 16 kb        6543 ns         7629 ns         4096
find     tbb     06 16 kb        7427 ns        11444 ns         4096
find     tbb noe 06 16 kb        7272 ns         3815 ns         4096
find avx         12 16 kb         934 ns         3815 ns         4096
find avx     noe 12 16 kb         933 ns        0.000 ns         4096
find avx tbb     12 16 kb         926 ns        0.000 ns         4096
find avx tbb noe 12 16 kb         932 ns         3815 ns         4096
find             12 16 kb        3811 ns         3815 ns         4096
find         noe 12 16 kb        3866 ns         3815 ns         4096
find     tbb     12 16 kb        6913 ns         3815 ns         4096
find     tbb noe 12 16 kb        7025 ns        11444 ns         4096
find avx         24 16 kb        1148 ns        0.000 ns         4096
find avx     noe 24 16 kb        1103 ns         3815 ns         4096
find avx tbb     24 16 kb        1085 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1106 ns        0.000 ns         4096
find             24 16 kb        2255 ns        0.000 ns         4096
find         noe 24 16 kb        2217 ns        0.000 ns         4096
find     tbb     24 16 kb        6742 ns         7629 ns         4096
find     tbb noe 24 16 kb        6749 ns        11444 ns         4096

scan avx         06 16 kb       12114 ns        11444 ns         4096
scan avx     noe 06 16 kb       11931 ns        11444 ns         4096
scan avx tbb     06 16 kb       11766 ns        15259 ns         4096
scan avx tbb noe 06 16 kb       11459 ns        11444 ns         4096
scan             06 16 kb       11031 ns        11444 ns         4096
scan         noe 06 16 kb       11045 ns        11444 ns         4096
scan     tbb     06 16 kb        7113 ns         7629 ns         4096
scan     tbb noe 06 16 kb        7593 ns         7629 ns         4096
scan avx         12 16 kb       11646 ns        11444 ns         4096
scan avx     noe 12 16 kb       11147 ns        11444 ns         4096
scan avx tbb     12 16 kb       11606 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11739 ns        15259 ns         4096
scan             12 16 kb       11180 ns        11444 ns         4096
scan         noe 12 16 kb       11060 ns        11444 ns         4096
scan     tbb     12 16 kb        7157 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7573 ns         3815 ns         4096
scan avx         24 16 kb       11755 ns        11444 ns         4096
scan avx     noe 24 16 kb       12275 ns        11444 ns         4096
scan avx tbb     24 16 kb       11631 ns        11444 ns         4096
scan avx tbb noe 24 16 kb       11108 ns        11444 ns         4096
scan             24 16 kb       11108 ns        11444 ns         4096
scan         noe 24 16 kb       11053 ns        11444 ns         4096
scan     tbb     24 16 kb        7136 ns         3815 ns         4096
scan     tbb noe 24 16 kb        7548 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2218 ns         3815 ns         4096
find avx     noe 06 64 kb        2225 ns        0.000 ns         4096
find avx tbb     06 64 kb        2211 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2131 ns         3815 ns         4096
find             06 64 kb       25472 ns        30518 ns         4096
find         noe 06 64 kb       24044 ns        22888 ns         4096
find     tbb     06 64 kb        9755 ns        11444 ns         4096
find     tbb noe 06 64 kb        9820 ns         7629 ns         4096
find avx         12 64 kb        2243 ns        0.000 ns         4096
find avx     noe 12 64 kb        2259 ns         3815 ns         4096
find avx tbb     12 64 kb        2266 ns        0.000 ns         4096
find avx tbb noe 12 64 kb        2084 ns        0.000 ns         4096
find             12 64 kb       12429 ns        11444 ns         4096
find         noe 12 64 kb       12423 ns         3815 ns         4096
find     tbb     12 64 kb        8202 ns         7629 ns         4096
find     tbb noe 12 64 kb        8187 ns         3815 ns         4096
find avx         24 64 kb        2683 ns         3815 ns         4096
find avx     noe 24 64 kb        2671 ns         3815 ns         4096
find avx tbb     24 64 kb        2642 ns         3815 ns         4096
find avx tbb noe 24 64 kb        2555 ns        0.000 ns         4096
find             24 64 kb        6586 ns         3815 ns         4096
find         noe 24 64 kb        6961 ns         7629 ns         4096
find     tbb     24 64 kb        7475 ns        11444 ns         4096
find     tbb noe 24 64 kb        7869 ns        11444 ns         4096

scan avx         06 64 kb       44775 ns        41962 ns         4096
scan avx     noe 06 64 kb       42602 ns        45776 ns         4096
scan avx tbb     06 64 kb       42922 ns        45776 ns         4096
scan avx tbb noe 06 64 kb       42561 ns        34332 ns         4096
scan             06 64 kb       42588 ns        41962 ns         4096
scan         noe 06 64 kb       42657 ns        38147 ns         4096
scan     tbb     06 64 kb       13766 ns        11444 ns         4096
scan     tbb noe 06 64 kb       14368 ns        15259 ns         4096
scan avx         12 64 kb       43604 ns        41962 ns         4096
scan avx     noe 12 64 kb       42836 ns        45776 ns         4096
scan avx tbb     12 64 kb       42819 ns        45776 ns         4096
scan avx tbb noe 12 64 kb       42672 ns        38147 ns         4096
scan             12 64 kb       42727 ns        45776 ns         4096
scan         noe 12 64 kb       42671 ns        45776 ns         4096
scan     tbb     12 64 kb       13484 ns        11444 ns         4096
scan     tbb noe 12 64 kb       14339 ns        15259 ns         4096
scan avx         24 64 kb       43254 ns        41962 ns         4096
scan avx     noe 24 64 kb       43029 ns        38147 ns         4096
scan avx tbb     24 64 kb       42823 ns        41962 ns         4096
scan avx tbb noe 24 64 kb       42699 ns        41962 ns         4096
scan             24 64 kb       42575 ns        45776 ns         4096
scan         noe 24 64 kb       42637 ns        45776 ns         4096
scan     tbb     24 64 kb       13518 ns        15259 ns         4096
scan     tbb noe 24 64 kb       14945 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8588 ns        0.000 ns         2048
find avx     noe 06 256 kb       8276 ns        0.000 ns         2048
find avx tbb     06 256 kb       7224 ns         7629 ns         2048
find avx tbb noe 06 256 kb       7266 ns         7629 ns         2048
find             06 256 kb      94385 ns        76294 ns         2048
find         noe 06 256 kb      94484 ns        91553 ns         2048
find     tbb     06 256 kb      20260 ns        22888 ns         2048
find     tbb noe 06 256 kb      19973 ns         7629 ns         2048
find avx         12 256 kb       7763 ns        0.000 ns         2048
find avx     noe 12 256 kb       7551 ns        15259 ns         2048
find avx tbb     12 256 kb       7194 ns        0.000 ns         2048
find avx tbb noe 12 256 kb       7206 ns        0.000 ns         2048
find             12 256 kb      47741 ns        53406 ns         2048
find         noe 12 256 kb      47897 ns        53406 ns         2048
find     tbb     12 256 kb      15158 ns        15259 ns         2048
find     tbb noe 12 256 kb      15089 ns        15259 ns         2048
find avx         24 256 kb       9530 ns        15259 ns         2048
find avx     noe 24 256 kb      10851 ns         7629 ns         2048
find avx tbb     24 256 kb       9244 ns        15259 ns         2048
find avx tbb noe 24 256 kb       9274 ns        15259 ns         2048
find             24 256 kb      26096 ns        22888 ns         2048
find         noe 24 256 kb      25089 ns        22888 ns         2048
find     tbb     24 256 kb      12530 ns        22888 ns         2048
find     tbb noe 24 256 kb      12577 ns        22888 ns         2048

scan avx         06 256 kb     173839 ns       175476 ns         2048
scan avx     noe 06 256 kb     170199 ns       167847 ns         2048
scan avx tbb     06 256 kb     169558 ns       167847 ns         2048
scan avx tbb noe 06 256 kb     169387 ns       175476 ns         2048
scan             06 256 kb     168995 ns       167847 ns         2048
scan         noe 06 256 kb     168753 ns       167847 ns         2048
scan     tbb     06 256 kb      41361 ns        38147 ns         2048
scan     tbb noe 06 256 kb      42353 ns        61035 ns         2048
scan avx         12 256 kb     170902 ns       160217 ns         2048
scan avx     noe 12 256 kb     168859 ns       175476 ns         2048
scan avx tbb     12 256 kb     169292 ns       167847 ns         2048
scan avx tbb noe 12 256 kb     169011 ns       175476 ns         2048
scan             12 256 kb     169176 ns       175476 ns         2048
scan         noe 12 256 kb     169319 ns       175476 ns         2048
scan     tbb     12 256 kb      40694 ns        38147 ns         2048
scan     tbb noe 12 256 kb      42439 ns        45776 ns         2048
scan avx         24 256 kb     171058 ns       175476 ns         2048
scan avx     noe 24 256 kb     169753 ns       160217 ns         2048
scan avx tbb     24 256 kb     169169 ns       167847 ns         2048
scan avx tbb noe 24 256 kb     169187 ns       175476 ns         2048
scan             24 256 kb     169271 ns       175476 ns         2048
scan         noe 24 256 kb     169240 ns       167847 ns         2048
scan     tbb     24 256 kb      41221 ns        45776 ns         2048
scan     tbb noe 24 256 kb      42303 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        29246 ns        15259 ns         1024
find avx     noe 06 1 mb        27229 ns        30518 ns         1024
find avx tbb     06 1 mb        17850 ns        30518 ns         1024
find avx tbb noe 06 1 mb        17402 ns        30518 ns         1024
find             06 1 mb       380097 ns       411987 ns         1024
find         noe 06 1 mb       375399 ns       381470 ns         1024
find     tbb     06 1 mb        49375 ns        61035 ns         1024
find     tbb noe 06 1 mb        50122 ns        15259 ns         1024
find avx         12 1 mb        28618 ns        45776 ns         1024
find avx     noe 12 1 mb        27069 ns        0.000 ns         1024
find avx tbb     12 1 mb        18481 ns        15259 ns         1024
find avx tbb noe 12 1 mb        17106 ns        15259 ns         1024
find             12 1 mb       192570 ns       198364 ns         1024
find         noe 12 1 mb       188317 ns       198364 ns         1024
find     tbb     12 1 mb        31668 ns        45776 ns         1024
find     tbb noe 12 1 mb        30029 ns        15259 ns         1024
find avx         24 1 mb        35043 ns        30518 ns         1024
find avx     noe 24 1 mb        33455 ns        30518 ns         1024
find avx tbb     24 1 mb        18180 ns        30518 ns         1024
find avx tbb noe 24 1 mb        18243 ns        0.000 ns         1024
find             24 1 mb        99016 ns       137329 ns         1024
find         noe 24 1 mb        95040 ns        91553 ns         1024
find     tbb     24 1 mb        22275 ns        45776 ns         1024
find     tbb noe 24 1 mb        21653 ns        30518 ns         1024

scan avx         06 1 mb       678674 ns       671387 ns         1024
scan avx     noe 06 1 mb       675523 ns       640869 ns         1024
scan avx tbb     06 1 mb       147379 ns       152588 ns         1024
scan avx tbb noe 06 1 mb       146619 ns       213623 ns         1024
scan             06 1 mb       678576 ns       671387 ns         1024
scan         noe 06 1 mb       674093 ns       656128 ns         1024
scan     tbb     06 1 mb       141982 ns       106812 ns         1024
scan     tbb noe 06 1 mb       146028 ns        91553 ns         1024
scan avx         12 1 mb       678531 ns       701904 ns         1024
scan avx     noe 12 1 mb       676460 ns       686646 ns         1024
scan avx tbb     12 1 mb       146778 ns       122070 ns         1024
scan avx tbb noe 12 1 mb       146355 ns       122070 ns         1024
scan             12 1 mb       682958 ns       686646 ns         1024
scan         noe 12 1 mb       675800 ns       686646 ns         1024
scan     tbb     12 1 mb       143474 ns       167847 ns         1024
scan     tbb noe 12 1 mb       146235 ns       137329 ns         1024
scan avx         24 1 mb       677810 ns       656128 ns         1024
scan avx     noe 24 1 mb       674551 ns       671387 ns         1024
scan avx tbb     24 1 mb       147095 ns       122070 ns         1024
scan avx tbb noe 24 1 mb       147399 ns       152588 ns         1024
scan             24 1 mb       678108 ns       640869 ns         1024
scan         noe 24 1 mb       674097 ns       656128 ns         1024
scan     tbb     24 1 mb       143651 ns       183105 ns         1024
scan     tbb noe 24 1 mb       146559 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       195209 ns       152588 ns          512
find avx     noe 06 4 mb       189938 ns       122070 ns          512
find avx tbb     06 4 mb       177526 ns       183105 ns          512
find avx tbb noe 06 4 mb       157265 ns       183105 ns          512
find             06 4 mb      1516871 ns      1403809 ns          512
find         noe 06 4 mb      1510208 ns      1464844 ns          512
find     tbb     06 4 mb       227493 ns       183105 ns          512
find     tbb noe 06 4 mb       202188 ns       213623 ns          512
find avx         12 4 mb       191985 ns       274658 ns          512
find avx     noe 12 4 mb       190718 ns       183105 ns          512
find avx tbb     12 4 mb       179952 ns       244141 ns          512
find avx tbb noe 12 4 mb       158043 ns       183105 ns          512
find             12 4 mb       777328 ns       701904 ns          512
find         noe 12 4 mb       769581 ns       762939 ns          512
find     tbb     12 4 mb       203313 ns       305176 ns          512
find     tbb noe 12 4 mb       175056 ns       183105 ns          512
find avx         24 4 mb       211484 ns       244141 ns          512
find avx     noe 24 4 mb       205074 ns       183105 ns          512
find avx tbb     24 4 mb       173733 ns       152588 ns          512
find avx tbb noe 24 4 mb       159941 ns       183105 ns          512
find             24 4 mb       414138 ns       427246 ns          512
find         noe 24 4 mb       408996 ns       488281 ns          512
find     tbb     24 4 mb       192259 ns       183105 ns          512
find     tbb noe 24 4 mb       167880 ns       122070 ns          512

scan avx         06 4 mb      2705126 ns      2716064 ns          512
scan avx     noe 06 4 mb      2713170 ns      2685547 ns          512
scan avx tbb     06 4 mb       607037 ns       671387 ns          512
scan avx tbb noe 06 4 mb       587143 ns       549316 ns          512
scan             06 4 mb      2705816 ns      2685547 ns          512
scan         noe 06 4 mb      2698849 ns      2716064 ns          512
scan     tbb     06 4 mb       586406 ns       549316 ns          512
scan     tbb noe 06 4 mb       588320 ns       640869 ns          512
scan avx         12 4 mb      2709128 ns      2685547 ns          512
scan avx     noe 12 4 mb      2703622 ns      2716064 ns          512
scan avx tbb     12 4 mb       604756 ns       671387 ns          512
scan avx tbb noe 12 4 mb       586705 ns       640869 ns          512
scan             12 4 mb      2708542 ns      2685547 ns          512
scan         noe 12 4 mb      2701215 ns      2685547 ns          512
scan     tbb     12 4 mb       585915 ns       610352 ns          512
scan     tbb noe 12 4 mb       587001 ns       610352 ns          512
scan avx         24 4 mb      2709941 ns      2716064 ns          512
scan avx     noe 24 4 mb      2703900 ns      2746582 ns          512
scan avx tbb     24 4 mb       603270 ns       671387 ns          512
scan avx tbb noe 24 4 mb       587255 ns       427246 ns          512
scan             24 4 mb      2704145 ns      2716064 ns          512
scan         noe 24 4 mb      2695091 ns      2655029 ns          512
scan     tbb     24 4 mb       585108 ns       640869 ns          512
scan     tbb noe 24 4 mb       587234 ns       488281 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      792283 ns       488281 ns           64
find avx     noe 06 16 mb      764386 ns       976562 ns           64
find avx tbb     06 16 mb      634542 ns       732422 ns           64
find avx tbb noe 06 16 mb      628109 ns       244141 ns           64
find             06 16 mb     6126633 ns      6103516 ns           64
find         noe 06 16 mb     6051086 ns      6347656 ns           64
find     tbb     06 16 mb      802836 ns       976562 ns           64
find     tbb noe 06 16 mb      795639 ns       732422 ns           64
find avx         12 16 mb      789895 ns       244141 ns           64
find avx     noe 12 16 mb      765825 ns       488281 ns           64
find avx tbb     12 16 mb      642214 ns      1220703 ns           64
find avx tbb noe 12 16 mb      629264 ns       732422 ns           64
find             12 16 mb     3665142 ns      3417969 ns           64
find         noe 12 16 mb     3071478 ns      3173828 ns           64
find     tbb     12 16 mb      714700 ns       732422 ns           64
find     tbb noe 12 16 mb      692217 ns        0.000 ns           64
find avx         24 16 mb      849837 ns      1220703 ns           64
find avx     noe 24 16 mb      824423 ns       488281 ns           64
find avx tbb     24 16 mb      651786 ns      1220703 ns           64
find avx tbb noe 24 16 mb      635180 ns       488281 ns           64
find             24 16 mb     1714692 ns      1220703 ns           64
find         noe 24 16 mb     1644433 ns      1220703 ns           64
find     tbb     24 16 mb      687233 ns       244141 ns           64
find     tbb noe 24 16 mb      676717 ns       732422 ns           64

scan avx         06 16 mb    10916825 ns     10986328 ns           64
scan avx     noe 06 16 mb    10811500 ns     10498047 ns           64
scan avx tbb     06 16 mb     2215986 ns      2441406 ns           64
scan avx tbb noe 06 16 mb     2178473 ns      2441406 ns           64
scan             06 16 mb    10825352 ns     10498047 ns           64
scan         noe 06 16 mb    10789348 ns     10253906 ns           64
scan     tbb     06 16 mb     2166725 ns      1708984 ns           64
scan     tbb noe 06 16 mb     2171663 ns      2929688 ns           64
scan avx         12 16 mb    10844595 ns     10986328 ns           64
scan avx     noe 12 16 mb    10800025 ns     10742188 ns           64
scan avx tbb     12 16 mb     2261950 ns      1953125 ns           64
scan avx tbb noe 12 16 mb     2190258 ns      2685547 ns           64
scan             12 16 mb    10816659 ns     10986328 ns           64
scan         noe 12 16 mb    10782937 ns     10009766 ns           64
scan     tbb     12 16 mb     2186642 ns      1953125 ns           64
scan     tbb noe 12 16 mb     2180319 ns      1708984 ns           64
scan avx         24 16 mb    10835441 ns     11474609 ns           64
scan avx     noe 24 16 mb    10782961 ns     10742188 ns           64
scan avx tbb     24 16 mb     2229345 ns      2197266 ns           64
scan avx tbb noe 24 16 mb     2186139 ns      2197266 ns           64
scan             24 16 mb    10911364 ns     10986328 ns           64
scan         noe 24 16 mb    10797948 ns     10986328 ns           64
scan     tbb     24 16 mb     2182066 ns      2197266 ns           64
scan     tbb noe 24 16 mb     2165712 ns      3173828 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3088153 ns       976562 ns           32
find avx     noe 06 64 mb     3064894 ns        0.000 ns           32
find avx tbb     06 64 mb     2384556 ns      1953125 ns           32
find avx tbb noe 06 64 mb     2388803 ns      1953125 ns           32
find             06 64 mb    24093472 ns     24414062 ns           32
find         noe 06 64 mb    24119922 ns     24414062 ns           32
find     tbb     06 64 mb     2826700 ns      1464844 ns           32
find     tbb noe 06 64 mb     2816184 ns      6835938 ns           32
find avx         12 64 mb     3069812 ns        0.000 ns           32
find avx     noe 12 64 mb     3065541 ns      3906250 ns           32
find avx tbb     12 64 mb     2392706 ns      2441406 ns           32
find avx tbb noe 12 64 mb     2386691 ns      2441406 ns           32
find             12 64 mb    12314472 ns     12695312 ns           32
find         noe 12 64 mb    12281494 ns     12695312 ns           32
find     tbb     12 64 mb     2541503 ns      2929688 ns           32
find     tbb noe 12 64 mb     2541647 ns      2441406 ns           32
find avx         24 64 mb     3337662 ns      2441406 ns           32
find avx     noe 24 64 mb     3339094 ns      3417969 ns           32
find avx tbb     24 64 mb     2406025 ns      2441406 ns           32
find avx tbb noe 24 64 mb     2398837 ns      1953125 ns           32
find             24 64 mb     6621062 ns      6835938 ns           32
find         noe 24 64 mb     6517778 ns      6835938 ns           32
find     tbb     24 64 mb     2466091 ns      1953125 ns           32
find     tbb noe 24 64 mb     2469394 ns      2441406 ns           32

scan avx         06 64 mb    43190444 ns     43457031 ns           32
scan avx     noe 06 64 mb    43200350 ns     42968750 ns           32
scan avx tbb     06 64 mb     8556978 ns      7324219 ns           32
scan avx tbb noe 06 64 mb     8747934 ns      8300781 ns           32
scan             06 64 mb    43304687 ns     43457031 ns           32
scan         noe 06 64 mb    43096662 ns     41503906 ns           32
scan     tbb     06 64 mb     8521953 ns      8300781 ns           32
scan     tbb noe 06 64 mb     8678553 ns      8300781 ns           32
scan avx         12 64 mb    43180616 ns     42968750 ns           32
scan avx     noe 12 64 mb    43180259 ns     44433594 ns           32
scan avx tbb     12 64 mb     8615344 ns      8300781 ns           32
scan avx tbb noe 12 64 mb     8675225 ns      8789062 ns           32
scan             12 64 mb    43225156 ns     43457031 ns           32
scan         noe 12 64 mb    43142716 ns     43945312 ns           32
scan     tbb     12 64 mb     8623112 ns      7812500 ns           32
scan     tbb noe 12 64 mb     8720331 ns      8789062 ns           32
scan avx         24 64 mb    43346187 ns     42968750 ns           32
scan avx     noe 24 64 mb    43177453 ns     43457031 ns           32
scan avx tbb     24 64 mb     8631116 ns      8300781 ns           32
scan avx tbb noe 24 64 mb     8673681 ns      8789062 ns           32
scan             24 64 mb    43269366 ns     42480469 ns           32
scan         noe 24 64 mb    43105994 ns     41503906 ns           32
scan     tbb     24 64 mb     8559456 ns      9277344 ns           32
scan     tbb noe 24 64 mb     8774794 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13040837 ns     12695312 ns           16
find avx     noe 06 256 mb   13069794 ns     12695312 ns           16
find avx tbb     06 256 mb    9309294 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9294644 ns      8789062 ns           16
find             06 256 mb   96389225 ns     97656250 ns           16
find         noe 06 256 mb   96337944 ns     96679688 ns           16
find     tbb     06 256 mb   10799069 ns     11718750 ns           16
find     tbb noe 06 256 mb   10825106 ns      9765625 ns           16
find avx         12 256 mb   13074625 ns     15625000 ns           16
find avx     noe 12 256 mb   12997681 ns     11718750 ns           16
find avx tbb     12 256 mb    9303581 ns     10742188 ns           16
find avx tbb noe 12 256 mb    9301937 ns      9765625 ns           16
find             12 256 mb   49041844 ns     48828125 ns           16
find         noe 12 256 mb   49119962 ns     50781250 ns           16
find     tbb     12 256 mb    9688281 ns     11718750 ns           16
find     tbb noe 12 256 mb    9682306 ns      8789062 ns           16
find avx         24 256 mb   13863719 ns     12695312 ns           16
find avx     noe 24 256 mb   13803425 ns     14648438 ns           16
find avx tbb     24 256 mb    9340500 ns      8789062 ns           16
find avx tbb noe 24 256 mb    9335888 ns      9765625 ns           16
find             24 256 mb   26165231 ns     28320312 ns           16
find         noe 24 256 mb   26207169 ns     24414062 ns           16
find     tbb     24 256 mb    9478069 ns      8789062 ns           16
find     tbb noe 24 256 mb    9488606 ns      7812500 ns           16

scan avx         06 256 mb  172485394 ns    171875000 ns           16
scan avx     noe 06 256 mb  172533287 ns    171875000 ns           16
scan avx tbb     06 256 mb   33888894 ns     31250000 ns           16
scan avx tbb noe 06 256 mb   33672862 ns     31250000 ns           16
scan             06 256 mb  172880944 ns    174804688 ns           16
scan         noe 06 256 mb  172716250 ns    171875000 ns           16
scan     tbb     06 256 mb   32745594 ns     31250000 ns           16
scan     tbb noe 06 256 mb   33975544 ns     30273438 ns           16
scan avx         12 256 mb  172637294 ns    171875000 ns           16
scan avx     noe 12 256 mb  172885525 ns    172851562 ns           16
scan avx tbb     12 256 mb   33946887 ns     32226562 ns           16
scan avx tbb noe 12 256 mb   33626456 ns     32226562 ns           16
scan             12 256 mb  172757287 ns    171875000 ns           16
scan         noe 12 256 mb  172709781 ns    171875000 ns           16
scan     tbb     12 256 mb   33057475 ns     32226562 ns           16
scan     tbb noe 12 256 mb   33615650 ns     31250000 ns           16
scan avx         24 256 mb  172703800 ns    171875000 ns           16
scan avx     noe 24 256 mb  172909131 ns    171875000 ns           16
scan avx tbb     24 256 mb   33434713 ns     30273438 ns           16
scan avx tbb noe 24 256 mb   33663738 ns     31250000 ns           16
scan             24 256 mb  172780906 ns    174804688 ns           16
scan         noe 24 256 mb  172806950 ns    171875000 ns           16
scan     tbb     24 256 mb   33584731 ns     32226562 ns           16
scan     tbb noe 24 256 mb   33579431 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26745138 ns     25390625 ns            8
find avx     noe 06 512 mb   26734375 ns     27343750 ns            8
find avx tbb     06 512 mb   18505062 ns     17578125 ns            8
find avx tbb noe 06 512 mb   18534488 ns     17578125 ns            8
find             06 512 mb  192797237 ns    191406250 ns            8
find         noe 06 512 mb  192907838 ns    195312500 ns            8
find     tbb     06 512 mb   21309988 ns     15625000 ns            8
find     tbb noe 06 512 mb   21288338 ns     19531250 ns            8
find avx         12 512 mb   26648287 ns     27343750 ns            8
find avx     noe 12 512 mb   27672738 ns     27343750 ns            8
find avx tbb     12 512 mb   18550800 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18510463 ns     17578125 ns            8
find             12 512 mb   98158262 ns    101562500 ns            8
find         noe 12 512 mb   98243425 ns     97656250 ns            8
find     tbb     12 512 mb   19243925 ns     19531250 ns            8
find     tbb noe 12 512 mb   19206138 ns     21484375 ns            8
find avx         24 512 mb   29448963 ns     29296875 ns            8
find avx     noe 24 512 mb   28293850 ns     27343750 ns            8
find avx tbb     24 512 mb   18599112 ns     15625000 ns            8
find avx tbb noe 24 512 mb   18559900 ns     17578125 ns            8
find             24 512 mb   52073775 ns     52734375 ns            8
find         noe 24 512 mb   51986387 ns     52734375 ns            8
find     tbb     24 512 mb   18906812 ns     19531250 ns            8
find     tbb noe 24 512 mb   18856287 ns     19531250 ns            8

scan avx         06 512 mb  345276738 ns    343750000 ns            8
scan avx     noe 06 512 mb  345868337 ns    345703125 ns            8
scan avx tbb     06 512 mb   68465937 ns     62500000 ns            8
scan avx tbb noe 06 512 mb   68515138 ns     58593750 ns            8
scan             06 512 mb  345407675 ns    343750000 ns            8
scan         noe 06 512 mb  344753338 ns    343750000 ns            8
scan     tbb     06 512 mb   65675987 ns     62500000 ns            8
scan     tbb noe 06 512 mb   68308300 ns     60546875 ns            8
scan avx         12 512 mb  345038288 ns    345703125 ns            8
scan avx     noe 12 512 mb  345075012 ns    347656250 ns            8
scan avx tbb     12 512 mb   67488600 ns     58593750 ns            8
scan avx tbb noe 12 512 mb   67608487 ns     62500000 ns            8
scan             12 512 mb  345254512 ns    343750000 ns            8
scan         noe 12 512 mb  345096563 ns    343750000 ns            8
scan     tbb     12 512 mb   67672862 ns     62500000 ns            8
scan     tbb noe 12 512 mb   68630400 ns     62500000 ns            8
scan avx         24 512 mb  345569412 ns    345703125 ns            8
scan avx     noe 24 512 mb  345728388 ns    343750000 ns            8
scan avx tbb     24 512 mb   67696863 ns     60546875 ns            8
scan avx tbb noe 24 512 mb   67729475 ns     58593750 ns            8
scan             24 512 mb  345679325 ns    343750000 ns            8
scan         noe 24 512 mb  345298662 ns    343750000 ns            8
scan     tbb     24 512 mb   65783862 ns     60546875 ns            8
scan     tbb noe 24 512 mb   67849250 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     54336275 ns     52734375 ns            8
find avx     noe 06 1 gb     54146075 ns     56640625 ns            8
find avx tbb     06 1 gb     36915950 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36945662 ns     39062500 ns            8
find             06 1 gb    385303625 ns    386718750 ns            8
find         noe 06 1 gb    385632912 ns    384765625 ns            8
find     tbb     06 1 gb     42262600 ns     39062500 ns            8
find     tbb noe 06 1 gb     42297750 ns     41015625 ns            8
find avx         12 1 gb     54203387 ns     52734375 ns            8
find avx     noe 12 1 gb     54286712 ns     54687500 ns            8
find avx tbb     12 1 gb     36937037 ns     37109375 ns            8
find avx tbb noe 12 1 gb     36934463 ns     35156250 ns            8
find             12 1 gb    196656275 ns    197265625 ns            8
find         noe 12 1 gb    196532075 ns    195312500 ns            8
find     tbb     12 1 gb     38217575 ns     33203125 ns            8
find     tbb noe 12 1 gb     38442962 ns     35156250 ns            8
find avx         24 1 gb     57070562 ns     56640625 ns            8
find avx     noe 24 1 gb     57127900 ns     58593750 ns            8
find avx tbb     24 1 gb     37038875 ns     35156250 ns            8
find avx tbb noe 24 1 gb     37023775 ns     33203125 ns            8
find             24 1 gb    104080063 ns    105468750 ns            8
find         noe 24 1 gb    104123037 ns    103515625 ns            8
find     tbb     24 1 gb     37546687 ns     39062500 ns            8
find     tbb noe 24 1 gb     37552487 ns     37109375 ns            8

scan avx         06 1 gb    690414262 ns    689453125 ns            8
scan avx     noe 06 1 gb    691581413 ns    691406250 ns            8
scan avx tbb     06 1 gb    137405100 ns    123046875 ns            8
scan avx tbb noe 06 1 gb    137291213 ns    117187500 ns            8
scan             06 1 gb    690687162 ns    691406250 ns            8
scan         noe 06 1 gb    691111725 ns    693359375 ns            8
scan     tbb     06 1 gb    135308600 ns    117187500 ns            8
scan     tbb noe 06 1 gb    138820388 ns    117187500 ns            8
scan avx         12 1 gb    690717775 ns    691406250 ns            8
scan avx     noe 12 1 gb    691829175 ns    691406250 ns            8
scan avx tbb     12 1 gb    136377375 ns    123046875 ns            8
scan avx tbb noe 12 1 gb    137431138 ns    119140625 ns            8
scan             12 1 gb    691013025 ns    689453125 ns            8
scan         noe 12 1 gb    690830700 ns    693359375 ns            8
scan     tbb     12 1 gb    132487912 ns    119140625 ns            8
scan     tbb noe 12 1 gb    135472225 ns    121093750 ns            8
scan avx         24 1 gb    690647787 ns    689453125 ns            8
scan avx     noe 24 1 gb    691169238 ns    689453125 ns            8
scan avx tbb     24 1 gb    137004087 ns    119140625 ns            8
scan avx tbb noe 24 1 gb    139100025 ns    119140625 ns            8
scan             24 1 gb    690767163 ns    691406250 ns            8
scan         noe 24 1 gb    690780862 ns    691406250 ns            8
scan     tbb     24 1 gb    133763925 ns    125000000 ns            8
scan     tbb noe 24 1 gb    135390912 ns    117187500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    109128950 ns    109375000 ns            8
find avx     noe 06 2 gb    109290600 ns    109375000 ns            8
find avx tbb     06 2 gb     73825625 ns     72265625 ns            8
find avx tbb noe 06 2 gb     73857550 ns     70312500 ns            8
find             06 2 gb    771222050 ns    773437500 ns            8
find         noe 06 2 gb    771349062 ns    771484375 ns            8
find     tbb     06 2 gb     84674450 ns     74218750 ns            8
find     tbb noe 06 2 gb     84855600 ns     72265625 ns            8
find avx         12 2 gb    108962625 ns    109375000 ns            8
find avx     noe 12 2 gb    109404450 ns    111328125 ns            8
find avx tbb     12 2 gb     73895988 ns     70312500 ns            8
find avx tbb noe 12 2 gb     73832887 ns     74218750 ns            8
find             12 2 gb    392544225 ns    392578125 ns            8
find         noe 12 2 gb    392630437 ns    392578125 ns            8
find     tbb     12 2 gb     76498100 ns     72265625 ns            8
find     tbb noe 12 2 gb     76441000 ns     70312500 ns            8
find avx         24 2 gb    115080662 ns    115234375 ns            8
find avx     noe 24 2 gb    115257962 ns    115234375 ns            8
find avx tbb     24 2 gb     74103937 ns     70312500 ns            8
find avx tbb noe 24 2 gb     74020812 ns     68359375 ns            8
find             24 2 gb    208106000 ns    207031250 ns            8
find         noe 24 2 gb    207586412 ns    207031250 ns            8
find     tbb     24 2 gb     74975150 ns     78125000 ns            8
find     tbb noe 24 2 gb     75003087 ns     74218750 ns            8

scan avx         06 2 gb   1379936213 ns   1380859375 ns            8
scan avx     noe 06 2 gb   1379010400 ns   1380859375 ns            8
scan avx tbb     06 2 gb    272178038 ns    234375000 ns            8
scan avx tbb noe 06 2 gb    270791150 ns    238281250 ns            8
scan             06 2 gb   1381765475 ns   1382812500 ns            8
scan         noe 06 2 gb   1381073938 ns   1382812500 ns            8
scan     tbb     06 2 gb    267807437 ns    236328125 ns            8
scan     tbb noe 06 2 gb    267646238 ns    236328125 ns            8
scan avx         12 2 gb   1381893000 ns   1382812500 ns            8
scan avx     noe 12 2 gb   1381892600 ns   1384765625 ns            8
scan avx tbb     12 2 gb    270830300 ns    240234375 ns            8
scan avx tbb noe 12 2 gb    273144112 ns    240234375 ns            8
scan             12 2 gb   1381307037 ns   1378906250 ns            8
scan         noe 12 2 gb   1381841025 ns   1380859375 ns            8
scan     tbb     12 2 gb    270934275 ns    244140625 ns            8
scan     tbb noe 12 2 gb    271653587 ns    242187500 ns            8
scan avx         24 2 gb   1382269950 ns   1384765625 ns            8
scan avx     noe 24 2 gb   1384841062 ns   1386718750 ns            8
scan avx tbb     24 2 gb    274685850 ns    240234375 ns            8
scan avx tbb noe 24 2 gb    269368325 ns    236328125 ns            8
scan             24 2 gb   1380588588 ns   1378906250 ns            8
scan         noe 24 2 gb   1382245987 ns   1380859375 ns            8
scan     tbb     24 2 gb    265537975 ns    240234375 ns            8
scan     tbb noe 24 2 gb    273672363 ns    238281250 ns            8
```

</details>
