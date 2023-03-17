# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1538 ns        0.000 ns         4096
find avx tbb 06 16 kb         990 ns        0.000 ns         4096
find         06 16 kb        7346 ns        11444 ns         4096
find     tbb 06 16 kb        9231 ns         7629 ns         4096
find avx     12 16 kb        1019 ns        0.000 ns         4096
find avx tbb 12 16 kb        1036 ns        0.000 ns         4096
find         12 16 kb        4227 ns         3815 ns         4096
find     tbb 12 16 kb        8607 ns         7629 ns         4096
find avx     24 16 kb        1063 ns        0.000 ns         4096
find avx tbb 24 16 kb        1075 ns        0.000 ns         4096
find         24 16 kb        2570 ns         3815 ns         4096
find     tbb 24 16 kb        8294 ns        11444 ns         4096

scan avx     06 16 kb       14526 ns        15259 ns         4096
scan avx tbb 06 16 kb       14262 ns        15259 ns         4096
scan         06 16 kb       14022 ns        15259 ns         4096
scan     tbb 06 16 kb        7727 ns         3815 ns         4096
scan avx     12 16 kb       13414 ns        11444 ns         4096
scan avx tbb 12 16 kb       13426 ns        15259 ns         4096
scan         12 16 kb       13350 ns        11444 ns         4096
scan     tbb 12 16 kb        7571 ns         7629 ns         4096
scan avx     24 16 kb       13925 ns        11444 ns         4096
scan avx tbb 24 16 kb       13452 ns        15259 ns         4096
scan         24 16 kb       14015 ns        15259 ns         4096
scan     tbb 24 16 kb        7402 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2204 ns         3815 ns         4096
find avx tbb 06 64 kb        2089 ns         3815 ns         4096
find         06 64 kb       27681 ns        30518 ns         4096
find     tbb 06 64 kb       11734 ns        15259 ns         4096
find avx     12 64 kb        2092 ns         3815 ns         4096
find avx tbb 12 64 kb        2077 ns        0.000 ns         4096
find         12 64 kb       14057 ns        11444 ns         4096
find     tbb 12 64 kb        9893 ns        15259 ns         4096
find avx     24 64 kb        2279 ns        0.000 ns         4096
find avx tbb 24 64 kb        2294 ns        0.000 ns         4096
find         24 64 kb        7895 ns         7629 ns         4096
find     tbb 24 64 kb        9135 ns         7629 ns         4096

scan avx     06 64 kb       55482 ns        53406 ns         4096
scan avx tbb 06 64 kb       51635 ns        45776 ns         4096
scan         06 64 kb       51111 ns        49591 ns         4096
scan     tbb 06 64 kb       14098 ns        19073 ns         4096
scan avx     12 64 kb       52309 ns        53406 ns         4096
scan avx tbb 12 64 kb       53348 ns        49591 ns         4096
scan         12 64 kb       51167 ns        49591 ns         4096
scan     tbb 12 64 kb       13839 ns         7629 ns         4096
scan avx     24 64 kb       53586 ns        53406 ns         4096
scan avx tbb 24 64 kb       51660 ns        49591 ns         4096
scan         24 64 kb       51640 ns        53406 ns         4096
scan     tbb 24 64 kb       13726 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7205 ns        15259 ns         2048
find avx tbb 06 256 kb       7164 ns        0.000 ns         2048
find         06 256 kb     107867 ns        99182 ns         2048
find     tbb 06 256 kb      22135 ns        22888 ns         2048
find avx     12 256 kb       7251 ns        0.000 ns         2048
find avx tbb 12 256 kb       7224 ns        0.000 ns         2048
find         12 256 kb      55605 ns        45776 ns         2048
find     tbb 12 256 kb      17118 ns        22888 ns         2048
find avx     24 256 kb       7742 ns         7629 ns         2048
find avx tbb 24 256 kb       7673 ns        0.000 ns         2048
find         24 256 kb      28358 ns        30518 ns         2048
find     tbb 24 256 kb      14509 ns         7629 ns         2048

scan avx     06 256 kb     208545 ns       213623 ns         2048
scan avx tbb 06 256 kb     205020 ns       167847 ns         2048
scan         06 256 kb     205559 ns       205994 ns         2048
scan     tbb 06 256 kb      40965 ns        38147 ns         2048
scan avx     12 256 kb     209000 ns       213623 ns         2048
scan avx tbb 12 256 kb     206037 ns       213623 ns         2048
scan         12 256 kb     203333 ns       205994 ns         2048
scan     tbb 12 256 kb      41842 ns        30518 ns         2048
scan avx     24 256 kb     208007 ns       198364 ns         2048
scan avx tbb 24 256 kb     202609 ns       198364 ns         2048
scan         24 256 kb     204264 ns       198364 ns         2048
scan     tbb 24 256 kb      40252 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26009 ns        30518 ns         1024
find avx tbb 06 1 mb        17544 ns        15259 ns         1024
find         06 1 mb       419142 ns       442505 ns         1024
find     tbb 06 1 mb        53307 ns        61035 ns         1024
find avx     12 1 mb        27183 ns        45776 ns         1024
find avx tbb 12 1 mb        18309 ns        30518 ns         1024
find         12 1 mb       213022 ns       167847 ns         1024
find     tbb 12 1 mb        32855 ns        30518 ns         1024
find avx     24 1 mb        27270 ns        45776 ns         1024
find avx tbb 24 1 mb        18841 ns        15259 ns         1024
find         24 1 mb       113989 ns       122070 ns         1024
find     tbb 24 1 mb        23588 ns        15259 ns         1024

scan avx     06 1 mb       830200 ns       839233 ns         1024
scan avx tbb 06 1 mb       137285 ns       122070 ns         1024
scan         06 1 mb       821026 ns       854492 ns         1024
scan     tbb 06 1 mb       136673 ns       106812 ns         1024
scan avx     12 1 mb       814036 ns       839233 ns         1024
scan avx tbb 12 1 mb       137232 ns       106812 ns         1024
scan         12 1 mb       794861 ns       778198 ns         1024
scan     tbb 12 1 mb       137718 ns       137329 ns         1024
scan avx     24 1 mb       820126 ns       839233 ns         1024
scan avx tbb 24 1 mb       136950 ns       137329 ns         1024
scan         24 1 mb       798863 ns       808716 ns         1024
scan     tbb 24 1 mb       136601 ns       152588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       192398 ns       213623 ns          512
find avx tbb 06 4 mb       181896 ns       122070 ns          512
find         06 4 mb      1682749 ns      1647949 ns          512
find     tbb 06 4 mb       226038 ns       274658 ns          512
find avx     12 4 mb       191328 ns       213623 ns          512
find avx tbb 12 4 mb       175316 ns       183105 ns          512
find         12 4 mb       860607 ns       823975 ns          512
find     tbb 12 4 mb       197171 ns       244141 ns          512
find avx     24 4 mb       202620 ns       213623 ns          512
find avx tbb 24 4 mb       181731 ns       122070 ns          512
find         24 4 mb       453858 ns       488281 ns          512
find     tbb 24 4 mb       191278 ns       213623 ns          512

