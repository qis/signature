# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83766 ns        91553 ns         2048
data |  6 |     tbb |       20454 ns        30518 ns         2048
mask |  6 |         |      127905 ns       129700 ns         2048
mask |  6 |     tbb |       32427 ns        22888 ns         2048

data | 12 |         |       44105 ns        45776 ns         2048
data | 12 |     tbb |       15920 ns        22888 ns         2048
mask | 12 |         |      125325 ns       129700 ns         2048
mask | 12 |     tbb |       32681 ns        22888 ns         2048

data | 24 |         |       23493 ns        15259 ns         2048
data | 24 |     tbb |       13949 ns        22888 ns         2048
mask | 24 |         |      127887 ns       137329 ns         2048
mask | 24 |     tbb |       32889 ns        22888 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       16578 ns        30518 ns         1024
data |  6 | avx tbb |       13291 ns        0.000 ns         1024
mask |  6 | avx     |       19066 ns        30518 ns         1024
mask |  6 | avx tbb |       13374 ns        15259 ns         1024

data | 12 | avx     |       16900 ns        0.000 ns         1024
data | 12 | avx tbb |       13648 ns        15259 ns         1024
mask | 12 | avx     |       18330 ns        15259 ns         1024
mask | 12 | avx tbb |       13628 ns        30518 ns         1024

data | 24 | avx     |       17104 ns        15259 ns         1024
data | 24 | avx tbb |       13637 ns        15259 ns         1024
mask | 24 | avx     |       19048 ns        30518 ns         1024
mask | 24 | avx tbb |       13323 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      422543 ns       411987 ns         1024
data |  6 | avx     |       26805 ns        30518 ns         1024
data |  6 |     tbb |       53055 ns        76294 ns         1024
data |  6 | avx tbb |       17391 ns        15259 ns         1024
mask |  6 |         |      625745 ns       640869 ns         1024
mask |  6 | avx     |       29216 ns        45776 ns         1024
mask |  6 |     tbb |      128099 ns       152588 ns         1024
mask |  6 | avx tbb |       17137 ns        45776 ns         1024

data | 12 |         |      214514 ns       228882 ns         1024
data | 12 | avx     |       26282 ns        15259 ns         1024
data | 12 |     tbb |       33477 ns        30518 ns         1024
data | 12 | avx tbb |       17436 ns        0.000 ns         1024
mask | 12 |         |      623336 ns       595093 ns         1024
mask | 12 | avx     |       29009 ns        15259 ns         1024
mask | 12 |     tbb |      128886 ns       152588 ns         1024
mask | 12 | avx tbb |       17903 ns        45776 ns         1024

data | 24 |         |      110689 ns       122070 ns         1024
data | 24 | avx     |       26076 ns        30518 ns         1024
data | 24 |     tbb |       23648 ns        15259 ns         1024
data | 24 | avx tbb |       17547 ns        45776 ns         1024
mask | 24 |         |      626215 ns       640869 ns         1024
mask | 24 | avx     |       29085 ns        45776 ns         1024
mask | 24 |     tbb |      128752 ns       152588 ns         1024
mask | 24 | avx tbb |       17780 ns        0.000 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1675036 ns      1708984 ns          512
data |  6 | avx     |      195471 ns       213623 ns          512
data |  6 |     tbb |      233613 ns       152588 ns          512
data |  6 | avx tbb |      157730 ns       122070 ns          512
mask |  6 |         |     2509317 ns      2593994 ns          512
mask |  6 | avx     |      197117 ns       122070 ns          512
mask |  6 |     tbb |      529246 ns       457764 ns          512
mask |  6 | avx tbb |      157390 ns       274658 ns          512

data | 12 |         |      871927 ns       854492 ns          512
data | 12 | avx     |      199563 ns       213623 ns          512
data | 12 |     tbb |      208724 ns       244141 ns          512
data | 12 | avx tbb |      158001 ns       152588 ns          512
mask | 12 |         |     2512601 ns      2532959 ns          512
mask | 12 | avx     |      196247 ns       183105 ns          512
mask | 12 |     tbb |      520338 ns       427246 ns          512
mask | 12 | avx tbb |      157637 ns       152588 ns          512

data | 24 |         |      452978 ns       488281 ns          512
data | 24 | avx     |      195876 ns       183105 ns          512
data | 24 |     tbb |      191525 ns       152588 ns          512
data | 24 | avx tbb |      158771 ns       152588 ns          512
mask | 24 |         |     2496738 ns      2502441 ns          512
mask | 24 | avx     |      196289 ns       183105 ns          512
mask | 24 |     tbb |      524931 ns       488281 ns          512
mask | 24 | avx tbb |      157846 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6717542 ns      6591797 ns           64
data |  6 | avx     |      795834 ns       976562 ns           64
data |  6 |     tbb |      786909 ns      1220703 ns           64
data |  6 | avx tbb |      631098 ns       976562 ns           64
mask |  6 |         |    10088491 ns     10986328 ns           64
mask |  6 | avx     |      796469 ns       488281 ns           64
mask |  6 |     tbb |     1977638 ns      1953125 ns           64
mask |  6 | avx tbb |      595837 ns       488281 ns           64

