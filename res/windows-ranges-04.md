# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       84292 ns        91553 ns         2048
data |  6 |     tbb |       45838 ns        38147 ns         2048
mask |  6 |         |      127500 ns       114441 ns         2048
mask |  6 |     tbb |       82155 ns        91553 ns         2048

data | 12 |         |       44610 ns        38147 ns         2048
data | 12 |     tbb |       34043 ns        38147 ns         2048
mask | 12 |         |      127622 ns       122070 ns         2048
mask | 12 |     tbb |       86627 ns        83923 ns         2048

data | 24 |         |       23457 ns        15259 ns         2048
data | 24 |     tbb |       20598 ns        15259 ns         2048
mask | 24 |         |      127518 ns       137329 ns         2048
mask | 24 |     tbb |       86636 ns        99182 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17209 ns        15259 ns         1024
data |  6 | avx tbb |       23799 ns        0.000 ns         1024
mask |  6 | avx     |       18795 ns        15259 ns         1024
mask |  6 | avx tbb |       18737 ns        30518 ns         1024

data | 12 | avx     |       17234 ns        15259 ns         1024
data | 12 | avx tbb |       19812 ns        30518 ns         1024
mask | 12 | avx     |       18907 ns        15259 ns         1024
mask | 12 | avx tbb |       20256 ns        0.000 ns         1024

data | 24 | avx     |       17237 ns        45776 ns         1024
data | 24 | avx tbb |       20192 ns        30518 ns         1024
mask | 24 | avx     |       18827 ns        0.000 ns         1024
mask | 24 | avx tbb |       20327 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      424358 ns       427246 ns         1024
data |  6 | avx     |       26401 ns        30518 ns         1024
data |  6 |     tbb |      173649 ns       198364 ns         1024
data |  6 | avx tbb |       26798 ns        45776 ns         1024
mask |  6 |         |      621813 ns       595093 ns         1024
mask |  6 | avx     |       29122 ns        45776 ns         1024
mask |  6 |     tbb |      278239 ns       244141 ns         1024
mask |  6 | avx tbb |       27173 ns        45776 ns         1024

data | 12 |         |      218577 ns       198364 ns         1024
data | 12 | avx     |       26078 ns        0.000 ns         1024
data | 12 |     tbb |      114938 ns        91553 ns         1024
data | 12 | avx tbb |       29310 ns        45776 ns         1024
mask | 12 |         |      624932 ns       640869 ns         1024
mask | 12 | avx     |       29441 ns        15259 ns         1024
mask | 12 |     tbb |      314642 ns       320435 ns         1024
mask | 12 | avx tbb |       30081 ns        30518 ns         1024

data | 24 |         |      114456 ns       122070 ns         1024
data | 24 | avx     |       27733 ns        15259 ns         1024
data | 24 |     tbb |       75467 ns        61035 ns         1024
data | 24 | avx tbb |       29721 ns        15259 ns         1024
mask | 24 |         |      636777 ns       656128 ns         1024
mask | 24 | avx     |       29062 ns        61035 ns         1024
mask | 24 |     tbb |      314050 ns       350952 ns         1024
mask | 24 | avx tbb |       29869 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1687570 ns      1647949 ns          512
data |  6 | avx     |      198241 ns       183105 ns          512
data |  6 |     tbb |      540274 ns       518799 ns          512
data |  6 | avx tbb |      183550 ns       122070 ns          512
mask |  6 |         |     2516052 ns      2532959 ns          512
mask |  6 | avx     |      199130 ns       213623 ns          512
mask |  6 |     tbb |      947344 ns       946045 ns          512
mask |  6 | avx tbb |      178221 ns       213623 ns          512

data | 12 |         |      868421 ns       823975 ns          512
data | 12 | avx     |      196293 ns       213623 ns          512
data | 12 |     tbb |      354312 ns       396729 ns          512
data | 12 | avx tbb |      190228 ns       152588 ns          512
mask | 12 |         |     2636955 ns      2746582 ns          512
mask | 12 | avx     |      195492 ns       244141 ns          512
mask | 12 |     tbb |      966079 ns       976562 ns          512
mask | 12 | avx tbb |      185490 ns       152588 ns          512

data | 24 |         |      465721 ns       488281 ns          512
data | 24 | avx     |      196346 ns       244141 ns          512
data | 24 |     tbb |      258647 ns       213623 ns          512
data | 24 | avx tbb |      189332 ns       183105 ns          512
mask | 24 |         |     2508828 ns      2471924 ns          512
mask | 24 | avx     |      197207 ns        91553 ns          512
mask | 24 |     tbb |      993101 ns       976562 ns          512
mask | 24 | avx tbb |      186560 ns       274658 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6799580 ns      6835938 ns           64
data |  6 | avx     |      788877 ns       488281 ns           64
data |  6 |     tbb |     1909870 ns      2197266 ns           64
data |  6 | avx tbb |      676913 ns       976562 ns           64
mask |  6 |         |     9979877 ns      9765625 ns           64
mask |  6 | avx     |      814892 ns       976562 ns           64
mask |  6 |     tbb |     3552070 ns      3906250 ns           64
mask |  6 | avx tbb |      656748 ns       732422 ns           64

