# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1167 ns         1163 ns         4096
find avx     noe 06 16 kb        1162 ns         1160 ns         4096
find avx tbb     06 16 kb        1202 ns         1194 ns         4096
find avx tbb noe 06 16 kb        1234 ns         1216 ns         4096
find             06 16 kb        7919 ns         7954 ns         4096
find         noe 06 16 kb        7915 ns         7951 ns         4096
find     tbb     06 16 kb        7036 ns         7072 ns         4096
find     tbb noe 06 16 kb        7047 ns         7102 ns         4096
find avx         12 16 kb        1297 ns         1278 ns         4096
find avx     noe 12 16 kb        1295 ns         1266 ns         4096
find avx tbb     12 16 kb        1237 ns         1261 ns         4096
find avx tbb noe 12 16 kb        1300 ns         1277 ns         4096
find             12 16 kb        4497 ns         4536 ns         4096
find         noe 12 16 kb        4471 ns         4517 ns         4096
find     tbb     12 16 kb        6637 ns         6684 ns         4096
find     tbb noe 12 16 kb        6931 ns         6946 ns         4096
find avx         24 16 kb        1684 ns         1693 ns         4096
find avx     noe 24 16 kb        1770 ns         1750 ns         4096
find avx tbb     24 16 kb        1786 ns         1785 ns         4096
find avx tbb noe 24 16 kb        1748 ns         1739 ns         4096
find             24 16 kb        2881 ns         2911 ns         4096
find         noe 24 16 kb        2747 ns         2787 ns         4096
find     tbb     24 16 kb        6443 ns         6485 ns         4096
find     tbb noe 24 16 kb        6616 ns         6651 ns         4096

scan avx         06 16 kb        6313 ns         6346 ns         4096
scan avx     noe 06 16 kb        6242 ns         6269 ns         4096
scan avx tbb     06 16 kb        8033 ns         8071 ns         4096
scan avx tbb noe 06 16 kb        5784 ns         5822 ns         4096
scan             06 16 kb        6127 ns         6158 ns         4096
scan         noe 06 16 kb        8305 ns         8358 ns         4096
scan     tbb     06 16 kb        6004 ns         6048 ns         4096
scan     tbb noe 06 16 kb        6260 ns         6285 ns         4096
scan avx         12 16 kb        5939 ns         5963 ns         4096
scan avx     noe 12 16 kb        6056 ns         6091 ns         4096
scan avx tbb     12 16 kb        8334 ns         8396 ns         4096
scan avx tbb noe 12 16 kb        6085 ns         6119 ns         4096
scan             12 16 kb        6130 ns         6173 ns         4096
scan         noe 12 16 kb        7916 ns         7960 ns         4096
scan     tbb     12 16 kb        6051 ns         6082 ns         4096
scan     tbb noe 12 16 kb        6301 ns         6348 ns         4096
scan avx         24 16 kb        6090 ns         6152 ns         4096
scan avx     noe 24 16 kb        5880 ns         5932 ns         4096
scan avx tbb     24 16 kb        7852 ns         7911 ns         4096
scan avx tbb noe 24 16 kb        6012 ns         6057 ns         4096
scan             24 16 kb        6156 ns         6201 ns         4096
scan         noe 24 16 kb        8419 ns         8468 ns         4096
scan     tbb     24 16 kb        6940 ns         7007 ns         4096
scan     tbb noe 24 16 kb        6341 ns         6374 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2773 ns         2756 ns         4096
find avx     noe 06 64 kb        2691 ns         2685 ns         4096
find avx tbb     06 64 kb        2703 ns         2689 ns         4096
find avx tbb noe 06 64 kb        2717 ns         2700 ns         4096
find             06 64 kb       27880 ns        27934 ns         4096
find         noe 06 64 kb       27056 ns        27113 ns         4096
find     tbb     06 64 kb       10439 ns        10474 ns         4096
find     tbb noe 06 64 kb        9628 ns         9664 ns         4096
find avx         12 64 kb        2761 ns         2765 ns         4096
find avx     noe 12 64 kb        2716 ns         2701 ns         4096
find avx tbb     12 64 kb        2507 ns         2500 ns         4096
find avx tbb noe 12 64 kb        2459 ns         2442 ns         4096
find             12 64 kb       14711 ns        14743 ns         4096
find         noe 12 64 kb       14741 ns        14776 ns         4096
find     tbb     12 64 kb        8150 ns         8195 ns         4096
find     tbb noe 12 64 kb        8245 ns         8284 ns         4096
find avx         24 64 kb        4239 ns         4230 ns         4096
find avx     noe 24 64 kb        4251 ns         4243 ns         4096
find avx tbb     24 64 kb        3969 ns         3969 ns         4096
find avx tbb noe 24 64 kb        3897 ns         3888 ns         4096
find             24 64 kb        7576 ns         7620 ns         4096
find         noe 24 64 kb        7823 ns         7867 ns         4096
find     tbb     24 64 kb        7435 ns         7469 ns         4096
find     tbb noe 24 64 kb        7601 ns         7639 ns         4096

