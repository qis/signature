# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1599 ns         3815 ns         4096
find avx tbb 06 16 kb         976 ns        0.000 ns         4096
find         06 16 kb        7300 ns         7629 ns         4096
find     tbb 06 16 kb       18398 ns        19073 ns         4096
find avx     12 16 kb        1000 ns        0.000 ns         4096
find avx tbb 12 16 kb        1054 ns        0.000 ns         4096
find         12 16 kb        4429 ns         3815 ns         4096
find     tbb 12 16 kb       12975 ns        15259 ns         4096
find avx     24 16 kb        1125 ns        0.000 ns         4096
find avx tbb 24 16 kb        1141 ns         3815 ns         4096
find         24 16 kb        2682 ns         3815 ns         4096
find     tbb 24 16 kb       10412 ns        11444 ns         4096

scan avx     06 16 kb       14234 ns        15259 ns         4096
scan avx tbb 06 16 kb       13450 ns        11444 ns         4096
scan         06 16 kb       13334 ns        15259 ns         4096
scan     tbb 06 16 kb       30639 ns        34332 ns         4096
scan avx     12 16 kb       14379 ns        15259 ns         4096
scan avx tbb 12 16 kb       13292 ns        11444 ns         4096
scan         12 16 kb       12788 ns        15259 ns         4096
scan     tbb 12 16 kb       30893 ns        30518 ns         4096
scan avx     24 16 kb       14213 ns        15259 ns         4096
scan avx tbb 24 16 kb       13221 ns        11444 ns         4096
scan         24 16 kb       12960 ns        11444 ns         4096
scan     tbb 24 16 kb       30728 ns        30518 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2146 ns         3815 ns         4096
find avx tbb 06 64 kb        2154 ns         3815 ns         4096
find         06 64 kb       27480 ns        30518 ns         4096
find     tbb 06 64 kb       47306 ns        41962 ns         4096
find avx     12 64 kb        2132 ns        0.000 ns         4096
find avx tbb 12 64 kb        2111 ns         3815 ns         4096
find         12 64 kb       14344 ns        15259 ns         4096
find     tbb 12 64 kb       27517 ns        26703 ns         4096
find avx     24 64 kb        2280 ns         3815 ns         4096
find avx tbb 24 64 kb        2295 ns        0.000 ns         4096
find         24 64 kb        7747 ns        11444 ns         4096
find     tbb 24 64 kb       18670 ns        22888 ns         4096

scan avx     06 64 kb       52712 ns        53406 ns         4096
scan avx tbb 06 64 kb       51606 ns        53406 ns         4096
scan         06 64 kb       50352 ns        49591 ns         4096
scan     tbb 06 64 kb      106626 ns       106812 ns         4096
scan avx     12 64 kb       52360 ns        53406 ns         4096
scan avx tbb 12 64 kb       51132 ns        53406 ns         4096
scan         12 64 kb       49882 ns        49591 ns         4096
scan     tbb 12 64 kb      106799 ns       102997 ns         4096
scan avx     24 64 kb       52071 ns        53406 ns         4096
scan avx tbb 24 64 kb       51101 ns        45776 ns         4096
scan         24 64 kb       51324 ns        53406 ns         4096
scan     tbb 24 64 kb      106385 ns       110626 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7413 ns         7629 ns         2048
find avx tbb 06 256 kb       7221 ns         7629 ns         2048
find         06 256 kb     105054 ns       114441 ns         2048
find     tbb 06 256 kb     189419 ns       190735 ns         2048
find avx     12 256 kb       7219 ns         7629 ns         2048
find avx tbb 12 256 kb       7104 ns         7629 ns         2048
find         12 256 kb      53094 ns        45776 ns         2048
find     tbb 12 256 kb      86962 ns        91553 ns         2048
find avx     24 256 kb       7890 ns        0.000 ns         2048
find avx tbb 24 256 kb       7492 ns         7629 ns         2048
find         24 256 kb      27435 ns        15259 ns         2048
find     tbb 24 256 kb      49544 ns        38147 ns         2048

scan avx     06 256 kb     203874 ns       205994 ns         2048
scan avx tbb 06 256 kb     203987 ns       213623 ns         2048
scan         06 256 kb     205102 ns       205994 ns         2048
scan     tbb 06 256 kb     338997 ns       328064 ns         2048
scan avx     12 256 kb     205383 ns       205994 ns         2048
scan avx tbb 12 256 kb     205110 ns       213623 ns         2048
scan         12 256 kb     201955 ns       205994 ns         2048
scan     tbb 12 256 kb     337237 ns       335693 ns         2048
scan avx     24 256 kb     211105 ns       205994 ns         2048
scan avx tbb 24 256 kb     204927 ns       213623 ns         2048
scan         24 256 kb     204738 ns       205994 ns         2048
scan     tbb 24 256 kb     359214 ns       373840 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26085 ns        15259 ns         1024
find avx tbb 06 1 mb        66650 ns        45776 ns         1024
find         06 1 mb       421491 ns       427246 ns         1024
find     tbb 06 1 mb       606535 ns       579834 ns         1024
find avx     12 1 mb        26112 ns        45776 ns         1024
find avx tbb 12 1 mb        64708 ns        76294 ns         1024
find         12 1 mb       215160 ns       228882 ns         1024
find     tbb 12 1 mb       334669 ns       350952 ns         1024
find avx     24 1 mb        28486 ns        30518 ns         1024
find avx tbb 24 1 mb        76583 ns        76294 ns         1024
find         24 1 mb       114017 ns       137329 ns         1024
find     tbb 24 1 mb       216995 ns       213623 ns         1024

scan avx     06 1 mb       831974 ns       808716 ns         1024
scan avx tbb 06 1 mb      1150268 ns      1174927 ns         1024
scan         06 1 mb       833116 ns       823975 ns         1024
scan     tbb 06 1 mb      1148829 ns      1144409 ns         1024
scan avx     12 1 mb       834685 ns       839233 ns         1024
scan avx tbb 12 1 mb      1152003 ns      1129150 ns         1024
scan         12 1 mb       834676 ns       869751 ns         1024
scan     tbb 12 1 mb      1149065 ns      1159668 ns         1024
scan avx     24 1 mb       801340 ns       778198 ns         1024
scan avx tbb 24 1 mb      1152618 ns      1129150 ns         1024
scan         24 1 mb       776698 ns       762939 ns         1024
scan     tbb 24 1 mb      1145893 ns      1129150 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       191938 ns       244141 ns          512
find avx tbb 06 4 mb       354134 ns       427246 ns          512
find         06 4 mb      1682941 ns      1678467 ns          512
find     tbb 06 4 mb      2075089 ns      2136230 ns          512
find avx     12 4 mb       189910 ns       152588 ns          512
find avx tbb 12 4 mb       355793 ns       335693 ns          512
find         12 4 mb       868371 ns       915527 ns          512
find     tbb 12 4 mb      1168049 ns      1373291 ns          512
find avx     24 4 mb       205746 ns       213623 ns          512
find avx tbb 24 4 mb       371446 ns       244141 ns          512
find         24 4 mb       462895 ns       427246 ns          512
find     tbb 24 4 mb       708755 ns       640869 ns          512