scan avx     06 4 mb      3292479 ns      3204346 ns          512
scan avx tbb 06 4 mb       558413 ns       579834 ns          512
scan         06 4 mb      3318662 ns      3295898 ns          512
scan     tbb 06 4 mb       559357 ns       518799 ns          512
scan avx     12 4 mb      3170290 ns      3265381 ns          512
scan avx tbb 12 4 mb       558787 ns       640869 ns          512
scan         12 4 mb      3295483 ns      3387451 ns          512
scan     tbb 12 4 mb       560454 ns       579834 ns          512
scan avx     24 4 mb      3155596 ns      3082275 ns          512
scan avx tbb 24 4 mb       559141 ns       549316 ns          512
scan         24 4 mb      3295455 ns      3326416 ns          512
scan     tbb 24 4 mb       559889 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      774733 ns        0.000 ns           64
find avx tbb 06 16 mb      640891 ns       488281 ns           64
find         06 16 mb     6717550 ns      7568359 ns           64
find     tbb 06 16 mb      791416 ns       976562 ns           64
find avx     12 16 mb      789473 ns       732422 ns           64
find avx tbb 12 16 mb      639620 ns       244141 ns           64
find         12 16 mb     3481623 ns      2929688 ns           64
find     tbb 12 16 mb      705294 ns       488281 ns           64
find avx     24 16 mb      813475 ns       732422 ns           64
find avx tbb 24 16 mb      640720 ns      1220703 ns           64
find         24 16 mb     1864063 ns      1464844 ns           64
find     tbb 24 16 mb      678192 ns       488281 ns           64

scan avx     06 16 mb    13247108 ns     13183594 ns           64
scan avx tbb 06 16 mb     2109948 ns      1708984 ns           64
scan         06 16 mb    12665245 ns     12939453 ns           64
scan     tbb 06 16 mb     2116994 ns      2197266 ns           64
scan avx     12 16 mb    13171305 ns     13183594 ns           64
scan avx tbb 12 16 mb     2112545 ns      1953125 ns           64
scan         12 16 mb    12638780 ns     12695312 ns           64
scan     tbb 12 16 mb     2145936 ns       732422 ns           64
scan avx     24 16 mb    12685738 ns     12939453 ns           64
scan avx tbb 24 16 mb     2120430 ns      1464844 ns           64
scan         24 16 mb    13169425 ns     13671875 ns           64
scan     tbb 24 16 mb     2125648 ns      2197266 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3030150 ns        0.000 ns           32
find avx tbb 06 64 mb     2376066 ns      2441406 ns           32
find         06 64 mb    26569772 ns     31250000 ns           32
find     tbb 06 64 mb     2843466 ns       976562 ns           32
find avx     12 64 mb     3041994 ns      6347656 ns           32
find avx tbb 12 64 mb     2360403 ns      2929688 ns           32
find         12 64 mb    13898700 ns     14160156 ns           32
find     tbb 12 64 mb     2485984 ns      1953125 ns           32
find avx     24 64 mb     3194625 ns      2441406 ns           32
find avx tbb 24 64 mb     2383859 ns      2929688 ns           32
find         24 64 mb     7240244 ns      8300781 ns           32
find     tbb 24 64 mb     2443997 ns      2441406 ns           32

scan avx     06 64 mb    50754156 ns     50292969 ns           32
scan avx tbb 06 64 mb     8232591 ns      7812500 ns           32
scan         06 64 mb    52792781 ns     53222656 ns           32
scan     tbb 06 64 mb     8327084 ns      8300781 ns           32
scan avx     12 64 mb    52821144 ns     53222656 ns           32
scan avx tbb 12 64 mb     8170141 ns      7324219 ns           32
scan         12 64 mb    50493425 ns     50781250 ns           32
scan     tbb 12 64 mb     8224341 ns      8300781 ns           32
scan avx     24 64 mb    52832887 ns     53710938 ns           32
scan avx tbb 24 64 mb     8199059 ns      7812500 ns           32
scan         24 64 mb    50767562 ns     51757812 ns           32
scan     tbb 24 64 mb     8226553 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12170387 ns     11718750 ns           16
find avx tbb 06 256 mb    9555200 ns      9765625 ns           16
find         06 256 mb  106622519 ns    109375000 ns           16
find     tbb 06 256 mb   10932000 ns     15625000 ns           16
find avx     12 256 mb   13005375 ns     13671875 ns           16
find avx tbb 12 256 mb    9258087 ns      9765625 ns           16
find         12 256 mb   54211700 ns     54687500 ns           16
find     tbb 12 256 mb    9543350 ns      8789062 ns           16
find avx     24 256 mb   12638956 ns     12695312 ns           16
find avx tbb 24 256 mb    9279294 ns      8789062 ns           16
find         24 256 mb   28231706 ns     27343750 ns           16
find     tbb 24 256 mb    9527375 ns     10742188 ns           16

scan avx     06 256 mb  201670381 ns    202148438 ns           16
scan avx tbb 06 256 mb   32318594 ns     32226562 ns           16
scan         06 256 mb  200667644 ns    199218750 ns           16
scan     tbb 06 256 mb   32464056 ns     30273438 ns           16
scan avx     12 256 mb  200757900 ns    200195312 ns           16
scan avx tbb 12 256 mb   32512744 ns     30273438 ns           16
scan         12 256 mb  202565612 ns    202148438 ns           16
scan     tbb 12 256 mb   32369438 ns     33203125 ns           16
scan avx     24 256 mb  210429813 ns    209960938 ns           16
scan avx tbb 24 256 mb   32427888 ns     30273438 ns           16
scan         24 256 mb  202011656 ns    202148438 ns           16
scan     tbb 24 256 mb   32350031 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24499325 ns     27343750 ns            8
find avx tbb 06 512 mb   18424138 ns     15625000 ns            8
find         06 512 mb  213913525 ns    212890625 ns            8
find     tbb 06 512 mb   21127087 ns     21484375 ns            8
find avx     12 512 mb   24251700 ns     21484375 ns            8
find avx tbb 12 512 mb   18446025 ns     19531250 ns            8
find         12 512 mb  108557425 ns    109375000 ns            8
find     tbb 12 512 mb   18844713 ns     17578125 ns            8
find avx     24 512 mb   25118762 ns     25390625 ns            8
find avx tbb 24 512 mb   18501075 ns     19531250 ns            8
find         24 512 mb   56940950 ns     54687500 ns            8
find     tbb 24 512 mb   18859300 ns     19531250 ns            8