scan avx         06 64 kb       21738 ns        21816 ns         4096
scan avx     noe 06 64 kb       21907 ns        21968 ns         4096
scan avx tbb     06 64 kb       29243 ns        29308 ns         4096
scan avx tbb noe 06 64 kb       20540 ns        20582 ns         4096
scan             06 64 kb       20653 ns        20718 ns         4096
scan         noe 06 64 kb       29019 ns        29067 ns         4096
scan     tbb     06 64 kb        9094 ns         9122 ns         4096
scan     tbb noe 06 64 kb       10377 ns        10406 ns         4096
scan avx         12 64 kb       21408 ns        21462 ns         4096
scan avx     noe 12 64 kb       21518 ns        21586 ns         4096
scan avx tbb     12 64 kb       29916 ns        29978 ns         4096
scan avx tbb noe 12 64 kb       20518 ns        20562 ns         4096
scan             12 64 kb       20610 ns        20672 ns         4096
scan         noe 12 64 kb       29037 ns        29087 ns         4096
scan     tbb     12 64 kb        9060 ns         9092 ns         4096
scan     tbb noe 12 64 kb       10248 ns        10275 ns         4096
scan avx         24 64 kb       21597 ns        21648 ns         4096
scan avx     noe 24 64 kb       20647 ns        20714 ns         4096
scan avx tbb     24 64 kb       29025 ns        29090 ns         4096
scan avx tbb noe 24 64 kb       21060 ns        21126 ns         4096
scan             24 64 kb       21939 ns        21999 ns         4096
scan         noe 24 64 kb       29153 ns        29209 ns         4096
scan     tbb     24 64 kb        9144 ns         9176 ns         4096
scan     tbb noe 24 64 kb       10281 ns        10320 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8864 ns         8856 ns         2048
find avx     noe 06 256 kb       8529 ns         8517 ns         2048
find avx tbb     06 256 kb       7994 ns         7965 ns         2048
find avx tbb noe 06 256 kb       8064 ns         8039 ns         2048
find             06 256 kb     105335 ns       105388 ns         2048
find         noe 06 256 kb     105224 ns       105291 ns         2048
find     tbb     06 256 kb      22039 ns        21930 ns         2048
find     tbb noe 06 256 kb      19966 ns        19882 ns         2048
find avx         12 256 kb       8715 ns         8686 ns         2048
find avx     noe 12 256 kb       8195 ns         8165 ns         2048
find avx tbb     12 256 kb       7913 ns         7897 ns         2048
find avx tbb noe 12 256 kb       7938 ns         7912 ns         2048
find             12 256 kb      53552 ns        53573 ns         2048
find         noe 12 256 kb      53529 ns        53575 ns         2048
find     tbb     12 256 kb      14379 ns        14292 ns         2048
find     tbb noe 12 256 kb      14740 ns        14657 ns         2048
find avx         24 256 kb      14455 ns        14432 ns         2048
find avx     noe 24 256 kb      13923 ns        13898 ns         2048
find avx tbb     24 256 kb      13596 ns        13590 ns         2048
find avx tbb noe 24 256 kb      13430 ns        13422 ns         2048
find             24 256 kb      27679 ns        27719 ns         2048
find         noe 24 256 kb      27623 ns        27657 ns         2048
find     tbb     24 256 kb      11650 ns        11561 ns         2048
find     tbb noe 24 256 kb      12922 ns        12838 ns         2048

