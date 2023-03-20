# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83388 ns        91553 ns         2048
data |  6 |     tbb |       19173 ns        30518 ns         2048
mask |  6 |         |      125819 ns        99182 ns         2048
mask |  6 |     tbb |       32717 ns        45776 ns         2048

data | 12 |         |       44995 ns        45776 ns         2048
data | 12 |     tbb |       14582 ns        22888 ns         2048
mask | 12 |         |      126765 ns       129700 ns         2048
mask | 12 |     tbb |       33085 ns        45776 ns         2048

data | 24 |         |       23610 ns        30518 ns         2048
data | 24 |     tbb |       11942 ns        15259 ns         2048
mask | 24 |         |      124484 ns       129700 ns         2048
mask | 24 |     tbb |       33002 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       16838 ns        15259 ns         1024
data |  6 | avx tbb |       13848 ns        15259 ns         1024
mask |  6 | avx     |       19097 ns        30518 ns         1024
mask |  6 | avx tbb |       13169 ns        0.000 ns         1024

data | 12 | avx     |       17511 ns        15259 ns         1024
data | 12 | avx tbb |       13295 ns        30518 ns         1024
mask | 12 | avx     |       18879 ns        0.000 ns         1024
mask | 12 | avx tbb |       13456 ns        15259 ns         1024

data | 24 | avx     |       17105 ns        15259 ns         1024
data | 24 | avx tbb |       13359 ns        30518 ns         1024
mask | 24 | avx     |       18564 ns        15259 ns         1024
mask | 24 | avx tbb |       12916 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      420106 ns       396729 ns         1024
data |  6 | avx     |       26126 ns        15259 ns         1024
data |  6 |     tbb |       54145 ns        61035 ns         1024
data |  6 | avx tbb |       17372 ns        45776 ns         1024
mask |  6 |         |      623153 ns       625610 ns         1024
mask |  6 | avx     |       29099 ns        45776 ns         1024
mask |  6 |     tbb |      132745 ns       152588 ns         1024
mask |  6 | avx tbb |       17462 ns        0.000 ns         1024

data | 12 |         |      215021 ns       213623 ns         1024
data | 12 | avx     |       26763 ns        45776 ns         1024
data | 12 |     tbb |       32057 ns        30518 ns         1024
data | 12 | avx tbb |       17816 ns        30518 ns         1024
mask | 12 |         |      635795 ns       656128 ns         1024
mask | 12 | avx     |       28964 ns        30518 ns         1024
mask | 12 |     tbb |      132429 ns       122070 ns         1024
mask | 12 | avx tbb |       17196 ns        15259 ns         1024

data | 24 |         |      110606 ns       122070 ns         1024
data | 24 | avx     |       26847 ns        45776 ns         1024
data | 24 |     tbb |       22478 ns        45776 ns         1024
data | 24 | avx tbb |       19408 ns        15259 ns         1024
mask | 24 |         |      632283 ns       640869 ns         1024
mask | 24 | avx     |       29398 ns        30518 ns         1024
mask | 24 |     tbb |      133057 ns        76294 ns         1024
mask | 24 | avx tbb |       17424 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1688171 ns      1739502 ns          512
data |  6 | avx     |      193251 ns       183105 ns          512
data |  6 |     tbb |      244135 ns       213623 ns          512
data |  6 | avx tbb |      158641 ns       183105 ns          512
mask |  6 |         |     2499984 ns      2563477 ns          512
mask |  6 | avx     |      200879 ns       213623 ns          512
mask |  6 |     tbb |      548675 ns       579834 ns          512
mask |  6 | avx tbb |      158878 ns       183105 ns          512

data | 12 |         |      857038 ns       946045 ns          512
data | 12 | avx     |      193859 ns       213623 ns          512
data | 12 |     tbb |      206308 ns       183105 ns          512
data | 12 | avx tbb |      159359 ns       152588 ns          512
mask | 12 |         |     2514262 ns      2380371 ns          512
mask | 12 | avx     |      198766 ns       213623 ns          512
mask | 12 |     tbb |      550614 ns       640869 ns          512
mask | 12 | avx tbb |      159088 ns       213623 ns          512

data | 24 |         |      450254 ns       396729 ns          512
data | 24 | avx     |      200960 ns       213623 ns          512
data | 24 |     tbb |      191484 ns       152588 ns          512
data | 24 | avx tbb |      161496 ns       244141 ns          512
mask | 24 |         |     2498717 ns      2471924 ns          512
mask | 24 | avx     |      199976 ns       213623 ns          512
mask | 24 |     tbb |      550787 ns       579834 ns          512
mask | 24 | avx tbb |      160770 ns       122070 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6816606 ns      6591797 ns           64
data |  6 | avx     |      793958 ns       976562 ns           64
data |  6 |     tbb |      850187 ns       976562 ns           64
data |  6 | avx tbb |      633036 ns       732422 ns           64
mask |  6 |         |    10027225 ns     10498047 ns           64
mask |  6 | avx     |      804205 ns      1464844 ns           64
mask |  6 |     tbb |     2070319 ns      2685547 ns           64
mask |  6 | avx tbb |      631398 ns       488281 ns           64