data | 12 |         |     3485948 ns      3173828 ns           64
data | 12 | avx     |      796369 ns       488281 ns           64
data | 12 |     tbb |     1090359 ns      1220703 ns           64
data | 12 | avx tbb |      680597 ns       732422 ns           64
mask | 12 |         |    10031245 ns     10742188 ns           64
mask | 12 | avx     |      836127 ns       976562 ns           64
mask | 12 |     tbb |     3660166 ns      3173828 ns           64
mask | 12 | avx tbb |      672477 ns       976562 ns           64

data | 24 |         |     1823409 ns      1953125 ns           64
data | 24 | avx     |      788406 ns       244141 ns           64
data | 24 |     tbb |      761833 ns        0.000 ns           64
data | 24 | avx tbb |      698030 ns       976562 ns           64
mask | 24 |         |    10044759 ns     10742188 ns           64
mask | 24 | avx     |      793888 ns       732422 ns           64
mask | 24 |     tbb |     3474928 ns      3662109 ns           64
mask | 24 | avx tbb |      678934 ns       244141 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26808094 ns     28320312 ns           32
data |  6 | avx     |     3129922 ns      4394531 ns           32
data |  6 |     tbb |     7349509 ns      7324219 ns           32
data |  6 | avx tbb |     2456187 ns      1953125 ns           32
mask |  6 |         |    39657059 ns     39550781 ns           32
mask |  6 | avx     |     3190953 ns      4882812 ns           32
mask |  6 |     tbb |    13017413 ns     12695312 ns           32
mask |  6 | avx tbb |     2454991 ns      2929688 ns           32

data | 12 |         |    13835531 ns     14648438 ns           32
data | 12 | avx     |     3170569 ns      4882812 ns           32
data | 12 |     tbb |     3925813 ns      4394531 ns           32
data | 12 | avx tbb |     2491956 ns      1953125 ns           32
mask | 12 |         |    39765325 ns     39550781 ns           32
mask | 12 | avx     |     3268459 ns      2929688 ns           32
mask | 12 |     tbb |    12499134 ns     13671875 ns           32
mask | 12 | avx tbb |     2473378 ns      1953125 ns           32

data | 24 |         |     7146897 ns      7324219 ns           32
data | 24 | avx     |     3141219 ns      3417969 ns           32
data | 24 |     tbb |     2667781 ns      2441406 ns           32
data | 24 | avx tbb |     2680650 ns      2929688 ns           32
mask | 24 |         |    39735694 ns     40039062 ns           32
mask | 24 | avx     |     3175937 ns      2441406 ns           32
mask | 24 |     tbb |    13719041 ns     12207031 ns           32
mask | 24 | avx tbb |     2468288 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106374269 ns    106445312 ns           16
data |  6 | avx     |    12600325 ns     13671875 ns           16
data |  6 |     tbb |    28296269 ns     25390625 ns           16
data |  6 | avx tbb |     9593275 ns      9765625 ns           16
mask |  6 |         |   158855337 ns    159179688 ns           16
mask |  6 | avx     |    12640700 ns     13671875 ns           16
mask |  6 |     tbb |    46169888 ns     49804688 ns           16
mask |  6 | avx tbb |     9670462 ns      9765625 ns           16

data | 12 |         |    54645038 ns     55664062 ns           16
data | 12 | avx     |    12624706 ns     11718750 ns           16
data | 12 |     tbb |    14966575 ns     15625000 ns           16
data | 12 | avx tbb |     9718762 ns     12695312 ns           16
mask | 12 |         |   158573850 ns    157226562 ns           16
mask | 12 | avx     |    12707869 ns     10742188 ns           16
mask | 12 |     tbb |    51832056 ns     41992188 ns           16
mask | 12 | avx tbb |     9810119 ns     10742188 ns           16

data | 24 |         |    28367375 ns     27343750 ns           16
data | 24 | avx     |    12600375 ns     11718750 ns           16
data | 24 |     tbb |    10348650 ns     13671875 ns           16
data | 24 | avx tbb |     9792569 ns      9765625 ns           16
mask | 24 |         |   159871219 ns    159179688 ns           16
mask | 24 | avx     |    12625981 ns     13671875 ns           16
mask | 24 |     tbb |    50284850 ns     46875000 ns           16
mask | 24 | avx tbb |    10340412 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   213400437 ns    212890625 ns            8
data |  6 | avx     |    25314713 ns     23437500 ns            8
data |  6 |     tbb |    58117900 ns     56640625 ns            8
data |  6 | avx tbb |    19486900 ns     19531250 ns            8
mask |  6 |         |   316927025 ns    316406250 ns            8
mask |  6 | avx     |    25397500 ns     25390625 ns            8
mask |  6 |     tbb |    98525412 ns     85937500 ns            8
mask |  6 | avx tbb |    19419375 ns     19531250 ns            8

data | 12 |         |   108459100 ns    109375000 ns            8
data | 12 | avx     |    25209587 ns     25390625 ns            8
data | 12 |     tbb |    29434825 ns     29296875 ns            8
data | 12 | avx tbb |    21933462 ns     25390625 ns            8
mask | 12 |         |   317651087 ns    316406250 ns            8
mask | 12 | avx     |    25256012 ns     27343750 ns            8
mask | 12 |     tbb |   113198175 ns     83984375 ns            8
mask | 12 | avx tbb |    19566975 ns     15625000 ns            8