scan avx         06 256 kb      84931 ns        84967 ns         2048
scan avx     noe 06 256 kb      80167 ns        80229 ns         2048
scan avx tbb     06 256 kb     114786 ns       114862 ns         2048
scan avx tbb noe 06 256 kb      80436 ns        80495 ns         2048
scan             06 256 kb      81114 ns        81164 ns         2048
scan         noe 06 256 kb     116860 ns       116915 ns         2048
scan     tbb     06 256 kb      21592 ns        21502 ns         2048
scan     tbb noe 06 256 kb      25942 ns        25868 ns         2048
scan avx         12 256 kb      82793 ns        82844 ns         2048
scan avx     noe 12 256 kb      83634 ns        83676 ns         2048
scan avx tbb     12 256 kb     122592 ns       122663 ns         2048
scan avx tbb noe 12 256 kb      81959 ns        82017 ns         2048
scan             12 256 kb      84603 ns        84687 ns         2048
scan         noe 12 256 kb     118393 ns       118455 ns         2048
scan     tbb     12 256 kb      24458 ns        24391 ns         2048
scan     tbb noe 12 256 kb      29723 ns        29643 ns         2048
scan avx         24 256 kb      85312 ns        85385 ns         2048
scan avx     noe 24 256 kb      82357 ns        82420 ns         2048
scan avx tbb     24 256 kb     117773 ns       117814 ns         2048
scan avx tbb noe 24 256 kb      87605 ns        87672 ns         2048
scan             24 256 kb      86855 ns        86908 ns         2048
scan         noe 24 256 kb     122172 ns       122219 ns         2048
scan     tbb     24 256 kb      24791 ns        24715 ns         2048
scan     tbb noe 24 256 kb      29281 ns        29225 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        55996 ns        55997 ns         1024
find avx     noe 06 1 mb        54432 ns        54450 ns         1024
find avx tbb     06 1 mb        42600 ns        42418 ns         1024
find avx tbb noe 06 1 mb        44265 ns        44149 ns         1024
find             06 1 mb       450877 ns       451007 ns         1024
find         noe 06 1 mb       435898 ns       436031 ns         1024
find     tbb     06 1 mb        68055 ns        67948 ns         1024
find     tbb noe 06 1 mb        56404 ns        56314 ns         1024
find avx         12 1 mb        55934 ns        55937 ns         1024
find avx     noe 12 1 mb        54660 ns        54662 ns         1024
find avx tbb     12 1 mb        40962 ns        40805 ns         1024
find avx tbb noe 12 1 mb        40901 ns        40723 ns         1024
find             12 1 mb       227892 ns       227954 ns         1024
find         noe 12 1 mb       216593 ns       216696 ns         1024
find     tbb     12 1 mb        45253 ns        45102 ns         1024
find     tbb noe 12 1 mb        45032 ns        44913 ns         1024
find avx         24 1 mb        67466 ns        67483 ns         1024
find avx     noe 24 1 mb        65376 ns        65358 ns         1024
find avx tbb     24 1 mb        42299 ns        42089 ns         1024
find avx tbb noe 24 1 mb        41197 ns        41082 ns         1024
find             24 1 mb       117293 ns       117358 ns         1024
find         noe 24 1 mb       113983 ns       114035 ns         1024
find     tbb     24 1 mb        43112 ns        43015 ns         1024
find     tbb noe 24 1 mb        43112 ns        43003 ns         1024

scan avx         06 1 mb       327696 ns       327809 ns         1024
scan avx     noe 06 1 mb       322591 ns       322690 ns         1024
scan avx tbb     06 1 mb        65843 ns        65698 ns         1024
scan avx tbb noe 06 1 mb        65768 ns        65684 ns         1024
scan             06 1 mb       327025 ns       327150 ns         1024
scan         noe 06 1 mb       457673 ns       457803 ns         1024
scan     tbb     06 1 mb        78236 ns        78125 ns         1024
scan     tbb noe 06 1 mb        86609 ns        86526 ns         1024
scan avx         12 1 mb       328548 ns       328654 ns         1024
scan avx     noe 12 1 mb       326950 ns       327061 ns         1024
scan avx tbb     12 1 mb        70131 ns        69996 ns         1024
scan avx tbb noe 12 1 mb        67191 ns        67118 ns         1024
scan             12 1 mb       327389 ns       327497 ns         1024
scan         noe 12 1 mb       467260 ns       467409 ns         1024
scan     tbb     12 1 mb        66748 ns        66660 ns         1024
scan     tbb noe 12 1 mb        88163 ns        88075 ns         1024
scan avx         24 1 mb       327017 ns       327130 ns         1024
scan avx     noe 24 1 mb       322741 ns       322851 ns         1024
scan avx tbb     24 1 mb        66965 ns        66872 ns         1024
scan avx tbb noe 24 1 mb        66205 ns        66107 ns         1024
scan             24 1 mb       325545 ns       325678 ns         1024
scan         noe 24 1 mb       463166 ns       463304 ns         1024
scan     tbb     24 1 mb        69477 ns        69379 ns         1024
scan     tbb noe 24 1 mb        84588 ns        84506 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       201525 ns       201530 ns          512
find avx     noe 06 4 mb       202406 ns       202418 ns          512
find avx tbb     06 4 mb       212329 ns       212369 ns          512
find avx tbb noe 06 4 mb       213610 ns       213629 ns          512
find             06 4 mb      1702944 ns      1703130 ns          512
find         noe 06 4 mb      1679449 ns      1678889 ns          512
find     tbb     06 4 mb       324085 ns       322597 ns          512
find     tbb noe 06 4 mb       288439 ns       288555 ns          512
find avx         12 4 mb       209946 ns       209947 ns          512
find avx     noe 12 4 mb       200952 ns       200967 ns          512
find avx tbb     12 4 mb       219551 ns       219587 ns          512
find avx tbb noe 12 4 mb       197405 ns       197446 ns          512
find             12 4 mb       879554 ns       879748 ns          512
find         noe 12 4 mb       860433 ns       860625 ns          512
find     tbb     12 4 mb       274751 ns       274830 ns          512
find     tbb noe 12 4 mb       253714 ns       253777 ns          512
find avx         24 4 mb       258606 ns       258613 ns          512
find avx     noe 24 4 mb       250880 ns       250913 ns          512
find avx tbb     24 4 mb       235677 ns       235701 ns          512
find avx tbb noe 24 4 mb       202725 ns       202770 ns          512
find             24 4 mb       469070 ns       469251 ns          512
find         noe 24 4 mb       463819 ns       463923 ns          512
find     tbb     24 4 mb       250085 ns       250135 ns          512
find     tbb noe 24 4 mb       235684 ns       235741 ns          512