data | 12 |         |     3462253 ns      3173828 ns           64
data | 12 | avx     |      803917 ns      1464844 ns           64
data | 12 |     tbb |      721213 ns      1220703 ns           64
data | 12 | avx tbb |      632631 ns       244141 ns           64
mask | 12 |         |    10043714 ns      9765625 ns           64
mask | 12 | avx     |      790816 ns       732422 ns           64
mask | 12 |     tbb |     2053294 ns       976562 ns           64
mask | 12 | avx tbb |      621542 ns       732422 ns           64

data | 24 |         |     1865131 ns      2441406 ns           64
data | 24 | avx     |      793830 ns       732422 ns           64
data | 24 |     tbb |      682767 ns       488281 ns           64
data | 24 | avx tbb |      634567 ns       488281 ns           64
mask | 24 |         |    10041617 ns     10498047 ns           64
mask | 24 | avx     |      792439 ns       244141 ns           64
mask | 24 |     tbb |     2085362 ns      1708984 ns           64
mask | 24 | avx tbb |      630284 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26787275 ns     29296875 ns           32
data |  6 | avx     |     3201850 ns       976562 ns           32
data |  6 |     tbb |     2997666 ns        0.000 ns           32
data |  6 | avx tbb |     2391209 ns      1953125 ns           32
mask |  6 |         |    39722400 ns     39062500 ns           32
mask |  6 | avx     |     3197731 ns      3906250 ns           32
mask |  6 |     tbb |     7795072 ns      8300781 ns           32
mask |  6 | avx tbb |     2384772 ns      3906250 ns           32

data | 12 |         |    13608459 ns     14648438 ns           32
data | 12 | avx     |     3238372 ns      3906250 ns           32
data | 12 |     tbb |     2555963 ns      1953125 ns           32
data | 12 | avx tbb |     2381384 ns      1953125 ns           32
mask | 12 |         |    39686522 ns     39062500 ns           32
mask | 12 | avx     |     3230753 ns      3906250 ns           32
mask | 12 |     tbb |     7848366 ns      8789062 ns           32
mask | 12 | avx tbb |     2387253 ns      1953125 ns           32

data | 24 |         |     7305509 ns      8300781 ns           32
data | 24 | avx     |     3123625 ns      1953125 ns           32
data | 24 |     tbb |     2468331 ns      2441406 ns           32
data | 24 | avx tbb |     2392606 ns      1953125 ns           32
mask | 24 |         |    39688206 ns     39062500 ns           32
mask | 24 | avx     |     3138959 ns       976562 ns           32
mask | 24 |     tbb |     7958153 ns      7812500 ns           32
mask | 24 | avx tbb |     2376097 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106530087 ns    106445312 ns           16
data |  6 | avx     |    12856537 ns     10742188 ns           16
data |  6 |     tbb |    11512825 ns      5859375 ns           16
data |  6 | avx tbb |     9313281 ns      9765625 ns           16
mask |  6 |         |   159294937 ns    161132812 ns           16
mask |  6 | avx     |    13512237 ns     13671875 ns           16
mask |  6 |     tbb |    31354087 ns     29296875 ns           16
mask |  6 | avx tbb |     9312300 ns     10742188 ns           16

data | 12 |         |    54310962 ns     54687500 ns           16
data | 12 | avx     |    12879825 ns     12695312 ns           16
data | 12 |     tbb |     9760975 ns     10742188 ns           16
data | 12 | avx tbb |     9306906 ns      9765625 ns           16
mask | 12 |         |   160076463 ns    162109375 ns           16
mask | 12 | avx     |    12919319 ns     13671875 ns           16
mask | 12 |     tbb |    30765300 ns     28320312 ns           16
mask | 12 | avx tbb |     9396544 ns      8789062 ns           16

data | 24 |         |    28465612 ns     27343750 ns           16
data | 24 | avx     |    12619781 ns     13671875 ns           16
data | 24 |     tbb |     9502856 ns     11718750 ns           16
data | 24 | avx tbb |     9338444 ns      8789062 ns           16
mask | 24 |         |   159213637 ns    158203125 ns           16
mask | 24 | avx     |    12856756 ns     11718750 ns           16
mask | 24 |     tbb |    31268806 ns     29296875 ns           16
mask | 24 | avx tbb |     9307819 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212729825 ns    214843750 ns            8
data |  6 | avx     |    25720262 ns     27343750 ns            8
data |  6 |     tbb |    22811462 ns     15625000 ns            8
data |  6 | avx tbb |    18565150 ns     17578125 ns            8
mask |  6 |         |   318624562 ns    320312500 ns            8
mask |  6 | avx     |    25649875 ns     23437500 ns            8
mask |  6 |     tbb |    60261962 ns     60546875 ns            8
mask |  6 | avx tbb |    18544650 ns     17578125 ns            8

data | 12 |         |   110248613 ns    109375000 ns            8
data | 12 | avx     |    25769975 ns     27343750 ns            8
data | 12 |     tbb |    19432325 ns     17578125 ns            8
data | 12 | avx tbb |    18514300 ns     17578125 ns            8
mask | 12 |         |   319664800 ns    318359375 ns            8
mask | 12 | avx     |    25640825 ns     23437500 ns            8
mask | 12 |     tbb |    62233650 ns     54687500 ns            8
mask | 12 | avx tbb |    18553450 ns     21484375 ns            8