scan avx     06 4 mb      3293685 ns      3295898 ns          512
scan avx tbb 06 4 mb      4142233 ns      4180908 ns          512
scan         06 4 mb      3204228 ns      3234863 ns          512
scan     tbb 06 4 mb      4141001 ns      4180908 ns          512
scan avx     12 4 mb      3282121 ns      3356934 ns          512
scan avx tbb 12 4 mb      4144504 ns      4119873 ns          512
scan         12 4 mb      3292822 ns      3387451 ns          512
scan     tbb 12 4 mb      4142224 ns      4211426 ns          512
scan avx     24 4 mb      3294346 ns      3326416 ns          512
scan avx tbb 24 4 mb      4039819 ns      4119873 ns          512
scan         24 4 mb      3170607 ns      3173828 ns          512
scan     tbb 24 4 mb      4034977 ns      3967285 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      767002 ns       488281 ns           64
find avx tbb 06 16 mb     1447719 ns      1708984 ns           64
find         06 16 mb     6776811 ns      6835938 ns           64
find     tbb 06 16 mb     7593661 ns      8056641 ns           64
find avx     12 16 mb      768830 ns       244141 ns           64
find avx tbb 12 16 mb     1435786 ns      1953125 ns           64
find         12 16 mb     3498750 ns      3906250 ns           64
find     tbb 12 16 mb     4287936 ns      4150391 ns           64
find avx     24 16 mb      847069 ns      1220703 ns           64
find avx tbb 24 16 mb     1477620 ns       976562 ns           64
find         24 16 mb     2140614 ns      2441406 ns           64
find     tbb 24 16 mb     2597481 ns      1464844 ns           64

scan avx     06 16 mb    13273091 ns     13671875 ns           64
scan avx tbb 06 16 mb    15349020 ns     15136719 ns           64
scan         06 16 mb    12718259 ns     13183594 ns           64
scan     tbb 06 16 mb    15155944 ns     15625000 ns           64
scan avx     12 16 mb    13154120 ns     13427734 ns           64
scan avx tbb 12 16 mb    15424083 ns     15625000 ns           64
scan         12 16 mb    13138853 ns     12939453 ns           64
scan     tbb 12 16 mb    15591756 ns     16113281 ns           64
scan avx     24 16 mb    12692116 ns     12207031 ns           64
scan avx tbb 24 16 mb    14987044 ns     14160156 ns           64
scan         24 16 mb    12653248 ns     12451172 ns           64
scan     tbb 24 16 mb    14800603 ns     14892578 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3007587 ns        0.000 ns           32
find avx tbb 06 64 mb     5405419 ns      5371094 ns           32
find         06 64 mb    26719772 ns     24414062 ns           32
find     tbb 06 64 mb    29419453 ns     28808594 ns           32
find avx     12 64 mb     3030181 ns      6347656 ns           32
find avx tbb 12 64 mb     5398916 ns      5371094 ns           32
find         12 64 mb    13577131 ns     14648438 ns           32
find     tbb 12 64 mb    16084516 ns     15625000 ns           32
find avx     24 64 mb     3165919 ns      2929688 ns           32
find avx tbb 24 64 mb     5560313 ns      4882812 ns           32
find         24 64 mb     7091334 ns      6835938 ns           32
find     tbb 24 64 mb     9553503 ns      9765625 ns           32

scan avx     06 64 mb    52572809 ns     52246094 ns           32
scan avx tbb 06 64 mb    60888316 ns     59570312 ns           32
scan         06 64 mb    52576916 ns     53222656 ns           32
scan     tbb 06 64 mb    60836869 ns     59570312 ns           32
scan avx     12 64 mb    52569525 ns     53222656 ns           32
scan avx tbb 12 64 mb    60778756 ns     61523438 ns           32
scan         12 64 mb    52592013 ns     52246094 ns           32
scan     tbb 12 64 mb    60806516 ns     62011719 ns           32
scan avx     24 64 mb    52616816 ns     52734375 ns           32
scan avx tbb 24 64 mb    58673363 ns     59082031 ns           32
scan         24 64 mb    52516572 ns     51757812 ns           32
scan     tbb 24 64 mb    60877028 ns     60546875 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12263619 ns     11718750 ns           16
find avx tbb 06 256 mb   21388194 ns     20507812 ns           16
find         06 256 mb  106535281 ns    105468750 ns           16
find     tbb 06 256 mb  117637681 ns    117187500 ns           16
find avx     12 256 mb   12074781 ns     12695312 ns           16
find avx tbb 12 256 mb   21369312 ns     21484375 ns           16
find         12 256 mb   54626644 ns     54687500 ns           16
find     tbb 12 256 mb   64217113 ns     65429688 ns           16
find avx     24 256 mb   12545425 ns     12695312 ns           16
find avx tbb 24 256 mb   22426056 ns     25390625 ns           16
find         24 256 mb   28927162 ns     29296875 ns           16
find     tbb 24 256 mb   38356869 ns     39062500 ns           16

scan avx     06 256 mb  210358813 ns    208984375 ns           16
scan avx tbb 06 256 mb  243383763 ns    240234375 ns           16
scan         06 256 mb  210694519 ns    209960938 ns           16
scan     tbb 06 256 mb  244875550 ns    246093750 ns           16
scan avx     12 256 mb  210477213 ns    210937500 ns           16
scan avx tbb 12 256 mb  243150712 ns    241210938 ns           16
scan         12 256 mb  210438638 ns    210937500 ns           16
scan     tbb 12 256 mb  243958788 ns    240234375 ns           16
scan avx     24 256 mb  210636231 ns    210937500 ns           16
scan avx tbb 24 256 mb  243909125 ns    240234375 ns           16
scan         24 256 mb  210464131 ns    210937500 ns           16
scan     tbb 24 256 mb  246557675 ns    246093750 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24280650 ns     25390625 ns            8
find avx tbb 06 512 mb   42784188 ns     42968750 ns            8
find         06 512 mb  213280962 ns    214843750 ns            8
find     tbb 06 512 mb  235763450 ns    234375000 ns            8
find avx     12 512 mb   26560688 ns     27343750 ns            8
find avx tbb 12 512 mb   45014525 ns     46875000 ns            8
find         12 512 mb  110111875 ns    111328125 ns            8
find     tbb 12 512 mb  131853100 ns    128906250 ns            8
find avx     24 512 mb   25155125 ns     23437500 ns            8
find avx tbb 24 512 mb   43942338 ns     44921875 ns            8
find         24 512 mb   56637688 ns     58593750 ns            8
find     tbb 24 512 mb   77645363 ns     78125000 ns            8