data | 24 |         |    56789938 ns     56640625 ns            8
data | 24 | avx     |    25691900 ns     27343750 ns            8
data | 24 |     tbb |    20385487 ns     21484375 ns            8
data | 24 | avx tbb |    19598450 ns     15625000 ns            8
mask | 24 |         |   317600925 ns    318359375 ns            8
mask | 24 | avx     |    27746337 ns     27343750 ns            8
mask | 24 |     tbb |   103499988 ns     91796875 ns            8
mask | 24 | avx tbb |    19453687 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   426250362 ns    425781250 ns            8
data |  6 | avx     |    54915150 ns     50781250 ns            8
data |  6 |     tbb |   114980050 ns    115234375 ns            8
data |  6 | avx tbb |    38320163 ns     37109375 ns            8
mask |  6 |         |   635809875 ns    636718750 ns            8
mask |  6 | avx     |    50803325 ns     50781250 ns            8
mask |  6 |     tbb |   197737438 ns    191406250 ns            8
mask |  6 | avx tbb |    38214862 ns     41015625 ns            8

data | 12 |         |   217202712 ns    220703125 ns            8
data | 12 | avx     |    55151050 ns     54687500 ns            8
data | 12 |     tbb |    59270275 ns     62500000 ns            8
data | 12 | avx tbb |    38671175 ns     37109375 ns            8
mask | 12 |         |   634066675 ns    632812500 ns            8
mask | 12 | avx     |    55878062 ns     56640625 ns            8
mask | 12 |     tbb |   199135862 ns    173828125 ns            8
mask | 12 | avx tbb |    38623363 ns     39062500 ns            8

data | 24 |         |   113511950 ns    115234375 ns            8
data | 24 | avx     |    51553000 ns     56640625 ns            8
data | 24 |     tbb |    41088887 ns     41015625 ns            8
data | 24 | avx tbb |    38801950 ns     39062500 ns            8
mask | 24 |         |   635380650 ns    634765625 ns            8
mask | 24 | avx     |    55451225 ns     54687500 ns            8
mask | 24 |     tbb |   187599075 ns    173828125 ns            8
mask | 24 | avx tbb |    42283100 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   852978425 ns    853515625 ns            8
data |  6 | avx     |   101208025 ns    103515625 ns            8
data |  6 |     tbb |   229098350 ns    224609375 ns            8
data |  6 | avx tbb |    76815738 ns     78125000 ns            8
mask |  6 |         |  1269910000 ns   1273437500 ns            8
mask |  6 | avx     |   101601500 ns    101562500 ns            8
mask |  6 |     tbb |   392624050 ns    378906250 ns            8
mask |  6 | avx tbb |    75991013 ns     76171875 ns            8

data | 12 |         |   434582200 ns    429687500 ns            8
data | 12 | avx     |   101377025 ns     99609375 ns            8
data | 12 |     tbb |   118458937 ns    123046875 ns            8
data | 12 | avx tbb |    77269625 ns     76171875 ns            8
mask | 12 |         |  1267886413 ns   1267578125 ns            8
mask | 12 | avx     |   109168000 ns    101562500 ns            8
mask | 12 |     tbb |   398308612 ns    353515625 ns            8
mask | 12 | avx tbb |    77189512 ns     78125000 ns            8

data | 24 |         |   226544150 ns    226562500 ns            8
data | 24 | avx     |   101126575 ns    101562500 ns            8
data | 24 |     tbb |    81897488 ns     82031250 ns            8
data | 24 | avx tbb |    84891313 ns     82031250 ns            8
mask | 24 |         |  1271238187 ns   1271484375 ns            8
mask | 24 | avx     |   101531562 ns    103515625 ns            8
mask | 24 |     tbb |   375162388 ns    359375000 ns            8
mask | 24 | avx tbb |    76354587 ns     74218750 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75967 ns        83923 ns         2048
data |  6 |     tbb |       39171 ns        38147 ns         2048
mask |  6 |         |      115358 ns       114441 ns         2048
mask |  6 |     tbb |       79700 ns        83923 ns         2048

data | 12 |         |       40651 ns        45776 ns         2048
data | 12 |     tbb |       29195 ns        15259 ns         2048
mask | 12 |         |      117556 ns       114441 ns         2048
mask | 12 |     tbb |       82353 ns        76294 ns         2048

data | 24 |         |       21108 ns         7629 ns         2048
data | 24 |     tbb |       17774 ns        15259 ns         2048
mask | 24 |         |      115699 ns       114441 ns         2048
mask | 24 |     tbb |       86635 ns        91553 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18924 ns        15259 ns         1024
data |  6 | avx tbb |       22585 ns        0.000 ns         1024
mask |  6 | avx     |       17946 ns        30518 ns         1024
mask |  6 | avx tbb |       17706 ns        15259 ns         1024

data | 12 | avx     |       18946 ns        30518 ns         1024
data | 12 | avx tbb |       20883 ns        15259 ns         1024
mask | 12 | avx     |       17799 ns        30518 ns         1024
mask | 12 | avx tbb |       18834 ns        0.000 ns         1024

data | 24 | avx     |       18900 ns        15259 ns         1024
data | 24 | avx tbb |       21081 ns        15259 ns         1024
mask | 24 | avx     |       17738 ns        0.000 ns         1024
mask | 24 | avx tbb |       19123 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      390149 ns       411987 ns         1024
data |  6 | avx     |       28976 ns        15259 ns         1024
data |  6 |     tbb |      153909 ns       152588 ns         1024
data |  6 | avx tbb |       27626 ns        15259 ns         1024
mask |  6 |         |      565530 ns       579834 ns         1024
mask |  6 | avx     |       27537 ns        15259 ns         1024
mask |  6 |     tbb |      265121 ns       274658 ns         1024
mask |  6 | avx tbb |       26067 ns        30518 ns         1024