data | 24 |         |    56972788 ns     56640625 ns            8
data | 24 | avx     |    25925950 ns     25390625 ns            8
data | 24 |     tbb |    19329012 ns     19531250 ns            8
data | 24 | avx tbb |    18561938 ns     19531250 ns            8
mask | 24 |         |   318137400 ns    324218750 ns            8
mask | 24 | avx     |    25750762 ns     25390625 ns            8
mask | 24 |     tbb |    62491113 ns     52734375 ns            8
mask | 24 | avx tbb |    18893825 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425608100 ns    421875000 ns            8
data |  6 | avx     |    53628675 ns     54687500 ns            8
data |  6 |     tbb |    45561650 ns     44921875 ns            8
data |  6 | avx tbb |    36918913 ns     37109375 ns            8
mask |  6 |         |   635987138 ns    636718750 ns            8
mask |  6 | avx     |    51430525 ns     52734375 ns            8
mask |  6 |     tbb |   124980050 ns    109375000 ns            8
mask |  6 | avx tbb |    36953862 ns     41015625 ns            8

data | 12 |         |   218549750 ns    220703125 ns            8
data | 12 | avx     |    53471325 ns     52734375 ns            8
data | 12 |     tbb |    38726225 ns     37109375 ns            8
data | 12 | avx tbb |    37017300 ns     37109375 ns            8
mask | 12 |         |   635700163 ns    632812500 ns            8
mask | 12 | avx     |    51665138 ns     54687500 ns            8
mask | 12 |     tbb |   125501775 ns    109375000 ns            8
mask | 12 | avx tbb |    36965688 ns     35156250 ns            8

data | 24 |         |   114095600 ns    109375000 ns            8
data | 24 | avx     |    51479950 ns     52734375 ns            8
data | 24 |     tbb |    37783400 ns     35156250 ns            8
data | 24 | avx tbb |    37652937 ns     39062500 ns            8
mask | 24 |         |   636554488 ns    634765625 ns            8
mask | 24 | avx     |    51468375 ns     46875000 ns            8
mask | 24 |     tbb |   126213462 ns    109375000 ns            8
mask | 24 | avx tbb |    36928212 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   852071350 ns    845703125 ns            8
data |  6 | avx     |   103020175 ns     95703125 ns            8
data |  6 |     tbb |    90652625 ns     78125000 ns            8
data |  6 | avx tbb |    73954863 ns     70312500 ns            8
mask |  6 |         |  1274229612 ns   1273437500 ns            8
mask |  6 | avx     |   103261475 ns     99609375 ns            8
mask |  6 |     tbb |   243319000 ns    224609375 ns            8
mask |  6 | avx tbb |    74619825 ns     72265625 ns            8

data | 12 |         |   434320388 ns    429687500 ns            8
data | 12 | avx     |   105325212 ns    107421875 ns            8
data | 12 |     tbb |    77134837 ns     66406250 ns            8
data | 12 | avx tbb |    74087438 ns     70312500 ns            8
mask | 12 |         |  1272337788 ns   1271484375 ns            8
mask | 12 | avx     |   103226563 ns    101562500 ns            8
mask | 12 |     tbb |   241007512 ns    210937500 ns            8
mask | 12 | avx tbb |    73913000 ns     72265625 ns            8

data | 24 |         |   227782338 ns    226562500 ns            8
data | 24 | avx     |   102846975 ns     99609375 ns            8
data | 24 |     tbb |    76469575 ns     74218750 ns            8
data | 24 | avx tbb |    73964412 ns     68359375 ns            8
mask | 24 |         |  1268399000 ns   1265625000 ns            8
mask | 24 | avx     |   103220287 ns    109375000 ns            8
mask | 24 |     tbb |   248828813 ns    212890625 ns            8
mask | 24 | avx tbb |    74142825 ns     74218750 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75881 ns        76294 ns         2048
data |  6 |     tbb |       18506 ns        30518 ns         2048
mask |  6 |         |      114782 ns       106812 ns         2048
mask |  6 |     tbb |       30683 ns        15259 ns         2048

data | 12 |         |       38852 ns        45776 ns         2048
data | 12 |     tbb |       14028 ns        15259 ns         2048
mask | 12 |         |      114461 ns       114441 ns         2048
mask | 12 |     tbb |       31787 ns        22888 ns         2048

data | 24 |         |       20543 ns        30518 ns         2048
data | 24 |     tbb |       11469 ns         7629 ns         2048
mask | 24 |         |      115729 ns       122070 ns         2048
mask | 24 |     tbb |       31414 ns        22888 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19027 ns        15259 ns         1024
data |  6 | avx tbb |       13638 ns        30518 ns         1024
mask |  6 | avx     |       17507 ns        30518 ns         1024
mask |  6 | avx tbb |       12672 ns        0.000 ns         1024

data | 12 | avx     |       19194 ns        15259 ns         1024
data | 12 | avx tbb |       13247 ns        30518 ns         1024
mask | 12 | avx     |       17967 ns        15259 ns         1024
mask | 12 | avx tbb |       13260 ns        15259 ns         1024

data | 24 | avx     |       19060 ns        15259 ns         1024
data | 24 | avx tbb |       13885 ns        30518 ns         1024
mask | 24 | avx     |       18077 ns        0.000 ns         1024
mask | 24 | avx tbb |       13269 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      380885 ns       366211 ns         1024
data |  6 | avx     |       29080 ns        30518 ns         1024
data |  6 |     tbb |       49117 ns        30518 ns         1024
data |  6 | avx tbb |       18466 ns        45776 ns         1024
mask |  6 |         |      566154 ns       595093 ns         1024
mask |  6 | avx     |       27411 ns        15259 ns         1024
mask |  6 |     tbb |      121737 ns       122070 ns         1024
mask |  6 | avx tbb |       16663 ns        30518 ns         1024

