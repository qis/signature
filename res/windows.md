# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 kb        1375 ns        0.000 ns         4096
find avx     noe 10 16 kb         864 ns         3815 ns         4096
find avx tbb     10 16 kb         835 ns        0.000 ns         4096
find avx tbb noe 10 16 kb         860 ns        0.000 ns         4096
find             10 16 kb        4673 ns         7629 ns         4096
find         noe 10 16 kb        4534 ns         3815 ns         4096
find     tbb     10 16 kb        7043 ns         7629 ns         4096
find     tbb noe 10 16 kb        6791 ns         7629 ns         4096

scan avx         10 16 kb       11028 ns        11444 ns         4096
scan avx     noe 10 16 kb       10145 ns        11444 ns         4096
scan avx tbb     10 16 kb       11023 ns        11444 ns         4096
scan avx tbb noe 10 16 kb       11237 ns        11444 ns         4096
scan             10 16 kb       11069 ns         7629 ns         4096
scan         noe 10 16 kb       12601 ns        11444 ns         4096
scan     tbb     10 16 kb        7524 ns         7629 ns         4096
scan     tbb noe 10 16 kb        7502 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 kb        1978 ns        0.000 ns         4096
find avx     noe 10 64 kb        1982 ns        0.000 ns         4096
find avx tbb     10 64 kb        1968 ns        0.000 ns         4096
find avx tbb noe 10 64 kb        1972 ns         3815 ns         4096
find             10 64 kb       16735 ns        19073 ns         4096
find         noe 10 64 kb       16238 ns        15259 ns         4096
find     tbb     10 64 kb        8575 ns         7629 ns         4096
find     tbb noe 10 64 kb        8568 ns         7629 ns         4096

scan avx         10 64 kb       43407 ns        45776 ns         4096
scan avx     noe 10 64 kb       39013 ns        30518 ns         4096
scan avx tbb     10 64 kb       46024 ns        45776 ns         4096
scan avx tbb noe 10 64 kb       52047 ns        49591 ns         4096
scan             10 64 kb       43678 ns        41962 ns         4096
scan         noe 10 64 kb       52494 ns        49591 ns         4096
scan     tbb     10 64 kb       14450 ns        11444 ns         4096
scan     tbb noe 10 64 kb       14298 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 kb       7510 ns        0.000 ns         2048
find avx     noe 10 256 kb       7284 ns         7629 ns         2048
find avx tbb     10 256 kb       6880 ns         7629 ns         2048
find avx tbb noe 10 256 kb       6877 ns         7629 ns         2048
find             10 256 kb      64112 ns        61035 ns         2048
find         noe 10 256 kb      63053 ns        68665 ns         2048
find     tbb     10 256 kb      16485 ns         7629 ns         2048
find     tbb noe 10 256 kb      17356 ns        22888 ns         2048

scan avx         10 256 kb     171670 ns       175476 ns         2048
scan avx     noe 10 256 kb     157846 ns       160217 ns         2048
scan avx tbb     10 256 kb     169882 ns       183105 ns         2048
scan avx tbb noe 10 256 kb     168913 ns       167847 ns         2048
scan             10 256 kb     168592 ns       175476 ns         2048
scan         noe 10 256 kb     202652 ns       198364 ns         2048
scan     tbb     10 256 kb      42017 ns        53406 ns         2048
scan     tbb noe 10 256 kb      41963 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 mb        27389 ns        30518 ns         1024
find avx     noe 10 1 mb        25444 ns        30518 ns         1024
find avx tbb     10 1 mb        17592 ns        30518 ns         1024
find avx tbb noe 10 1 mb        16799 ns        0.000 ns         1024
find             10 1 mb       257197 ns       228882 ns         1024
find         noe 10 1 mb       249607 ns       259399 ns         1024
find     tbb     10 1 mb        35745 ns        30518 ns         1024
find     tbb noe 10 1 mb        35537 ns        15259 ns         1024

scan avx         10 1 mb       682353 ns       701904 ns         1024
scan avx     noe 10 1 mb       617787 ns       625610 ns         1024
scan avx tbb     10 1 mb       149416 ns       213623 ns         1024
scan avx tbb noe 10 1 mb       145469 ns       152588 ns         1024
scan             10 1 mb       678656 ns       656128 ns         1024
scan         noe 10 1 mb       824181 ns       793457 ns         1024
scan     tbb     10 1 mb       149953 ns       167847 ns         1024
scan     tbb noe 10 1 mb       146662 ns       137329 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 4 mb       188454 ns       183105 ns          512
find avx     noe 10 4 mb       184905 ns       183105 ns          512
find avx tbb     10 4 mb       178162 ns       183105 ns          512
find avx tbb noe 10 4 mb       161016 ns       183105 ns          512
find             10 4 mb      1043508 ns      1007080 ns          512
find         noe 10 4 mb      1006132 ns       946045 ns          512
find     tbb     10 4 mb       214673 ns       244141 ns          512
find     tbb noe 10 4 mb       178606 ns       244141 ns          512