data | 12 |         |      200410 ns       198364 ns         1024
data | 12 | avx     |       28922 ns        30518 ns         1024
data | 12 |     tbb |      115961 ns       122070 ns         1024
data | 12 | avx tbb |       30167 ns        30518 ns         1024
mask | 12 |         |      566529 ns       549316 ns         1024
mask | 12 | avx     |       27867 ns        15259 ns         1024
mask | 12 |     tbb |      291853 ns       289917 ns         1024
mask | 12 | avx tbb |       28988 ns        45776 ns         1024

data | 24 |         |      103201 ns        91553 ns         1024
data | 24 | avx     |       31021 ns        30518 ns         1024
data | 24 |     tbb |       70891 ns        45776 ns         1024
data | 24 | avx tbb |       30394 ns        30518 ns         1024
mask | 24 |         |      569875 ns       595093 ns         1024
mask | 24 | avx     |       27420 ns        30518 ns         1024
mask | 24 |     tbb |      305782 ns       289917 ns         1024
mask | 24 | avx tbb |       28320 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1523858 ns      1586914 ns          512
data |  6 | avx     |      191192 ns       183105 ns          512
data |  6 |     tbb |      478077 ns       427246 ns          512
data |  6 | avx tbb |      181255 ns       183105 ns          512
mask |  6 |         |     2283795 ns      2349854 ns          512
mask |  6 | avx     |      196098 ns       183105 ns          512
mask |  6 |     tbb |      885859 ns       915527 ns          512
mask |  6 | avx tbb |      178652 ns        91553 ns          512

data | 12 |         |      789806 ns       732422 ns          512
data | 12 | avx     |      189785 ns       183105 ns          512
data | 12 |     tbb |      337161 ns       457764 ns          512
data | 12 | avx tbb |      188386 ns       244141 ns          512
mask | 12 |         |     2279223 ns      2349854 ns          512
mask | 12 | avx     |      195352 ns       183105 ns          512
mask | 12 |     tbb |      912861 ns      1007080 ns          512
mask | 12 | avx tbb |      182642 ns       274658 ns          512

data | 24 |         |      426089 ns       366211 ns          512
data | 24 | avx     |      190269 ns       152588 ns          512
data | 24 |     tbb |      250667 ns       274658 ns          512
data | 24 | avx tbb |      185340 ns       183105 ns          512
mask | 24 |         |     2272444 ns      2288818 ns          512
mask | 24 | avx     |      196748 ns       274658 ns          512
mask | 24 |     tbb |      936047 ns      1007080 ns          512
mask | 24 | avx tbb |      186675 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6221195 ns      6835938 ns           64
data |  6 | avx     |      784819 ns       732422 ns           64
data |  6 |     tbb |     1743437 ns      1220703 ns           64
data |  6 | avx tbb |      676644 ns       732422 ns           64
mask |  6 |         |     9087873 ns      9277344 ns           64
mask |  6 | avx     |      793303 ns       732422 ns           64
mask |  6 |     tbb |     3046989 ns      3417969 ns           64
mask |  6 | avx tbb |      672697 ns       732422 ns           64

data | 12 |         |     3126737 ns      2685547 ns           64
data | 12 | avx     |      775752 ns       732422 ns           64
data | 12 |     tbb |     1000502 ns       244141 ns           64
data | 12 | avx tbb |      678147 ns       732422 ns           64
mask | 12 |         |     9169877 ns      9033203 ns           64
mask | 12 | avx     |      787816 ns       976562 ns           64
mask | 12 |     tbb |     3322764 ns      2685547 ns           64
mask | 12 | avx tbb |      676641 ns       488281 ns           64

data | 24 |         |     1740220 ns      1220703 ns           64
data | 24 | avx     |      769355 ns       732422 ns           64
data | 24 |     tbb |      748884 ns        0.000 ns           64
data | 24 | avx tbb |      683725 ns       244141 ns           64
mask | 24 |         |     9350773 ns      9033203 ns           64
mask | 24 | avx     |      795830 ns        0.000 ns           64
mask | 24 |     tbb |     3159905 ns      2929688 ns           64
mask | 24 | avx tbb |      676083 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24289469 ns     23925781 ns           32
data |  6 | avx     |     3070678 ns      4394531 ns           32
data |  6 |     tbb |     6702691 ns      6347656 ns           32
data |  6 | avx tbb |     2463422 ns      2441406 ns           32
mask |  6 |         |    36267119 ns     36621094 ns           32
mask |  6 | avx     |     3166056 ns      1953125 ns           32
mask |  6 |     tbb |    11982228 ns     11230469 ns           32
mask |  6 | avx tbb |     2456322 ns      2441406 ns           32

data | 12 |         |    12436603 ns     12207031 ns           32
data | 12 | avx     |     3058847 ns      6835938 ns           32
data | 12 |     tbb |     3550309 ns      3906250 ns           32
data | 12 | avx tbb |     2493672 ns      1953125 ns           32
mask | 12 |         |    36354047 ns     36621094 ns           32
mask | 12 | avx     |     3175231 ns      3906250 ns           32
mask | 12 |     tbb |    12036075 ns     12207031 ns           32
mask | 12 | avx tbb |     2487716 ns      1953125 ns           32