scan avx     06 512 mb  421131225 ns    421875000 ns            8
scan avx tbb 06 512 mb   65025900 ns     64453125 ns            8
scan         06 512 mb  420202312 ns    419921875 ns            8
scan     tbb 06 512 mb   64859162 ns     60546875 ns            8
scan avx     12 512 mb  420532187 ns    421875000 ns            8
scan avx tbb 12 512 mb   64666088 ns     58593750 ns            8
scan         12 512 mb  419936700 ns    421875000 ns            8
scan     tbb 12 512 mb   64464812 ns     60546875 ns            8
scan avx     24 512 mb  420443188 ns    419921875 ns            8
scan avx tbb 24 512 mb   64603900 ns     62500000 ns            8
scan         24 512 mb  402844350 ns    404296875 ns            8
scan     tbb 24 512 mb   64546375 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48991125 ns     48828125 ns            8
find avx tbb 06 1 gb     36764038 ns     35156250 ns            8
find         06 1 gb    426944525 ns    427734375 ns            8
find     tbb 06 1 gb     42519725 ns     42968750 ns            8
find avx     12 1 gb     53726275 ns     54687500 ns            8
find avx tbb 12 1 gb     36740362 ns     35156250 ns            8
find         12 1 gb    217361650 ns    218750000 ns            8
find     tbb 12 1 gb     37994375 ns     37109375 ns            8
find avx     24 1 gb     53791912 ns     56640625 ns            8
find avx tbb 24 1 gb     36831338 ns     37109375 ns            8
find         24 1 gb    113406063 ns    115234375 ns            8
find     tbb 24 1 gb     37500088 ns     35156250 ns            8

scan avx     06 1 gb    807318775 ns    808593750 ns            8
scan avx tbb 06 1 gb    129152450 ns    119140625 ns            8
scan         06 1 gb    839553850 ns    839843750 ns            8
scan     tbb 06 1 gb    129890150 ns    117187500 ns            8
scan avx     12 1 gb    841130175 ns    843750000 ns            8
scan avx tbb 12 1 gb    129283200 ns    125000000 ns            8
scan         12 1 gb    809178838 ns    802734375 ns            8
scan     tbb 12 1 gb    129526675 ns    121093750 ns            8
scan avx     24 1 gb    804483825 ns    802734375 ns            8
scan avx tbb 24 1 gb    129817238 ns    123046875 ns            8
scan         24 1 gb    840522900 ns    843750000 ns            8
scan     tbb 24 1 gb    131467975 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97372725 ns     97656250 ns            8
find avx tbb 06 2 gb     73534175 ns     70312500 ns            8
find         06 2 gb    851653900 ns    851562500 ns            8
find     tbb 06 2 gb     85547075 ns     78125000 ns            8
find avx     12 2 gb     97412700 ns     99609375 ns            8
find avx tbb 12 2 gb     73611500 ns     70312500 ns            8
find         12 2 gb    434320587 ns    437500000 ns            8
find     tbb 12 2 gb     75534775 ns     76171875 ns            8
find avx     24 2 gb    102976375 ns    103515625 ns            8
find avx tbb 24 2 gb     73601512 ns     72265625 ns            8
find         24 2 gb    226254687 ns    226562500 ns            8
find     tbb 24 2 gb     74813275 ns     72265625 ns            8

scan avx     06 2 gb   1620673737 ns   1621093750 ns            8
scan avx tbb 06 2 gb    261234238 ns    236328125 ns            8
scan         06 2 gb   1684314663 ns   1683593750 ns            8
scan     tbb 06 2 gb    260990825 ns    240234375 ns            8
scan avx     12 2 gb   1622018050 ns   1619140625 ns            8
scan avx tbb 12 2 gb    263410013 ns    242187500 ns            8
scan         12 2 gb   1614822350 ns   1615234375 ns            8
scan     tbb 12 2 gb    260320037 ns    246093750 ns            8
scan avx     24 2 gb   1603339387 ns   1599609375 ns            8
scan avx tbb 24 2 gb    260728062 ns    240234375 ns            8
scan         24 2 gb   1604977712 ns   1607421875 ns            8
scan     tbb 24 2 gb    260561500 ns    238281250 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1634 ns        0.000 ns         4096
find avx tbb 06 16 kb        1012 ns        0.000 ns         4096
find         06 16 kb        6737 ns         7629 ns         4096
find     tbb 06 16 kb        9271 ns        11444 ns         4096
find avx     12 16 kb        1168 ns         3815 ns         4096
find avx tbb 12 16 kb        1184 ns        0.000 ns         4096
find         12 16 kb        3889 ns         3815 ns         4096
find     tbb 12 16 kb        8771 ns         3815 ns         4096
find avx     24 16 kb        1115 ns         3815 ns         4096
find avx tbb 24 16 kb        1067 ns        0.000 ns         4096
find         24 16 kb        2444 ns        0.000 ns         4096
find     tbb 24 16 kb        8371 ns        11444 ns         4096

scan avx     06 16 kb       14497 ns        15259 ns         4096
scan avx tbb 06 16 kb       11786 ns        11444 ns         4096
scan         06 16 kb       13717 ns        15259 ns         4096
scan     tbb 06 16 kb        7673 ns         7629 ns         4096
scan avx     12 16 kb       13294 ns        15259 ns         4096
scan avx tbb 12 16 kb       11770 ns        11444 ns         4096
scan         12 16 kb       13356 ns        15259 ns         4096
scan     tbb 12 16 kb        7542 ns         3815 ns         4096
scan avx     24 16 kb       13577 ns        15259 ns         4096
scan avx tbb 24 16 kb       11138 ns        11444 ns         4096
scan         24 16 kb       13326 ns        11444 ns         4096
scan     tbb 24 16 kb        7463 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2102 ns         3815 ns         4096
find avx tbb 06 64 kb        2143 ns        0.000 ns         4096
find         06 64 kb       25926 ns        15259 ns         4096
find     tbb 06 64 kb       11530 ns         7629 ns         4096
find avx     12 64 kb        2651 ns        0.000 ns         4096
find avx tbb 12 64 kb        2659 ns         3815 ns         4096
find         12 64 kb       12701 ns         7629 ns         4096
find     tbb 12 64 kb        9867 ns        11444 ns         4096
find avx     24 64 kb        2377 ns         3815 ns         4096
find avx tbb 24 64 kb        2273 ns        0.000 ns         4096
find         24 64 kb        6729 ns         3815 ns         4096
find     tbb 24 64 kb        9050 ns        11444 ns         4096