scan avx     06 512 mb  420983475 ns    421875000 ns            8
scan avx tbb 06 512 mb  493681838 ns    488281250 ns            8
scan         06 512 mb  420465513 ns    421875000 ns            8
scan     tbb 06 512 mb  476556950 ns    474609375 ns            8
scan avx     12 512 mb  420208700 ns    419921875 ns            8
scan avx tbb 12 512 mb  492925450 ns    492187500 ns            8
scan         12 512 mb  404494475 ns    406250000 ns            8
scan     tbb 12 512 mb  493602738 ns    488281250 ns            8
scan avx     24 512 mb  404377275 ns    402343750 ns            8
scan avx tbb 24 512 mb  475138175 ns    466796875 ns            8
scan         24 512 mb  404819025 ns    404296875 ns            8
scan     tbb 24 512 mb  492515838 ns    492187500 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48809987 ns     48828125 ns            8
find avx tbb 06 1 gb     93689125 ns     93750000 ns            8
find         06 1 gb    426189462 ns    427734375 ns            8
find     tbb 06 1 gb    477076787 ns    468750000 ns            8
find avx     12 1 gb     48481600 ns     46875000 ns            8
find avx tbb 12 1 gb     91134763 ns     91796875 ns            8
find         12 1 gb    216966075 ns    218750000 ns            8
find     tbb 12 1 gb    259226150 ns    259765625 ns            8
find avx     24 1 gb     50512275 ns     48828125 ns            8
find avx tbb 24 1 gb     92628887 ns     95703125 ns            8
find         24 1 gb    117271475 ns    117187500 ns            8
find     tbb 24 1 gb    159534562 ns    156250000 ns            8

scan avx     06 1 gb    840079525 ns    837890625 ns            8
scan avx tbb 06 1 gb    978485688 ns    966796875 ns            8
scan         06 1 gb    841333387 ns    841796875 ns            8
scan     tbb 06 1 gb    977636663 ns    970703125 ns            8
scan avx     12 1 gb    839552113 ns    837890625 ns            8
scan avx tbb 12 1 gb    980880862 ns    980468750 ns            8
scan         12 1 gb    839409625 ns    839843750 ns            8
scan     tbb 12 1 gb    978506500 ns    976562500 ns            8
scan avx     24 1 gb    842136912 ns    843750000 ns            8
scan avx tbb 24 1 gb    948745812 ns    945312500 ns            8
scan         24 1 gb    840979900 ns    835937500 ns            8
scan     tbb 24 1 gb    941447562 ns    929687500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     99385187 ns     99609375 ns            8
find avx tbb 06 2 gb    176272425 ns    177734375 ns            8
find         06 2 gb    855112813 ns    855468750 ns            8
find     tbb 06 2 gb    946726125 ns    941406250 ns            8
find avx     12 2 gb     97226900 ns     95703125 ns            8
find avx tbb 12 2 gb    173300650 ns    171875000 ns            8
find         12 2 gb    434314225 ns    435546875 ns            8
find     tbb 12 2 gb    515543950 ns    509765625 ns            8
find avx     24 2 gb    102871287 ns     99609375 ns            8
find avx tbb 24 2 gb    177372812 ns    175781250 ns            8
find         24 2 gb    227297838 ns    226562500 ns            8
find     tbb 24 2 gb    311566713 ns    314453125 ns            8

scan avx     06 2 gb   1682189563 ns   1687500000 ns            8
scan avx tbb 06 2 gb   1948434388 ns   1939453125 ns            8
scan         06 2 gb   1683826113 ns   1687500000 ns            8
scan     tbb 06 2 gb   1945938525 ns   1923828125 ns            8
scan avx     12 2 gb   1683092038 ns   1687500000 ns            8
scan avx tbb 12 2 gb   1944953887 ns   1935546875 ns            8
scan         12 2 gb   1678497825 ns   1681640625 ns            8
scan     tbb 12 2 gb   1904413862 ns   1892578125 ns            8
scan avx     24 2 gb   1678741775 ns   1677734375 ns            8
scan avx tbb 24 2 gb   1883235475 ns   1875000000 ns            8
scan         24 2 gb   1681434700 ns   1675781250 ns            8
scan     tbb 24 2 gb   1946584738 ns   1923828125 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1088 ns        0.000 ns         4096
find avx tbb 06 16 kb        1008 ns         3815 ns         4096
find         06 16 kb        6639 ns         3815 ns         4096
find     tbb 06 16 kb       17181 ns        19073 ns         4096
find avx     12 16 kb        1179 ns        0.000 ns         4096
find avx tbb 12 16 kb        1172 ns        0.000 ns         4096
find         12 16 kb        3896 ns         7629 ns         4096
find     tbb 12 16 kb       12149 ns        11444 ns         4096
find avx     24 16 kb        1116 ns         3815 ns         4096
find avx tbb 24 16 kb        1124 ns        0.000 ns         4096
find         24 16 kb        2473 ns         3815 ns         4096
find     tbb 24 16 kb       10050 ns        11444 ns         4096

scan avx     06 16 kb       13752 ns        15259 ns         4096
scan avx tbb 06 16 kb       11114 ns        11444 ns         4096
scan         06 16 kb       12830 ns        15259 ns         4096
scan     tbb 06 16 kb       27858 ns        26703 ns         4096
scan avx     12 16 kb       14136 ns        15259 ns         4096
scan avx tbb 12 16 kb       11084 ns         7629 ns         4096
scan         12 16 kb       12419 ns        11444 ns         4096
scan     tbb 12 16 kb       28026 ns        26703 ns         4096
scan avx     24 16 kb       14175 ns        15259 ns         4096
scan avx tbb 24 16 kb       11779 ns        11444 ns         4096
scan         24 16 kb       13863 ns        15259 ns         4096
scan     tbb 24 16 kb       27455 ns        26703 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2121 ns         3815 ns         4096
find avx tbb 06 64 kb        2200 ns         3815 ns         4096
find         06 64 kb       24863 ns        22888 ns         4096
find     tbb 06 64 kb       44052 ns        41962 ns         4096
find avx     12 64 kb        2576 ns         3815 ns         4096
find avx tbb 12 64 kb        2578 ns        0.000 ns         4096
find         12 64 kb       12686 ns         7629 ns         4096
find     tbb 12 64 kb       25516 ns        15259 ns         4096
find avx     24 64 kb        2342 ns         3815 ns         4096
find avx tbb 24 64 kb        2534 ns        0.000 ns         4096
find         24 64 kb        6880 ns         3815 ns         4096
find     tbb 24 64 kb       17518 ns        22888 ns         4096