data | 12 |         |      193141 ns       183105 ns         1024
data | 12 | avx     |       29111 ns        0.000 ns         1024
data | 12 |     tbb |       30250 ns        15259 ns         1024
data | 12 | avx tbb |       17536 ns        0.000 ns         1024
mask | 12 |         |      566851 ns       564575 ns         1024
mask | 12 | avx     |       27432 ns        45776 ns         1024
mask | 12 |     tbb |      123356 ns       137329 ns         1024
mask | 12 | avx tbb |       16992 ns        15259 ns         1024

data | 24 |         |       99528 ns        91553 ns         1024
data | 24 | avx     |       29165 ns        45776 ns         1024
data | 24 |     tbb |       22313 ns        61035 ns         1024
data | 24 | avx tbb |       17981 ns        15259 ns         1024
mask | 24 |         |      567744 ns       579834 ns         1024
mask | 24 | avx     |       27572 ns        30518 ns         1024
mask | 24 |     tbb |      122745 ns       122070 ns         1024
mask | 24 | avx tbb |       17268 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1519781 ns      1586914 ns          512
data |  6 | avx     |      193732 ns       183105 ns          512
data |  6 |     tbb |      230913 ns       274658 ns          512
data |  6 | avx tbb |      158885 ns       152588 ns          512
mask |  6 |         |     2269473 ns      2197266 ns          512
mask |  6 | avx     |      199364 ns       213623 ns          512
mask |  6 |     tbb |      509704 ns       457764 ns          512
mask |  6 | avx tbb |      159333 ns        91553 ns          512

data | 12 |         |      778642 ns       701904 ns          512
data | 12 | avx     |      193224 ns       183105 ns          512
data | 12 |     tbb |      203780 ns       244141 ns          512
data | 12 | avx tbb |      161463 ns       122070 ns          512
mask | 12 |         |     2277564 ns      2258301 ns          512
mask | 12 | avx     |      198667 ns        91553 ns          512
mask | 12 |     tbb |      506260 ns       549316 ns          512
mask | 12 | avx tbb |      158980 ns        61035 ns          512

data | 24 |         |      418141 ns       457764 ns          512
data | 24 | avx     |      193899 ns       244141 ns          512
data | 24 |     tbb |      196083 ns       152588 ns          512
data | 24 | avx tbb |      159540 ns       183105 ns          512
mask | 24 |         |     2279786 ns      2197266 ns          512
mask | 24 | avx     |      197359 ns       183105 ns          512
mask | 24 |     tbb |      509530 ns       549316 ns          512
mask | 24 | avx tbb |      159770 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6097550 ns      5859375 ns           64
data |  6 | avx     |      777733 ns       488281 ns           64
data |  6 |     tbb |      806409 ns       244141 ns           64
data |  6 | avx tbb |      631880 ns       732422 ns           64
mask |  6 |         |     9113773 ns      9277344 ns           64
mask |  6 | avx     |      821609 ns      1220703 ns           64
mask |  6 |     tbb |     1888656 ns      1708984 ns           64
mask |  6 | avx tbb |      629988 ns       732422 ns           64

data | 12 |         |     3141305 ns      2197266 ns           64
data | 12 | avx     |      782261 ns       976562 ns           64
data | 12 |     tbb |      714005 ns       732422 ns           64
data | 12 | avx tbb |      631855 ns      1220703 ns           64
mask | 12 |         |     9169309 ns     10009766 ns           64
mask | 12 | avx     |      790583 ns        0.000 ns           64
mask | 12 |     tbb |     1902967 ns      1953125 ns           64
mask | 12 | avx tbb |      639203 ns       488281 ns           64

data | 24 |         |     1678278 ns      1708984 ns           64
data | 24 | avx     |      785684 ns       976562 ns           64
data | 24 |     tbb |      685837 ns       488281 ns           64
data | 24 | avx tbb |      636520 ns       976562 ns           64
mask | 24 |         |     9132220 ns      9521484 ns           64
mask | 24 | avx     |      787137 ns       976562 ns           64
mask | 24 |     tbb |     1908880 ns      1953125 ns           64
mask | 24 | avx tbb |      632647 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24325672 ns     24414062 ns           32
data |  6 | avx     |     3068566 ns      2929688 ns           32
data |  6 |     tbb |     2808884 ns      4394531 ns           32
data |  6 | avx tbb |     2383009 ns      2441406 ns           32
mask |  6 |         |    36082019 ns     36132812 ns           32
mask |  6 | avx     |     3175653 ns      5859375 ns           32
mask |  6 |     tbb |     7127344 ns      6835938 ns           32
mask |  6 | avx tbb |     2375091 ns      2441406 ns           32

data | 12 |         |    12432297 ns     12207031 ns           32
data | 12 | avx     |     3067516 ns      2929688 ns           32
data | 12 |     tbb |     2537984 ns      3906250 ns           32
data | 12 | avx tbb |     2395562 ns      2929688 ns           32
mask | 12 |         |    36077944 ns     36132812 ns           32
mask | 12 | avx     |     3156450 ns      1953125 ns           32
mask | 12 |     tbb |     7110003 ns      6835938 ns           32
mask | 12 | avx tbb |     2380084 ns      2929688 ns           32