scan avx     06 64 kb       52394 ns        49591 ns         4096
scan avx tbb 06 64 kb       42517 ns        41962 ns         4096
scan         06 64 kb       51177 ns        53406 ns         4096
scan     tbb 06 64 kb       13858 ns        11444 ns         4096
scan avx     12 64 kb       52435 ns        57220 ns         4096
scan avx tbb 12 64 kb       42792 ns        34332 ns         4096
scan         12 64 kb       51654 ns        49591 ns         4096
scan     tbb 12 64 kb       13723 ns        19073 ns         4096
scan avx     24 64 kb       51750 ns        45776 ns         4096
scan avx tbb 24 64 kb       42592 ns        41962 ns         4096
scan         24 64 kb       49460 ns        53406 ns         4096
scan     tbb 24 64 kb       13920 ns         7629 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7132 ns         7629 ns         2048
find avx tbb 06 256 kb       7125 ns         7629 ns         2048
find         06 256 kb      97779 ns       106812 ns         2048
find     tbb 06 256 kb      21592 ns        15259 ns         2048
find avx     12 256 kb       8308 ns         7629 ns         2048
find avx tbb 12 256 kb       8251 ns         7629 ns         2048
find         12 256 kb      50274 ns        30518 ns         2048
find     tbb 12 256 kb      16996 ns        15259 ns         2048
find avx     24 256 kb       8123 ns        15259 ns         2048
find avx tbb 24 256 kb       7889 ns         7629 ns         2048
find         24 256 kb      25037 ns        30518 ns         2048
find     tbb 24 256 kb      14862 ns        22888 ns         2048

scan avx     06 256 kb     205320 ns       205994 ns         2048
scan avx tbb 06 256 kb     169068 ns       160217 ns         2048
scan         06 256 kb     206859 ns       205994 ns         2048
scan     tbb 06 256 kb      40695 ns        45776 ns         2048
scan avx     12 256 kb     202192 ns       198364 ns         2048
scan avx tbb 12 256 kb     169070 ns       160217 ns         2048
scan         12 256 kb     204620 ns       205994 ns         2048
scan     tbb 12 256 kb      40148 ns        53406 ns         2048
scan avx     24 256 kb     206365 ns       213623 ns         2048
scan avx tbb 24 256 kb     171291 ns       167847 ns         2048
scan         24 256 kb     201298 ns       190735 ns         2048
scan     tbb 24 256 kb      40709 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26563 ns        30518 ns         1024
find avx tbb 06 1 mb        18004 ns        15259 ns         1024
find         06 1 mb       385294 ns       381470 ns         1024
find     tbb 06 1 mb        49777 ns        30518 ns         1024
find avx     12 1 mb        30396 ns        30518 ns         1024
find avx tbb 12 1 mb        18135 ns        45776 ns         1024
find         12 1 mb       194208 ns       198364 ns         1024
find     tbb 12 1 mb        31972 ns        30518 ns         1024
find avx     24 1 mb        29631 ns        0.000 ns         1024
find avx tbb 24 1 mb        17604 ns        0.000 ns         1024
find         24 1 mb        98370 ns        91553 ns         1024
find     tbb 24 1 mb        23358 ns        45776 ns         1024

scan avx     06 1 mb       787095 ns       823975 ns         1024
scan avx tbb 06 1 mb       136195 ns       137329 ns         1024
scan         06 1 mb       827842 ns       839233 ns         1024
scan     tbb 06 1 mb       136925 ns       152588 ns         1024
scan avx     12 1 mb       806690 ns       808716 ns         1024
scan avx tbb 12 1 mb       136297 ns       137329 ns         1024
scan         12 1 mb       812104 ns       808716 ns         1024
scan     tbb 12 1 mb       136869 ns       137329 ns         1024
scan avx     24 1 mb       808836 ns       808716 ns         1024
scan avx tbb 24 1 mb       136677 ns       122070 ns         1024
scan         24 1 mb       809473 ns       839233 ns         1024
scan     tbb 24 1 mb       137005 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189838 ns       244141 ns          512
find avx tbb 06 4 mb       178113 ns       213623 ns          512
find         06 4 mb      1523855 ns      1525879 ns          512
find     tbb 06 4 mb       216149 ns       213623 ns          512
find avx     12 4 mb       194093 ns       213623 ns          512
find avx tbb 12 4 mb       169056 ns       213623 ns          512
find         12 4 mb       781219 ns       732422 ns          512
find     tbb 12 4 mb       198285 ns       152588 ns          512
find avx     24 4 mb       210755 ns       183105 ns          512
find avx tbb 24 4 mb       179953 ns       122070 ns          512
find         24 4 mb       423775 ns       427246 ns          512
find     tbb 24 4 mb       185149 ns       183105 ns          512

scan avx     06 4 mb      3171133 ns      3143311 ns          512
scan avx tbb 06 4 mb       558824 ns       579834 ns          512
scan         06 4 mb      3223507 ns      3173828 ns          512
scan     tbb 06 4 mb       559006 ns       549316 ns          512
scan avx     12 4 mb      3209287 ns      3265381 ns          512
scan avx tbb 12 4 mb       557449 ns       549316 ns          512
scan         12 4 mb      3188052 ns      3204346 ns          512
scan     tbb 12 4 mb       557537 ns       549316 ns          512
scan avx     24 4 mb      3240328 ns      3265381 ns          512
scan avx tbb 24 4 mb       557517 ns       610352 ns          512
scan         24 4 mb      3157774 ns      3051758 ns          512
scan     tbb 24 4 mb       556134 ns       396729 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      778053 ns      1220703 ns           64
find avx tbb 06 16 mb      623038 ns       732422 ns           64
find         06 16 mb     6162184 ns      6103516 ns           64
find     tbb 06 16 mb      755295 ns       976562 ns           64
find avx     12 16 mb      779472 ns       976562 ns           64
find avx tbb 12 16 mb      629416 ns       976562 ns           64
find         12 16 mb     3145208 ns      3662109 ns           64
find     tbb 12 16 mb      686894 ns       732422 ns           64
find avx     24 16 mb      866933 ns       244141 ns           64
find avx tbb 24 16 mb      649061 ns       488281 ns           64
find         24 16 mb     1687639 ns      1708984 ns           64
find     tbb 24 16 mb      677778 ns       488281 ns           64