scan avx     06 64 kb       51931 ns        53406 ns         4096
scan avx tbb 06 64 kb       42823 ns        38147 ns         4096
scan         06 64 kb       50473 ns        49591 ns         4096
scan     tbb 06 64 kb       97005 ns        99182 ns         4096
scan avx     12 64 kb       51505 ns        49591 ns         4096
scan avx tbb 12 64 kb       42658 ns        45776 ns         4096
scan         12 64 kb       51680 ns        49591 ns         4096
scan     tbb 12 64 kb       96896 ns        91553 ns         4096
scan avx     24 64 kb       51971 ns        53406 ns         4096
scan avx tbb 24 64 kb       42693 ns        45776 ns         4096
scan         24 64 kb       51427 ns        53406 ns         4096
scan     tbb 24 64 kb       97118 ns       102997 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7297 ns        15259 ns         2048
find avx tbb 06 256 kb       7301 ns        0.000 ns         2048
find         06 256 kb      94959 ns       106812 ns         2048
find     tbb 06 256 kb     177843 ns       183105 ns         2048
find avx     12 256 kb       8703 ns         7629 ns         2048
find avx tbb 12 256 kb       8648 ns         7629 ns         2048
find         12 256 kb      47957 ns        45776 ns         2048
find     tbb 12 256 kb      80572 ns        68665 ns         2048
find avx     24 256 kb       8309 ns        0.000 ns         2048
find avx tbb 24 256 kb       8700 ns        15259 ns         2048
find         24 256 kb      24754 ns         7629 ns         2048
find     tbb 24 256 kb      44435 ns        30518 ns         2048

scan avx     06 256 kb     203549 ns       198364 ns         2048
scan avx tbb 06 256 kb     168970 ns       175476 ns         2048
scan         06 256 kb     201097 ns       198364 ns         2048
scan     tbb 06 256 kb     324911 ns       312805 ns         2048
scan avx     12 256 kb     209257 ns       205994 ns         2048
scan avx tbb 12 256 kb     169251 ns       183105 ns         2048
scan         12 256 kb     203891 ns       183105 ns         2048
scan     tbb 12 256 kb     312504 ns       312805 ns         2048
scan avx     24 256 kb     200087 ns       198364 ns         2048
scan avx tbb 24 256 kb     169099 ns       167847 ns         2048
scan         24 256 kb     202534 ns       198364 ns         2048
scan     tbb 24 256 kb     317813 ns       289917 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26432 ns        15259 ns         1024
find avx tbb 06 1 mb        73385 ns        45776 ns         1024
find         06 1 mb       386464 ns       411987 ns         1024
find     tbb 06 1 mb       561002 ns       579834 ns         1024
find avx     12 1 mb        31483 ns        30518 ns         1024
find avx tbb 12 1 mb        85703 ns        76294 ns         1024
find         12 1 mb       195469 ns       198364 ns         1024
find     tbb 12 1 mb       318767 ns       335693 ns         1024
find avx     24 1 mb        29882 ns        45776 ns         1024
find avx tbb 24 1 mb        76907 ns       106812 ns         1024
find         24 1 mb       101767 ns        91553 ns         1024
find     tbb 24 1 mb       189856 ns       228882 ns         1024

scan avx     06 1 mb       804010 ns       808716 ns         1024
scan avx tbb 06 1 mb       992035 ns       961304 ns         1024
scan         06 1 mb       815926 ns       808716 ns         1024
scan     tbb 06 1 mb       993633 ns       961304 ns         1024
scan avx     12 1 mb       800224 ns       808716 ns         1024
scan avx tbb 12 1 mb       989467 ns       976562 ns         1024
scan         12 1 mb       828145 ns       823975 ns         1024
scan     tbb 12 1 mb       987858 ns       976562 ns         1024
scan avx     24 1 mb       805757 ns       793457 ns         1024
scan avx tbb 24 1 mb       992344 ns      1022339 ns         1024
scan         24 1 mb       848350 ns       854492 ns         1024
scan     tbb 24 1 mb       987791 ns       946045 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       190975 ns       152588 ns          512
find avx tbb 06 4 mb       366859 ns       457764 ns          512
find         06 4 mb      1529683 ns      1495361 ns          512
find     tbb 06 4 mb      1897736 ns      1892090 ns          512
find avx     12 4 mb       190657 ns       122070 ns          512
find avx tbb 12 4 mb       381489 ns       457764 ns          512
find         12 4 mb       787896 ns       732422 ns          512
find     tbb 12 4 mb      1077286 ns      1037598 ns          512
find avx     24 4 mb       201513 ns       152588 ns          512
find avx tbb 24 4 mb       400336 ns       518799 ns          512
find         24 4 mb       423207 ns       457764 ns          512
find     tbb 24 4 mb       658763 ns       579834 ns          512

scan avx     06 4 mb      3232302 ns      3295898 ns          512
scan avx tbb 06 4 mb      3516242 ns      3417969 ns          512
scan         06 4 mb      3208327 ns      3234863 ns          512
scan     tbb 06 4 mb      3599476 ns      3417969 ns          512
scan avx     12 4 mb      3133220 ns      3234863 ns          512
scan avx tbb 12 4 mb      3522979 ns      3540039 ns          512
scan         12 4 mb      3205179 ns      3234863 ns          512
scan     tbb 12 4 mb      3566355 ns      3570557 ns          512
scan avx     24 4 mb      3243619 ns      3204346 ns          512
scan avx tbb 24 4 mb      3525813 ns      3509521 ns          512
scan         24 4 mb      3169584 ns      3082275 ns          512
scan     tbb 24 4 mb      3569696 ns      3509521 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      786541 ns      1220703 ns           64
find avx tbb 06 16 mb     1450905 ns      2197266 ns           64
find         06 16 mb     6112053 ns      6347656 ns           64
find     tbb 06 16 mb     6904606 ns      6835938 ns           64
find avx     12 16 mb      760323 ns       732422 ns           64
find avx tbb 12 16 mb     1455989 ns      1708984 ns           64
find         12 16 mb     3133194 ns      2929688 ns           64
find     tbb 12 16 mb     3924278 ns      3906250 ns           64
find avx     24 16 mb      829469 ns       488281 ns           64
find avx tbb 24 16 mb     1536750 ns      1953125 ns           64
find         24 16 mb     1687092 ns      1464844 ns           64
find     tbb 24 16 mb     2406483 ns      2197266 ns           64

