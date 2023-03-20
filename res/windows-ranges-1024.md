# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       84164 ns        91553 ns         2048
data |  6 |     tbb |       38036 ns        30518 ns         2048
mask |  6 |         |      124081 ns       122070 ns         2048
mask |  6 |     tbb |       36209 ns        38147 ns         2048

data | 12 |         |       43005 ns        38147 ns         2048
data | 12 |     tbb |       32763 ns        45776 ns         2048
mask | 12 |         |      128787 ns       137329 ns         2048
mask | 12 |     tbb |       36690 ns        45776 ns         2048

data | 24 |         |       23363 ns        22888 ns         2048
data | 24 |     tbb |       31272 ns        22888 ns         2048
mask | 24 |         |      123842 ns       129700 ns         2048
mask | 24 |     tbb |       36725 ns        22888 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17523 ns        30518 ns         1024
data |  6 | avx tbb |       15372 ns        15259 ns         1024
mask |  6 | avx     |       19123 ns        30518 ns         1024
mask |  6 | avx tbb |       15574 ns        0.000 ns         1024

data | 12 | avx     |       17347 ns        0.000 ns         1024
data | 12 | avx tbb |       16197 ns        15259 ns         1024
mask | 12 | avx     |       18862 ns        15259 ns         1024
mask | 12 | avx tbb |       15814 ns        15259 ns         1024

data | 24 | avx     |       17179 ns        15259 ns         1024
data | 24 | avx tbb |       16469 ns        0.000 ns         1024
mask | 24 | avx     |       19134 ns        0.000 ns         1024
mask | 24 | avx tbb |       16186 ns        0.000 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      420364 ns       442505 ns         1024
data |  6 | avx     |       26218 ns        15259 ns         1024
data |  6 |     tbb |       71079 ns        45776 ns         1024
data |  6 | avx tbb |       19601 ns        30518 ns         1024
mask |  6 |         |      623974 ns       640869 ns         1024
mask |  6 | avx     |       29044 ns        15259 ns         1024
mask |  6 |     tbb |      128991 ns       122070 ns         1024
mask |  6 | avx tbb |       19454 ns        15259 ns         1024

data | 12 |         |      214089 ns       213623 ns         1024
data | 12 | avx     |       26019 ns        30518 ns         1024
data | 12 |     tbb |       50769 ns        0.000 ns         1024
data | 12 | avx tbb |       19884 ns        15259 ns         1024
mask | 12 |         |      628160 ns       640869 ns         1024
mask | 12 | avx     |       29052 ns        30518 ns         1024
mask | 12 |     tbb |      127815 ns       152588 ns         1024
mask | 12 | avx tbb |       19505 ns        0.000 ns         1024

data | 24 |         |      111198 ns        76294 ns         1024
data | 24 | avx     |       26206 ns        0.000 ns         1024
data | 24 |     tbb |       41318 ns        30518 ns         1024
data | 24 | avx tbb |       19729 ns        0.000 ns         1024
mask | 24 |         |      624161 ns       625610 ns         1024
mask | 24 | avx     |       29114 ns        30518 ns         1024
mask | 24 |     tbb |      127847 ns       152588 ns         1024
mask | 24 | avx tbb |       19854 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1673255 ns      1617432 ns          512
data |  6 | avx     |      194110 ns       152588 ns          512
data |  6 |     tbb |      237855 ns       213623 ns          512
data |  6 | avx tbb |      159302 ns       152588 ns          512
mask |  6 |         |     2517014 ns      2563477 ns          512
mask |  6 | avx     |      195551 ns       244141 ns          512
mask |  6 |     tbb |      503919 ns       488281 ns          512
mask |  6 | avx tbb |      160955 ns       183105 ns          512

data | 12 |         |      860722 ns       854492 ns          512
data | 12 | avx     |      199925 ns       213623 ns          512
data | 12 |     tbb |      203551 ns       244141 ns          512
data | 12 | avx tbb |      160461 ns       183105 ns          512
mask | 12 |         |     2498201 ns      2502441 ns          512
mask | 12 | avx     |      196986 ns       152588 ns          512
mask | 12 |     tbb |      503712 ns       427246 ns          512
mask | 12 | avx tbb |      158303 ns       183105 ns          512

data | 24 |         |      464231 ns       518799 ns          512
data | 24 | avx     |      196374 ns       244141 ns          512
data | 24 |     tbb |      196288 ns       152588 ns          512
data | 24 | avx tbb |      159539 ns       122070 ns          512
mask | 24 |         |     2494107 ns      2532959 ns          512
mask | 24 | avx     |      195894 ns       152588 ns          512
mask | 24 |     tbb |      505531 ns       579834 ns          512
mask | 24 | avx tbb |      158786 ns        91553 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6696605 ns      6591797 ns           64
data |  6 | avx     |      820041 ns       976562 ns           64
data |  6 |     tbb |      761177 ns      1220703 ns           64
data |  6 | avx tbb |      622534 ns       976562 ns           64
mask |  6 |         |    10069798 ns     10253906 ns           64
mask |  6 | avx     |      787672 ns       732422 ns           64
mask |  6 |     tbb |     1877452 ns      1953125 ns           64
mask |  6 | avx tbb |      591152 ns       732422 ns           64