data | 12 |         |     3486792 ns      3173828 ns           64
data | 12 | avx     |      785706 ns       976562 ns           64
data | 12 |     tbb |      700448 ns       244141 ns           64
data | 12 | avx tbb |      632723 ns       976562 ns           64
mask | 12 |         |    10070202 ns     10498047 ns           64
mask | 12 | avx     |      788125 ns       244141 ns           64
mask | 12 |     tbb |     1959100 ns      2685547 ns           64
mask | 12 | avx tbb |      603014 ns       732422 ns           64

data | 24 |         |     1873680 ns      1708984 ns           64
data | 24 | avx     |      797372 ns       732422 ns           64
data | 24 |     tbb |      666039 ns       732422 ns           64
data | 24 | avx tbb |      632358 ns       976562 ns           64
mask | 24 |         |    10044159 ns     10253906 ns           64
mask | 24 | avx     |      804911 ns      1220703 ns           64
mask | 24 |     tbb |     1978619 ns      1220703 ns           64
mask | 24 | avx tbb |      593619 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26619991 ns     22949219 ns           32
data |  6 | avx     |     3175125 ns      1953125 ns           32
data |  6 |     tbb |     2814150 ns       976562 ns           32
data |  6 | avx tbb |     2364600 ns      2441406 ns           32
mask |  6 |         |    39764209 ns     40039062 ns           32
mask |  6 | avx     |     3163056 ns      3906250 ns           32
mask |  6 |     tbb |     7570175 ns      6835938 ns           32
mask |  6 | avx tbb |     2360237 ns      2441406 ns           32

data | 12 |         |    13715769 ns     14160156 ns           32
data | 12 | avx     |     3227388 ns      3417969 ns           32
data | 12 |     tbb |     2501303 ns      2441406 ns           32
data | 12 | avx tbb |     2367688 ns      2929688 ns           32
mask | 12 |         |    39799334 ns     40039062 ns           32
mask | 12 | avx     |     3187634 ns      3906250 ns           32
mask | 12 |     tbb |     7613906 ns      7324219 ns           32
mask | 12 | avx tbb |     2360925 ns      1464844 ns           32

data | 24 |         |     7418322 ns      6835938 ns           32
data | 24 | avx     |     3202616 ns      2441406 ns           32
data | 24 |     tbb |     2447316 ns      2929688 ns           32
data | 24 | avx tbb |     2388722 ns      2929688 ns           32
mask | 24 |         |    39752044 ns     39062500 ns           32
mask | 24 | avx     |     3198191 ns      1464844 ns           32
mask | 24 |     tbb |     7618872 ns      7812500 ns           32
mask | 24 | avx tbb |     2364750 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106377625 ns    105468750 ns           16
data |  6 | avx     |    12820400 ns      9765625 ns           16
data |  6 |     tbb |    10863850 ns     15625000 ns           16
data |  6 | avx tbb |     9299444 ns      8789062 ns           16
mask |  6 |         |   159950719 ns    157226562 ns           16
mask |  6 | avx     |    13220262 ns     14648438 ns           16
mask |  6 |     tbb |    29891562 ns     27343750 ns           16
mask |  6 | avx tbb |     9281981 ns      9765625 ns           16

data | 12 |         |    54256794 ns     54687500 ns           16
data | 12 | avx     |    12558625 ns     13671875 ns           16
data | 12 |     tbb |     9542506 ns      9765625 ns           16
data | 12 | avx tbb |     9277212 ns      8789062 ns           16
mask | 12 |         |   159024594 ns    159179688 ns           16
mask | 12 | avx     |    13251256 ns     14648438 ns           16
mask | 12 |     tbb |    29970675 ns     30273438 ns           16
mask | 12 | avx tbb |     9289731 ns      8789062 ns           16

data | 24 |         |    28383263 ns     29296875 ns           16
data | 24 | avx     |    13187000 ns     13671875 ns           16
data | 24 |     tbb |     9460644 ns     10742188 ns           16
data | 24 | avx tbb |     9291625 ns      9765625 ns           16
mask | 24 |         |   158828344 ns    158203125 ns           16
mask | 24 | avx     |    12633488 ns     13671875 ns           16
mask | 24 |     tbb |    29918606 ns     29296875 ns           16
mask | 24 | avx tbb |     9289394 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   212972975 ns    214843750 ns            8
data |  6 | avx     |    25273262 ns     23437500 ns            8
data |  6 |     tbb |    21588387 ns     27343750 ns            8
data |  6 | avx tbb |    18449000 ns     19531250 ns            8
mask |  6 |         |   316931950 ns    314453125 ns            8
mask |  6 | avx     |    25496563 ns     27343750 ns            8
mask |  6 |     tbb |    59893900 ns     56640625 ns            8
mask |  6 | avx tbb |    18465813 ns     17578125 ns            8

data | 12 |         |   110053525 ns    111328125 ns            8
data | 12 | avx     |    25297788 ns     23437500 ns            8
data | 12 |     tbb |    19052387 ns     17578125 ns            8
data | 12 | avx tbb |    18517687 ns     19531250 ns            8
mask | 12 |         |   318329900 ns    322265625 ns            8
mask | 12 | avx     |    25359738 ns     23437500 ns            8
mask | 12 |     tbb |    60126412 ns     56640625 ns            8
mask | 12 | avx tbb |    18469763 ns     19531250 ns            8