scan avx     06 16 mb    12710953 ns     12695312 ns           64
scan avx tbb 06 16 mb    12957534 ns     12695312 ns           64
scan         06 16 mb    12518753 ns     12695312 ns           64
scan     tbb 06 16 mb    13078438 ns     12939453 ns           64
scan avx     12 16 mb    12820775 ns     12451172 ns           64
scan avx tbb 12 16 mb    13028763 ns     13427734 ns           64
scan         12 16 mb    13006897 ns     13183594 ns           64
scan     tbb 12 16 mb    13018628 ns     12939453 ns           64
scan avx     24 16 mb    12614339 ns     12695312 ns           64
scan avx tbb 24 16 mb    13048794 ns     12451172 ns           64
scan         24 16 mb    12620058 ns     12695312 ns           64
scan     tbb 24 16 mb    13014406 ns     13427734 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3021250 ns        0.000 ns           32
find avx tbb 06 64 mb     5398778 ns      4394531 ns           32
find         06 64 mb    24148816 ns     23925781 ns           32
find     tbb 06 64 mb    26854066 ns     24902344 ns           32
find avx     12 64 mb     3054241 ns      5371094 ns           32
find avx tbb 12 64 mb     5566250 ns      5371094 ns           32
find         12 64 mb    12402969 ns     12695312 ns           32
find     tbb 12 64 mb    14938066 ns     15136719 ns           32
find avx     24 64 mb     3121356 ns      3906250 ns           32
find avx tbb 24 64 mb     5842747 ns      5859375 ns           32
find         24 64 mb     6682091 ns      6835938 ns           32
find     tbb 24 64 mb     9086131 ns      8300781 ns           32

scan avx     06 64 mb    50890794 ns     48828125 ns           32
scan avx tbb 06 64 mb    51512150 ns     50292969 ns           32
scan         06 64 mb    50846453 ns     52734375 ns           32
scan     tbb 06 64 mb    51574659 ns     51269531 ns           32
scan avx     12 64 mb    51662800 ns     52246094 ns           32
scan avx tbb 12 64 mb    51372794 ns     52246094 ns           32
scan         12 64 mb    50738906 ns     51269531 ns           32
scan     tbb 12 64 mb    51451184 ns     50292969 ns           32
scan avx     24 64 mb    51032366 ns     51269531 ns           32
scan avx tbb 24 64 mb    51400863 ns     50781250 ns           32
scan         24 64 mb    50919206 ns     50292969 ns           32
scan     tbb 24 64 mb    51422709 ns     51269531 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12164088 ns     10742188 ns           16
find avx tbb 06 256 mb   22094956 ns     22460938 ns           16
find         06 256 mb   96594375 ns     95703125 ns           16
find     tbb 06 256 mb  107591887 ns    107421875 ns           16
find avx     12 256 mb   12667637 ns     10742188 ns           16
find avx tbb 12 256 mb   22067394 ns     21484375 ns           16
find         12 256 mb   49570669 ns     48828125 ns           16
find     tbb 12 256 mb   59636394 ns     62500000 ns           16
find avx     24 256 mb   13128850 ns     12695312 ns           16
find avx tbb 24 256 mb   23230481 ns     22460938 ns           16
find         24 256 mb   26199362 ns     25390625 ns           16
find     tbb 24 256 mb   35685375 ns     36132812 ns           16

scan avx     06 256 mb  202753525 ns    202148438 ns           16
scan avx tbb 06 256 mb  206444244 ns    205078125 ns           16
scan         06 256 mb  202943050 ns    203125000 ns           16
scan     tbb 06 256 mb  206446706 ns    205078125 ns           16
scan avx     12 256 mb  203497506 ns    202148438 ns           16
scan avx tbb 12 256 mb  205288962 ns    206054688 ns           16
scan         12 256 mb  203368569 ns    204101562 ns           16
scan     tbb 12 256 mb  206082319 ns    208007812 ns           16
scan avx     24 256 mb  203453756 ns    202148438 ns           16
scan avx tbb 24 256 mb  205945094 ns    205078125 ns           16
scan         24 256 mb  205047813 ns    205078125 ns           16
scan     tbb 24 256 mb  205885300 ns    205078125 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24303437 ns     21484375 ns            8
find avx tbb 06 512 mb   42771025 ns     41015625 ns            8
find         06 512 mb  192734075 ns    195312500 ns            8
find     tbb 06 512 mb  217507688 ns    220703125 ns            8
find avx     12 512 mb   26795388 ns     27343750 ns            8
find avx tbb 12 512 mb   43202750 ns     41015625 ns            8
find         12 512 mb   98210987 ns     97656250 ns            8
find     tbb 12 512 mb  119074125 ns    123046875 ns            8
find avx     24 512 mb   25541475 ns     23437500 ns            8
find avx tbb 24 512 mb   48359638 ns     48828125 ns            8
find         24 512 mb   54666950 ns     64453125 ns            8
find     tbb 24 512 mb   73312413 ns     76171875 ns            8

scan avx     06 512 mb  408542125 ns    410156250 ns            8
scan avx tbb 06 512 mb  417566062 ns    412109375 ns            8
scan         06 512 mb  400524488 ns    402343750 ns            8
scan     tbb 06 512 mb  417845700 ns    414062500 ns            8
scan avx     12 512 mb  411165850 ns    410156250 ns            8
scan avx tbb 12 512 mb  417960962 ns    419921875 ns            8
scan         12 512 mb  412171637 ns    410156250 ns            8
scan     tbb 12 512 mb  418224562 ns    414062500 ns            8
scan avx     24 512 mb  412508113 ns    410156250 ns            8
scan avx tbb 24 512 mb  417514175 ns    416015625 ns            8
scan         24 512 mb  414765200 ns    416015625 ns            8
scan     tbb 24 512 mb  417833550 ns    419921875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50939975 ns     48828125 ns            8
find avx tbb 06 1 gb     86951450 ns     85937500 ns            8
find         06 1 gb    385526600 ns    386718750 ns            8
find     tbb 06 1 gb    438008487 ns    437500000 ns            8
find avx     12 1 gb     48946625 ns     50781250 ns            8
find avx tbb 12 1 gb     91440063 ns     89843750 ns            8
find         12 1 gb    196105150 ns    193359375 ns            8
find     tbb 12 1 gb    238720900 ns    238281250 ns            8
find avx     24 1 gb     50781887 ns     50781250 ns            8
find avx tbb 24 1 gb     97869400 ns     97656250 ns            8
find         24 1 gb    105889975 ns    109375000 ns            8
find     tbb 24 1 gb    150861450 ns    152343750 ns            8