data | 24 |         |     6582437 ns      6835938 ns           32
data | 24 | avx     |     3052172 ns      6347656 ns           32
data | 24 |     tbb |     2657094 ns      3417969 ns           32
data | 24 | avx tbb |     2513600 ns      2441406 ns           32
mask | 24 |         |    36201831 ns     35644531 ns           32
mask | 24 | avx     |     3167781 ns      1953125 ns           32
mask | 24 |     tbb |    12857131 ns     12695312 ns           32
mask | 24 | avx tbb |     2486003 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96879737 ns     97656250 ns           16
data |  6 | avx     |    12348112 ns     12695312 ns           16
data |  6 |     tbb |    25958044 ns     25390625 ns           16
data |  6 | avx tbb |     9695569 ns     10742188 ns           16
mask |  6 |         |   144513844 ns    142578125 ns           16
mask |  6 | avx     |    12620556 ns     12695312 ns           16
mask |  6 |     tbb |    46677856 ns     40039062 ns           16
mask |  6 | avx tbb |     9600162 ns     10742188 ns           16

data | 12 |         |    49310806 ns     47851562 ns           16
data | 12 | avx     |    12367181 ns     13671875 ns           16
data | 12 |     tbb |    14122025 ns     15625000 ns           16
data | 12 | avx tbb |     9795019 ns      8789062 ns           16
mask | 12 |         |   144701500 ns    142578125 ns           16
mask | 12 | avx     |    12896113 ns     13671875 ns           16
mask | 12 |     tbb |    42091069 ns     41015625 ns           16
mask | 12 | avx tbb |     9739600 ns     10742188 ns           16

data | 24 |         |    27105687 ns     26367188 ns           16
data | 24 | avx     |    13020531 ns     16601562 ns           16
data | 24 |     tbb |    10267806 ns     10742188 ns           16
data | 24 | avx tbb |     9725050 ns      8789062 ns           16
mask | 24 |         |   144405744 ns    142578125 ns           16
mask | 24 | avx     |    12632269 ns     10742188 ns           16
mask | 24 |     tbb |    44488331 ns     37109375 ns           16
mask | 24 | avx tbb |     9763744 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193171200 ns    195312500 ns            8
data |  6 | avx     |    28653063 ns     29296875 ns            8
data |  6 |     tbb |    51688275 ns     46875000 ns            8
data |  6 | avx tbb |    19239963 ns     19531250 ns            8
mask |  6 |         |   287996150 ns    281250000 ns            8
mask |  6 | avx     |    25226175 ns     27343750 ns            8
mask |  6 |     tbb |    85170675 ns     83984375 ns            8
mask |  6 | avx tbb |    19164438 ns     17578125 ns            8

data | 12 |         |    99899800 ns     99609375 ns            8
data | 12 | avx     |    24714163 ns     21484375 ns            8
data | 12 |     tbb |    27620425 ns     27343750 ns            8
data | 12 | avx tbb |    19528663 ns     19531250 ns            8
mask | 12 |         |   288560675 ns    296875000 ns            8
mask | 12 | avx     |    25396438 ns     27343750 ns            8
mask | 12 |     tbb |    88209925 ns     82031250 ns            8
mask | 12 | avx tbb |    19350888 ns     17578125 ns            8

data | 24 |         |    54181162 ns     52734375 ns            8
data | 24 | avx     |    26974212 ns     23437500 ns            8
data | 24 |     tbb |    20605525 ns     15625000 ns            8
data | 24 | avx tbb |    20864900 ns     17578125 ns            8
mask | 24 |         |   288816312 ns    296875000 ns            8
mask | 24 | avx     |    25368675 ns     25390625 ns            8
mask | 24 |     tbb |    90380525 ns     80078125 ns            8
mask | 24 | avx tbb |    22027037 ns     23437500 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386152800 ns    388671875 ns            8
data |  6 | avx     |    49587200 ns     50781250 ns            8
data |  6 |     tbb |   103853800 ns    105468750 ns            8
data |  6 | avx tbb |    38304075 ns     39062500 ns            8
mask |  6 |         |   577849225 ns    578125000 ns            8
mask |  6 | avx     |    50747637 ns     48828125 ns            8
mask |  6 |     tbb |   178838625 ns    173828125 ns            8
mask |  6 | avx tbb |    38205888 ns     39062500 ns            8

data | 12 |         |   199407900 ns    201171875 ns            8
data | 12 | avx     |    49882200 ns     46875000 ns            8
data | 12 |     tbb |    54255475 ns     56640625 ns            8
data | 12 | avx tbb |    38780788 ns     37109375 ns            8
mask | 12 |         |   576487912 ns    576171875 ns            8
mask | 12 | avx     |    50865137 ns     50781250 ns            8
mask | 12 |     tbb |   162445262 ns    162109375 ns            8
mask | 12 | avx tbb |    38826288 ns     37109375 ns            8