scan avx         06 4 mb      1308006 ns      1308240 ns          512
scan avx     noe 06 4 mb      1301852 ns      1302075 ns          512
scan avx tbb     06 4 mb       353475 ns       353520 ns          512
scan avx tbb noe 06 4 mb       310847 ns       310906 ns          512
scan             06 4 mb      1291143 ns      1291307 ns          512
scan         noe 06 4 mb      1821402 ns      1821616 ns          512
scan     tbb     06 4 mb       361862 ns       361890 ns          512
scan     tbb noe 06 4 mb       370706 ns       370796 ns          512
scan avx         12 4 mb      1315071 ns      1315280 ns          512
scan avx     noe 12 4 mb      1313399 ns      1313593 ns          512
scan avx tbb     12 4 mb       348889 ns       348962 ns          512
scan avx tbb noe 12 4 mb       310687 ns       310737 ns          512
scan             12 4 mb      1292127 ns      1292379 ns          512
scan         noe 12 4 mb      1837334 ns      1837582 ns          512
scan     tbb     12 4 mb       362794 ns       362806 ns          512
scan     tbb noe 12 4 mb       383604 ns       382578 ns          512
scan avx         24 4 mb      1307239 ns      1307445 ns          512
scan avx     noe 24 4 mb      1288041 ns      1288284 ns          512
scan avx tbb     24 4 mb       367249 ns       367381 ns          512
scan avx tbb noe 24 4 mb       309875 ns       308483 ns          512
scan             24 4 mb      1305302 ns      1305522 ns          512
scan         noe 24 4 mb      1845607 ns      1845818 ns          512
scan     tbb     24 4 mb       346713 ns       346792 ns          512
scan     tbb noe 24 4 mb       361318 ns       361348 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      792978 ns       792806 ns           64
find avx     noe 06 16 mb      785359 ns       785170 ns           64
find avx tbb     06 16 mb      669002 ns       668952 ns           64
find avx tbb noe 06 16 mb      674170 ns       674089 ns           64
find             06 16 mb     6872645 ns      6872420 ns           64
find         noe 06 16 mb     6830173 ns      6829933 ns           64
find     tbb     06 16 mb      906077 ns       906214 ns           64
find     tbb noe 06 16 mb      900920 ns       900367 ns           64
find avx         12 16 mb      797308 ns       797300 ns           64
find avx     noe 12 16 mb      798591 ns       798083 ns           64
find avx tbb     12 16 mb      674358 ns       674286 ns           64
find avx tbb noe 12 16 mb      673772 ns       673705 ns           64
find             12 16 mb     3492983 ns      3492839 ns           64
find         noe 12 16 mb     3421717 ns      3421597 ns           64
find     tbb     12 16 mb      758903 ns       758847 ns           64
find     tbb noe 12 16 mb      753992 ns       753914 ns           64
find avx         24 16 mb     1039613 ns      1039311 ns           64
find avx     noe 24 16 mb      996102 ns       995937 ns           64
find avx tbb     24 16 mb      700183 ns       700131 ns           64
find avx tbb noe 24 16 mb      691948 ns       691875 ns           64
find             24 16 mb     1830812 ns      1830716 ns           64
find         noe 24 16 mb     1785694 ns      1785489 ns           64
find     tbb     24 16 mb      734039 ns       733989 ns           64
find     tbb noe 24 16 mb      726595 ns       726448 ns           64