scan avx     06 1 gb    825789925 ns    826171875 ns            8
scan avx tbb 06 1 gb    827397387 ns    824218750 ns            8
scan         06 1 gb    828977238 ns    830078125 ns            8
scan     tbb 06 1 gb    830142787 ns    810546875 ns            8
scan avx     12 1 gb    830413512 ns    830078125 ns            8
scan avx tbb 12 1 gb    828729987 ns    826171875 ns            8
scan         12 1 gb    809998950 ns    812500000 ns            8
scan     tbb 12 1 gb    829661513 ns    820312500 ns            8
scan avx     24 1 gb    824869963 ns    824218750 ns            8
scan avx tbb 24 1 gb    827873138 ns    818359375 ns            8
scan         24 1 gb    816215587 ns    816406250 ns            8
scan     tbb 24 1 gb    828521238 ns    826171875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    100223150 ns     99609375 ns            8
find avx tbb 06 2 gb    178489650 ns    181640625 ns            8
find         06 2 gb    771480475 ns    769531250 ns            8
find     tbb 06 2 gb    861369663 ns    855468750 ns            8
find avx     12 2 gb    101974538 ns    101562500 ns            8
find avx tbb 12 2 gb    174059613 ns    175781250 ns            8
find         12 2 gb    392476763 ns    392578125 ns            8
find     tbb 12 2 gb    476101487 ns    476562500 ns            8
find avx     24 2 gb    101139263 ns     99609375 ns            8
find avx tbb 24 2 gb    190904812 ns    187500000 ns            8
find         24 2 gb    211454038 ns    208984375 ns            8
find     tbb 24 2 gb    300085713 ns    294921875 ns            8

scan avx     06 2 gb   1606433412 ns   1605468750 ns            8
scan avx tbb 06 2 gb   1646730825 ns   1626953125 ns            8
scan         06 2 gb   1641577400 ns   1638671875 ns            8
scan     tbb 06 2 gb   1657265000 ns   1644531250 ns            8
scan avx     12 2 gb   1643245525 ns   1644531250 ns            8
scan avx tbb 12 2 gb   1647622237 ns   1636718750 ns            8
scan         12 2 gb   1638044100 ns   1640625000 ns            8
scan     tbb 12 2 gb   1651118462 ns   1640625000 ns            8
scan avx     24 2 gb   1614365225 ns   1613281250 ns            8
scan avx tbb 24 2 gb   1651815713 ns   1634765625 ns            8
scan         24 2 gb   1662613338 ns   1660156250 ns            8
scan     tbb 24 2 gb   1651547525 ns   1634765625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1575 ns        0.000 ns         4096
find avx tbb 06 16 kb         949 ns         3815 ns         4096
find         06 16 kb        6775 ns         7629 ns         4096
find     tbb 06 16 kb       17651 ns        19073 ns         4096
find avx     12 16 kb         991 ns        0.000 ns         4096
find avx tbb 12 16 kb        1010 ns         3815 ns         4096
find         12 16 kb        3903 ns         3815 ns         4096
find     tbb 12 16 kb       12071 ns        15259 ns         4096
find avx     24 16 kb        1121 ns        0.000 ns         4096
find avx tbb 24 16 kb        1123 ns         3815 ns         4096
find         24 16 kb        2474 ns        0.000 ns         4096
find     tbb 24 16 kb        9985 ns        11444 ns         4096

scan avx     06 16 kb       13581 ns        15259 ns         4096
scan avx tbb 06 16 kb       11159 ns        11444 ns         4096
scan         06 16 kb       13290 ns        15259 ns         4096
scan     tbb 06 16 kb       27946 ns        30518 ns         4096
scan avx     12 16 kb       13989 ns        15259 ns         4096
scan avx tbb 12 16 kb       11394 ns        11444 ns         4096
scan         12 16 kb       13095 ns        15259 ns         4096
scan     tbb 12 16 kb       27646 ns        15259 ns         4096
scan avx     24 16 kb       13704 ns        15259 ns         4096
scan avx tbb 24 16 kb       11307 ns        11444 ns         4096
scan         24 16 kb       13896 ns        15259 ns         4096
scan     tbb 24 16 kb       27802 ns        30518 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2163 ns        0.000 ns         4096
find avx tbb 06 64 kb        2151 ns         3815 ns         4096
find         06 64 kb       24784 ns        22888 ns         4096
find     tbb 06 64 kb       43439 ns        38147 ns         4096
find avx     12 64 kb        2103 ns        0.000 ns         4096
find avx tbb 12 64 kb        2106 ns         3815 ns         4096
find         12 64 kb       13146 ns        15259 ns         4096
find     tbb 12 64 kb       25398 ns        22888 ns         4096
find avx     24 64 kb        2289 ns         3815 ns         4096
find avx tbb 24 64 kb        2299 ns         3815 ns         4096
find         24 64 kb        6931 ns         7629 ns         4096
find     tbb 24 64 kb       17606 ns        15259 ns         4096

scan avx     06 64 kb       50583 ns        53406 ns         4096
scan avx tbb 06 64 kb       42614 ns        41962 ns         4096
scan         06 64 kb       49506 ns        49591 ns         4096
scan     tbb 06 64 kb       98206 ns        95367 ns         4096
scan avx     12 64 kb       53574 ns        57220 ns         4096
scan avx tbb 12 64 kb       42596 ns        41962 ns         4096
scan         12 64 kb       45955 ns        45776 ns         4096
scan     tbb 12 64 kb       96910 ns        99182 ns         4096
scan avx     24 64 kb       50884 ns        45776 ns         4096
scan avx tbb 24 64 kb       42668 ns        41962 ns         4096
scan         24 64 kb       48586 ns        49591 ns         4096
scan     tbb 24 64 kb       96645 ns       102997 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7112 ns         7629 ns         2048
find avx tbb 06 256 kb       6965 ns         7629 ns         2048
find         06 256 kb      94815 ns        91553 ns         2048
find     tbb 06 256 kb     177082 ns       183105 ns         2048
find avx     12 256 kb       7305 ns         7629 ns         2048
find avx tbb 12 256 kb       7207 ns         7629 ns         2048
find         12 256 kb      48536 ns        53406 ns         2048
find     tbb 12 256 kb      79656 ns        99182 ns         2048
find avx     24 256 kb       7876 ns        15259 ns         2048
find avx tbb 24 256 kb       7551 ns         7629 ns         2048
find         24 256 kb      24751 ns        30518 ns         2048
find     tbb 24 256 kb      44506 ns        45776 ns         2048