data | 12 |         |     3452956 ns      3906250 ns           64
data | 12 | avx     |      790175 ns       488281 ns           64
data | 12 |     tbb |      686211 ns       244141 ns           64
data | 12 | avx tbb |      630055 ns      1220703 ns           64
mask | 12 |         |    10046347 ns     10009766 ns           64
mask | 12 | avx     |      801992 ns       976562 ns           64
mask | 12 |     tbb |     1878530 ns      1953125 ns           64
mask | 12 | avx tbb |      593036 ns       488281 ns           64

data | 24 |         |     1908167 ns      2441406 ns           64
data | 24 | avx     |      789814 ns       488281 ns           64
data | 24 |     tbb |      675616 ns       732422 ns           64
data | 24 | avx tbb |      631469 ns       488281 ns           64
mask | 24 |         |    10035622 ns     10253906 ns           64
mask | 24 | avx     |      796966 ns       488281 ns           64
mask | 24 |     tbb |     1886850 ns      2685547 ns           64
mask | 24 | avx tbb |      593806 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26547691 ns     20507812 ns           32
data |  6 | avx     |     3151841 ns      4394531 ns           32
data |  6 |     tbb |     2696653 ns      1464844 ns           32
data |  6 | avx tbb |     2430788 ns      2441406 ns           32
mask |  6 |         |    39674462 ns     40039062 ns           32
mask |  6 | avx     |     3177628 ns      2929688 ns           32
mask |  6 |     tbb |     7335825 ns      7324219 ns           32
mask |  6 | avx tbb |     2356091 ns      2441406 ns           32

data | 12 |         |    13657191 ns     13183594 ns           32
data | 12 | avx     |     3134197 ns      1953125 ns           32
data | 12 |     tbb |     2430966 ns      2929688 ns           32
data | 12 | avx tbb |     2360456 ns      2441406 ns           32
mask | 12 |         |    39878197 ns     39550781 ns           32
mask | 12 | avx     |     3170366 ns      2441406 ns           32
mask | 12 |     tbb |     7323159 ns      6835938 ns           32
mask | 12 | avx tbb |     2349291 ns      1953125 ns           32

data | 24 |         |     7104650 ns      6835938 ns           32
data | 24 | avx     |     3416038 ns      4394531 ns           32
data | 24 |     tbb |     2425950 ns      1464844 ns           32
data | 24 | avx tbb |     2369166 ns      2441406 ns           32
mask | 24 |         |    39868250 ns     40039062 ns           32
mask | 24 | avx     |     3160056 ns      3417969 ns           32
mask | 24 |     tbb |     7317128 ns      7812500 ns           32
mask | 24 | avx tbb |     2345769 ns      3417969 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106420094 ns    104492188 ns           16
data |  6 | avx     |    12686963 ns     13671875 ns           16
data |  6 |     tbb |    10389725 ns     12695312 ns           16
data |  6 | avx tbb |     9244281 ns      9765625 ns           16
mask |  6 |         |   158537006 ns    157226562 ns           16
mask |  6 | avx     |    12762012 ns     12695312 ns           16
mask |  6 |     tbb |    28970050 ns     29296875 ns           16
mask |  6 | avx tbb |     9237412 ns     10742188 ns           16

data | 12 |         |    54714581 ns     55664062 ns           16
data | 12 | avx     |    12637862 ns     13671875 ns           16
data | 12 |     tbb |     9432100 ns      8789062 ns           16
data | 12 | avx tbb |     9245719 ns     10742188 ns           16
mask | 12 |         |   158886787 ns    159179688 ns           16
mask | 12 | avx     |    12675044 ns     12695312 ns           16
mask | 12 |     tbb |    28939338 ns     28320312 ns           16
mask | 12 | avx tbb |     9234819 ns      8789062 ns           16

data | 24 |         |    28317981 ns     28320312 ns           16
data | 24 | avx     |    12872963 ns     13671875 ns           16
data | 24 |     tbb |     9407706 ns      9765625 ns           16
data | 24 | avx tbb |     9241187 ns      7812500 ns           16
mask | 24 |         |   158826744 ns    159179688 ns           16
mask | 24 | avx     |    12706231 ns     11718750 ns           16
mask | 24 |     tbb |    28971919 ns     29296875 ns           16
mask | 24 | avx tbb |     9236031 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   213291225 ns    214843750 ns            8
data |  6 | avx     |    25200000 ns     27343750 ns            8
data |  6 |     tbb |    20639225 ns     19531250 ns            8
data |  6 | avx tbb |    18408075 ns     19531250 ns            8
mask |  6 |         |   318729137 ns    320312500 ns            8
mask |  6 | avx     |    25693450 ns     27343750 ns            8
mask |  6 |     tbb |    57761475 ns     58593750 ns            8
mask |  6 | avx tbb |    18434125 ns     17578125 ns            8

data | 12 |         |   108629013 ns    105468750 ns            8
data | 12 | avx     |    27461288 ns     25390625 ns            8
data | 12 |     tbb |    18751025 ns     19531250 ns            8
data | 12 | avx tbb |    18417737 ns     15625000 ns            8
mask | 12 |         |   317124325 ns    318359375 ns            8
mask | 12 | avx     |    25222037 ns     25390625 ns            8
mask | 12 |     tbb |    57832638 ns     58593750 ns            8
mask | 12 | avx tbb |    18423863 ns     19531250 ns            8