scan avx     06 16 mb    12862023 ns     12939453 ns           64
scan avx tbb 06 16 mb     2115741 ns      1953125 ns           64
scan         06 16 mb    12752222 ns     13183594 ns           64
scan     tbb 06 16 mb     2113267 ns      1708984 ns           64
scan avx     12 16 mb    12735487 ns     12451172 ns           64
scan avx tbb 12 16 mb     2112353 ns      1464844 ns           64
scan         12 16 mb    12507358 ns     12451172 ns           64
scan     tbb 12 16 mb     2117734 ns      1708984 ns           64
scan avx     24 16 mb    12771328 ns     12695312 ns           64
scan avx tbb 24 16 mb     2105775 ns       976562 ns           64
scan         24 16 mb    12877722 ns     13183594 ns           64
scan     tbb 24 16 mb     2127169 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3023150 ns      5371094 ns           32
find avx tbb 06 64 mb     2364225 ns      2929688 ns           32
find         06 64 mb    24144397 ns     24414062 ns           32
find     tbb 06 64 mb     2655609 ns      3417969 ns           32
find avx     12 64 mb     3042934 ns      4882812 ns           32
find avx tbb 12 64 mb     2369284 ns      2929688 ns           32
find         12 64 mb    12354384 ns     11718750 ns           32
find     tbb 12 64 mb     2481944 ns      1464844 ns           32
find avx     24 64 mb     3467663 ns      4394531 ns           32
find avx tbb 24 64 mb     2372731 ns      1464844 ns           32
find         24 64 mb     6540806 ns      6347656 ns           32
find     tbb 24 64 mb     2431981 ns      1953125 ns           32

scan avx     06 64 mb    52970756 ns     53710938 ns           32
scan avx tbb 06 64 mb     8224203 ns      8789062 ns           32
scan         06 64 mb    50555250 ns     50781250 ns           32
scan     tbb 06 64 mb     8206969 ns      7812500 ns           32
scan avx     12 64 mb    51382756 ns     50781250 ns           32
scan avx tbb 12 64 mb     8187353 ns      8300781 ns           32
scan         12 64 mb    51443222 ns     50292969 ns           32
scan     tbb 12 64 mb     8274269 ns      8300781 ns           32
scan avx     24 64 mb    51038247 ns     52246094 ns           32
scan avx tbb 24 64 mb     8165684 ns      8300781 ns           32
scan         24 64 mb    51351256 ns     52246094 ns           32
scan     tbb 24 64 mb     8169531 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12155669 ns     15625000 ns           16
find avx tbb 06 256 mb    9253787 ns      7812500 ns           16
find         06 256 mb   96327856 ns     95703125 ns           16
find     tbb 06 256 mb   10118687 ns      8789062 ns           16
find avx     12 256 mb   12080637 ns     11718750 ns           16
find avx tbb 12 256 mb    9265863 ns      8789062 ns           16
find         12 256 mb   49050075 ns     47851562 ns           16
find     tbb 12 256 mb    9551894 ns     10742188 ns           16
find avx     24 256 mb   13954269 ns     15625000 ns           16
find avx tbb 24 256 mb    9273356 ns      9765625 ns           16
find         24 256 mb   27123994 ns     26367188 ns           16
find     tbb 24 256 mb    9455369 ns      7812500 ns           16

scan avx     06 256 mb  206809706 ns    207031250 ns           16
scan avx tbb 06 256 mb   32445644 ns     30273438 ns           16
scan         06 256 mb  204349069 ns    205078125 ns           16
scan     tbb 06 256 mb   32441850 ns     33203125 ns           16
scan avx     12 256 mb  207647869 ns    208984375 ns           16
scan avx tbb 12 256 mb   32644563 ns     32226562 ns           16
scan         12 256 mb  205024638 ns    204101562 ns           16
scan     tbb 12 256 mb   32349525 ns     32226562 ns           16
scan avx     24 256 mb  205714950 ns    202148438 ns           16
scan avx tbb 24 256 mb   32487725 ns     32226562 ns           16
scan         24 256 mb  204757606 ns    201171875 ns           16
scan     tbb 24 256 mb   32531300 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25108675 ns     27343750 ns            8
find avx tbb 06 512 mb   19382988 ns     15625000 ns            8
find         06 512 mb  193943625 ns    195312500 ns            8
find     tbb 06 512 mb   20274950 ns     23437500 ns            8
find avx     12 512 mb   24322325 ns     23437500 ns            8
find avx tbb 12 512 mb   18427663 ns     19531250 ns            8
find         12 512 mb   99768425 ns     99609375 ns            8
find     tbb 12 512 mb   18912125 ns     15625000 ns            8
find avx     24 512 mb   29037325 ns     29296875 ns            8
find avx tbb 24 512 mb   18479187 ns     19531250 ns            8
find         24 512 mb   52479888 ns     54687500 ns            8
find     tbb 24 512 mb   18831800 ns     17578125 ns            8

scan avx     06 512 mb  406322213 ns    402343750 ns            8
scan avx tbb 06 512 mb   65513037 ns     64453125 ns            8
scan         06 512 mb  403975150 ns    406250000 ns            8
scan     tbb 06 512 mb   64617587 ns     60546875 ns            8
scan avx     12 512 mb  405107337 ns    404296875 ns            8
scan avx tbb 12 512 mb   64358338 ns     60546875 ns            8
scan         12 512 mb  413010175 ns    412109375 ns            8
scan     tbb 12 512 mb   64596437 ns     62500000 ns            8
scan avx     24 512 mb  407023137 ns    408203125 ns            8
scan avx tbb 24 512 mb   64811300 ns     62500000 ns            8
scan         24 512 mb  410124125 ns    414062500 ns            8
scan     tbb 24 512 mb   64595725 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48614775 ns     48828125 ns            8
find avx tbb 06 1 gb     36821050 ns     37109375 ns            8
find         06 1 gb    388785950 ns    388671875 ns            8
find     tbb 06 1 gb     41536688 ns     37109375 ns            8
find avx     12 1 gb     48780087 ns     50781250 ns            8
find avx tbb 12 1 gb     36945125 ns     37109375 ns            8
find         12 1 gb    199811062 ns    201171875 ns            8
find     tbb 12 1 gb     37689375 ns     39062500 ns            8
find avx     24 1 gb     53436200 ns     54687500 ns            8
find avx tbb 24 1 gb     36858488 ns     39062500 ns            8
find         24 1 gb    104544613 ns    105468750 ns            8
find     tbb 24 1 gb     37571662 ns     41015625 ns            8