scan avx         10 4 mb      2863337 ns      2960205 ns          512
scan avx     noe 10 4 mb      2474048 ns      2563477 ns          512
scan avx tbb     10 4 mb       603481 ns       610352 ns          512
scan avx tbb noe 10 4 mb       588485 ns       244141 ns          512
scan             10 4 mb      2705155 ns      2807617 ns          512
scan         noe 10 4 mb      3190077 ns      3204346 ns          512
scan     tbb     10 4 mb       605796 ns       549316 ns          512
scan     tbb noe 10 4 mb       589026 ns       396729 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 mb      772664 ns       976562 ns           64
find avx     noe 10 16 mb      748666 ns       488281 ns           64
find avx tbb     10 16 mb      630672 ns       488281 ns           64
find avx tbb noe 10 16 mb      625239 ns       488281 ns           64
find             10 16 mb     4187644 ns      4882812 ns           64
find         noe 10 16 mb     4005378 ns      3906250 ns           64
find     tbb     10 16 mb      737483 ns       732422 ns           64
find     tbb noe 10 16 mb      727028 ns       732422 ns           64

scan avx         10 16 mb    12180709 ns     11962891 ns           64
scan avx     noe 10 16 mb     9885211 ns      9521484 ns           64
scan avx tbb     10 16 mb     2244169 ns      1708984 ns           64
scan avx tbb noe 10 16 mb     2165919 ns      2197266 ns           64
scan             10 16 mb    10828253 ns     10986328 ns           64
scan         noe 10 16 mb    12444992 ns     11718750 ns           64
scan     tbb     10 16 mb     2238664 ns      2197266 ns           64
scan     tbb noe 10 16 mb     2171225 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 mb     3058587 ns      1953125 ns           32
find avx     noe 10 64 mb     2985106 ns        0.000 ns           32
find avx tbb     10 64 mb     2372875 ns      2441406 ns           32
find avx tbb noe 10 64 mb     2386400 ns      2441406 ns           32
find             10 64 mb    16313581 ns     16113281 ns           32
find         noe 10 64 mb    16049925 ns     15625000 ns           32
find     tbb     10 64 mb     2576728 ns      2441406 ns           32
find     tbb noe 10 64 mb     2583194 ns      3417969 ns           32

scan avx         10 64 mb    49362662 ns     49804688 ns           32
scan avx     noe 10 64 mb    39542556 ns     39550781 ns           32
scan avx tbb     10 64 mb     8624788 ns      7812500 ns           32
scan avx tbb noe 10 64 mb     8588312 ns      8300781 ns           32
scan             10 64 mb    43050859 ns     41992188 ns           32
scan         noe 10 64 mb    52705553 ns     52246094 ns           32
scan     tbb     10 64 mb     8654500 ns      8300781 ns           32
scan     tbb noe 10 64 mb     8527669 ns      9277344 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 mb   12845275 ns     12695312 ns           16
find avx     noe 10 256 mb   12784587 ns     11718750 ns           16
find avx tbb     10 256 mb    9305763 ns     10742188 ns           16
find avx tbb noe 10 256 mb    9356900 ns      9765625 ns           16
find             10 256 mb   65238131 ns     64453125 ns           16
find         noe 10 256 mb   64041850 ns     63476562 ns           16
find     tbb     10 256 mb    9956619 ns     10742188 ns           16
find     tbb noe 10 256 mb    9848381 ns      8789062 ns           16

scan avx         10 256 mb  210340088 ns    209960938 ns           16
scan avx     noe 10 256 mb  158046894 ns    158203125 ns           16
scan avx tbb     10 256 mb   34298456 ns     29296875 ns           16
scan avx tbb noe 10 256 mb   34167600 ns     30273438 ns           16
scan             10 256 mb  173308956 ns    173828125 ns           16
scan         noe 10 256 mb  209314625 ns    208007812 ns           16
scan     tbb     10 256 mb   34147856 ns     31250000 ns           16
scan     tbb noe 10 256 mb   34070131 ns     33203125 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 512 mb   26405900 ns     25390625 ns            8
find avx     noe 10 512 mb   26496362 ns     27343750 ns            8
find avx tbb     10 512 mb   18414450 ns     17578125 ns            8
find avx tbb noe 10 512 mb   18388125 ns     17578125 ns            8
find             10 512 mb  130295400 ns    128906250 ns            8
find         noe 10 512 mb  128138937 ns    130859375 ns            8
find     tbb     10 512 mb   19609250 ns     25390625 ns            8
find     tbb noe 10 512 mb   19610225 ns     17578125 ns            8