data | 24 |         |    56611000 ns     54687500 ns            8
data | 24 | avx     |    25451575 ns     25390625 ns            8
data | 24 |     tbb |    18723637 ns     19531250 ns            8
data | 24 | avx tbb |    18415300 ns     19531250 ns            8
mask | 24 |         |   317350663 ns    318359375 ns            8
mask | 24 | avx     |    25655275 ns     25390625 ns            8
mask | 24 |     tbb |    57811800 ns     58593750 ns            8
mask | 24 | avx tbb |    18421800 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   425452425 ns    425781250 ns            8
data |  6 | avx     |    50368850 ns     50781250 ns            8
data |  6 |     tbb |    41065675 ns     42968750 ns            8
data |  6 | avx tbb |    36761975 ns     35156250 ns            8
mask |  6 |         |   635016963 ns    632812500 ns            8
mask |  6 | avx     |    50880450 ns     50781250 ns            8
mask |  6 |     tbb |   115510287 ns    117187500 ns            8
mask |  6 | avx tbb |    36774900 ns     39062500 ns            8

data | 12 |         |   217135000 ns    216796875 ns            8
data | 12 | avx     |    51380100 ns     50781250 ns            8
data | 12 |     tbb |    37317412 ns     37109375 ns            8
data | 12 | avx tbb |    36747775 ns     35156250 ns            8
mask | 12 |         |   634509475 ns    632812500 ns            8
mask | 12 | avx     |    50769175 ns     48828125 ns            8
mask | 12 |     tbb |   115597375 ns    115234375 ns            8
mask | 12 | avx tbb |    36794875 ns     35156250 ns            8

data | 24 |         |   113602913 ns    113281250 ns            8
data | 24 | avx     |    50504187 ns     52734375 ns            8
data | 24 |     tbb |    37352337 ns     41015625 ns            8
data | 24 | avx tbb |    36797400 ns     35156250 ns            8
mask | 24 |         |   635419525 ns    634765625 ns            8
mask | 24 | avx     |    51421588 ns     54687500 ns            8
mask | 24 |     tbb |   115540850 ns    117187500 ns            8
mask | 24 | avx tbb |    36755350 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   849950688 ns    849609375 ns            8
data |  6 | avx     |   101403875 ns    101562500 ns            8
data |  6 |     tbb |    81956088 ns     82031250 ns            8
data |  6 | avx tbb |    73500087 ns     74218750 ns            8
mask |  6 |         |  1271324888 ns   1269531250 ns            8
mask |  6 | avx     |   102030825 ns    103515625 ns            8
mask |  6 |     tbb |   230987487 ns    232421875 ns            8
mask |  6 | avx tbb |    73472825 ns     70312500 ns            8

data | 12 |         |   433721438 ns    431640625 ns            8
data | 12 | avx     |   101481150 ns    101562500 ns            8
data | 12 |     tbb |    74669662 ns     76171875 ns            8
data | 12 | avx tbb |    73465463 ns     76171875 ns            8
mask | 12 |         |  1268589250 ns   1267578125 ns            8
mask | 12 | avx     |   101946788 ns    101562500 ns            8
mask | 12 |     tbb |   230907450 ns    228515625 ns            8
mask | 12 | avx tbb |    73495162 ns     74218750 ns            8

data | 24 |         |   226724850 ns    224609375 ns            8
data | 24 | avx     |   100757750 ns    101562500 ns            8
data | 24 |     tbb |    74609837 ns     74218750 ns            8
data | 24 | avx tbb |    73517738 ns     72265625 ns            8
mask | 24 |         |  1268596625 ns   1267578125 ns            8
mask | 24 | avx     |   101827563 ns     97656250 ns            8
mask | 24 |     tbb |   230957912 ns    228515625 ns            8
mask | 24 | avx tbb |    73464875 ns     70312500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75556 ns        53406 ns         2048
data |  6 |     tbb |       36500 ns        53406 ns         2048
mask |  6 |         |      116564 ns       114441 ns         2048
mask |  6 |     tbb |       38753 ns        45776 ns         2048

data | 12 |         |       40116 ns        45776 ns         2048
data | 12 |     tbb |       34552 ns        38147 ns         2048
mask | 12 |         |      117453 ns       114441 ns         2048
mask | 12 |     tbb |       38171 ns        38147 ns         2048

data | 24 |         |       21455 ns        15259 ns         2048
data | 24 |     tbb |       30941 ns        30518 ns         2048
mask | 24 |         |      114093 ns       106812 ns         2048
mask | 24 |     tbb |       34574 ns        30518 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19088 ns        15259 ns         1024
data |  6 | avx tbb |       15838 ns        15259 ns         1024
mask |  6 | avx     |       18127 ns        45776 ns         1024
mask |  6 | avx tbb |       15108 ns        30518 ns         1024

data | 12 | avx     |       18866 ns        30518 ns         1024
data | 12 | avx tbb |       16057 ns        15259 ns         1024
mask | 12 | avx     |       17946 ns        30518 ns         1024
mask | 12 | avx tbb |       15160 ns        0.000 ns         1024

data | 24 | avx     |       18847 ns        30518 ns         1024
data | 24 | avx tbb |       15622 ns        0.000 ns         1024
mask | 24 | avx     |       17908 ns        15259 ns         1024
mask | 24 | avx tbb |       15399 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      379823 ns       381470 ns         1024
data |  6 | avx     |       29050 ns        15259 ns         1024
data |  6 |     tbb |       69217 ns       106812 ns         1024
data |  6 | avx tbb |       20112 ns        30518 ns         1024
mask |  6 |         |      566994 ns       549316 ns         1024
mask |  6 | avx     |       27755 ns        45776 ns         1024
mask |  6 |     tbb |      117250 ns       137329 ns         1024
mask |  6 | avx tbb |       19401 ns        15259 ns         1024