scan avx     06 1 gb    816153438 ns    814453125 ns            8
scan avx tbb 06 1 gb    129476350 ns    119140625 ns            8
scan         06 1 gb    828277575 ns    826171875 ns            8
scan     tbb 06 1 gb    129747675 ns    119140625 ns            8
scan avx     12 1 gb    820290200 ns    816406250 ns            8
scan avx tbb 12 1 gb    129455837 ns    123046875 ns            8
scan         12 1 gb    819465463 ns    818359375 ns            8
scan     tbb 12 1 gb    128999688 ns    121093750 ns            8
scan avx     24 1 gb    825782487 ns    824218750 ns            8
scan avx tbb 24 1 gb    129585588 ns    119140625 ns            8
scan         24 1 gb    825998475 ns    824218750 ns            8
scan     tbb 24 1 gb    128803450 ns    117187500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97732663 ns     95703125 ns            8
find avx tbb 06 2 gb     73521212 ns     70312500 ns            8
find         06 2 gb    771219700 ns    771484375 ns            8
find     tbb 06 2 gb     79838962 ns     80078125 ns            8
find avx     12 2 gb     97325337 ns     95703125 ns            8
find avx tbb 12 2 gb     73432787 ns     78125000 ns            8
find         12 2 gb    393173825 ns    394531250 ns            8
find     tbb 12 2 gb     75208488 ns     74218750 ns            8
find avx     24 2 gb    109312462 ns    109375000 ns            8
find avx tbb 24 2 gb     73628312 ns     74218750 ns            8
find         24 2 gb    209476550 ns    210937500 ns            8
find     tbb 24 2 gb     74677650 ns     74218750 ns            8

scan avx     06 2 gb   1641338475 ns   1640625000 ns            8
scan avx tbb 06 2 gb    256840000 ns    242187500 ns            8
scan         06 2 gb   1642927000 ns   1644531250 ns            8
scan     tbb 06 2 gb    258100212 ns    242187500 ns            8
scan avx     12 2 gb   1629553087 ns   1628906250 ns            8
scan avx tbb 12 2 gb    257775263 ns    242187500 ns            8
scan         12 2 gb   1633253725 ns   1634765625 ns            8
scan     tbb 12 2 gb    257646738 ns    242187500 ns            8
scan avx     24 2 gb   1627847975 ns   1625000000 ns            8
scan avx tbb 24 2 gb    259125850 ns    246093750 ns            8
scan         24 2 gb   1642575438 ns   1640625000 ns            8
scan     tbb 24 2 gb    259171175 ns    238281250 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1551 ns        0.000 ns         4096
find avx tbb 06 16 kb         945 ns        0.000 ns         4096
find         06 16 kb        6623 ns         7629 ns         4096
find     tbb 06 16 kb        9158 ns        11444 ns         4096
find avx     12 16 kb         933 ns        0.000 ns         4096
find avx tbb 12 16 kb         927 ns         3815 ns         4096
find         12 16 kb        3728 ns         3815 ns         4096
find     tbb 12 16 kb        8755 ns         7629 ns         4096
find avx     24 16 kb        1097 ns        0.000 ns         4096
find avx tbb 24 16 kb        1029 ns         3815 ns         4096
find         24 16 kb        2314 ns        0.000 ns         4096
find     tbb 24 16 kb        8212 ns        11444 ns         4096

scan avx     06 16 kb       13556 ns        15259 ns         4096
scan avx tbb 06 16 kb       11082 ns         7629 ns         4096
scan         06 16 kb       12788 ns         7629 ns         4096
scan     tbb 06 16 kb        7601 ns         7629 ns         4096
scan avx     12 16 kb       13805 ns        15259 ns         4096
scan avx tbb 12 16 kb       11626 ns         7629 ns         4096
scan         12 16 kb       13616 ns        15259 ns         4096
scan     tbb 12 16 kb        7585 ns         7629 ns         4096
scan avx     24 16 kb       14126 ns        15259 ns         4096
scan avx tbb 24 16 kb       11940 ns        11444 ns         4096
scan         24 16 kb       13853 ns        15259 ns         4096
scan     tbb 24 16 kb        7288 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2017 ns         3815 ns         4096
find avx tbb 06 64 kb        2029 ns        0.000 ns         4096
find         06 64 kb       25650 ns        26703 ns         4096
find     tbb 06 64 kb       11251 ns        15259 ns         4096
find avx     12 64 kb        1982 ns         3815 ns         4096
find avx tbb 12 64 kb        1979 ns        0.000 ns         4096
find         12 64 kb       13138 ns        11444 ns         4096
find     tbb 12 64 kb        9888 ns        11444 ns         4096
find avx     24 64 kb        2454 ns         3815 ns         4096
find avx tbb 24 64 kb        2482 ns        0.000 ns         4096
find         24 64 kb        6806 ns         3815 ns         4096
find     tbb 24 64 kb        8979 ns         7629 ns         4096

scan avx     06 64 kb       52037 ns        49591 ns         4096
scan avx tbb 06 64 kb       42613 ns        45776 ns         4096
scan         06 64 kb       51224 ns        53406 ns         4096
scan     tbb 06 64 kb       13716 ns         7629 ns         4096
scan avx     12 64 kb       52808 ns        49591 ns         4096
scan avx tbb 12 64 kb       42654 ns        41962 ns         4096
scan         12 64 kb       51809 ns        41962 ns         4096
scan     tbb 12 64 kb       13675 ns        11444 ns         4096
scan avx     24 64 kb       53056 ns        57220 ns         4096
scan avx tbb 24 64 kb       42532 ns        41962 ns         4096
scan         24 64 kb       50632 ns        49591 ns         4096
scan     tbb 24 64 kb       13701 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       6891 ns        0.000 ns         2048
find avx tbb 06 256 kb       6821 ns        15259 ns         2048
find         06 256 kb      97666 ns        99182 ns         2048
find     tbb 06 256 kb      21669 ns        30518 ns         2048
find avx     12 256 kb       6917 ns         7629 ns         2048
find avx tbb 12 256 kb       6850 ns         7629 ns         2048
find         12 256 kb      50598 ns        53406 ns         2048
find     tbb 12 256 kb      16852 ns        22888 ns         2048
find avx     24 256 kb       8201 ns         7629 ns         2048
find avx tbb 24 256 kb       8884 ns        0.000 ns         2048
find         24 256 kb      26252 ns        22888 ns         2048
find     tbb 24 256 kb      13813 ns        15259 ns         2048