data | 24 |         |     6586659 ns      6835938 ns           32
data | 24 | avx     |     3084919 ns        0.000 ns           32
data | 24 |     tbb |     2461447 ns      2929688 ns           32
data | 24 | avx tbb |     2377988 ns      2441406 ns           32
mask | 24 |         |    36207806 ns     35644531 ns           32
mask | 24 | avx     |     3168391 ns      3906250 ns           32
mask | 24 |     tbb |     7247928 ns      7812500 ns           32
mask | 24 | avx tbb |     2372669 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96460025 ns     94726562 ns           16
data |  6 | avx     |    12403181 ns     12695312 ns           16
data |  6 |     tbb |    10773313 ns     10742188 ns           16
data |  6 | avx tbb |     9309837 ns      7812500 ns           16
mask |  6 |         |   144597900 ns    143554688 ns           16
mask |  6 | avx     |    12647819 ns     14648438 ns           16
mask |  6 |     tbb |    28052500 ns     26367188 ns           16
mask |  6 | avx tbb |     9330681 ns      8789062 ns           16

data | 12 |         |    49124800 ns     49804688 ns           16
data | 12 | avx     |    12999606 ns     13671875 ns           16
data | 12 |     tbb |     9701175 ns      9765625 ns           16
data | 12 | avx tbb |     9324744 ns      9765625 ns           16
mask | 12 |         |   144458594 ns    142578125 ns           16
mask | 12 | avx     |    12689737 ns     13671875 ns           16
mask | 12 |     tbb |    28431481 ns     27343750 ns           16
mask | 12 | avx tbb |     9366944 ns      9765625 ns           16

data | 24 |         |    26620469 ns     21484375 ns           16
data | 24 | avx     |    12336288 ns     12695312 ns           16
data | 24 |     tbb |     9516231 ns     10742188 ns           16
data | 24 | avx tbb |     9318881 ns      9765625 ns           16
mask | 24 |         |   144276950 ns    144531250 ns           16
mask | 24 | avx     |    13255069 ns     14648438 ns           16
mask | 24 |     tbb |    28596694 ns     25390625 ns           16
mask | 24 | avx tbb |     9315406 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192805813 ns    191406250 ns            8
data |  6 | avx     |    24677250 ns     25390625 ns            8
data |  6 |     tbb |    21426850 ns     21484375 ns            8
data |  6 | avx tbb |    18527225 ns     15625000 ns            8
mask |  6 |         |   288881512 ns    294921875 ns            8
mask |  6 | avx     |    25642825 ns     27343750 ns            8
mask |  6 |     tbb |    56996125 ns     48828125 ns            8
mask |  6 | avx tbb |    18519738 ns     15625000 ns            8

data | 12 |         |    99811463 ns     99609375 ns            8
data | 12 | avx     |    25004587 ns     25390625 ns            8
data | 12 |     tbb |    19460625 ns     17578125 ns            8
data | 12 | avx tbb |    18563863 ns     17578125 ns            8
mask | 12 |         |   288666688 ns    287109375 ns            8
mask | 12 | avx     |    25544800 ns     27343750 ns            8
mask | 12 |     tbb |    56462587 ns     52734375 ns            8
mask | 12 | avx tbb |    18540037 ns     17578125 ns            8

data | 24 |         |    52310350 ns     52734375 ns            8
data | 24 | avx     |    24871938 ns     27343750 ns            8
data | 24 |     tbb |    19308350 ns     19531250 ns            8
data | 24 | avx tbb |    18605950 ns     19531250 ns            8
mask | 24 |         |   289167512 ns    291015625 ns            8
mask | 24 | avx     |    25325450 ns     27343750 ns            8
mask | 24 |     tbb |    56027500 ns     46875000 ns            8
mask | 24 | avx tbb |    18551425 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385525238 ns    384765625 ns            8
data |  6 | avx     |    50126825 ns     48828125 ns            8
data |  6 |     tbb |    42616687 ns     44921875 ns            8
data |  6 | avx tbb |    37724512 ns     37109375 ns            8
mask |  6 |         |   576535650 ns    578125000 ns            8
mask |  6 | avx     |    51033125 ns     48828125 ns            8
mask |  6 |     tbb |   113845163 ns    101562500 ns            8
mask |  6 | avx tbb |    37048287 ns     35156250 ns            8

data | 12 |         |   197765300 ns    197265625 ns            8
data | 12 | avx     |    49716587 ns     48828125 ns            8
data | 12 |     tbb |    39312863 ns     37109375 ns            8
data | 12 | avx tbb |    36990200 ns     35156250 ns            8
mask | 12 |         |   577222200 ns    578125000 ns            8
mask | 12 | avx     |    51546325 ns     52734375 ns            8
mask | 12 |     tbb |   114961562 ns     99609375 ns            8
mask | 12 | avx tbb |    36996963 ns     37109375 ns            8