data | 24 |         |   104551675 ns    107421875 ns            8
data | 24 | avx     |    49629687 ns     48828125 ns            8
data | 24 |     tbb |    45686438 ns     42968750 ns            8
data | 24 | avx tbb |    38693975 ns     39062500 ns            8
mask | 24 |         |   578399363 ns    578125000 ns            8
mask | 24 | avx     |    50625775 ns     52734375 ns            8
mask | 24 |     tbb |   180808638 ns    160156250 ns            8
mask | 24 | avx tbb |    38738650 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   772597538 ns    771484375 ns            8
data |  6 | avx     |    99136062 ns     97656250 ns            8
data |  6 |     tbb |   209838937 ns    210937500 ns            8
data |  6 | avx tbb |    76297275 ns     78125000 ns            8
mask |  6 |         |  1155424200 ns   1156250000 ns            8
mask |  6 | avx     |   101725825 ns     99609375 ns            8
mask |  6 |     tbb |   341146938 ns    326171875 ns            8
mask |  6 | avx tbb |    76708738 ns     76171875 ns            8

data | 12 |         |   393303925 ns    392578125 ns            8
data | 12 | avx     |    99198825 ns     99609375 ns            8
data | 12 |     tbb |   107621013 ns    109375000 ns            8
data | 12 | avx tbb |    77303387 ns     74218750 ns            8
mask | 12 |         |  1157293675 ns   1158203125 ns            8
mask | 12 | avx     |   101497325 ns     97656250 ns            8
mask | 12 |     tbb |   364775325 ns    318359375 ns            8
mask | 12 | avx tbb |    76837025 ns     74218750 ns            8

data | 24 |         |   209528162 ns    210937500 ns            8
data | 24 | avx     |   105244150 ns    105468750 ns            8
data | 24 |     tbb |    82100300 ns     80078125 ns            8
data | 24 | avx tbb |    78181913 ns     76171875 ns            8
mask | 24 |         |  1155861350 ns   1154296875 ns            8
mask | 24 | avx     |   102231450 ns    101562500 ns            8
mask | 24 |     tbb |   346219275 ns    322265625 ns            8
mask | 24 | avx tbb |    77300650 ns     74218750 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       77922 ns        76294 ns         2048
data |  6 |     tbb |       39772 ns        53406 ns         2048
mask |  6 |         |      141134 ns       137329 ns         2048
mask |  6 |     tbb |       78403 ns        83923 ns         2048

data | 12 |         |       39985 ns        30518 ns         2048
data | 12 |     tbb |       30005 ns        22888 ns         2048
mask | 12 |         |      139948 ns       137329 ns         2048
mask | 12 |     tbb |       90690 ns       106812 ns         2048

data | 24 |         |       21119 ns        15259 ns         2048
data | 24 |     tbb |       18875 ns        15259 ns         2048
mask | 24 |         |      137904 ns       137329 ns         2048
mask | 24 |     tbb |       86023 ns        76294 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18951 ns        15259 ns         1024
data |  6 | avx tbb |       19868 ns        30518 ns         1024
mask |  6 | avx     |       17619 ns        30518 ns         1024
mask |  6 | avx tbb |       19891 ns        30518 ns         1024

data | 12 | avx     |       18942 ns        15259 ns         1024
data | 12 | avx tbb |       21415 ns        15259 ns         1024
mask | 12 | avx     |       17644 ns        0.000 ns         1024
mask | 12 | avx tbb |       19081 ns        45776 ns         1024

data | 24 | avx     |       18974 ns        15259 ns         1024
data | 24 | avx tbb |       20527 ns        0.000 ns         1024
mask | 24 | avx     |       17715 ns        30518 ns         1024
mask | 24 | avx tbb |       18583 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      386795 ns       411987 ns         1024
data |  6 | avx     |       28881 ns        45776 ns         1024
data |  6 |     tbb |      167267 ns       122070 ns         1024
data |  6 | avx tbb |       27386 ns        15259 ns         1024
mask |  6 |         |      692880 ns       717163 ns         1024
mask |  6 | avx     |       27009 ns        15259 ns         1024
mask |  6 |     tbb |      299563 ns       320435 ns         1024
mask |  6 | avx tbb |       25709 ns        0.000 ns         1024

data | 12 |         |      198162 ns       198364 ns         1024
data | 12 | avx     |       28946 ns        45776 ns         1024
data | 12 |     tbb |      104113 ns       106812 ns         1024
data | 12 | avx tbb |       30345 ns        45776 ns         1024
mask | 12 |         |      690870 ns       656128 ns         1024
mask | 12 | avx     |       27225 ns        0.000 ns         1024
mask | 12 |     tbb |      332379 ns       305176 ns         1024
mask | 12 | avx tbb |       28456 ns        45776 ns         1024

data | 24 |         |      102074 ns       122070 ns         1024
data | 24 | avx     |       29358 ns        15259 ns         1024
data | 24 |     tbb |       62439 ns        30518 ns         1024
data | 24 | avx tbb |       30037 ns        30518 ns         1024
mask | 24 |         |      683715 ns       717163 ns         1024
mask | 24 | avx     |       27520 ns        45776 ns         1024
mask | 24 |     tbb |      352355 ns       335693 ns         1024
mask | 24 | avx tbb |       28156 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1520150 ns      1495361 ns          512
data |  6 | avx     |      189911 ns       183105 ns          512
data |  6 |     tbb |      477211 ns       396729 ns          512
data |  6 | avx tbb |      180415 ns       244141 ns          512
mask |  6 |         |     2729582 ns      2807617 ns          512
mask |  6 | avx     |      195144 ns       274658 ns          512
mask |  6 |     tbb |     1002754 ns      1068115 ns          512
mask |  6 | avx tbb |      175408 ns       244141 ns          512