scan avx         10 512 mb  415926362 ns    421875000 ns            8
scan avx     noe 10 512 mb  316401463 ns    314453125 ns            8
scan avx tbb     10 512 mb   68971188 ns     54687500 ns            8
scan avx tbb noe 10 512 mb   68548875 ns     64453125 ns            8
scan             10 512 mb  344750400 ns    347656250 ns            8
scan         noe 10 512 mb  420593938 ns    419921875 ns            8
scan     tbb     10 512 mb   68784013 ns     60546875 ns            8
scan     tbb noe 10 512 mb   68790550 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 gb     53983075 ns     54687500 ns            8
find avx     noe 10 1 gb     55225162 ns     52734375 ns            8
find avx tbb     10 1 gb     36815112 ns     35156250 ns            8
find avx tbb noe 10 1 gb     36724338 ns     39062500 ns            8
find             10 1 gb    261016688 ns    261718750 ns            8
find         noe 10 1 gb    256432038 ns    251953125 ns            8
find     tbb     10 1 gb     38997813 ns     37109375 ns            8
find     tbb noe 10 1 gb     38885975 ns     35156250 ns            8

scan avx         10 1 gb    784303425 ns    785156250 ns            8
scan avx     noe 10 1 gb    632581062 ns    632812500 ns            8
scan avx tbb     10 1 gb    134931300 ns    117187500 ns            8
scan avx tbb noe 10 1 gb    137435875 ns    121093750 ns            8
scan             10 1 gb    689153800 ns    689453125 ns            8
scan         noe 10 1 gb    796301013 ns    798828125 ns            8
scan     tbb     10 1 gb    135692525 ns    117187500 ns            8
scan     tbb noe 10 1 gb    135643925 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 2 gb    108574525 ns    109375000 ns            8
find avx     noe 10 2 gb    108060900 ns    109375000 ns            8
find avx tbb     10 2 gb     73715325 ns     72265625 ns            8
find avx tbb noe 10 2 gb     73447537 ns     72265625 ns            8
find             10 2 gb    536570538 ns    535156250 ns            8
find         noe 10 2 gb    528304712 ns    527343750 ns            8
find     tbb     10 2 gb     83031688 ns     80078125 ns            8
find     tbb noe 10 2 gb     81161400 ns     60546875 ns            8

scan avx         10 2 gb   1767124725 ns   1767578125 ns            8
scan avx     noe 10 2 gb   1356118538 ns   1357421875 ns            8
scan avx tbb     10 2 gb    279570125 ns    251953125 ns            8
scan avx tbb noe 10 2 gb    280615000 ns    242187500 ns            8
scan             10 2 gb   1469907087 ns   1470703125 ns            8
scan         noe 10 2 gb   1748357212 ns   1746093750 ns            8
scan     tbb     10 2 gb    282915362 ns    232421875 ns            8
scan     tbb noe 10 2 gb    279174000 ns    228515625 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 kb         913 ns        0.000 ns         4096
find avx     noe 10 16 kb        1023 ns        0.000 ns         4096
find avx tbb     10 16 kb         931 ns        0.000 ns         4096
find avx tbb noe 10 16 kb         995 ns        0.000 ns         4096
find             10 16 kb        5613 ns         7629 ns         4096
find         noe 10 16 kb        4222 ns         3815 ns         4096
find     tbb     10 16 kb        7538 ns         7629 ns         4096
find     tbb noe 10 16 kb        7293 ns         7629 ns         4096

scan avx         10 16 kb       11026 ns        11444 ns         4096
scan avx     noe 10 16 kb       11046 ns        11444 ns         4096
scan avx tbb     10 16 kb       11039 ns        11444 ns         4096
scan avx tbb noe 10 16 kb       11042 ns        11444 ns         4096
scan             10 16 kb       11069 ns        15259 ns         4096
scan         noe 10 16 kb       11019 ns        11444 ns         4096
scan     tbb     10 16 kb        7900 ns         7629 ns         4096
scan     tbb noe 10 16 kb        7519 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 kb        2121 ns        0.000 ns         4096
find avx     noe 10 64 kb        2389 ns         3815 ns         4096
find avx tbb     10 64 kb        2124 ns         3815 ns         4096
find avx tbb noe 10 64 kb        2327 ns         3815 ns         4096
find             10 64 kb       15169 ns        15259 ns         4096
find         noe 10 64 kb       18694 ns        19073 ns         4096
find     tbb     10 64 kb        9267 ns        15259 ns         4096
find     tbb noe 10 64 kb        9671 ns        11444 ns         4096