data | 24 |         |   106630700 ns    107421875 ns            8
data | 24 | avx     |    51901725 ns     52734375 ns            8
data | 24 |     tbb |    37630613 ns     35156250 ns            8
data | 24 | avx tbb |    37055913 ns     37109375 ns            8
mask | 24 |         |   577842163 ns    578125000 ns            8
mask | 24 | avx     |    51103675 ns     50781250 ns            8
mask | 24 |     tbb |   115069475 ns    101562500 ns            8
mask | 24 | avx tbb |    37025463 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771523363 ns    771484375 ns            8
data |  6 | avx     |    99289475 ns    101562500 ns            8
data |  6 |     tbb |    85365187 ns     80078125 ns            8
data |  6 | avx tbb |    74001850 ns     70312500 ns            8
mask |  6 |         |  1154726663 ns   1156250000 ns            8
mask |  6 | avx     |   102180863 ns    101562500 ns            8
mask |  6 |     tbb |   219914075 ns    197265625 ns            8
mask |  6 | avx tbb |    73899313 ns     72265625 ns            8

data | 12 |         |   393500325 ns    392578125 ns            8
data | 12 | avx     |    99415288 ns     99609375 ns            8
data | 12 |     tbb |    76702538 ns     74218750 ns            8
data | 12 | avx tbb |    73956038 ns     70312500 ns            8
mask | 12 |         |  1155783175 ns   1156250000 ns            8
mask | 12 | avx     |   101411275 ns    103515625 ns            8
mask | 12 |     tbb |   223151500 ns    197265625 ns            8
mask | 12 | avx tbb |    73892550 ns     72265625 ns            8

data | 24 |         |   209376025 ns    210937500 ns            8
data | 24 | avx     |    99598075 ns     99609375 ns            8
data | 24 |     tbb |    76516787 ns     68359375 ns            8
data | 24 | avx tbb |    74043200 ns     74218750 ns            8
mask | 24 |         |  1153380437 ns   1154296875 ns            8
mask | 24 | avx     |   103115450 ns    105468750 ns            8
mask | 24 |     tbb |   223923250 ns    191406250 ns            8
mask | 24 | avx tbb |    73955450 ns     70312500 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76069 ns        68665 ns         2048
data |  6 |     tbb |       18874 ns         7629 ns         2048
mask |  6 |         |      139345 ns       144958 ns         2048
mask |  6 |     tbb |       34353 ns        45776 ns         2048

data | 12 |         |       39458 ns        38147 ns         2048
data | 12 |     tbb |       13910 ns        22888 ns         2048
mask | 12 |         |      133867 ns       137329 ns         2048
mask | 12 |     tbb |       34463 ns        38147 ns         2048

data | 24 |         |       20689 ns        15259 ns         2048
data | 24 |     tbb |       11992 ns        22888 ns         2048
mask | 24 |         |      137782 ns       137329 ns         2048
mask | 24 |     tbb |       35018 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18810 ns        15259 ns         1024
data |  6 | avx tbb |       13732 ns        45776 ns         1024
mask |  6 | avx     |       17795 ns        30518 ns         1024
mask |  6 | avx tbb |       12749 ns        30518 ns         1024

data | 12 | avx     |       19165 ns        15259 ns         1024
data | 12 | avx tbb |       14253 ns        15259 ns         1024
mask | 12 | avx     |       17693 ns        15259 ns         1024
mask | 12 | avx tbb |       12736 ns        0.000 ns         1024

data | 24 | avx     |       18989 ns        30518 ns         1024
data | 24 | avx tbb |       14289 ns        30518 ns         1024
mask | 24 | avx     |       17701 ns        15259 ns         1024
mask | 24 | avx tbb |       13365 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      382910 ns       411987 ns         1024
data |  6 | avx     |       29182 ns        15259 ns         1024
data |  6 |     tbb |       49458 ns        15259 ns         1024
data |  6 | avx tbb |       18324 ns        45776 ns         1024
mask |  6 |         |      683775 ns       717163 ns         1024
mask |  6 | avx     |       27098 ns        30518 ns         1024
mask |  6 |     tbb |      141900 ns       137329 ns         1024
mask |  6 | avx tbb |       17604 ns        0.000 ns         1024

data | 12 |         |      193440 ns       213623 ns         1024
data | 12 | avx     |       29245 ns        45776 ns         1024
data | 12 |     tbb |       30554 ns        15259 ns         1024
data | 12 | avx tbb |       18021 ns        15259 ns         1024
mask | 12 |         |      702992 ns       686646 ns         1024
mask | 12 | avx     |       27054 ns        45776 ns         1024
mask | 12 |     tbb |      142199 ns       137329 ns         1024
mask | 12 | avx tbb |       17378 ns        45776 ns         1024

data | 24 |         |       97781 ns        76294 ns         1024
data | 24 | avx     |       28932 ns        61035 ns         1024
data | 24 |     tbb |       21665 ns        15259 ns         1024
data | 24 | avx tbb |       19355 ns        0.000 ns         1024
mask | 24 |         |      689302 ns       656128 ns         1024
mask | 24 | avx     |       27371 ns        30518 ns         1024
mask | 24 |     tbb |      142535 ns       183105 ns         1024
mask | 24 | avx tbb |       17111 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1519811 ns      1556396 ns          512
data |  6 | avx     |      192392 ns       213623 ns          512
data |  6 |     tbb |      224781 ns       244141 ns          512
data |  6 | avx tbb |      159316 ns       274658 ns          512
mask |  6 |         |     2719332 ns      2746582 ns          512
mask |  6 | avx     |      197794 ns       244141 ns          512
mask |  6 |     tbb |      586823 ns       640869 ns          512
mask |  6 | avx tbb |      158434 ns       213623 ns          512