scan avx     06 256 kb     205920 ns       213623 ns         2048
scan avx tbb 06 256 kb     169538 ns       183105 ns         2048
scan         06 256 kb     196459 ns       198364 ns         2048
scan     tbb 06 256 kb     325707 ns       328064 ns         2048
scan avx     12 256 kb     202485 ns       213623 ns         2048
scan avx tbb 12 256 kb     168780 ns       175476 ns         2048
scan         12 256 kb     189893 ns       190735 ns         2048
scan     tbb 12 256 kb     325981 ns       297546 ns         2048
scan avx     24 256 kb     203851 ns       205994 ns         2048
scan avx tbb 24 256 kb     168855 ns       175476 ns         2048
scan         24 256 kb     197938 ns       198364 ns         2048
scan     tbb 24 256 kb     309796 ns       305176 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25366 ns        30518 ns         1024
find avx tbb 06 1 mb        67614 ns        45776 ns         1024
find         06 1 mb       382677 ns       381470 ns         1024
find     tbb 06 1 mb       560869 ns       579834 ns         1024
find avx     12 1 mb        25791 ns        45776 ns         1024
find avx tbb 12 1 mb        73070 ns       122070 ns         1024
find         12 1 mb       198389 ns       213623 ns         1024
find     tbb 12 1 mb       317974 ns       350952 ns         1024
find avx     24 1 mb        28351 ns        30518 ns         1024
find avx tbb 24 1 mb        76609 ns        76294 ns         1024
find         24 1 mb        99374 ns       137329 ns         1024
find     tbb 24 1 mb       182816 ns       198364 ns         1024

scan avx     06 1 mb       835388 ns       839233 ns         1024
scan avx tbb 06 1 mb       987935 ns       976562 ns         1024
scan         06 1 mb       833027 ns       854492 ns         1024
scan     tbb 06 1 mb       991561 ns       946045 ns         1024
scan avx     12 1 mb       820494 ns       823975 ns         1024
scan avx tbb 12 1 mb       989516 ns      1022339 ns         1024
scan         12 1 mb       813341 ns       823975 ns         1024
scan     tbb 12 1 mb       988649 ns       976562 ns         1024
scan avx     24 1 mb       807950 ns       839233 ns         1024
scan avx tbb 24 1 mb       990029 ns       991821 ns         1024
scan         24 1 mb       797393 ns       793457 ns         1024
scan     tbb 24 1 mb       985127 ns       976562 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       191609 ns       213623 ns          512
find avx tbb 06 4 mb       363816 ns       396729 ns          512
find         06 4 mb      1529532 ns      1525879 ns          512
find     tbb 06 4 mb      1896222 ns      1892090 ns          512
find avx     12 4 mb       190451 ns       152588 ns          512
find avx tbb 12 4 mb       356163 ns       366211 ns          512
find         12 4 mb       793386 ns       701904 ns          512
find     tbb 12 4 mb      1077562 ns      1129150 ns          512
find avx     24 4 mb       199797 ns       122070 ns          512
find avx tbb 24 4 mb       373570 ns       427246 ns          512
find         24 4 mb       424898 ns       366211 ns          512
find     tbb 24 4 mb       658578 ns       640869 ns          512

scan avx     06 4 mb      3220484 ns      3234863 ns          512
scan avx tbb 06 4 mb      3526751 ns      3448486 ns          512
scan         06 4 mb      3152374 ns      3173828 ns          512
scan     tbb 06 4 mb      3522222 ns      3540039 ns          512
scan avx     12 4 mb      3253876 ns      3295898 ns          512
scan avx tbb 12 4 mb      3532558 ns      3540039 ns          512
scan         12 4 mb      3199361 ns      3295898 ns          512
scan     tbb 12 4 mb      3518721 ns      3509521 ns          512
scan avx     24 4 mb      3226366 ns      3234863 ns          512
scan avx tbb 24 4 mb      3530267 ns      3509521 ns          512
scan         24 4 mb      3173891 ns      3082275 ns          512
scan     tbb 24 4 mb      3520981 ns      3509521 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      764214 ns       976562 ns           64
find avx tbb 06 16 mb     1453878 ns      1220703 ns           64
find         06 16 mb     6127042 ns      6835938 ns           64
find     tbb 06 16 mb     6966630 ns      7568359 ns           64
find avx     12 16 mb      760931 ns       488281 ns           64
find avx tbb 12 16 mb     1446892 ns      1464844 ns           64
find         12 16 mb     3157158 ns      2929688 ns           64
find     tbb 12 16 mb     3910472 ns      2929688 ns           64
find avx     24 16 mb      797211 ns      1220703 ns           64
find avx tbb 24 16 mb     1469666 ns      1708984 ns           64
find         24 16 mb     1685997 ns      2197266 ns           64
find     tbb 24 16 mb     2398700 ns      2441406 ns           64

scan avx     06 16 mb    12746272 ns     12939453 ns           64
scan avx tbb 06 16 mb    13116747 ns     12695312 ns           64
scan         06 16 mb    12745803 ns     12207031 ns           64
scan     tbb 06 16 mb    13003180 ns     12939453 ns           64
scan avx     12 16 mb    12679042 ns     12939453 ns           64
scan avx tbb 12 16 mb    12973780 ns     12939453 ns           64
scan         12 16 mb    12877920 ns     13183594 ns           64
scan     tbb 12 16 mb    12991248 ns     13427734 ns           64
scan avx     24 16 mb    12837244 ns     13183594 ns           64
scan avx tbb 24 16 mb    13056359 ns     13183594 ns           64
scan         24 16 mb    12896797 ns     13427734 ns           64
scan     tbb 24 16 mb    13033595 ns     12451172 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3039500 ns        0.000 ns           32
find avx tbb 06 64 mb     5412409 ns      5371094 ns           32
find         06 64 mb    24176106 ns     24414062 ns           32
find     tbb 06 64 mb    26836263 ns     26367188 ns           32
find avx     12 64 mb     3074959 ns      3906250 ns           32
find avx tbb 12 64 mb     5401900 ns      4882812 ns           32
find         12 64 mb    12278909 ns     11718750 ns           32
find     tbb 12 64 mb    14905394 ns     15625000 ns           32
find avx     24 64 mb     3071987 ns      3906250 ns           32
find avx tbb 24 64 mb     5472581 ns      5859375 ns           32
find         24 64 mb     6769828 ns      7324219 ns           32
find     tbb 24 64 mb     9033806 ns      7324219 ns           32