scan avx         10 64 kb       44504 ns        45776 ns         4096
scan avx     noe 10 64 kb       42732 ns        45776 ns         4096
scan avx tbb     10 64 kb       45787 ns        45776 ns         4096
scan avx tbb noe 10 64 kb       42634 ns        41962 ns         4096
scan             10 64 kb       42602 ns        38147 ns         4096
scan         noe 10 64 kb       44340 ns        45776 ns         4096
scan     tbb     10 64 kb       15457 ns        15259 ns         4096
scan     tbb noe 10 64 kb       14529 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 kb       7425 ns        15259 ns         2048
find avx     noe 10 256 kb       7763 ns        15259 ns         2048
find avx tbb     10 256 kb       7262 ns        0.000 ns         2048
find avx tbb noe 10 256 kb       7748 ns        0.000 ns         2048
find             10 256 kb      56972 ns        61035 ns         2048
find         noe 10 256 kb      57027 ns        61035 ns         2048
find     tbb     10 256 kb      17841 ns        22888 ns         2048
find     tbb noe 10 256 kb      17925 ns        22888 ns         2048

scan avx         10 256 kb     174509 ns       167847 ns         2048
scan avx     noe 10 256 kb     183071 ns       175476 ns         2048
scan avx tbb     10 256 kb     175415 ns       175476 ns         2048
scan avx tbb noe 10 256 kb     202579 ns       205994 ns         2048
scan             10 256 kb     168985 ns       175476 ns         2048
scan         noe 10 256 kb     172132 ns       175476 ns         2048
scan     tbb     10 256 kb      46802 ns        38147 ns         2048
scan     tbb noe 10 256 kb      44500 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 mb        31488 ns        30518 ns         1024
find avx     noe 10 1 mb        28962 ns        30518 ns         1024
find avx tbb     10 1 mb        20166 ns        0.000 ns         1024
find avx tbb noe 10 1 mb        19721 ns        15259 ns         1024
find             10 1 mb       230348 ns       228882 ns         1024
find         noe 10 1 mb       230828 ns       198364 ns         1024
find     tbb     10 1 mb        41795 ns        76294 ns         1024
find     tbb noe 10 1 mb        39708 ns        15259 ns         1024

scan avx         10 1 mb       692103 ns       656128 ns         1024
scan avx     noe 10 1 mb       679940 ns       686646 ns         1024
scan avx tbb     10 1 mb       159659 ns       137329 ns         1024
scan avx tbb noe 10 1 mb       151943 ns       122070 ns         1024
scan             10 1 mb       703954 ns       686646 ns         1024
scan         noe 10 1 mb       684168 ns       686646 ns         1024
scan     tbb     10 1 mb       160810 ns       152588 ns         1024
scan     tbb noe 10 1 mb       153753 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 4 mb       211777 ns       183105 ns          512
find avx     noe 10 4 mb       209356 ns       213623 ns          512
find avx tbb     10 4 mb       185176 ns       183105 ns          512
find avx tbb noe 10 4 mb       165361 ns        91553 ns          512
find             10 4 mb       985174 ns      1098633 ns          512
find         noe 10 4 mb       956765 ns      1007080 ns          512
find     tbb     10 4 mb       213887 ns       213623 ns          512
find     tbb noe 10 4 mb       188394 ns       183105 ns          512

scan avx         10 4 mb      2896056 ns      2960205 ns          512
scan avx     noe 10 4 mb      3026105 ns      2960205 ns          512
scan avx tbb     10 4 mb       623563 ns       427246 ns          512
scan avx tbb noe 10 4 mb       592307 ns       518799 ns          512
scan             10 4 mb      2801001 ns      2868652 ns          512
scan         noe 10 4 mb      2918724 ns      3021240 ns          512
scan     tbb     10 4 mb       625166 ns       518799 ns          512
scan     tbb noe 10 4 mb       590937 ns       488281 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 mb      860411 ns       488281 ns           64
find avx     noe 10 16 mb      880484 ns      1708984 ns           64
find avx tbb     10 16 mb      646145 ns       976562 ns           64
find avx tbb noe 10 16 mb      650820 ns       488281 ns           64
find             10 16 mb     4204864 ns      4394531 ns           64
find         noe 10 16 mb     3924734 ns      3906250 ns           64
find     tbb     10 16 mb      753000 ns       488281 ns           64
find     tbb noe 10 16 mb      733333 ns       488281 ns           64