data | 12 |         |      191544 ns       183105 ns         1024
data | 12 | avx     |       28976 ns        15259 ns         1024
data | 12 |     tbb |       50868 ns        15259 ns         1024
data | 12 | avx tbb |       20063 ns        30518 ns         1024
mask | 12 |         |      568947 ns       579834 ns         1024
mask | 12 | avx     |       27733 ns        45776 ns         1024
mask | 12 |     tbb |      117490 ns       137329 ns         1024
mask | 12 | avx tbb |       19260 ns        30518 ns         1024

data | 24 |         |       98710 ns        91553 ns         1024
data | 24 | avx     |       29225 ns        30518 ns         1024
data | 24 |     tbb |       40667 ns        45776 ns         1024
data | 24 | avx tbb |       19863 ns        15259 ns         1024
mask | 24 |         |      565670 ns       534058 ns         1024
mask | 24 | avx     |       27480 ns        45776 ns         1024
mask | 24 |     tbb |      117215 ns       122070 ns         1024
mask | 24 | avx tbb |       19397 ns        61035 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1520512 ns      1525879 ns          512
data |  6 | avx     |      193152 ns       244141 ns          512
data |  6 |     tbb |      233672 ns       244141 ns          512
data |  6 | avx tbb |      160480 ns       183105 ns          512
mask |  6 |         |     2265033 ns      2349854 ns          512
mask |  6 | avx     |      199893 ns       183105 ns          512
mask |  6 |     tbb |      462150 ns       396729 ns          512
mask |  6 | avx tbb |      158269 ns       152588 ns          512

data | 12 |         |      777061 ns       793457 ns          512
data | 12 | avx     |      191694 ns       152588 ns          512
data | 12 |     tbb |      206017 ns        91553 ns          512
data | 12 | avx tbb |      160593 ns       122070 ns          512
mask | 12 |         |     2274998 ns      2349854 ns          512
mask | 12 | avx     |      197064 ns       152588 ns          512
mask | 12 |     tbb |      464161 ns       427246 ns          512
mask | 12 | avx tbb |      159542 ns        91553 ns          512

data | 24 |         |      414407 ns       427246 ns          512
data | 24 | avx     |      190610 ns       274658 ns          512
data | 24 |     tbb |      199032 ns       183105 ns          512
data | 24 | avx tbb |      160018 ns       152588 ns          512
mask | 24 |         |     2264897 ns      2380371 ns          512
mask | 24 | avx     |      197029 ns       244141 ns          512
mask | 24 |     tbb |      464685 ns       457764 ns          512
mask | 24 | avx tbb |      159617 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6084338 ns      7080078 ns           64
data |  6 | avx     |      790305 ns       244141 ns           64
data |  6 |     tbb |      736898 ns       488281 ns           64
data |  6 | avx tbb |      629081 ns       488281 ns           64
mask |  6 |         |     9117544 ns      8544922 ns           64
mask |  6 | avx     |      799905 ns       732422 ns           64
mask |  6 |     tbb |     1719161 ns      1708984 ns           64
mask |  6 | avx tbb |      591661 ns       732422 ns           64

data | 12 |         |     3110047 ns      2929688 ns           64
data | 12 | avx     |      772144 ns        0.000 ns           64
data | 12 |     tbb |      682191 ns       976562 ns           64
data | 12 | avx tbb |      632086 ns        0.000 ns           64
mask | 12 |         |     9090319 ns      9521484 ns           64
mask | 12 | avx     |      791866 ns      1464844 ns           64
mask | 12 |     tbb |     1724786 ns      1464844 ns           64
mask | 12 | avx tbb |      591247 ns       732422 ns           64

data | 24 |         |     1682166 ns      1464844 ns           64
data | 24 | avx     |      779528 ns       732422 ns           64
data | 24 |     tbb |      670894 ns       976562 ns           64
data | 24 | avx tbb |      631505 ns       976562 ns           64
mask | 24 |         |     9180319 ns      9277344 ns           64
mask | 24 | avx     |      802386 ns      1220703 ns           64
mask | 24 |     tbb |     1717798 ns      1708984 ns           64
mask | 24 | avx tbb |      591125 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24152881 ns     23925781 ns           32
data |  6 | avx     |     3088756 ns      4394531 ns           32
data |  6 |     tbb |     2549300 ns      1464844 ns           32
data |  6 | avx tbb |     2354041 ns      1953125 ns           32
mask |  6 |         |    36259972 ns     37597656 ns           32
mask |  6 | avx     |     3217472 ns      3906250 ns           32
mask |  6 |     tbb |     6619088 ns      7812500 ns           32
mask |  6 | avx tbb |     2349578 ns      1953125 ns           32

data | 12 |         |    12285612 ns     12207031 ns           32
data | 12 | avx     |     3239775 ns      5859375 ns           32
data | 12 |     tbb |     2427841 ns      1953125 ns           32
data | 12 | avx tbb |     2368288 ns      2441406 ns           32
mask | 12 |         |    36182741 ns     37109375 ns           32
mask | 12 | avx     |     3257469 ns      3417969 ns           32
mask | 12 |     tbb |     6649247 ns      6347656 ns           32
mask | 12 | avx tbb |     2345972 ns      2441406 ns           32