scan avx     06 64 mb    51946350 ns     51757812 ns           32
scan avx tbb 06 64 mb    51612791 ns     51269531 ns           32
scan         06 64 mb    51408366 ns     50781250 ns           32
scan     tbb 06 64 mb    51608166 ns     51757812 ns           32
scan avx     12 64 mb    51484500 ns     52246094 ns           32
scan avx tbb 12 64 mb    51506647 ns     51269531 ns           32
scan         12 64 mb    51655094 ns     52734375 ns           32
scan     tbb 12 64 mb    51442675 ns     51757812 ns           32
scan avx     24 64 mb    52686153 ns     53222656 ns           32
scan avx tbb 24 64 mb    51562909 ns     52246094 ns           32
scan         24 64 mb    50930091 ns     51269531 ns           32
scan     tbb 24 64 mb    51388866 ns     52246094 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12143962 ns     12695312 ns           16
find avx tbb 06 256 mb   21387406 ns     22460938 ns           16
find         06 256 mb   96773406 ns     94726562 ns           16
find     tbb 06 256 mb  107330506 ns    108398438 ns           16
find avx     12 256 mb   12253681 ns     11718750 ns           16
find avx tbb 12 256 mb   22044719 ns     21484375 ns           16
find         12 256 mb   49442162 ns     48828125 ns           16
find     tbb 12 256 mb   59221606 ns     55664062 ns           16
find avx     24 256 mb   12952288 ns     14648438 ns           16
find avx tbb 24 256 mb   22257663 ns     20507812 ns           16
find         24 256 mb   26814038 ns     31250000 ns           16
find     tbb 24 256 mb   35963263 ns     36132812 ns           16

scan avx     06 256 mb  206372231 ns    206054688 ns           16
scan avx tbb 06 256 mb  207048056 ns    206054688 ns           16
scan         06 256 mb  204159175 ns    206054688 ns           16
scan     tbb 06 256 mb  206302581 ns    207031250 ns           16
scan avx     12 256 mb  205380844 ns    205078125 ns           16
scan avx tbb 12 256 mb  206993300 ns    208984375 ns           16
scan         12 256 mb  205807350 ns    205078125 ns           16
scan     tbb 12 256 mb  206040862 ns    203125000 ns           16
scan avx     24 256 mb  204292356 ns    204101562 ns           16
scan avx tbb 24 256 mb  205946506 ns    206054688 ns           16
scan         24 256 mb  204852931 ns    204101562 ns           16
scan     tbb 24 256 mb  210297281 ns    207031250 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24415888 ns     25390625 ns            8
find avx tbb 06 512 mb   45801587 ns     44921875 ns            8
find         06 512 mb  195103350 ns    193359375 ns            8
find     tbb 06 512 mb  215357063 ns    214843750 ns            8
find avx     12 512 mb   24341100 ns     21484375 ns            8
find avx tbb 12 512 mb   45154650 ns     46875000 ns            8
find         12 512 mb   99676162 ns    101562500 ns            8
find     tbb 12 512 mb  122982500 ns    125000000 ns            8
find avx     24 512 mb   25217488 ns     23437500 ns            8
find avx tbb 24 512 mb   43187362 ns     42968750 ns            8
find         24 512 mb   55689350 ns     56640625 ns            8
find     tbb 24 512 mb   74104713 ns     74218750 ns            8

scan avx     06 512 mb  407699213 ns    410156250 ns            8
scan avx tbb 06 512 mb  417416975 ns    410156250 ns            8
scan         06 512 mb  409950275 ns    410156250 ns            8
scan     tbb 06 512 mb  418052500 ns    419921875 ns            8
scan avx     12 512 mb  410245363 ns    410156250 ns            8
scan avx tbb 12 512 mb  416880800 ns    416015625 ns            8
scan         12 512 mb  409542912 ns    408203125 ns            8
scan     tbb 12 512 mb  418073475 ns    417968750 ns            8
scan avx     24 512 mb  408145188 ns    408203125 ns            8
scan avx tbb 24 512 mb  419441212 ns    414062500 ns            8
scan         24 512 mb  410742788 ns    406250000 ns            8
scan     tbb 24 512 mb  417954038 ns    414062500 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48668300 ns     48828125 ns            8
find avx tbb 06 1 gb     89005925 ns     89843750 ns            8
find         06 1 gb    389046088 ns    392578125 ns            8
find     tbb 06 1 gb    431909512 ns    425781250 ns            8
find avx     12 1 gb     53288950 ns     54687500 ns            8
find avx tbb 12 1 gb     88872287 ns     85937500 ns            8
find         12 1 gb    199765088 ns    199218750 ns            8
find     tbb 12 1 gb    247502200 ns    246093750 ns            8
find avx     24 1 gb     49454300 ns     50781250 ns            8
find avx tbb 24 1 gb     87819213 ns     83984375 ns            8
find         24 1 gb    104661763 ns    107421875 ns            8
find     tbb 24 1 gb    148043650 ns    146484375 ns            8

scan avx     06 1 gb    821729500 ns    816406250 ns            8
scan avx tbb 06 1 gb    826703362 ns    822265625 ns            8
scan         06 1 gb    803341225 ns    804687500 ns            8
scan     tbb 06 1 gb    825727938 ns    820312500 ns            8
scan avx     12 1 gb    816388775 ns    816406250 ns            8
scan avx tbb 12 1 gb    828696025 ns    820312500 ns            8
scan         12 1 gb    826486650 ns    826171875 ns            8
scan     tbb 12 1 gb    828886850 ns    816406250 ns            8
scan avx     24 1 gb    814231388 ns    814453125 ns            8
scan avx tbb 24 1 gb    827056175 ns    814453125 ns            8
scan         24 1 gb    829847163 ns    830078125 ns            8
scan     tbb 24 1 gb    826329887 ns    818359375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97262212 ns    103515625 ns            8
find avx tbb 06 2 gb    174902825 ns    173828125 ns            8
find         06 2 gb    771660950 ns    773437500 ns            8
find     tbb 06 2 gb    863892037 ns    857421875 ns            8
find avx     12 2 gb     97865950 ns     95703125 ns            8
find avx tbb 12 2 gb    175463688 ns    169921875 ns            8
find         12 2 gb    392411925 ns    392578125 ns            8
find     tbb 12 2 gb    477652887 ns    474609375 ns            8
find avx     24 2 gb    106590388 ns    105468750 ns            8
find avx tbb 24 2 gb    180454662 ns    169921875 ns            8
find         24 2 gb    210240350 ns    212890625 ns            8
find     tbb 24 2 gb    290272775 ns    285156250 ns            8

scan avx     06 2 gb   1622545500 ns   1625000000 ns            8
scan avx tbb 06 2 gb   1646328925 ns   1630859375 ns            8
scan         06 2 gb   1637332338 ns   1634765625 ns            8
scan     tbb 06 2 gb   1648393150 ns   1626953125 ns            8
scan avx     12 2 gb   1621583550 ns   1623046875 ns            8
scan avx tbb 12 2 gb   1651750413 ns   1632812500 ns            8
scan         12 2 gb   1654031250 ns   1656250000 ns            8
scan     tbb 12 2 gb   1649326500 ns   1625000000 ns            8
scan avx     24 2 gb   1646022688 ns   1648437500 ns            8
scan avx tbb 24 2 gb   1647961988 ns   1628906250 ns            8
scan         24 2 gb   1643046137 ns   1642578125 ns            8
scan     tbb 24 2 gb   1643190262 ns   1623046875 ns            8
```

</details>