data | 12 |         |      785399 ns       854492 ns          512
data | 12 | avx     |      193323 ns       213623 ns          512
data | 12 |     tbb |      207823 ns       152588 ns          512
data | 12 | avx tbb |      159087 ns       122070 ns          512
mask | 12 |         |     2712316 ns      2716064 ns          512
mask | 12 | avx     |      198558 ns       152588 ns          512
mask | 12 |     tbb |      591694 ns       579834 ns          512
mask | 12 | avx tbb |      158192 ns        91553 ns          512

data | 24 |         |      417968 ns       427246 ns          512
data | 24 | avx     |      194015 ns       183105 ns          512
data | 24 |     tbb |      198066 ns       183105 ns          512
data | 24 | avx tbb |      159743 ns       122070 ns          512
mask | 24 |         |     2727786 ns      2746582 ns          512
mask | 24 | avx     |      200674 ns       244141 ns          512
mask | 24 |     tbb |      590742 ns       579834 ns          512
mask | 24 | avx tbb |      158713 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6093623 ns      6103516 ns           64
data |  6 | avx     |      774961 ns      1220703 ns           64
data |  6 |     tbb |      812472 ns       488281 ns           64
data |  6 | avx tbb |      636692 ns       244141 ns           64
mask |  6 |         |    10968067 ns     10742188 ns           64
mask |  6 | avx     |      798761 ns      1464844 ns           64
mask |  6 |     tbb |     2227602 ns      2197266 ns           64
mask |  6 | avx tbb |      620602 ns       488281 ns           64

data | 12 |         |     3150675 ns      2929688 ns           64
data | 12 | avx     |      781316 ns       732422 ns           64
data | 12 |     tbb |      713398 ns       488281 ns           64
data | 12 | avx tbb |      633413 ns       732422 ns           64
mask | 12 |         |    10913844 ns     11230469 ns           64
mask | 12 | avx     |      804461 ns       488281 ns           64
mask | 12 |     tbb |     2182550 ns      2197266 ns           64
mask | 12 | avx tbb |      596967 ns       732422 ns           64

data | 24 |         |     1647736 ns      1708984 ns           64
data | 24 | avx     |      775852 ns       976562 ns           64
data | 24 |     tbb |      689789 ns       976562 ns           64
data | 24 | avx tbb |      635506 ns       488281 ns           64
mask | 24 |         |    10901098 ns     10742188 ns           64
mask | 24 | avx     |      823084 ns       976562 ns           64
mask | 24 |     tbb |     2207608 ns      1953125 ns           64
mask | 24 | avx tbb |      612413 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24237578 ns     23437500 ns           32
data |  6 | avx     |     3067866 ns      7812500 ns           32
data |  6 |     tbb |     2820019 ns        0.000 ns           32
data |  6 | avx tbb |     2452531 ns      3417969 ns           32
mask |  6 |         |    43230675 ns     43457031 ns           32
mask |  6 | avx     |     3238672 ns      2441406 ns           32
mask |  6 |     tbb |     8494759 ns      7324219 ns           32
mask |  6 | avx tbb |     2378600 ns      3417969 ns           32

data | 12 |         |    12506066 ns     12207031 ns           32
data | 12 | avx     |     3129344 ns      3417969 ns           32
data | 12 |     tbb |     2530522 ns      1953125 ns           32
data | 12 | avx tbb |     2462675 ns      1953125 ns           32
mask | 12 |         |    43246556 ns     42968750 ns           32
mask | 12 | avx     |     3162144 ns      2929688 ns           32
mask | 12 |     tbb |     8615403 ns      8300781 ns           32
mask | 12 | avx tbb |     2383337 ns      2929688 ns           32

data | 24 |         |     6658128 ns      6835938 ns           32
data | 24 | avx     |     3145091 ns      2441406 ns           32
data | 24 |     tbb |     2461212 ns      1953125 ns           32
data | 24 | avx tbb |     2390703 ns      1464844 ns           32
mask | 24 |         |    43434663 ns     42480469 ns           32
mask | 24 | avx     |     3174272 ns      3906250 ns           32
mask | 24 |     tbb |     8595384 ns      7812500 ns           32
mask | 24 | avx tbb |     2379294 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96800406 ns     98632812 ns           16
data |  6 | avx     |    12952794 ns     12695312 ns           16
data |  6 |     tbb |    10781450 ns     15625000 ns           16
data |  6 | avx tbb |     9319400 ns      7812500 ns           16
mask |  6 |         |   172835737 ns    171875000 ns           16
mask |  6 | avx     |    13409231 ns     14648438 ns           16
mask |  6 |     tbb |    33075844 ns     32226562 ns           16
mask |  6 | avx tbb |     9335425 ns      8789062 ns           16

data | 12 |         |    49180800 ns     49804688 ns           16
data | 12 | avx     |    12350981 ns     13671875 ns           16
data | 12 |     tbb |     9808638 ns      7812500 ns           16
data | 12 | avx tbb |     9348162 ns      8789062 ns           16
mask | 12 |         |   173810756 ns    172851562 ns           16
mask | 12 | avx     |    13431338 ns     13671875 ns           16
mask | 12 |     tbb |    33425456 ns     32226562 ns           16
mask | 12 | avx tbb |     9369019 ns      9765625 ns           16