scan avx         06 16 mb     5255583 ns      5255495 ns           64
scan avx     noe 06 16 mb     5149830 ns      5149775 ns           64
scan avx tbb     06 16 mb     1085183 ns      1085209 ns           64
scan avx tbb noe 06 16 mb     1090239 ns      1090248 ns           64
scan             06 16 mb     5382641 ns      5382506 ns           64
scan         noe 06 16 mb     7295844 ns      7295766 ns           64
scan     tbb     06 16 mb     1093445 ns      1093664 ns           64
scan     tbb noe 06 16 mb     1286525 ns      1286613 ns           64
scan avx         12 16 mb     5209402 ns      5209328 ns           64
scan avx     noe 12 16 mb     5159136 ns      5159088 ns           64
scan avx tbb     12 16 mb     1082595 ns      1082800 ns           64
scan avx tbb noe 12 16 mb     1083103 ns      1082919 ns           64
scan             12 16 mb     5258744 ns      5258616 ns           64
scan         noe 12 16 mb     7273938 ns      7273834 ns           64
scan     tbb     12 16 mb     1091495 ns      1091523 ns           64
scan     tbb noe 12 16 mb     1277039 ns      1277102 ns           64
scan avx         24 16 mb     5218789 ns      5218717 ns           64
scan avx     noe 24 16 mb     5151086 ns      5151020 ns           64
scan avx tbb     24 16 mb     1077650 ns      1077714 ns           64
scan avx tbb noe 24 16 mb     1076512 ns      1076334 ns           64
scan             24 16 mb     5229031 ns      5228923 ns           64
scan         noe 24 16 mb     7423813 ns      7423714 ns           64
scan     tbb     24 16 mb     1108950 ns      1108778 ns           64
scan     tbb noe 24 16 mb     1299769 ns      1299669 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3029047 ns      3028937 ns           32
find avx     noe 06 64 mb     3002122 ns      3001931 ns           32
find avx tbb     06 64 mb     2443962 ns      2443500 ns           32
find avx tbb noe 06 64 mb     2439947 ns      2439875 ns           32
find             06 64 mb    27139356 ns     27139094 ns           32
find         noe 06 64 mb    27023372 ns     27011606 ns           32
find     tbb     06 64 mb     3060900 ns      3060653 ns           32
find     tbb noe 06 64 mb     3065069 ns      3064906 ns           32
find avx         12 64 mb     3047181 ns      3046991 ns           32
find avx     noe 12 64 mb     3049597 ns      3049444 ns           32
find avx tbb     12 64 mb     2441581 ns      2441397 ns           32
find avx tbb noe 12 64 mb     2453766 ns      2453572 ns           32
find             12 64 mb    13784469 ns     13784381 ns           32
find         noe 12 64 mb    13670722 ns     13670466 ns           32
find     tbb     12 64 mb     2600662 ns      2600600 ns           32
find     tbb noe 12 64 mb     2609413 ns      2609356 ns           32
find avx         24 64 mb     3947112 ns      3946978 ns           32
find avx     noe 24 64 mb     3910862 ns      3910675 ns           32
find avx tbb     24 64 mb     2473694 ns      2473553 ns           32
find avx tbb noe 24 64 mb     2463187 ns      2435472 ns           32
find             24 64 mb     7172862 ns      7172706 ns           32
find         noe 24 64 mb     7106025 ns      7105825 ns           32
find     tbb     24 64 mb     2533428 ns      2533291 ns           32
find     tbb noe 24 64 mb     2531628 ns      2531497 ns           32