scan avx         10 16 mb    11051366 ns     10498047 ns           64
scan avx     noe 10 16 mb    11757795 ns     11474609 ns           64
scan avx tbb     10 16 mb     2307558 ns      2197266 ns           64
scan avx tbb noe 10 16 mb     2279480 ns       976562 ns           64
scan             10 16 mb    11872312 ns     11718750 ns           64
scan         noe 10 16 mb    11139289 ns     10986328 ns           64
scan     tbb     10 16 mb     2313805 ns      2197266 ns           64
scan     tbb noe 10 16 mb     2298169 ns      1953125 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 mb     3374200 ns      2929688 ns           32
find avx     noe 10 64 mb     3700766 ns      3906250 ns           32
find avx tbb     10 64 mb     2479766 ns      1464844 ns           32
find avx tbb noe 10 64 mb     2451247 ns      1953125 ns           32
find             10 64 mb    16791400 ns     17089844 ns           32
find         noe 10 64 mb    15366272 ns     14648438 ns           32
find     tbb     10 64 mb     2754938 ns      1953125 ns           32
find     tbb noe 10 64 mb     2722369 ns       976562 ns           32

scan avx         10 64 mb    44445866 ns     45410156 ns           32
scan avx     noe 10 64 mb    45051275 ns     46875000 ns           32
scan avx tbb     10 64 mb     8962619 ns      6835938 ns           32
scan avx tbb noe 10 64 mb     9005147 ns      7812500 ns           32
scan             10 64 mb    45504181 ns     45410156 ns           32
scan         noe 10 64 mb    43727597 ns     45410156 ns           32
scan     tbb     10 64 mb     8827609 ns      7812500 ns           32
scan     tbb noe 10 64 mb     8594303 ns      6835938 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 mb   13705125 ns     14648438 ns           16
find avx     noe 10 256 mb   13266525 ns     13671875 ns           16
find avx tbb     10 256 mb    9373937 ns      9765625 ns           16
find avx tbb noe 10 256 mb    9351100 ns      8789062 ns           16
find             10 256 mb   59203000 ns     62500000 ns           16
find         noe 10 256 mb   58777337 ns     62500000 ns           16
find     tbb     10 256 mb    9758613 ns     10742188 ns           16
find     tbb noe 10 256 mb    9886819 ns     10742188 ns           16

scan avx         10 256 mb  176399725 ns    176757812 ns           16
scan avx     noe 10 256 mb  175965438 ns    172851562 ns           16
scan avx tbb     10 256 mb   33509450 ns     32226562 ns           16
scan avx tbb noe 10 256 mb   33733600 ns     30273438 ns           16
scan             10 256 mb  172460581 ns    172851562 ns           16
scan         noe 10 256 mb  172290600 ns    172851562 ns           16
scan     tbb     10 256 mb   33898856 ns     33203125 ns           16
scan     tbb noe 10 256 mb   33521913 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 512 mb   26648913 ns     27343750 ns            8
find avx     noe 10 512 mb   26596663 ns     25390625 ns            8
find avx tbb     10 512 mb   18583025 ns     17578125 ns            8
find avx tbb noe 10 512 mb   18554262 ns     17578125 ns            8
find             10 512 mb  116834612 ns    117187500 ns            8
find         noe 10 512 mb  116978275 ns    125000000 ns            8
find     tbb     10 512 mb   19320350 ns     19531250 ns            8
find     tbb noe 10 512 mb   19367650 ns     17578125 ns            8

scan avx         10 512 mb  344482775 ns    341796875 ns            8
scan avx     noe 10 512 mb  344374550 ns    343750000 ns            8
scan avx tbb     10 512 mb   67766750 ns     62500000 ns            8
scan avx tbb noe 10 512 mb   67218912 ns     64453125 ns            8
scan             10 512 mb  352538650 ns    353515625 ns            8
scan         noe 10 512 mb  344170337 ns    345703125 ns            8
scan     tbb     10 512 mb   68187112 ns     66406250 ns            8
scan     tbb noe 10 512 mb   67588562 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 gb     54298437 ns     54687500 ns            8
find avx     noe 10 1 gb     54283925 ns     56640625 ns            8
find avx tbb     10 1 gb     36952200 ns     37109375 ns            8
find avx tbb noe 10 1 gb     36794638 ns     35156250 ns            8
find             10 1 gb    233945000 ns    234375000 ns            8
find         noe 10 1 gb    233790350 ns    234375000 ns            8
find     tbb     10 1 gb     38668288 ns     35156250 ns            8
find     tbb noe 10 1 gb     38550900 ns     37109375 ns            8