data | 24 |         |    58672950 ns     62500000 ns            8
data | 24 | avx     |    25213188 ns     25390625 ns            8
data | 24 |     tbb |    19000362 ns     17578125 ns            8
data | 24 | avx tbb |    19920700 ns     19531250 ns            8
mask | 24 |         |   317919687 ns    318359375 ns            8
mask | 24 | avx     |    26868812 ns     29296875 ns            8
mask | 24 |     tbb |    59478312 ns     58593750 ns            8
mask | 24 | avx tbb |    18503875 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425195663 ns    425781250 ns            8
data |  6 | avx     |    50507062 ns     50781250 ns            8
data |  6 |     tbb |    43030663 ns     41015625 ns            8
data |  6 | avx tbb |    36854313 ns     33203125 ns            8
mask |  6 |         |   635934575 ns    634765625 ns            8
mask |  6 | avx     |    50868975 ns     48828125 ns            8
mask |  6 |     tbb |   120321825 ns    107421875 ns            8
mask |  6 | avx tbb |    36898075 ns     35156250 ns            8

data | 12 |         |   217066413 ns    218750000 ns            8
data | 12 | avx     |    51446262 ns     52734375 ns            8
data | 12 |     tbb |    37842062 ns     39062500 ns            8
data | 12 | avx tbb |    36874525 ns     33203125 ns            8
mask | 12 |         |   634889900 ns    630859375 ns            8
mask | 12 | avx     |    51620287 ns     50781250 ns            8
mask | 12 |     tbb |   118790525 ns    115234375 ns            8
mask | 12 | avx tbb |    36817400 ns     35156250 ns            8

data | 24 |         |   113477162 ns    113281250 ns            8
data | 24 | avx     |    50566588 ns     52734375 ns            8
data | 24 |     tbb |    37766788 ns     37109375 ns            8
data | 24 | avx tbb |    36861313 ns     37109375 ns            8
mask | 24 |         |   633966862 ns    632812500 ns            8
mask | 24 | avx     |    53764450 ns     52734375 ns            8
mask | 24 |     tbb |   119109862 ns    115234375 ns            8
mask | 24 | avx tbb |    36851000 ns     33203125 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   850421212 ns    849609375 ns            8
data |  6 | avx     |   102812825 ns    103515625 ns            8
data |  6 |     tbb |    85134613 ns     83984375 ns            8
data |  6 | avx tbb |    73614113 ns     72265625 ns            8
mask |  6 |         |  1271048862 ns   1271484375 ns            8
mask |  6 | avx     |   102021488 ns    103515625 ns            8
mask |  6 |     tbb |   239278000 ns    224609375 ns            8
mask |  6 | avx tbb |    73720463 ns     74218750 ns            8

data | 12 |         |   434108650 ns    437500000 ns            8
data | 12 | avx     |   103860338 ns    105468750 ns            8
data | 12 |     tbb |    74946462 ns     74218750 ns            8
data | 12 | avx tbb |    73628012 ns     74218750 ns            8
mask | 12 |         |  1273497225 ns   1273437500 ns            8
mask | 12 | avx     |   102070312 ns    103515625 ns            8
mask | 12 |     tbb |   237266200 ns    222656250 ns            8
mask | 12 | avx tbb |    73666400 ns     68359375 ns            8

data | 24 |         |   227543950 ns    228515625 ns            8
data | 24 | avx     |   102747175 ns     93750000 ns            8
data | 24 |     tbb |    76348325 ns     74218750 ns            8
data | 24 | avx tbb |    73750362 ns     72265625 ns            8
mask | 24 |         |  1268868525 ns   1267578125 ns            8
mask | 24 | avx     |   101953788 ns    105468750 ns            8
mask | 24 |     tbb |   238355163 ns    224609375 ns            8
mask | 24 | avx tbb |    74879050 ns     78125000 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       74703 ns        68665 ns         2048
data |  6 |     tbb |       20759 ns        15259 ns         2048
mask |  6 |         |      114605 ns       122070 ns         2048
mask |  6 |     tbb |       30740 ns        22888 ns         2048

data | 12 |         |       40566 ns        45776 ns         2048
data | 12 |     tbb |       16025 ns        15259 ns         2048
mask | 12 |         |      116371 ns       114441 ns         2048
mask | 12 |     tbb |       30625 ns        38147 ns         2048

data | 24 |         |       20636 ns        22888 ns         2048
data | 24 |     tbb |       13161 ns        22888 ns         2048
mask | 24 |         |      115973 ns       114441 ns         2048
mask | 24 |     tbb |       30500 ns        30518 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18354 ns        0.000 ns         1024
data |  6 | avx tbb |       13568 ns        15259 ns         1024
mask |  6 | avx     |       17786 ns        0.000 ns         1024
mask |  6 | avx tbb |       13329 ns        15259 ns         1024

data | 12 | avx     |       18961 ns        30518 ns         1024
data | 12 | avx tbb |       13489 ns        30518 ns         1024
mask | 12 | avx     |       16793 ns        0.000 ns         1024
mask | 12 | avx tbb |       12939 ns        15259 ns         1024

data | 24 | avx     |       18894 ns        15259 ns         1024
data | 24 | avx tbb |       14232 ns        15259 ns         1024
mask | 24 | avx     |       17388 ns        0.000 ns         1024
mask | 24 | avx tbb |       13483 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      378001 ns       396729 ns         1024
data |  6 | avx     |       28917 ns        0.000 ns         1024
data |  6 |     tbb |       50264 ns        30518 ns         1024
data |  6 | avx tbb |       18099 ns        15259 ns         1024
mask |  6 |         |      567151 ns       595093 ns         1024
mask |  6 | avx     |       27435 ns        15259 ns         1024
mask |  6 |     tbb |      116568 ns       122070 ns         1024
mask |  6 | avx tbb |       17159 ns        15259 ns         1024