data | 24 |         |     6760237 ns      7324219 ns           32
data | 24 | avx     |     3076847 ns      2441406 ns           32
data | 24 |     tbb |     2413169 ns      2441406 ns           32
data | 24 | avx tbb |     2365984 ns      1953125 ns           32
mask | 24 |         |    36202503 ns     36132812 ns           32
mask | 24 | avx     |     3191262 ns      3417969 ns           32
mask | 24 |     tbb |     6644397 ns      7324219 ns           32
mask | 24 | avx tbb |     2349428 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96393463 ns     98632812 ns           16
data |  6 | avx     |    12461931 ns     12695312 ns           16
data |  6 |     tbb |     9856413 ns     10742188 ns           16
data |  6 | avx tbb |     9240469 ns      8789062 ns           16
mask |  6 |         |   144801325 ns    142578125 ns           16
mask |  6 | avx     |    12635119 ns     12695312 ns           16
mask |  6 |     tbb |    26230150 ns     24414062 ns           16
mask |  6 | avx tbb |     9248094 ns      9765625 ns           16

data | 12 |         |    49033644 ns     48828125 ns           16
data | 12 | avx     |    12431531 ns     13671875 ns           16
data | 12 |     tbb |     9426738 ns      9765625 ns           16
data | 12 | avx tbb |     9265850 ns      9765625 ns           16
mask | 12 |         |   144457881 ns    142578125 ns           16
mask | 12 | avx     |    13335519 ns     14648438 ns           16
mask | 12 |     tbb |    26261906 ns     28320312 ns           16
mask | 12 | avx tbb |     9262838 ns      9765625 ns           16

data | 24 |         |    26358144 ns     31250000 ns           16
data | 24 | avx     |    12565325 ns     12695312 ns           16
data | 24 |     tbb |     9411169 ns      8789062 ns           16
data | 24 | avx tbb |     9244725 ns     10742188 ns           16
mask | 24 |         |   144698163 ns    145507812 ns           16
mask | 24 | avx     |    12767675 ns     11718750 ns           16
mask | 24 |     tbb |    26259200 ns     31250000 ns           16
mask | 24 | avx tbb |     9288269 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193627150 ns    187500000 ns            8
data |  6 | avx     |    25663700 ns     23437500 ns            8
data |  6 |     tbb |    19537663 ns     19531250 ns            8
data |  6 | avx tbb |    18417800 ns     19531250 ns            8
mask |  6 |         |   289004000 ns    291015625 ns            8
mask |  6 | avx     |    25753638 ns     23437500 ns            8
mask |  6 |     tbb |    52409613 ns     62500000 ns            8
mask |  6 | avx tbb |    18468088 ns     19531250 ns            8

data | 12 |         |    99637762 ns     99609375 ns            8
data | 12 | avx     |    24801763 ns     25390625 ns            8
data | 12 |     tbb |    18758187 ns     19531250 ns            8
data | 12 | avx tbb |    18408100 ns     17578125 ns            8
mask | 12 |         |   289021662 ns    289062500 ns            8
mask | 12 | avx     |    25730062 ns     25390625 ns            8
mask | 12 |     tbb |    52447250 ns     46875000 ns            8
mask | 12 | avx tbb |    18420988 ns     19531250 ns            8

data | 24 |         |    52565275 ns     46875000 ns            8
data | 24 | avx     |    24990988 ns     25390625 ns            8
data | 24 |     tbb |    18689188 ns     19531250 ns            8
data | 24 | avx tbb |    18407250 ns     19531250 ns            8
mask | 24 |         |   288502850 ns    281250000 ns            8
mask | 24 | avx     |    27602000 ns     27343750 ns            8
mask | 24 |     tbb |    52436513 ns     46875000 ns            8
mask | 24 | avx tbb |    18425637 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385814562 ns    384765625 ns            8
data |  6 | avx     |    49977900 ns     48828125 ns            8
data |  6 |     tbb |    38847513 ns     42968750 ns            8
data |  6 | avx tbb |    36768950 ns     37109375 ns            8
mask |  6 |         |   575597862 ns    578125000 ns            8
mask |  6 | avx     |    51361000 ns     54687500 ns            8
mask |  6 |     tbb |   104713337 ns    109375000 ns            8
mask |  6 | avx tbb |    36778750 ns     35156250 ns            8

data | 12 |         |   196412437 ns    195312500 ns            8
data | 12 | avx     |    50063437 ns     50781250 ns            8
data | 12 |     tbb |    37446313 ns     37109375 ns            8
data | 12 | avx tbb |    38761762 ns     37109375 ns            8
mask | 12 |         |   577968350 ns    578125000 ns            8
mask | 12 | avx     |    51313138 ns     48828125 ns            8
mask | 12 |     tbb |   104764762 ns    109375000 ns            8
mask | 12 | avx tbb |    36790688 ns     37109375 ns            8