scan avx     06 256 kb     207878 ns       205994 ns         2048
scan avx tbb 06 256 kb     172126 ns       167847 ns         2048
scan         06 256 kb     194635 ns       190735 ns         2048
scan     tbb 06 256 kb      40983 ns        38147 ns         2048
scan avx     12 256 kb     205021 ns       213623 ns         2048
scan avx tbb 12 256 kb     169350 ns       167847 ns         2048
scan         12 256 kb     201813 ns       213623 ns         2048
scan     tbb 12 256 kb      40124 ns        38147 ns         2048
scan avx     24 256 kb     202391 ns       190735 ns         2048
scan avx tbb 24 256 kb     168838 ns       167847 ns         2048
scan         24 256 kb     193540 ns       198364 ns         2048
scan     tbb 24 256 kb      40965 ns        30518 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        26042 ns        15259 ns         1024
find avx tbb 06 1 mb        17670 ns        45776 ns         1024
find         06 1 mb       383022 ns       381470 ns         1024
find     tbb 06 1 mb        50179 ns        45776 ns         1024
find avx     12 1 mb        24526 ns        0.000 ns         1024
find avx tbb 12 1 mb        17665 ns        15259 ns         1024
find         12 1 mb       193264 ns       213623 ns         1024
find     tbb 12 1 mb        31876 ns        45776 ns         1024
find avx     24 1 mb        30620 ns        15259 ns         1024
find avx tbb 24 1 mb        17724 ns        0.000 ns         1024
find         24 1 mb        99201 ns        91553 ns         1024
find     tbb 24 1 mb        23404 ns        15259 ns         1024

scan avx     06 1 mb       839263 ns       854492 ns         1024
scan avx tbb 06 1 mb       140317 ns       137329 ns         1024
scan         06 1 mb       815436 ns       823975 ns         1024
scan     tbb 06 1 mb       137144 ns       106812 ns         1024
scan avx     12 1 mb       814750 ns       823975 ns         1024
scan avx tbb 12 1 mb       139848 ns       122070 ns         1024
scan         12 1 mb       807100 ns       793457 ns         1024
scan     tbb 12 1 mb       137285 ns       198364 ns         1024
scan avx     24 1 mb       807850 ns       823975 ns         1024
scan avx tbb 24 1 mb       140820 ns       152588 ns         1024
scan         24 1 mb       811086 ns       839233 ns         1024
scan     tbb 24 1 mb       138492 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189147 ns       274658 ns          512
find avx tbb 06 4 mb       175744 ns       152588 ns          512
find         06 4 mb      1532296 ns      1556396 ns          512
find     tbb 06 4 mb       222756 ns       213623 ns          512
find avx     12 4 mb       188647 ns       213623 ns          512
find avx tbb 12 4 mb       171932 ns       213623 ns          512
find         12 4 mb       779041 ns       793457 ns          512
find     tbb 12 4 mb       199469 ns       152588 ns          512
find avx     24 4 mb       194913 ns       244141 ns          512
find avx tbb 24 4 mb       180699 ns       122070 ns          512
find         24 4 mb       420861 ns       396729 ns          512
find     tbb 24 4 mb       184711 ns       183105 ns          512

scan avx     06 4 mb      3251704 ns      3295898 ns          512
scan avx tbb 06 4 mb       566405 ns       518799 ns          512
scan         06 4 mb      3206756 ns      3326416 ns          512
scan     tbb 06 4 mb       559109 ns       488281 ns          512
scan avx     12 4 mb      3221714 ns      3326416 ns          512
scan avx tbb 12 4 mb       567377 ns       579834 ns          512
scan         12 4 mb      3229313 ns      3295898 ns          512
scan     tbb 12 4 mb       555832 ns       518799 ns          512
scan avx     24 4 mb      3259465 ns      3387451 ns          512
scan avx tbb 24 4 mb       572305 ns       488281 ns          512
scan         24 4 mb      3245248 ns      3234863 ns          512
scan     tbb 24 4 mb       557329 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      786530 ns      1464844 ns           64
find avx tbb 06 16 mb      629363 ns       976562 ns           64
find         06 16 mb     6166278 ns      6347656 ns           64
find     tbb 06 16 mb      756036 ns       488281 ns           64
find avx     12 16 mb      791197 ns       976562 ns           64
find avx tbb 12 16 mb      643613 ns       732422 ns           64
find         12 16 mb     3268602 ns      3173828 ns           64
find     tbb 12 16 mb      700161 ns       976562 ns           64
find avx     24 16 mb      783666 ns       976562 ns           64
find avx tbb 24 16 mb      639464 ns       732422 ns           64
find         24 16 mb     1704313 ns      1953125 ns           64
find     tbb 24 16 mb      678341 ns       732422 ns           64

scan avx     06 16 mb    13122877 ns     12451172 ns           64
scan avx tbb 06 16 mb     2147642 ns      1953125 ns           64
scan         06 16 mb    12789987 ns     12939453 ns           64
scan     tbb 06 16 mb     2110833 ns      1464844 ns           64
scan avx     12 16 mb    12921169 ns     12451172 ns           64
scan avx tbb 12 16 mb     2117194 ns      2685547 ns           64
scan         12 16 mb    12906072 ns     13427734 ns           64
scan     tbb 12 16 mb     2108022 ns      2197266 ns           64
scan avx     24 16 mb    12821205 ns     13183594 ns           64
scan avx tbb 24 16 mb     2117183 ns      1464844 ns           64
scan         24 16 mb    12936127 ns     13427734 ns           64
scan     tbb 24 16 mb     2117911 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3037559 ns        0.000 ns           32
find avx tbb 06 64 mb     2357853 ns      1464844 ns           32
find         06 64 mb    24185734 ns     23437500 ns           32
find     tbb 06 64 mb     2677144 ns       976562 ns           32
find avx     12 64 mb     3041444 ns      5371094 ns           32
find avx tbb 12 64 mb     2368606 ns      2929688 ns           32
find         12 64 mb    12268150 ns     12207031 ns           32
find     tbb 12 64 mb     2476291 ns      3417969 ns           32
find avx     24 64 mb     3079081 ns        0.000 ns           32
find avx tbb 24 64 mb     2375072 ns      2441406 ns           32
find         24 64 mb     6790547 ns      7324219 ns           32
find     tbb 24 64 mb     2445741 ns      1953125 ns           32