data | 12 |         |      195411 ns       167847 ns         1024
data | 12 | avx     |       28976 ns        61035 ns         1024
data | 12 |     tbb |       31556 ns        30518 ns         1024
data | 12 | avx tbb |       17863 ns        15259 ns         1024
mask | 12 |         |      565737 ns       579834 ns         1024
mask | 12 | avx     |       27403 ns        30518 ns         1024
mask | 12 |     tbb |      117878 ns       106812 ns         1024
mask | 12 | avx tbb |       17178 ns        15259 ns         1024

data | 24 |         |       99894 ns        91553 ns         1024
data | 24 | avx     |       29045 ns        30518 ns         1024
data | 24 |     tbb |       23507 ns        15259 ns         1024
data | 24 | avx tbb |       17644 ns        0.000 ns         1024
mask | 24 |         |      565646 ns       564575 ns         1024
mask | 24 | avx     |       27312 ns        30518 ns         1024
mask | 24 |     tbb |      116813 ns       122070 ns         1024
mask | 24 | avx tbb |       17523 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1527900 ns      1495361 ns          512
data |  6 | avx     |      192854 ns       183105 ns          512
data |  6 |     tbb |      220829 ns       244141 ns          512
data |  6 | avx tbb |      158620 ns       122070 ns          512
mask |  6 |         |     2274999 ns      2197266 ns          512
mask |  6 | avx     |      197233 ns       183105 ns          512
mask |  6 |     tbb |      480854 ns       457764 ns          512
mask |  6 | avx tbb |      159074 ns       183105 ns          512

data | 12 |         |      778551 ns       671387 ns          512
data | 12 | avx     |      192001 ns       274658 ns          512
data | 12 |     tbb |      196196 ns       244141 ns          512
data | 12 | avx tbb |      160455 ns       122070 ns          512
mask | 12 |         |     2266092 ns      2197266 ns          512
mask | 12 | avx     |      199084 ns       213623 ns          512
mask | 12 |     tbb |      476915 ns       427246 ns          512
mask | 12 | avx tbb |      158785 ns       152588 ns          512

data | 24 |         |      414458 ns       396729 ns          512
data | 24 | avx     |      190408 ns       244141 ns          512
data | 24 |     tbb |      198497 ns       244141 ns          512
data | 24 | avx tbb |      158763 ns       183105 ns          512
mask | 24 |         |     2279493 ns      2349854 ns          512
mask | 24 | avx     |      197829 ns       183105 ns          512
mask | 24 |     tbb |      484445 ns       427246 ns          512
mask | 24 | avx tbb |      158979 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6098500 ns      5859375 ns           64
data |  6 | avx     |      769941 ns       732422 ns           64
data |  6 |     tbb |      749828 ns       732422 ns           64
data |  6 | avx tbb |      627014 ns       976562 ns           64
mask |  6 |         |     9158950 ns      9033203 ns           64
mask |  6 | avx     |      805484 ns       488281 ns           64
mask |  6 |     tbb |     1821230 ns      1464844 ns           64
mask |  6 | avx tbb |      624592 ns      1464844 ns           64

data | 12 |         |     3169152 ns      2197266 ns           64
data | 12 | avx     |      775428 ns      1953125 ns           64
data | 12 |     tbb |      692234 ns       488281 ns           64
data | 12 | avx tbb |      633402 ns       732422 ns           64
mask | 12 |         |     9143603 ns      9521484 ns           64
mask | 12 | avx     |      803734 ns        0.000 ns           64
mask | 12 |     tbb |     1816609 ns      1220703 ns           64
mask | 12 | avx tbb |      629478 ns       976562 ns           64

data | 24 |         |     1725161 ns      1464844 ns           64
data | 24 | avx     |      775906 ns      1220703 ns           64
data | 24 |     tbb |      667795 ns       488281 ns           64
data | 24 | avx tbb |      633002 ns      1220703 ns           64
mask | 24 |         |     9109030 ns      8544922 ns           64
mask | 24 | avx     |      796211 ns       488281 ns           64
mask | 24 |     tbb |     1824742 ns      1953125 ns           64
mask | 24 | avx tbb |      629050 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24243063 ns     22949219 ns           32
data |  6 | avx     |     3098412 ns        0.000 ns           32
data |  6 |     tbb |     2722509 ns      4394531 ns           32
data |  6 | avx tbb |     2372875 ns      2441406 ns           32
mask |  6 |         |    36173484 ns     36132812 ns           32
mask |  6 | avx     |     3169725 ns       488281 ns           32
mask |  6 |     tbb |     6892244 ns      6835938 ns           32
mask |  6 | avx tbb |     2356409 ns      2929688 ns           32

data | 12 |         |    12422312 ns     12695312 ns           32
data | 12 | avx     |     3072759 ns        0.000 ns           32
data | 12 |     tbb |     2479644 ns      2929688 ns           32
data | 12 | avx tbb |     2370641 ns      1953125 ns           32
mask | 12 |         |    36163194 ns     35644531 ns           32
mask | 12 | avx     |     3159991 ns      2441406 ns           32
mask | 12 |     tbb |     6883737 ns      6835938 ns           32
mask | 12 | avx tbb |     2361475 ns      1464844 ns           32