data | 24 |         |   105109875 ns    107421875 ns            8
data | 24 | avx     |    50018238 ns     52734375 ns            8
data | 24 |     tbb |    37330700 ns     37109375 ns            8
data | 24 | avx tbb |    36792238 ns     35156250 ns            8
mask | 24 |         |   577232063 ns    578125000 ns            8
mask | 24 | avx     |    51244075 ns     50781250 ns            8
mask | 24 |     tbb |   104664563 ns    109375000 ns            8
mask | 24 | avx tbb |    36785425 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   770062350 ns    771484375 ns            8
data |  6 | avx     |    99907687 ns     99609375 ns            8
data |  6 |     tbb |    77488638 ns     78125000 ns            8
data |  6 | avx tbb |    73457362 ns     76171875 ns            8
mask |  6 |         |  1156656875 ns   1156250000 ns            8
mask |  6 | avx     |   103304050 ns    103515625 ns            8
mask |  6 |     tbb |   209319525 ns    208984375 ns            8
mask |  6 | avx tbb |    73510487 ns     78125000 ns            8

data | 12 |         |   393083850 ns    394531250 ns            8
data | 12 | avx     |    99881525 ns    101562500 ns            8
data | 12 |     tbb |    74730775 ns     74218750 ns            8
data | 12 | avx tbb |    73526988 ns     72265625 ns            8
mask | 12 |         |  1152147562 ns   1154296875 ns            8
mask | 12 | avx     |   102634725 ns     93750000 ns            8
mask | 12 |     tbb |   209231262 ns    207031250 ns            8
mask | 12 | avx tbb |    73517462 ns     76171875 ns            8

data | 24 |         |   210311675 ns    210937500 ns            8
data | 24 | avx     |   100087875 ns    105468750 ns            8
data | 24 |     tbb |    74664562 ns     74218750 ns            8
data | 24 | avx tbb |    73507825 ns     72265625 ns            8
mask | 24 |         |  1156398125 ns   1158203125 ns            8
mask | 24 | avx     |   103032662 ns    103515625 ns            8
mask | 24 |     tbb |   209373825 ns    208984375 ns            8
mask | 24 | avx tbb |    73526650 ns     70312500 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76542 ns        68665 ns         2048
data |  6 |     tbb |       35968 ns        45776 ns         2048
mask |  6 |         |      137660 ns       137329 ns         2048
mask |  6 |     tbb |       38175 ns        38147 ns         2048

data | 12 |         |       39580 ns        38147 ns         2048
data | 12 |     tbb |       31905 ns        30518 ns         2048
mask | 12 |         |      134951 ns       144958 ns         2048
mask | 12 |     tbb |       37818 ns        30518 ns         2048

data | 24 |         |       21167 ns        15259 ns         2048
data | 24 |     tbb |       30376 ns        30518 ns         2048
mask | 24 |         |      137273 ns       137329 ns         2048
mask | 24 |     tbb |       37732 ns        45776 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19996 ns        15259 ns         1024
data |  6 | avx tbb |       15847 ns        15259 ns         1024
mask |  6 | avx     |       18184 ns        30518 ns         1024
mask |  6 | avx tbb |       15004 ns        15259 ns         1024

data | 12 | avx     |       20189 ns        15259 ns         1024
data | 12 | avx tbb |       15743 ns        15259 ns         1024
mask | 12 | avx     |       17426 ns        30518 ns         1024
mask | 12 | avx tbb |       15322 ns        0.000 ns         1024

data | 24 | avx     |       20123 ns        30518 ns         1024
data | 24 | avx tbb |       16757 ns        15259 ns         1024
mask | 24 | avx     |       17789 ns        15259 ns         1024
mask | 24 | avx tbb |       15452 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      377896 ns       411987 ns         1024
data |  6 | avx     |       30966 ns        15259 ns         1024
data |  6 |     tbb |       68975 ns        91553 ns         1024
data |  6 | avx tbb |       19658 ns        15259 ns         1024
mask |  6 |         |      681451 ns       686646 ns         1024
mask |  6 | avx     |       27158 ns        30518 ns         1024
mask |  6 |     tbb |      136592 ns        76294 ns         1024
mask |  6 | avx tbb |       19091 ns        30518 ns         1024

data | 12 |         |      193004 ns       198364 ns         1024
data | 12 | avx     |       30941 ns        45776 ns         1024
data | 12 |     tbb |       49848 ns       106812 ns         1024
data | 12 | avx tbb |       19972 ns        15259 ns         1024
mask | 12 |         |      684027 ns       671387 ns         1024
mask | 12 | avx     |       27783 ns        45776 ns         1024
mask | 12 |     tbb |      136476 ns       167847 ns         1024
mask | 12 | avx tbb |       19036 ns        30518 ns         1024

data | 24 |         |       98327 ns       106812 ns         1024
data | 24 | avx     |       31317 ns        45776 ns         1024
data | 24 |     tbb |       39591 ns        30518 ns         1024
data | 24 | avx tbb |       19755 ns        30518 ns         1024
mask | 24 |         |      690761 ns       671387 ns         1024
mask | 24 | avx     |       27697 ns        45776 ns         1024
mask | 24 |     tbb |      136409 ns       167847 ns         1024
mask | 24 | avx tbb |       18967 ns        61035 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1518071 ns      1556396 ns          512
data |  6 | avx     |      203769 ns       244141 ns          512
data |  6 |     tbb |      235776 ns       274658 ns          512
data |  6 | avx tbb |      160028 ns       183105 ns          512
mask |  6 |         |     2711556 ns      2746582 ns          512
mask |  6 | avx     |      195530 ns       274658 ns          512
mask |  6 |     tbb |      542463 ns       457764 ns          512
mask |  6 | avx tbb |      158607 ns       183105 ns          512