scan avx         10 1 gb    688480225 ns    689453125 ns            8
scan avx     noe 10 1 gb    688678225 ns    687500000 ns            8
scan avx tbb     10 1 gb    133790038 ns    123046875 ns            8
scan avx tbb noe 10 1 gb    135247562 ns    117187500 ns            8
scan             10 1 gb    688796575 ns    689453125 ns            8
scan         noe 10 1 gb    688478387 ns    689453125 ns            8
scan     tbb     10 1 gb    134168850 ns    125000000 ns            8
scan     tbb noe 10 1 gb    134348800 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 2 gb    109603638 ns    109375000 ns            8
find avx     noe 10 2 gb    109802838 ns    109375000 ns            8
find avx tbb     10 2 gb     73496100 ns     72265625 ns            8
find avx tbb noe 10 2 gb     73803712 ns     70312500 ns            8
find             10 2 gb    467601800 ns    468750000 ns            8
find         noe 10 2 gb    468038750 ns    466796875 ns            8
find     tbb     10 2 gb     76750913 ns     72265625 ns            8
find     tbb noe 10 2 gb     76838163 ns     72265625 ns            8

scan avx         10 2 gb   1378033087 ns   1378906250 ns            8
scan avx     noe 10 2 gb   1377441012 ns   1378906250 ns            8
scan avx tbb     10 2 gb    269454175 ns    236328125 ns            8
scan avx tbb noe 10 2 gb    265678700 ns    244140625 ns            8
scan             10 2 gb   1379203362 ns   1380859375 ns            8
scan         noe 10 2 gb   1381234575 ns   1382812500 ns            8
scan     tbb     10 2 gb    269834700 ns    238281250 ns            8
scan     tbb noe 10 2 gb    265911900 ns    236328125 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 kb        1159 ns        0.000 ns         4096
find avx     noe 10 16 kb        1161 ns         3815 ns         4096
find avx tbb     10 16 kb        1040 ns        0.000 ns         4096
find avx tbb noe 10 16 kb         914 ns         3815 ns         4096
find             10 16 kb        4201 ns         3815 ns         4096
find         noe 10 16 kb        4170 ns         3815 ns         4096
find     tbb     10 16 kb        7197 ns         7629 ns         4096
find     tbb noe 10 16 kb        6969 ns        11444 ns         4096

scan avx         10 16 kb       11043 ns        11444 ns         4096
scan avx     noe 10 16 kb       11043 ns        11444 ns         4096
scan avx tbb     10 16 kb       11021 ns         3815 ns         4096
scan avx tbb noe 10 16 kb       11823 ns        11444 ns         4096
scan             10 16 kb       10990 ns        11444 ns         4096
scan         noe 10 16 kb       11000 ns        11444 ns         4096
scan     tbb     10 16 kb        7135 ns        11444 ns         4096
scan     tbb noe 10 16 kb        7396 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 kb        2072 ns        0.000 ns         4096
find avx     noe 10 64 kb        2059 ns        0.000 ns         4096
find avx tbb     10 64 kb        2065 ns         3815 ns         4096
find avx tbb noe 10 64 kb        2077 ns        0.000 ns         4096
find             10 64 kb       14690 ns        11444 ns         4096
find         noe 10 64 kb       14730 ns         7629 ns         4096
find     tbb     10 64 kb        8630 ns         7629 ns         4096
find     tbb noe 10 64 kb        8578 ns        11444 ns         4096

scan avx         10 64 kb       42765 ns        45776 ns         4096
scan avx     noe 10 64 kb       42472 ns        45776 ns         4096
scan avx tbb     10 64 kb       42542 ns        38147 ns         4096
scan avx tbb noe 10 64 kb       42464 ns        45776 ns         4096
scan             10 64 kb       42474 ns        41962 ns         4096
scan         noe 10 64 kb       42568 ns        41962 ns         4096
scan     tbb     10 64 kb       13871 ns        11444 ns         4096
scan     tbb noe 10 64 kb       14448 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 kb       7792 ns         7629 ns         2048
find avx     noe 10 256 kb       7525 ns        15259 ns         2048
find avx tbb     10 256 kb       7157 ns        15259 ns         2048
find avx tbb noe 10 256 kb       7189 ns        15259 ns         2048
find             10 256 kb      57027 ns        53406 ns         2048
find         noe 10 256 kb      56960 ns        53406 ns         2048
find     tbb     10 256 kb      15810 ns        22888 ns         2048
find     tbb noe 10 256 kb      15775 ns         7629 ns         2048