data | 12 |         |      790596 ns       854492 ns          512
data | 12 | avx     |      192718 ns       213623 ns          512
data | 12 |     tbb |      329393 ns       427246 ns          512
data | 12 | avx tbb |      186526 ns       213623 ns          512
mask | 12 |         |     2717629 ns      2716064 ns          512
mask | 12 | avx     |      197129 ns       183105 ns          512
mask | 12 |     tbb |     1055071 ns      1159668 ns          512
mask | 12 | avx tbb |      182697 ns       213623 ns          512

data | 24 |         |      424102 ns       518799 ns          512
data | 24 | avx     |      190017 ns       274658 ns          512
data | 24 |     tbb |      249074 ns       244141 ns          512
data | 24 | avx tbb |      182295 ns       183105 ns          512
mask | 24 |         |     2728959 ns      2777100 ns          512
mask | 24 | avx     |      195038 ns       244141 ns          512
mask | 24 |     tbb |     1083125 ns      1129150 ns          512
mask | 24 | avx tbb |      186427 ns       244141 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6156966 ns      6591797 ns           64
data |  6 | avx     |      785277 ns      1220703 ns           64
data |  6 |     tbb |     1732184 ns      1464844 ns           64
data |  6 | avx tbb |      676116 ns       976562 ns           64
mask |  6 |         |    10921236 ns     10742188 ns           64
mask |  6 | avx     |      809489 ns       732422 ns           64
mask |  6 |     tbb |     3752514 ns      3662109 ns           64
mask |  6 | avx tbb |      666053 ns       732422 ns           64

data | 12 |         |     3117119 ns      3173828 ns           64
data | 12 | avx     |      781780 ns      1464844 ns           64
data | 12 |     tbb |      981847 ns      1220703 ns           64
data | 12 | avx tbb |      685769 ns       732422 ns           64
mask | 12 |         |    10946461 ns     10986328 ns           64
mask | 12 | avx     |      790961 ns       732422 ns           64
mask | 12 |     tbb |     4096773 ns      3906250 ns           64
mask | 12 | avx tbb |      676023 ns       732422 ns           64

data | 24 |         |     1679802 ns      1220703 ns           64
data | 24 | avx     |      773706 ns       732422 ns           64
data | 24 |     tbb |      772417 ns      1220703 ns           64
data | 24 | avx tbb |      683378 ns       732422 ns           64
mask | 24 |         |    10984911 ns     11230469 ns           64
mask | 24 | avx     |      786625 ns       488281 ns           64
mask | 24 |     tbb |     3976809 ns      2929688 ns           64
mask | 24 | avx tbb |      688650 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24256891 ns     24902344 ns           32
data |  6 | avx     |     3042603 ns      7812500 ns           32
data |  6 |     tbb |     6584678 ns      6835938 ns           32
data |  6 | avx tbb |     2463381 ns      2929688 ns           32
mask |  6 |         |    43328997 ns     42480469 ns           32
mask |  6 | avx     |     3171837 ns      3906250 ns           32
mask |  6 |     tbb |    13940047 ns     13671875 ns           32
mask |  6 | avx tbb |     2463116 ns      3417969 ns           32

data | 12 |         |    12399825 ns     11718750 ns           32
data | 12 | avx     |     3079528 ns      2441406 ns           32
data | 12 |     tbb |     3526584 ns      3417969 ns           32
data | 12 | avx tbb |     2483138 ns      2929688 ns           32
mask | 12 |         |    43403906 ns     43457031 ns           32
mask | 12 | avx     |     3191400 ns      3906250 ns           32
mask | 12 |     tbb |    13411191 ns     11718750 ns           32
mask | 12 | avx tbb |     2475516 ns      2441406 ns           32

data | 24 |         |     6623209 ns      6835938 ns           32
data | 24 | avx     |     3289031 ns      5371094 ns           32
data | 24 |     tbb |     2645650 ns      2441406 ns           32
data | 24 | avx tbb |     2510312 ns      1953125 ns           32
mask | 24 |         |    43367666 ns     43945312 ns           32
mask | 24 | avx     |     3149300 ns       488281 ns           32
mask | 24 |     tbb |    15134744 ns     15136719 ns           32
mask | 24 | avx tbb |     2479712 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96470269 ns     93750000 ns           16
data |  6 | avx     |    12487287 ns     12695312 ns           16
data |  6 |     tbb |    25776081 ns     26367188 ns           16
data |  6 | avx tbb |     9641000 ns     10742188 ns           16
mask |  6 |         |   172715194 ns    171875000 ns           16
mask |  6 | avx     |    13135162 ns     16601562 ns           16
mask |  6 |     tbb |    52524288 ns     50781250 ns           16
mask |  6 | avx tbb |    10027112 ns      9765625 ns           16

data | 12 |         |    49449675 ns     49804688 ns           16
data | 12 | avx     |    12330912 ns     12695312 ns           16
data | 12 |     tbb |    13594062 ns     12695312 ns           16
data | 12 | avx tbb |    10384850 ns      8789062 ns           16
mask | 12 |         |   173155644 ns    174804688 ns           16
mask | 12 | avx     |    12648119 ns     13671875 ns           16
mask | 12 |     tbb |    53991313 ns     50781250 ns           16
mask | 12 | avx tbb |     9765344 ns     10742188 ns           16