data | 12 |         |      776755 ns       762939 ns          512
data | 12 | avx     |      209153 ns       183105 ns          512
data | 12 |     tbb |      205038 ns       152588 ns          512
data | 12 | avx tbb |      159849 ns       152588 ns          512
mask | 12 |         |     2714581 ns      2593994 ns          512
mask | 12 | avx     |      199198 ns       244141 ns          512
mask | 12 |     tbb |      540823 ns       488281 ns          512
mask | 12 | avx tbb |      157512 ns       213623 ns          512

data | 24 |         |      414726 ns       427246 ns          512
data | 24 | avx     |      203832 ns       244141 ns          512
data | 24 |     tbb |      201502 ns       183105 ns          512
data | 24 | avx tbb |      159449 ns       183105 ns          512
mask | 24 |         |     2712795 ns      2746582 ns          512
mask | 24 | avx     |      195275 ns       274658 ns          512
mask | 24 |     tbb |      542317 ns       427246 ns          512
mask | 24 | avx tbb |      158672 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6075845 ns      6347656 ns           64
data |  6 | avx     |      870566 ns       976562 ns           64
data |  6 |     tbb |      726975 ns       976562 ns           64
data |  6 | avx tbb |      629061 ns      1220703 ns           64
mask |  6 |         |    10851209 ns     10498047 ns           64
mask |  6 | avx     |      788797 ns        0.000 ns           64
mask |  6 |     tbb |     2030653 ns      2441406 ns           64
mask |  6 | avx tbb |      591775 ns        0.000 ns           64

data | 12 |         |     3095914 ns      2685547 ns           64
data | 12 | avx     |      841855 ns       976562 ns           64
data | 12 |     tbb |      688616 ns       976562 ns           64
data | 12 | avx tbb |      631183 ns        0.000 ns           64
mask | 12 |         |    10920802 ns     10498047 ns           64
mask | 12 | avx     |      811441 ns       488281 ns           64
mask | 12 |     tbb |     2032528 ns      2441406 ns           64
mask | 12 | avx tbb |      590762 ns       732422 ns           64

data | 24 |         |     1667269 ns      1708984 ns           64
data | 24 | avx     |      857248 ns       976562 ns           64
data | 24 |     tbb |      670800 ns       732422 ns           64
data | 24 | avx tbb |      629642 ns       244141 ns           64
mask | 24 |         |    10949589 ns     11718750 ns           64
mask | 24 | avx     |      789473 ns       488281 ns           64
mask | 24 |     tbb |     2033808 ns      1464844 ns           64
mask | 24 | avx tbb |      591108 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24137041 ns     24902344 ns           32
data |  6 | avx     |     3359166 ns      3906250 ns           32
data |  6 |     tbb |     2550947 ns      2441406 ns           32
data |  6 | avx tbb |     2364575 ns      2441406 ns           32
mask |  6 |         |    43293206 ns     42968750 ns           32
mask |  6 | avx     |     3162875 ns      3906250 ns           32
mask |  6 |     tbb |     7900616 ns      7812500 ns           32
mask |  6 | avx tbb |     2353128 ns      1953125 ns           32

data | 12 |         |    12407453 ns     12207031 ns           32
data | 12 | avx     |     3350934 ns      2929688 ns           32
data | 12 |     tbb |     2426653 ns      1464844 ns           32
data | 12 | avx tbb |     2365116 ns       976562 ns           32
mask | 12 |         |    43272519 ns     43457031 ns           32
mask | 12 | avx     |     3146262 ns      2441406 ns           32
mask | 12 |     tbb |     7901916 ns      7324219 ns           32
mask | 12 | avx tbb |     2348394 ns      2441406 ns           32

data | 24 |         |     6530972 ns      6835938 ns           32
data | 24 | avx     |     3366253 ns      2441406 ns           32
data | 24 |     tbb |     2422656 ns      2929688 ns           32
data | 24 | avx tbb |     2361213 ns      2929688 ns           32
mask | 24 |         |    43299584 ns     43457031 ns           32
mask | 24 | avx     |     3153672 ns      3906250 ns           32
mask | 24 |     tbb |     7897128 ns      6835938 ns           32
mask | 24 | avx tbb |     2354737 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96354288 ns     96679688 ns           16
data |  6 | avx     |    13423969 ns     12695312 ns           16
data |  6 |     tbb |     9826319 ns     10742188 ns           16
data |  6 | avx tbb |     9245869 ns      8789062 ns           16
mask |  6 |         |   172713762 ns    171875000 ns           16
mask |  6 | avx     |    12667337 ns     11718750 ns           16
mask |  6 |     tbb |    31458575 ns     31250000 ns           16
mask |  6 | avx tbb |     9243694 ns      8789062 ns           16

data | 12 |         |    49531144 ns     49804688 ns           16
data | 12 | avx     |    13417819 ns     13671875 ns           16
data | 12 |     tbb |     9419319 ns      8789062 ns           16
data | 12 | avx tbb |     9249831 ns      9765625 ns           16
mask | 12 |         |   172957306 ns    172851562 ns           16
mask | 12 | avx     |    13210962 ns     10742188 ns           16
mask | 12 |     tbb |    31407650 ns     32226562 ns           16
mask | 12 | avx tbb |     9256306 ns      8789062 ns           16