data | 24 |         |     6541825 ns      5859375 ns           32
data | 24 | avx     |     3219462 ns        0.000 ns           32
data | 24 |     tbb |     2441041 ns      2441406 ns           32
data | 24 | avx tbb |     2376131 ns      2441406 ns           32
mask | 24 |         |    36122425 ns     37109375 ns           32
mask | 24 | avx     |     3181044 ns      4394531 ns           32
mask | 24 |     tbb |     6881006 ns      7324219 ns           32
mask | 24 | avx tbb |     2362572 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96544331 ns     96679688 ns           16
data |  6 | avx     |    12352838 ns     12695312 ns           16
data |  6 |     tbb |    10321994 ns     11718750 ns           16
data |  6 | avx tbb |     9297331 ns      8789062 ns           16
mask |  6 |         |   144538456 ns    143554688 ns           16
mask |  6 | avx     |    12680531 ns     13671875 ns           16
mask |  6 |     tbb |    27156619 ns     25390625 ns           16
mask |  6 | avx tbb |     9277856 ns     10742188 ns           16

data | 12 |         |    49120700 ns     47851562 ns           16
data | 12 | avx     |    12446663 ns     13671875 ns           16
data | 12 |     tbb |     9565987 ns      7812500 ns           16
data | 12 | avx tbb |     9291512 ns      9765625 ns           16
mask | 12 |         |   144353288 ns    144531250 ns           16
mask | 12 | avx     |    12657856 ns      9765625 ns           16
mask | 12 |     tbb |    27120975 ns     28320312 ns           16
mask | 12 | avx tbb |     9321194 ns      6835938 ns           16

data | 24 |         |    26617844 ns     24414062 ns           16
data | 24 | avx     |    12315694 ns     12695312 ns           16
data | 24 |     tbb |     9465844 ns      9765625 ns           16
data | 24 | avx tbb |     9294212 ns      8789062 ns           16
mask | 24 |         |   144412438 ns    143554688 ns           16
mask | 24 | avx     |    13249987 ns     13671875 ns           16
mask | 24 |     tbb |    27387869 ns     27343750 ns           16
mask | 24 | avx tbb |     9295887 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193326825 ns    203125000 ns            8
data |  6 | avx     |    25510488 ns     23437500 ns            8
data |  6 |     tbb |    20681037 ns     23437500 ns            8
data |  6 | avx tbb |    18546387 ns     19531250 ns            8
mask |  6 |         |   288988437 ns    285156250 ns            8
mask |  6 | avx     |    25347837 ns     23437500 ns            8
mask |  6 |     tbb |    54247375 ns     48828125 ns            8
mask |  6 | avx tbb |    18477725 ns     19531250 ns            8

data | 12 |         |    98124738 ns     97656250 ns            8
data | 12 | avx     |    26922050 ns     27343750 ns            8
data | 12 |     tbb |    18986800 ns     17578125 ns            8
data | 12 | avx tbb |    18485738 ns     19531250 ns            8
mask | 12 |         |   288631050 ns    294921875 ns            8
mask | 12 | avx     |    25363375 ns     25390625 ns            8
mask | 12 |     tbb |    54279363 ns     52734375 ns            8
mask | 12 | avx tbb |    18484462 ns     19531250 ns            8

data | 24 |         |    54246663 ns     54687500 ns            8
data | 24 | avx     |    26855913 ns     29296875 ns            8
data | 24 |     tbb |    18819375 ns     19531250 ns            8
data | 24 | avx tbb |    18458625 ns     17578125 ns            8
mask | 24 |         |   289569275 ns    294921875 ns            8
mask | 24 | avx     |    25379662 ns     27343750 ns            8
mask | 24 |     tbb |    54227550 ns     52734375 ns            8
mask | 24 | avx tbb |    18489375 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385954325 ns    386718750 ns            8
data |  6 | avx     |    49511962 ns     48828125 ns            8
data |  6 |     tbb |    39979750 ns     37109375 ns            8
data |  6 | avx tbb |    36873500 ns     35156250 ns            8
mask |  6 |         |   576693387 ns    576171875 ns            8
mask |  6 | avx     |    53347138 ns     52734375 ns            8
mask |  6 |     tbb |   107657587 ns    101562500 ns            8
mask |  6 | avx tbb |    36974225 ns     37109375 ns            8

data | 12 |         |   196142013 ns    199218750 ns            8
data | 12 | avx     |    51549287 ns     52734375 ns            8
data | 12 |     tbb |    37821125 ns     37109375 ns            8
data | 12 | avx tbb |    36886037 ns     41015625 ns            8
mask | 12 |         |   597527762 ns    597656250 ns            8
mask | 12 | avx     |    52744625 ns     50781250 ns            8
mask | 12 |     tbb |   110393500 ns     97656250 ns            8
mask | 12 | avx tbb |    37899588 ns     35156250 ns            8