data | 24 |         |    26100981 ns     22460938 ns           16
data | 24 | avx     |    12366650 ns     13671875 ns           16
data | 24 |     tbb |    10224825 ns     10742188 ns           16
data | 24 | avx tbb |     9810456 ns     10742188 ns           16
mask | 24 |         |   172989750 ns    172851562 ns           16
mask | 24 | avx     |    12580619 ns     11718750 ns           16
mask | 24 |     tbb |    49904806 ns     47851562 ns           16
mask | 24 | avx tbb |    10452313 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193418450 ns    197265625 ns            8
data |  6 | avx     |    24990288 ns     23437500 ns            8
data |  6 |     tbb |    53403788 ns     52734375 ns            8
data |  6 | avx tbb |    19350950 ns     21484375 ns            8
mask |  6 |         |   347666587 ns    343750000 ns            8
mask |  6 | avx     |    25441450 ns     25390625 ns            8
mask |  6 |     tbb |   110903025 ns    101562500 ns            8
mask |  6 | avx tbb |    19273450 ns     19531250 ns            8

data | 12 |         |    98037538 ns     97656250 ns            8
data | 12 | avx     |    24669913 ns     25390625 ns            8
data | 12 |     tbb |    27218812 ns     29296875 ns            8
data | 12 | avx tbb |    19638150 ns     17578125 ns            8
mask | 12 |         |   345899900 ns    347656250 ns            8
mask | 12 | avx     |    25292688 ns     25390625 ns            8
mask | 12 |     tbb |   112229975 ns     95703125 ns            8
mask | 12 | avx tbb |    19633612 ns     23437500 ns            8

data | 24 |         |    56107038 ns     56640625 ns            8
data | 24 | avx     |    24629450 ns     25390625 ns            8
data | 24 |     tbb |    22735425 ns     21484375 ns            8
data | 24 | avx tbb |    19474025 ns     19531250 ns            8
mask | 24 |         |   345333200 ns    343750000 ns            8
mask | 24 | avx     |    25260050 ns     23437500 ns            8
mask | 24 |     tbb |   111090662 ns     93750000 ns            8
mask | 24 | avx tbb |    22118163 ns     23437500 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   386212450 ns    384765625 ns            8
data |  6 | avx     |    51940538 ns     50781250 ns            8
data |  6 |     tbb |   104454863 ns    103515625 ns            8
data |  6 | avx tbb |    38393975 ns     39062500 ns            8
mask |  6 |         |   691363762 ns    689453125 ns            8
mask |  6 | avx     |    52913487 ns     52734375 ns            8
mask |  6 |     tbb |   207894075 ns    197265625 ns            8
mask |  6 | avx tbb |    43156012 ns     42968750 ns            8

data | 12 |         |   196074687 ns    197265625 ns            8
data | 12 | avx     |    52953725 ns     54687500 ns            8
data | 12 |     tbb |    58534725 ns     60546875 ns            8
data | 12 | avx tbb |    42560438 ns     37109375 ns            8
mask | 12 |         |   692427262 ns    691406250 ns            8
mask | 12 | avx     |    50827975 ns     52734375 ns            8
mask | 12 |     tbb |   244366612 ns    189453125 ns            8
mask | 12 | avx tbb |    38998975 ns     39062500 ns            8

data | 24 |         |   104468100 ns    105468750 ns            8
data | 24 | avx     |    49459163 ns     48828125 ns            8
data | 24 |     tbb |    45968062 ns     44921875 ns            8
data | 24 | avx tbb |    38812588 ns     35156250 ns            8
mask | 24 |         |   691119738 ns    691406250 ns            8
mask | 24 | avx     |    50766137 ns     52734375 ns            8
mask | 24 |     tbb |   212824637 ns    187500000 ns            8
mask | 24 | avx tbb |    38791525 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771550338 ns    771484375 ns            8
data |  6 | avx     |   100140725 ns    101562500 ns            8
data |  6 |     tbb |   208161562 ns    208984375 ns            8
data |  6 | avx tbb |    76481675 ns     76171875 ns            8
mask |  6 |         |  1382961475 ns   1384765625 ns            8
mask |  6 | avx     |   100657763 ns     99609375 ns            8
mask |  6 |     tbb |   442954025 ns    404296875 ns            8
mask |  6 | avx tbb |    76310125 ns     76171875 ns            8

data | 12 |         |   392118288 ns    392578125 ns            8
data | 12 | avx     |    98615788 ns     97656250 ns            8
data | 12 |     tbb |   107557012 ns    105468750 ns            8
data | 12 | avx tbb |    78281913 ns     74218750 ns            8
mask | 12 |         |  1382457400 ns   1382812500 ns            8
mask | 12 | avx     |   101867625 ns     99609375 ns            8
mask | 12 |     tbb |   413956962 ns    388671875 ns            8
mask | 12 | avx tbb |    77312275 ns     76171875 ns            8

data | 24 |         |   215475863 ns    214843750 ns            8
data | 24 | avx     |   100175675 ns     99609375 ns            8
data | 24 |     tbb |    82072775 ns     80078125 ns            8
data | 24 | avx tbb |    77846987 ns     76171875 ns            8
mask | 24 |         |  1381744787 ns   1384765625 ns            8
mask | 24 | avx     |   102210650 ns     99609375 ns            8
mask | 24 |     tbb |   465522125 ns    380859375 ns            8
mask | 24 | avx tbb |    77630950 ns     70312500 ns            8
```

</details>