scan avx         06 64 mb    20739256 ns     20728462 ns           32
scan avx     noe 06 64 mb    20528978 ns     20528669 ns           32
scan avx tbb     06 64 mb     3763606 ns      3763500 ns           32
scan avx tbb noe 06 64 mb     3756141 ns      3756047 ns           32
scan             06 64 mb    20595259 ns     20583391 ns           32
scan         noe 06 64 mb    29049238 ns     29049062 ns           32
scan     tbb     06 64 mb     3759750 ns      3759653 ns           32
scan     tbb noe 06 64 mb     4599175 ns      4598491 ns           32
scan avx         12 64 mb    20551750 ns     20540669 ns           32
scan avx     noe 12 64 mb    20570934 ns     20570837 ns           32
scan avx tbb     12 64 mb     3750409 ns      3750213 ns           32
scan avx tbb noe 12 64 mb     3733631 ns      3733509 ns           32
scan             12 64 mb    20491803 ns     20479559 ns           32
scan         noe 12 64 mb    29795103 ns     29794919 ns           32
scan     tbb     12 64 mb     3776619 ns      3776506 ns           32
scan     tbb noe 12 64 mb     4717913 ns      4707462 ns           32
scan avx         24 64 mb    21141147 ns     21130247 ns           32
scan avx     noe 24 64 mb    20791216 ns     20790928 ns           32
scan avx tbb     24 64 mb     3789684 ns      3790353 ns           32
scan avx tbb noe 24 64 mb     3790491 ns      3790425 ns           32
scan             24 64 mb    20674338 ns     20661906 ns           32
scan         noe 24 64 mb    29144544 ns     29144353 ns           32
scan     tbb     24 64 mb     3732697 ns      3732491 ns           32
scan     tbb noe 24 64 mb     4636503 ns      4636197 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   12172137 ns     12150044 ns           16
find avx     noe 06 256 mb   12149725 ns     12149663 ns           16
find avx tbb     06 256 mb    9392219 ns      9392087 ns           16
find avx tbb noe 06 256 mb    9414125 ns      9414031 ns           16
find             06 256 mb  110913012 ns    110913331 ns           16
find         noe 06 256 mb  108421644 ns    108399813 ns           16
find     tbb     06 256 mb   11604975 ns     11546944 ns           16
find     tbb noe 06 256 mb   11633344 ns     11307769 ns           16
find avx         12 256 mb   12213762 ns     12213681 ns           16
find avx     noe 12 256 mb   12170150 ns     12170025 ns           16
find avx tbb     12 256 mb    9386375 ns      9386237 ns           16
find avx tbb noe 12 256 mb    9415894 ns      9415756 ns           16
find             12 256 mb   54912356 ns     54890562 ns           16
find         noe 12 256 mb   55345800 ns     55345762 ns           16
find     tbb     12 256 mb    9940688 ns      9877506 ns           16
find     tbb noe 12 256 mb    9873725 ns      9804744 ns           16
find avx         24 256 mb   16399263 ns     16399306 ns           16
find avx     noe 24 256 mb   15789262 ns     15789175 ns           16
find avx tbb     24 256 mb    9572087 ns      9558537 ns           16
find avx tbb noe 24 256 mb    9554412 ns      9525525 ns           16
find             24 256 mb   28462425 ns     28462256 ns           16
find         noe 24 256 mb   28373625 ns     28373381 ns           16
find     tbb     24 256 mb    9692375 ns      9693206 ns           16
find     tbb noe 24 256 mb    9742850 ns      9731350 ns           16

scan avx         06 256 mb   83770163 ns     83747806 ns           16
scan avx     noe 06 256 mb   82945575 ns     82945694 ns           16
scan avx tbb     06 256 mb   14540294 ns     14273144 ns           16
scan avx tbb noe 06 256 mb   14358294 ns     14219056 ns           16
scan             06 256 mb   82340925 ns     82318906 ns           16
scan         noe 06 256 mb  116345956 ns    116323962 ns           16
scan     tbb     06 256 mb   14440750 ns     14319619 ns           16
scan     tbb noe 06 256 mb   18001787 ns     17747294 ns           16
scan avx         12 256 mb   82059469 ns     82036244 ns           16
scan avx     noe 12 256 mb   82123806 ns     82123606 ns           16
scan avx tbb     12 256 mb   14585819 ns     14285125 ns           16
scan avx tbb noe 12 256 mb   14614687 ns     14427294 ns           16
scan             12 256 mb   82058200 ns     82036175 ns           16
scan         noe 12 256 mb  116505894 ns    116484575 ns           16
scan     tbb     12 256 mb   14623612 ns     14359925 ns           16
scan     tbb noe 12 256 mb   18166700 ns     17981913 ns           16
scan avx         24 256 mb   82259331 ns     82236700 ns           16
scan avx     noe 24 256 mb   83809363 ns     83809344 ns           16
scan avx tbb     24 256 mb   14381075 ns     14293675 ns           16
scan avx tbb noe 24 256 mb   14445800 ns     14239537 ns           16
scan             24 256 mb   82381594 ns     82359719 ns           16
scan         noe 24 256 mb  118363650 ns    118342481 ns           16
scan     tbb     24 256 mb   14620369 ns     14052031 ns           16
scan     tbb noe 24 256 mb   17956525 ns     17929063 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   25351700 ns     25351400 ns            8
find avx     noe 06 512 mb   25656662 ns     25656337 ns            8
find avx tbb     06 512 mb   18818412 ns     18818400 ns            8
find avx tbb noe 06 512 mb   18710163 ns     18710113 ns            8
find             06 512 mb  217012888 ns    216907850 ns            8
find         noe 06 512 mb  214760663 ns    214661613 ns            8
find     tbb     06 512 mb   23024075 ns     23023775 ns            8
find     tbb noe 06 512 mb   23015663 ns     23015688 ns            8
find avx         12 512 mb   25131050 ns     25130788 ns            8
find avx     noe 12 512 mb   25466188 ns     25363050 ns            8
find avx tbb     12 512 mb   18896063 ns     18896050 ns            8
find avx tbb noe 12 512 mb   18873500 ns     18873388 ns            8
find             12 512 mb  109729163 ns    109723787 ns            8
find         noe 12 512 mb  109277675 ns    109277438 ns            8
find     tbb     12 512 mb   19581900 ns     19248737 ns            8
find     tbb noe 12 512 mb   19624013 ns     19624050 ns            8
find avx         24 512 mb   32318212 ns     32318025 ns            8
find avx     noe 24 512 mb   32947188 ns     32946963 ns            8
find avx tbb     24 512 mb   18915388 ns     18915250 ns            8
find avx tbb noe 24 512 mb   18813888 ns     18812912 ns            8
find             24 512 mb   56872175 ns     56872050 ns            8
find         noe 24 512 mb   58024525 ns     58024512 ns            8
find     tbb     24 512 mb   19328963 ns     19328913 ns            8
find     tbb noe 24 512 mb   19102263 ns     19102137 ns            8