data | 24 |         |   107113775 ns    103515625 ns            8
data | 24 | avx     |    53070925 ns     56640625 ns            8
data | 24 |     tbb |    37768725 ns     37109375 ns            8
data | 24 | avx tbb |    36870075 ns     39062500 ns            8
mask | 24 |         |   578489350 ns    574218750 ns            8
mask | 24 | avx     |    54498737 ns     54687500 ns            8
mask | 24 |     tbb |   108205737 ns    103515625 ns            8
mask | 24 | avx tbb |    36914688 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   775238737 ns    775390625 ns            8
data |  6 | avx     |    98908638 ns     99609375 ns            8
data |  6 |     tbb |    79390700 ns     72265625 ns            8
data |  6 | avx tbb |    73697875 ns     70312500 ns            8
mask |  6 |         |  1153945313 ns   1152343750 ns            8
mask |  6 | avx     |   102036712 ns    101562500 ns            8
mask |  6 |     tbb |   218752263 ns    203125000 ns            8
mask |  6 | avx tbb |    73672350 ns     72265625 ns            8

data | 12 |         |   392410400 ns    390625000 ns            8
data | 12 | avx     |    99162250 ns     99609375 ns            8
data | 12 |     tbb |    75623600 ns     74218750 ns            8
data | 12 | avx tbb |    73581275 ns     72265625 ns            8
mask | 12 |         |  1155100500 ns   1156250000 ns            8
mask | 12 | avx     |   101801775 ns    101562500 ns            8
mask | 12 |     tbb |   217599700 ns    205078125 ns            8
mask | 12 | avx tbb |    73637463 ns     74218750 ns            8

data | 24 |         |   209502463 ns    207031250 ns            8
data | 24 | avx     |    98977288 ns     93750000 ns            8
data | 24 |     tbb |    75307475 ns     74218750 ns            8
data | 24 | avx tbb |    73701388 ns     72265625 ns            8
mask | 24 |         |  1154957713 ns   1154296875 ns            8
mask | 24 | avx     |   101996075 ns    101562500 ns            8
mask | 24 |     tbb |   217901887 ns    203125000 ns            8
mask | 24 | avx tbb |    73768188 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76995 ns        83923 ns         2048
data |  6 |     tbb |       20182 ns        22888 ns         2048
mask |  6 |         |      136681 ns       137329 ns         2048
mask |  6 |     tbb |       34040 ns        45776 ns         2048

data | 12 |         |       39758 ns        45776 ns         2048
data | 12 |     tbb |       16025 ns        22888 ns         2048
mask | 12 |         |      133681 ns       137329 ns         2048
mask | 12 |     tbb |       34401 ns        30518 ns         2048

data | 24 |         |       20663 ns        15259 ns         2048
data | 24 |     tbb |       13313 ns        22888 ns         2048
mask | 24 |         |      137747 ns       144958 ns         2048
mask | 24 |     tbb |       34195 ns        45776 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18459 ns        30518 ns         1024
data |  6 | avx tbb |       13317 ns        30518 ns         1024
mask |  6 | avx     |       18245 ns        0.000 ns         1024
mask |  6 | avx tbb |       12870 ns        15259 ns         1024

data | 12 | avx     |       19251 ns        30518 ns         1024
data | 12 | avx tbb |       13554 ns        15259 ns         1024
mask | 12 | avx     |       18170 ns        0.000 ns         1024
mask | 12 | avx tbb |       13093 ns        0.000 ns         1024

data | 24 | avx     |       19063 ns        30518 ns         1024
data | 24 | avx tbb |       13337 ns        15259 ns         1024
mask | 24 | avx     |       17792 ns        15259 ns         1024
mask | 24 | avx tbb |       12925 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      379835 ns       350952 ns         1024
data |  6 | avx     |       29029 ns        30518 ns         1024
data |  6 |     tbb |       50629 ns        76294 ns         1024
data |  6 | avx tbb |       17952 ns        0.000 ns         1024
mask |  6 |         |      681325 ns       701904 ns         1024
mask |  6 | avx     |       32582 ns        15259 ns         1024
mask |  6 |     tbb |      137607 ns       122070 ns         1024
mask |  6 | avx tbb |       16997 ns        15259 ns         1024

data | 12 |         |      191543 ns       198364 ns         1024
data | 12 | avx     |       29072 ns        30518 ns         1024
data | 12 |     tbb |       32289 ns        61035 ns         1024
data | 12 | avx tbb |       17789 ns        0.000 ns         1024
mask | 12 |         |      695303 ns       701904 ns         1024
mask | 12 | avx     |       27287 ns        15259 ns         1024
mask | 12 |     tbb |      137100 ns       167847 ns         1024
mask | 12 | avx tbb |       17012 ns        0.000 ns         1024

data | 24 |         |       99164 ns        91553 ns         1024
data | 24 | avx     |       28984 ns        45776 ns         1024
data | 24 |     tbb |       22739 ns        61035 ns         1024
data | 24 | avx tbb |       17635 ns        0.000 ns         1024
mask | 24 |         |      702041 ns       717163 ns         1024
mask | 24 | avx     |       27550 ns        45776 ns         1024
mask | 24 |     tbb |      136278 ns       106812 ns         1024
mask | 24 | avx tbb |       17632 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1523493 ns      1556396 ns          512
data |  6 | avx     |      190868 ns       122070 ns          512
data |  6 |     tbb |      224446 ns       305176 ns          512
data |  6 | avx tbb |      158026 ns       183105 ns          512
mask |  6 |         |     2716184 ns      2716064 ns          512
mask |  6 | avx     |      195953 ns       274658 ns          512
mask |  6 |     tbb |      560552 ns       427246 ns          512
mask |  6 | avx tbb |      157934 ns        61035 ns          512