data | 24 |         |    26217250 ns     24414062 ns           16
data | 24 | avx     |    13721294 ns     13671875 ns           16
data | 24 |     tbb |     9389294 ns      7812500 ns           16
data | 24 | avx tbb |     9248063 ns      9765625 ns           16
mask | 24 |         |   172743219 ns    175781250 ns           16
mask | 24 | avx     |    13289281 ns     13671875 ns           16
mask | 24 |     tbb |    31505700 ns     32226562 ns           16
mask | 24 | avx tbb |     9245938 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193170688 ns    189453125 ns            8
data |  6 | avx     |    27632125 ns     27343750 ns            8
data |  6 |     tbb |    19487550 ns     17578125 ns            8
data |  6 | avx tbb |    18461025 ns     19531250 ns            8
mask |  6 |         |   345365312 ns    343750000 ns            8
mask |  6 | avx     |    25773675 ns     25390625 ns            8
mask |  6 |     tbb |    62757837 ns     62500000 ns            8
mask |  6 | avx tbb |    18426700 ns     19531250 ns            8

data | 12 |         |    98121225 ns     97656250 ns            8
data | 12 | avx     |    26946100 ns     25390625 ns            8
data | 12 |     tbb |    18756613 ns     17578125 ns            8
data | 12 | avx tbb |    18422825 ns     17578125 ns            8
mask | 12 |         |   345349137 ns    347656250 ns            8
mask | 12 | avx     |    25345825 ns     25390625 ns            8
mask | 12 |     tbb |    62839400 ns     62500000 ns            8
mask | 12 | avx tbb |    18457388 ns     17578125 ns            8

data | 24 |         |    52222775 ns     52734375 ns            8
data | 24 | avx     |    27308563 ns     25390625 ns            8
data | 24 |     tbb |    18757375 ns     19531250 ns            8
data | 24 | avx tbb |    18413913 ns     17578125 ns            8
mask | 24 |         |   346046838 ns    345703125 ns            8
mask | 24 | avx     |    25644088 ns     23437500 ns            8
mask | 24 |     tbb |    62776863 ns     62500000 ns            8
mask | 24 | avx tbb |    18412475 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385328750 ns    384765625 ns            8
data |  6 | avx     |    55467250 ns     54687500 ns            8
data |  6 |     tbb |    38887325 ns     37109375 ns            8
data |  6 | avx tbb |    36780062 ns     39062500 ns            8
mask |  6 |         |   691167600 ns    691406250 ns            8
mask |  6 | avx     |    52475775 ns     52734375 ns            8
mask |  6 |     tbb |   125476187 ns    125000000 ns            8
mask |  6 | avx tbb |    36813050 ns     37109375 ns            8

data | 12 |         |   196196412 ns    197265625 ns            8
data | 12 | avx     |    55135888 ns     54687500 ns            8
data | 12 |     tbb |    37415538 ns     37109375 ns            8
data | 12 | avx tbb |    36789350 ns     35156250 ns            8
mask | 12 |         |   692111062 ns    691406250 ns            8
mask | 12 | avx     |    51561762 ns     50781250 ns            8
mask | 12 |     tbb |   125531200 ns    125000000 ns            8
mask | 12 | avx tbb |    36801800 ns     39062500 ns            8

data | 24 |         |   106489225 ns    107421875 ns            8
data | 24 | avx     |    54086750 ns     56640625 ns            8
data | 24 |     tbb |    37300613 ns     35156250 ns            8
data | 24 | avx tbb |    36759887 ns     37109375 ns            8
mask | 24 |         |   691298500 ns    693359375 ns            8
mask | 24 | avx     |    50657425 ns     50781250 ns            8
mask | 24 |     tbb |   125608287 ns    125000000 ns            8
mask | 24 | avx tbb |    36783587 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   770865388 ns    771484375 ns            8
data |  6 | avx     |   110627450 ns    113281250 ns            8
data |  6 |     tbb |    77615688 ns     76171875 ns            8
data |  6 | avx tbb |    73476775 ns     74218750 ns            8
mask |  6 |         |  1383273550 ns   1384765625 ns            8
mask |  6 | avx     |   103125000 ns    103515625 ns            8
mask |  6 |     tbb |   250922025 ns    251953125 ns            8
mask |  6 | avx tbb |    73501812 ns     76171875 ns            8

data | 12 |         |   392447100 ns    394531250 ns            8
data | 12 | avx     |   110463400 ns    111328125 ns            8
data | 12 |     tbb |    74707275 ns     76171875 ns            8
data | 12 | avx tbb |    73502525 ns     72265625 ns            8
mask | 12 |         |  1381212213 ns   1380859375 ns            8
mask | 12 | avx     |   102326013 ns    101562500 ns            8
mask | 12 |     tbb |   250820750 ns    250000000 ns            8
mask | 12 | avx tbb |    74042000 ns     78125000 ns            8

data | 24 |         |   209598487 ns    208984375 ns            8
data | 24 | avx     |   108316262 ns    107421875 ns            8
data | 24 |     tbb |    74491100 ns     74218750 ns            8
data | 24 | avx tbb |    73493762 ns     76171875 ns            8
mask | 24 |         |  1381912275 ns   1384765625 ns            8
mask | 24 | avx     |   101316562 ns    103515625 ns            8
mask | 24 |     tbb |   251092063 ns    248046875 ns            8
mask | 24 | avx tbb |    73495588 ns     70312500 ns            8
```

</details>