scan avx         06 512 mb  164876650 ns    164770550 ns            8
scan avx     noe 06 512 mb  164286750 ns    164286625 ns            8
scan avx tbb     06 512 mb   29201538 ns     27694700 ns            8
scan avx tbb noe 06 512 mb   28776188 ns     27526650 ns            8
scan             06 512 mb  163696512 ns    163581213 ns            8
scan         noe 06 512 mb  232792688 ns    232681725 ns            8
scan     tbb     06 512 mb   28259150 ns     27322400 ns            8
scan     tbb noe 06 512 mb   35919925 ns     35190200 ns            8
scan avx         12 512 mb  165618700 ns    165618737 ns            8
scan avx     noe 12 512 mb  165576337 ns    165576387 ns            8
scan avx tbb     12 512 mb   30094038 ns     28955787 ns            8
scan avx tbb noe 12 512 mb   28268213 ns     27642987 ns            8
scan             12 512 mb  168459837 ns    168350950 ns            8
scan         noe 12 512 mb  234236463 ns    234130213 ns            8
scan     tbb     12 512 mb   28366263 ns     27968825 ns            8
scan     tbb noe 12 512 mb   35644038 ns     35317150 ns            8
scan avx         24 512 mb  170291212 ns    170185625 ns            8
scan avx     noe 24 512 mb  167363275 ns    167363138 ns            8
scan avx tbb     24 512 mb   29620225 ns     28858000 ns            8
scan avx tbb noe 24 512 mb   29388062 ns     28567238 ns            8
scan             24 512 mb  168811488 ns    168711712 ns            8
scan         noe 24 512 mb  236971687 ns    236858950 ns            8
scan     tbb     24 512 mb   29489288 ns     28765825 ns            8
scan     tbb noe 24 512 mb   36522237 ns     35669050 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     52206688 ns     52206512 ns            8
find avx     noe 06 1 gb     52674763 ns     52674250 ns            8
find avx tbb     06 1 gb     37543125 ns     37086250 ns            8
find avx tbb noe 06 1 gb     37738375 ns     37225163 ns            8
find             06 1 gb    431153062 ns    431051813 ns            8
find         noe 06 1 gb    434959263 ns    434959425 ns            8
find     tbb     06 1 gb     46398037 ns     43805237 ns            8
find     tbb noe 06 1 gb     46223812 ns     43750662 ns            8
find avx         12 1 gb     52289163 ns     52288738 ns            8
find avx     noe 12 1 gb     50974887 ns     50875013 ns            8
find avx tbb     12 1 gb     37553563 ns     37394300 ns            8
find avx tbb noe 12 1 gb     37382650 ns     36982263 ns            8
find             12 1 gb    218798962 ns    218691437 ns            8
find         noe 12 1 gb    218658925 ns    218554062 ns            8
find     tbb     12 1 gb     39142100 ns     38697975 ns            8
find     tbb noe 12 1 gb     39109225 ns     38705413 ns            8
find avx         24 1 gb     64509987 ns     64509825 ns            8
find avx     noe 24 1 gb     64831463 ns     64831325 ns            8
find avx tbb     24 1 gb     37635400 ns     37635537 ns            8
find avx tbb noe 24 1 gb     37596162 ns     37436913 ns            8
find             24 1 gb    113866863 ns    113866762 ns            8
find         noe 24 1 gb    114012750 ns    114012613 ns            8
find     tbb     24 1 gb     38002388 ns     38002800 ns            8
find     tbb noe 24 1 gb     38038625 ns     38038912 ns            8