data | 12 |         |      774691 ns       732422 ns          512
data | 12 | avx     |      193794 ns       274658 ns          512
data | 12 |     tbb |      195257 ns       183105 ns          512
data | 12 | avx tbb |      159148 ns       122070 ns          512
mask | 12 |         |     2720269 ns      2716064 ns          512
mask | 12 | avx     |      197832 ns       213623 ns          512
mask | 12 |     tbb |      556977 ns       488281 ns          512
mask | 12 | avx tbb |      158147 ns       122070 ns          512

data | 24 |         |      415782 ns       427246 ns          512
data | 24 | avx     |      191862 ns       183105 ns          512
data | 24 |     tbb |      196737 ns       183105 ns          512
data | 24 | avx tbb |      159849 ns       122070 ns          512
mask | 24 |         |     2710079 ns      2685547 ns          512
mask | 24 | avx     |      199399 ns       183105 ns          512
mask | 24 |     tbb |      560850 ns       610352 ns          512
mask | 24 | avx tbb |      158051 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6104655 ns      5859375 ns           64
data |  6 | avx     |      781939 ns       732422 ns           64
data |  6 |     tbb |      758038 ns       732422 ns           64
data |  6 | avx tbb |      633034 ns       976562 ns           64
mask |  6 |         |    10903808 ns     10498047 ns           64
mask |  6 | avx     |      786833 ns       732422 ns           64
mask |  6 |     tbb |     2110803 ns      2685547 ns           64
mask |  6 | avx tbb |      592308 ns       732422 ns           64

data | 12 |         |     3110486 ns      3173828 ns           64
data | 12 | avx     |      773214 ns       976562 ns           64
data | 12 |     tbb |      698091 ns       488281 ns           64
data | 12 | avx tbb |      629994 ns       976562 ns           64
mask | 12 |         |    10926398 ns     10986328 ns           64
mask | 12 | avx     |      799191 ns      1220703 ns           64
mask | 12 |     tbb |     2108638 ns      3173828 ns           64
mask | 12 | avx tbb |      594864 ns       732422 ns           64

data | 24 |         |     1660489 ns      2441406 ns           64
data | 24 | avx     |      774267 ns      1220703 ns           64
data | 24 |     tbb |      673269 ns       488281 ns           64
data | 24 | avx tbb |      632344 ns       732422 ns           64
mask | 24 |         |    10945369 ns     11230469 ns           64
mask | 24 | avx     |      798978 ns       976562 ns           64
mask | 24 |     tbb |     2135509 ns      1953125 ns           64
mask | 24 | avx tbb |      594500 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24290719 ns     23925781 ns           32
data |  6 | avx     |     3057625 ns        0.000 ns           32
data |  6 |     tbb |     2658656 ns      1953125 ns           32
data |  6 | avx tbb |     2366784 ns      1464844 ns           32
mask |  6 |         |    43210434 ns     42480469 ns           32
mask |  6 | avx     |     3150947 ns      3906250 ns           32
mask |  6 |     tbb |     8196188 ns      7812500 ns           32
mask |  6 | avx tbb |     2357838 ns      2441406 ns           32

data | 12 |         |    12303969 ns     11718750 ns           32
data | 12 | avx     |     3130037 ns        0.000 ns           32
data | 12 |     tbb |     2460559 ns      2929688 ns           32
data | 12 | avx tbb |     2367559 ns      1464844 ns           32
mask | 12 |         |    43259100 ns     44433594 ns           32
mask | 12 | avx     |     3140106 ns      4882812 ns           32
mask | 12 |     tbb |     8188291 ns      8300781 ns           32
mask | 12 | avx tbb |     2361862 ns      1464844 ns           32

data | 24 |         |     6568094 ns      6835938 ns           32
data | 24 | avx     |     3345962 ns      6835938 ns           32
data | 24 |     tbb |     2430684 ns      2441406 ns           32
data | 24 | avx tbb |     2369191 ns      2441406 ns           32
mask | 24 |         |    43241034 ns     42480469 ns           32
mask | 24 | avx     |     3141456 ns      1464844 ns           32
mask | 24 |     tbb |     8174675 ns      7324219 ns           32
mask | 24 | avx tbb |     2366100 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96716862 ns     97656250 ns           16
data |  6 | avx     |    12897144 ns     10742188 ns           16
data |  6 |     tbb |    10384244 ns      7812500 ns           16
data |  6 | avx tbb |     9282750 ns      8789062 ns           16
mask |  6 |         |   173230356 ns    172851562 ns           16
mask |  6 | avx     |    12618713 ns     13671875 ns           16
mask |  6 |     tbb |    32423550 ns     32226562 ns           16
mask |  6 | avx tbb |     9280737 ns     10742188 ns           16

data | 12 |         |    49490037 ns     49804688 ns           16
data | 12 | avx     |    12369131 ns     12695312 ns           16
data | 12 |     tbb |     9528806 ns     11718750 ns           16
data | 12 | avx tbb |     9283494 ns      5859375 ns           16
mask | 12 |         |   173465769 ns    174804688 ns           16
mask | 12 | avx     |    12701381 ns     13671875 ns           16
mask | 12 |     tbb |    32293781 ns     32226562 ns           16
mask | 12 | avx tbb |     9271681 ns      8789062 ns           16