scan avx         10 256 kb     168524 ns       175476 ns         2048
scan avx     noe 10 256 kb     172190 ns       167847 ns         2048
scan avx tbb     10 256 kb     168540 ns       160217 ns         2048
scan avx tbb noe 10 256 kb     169144 ns       175476 ns         2048
scan             10 256 kb     168438 ns       160217 ns         2048
scan         noe 10 256 kb     168451 ns       152588 ns         2048
scan     tbb     10 256 kb      40368 ns        30518 ns         2048
scan     tbb noe 10 256 kb      41921 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 mb        28719 ns        15259 ns         1024
find avx     noe 10 1 mb        26741 ns        15259 ns         1024
find avx tbb     10 1 mb        18169 ns        45776 ns         1024
find avx tbb noe 10 1 mb        17084 ns        30518 ns         1024
find             10 1 mb       228159 ns       198364 ns         1024
find         noe 10 1 mb       225184 ns       213623 ns         1024
find     tbb     10 1 mb        33814 ns        45776 ns         1024
find     tbb noe 10 1 mb        33443 ns        15259 ns         1024

scan avx         10 1 mb       675664 ns       686646 ns         1024
scan avx     noe 10 1 mb       680582 ns       686646 ns         1024
scan avx tbb     10 1 mb       145186 ns       137329 ns         1024
scan avx tbb noe 10 1 mb       144476 ns       137329 ns         1024
scan             10 1 mb       676682 ns       671387 ns         1024
scan         noe 10 1 mb       673517 ns       671387 ns         1024
scan     tbb     10 1 mb       140908 ns       137329 ns         1024
scan     tbb noe 10 1 mb       145199 ns       152588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 4 mb       192739 ns       274658 ns          512
find avx     noe 10 4 mb       193370 ns       152588 ns          512
find avx tbb     10 4 mb       175852 ns       152588 ns          512
find avx tbb noe 10 4 mb       158197 ns       213623 ns          512
find             10 4 mb       920339 ns       976562 ns          512
find         noe 10 4 mb       912331 ns       854492 ns          512
find     tbb     10 4 mb       201288 ns       305176 ns          512
find     tbb noe 10 4 mb       178623 ns       244141 ns          512

scan avx         10 4 mb      2703909 ns      2716064 ns          512
scan avx     noe 10 4 mb      2706723 ns      2563477 ns          512
scan avx tbb     10 4 mb       598942 ns       488281 ns          512
scan avx tbb noe 10 4 mb       581388 ns       640869 ns          512
scan             10 4 mb      2705048 ns      2746582 ns          512
scan         noe 10 4 mb      2703393 ns      2655029 ns          512
scan     tbb     10 4 mb       586250 ns       488281 ns          512
scan     tbb noe 10 4 mb       583987 ns       518799 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 16 mb      786777 ns       732422 ns           64
find avx     noe 10 16 mb      777409 ns      1708984 ns           64
find avx tbb     10 16 mb      635039 ns       976562 ns           64
find avx tbb noe 10 16 mb      627491 ns       488281 ns           64
find             10 16 mb     3761334 ns      3417969 ns           64
find         noe 10 16 mb     3633314 ns      3906250 ns           64
find     tbb     10 16 mb      728116 ns       732422 ns           64
find     tbb noe 10 16 mb      710152 ns       732422 ns           64

scan avx         10 16 mb    10823978 ns     10986328 ns           64
scan avx     noe 10 16 mb    10852217 ns     11474609 ns           64
scan avx tbb     10 16 mb     2186772 ns      2197266 ns           64
scan avx tbb noe 10 16 mb     2154845 ns      2441406 ns           64
scan             10 16 mb    10800714 ns     11474609 ns           64
scan         noe 10 16 mb    10767723 ns     11230469 ns           64
scan     tbb     10 16 mb     2165045 ns      1708984 ns           64
scan     tbb noe 10 16 mb     2137898 ns      1708984 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 64 mb     3069341 ns      6835938 ns           32
find avx     noe 10 64 mb     3089344 ns      2929688 ns           32
find avx tbb     10 64 mb     2377500 ns      1953125 ns           32
find avx tbb noe 10 64 mb     2384822 ns      2441406 ns           32
find             10 64 mb    14550881 ns     15136719 ns           32
find         noe 10 64 mb    14518219 ns     14648438 ns           32
find     tbb     10 64 mb     2587228 ns      2441406 ns           32
find     tbb noe 10 64 mb     2551128 ns      1953125 ns           32

scan avx         10 64 mb    43259362 ns     42480469 ns           32
scan avx     noe 10 64 mb    43298569 ns     43457031 ns           32
scan avx tbb     10 64 mb     8515147 ns      8300781 ns           32
scan avx tbb noe 10 64 mb     8515228 ns      9277344 ns           32
scan             10 64 mb    43040694 ns     41503906 ns           32
scan         noe 10 64 mb    43162888 ns     43945312 ns           32
scan     tbb     10 64 mb     8439828 ns      8300781 ns           32
scan     tbb noe 10 64 mb     8444134 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 256 mb   12962825 ns     15625000 ns           16
find avx     noe 10 256 mb   12824194 ns     11718750 ns           16
find avx tbb     10 256 mb    9295450 ns      8789062 ns           16
find avx tbb noe 10 256 mb    9286956 ns      8789062 ns           16
find             10 256 mb   58313525 ns     62500000 ns           16
find         noe 10 256 mb   58302519 ns     62500000 ns           16
find     tbb     10 256 mb    9846225 ns     10742188 ns           16
find     tbb noe 10 256 mb    9792338 ns      7812500 ns           16