scan avx         06 1 gb    328382162 ns    328341463 ns            8
scan avx     noe 06 1 gb    332232088 ns    332191725 ns            8
scan avx tbb     06 1 gb     56846225 ns     55370800 ns            8
scan avx tbb noe 06 1 gb     56817438 ns     55264450 ns            8
scan             06 1 gb    331043737 ns    330998850 ns            8
scan         noe 06 1 gb    466009375 ns    465969475 ns            8
scan     tbb     06 1 gb     58282875 ns     55494300 ns            8
scan     tbb noe 06 1 gb     70911663 ns     68843075 ns            8
scan avx         12 1 gb    335076363 ns    335035063 ns            8
scan avx     noe 12 1 gb    332437762 ns    332396350 ns            8
scan avx tbb     12 1 gb     59890125 ns     58390750 ns            8
scan avx tbb noe 12 1 gb     59212825 ns     55051125 ns            8
scan             12 1 gb    331624988 ns    331583712 ns            8
scan         noe 12 1 gb    465710925 ns    465670500 ns            8
scan     tbb     12 1 gb     59833713 ns     57991612 ns            8
scan     tbb noe 12 1 gb     71075025 ns     69602025 ns            8
scan avx         24 1 gb    332174387 ns    332134362 ns            8
scan avx     noe 24 1 gb    329325300 ns    329285213 ns            8
scan avx tbb     24 1 gb     57868712 ns     52918963 ns            8
scan avx tbb noe 24 1 gb     58278200 ns     55112737 ns            8
scan             24 1 gb    327852225 ns    327811500 ns            8
scan         noe 24 1 gb    466573562 ns    466533400 ns            8
scan     tbb     24 1 gb     58132712 ns     55303938 ns            8
scan     tbb noe 24 1 gb     71260663 ns     69228500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    101245825 ns    101195663 ns            8
find avx     noe 06 2 gb    101022663 ns    101019988 ns            8
find avx tbb     06 2 gb     74759775 ns     74016687 ns            8
find avx tbb noe 06 2 gb     74708625 ns     73472038 ns            8
find             06 2 gb    857797100 ns    857756863 ns            8
find         noe 06 2 gb    857953500 ns    857913687 ns            8
find     tbb     06 2 gb     91930912 ns     90277325 ns            8
find     tbb noe 06 2 gb     92206575 ns     85126162 ns            8
find avx         12 2 gb    101068612 ns    101068300 ns            8
find avx     noe 12 2 gb    101017588 ns    101017138 ns            8
find avx tbb     12 2 gb     74812038 ns     74591975 ns            8
find avx tbb noe 12 2 gb     74745675 ns     73508812 ns            8
find             12 2 gb    437665800 ns    437665750 ns            8
find         noe 12 2 gb    437515213 ns    437514975 ns            8
find     tbb     12 2 gb     78294363 ns     77018375 ns            8
find     tbb noe 12 2 gb     78263062 ns     77253825 ns            8
find avx         24 2 gb    130892113 ns    130891788 ns            8
find avx     noe 24 2 gb    130609113 ns    130608662 ns            8
find avx tbb     24 2 gb     75096325 ns     74204900 ns            8
find avx tbb noe 24 2 gb     75259013 ns     73344512 ns            8
find             24 2 gb    228500300 ns    228461225 ns            8
find         noe 24 2 gb    228335200 ns    228298150 ns            8
find     tbb     24 2 gb     76059850 ns     75432475 ns            8
find     tbb noe 24 2 gb     76080587 ns     76080475 ns            8

scan avx         06 2 gb    657849113 ns    657809838 ns            8
scan avx     noe 06 2 gb    657349325 ns    657350487 ns            8
scan avx tbb     06 2 gb    116755375 ns    106415637 ns            8
scan avx tbb noe 06 2 gb    115755700 ns    106056825 ns            8
scan             06 2 gb    656290150 ns    656251312 ns            8
scan         noe 06 2 gb    931719337 ns    931719575 ns            8
scan     tbb     06 2 gb    118378200 ns    109262738 ns            8
scan     tbb noe 06 2 gb    141860350 ns    139061225 ns            8
scan avx         12 2 gb    656605750 ns    656565850 ns            8
scan avx     noe 12 2 gb    659604400 ns    659565938 ns            8
scan avx tbb     12 2 gb    115749475 ns    102557600 ns            8
scan avx tbb noe 12 2 gb    115604337 ns    105161475 ns            8
scan             12 2 gb    656096513 ns    656056325 ns            8
scan         noe 12 2 gb    932782250 ns    932739875 ns            8
scan     tbb     12 2 gb    116793387 ns    107087525 ns            8
scan     tbb noe 12 2 gb    141993137 ns    138786313 ns            8
scan avx         24 2 gb    656369963 ns    656328875 ns            8
scan avx     noe 24 2 gb    658708175 ns    658666600 ns            8
scan avx tbb     24 2 gb    118954137 ns    107862413 ns            8
scan avx tbb noe 24 2 gb    117341713 ns    110396462 ns            8
scan             24 2 gb    655843100 ns    655802512 ns            8
scan         noe 24 2 gb    931284050 ns    931245987 ns            8
scan     tbb     24 2 gb    114881150 ns    107825637 ns            8
scan     tbb noe 24 2 gb    141790775 ns    137447450 ns            8
```

</details>