data | 24 |         |    26164938 ns     27343750 ns           16
data | 24 | avx     |    12353744 ns     11718750 ns           16
data | 24 |     tbb |     9696700 ns      7812500 ns           16
data | 24 | avx tbb |     9320325 ns      9765625 ns           16
mask | 24 |         |   173019787 ns    171875000 ns           16
mask | 24 | avx     |    12682075 ns     13671875 ns           16
mask | 24 |     tbb |    33451975 ns     32226562 ns           16
mask | 24 | avx tbb |     9305631 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193231200 ns    193359375 ns            8
data |  6 | avx     |    24705663 ns     23437500 ns            8
data |  6 |     tbb |    21400550 ns     15625000 ns            8
data |  6 | avx tbb |    18937888 ns     19531250 ns            8
mask |  6 |         |   345646187 ns    343750000 ns            8
mask |  6 | avx     |    25770263 ns     27343750 ns            8
mask |  6 |     tbb |    66788300 ns     60546875 ns            8
mask |  6 | avx tbb |    18560412 ns     19531250 ns            8

data | 12 |         |    99886262 ns    101562500 ns            8
data | 12 | avx     |    24725837 ns     23437500 ns            8
data | 12 |     tbb |    19322013 ns     19531250 ns            8
data | 12 | avx tbb |    18491450 ns     15625000 ns            8
mask | 12 |         |   346253412 ns    349609375 ns            8
mask | 12 | avx     |    25675362 ns     23437500 ns            8
mask | 12 |     tbb |    67766563 ns     56640625 ns            8
mask | 12 | avx tbb |    18527963 ns     15625000 ns            8

data | 24 |         |    52385675 ns     52734375 ns            8
data | 24 | avx     |    26585350 ns     25390625 ns            8
data | 24 |     tbb |    18904200 ns     17578125 ns            8
data | 24 | avx tbb |    18563075 ns     19531250 ns            8
mask | 24 |         |   346708925 ns    349609375 ns            8
mask | 24 | avx     |    25347325 ns     25390625 ns            8
mask | 24 |     tbb |    67178312 ns     62500000 ns            8
mask | 24 | avx tbb |    18569712 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385600000 ns    386718750 ns            8
data |  6 | avx     |    50100713 ns     50781250 ns            8
data |  6 |     tbb |    42574513 ns     42968750 ns            8
data |  6 | avx tbb |    36978700 ns     37109375 ns            8
mask |  6 |         |   691689125 ns    691406250 ns            8
mask |  6 | avx     |    50909650 ns     50781250 ns            8
mask |  6 |     tbb |   131768563 ns    121093750 ns            8
mask |  6 | avx tbb |    36965125 ns     35156250 ns            8

data | 12 |         |   196890738 ns    199218750 ns            8
data | 12 | avx     |    50143113 ns     50781250 ns            8
data | 12 |     tbb |    39379875 ns     37109375 ns            8
data | 12 | avx tbb |    37033125 ns     39062500 ns            8
mask | 12 |         |   691831813 ns    693359375 ns            8
mask | 12 | avx     |    53674525 ns     54687500 ns            8
mask | 12 |     tbb |   132522700 ns    119140625 ns            8
mask | 12 | avx tbb |    37066925 ns     33203125 ns            8

data | 24 |         |   104825950 ns    105468750 ns            8
data | 24 | avx     |    49671087 ns     48828125 ns            8
data | 24 |     tbb |    38370525 ns     37109375 ns            8
data | 24 | avx tbb |    37056075 ns     39062500 ns            8
mask | 24 |         |   691731637 ns    693359375 ns            8
mask | 24 | avx     |    51364213 ns     50781250 ns            8
mask | 24 |     tbb |   134231925 ns    117187500 ns            8
mask | 24 | avx tbb |    37069625 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   772133838 ns    773437500 ns            8
data |  6 | avx     |   100275350 ns     99609375 ns            8
data |  6 |     tbb |    85467875 ns     76171875 ns            8
data |  6 | avx tbb |    74009325 ns     72265625 ns            8
mask |  6 |         |  1386243612 ns   1386718750 ns            8
mask |  6 | avx     |   102831488 ns    105468750 ns            8
mask |  6 |     tbb |   266012563 ns    240234375 ns            8
mask |  6 | avx tbb |    73973300 ns     70312500 ns            8

data | 12 |         |   392564400 ns    390625000 ns            8
data | 12 | avx     |    99885263 ns     99609375 ns            8
data | 12 |     tbb |    77889513 ns     76171875 ns            8
data | 12 | avx tbb |    73965138 ns     72265625 ns            8
mask | 12 |         |  1382941162 ns   1386718750 ns            8
mask | 12 | avx     |   101405813 ns    101562500 ns            8
mask | 12 |     tbb |   267806400 ns    236328125 ns            8
mask | 12 | avx tbb |    75233263 ns     72265625 ns            8

data | 24 |         |   209125238 ns    210937500 ns            8
data | 24 | avx     |    99789600 ns    101562500 ns            8
data | 24 |     tbb |    75070287 ns     70312500 ns            8
data | 24 | avx tbb |    73992200 ns     70312500 ns            8
mask | 24 |         |  1384607162 ns   1386718750 ns            8
mask | 24 | avx     |   102080650 ns    103515625 ns            8
mask | 24 |     tbb |   270142838 ns    240234375 ns            8
mask | 24 | avx tbb |    73974563 ns     72265625 ns            8
```

</details>