scan avx     06 64 mb    51326422 ns     50781250 ns           32
scan avx tbb 06 64 mb     8313884 ns      7812500 ns           32
scan         06 64 mb    50959734 ns     51757812 ns           32
scan     tbb 06 64 mb     8208656 ns      9277344 ns           32
scan avx     12 64 mb    51582884 ns     51269531 ns           32
scan avx tbb 12 64 mb     8216541 ns      9277344 ns           32
scan         12 64 mb    51875478 ns     52246094 ns           32
scan     tbb 12 64 mb     8184256 ns      8300781 ns           32
scan avx     24 64 mb    51592888 ns     50781250 ns           32
scan avx tbb 24 64 mb     8237350 ns      8789062 ns           32
scan         24 64 mb    51180322 ns     51269531 ns           32
scan     tbb 24 64 mb     8194459 ns      8789062 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12129788 ns     15625000 ns           16
find avx tbb 06 256 mb    9270625 ns      8789062 ns           16
find         06 256 mb   96936813 ns     97656250 ns           16
find     tbb 06 256 mb   10316788 ns      9765625 ns           16
find avx     12 256 mb   12022400 ns     11718750 ns           16
find avx tbb 12 256 mb    9300900 ns      9765625 ns           16
find         12 256 mb   49479844 ns     48828125 ns           16
find     tbb 12 256 mb    9512031 ns      8789062 ns           16
find avx     24 256 mb   12232888 ns     12695312 ns           16
find avx tbb 24 256 mb    9300188 ns     10742188 ns           16
find         24 256 mb   26195556 ns     29296875 ns           16
find     tbb 24 256 mb    9470431 ns      7812500 ns           16

scan avx     06 256 mb  209413563 ns    211914062 ns           16
scan avx tbb 06 256 mb   32589719 ns     30273438 ns           16
scan         06 256 mb  203263250 ns    204101562 ns           16
scan     tbb 06 256 mb   32296081 ns     32226562 ns           16
scan avx     12 256 mb  202520600 ns    204101562 ns           16
scan avx tbb 12 256 mb   32433663 ns     31250000 ns           16
scan         12 256 mb  205729162 ns    205078125 ns           16
scan     tbb 12 256 mb   32320050 ns     32226562 ns           16
scan avx     24 256 mb  204423444 ns    204101562 ns           16
scan avx tbb 24 256 mb   32551325 ns     32226562 ns           16
scan         24 256 mb  203427050 ns    205078125 ns           16
scan     tbb 24 256 mb   32311375 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24280163 ns     17578125 ns            8
find avx tbb 06 512 mb   18466612 ns     17578125 ns            8
find         06 512 mb  192703887 ns    195312500 ns            8
find     tbb 06 512 mb   20162350 ns     17578125 ns            8
find avx     12 512 mb   24464788 ns     25390625 ns            8
find avx tbb 12 512 mb   18483325 ns     19531250 ns            8
find         12 512 mb   98127275 ns     97656250 ns            8
find     tbb 12 512 mb   18924925 ns     21484375 ns            8
find avx     24 512 mb   24815862 ns     25390625 ns            8
find avx tbb 24 512 mb   18460313 ns     19531250 ns            8
find         24 512 mb   54219738 ns     56640625 ns            8
find     tbb 24 512 mb   18812675 ns     19531250 ns            8

scan avx     06 512 mb  404245275 ns    402343750 ns            8
scan avx tbb 06 512 mb   64977100 ns     62500000 ns            8
scan         06 512 mb  411949550 ns    414062500 ns            8
scan     tbb 06 512 mb   64567275 ns     58593750 ns            8
scan avx     12 512 mb  406184437 ns    402343750 ns            8
scan avx tbb 12 512 mb   64627175 ns     62500000 ns            8
scan         12 512 mb  412956500 ns    414062500 ns            8
scan     tbb 12 512 mb   64821113 ns     66406250 ns            8
scan avx     24 512 mb  410667262 ns    416015625 ns            8
scan avx tbb 24 512 mb   65273475 ns     60546875 ns            8
scan         24 512 mb  408792588 ns    412109375 ns            8
scan     tbb 24 512 mb   64548275 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48641075 ns     48828125 ns            8
find avx tbb 06 1 gb     36821075 ns     33203125 ns            8
find         06 1 gb    386311412 ns    384765625 ns            8
find     tbb 06 1 gb     40365762 ns     39062500 ns            8
find avx     12 1 gb     53662875 ns     52734375 ns            8
find avx tbb 12 1 gb     36802100 ns     37109375 ns            8
find         12 1 gb    196558313 ns    193359375 ns            8
find     tbb 12 1 gb     37855413 ns     37109375 ns            8
find avx     24 1 gb     49548288 ns     48828125 ns            8
find avx tbb 24 1 gb     36917262 ns     39062500 ns            8
find         24 1 gb    104629250 ns    107421875 ns            8
find     tbb 24 1 gb     37578138 ns     33203125 ns            8

scan avx     06 1 gb    825788787 ns    824218750 ns            8
scan avx tbb 06 1 gb    129842875 ns    123046875 ns            8
scan         06 1 gb    820426688 ns    820312500 ns            8
scan     tbb 06 1 gb    129437925 ns    119140625 ns            8
scan avx     12 1 gb    826809087 ns    826171875 ns            8
scan avx tbb 12 1 gb    129733738 ns    121093750 ns            8
scan         12 1 gb    828542562 ns    826171875 ns            8
scan     tbb 12 1 gb    130901887 ns    123046875 ns            8
scan avx     24 1 gb    830201325 ns    832031250 ns            8
scan avx tbb 24 1 gb    129075387 ns    119140625 ns            8
scan         24 1 gb    815435625 ns    814453125 ns            8
scan     tbb 24 1 gb    128932950 ns    115234375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98464488 ns     95703125 ns            8
find avx tbb 06 2 gb     73529712 ns     78125000 ns            8
find         06 2 gb    772703413 ns    767578125 ns            8
find     tbb 06 2 gb     82860988 ns     76171875 ns            8
find avx     12 2 gb     98847488 ns     97656250 ns            8
find avx tbb 12 2 gb     73542125 ns     72265625 ns            8
find         12 2 gb    393426612 ns    392578125 ns            8
find     tbb 12 2 gb     75476575 ns     74218750 ns            8
find avx     24 2 gb    101363450 ns    103515625 ns            8
find avx tbb 24 2 gb     73613800 ns     72265625 ns            8
find         24 2 gb    210875450 ns    210937500 ns            8
find     tbb 24 2 gb     74854900 ns     72265625 ns            8

scan avx     06 2 gb   1651385750 ns   1650390625 ns            8
scan avx tbb 06 2 gb    259461363 ns    244140625 ns            8
scan         06 2 gb   1646270375 ns   1646484375 ns            8
scan     tbb 06 2 gb    259309238 ns    236328125 ns            8
scan avx     12 2 gb   1647071700 ns   1646484375 ns            8
scan avx tbb 12 2 gb    260874963 ns    238281250 ns            8
scan         12 2 gb   1652416912 ns   1656250000 ns            8
scan     tbb 12 2 gb    261970725 ns    240234375 ns            8
scan avx     24 2 gb   1645035525 ns   1642578125 ns            8
scan avx tbb 24 2 gb    260931163 ns    244140625 ns            8
scan         24 2 gb   1659493500 ns   1656250000 ns            8
scan     tbb 24 2 gb    258993375 ns    236328125 ns            8
```

</details>