scan avx         10 256 mb  172068894 ns    171875000 ns           16
scan avx     noe 10 256 mb  173018362 ns    171875000 ns           16
scan avx tbb     10 256 mb   34145256 ns     31250000 ns           16
scan avx tbb noe 10 256 mb   33188944 ns     31250000 ns           16
scan             10 256 mb  172720512 ns    173828125 ns           16
scan         noe 10 256 mb  172180600 ns    170898438 ns           16
scan     tbb     10 256 mb   33890550 ns     31250000 ns           16
scan     tbb noe 10 256 mb   33852687 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 512 mb   26682413 ns     25390625 ns            8
find avx     noe 10 512 mb   26902075 ns     27343750 ns            8
find avx tbb     10 512 mb   18540400 ns     17578125 ns            8
find avx tbb noe 10 512 mb   18439612 ns     19531250 ns            8
find             10 512 mb  116996175 ns    125000000 ns            8
find         noe 10 512 mb  116726700 ns    109375000 ns            8
find     tbb     10 512 mb   19500563 ns     13671875 ns            8
find     tbb noe 10 512 mb   19389537 ns     17578125 ns            8

scan avx         10 512 mb  344025613 ns    343750000 ns            8
scan avx     noe 10 512 mb  344316825 ns    343750000 ns            8
scan avx tbb     10 512 mb   66844287 ns     62500000 ns            8
scan avx tbb noe 10 512 mb   67944225 ns     60546875 ns            8
scan             10 512 mb  359017487 ns    359375000 ns            8
scan         noe 10 512 mb  356663188 ns    357421875 ns            8
scan     tbb     10 512 mb   70209950 ns     35156250 ns            8
scan     tbb noe 10 512 mb   69626425 ns     46875000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 1 gb     61504413 ns     64453125 ns            8
find avx     noe 10 1 gb     64289487 ns     64453125 ns            8
find avx tbb     10 1 gb     38292175 ns     33203125 ns            8
find avx tbb noe 10 1 gb     38266288 ns     33203125 ns            8
find             10 1 gb    243297700 ns    240234375 ns            8
find         noe 10 1 gb    242847637 ns    244140625 ns            8
find     tbb     10 1 gb     41488513 ns     25390625 ns            8
find     tbb noe 10 1 gb     40191200 ns     31250000 ns            8

scan avx         10 1 gb    720416637 ns    716796875 ns            8
scan avx     noe 10 1 gb    729365975 ns    724609375 ns            8
scan avx tbb     10 1 gb    139038612 ns     95703125 ns            8
scan avx tbb noe 10 1 gb    140579950 ns    113281250 ns            8
scan             10 1 gb    722653225 ns    724609375 ns            8
scan         noe 10 1 gb    712870238 ns    714843750 ns            8
scan     tbb     10 1 gb    141941075 ns    113281250 ns            8
scan     tbb noe 10 1 gb    138801900 ns    109375000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         10 2 gb    123416100 ns    123046875 ns            8
find avx     noe 10 2 gb    117788625 ns    117187500 ns            8
find avx tbb     10 2 gb     77407700 ns     66406250 ns            8
find avx tbb noe 10 2 gb     77241163 ns     56640625 ns            8
find             10 2 gb    485927238 ns    484375000 ns            8
find         noe 10 2 gb    489768550 ns    490234375 ns            8
find     tbb     10 2 gb     82501613 ns     44921875 ns            8
find     tbb noe 10 2 gb     81713050 ns     76171875 ns            8

scan avx         10 2 gb   1423519375 ns   1423828125 ns            8
scan avx     noe 10 2 gb   1436349162 ns   1437500000 ns            8
scan avx tbb     10 2 gb    270678263 ns    242187500 ns            8
scan avx tbb noe 10 2 gb    267633837 ns    236328125 ns            8
scan             10 2 gb   1406542050 ns   1404296875 ns            8
scan         noe 10 2 gb   1389402200 ns   1388671875 ns            8
scan     tbb     10 2 gb    270508500 ns    244140625 ns            8
scan     tbb noe 10 2 gb    268562863 ns    238281250 ns            8
```

</details>