data | 24 |         |    26137906 ns     24414062 ns           16
data | 24 | avx     |    12327781 ns     14648438 ns           16
data | 24 |     tbb |     9456125 ns      8789062 ns           16
data | 24 | avx tbb |     9273762 ns      9765625 ns           16
mask | 24 |         |   173262806 ns    172851562 ns           16
mask | 24 | avx     |    12708031 ns     11718750 ns           16
mask | 24 |     tbb |    32250381 ns     31250000 ns           16
mask | 24 | avx tbb |     9296675 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   192777425 ns    197265625 ns            8
data |  6 | avx     |    24800088 ns     21484375 ns            8
data |  6 |     tbb |    20344063 ns     15625000 ns            8
data |  6 | avx tbb |    18459500 ns     19531250 ns            8
mask |  6 |         |   345928013 ns    345703125 ns            8
mask |  6 | avx     |    27666513 ns     27343750 ns            8
mask |  6 |     tbb |    64594762 ns     62500000 ns            8
mask |  6 | avx tbb |    18501937 ns     15625000 ns            8

data | 12 |         |    98213763 ns     99609375 ns            8
data | 12 | avx     |    24769562 ns     23437500 ns            8
data | 12 |     tbb |    19072675 ns     17578125 ns            8
data | 12 | avx tbb |    18532288 ns     15625000 ns            8
mask | 12 |         |   347177063 ns    347656250 ns            8
mask | 12 | avx     |    25375450 ns     27343750 ns            8
mask | 12 |     tbb |    64468862 ns     58593750 ns            8
mask | 12 | avx tbb |    18534900 ns     17578125 ns            8

data | 24 |         |    52299975 ns     54687500 ns            8
data | 24 | avx     |    24724275 ns     23437500 ns            8
data | 24 |     tbb |    19108925 ns     17578125 ns            8
data | 24 | avx tbb |    18457313 ns     19531250 ns            8
mask | 24 |         |   346927062 ns    343750000 ns            8
mask | 24 | avx     |    25392100 ns     25390625 ns            8
mask | 24 |     tbb |    65186537 ns     58593750 ns            8
mask | 24 | avx tbb |    18512663 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385424925 ns    386718750 ns            8
data |  6 | avx     |    49646537 ns     50781250 ns            8
data |  6 |     tbb |    40103187 ns     39062500 ns            8
data |  6 | avx tbb |    36847787 ns     39062500 ns            8
mask |  6 |         |   693253750 ns    693359375 ns            8
mask |  6 | avx     |    50778812 ns     52734375 ns            8
mask |  6 |     tbb |   129427175 ns    117187500 ns            8
mask |  6 | avx tbb |    36908175 ns     35156250 ns            8

data | 12 |         |   197810150 ns    195312500 ns            8
data | 12 | avx     |    49825975 ns     48828125 ns            8
data | 12 |     tbb |    37795775 ns     35156250 ns            8
data | 12 | avx tbb |    36851312 ns     33203125 ns            8
mask | 12 |         |   691366800 ns    693359375 ns            8
mask | 12 | avx     |    50838312 ns     50781250 ns            8
mask | 12 |     tbb |   129927138 ns    119140625 ns            8
mask | 12 | avx tbb |    36842587 ns     39062500 ns            8

data | 24 |         |   104682288 ns    105468750 ns            8
data | 24 | avx     |    51665487 ns     48828125 ns            8
data | 24 |     tbb |    37449662 ns     37109375 ns            8
data | 24 | avx tbb |    36997412 ns     35156250 ns            8
mask | 24 |         |   693991775 ns    695312500 ns            8
mask | 24 | avx     |    52801163 ns     52734375 ns            8
mask | 24 |     tbb |   128911250 ns    119140625 ns            8
mask | 24 | avx tbb |    36987575 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   776419687 ns    775390625 ns            8
data |  6 | avx     |   100024463 ns    101562500 ns            8
data |  6 |     tbb |    79134062 ns     72265625 ns            8
data |  6 | avx tbb |    73594587 ns     68359375 ns            8
mask |  6 |         |  1383939550 ns   1384765625 ns            8
mask |  6 | avx     |   102017850 ns    101562500 ns            8
mask |  6 |     tbb |   258057288 ns    242187500 ns            8
mask |  6 | avx tbb |    73698387 ns     72265625 ns            8

data | 12 |         |   394175625 ns    396484375 ns            8
data | 12 | avx     |    99168237 ns     99609375 ns            8
data | 12 |     tbb |    75565487 ns     72265625 ns            8
data | 12 | avx tbb |    73551950 ns     74218750 ns            8
mask | 12 |         |  1382420712 ns   1380859375 ns            8
mask | 12 | avx     |   101664275 ns     99609375 ns            8
mask | 12 |     tbb |   257512437 ns    248046875 ns            8
mask | 12 | avx tbb |    73683537 ns     72265625 ns            8

data | 24 |         |   210046325 ns    210937500 ns            8
data | 24 | avx     |    99291450 ns     99609375 ns            8
data | 24 |     tbb |    75057613 ns     72265625 ns            8
data | 24 | avx tbb |    73739625 ns     72265625 ns            8
mask | 24 |         |  1383503563 ns   1382812500 ns            8
mask | 24 | avx     |   101500238 ns    103515625 ns            8
mask | 24 |     tbb |   259306013 ns    250000000 ns            8
mask | 24 | avx tbb |    73759388 ns     70312500 ns            8
```

</details>

