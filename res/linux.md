# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1173 ns         1175 ns         4096
find avx     noe 06 16 kb        1199 ns         1191 ns         4096
find avx tbb     06 16 kb        1206 ns         1194 ns         4096
find avx tbb noe 06 16 kb        1188 ns         1174 ns         4096
find             06 16 kb        7488 ns         7484 ns         4096
find         noe 06 16 kb        7464 ns         7467 ns         4096
find     tbb     06 16 kb        7233 ns         7239 ns         4096
find     tbb noe 06 16 kb        7180 ns         7190 ns         4096
find avx         12 16 kb        1423 ns         1449 ns         4096
find avx     noe 12 16 kb        1236 ns         1220 ns         4096
find avx tbb     12 16 kb        1246 ns         1236 ns         4096
find avx tbb noe 12 16 kb        1266 ns         1244 ns         4096
find             12 16 kb        4226 ns         4213 ns         4096
find         noe 12 16 kb        4257 ns         4253 ns         4096
find     tbb     12 16 kb        6587 ns         6587 ns         4096
find     tbb noe 12 16 kb        6614 ns         6629 ns         4096
find avx         24 16 kb        1704 ns         1689 ns         4096
find avx     noe 24 16 kb        1718 ns         1702 ns         4096
find avx tbb     24 16 kb        1728 ns         1720 ns         4096
find avx tbb noe 24 16 kb        1758 ns         1756 ns         4096
find             24 16 kb        2836 ns         2819 ns         4096
find         noe 24 16 kb        2752 ns         2747 ns         4096
find     tbb     24 16 kb        6610 ns         6600 ns         4096
find     tbb noe 24 16 kb        6687 ns         6689 ns         4096

scan avx         06 16 kb        6307 ns         6339 ns         4096
scan avx     noe 06 16 kb        8431 ns         8492 ns         4096
scan avx tbb     06 16 kb        6099 ns         6126 ns         4096
scan avx tbb noe 06 16 kb        6070 ns         6111 ns         4096
scan             06 16 kb        6093 ns         6122 ns         4096
scan         noe 06 16 kb        6124 ns         6152 ns         4096
scan     tbb     06 16 kb        6563 ns         6603 ns         4096
scan     tbb noe 06 16 kb        6712 ns         6753 ns         4096
scan avx         12 16 kb        6071 ns         6115 ns         4096
scan avx     noe 12 16 kb        8386 ns         8434 ns         4096
scan avx tbb     12 16 kb        6106 ns         6144 ns         4096
scan avx tbb noe 12 16 kb        6083 ns         6125 ns         4096
scan             12 16 kb        5870 ns         5910 ns         4096
scan         noe 12 16 kb        5728 ns         5757 ns         4096
scan     tbb     12 16 kb        6420 ns         6453 ns         4096
scan     tbb noe 12 16 kb        6770 ns         6800 ns         4096
scan avx         24 16 kb        6072 ns         6113 ns         4096
scan avx     noe 24 16 kb        7970 ns         8037 ns         4096
scan avx tbb     24 16 kb        5901 ns         5926 ns         4096
scan avx tbb noe 24 16 kb        6079 ns         6127 ns         4096
scan             24 16 kb        6121 ns         6158 ns         4096
scan         noe 24 16 kb        6093 ns         6130 ns         4096
scan     tbb     24 16 kb        6420 ns         6458 ns         4096
scan     tbb noe 24 16 kb        7004 ns         7042 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2655 ns         2642 ns         4096
find avx     noe 06 64 kb        2653 ns         2642 ns         4096
find avx tbb     06 64 kb        2629 ns         2622 ns         4096
find avx tbb noe 06 64 kb        2583 ns         2590 ns         4096
find             06 64 kb       27149 ns        27171 ns         4096
find         noe 06 64 kb       27400 ns        27412 ns         4096
find     tbb     06 64 kb        9743 ns         9744 ns         4096
find     tbb noe 06 64 kb        9757 ns         9770 ns         4096
find avx         12 64 kb        2699 ns         2696 ns         4096
find avx     noe 12 64 kb        2704 ns         2699 ns         4096
find avx tbb     12 64 kb        2730 ns         2726 ns         4096
find avx tbb noe 12 64 kb        2577 ns         2587 ns         4096
find             12 64 kb       14842 ns        14840 ns         4096
find         noe 12 64 kb       14696 ns        14706 ns         4096
find     tbb     12 64 kb        8206 ns         8214 ns         4096
find     tbb noe 12 64 kb        8224 ns         8262 ns         4096
find avx         24 64 kb        4347 ns         4331 ns         4096
find avx     noe 24 64 kb        4223 ns         4222 ns         4096
find avx tbb     24 64 kb        3998 ns         3993 ns         4096
find avx tbb noe 24 64 kb        4002 ns         4012 ns         4096
find             24 64 kb        7750 ns         7743 ns         4096
find         noe 24 64 kb        7716 ns         7714 ns         4096
find     tbb     24 64 kb        7575 ns         7583 ns         4096
find     tbb noe 24 64 kb        7488 ns         7497 ns         4096

scan avx         06 64 kb       21355 ns        21420 ns         4096
scan avx     noe 06 64 kb       30215 ns        30287 ns         4096
scan avx tbb     06 64 kb       20751 ns        20814 ns         4096
scan avx tbb noe 06 64 kb       20665 ns        20716 ns         4096
scan             06 64 kb       20638 ns        20700 ns         4096
scan         noe 06 64 kb       20744 ns        20802 ns         4096
scan     tbb     06 64 kb       10640 ns        10678 ns         4096
scan     tbb noe 06 64 kb       11558 ns        11595 ns         4096
scan avx         12 64 kb       21438 ns        21501 ns         4096
scan avx     noe 12 64 kb       29252 ns        29311 ns         4096
scan avx tbb     12 64 kb       20714 ns        20777 ns         4096
scan avx tbb noe 12 64 kb       20582 ns        20659 ns         4096
scan             12 64 kb       20601 ns        20663 ns         4096
scan         noe 12 64 kb       20606 ns        20661 ns         4096
scan     tbb     12 64 kb       10394 ns        10436 ns         4096
scan     tbb noe 12 64 kb       11880 ns        11888 ns         4096
scan avx         24 64 kb       21849 ns        21915 ns         4096
scan avx     noe 24 64 kb       30504 ns        30562 ns         4096
scan avx tbb     24 64 kb       20674 ns        20730 ns         4096
scan avx tbb noe 24 64 kb       20807 ns        20864 ns         4096
scan             24 64 kb       21049 ns        21129 ns         4096
scan         noe 24 64 kb       21891 ns        21949 ns         4096
scan     tbb     24 64 kb       10563 ns        10598 ns         4096
scan     tbb noe 24 64 kb       11468 ns        11504 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8800 ns         8805 ns         2048
find avx     noe 06 256 kb       8332 ns         8340 ns         2048
find avx tbb     06 256 kb       8363 ns         8352 ns         2048
find avx tbb noe 06 256 kb       8230 ns         8238 ns         2048
find             06 256 kb     105497 ns       105552 ns         2048
find         noe 06 256 kb     105519 ns       105558 ns         2048
find     tbb     06 256 kb      20345 ns        20221 ns         2048
find     tbb noe 06 256 kb      20030 ns        19921 ns         2048
find avx         12 256 kb       8601 ns         8611 ns         2048
find avx     noe 12 256 kb       8055 ns         8069 ns         2048
find avx tbb     12 256 kb       8348 ns         8348 ns         2048
find avx tbb noe 12 256 kb       8386 ns         8398 ns         2048
find             12 256 kb      54326 ns        54355 ns         2048
find         noe 12 256 kb      53531 ns        53557 ns         2048
find     tbb     12 256 kb      15254 ns        15105 ns         2048
find     tbb noe 12 256 kb      14597 ns        14498 ns         2048
find avx         24 256 kb      14659 ns        14664 ns         2048
find avx     noe 24 256 kb      14446 ns        14463 ns         2048
find avx tbb     24 256 kb      14571 ns        14584 ns         2048
find avx tbb noe 24 256 kb      13789 ns        13780 ns         2048
find             24 256 kb      27771 ns        27794 ns         2048
find         noe 24 256 kb      27731 ns        27766 ns         2048
find     tbb     24 256 kb      12106 ns        11991 ns         2048
find     tbb noe 24 256 kb      12059 ns        11949 ns         2048

scan avx         06 256 kb      84624 ns        84712 ns         2048
scan avx     noe 06 256 kb     115341 ns       115423 ns         2048
scan avx tbb     06 256 kb      80824 ns        80910 ns         2048
scan avx tbb noe 06 256 kb      80105 ns        80183 ns         2048
scan             06 256 kb      81044 ns        81127 ns         2048
scan         noe 06 256 kb      80993 ns        81078 ns         2048
scan     tbb     06 256 kb      26355 ns        26279 ns         2048
scan     tbb noe 06 256 kb      30584 ns        30519 ns         2048
scan avx         12 256 kb      81893 ns        81973 ns         2048
scan avx     noe 12 256 kb     114408 ns       114477 ns         2048
scan avx tbb     12 256 kb      80435 ns        80518 ns         2048
scan avx tbb noe 12 256 kb      80154 ns        80207 ns         2048
scan             12 256 kb      83587 ns        83664 ns         2048
scan         noe 12 256 kb      80639 ns        80711 ns         2048
scan     tbb     12 256 kb      26647 ns        26564 ns         2048
scan     tbb noe 12 256 kb      30950 ns        30878 ns         2048
scan avx         24 256 kb      82301 ns        82384 ns         2048
scan avx     noe 24 256 kb     114243 ns       114329 ns         2048
scan avx tbb     24 256 kb      80589 ns        80660 ns         2048
scan avx tbb noe 24 256 kb      80021 ns        80085 ns         2048
scan             24 256 kb      85421 ns        85482 ns         2048
scan         noe 24 256 kb      81670 ns        81725 ns         2048
scan     tbb     24 256 kb      26505 ns        26431 ns         2048
scan     tbb noe 24 256 kb      30651 ns        30578 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        56625 ns        56649 ns         1024
find avx     noe 06 1 mb        55676 ns        55669 ns         1024
find avx tbb     06 1 mb        42358 ns        42184 ns         1024
find avx tbb noe 06 1 mb        41254 ns        41122 ns         1024
find             06 1 mb       426121 ns       426259 ns         1024
find         noe 06 1 mb       423493 ns       423591 ns         1024
find     tbb     06 1 mb        56988 ns        56877 ns         1024
find     tbb noe 06 1 mb        54407 ns        54300 ns         1024
find avx         12 1 mb        56190 ns        56192 ns         1024
find avx     noe 12 1 mb        55658 ns        55683 ns         1024
find avx tbb     12 1 mb        42225 ns        42089 ns         1024
find avx tbb noe 12 1 mb        41664 ns        41528 ns         1024
find             12 1 mb       219557 ns       219633 ns         1024
find         noe 12 1 mb       221783 ns       221840 ns         1024
find     tbb     12 1 mb        45573 ns        45413 ns         1024
find     tbb noe 12 1 mb        46854 ns        45937 ns         1024
find avx         24 1 mb        68703 ns        68719 ns         1024
find avx     noe 24 1 mb        66920 ns        66950 ns         1024
find avx tbb     24 1 mb        42828 ns        42661 ns         1024
find avx tbb noe 24 1 mb        41969 ns        41779 ns         1024
find             24 1 mb       116626 ns       116669 ns         1024
find         noe 24 1 mb       113533 ns       113566 ns         1024
find     tbb     24 1 mb        45000 ns        44847 ns         1024
find     tbb noe 24 1 mb        44475 ns        44336 ns         1024

scan avx         06 1 mb       330212 ns       330349 ns         1024
scan avx     noe 06 1 mb       458738 ns       458933 ns         1024
scan avx tbb     06 1 mb        67670 ns        67551 ns         1024
scan avx tbb noe 06 1 mb        69708 ns        68851 ns         1024
scan             06 1 mb       329804 ns       329944 ns         1024
scan         noe 06 1 mb       323730 ns       323790 ns         1024
scan     tbb     06 1 mb        88267 ns        87374 ns         1024
scan     tbb noe 06 1 mb       101367 ns       101283 ns         1024
scan avx         12 1 mb       327152 ns       327274 ns         1024
scan avx     noe 12 1 mb       457474 ns       457625 ns         1024
scan avx tbb     12 1 mb        68564 ns        68442 ns         1024
scan avx tbb noe 12 1 mb        66770 ns        66648 ns         1024
scan             12 1 mb       327578 ns       327719 ns         1024
scan         noe 12 1 mb       322983 ns       323103 ns         1024
scan     tbb     12 1 mb        87088 ns        86998 ns         1024
scan     tbb noe 12 1 mb       102866 ns       102849 ns         1024
scan avx         24 1 mb       327408 ns       327548 ns         1024
scan avx     noe 24 1 mb       457097 ns       457282 ns         1024
scan avx tbb     24 1 mb        69296 ns        69185 ns         1024
scan avx tbb noe 24 1 mb        67352 ns        67255 ns         1024
scan             24 1 mb       330010 ns       330147 ns         1024
scan         noe 24 1 mb       323482 ns       323606 ns         1024
scan     tbb     24 1 mb        85820 ns        85711 ns         1024
scan     tbb noe 24 1 mb       102577 ns       102524 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       218991 ns       218936 ns          512
find avx     noe 06 4 mb       225991 ns       225823 ns          512
find avx tbb     06 4 mb       226735 ns       226526 ns          512
find avx tbb noe 06 4 mb       206966 ns       206676 ns          512
find             06 4 mb      1712340 ns      1712476 ns          512
find         noe 06 4 mb      1686735 ns      1684763 ns          512
find     tbb     06 4 mb       322980 ns       322738 ns          512
find     tbb noe 06 4 mb       300121 ns       299934 ns          512
find avx         12 4 mb       228636 ns       228527 ns          512
find avx     noe 12 4 mb       223359 ns       223231 ns          512
find avx tbb     12 4 mb       219359 ns       219156 ns          512
find avx tbb noe 12 4 mb       203221 ns       202992 ns          512
find             12 4 mb       883594 ns       883747 ns          512
find         noe 12 4 mb       863763 ns       864003 ns          512
find     tbb     12 4 mb       276453 ns       276316 ns          512
find     tbb noe 12 4 mb       244397 ns       244202 ns          512
find avx         24 4 mb       277058 ns       276986 ns          512
find avx     noe 24 4 mb       263974 ns       263881 ns          512
find avx tbb     24 4 mb       231367 ns       231241 ns          512
find avx tbb noe 24 4 mb       225198 ns       225018 ns          512
find             24 4 mb       465189 ns       465197 ns          512
find         noe 24 4 mb       453838 ns       453840 ns          512
find     tbb     24 4 mb       262648 ns       262448 ns          512
find     tbb noe 24 4 mb       241589 ns       239953 ns          512

scan avx         06 4 mb      1307715 ns      1307872 ns          512
scan avx     noe 06 4 mb      1839355 ns      1839528 ns          512
scan avx tbb     06 4 mb       362361 ns       362159 ns          512
scan avx tbb noe 06 4 mb       326843 ns       326593 ns          512
scan             06 4 mb      1303869 ns      1304065 ns          512
scan         noe 06 4 mb      1307954 ns      1308089 ns          512
scan     tbb     06 4 mb       405499 ns       405213 ns          512
scan     tbb noe 06 4 mb       448354 ns       448161 ns          512
scan avx         12 4 mb      1327848 ns      1327847 ns          512
scan avx     noe 12 4 mb      1828694 ns      1828952 ns          512
scan avx tbb     12 4 mb       371661 ns       371547 ns          512
scan avx tbb noe 12 4 mb       350713 ns       350452 ns          512
scan             12 4 mb      1318759 ns      1318942 ns          512
scan         noe 12 4 mb      1291664 ns      1291884 ns          512
scan     tbb     12 4 mb       406965 ns       406720 ns          512
scan     tbb noe 12 4 mb       448635 ns       448492 ns          512
scan avx         24 4 mb      1306264 ns      1306443 ns          512
scan avx     noe 24 4 mb      1829132 ns      1829294 ns          512
scan avx tbb     24 4 mb       371997 ns       370143 ns          512
scan avx tbb noe 24 4 mb       336047 ns       335835 ns          512
scan             24 4 mb      1325046 ns      1325397 ns          512
scan         noe 24 4 mb      1296976 ns      1297163 ns          512
scan     tbb     24 4 mb       429898 ns       429717 ns          512
scan     tbb noe 24 4 mb       455794 ns       455576 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      810834 ns       810806 ns           64
find avx     noe 06 16 mb      848616 ns       848723 ns           64
find avx tbb     06 16 mb      680658 ns       680517 ns           64
find avx tbb noe 06 16 mb      684553 ns       684381 ns           64
find             06 16 mb     6789620 ns      6789567 ns           64
find         noe 06 16 mb     6726637 ns      6726298 ns           64
find     tbb     06 16 mb      917141 ns       917642 ns           64
find     tbb noe 06 16 mb      915531 ns       915394 ns           64
find avx         12 16 mb      864727 ns       864684 ns           64
find avx     noe 12 16 mb      847273 ns       847300 ns           64
find avx tbb     12 16 mb      700988 ns       694912 ns           64
find avx tbb noe 12 16 mb      683622 ns       683272 ns           64
find             12 16 mb     3468098 ns      3468016 ns           64
find         noe 12 16 mb     3431891 ns      3431788 ns           64
find     tbb     12 16 mb      775659 ns       775664 ns           64
find     tbb noe 12 16 mb      769569 ns       769541 ns           64
find avx         24 16 mb     1097914 ns      1097906 ns           64
find avx     noe 24 16 mb     1065358 ns      1065411 ns           64
find avx tbb     24 16 mb      701809 ns       701644 ns           64
find avx tbb noe 24 16 mb      692997 ns       692856 ns           64
find             24 16 mb     1850977 ns      1850758 ns           64
find         noe 24 16 mb     1799795 ns      1799745 ns           64
find     tbb     24 16 mb      738058 ns       737900 ns           64
find     tbb noe 24 16 mb      726834 ns       726656 ns           64

scan avx         06 16 mb     5282369 ns      5282173 ns           64
scan avx     noe 06 16 mb     7339927 ns      7339842 ns           64
scan avx tbb     06 16 mb     1098820 ns      1098983 ns           64
scan avx tbb noe 06 16 mb     1086908 ns      1086631 ns           64
scan             06 16 mb     5190506 ns      5190420 ns           64
scan         noe 06 16 mb     5143955 ns      5143894 ns           64
scan     tbb     06 16 mb     1313639 ns      1313617 ns           64
scan     tbb noe 06 16 mb     1608823 ns      1608455 ns           64
scan avx         12 16 mb     5230558 ns      5230527 ns           64
scan avx     noe 12 16 mb     7385125 ns      7385030 ns           64
scan avx tbb     12 16 mb     1088128 ns      1088309 ns           64
scan avx tbb noe 12 16 mb     1086764 ns      1086462 ns           64
scan             12 16 mb     5234156 ns      5234087 ns           64
scan         noe 12 16 mb     5157023 ns      5156997 ns           64
scan     tbb     12 16 mb     1293966 ns      1293706 ns           64
scan     tbb noe 12 16 mb     1607397 ns      1607022 ns           64
scan avx         24 16 mb     5271008 ns      5270936 ns           64
scan avx     noe 24 16 mb     7291094 ns      7291052 ns           64
scan avx tbb     24 16 mb     1096391 ns      1096059 ns           64
scan avx tbb noe 24 16 mb     1081677 ns      1081775 ns           64
scan             24 16 mb     5247577 ns      5247534 ns           64
scan         noe 24 16 mb     5150102 ns      5150055 ns           64
scan     tbb     24 16 mb     1292747 ns      1292916 ns           64
scan     tbb noe 24 16 mb     1595875 ns      1595488 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3424172 ns      3424066 ns           32
find avx     noe 06 64 mb     3389269 ns      3388975 ns           32
find avx tbb     06 64 mb     2445384 ns      2445169 ns           32
find avx tbb noe 06 64 mb     2436366 ns      2436106 ns           32
find             06 64 mb    26863853 ns     26863634 ns           32
find         noe 06 64 mb    26837466 ns     26816816 ns           32
find     tbb     06 64 mb     3068181 ns      3067966 ns           32
find     tbb noe 06 64 mb     3071516 ns      3071287 ns           32
find avx         12 64 mb     3395397 ns      3395363 ns           32
find avx     noe 12 64 mb     3413284 ns      3413209 ns           32
find avx tbb     12 64 mb     2458366 ns      2458309 ns           32
find avx tbb noe 12 64 mb     2442809 ns      2442513 ns           32
find             12 64 mb    13763825 ns     13763556 ns           32
find         noe 12 64 mb    13669778 ns     13669703 ns           32
find     tbb     12 64 mb     2614775 ns      2614491 ns           32
find     tbb noe 12 64 mb     2616441 ns      2616222 ns           32
find avx         24 64 mb     4188375 ns      4188384 ns           32
find avx     noe 24 64 mb     4141775 ns      4141731 ns           32
find avx tbb     24 64 mb     2475822 ns      2475641 ns           32
find avx tbb noe 24 64 mb     2476606 ns      2476431 ns           32
find             24 64 mb     7141587 ns      7141562 ns           32
find         noe 24 64 mb     7114291 ns      7114250 ns           32
find     tbb     24 64 mb     2536050 ns      2535597 ns           32
find     tbb noe 24 64 mb     2531153 ns      2487647 ns           32

scan avx         06 64 mb    20623569 ns     20623362 ns           32
scan avx     noe 06 64 mb    29414316 ns     29413822 ns           32
scan avx tbb     06 64 mb     3775922 ns      3753000 ns           32
scan avx tbb noe 06 64 mb     3758816 ns      3758603 ns           32
scan             06 64 mb    20605416 ns     20605141 ns           32
scan         noe 06 64 mb    20540316 ns     20539462 ns           32
scan     tbb     06 64 mb     4704356 ns      4703637 ns           32
scan     tbb noe 06 64 mb     5870369 ns      5853878 ns           32
scan avx         12 64 mb    20829234 ns     20829256 ns           32
scan avx     noe 12 64 mb    29195825 ns     29176319 ns           32
scan avx tbb     12 64 mb     3748784 ns      3748856 ns           32
scan avx tbb noe 12 64 mb     3759466 ns      3759238 ns           32
scan             12 64 mb    20667925 ns     20667859 ns           32
scan         noe 12 64 mb    20596263 ns     20574669 ns           32
scan     tbb     12 64 mb     4661987 ns      4660697 ns           32
scan     tbb noe 12 64 mb     5840894 ns      5831459 ns           32
scan avx         24 64 mb    20622284 ns     20622231 ns           32
scan avx     noe 24 64 mb    29197719 ns     29176522 ns           32
scan avx tbb     24 64 mb     3760787 ns      3761462 ns           32
scan avx tbb noe 24 64 mb     3753578 ns      3753328 ns           32
scan             24 64 mb    20650359 ns     20650066 ns           32
scan         noe 24 64 mb    20585878 ns     20584972 ns           32
scan     tbb     24 64 mb     4645256 ns      4645028 ns           32
scan     tbb noe 24 64 mb     5841637 ns      5842269 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13908275 ns     13908450 ns           16
find avx     noe 06 256 mb   13900256 ns     13900113 ns           16
find avx tbb     06 256 mb    9445506 ns      9295181 ns           16
find avx tbb noe 06 256 mb    9434662 ns      9434475 ns           16
find             06 256 mb  107479081 ns    107409694 ns           16
find         noe 06 256 mb  107400250 ns    107400144 ns           16
find     tbb     06 256 mb   11588131 ns     11537050 ns           16
find     tbb noe 06 256 mb   11663769 ns     11593969 ns           16
find avx         12 256 mb   13887150 ns     13887094 ns           16
find avx     noe 12 256 mb   14265069 ns     14264806 ns           16
find avx tbb     12 256 mb    9466394 ns      9466194 ns           16
find avx tbb noe 12 256 mb    9448681 ns      9446931 ns           16
find             12 256 mb   54597662 ns     54597263 ns           16
find         noe 12 256 mb   54529606 ns     54529094 ns           16
find     tbb     12 256 mb    9859156 ns      9859000 ns           16
find     tbb noe 12 256 mb    9897988 ns      9683831 ns           16
find avx         24 256 mb   16519225 ns     16518656 ns           16
find avx     noe 24 256 mb   16602875 ns     16602888 ns           16
find avx tbb     24 256 mb    9487300 ns      9487137 ns           16
find avx tbb noe 24 256 mb    9517419 ns      9517275 ns           16
find             24 256 mb   28388450 ns     28388313 ns           16
find         noe 24 256 mb   28402188 ns     28401825 ns           16
find     tbb     24 256 mb    9629156 ns      9628863 ns           16
find     tbb noe 24 256 mb    9630663 ns      9629906 ns           16

scan avx         06 256 mb   82353831 ns     82284456 ns           16
scan avx     noe 06 256 mb  116604281 ns    116535319 ns           16
scan avx tbb     06 256 mb   14395006 ns     14224288 ns           16
scan avx tbb noe 06 256 mb   14514369 ns     14321106 ns           16
scan             06 256 mb   82353962 ns     82284213 ns           16
scan         noe 06 256 mb   82223706 ns     82222819 ns           16
scan     tbb     06 256 mb   17873531 ns     17687306 ns           16
scan     tbb noe 06 256 mb   22816331 ns     22390550 ns           16
scan avx         12 256 mb   82259513 ns     82258900 ns           16
scan avx     noe 12 256 mb  117201356 ns    117131887 ns           16
scan avx tbb     12 256 mb   14427875 ns     14301481 ns           16
scan avx tbb noe 12 256 mb   14262750 ns     14141700 ns           16
scan             12 256 mb   82585212 ns     82585200 ns           16
scan         noe 12 256 mb   82334537 ns     82334487 ns           16
scan     tbb     12 256 mb   18063256 ns     17778131 ns           16
scan     tbb noe 12 256 mb   22513188 ns     22339275 ns           16
scan avx         24 256 mb   82427950 ns     82357769 ns           16
scan avx     noe 24 256 mb  116594044 ns    116518125 ns           16
scan avx tbb     24 256 mb   14585194 ns     14451869 ns           16
scan avx tbb noe 24 256 mb   14670450 ns     14403944 ns           16
scan             24 256 mb   82385012 ns     82384894 ns           16
scan         noe 24 256 mb   82112200 ns     82112194 ns           16
scan     tbb     24 256 mb   17956269 ns     17832800 ns           16
scan     tbb noe 24 256 mb   23226419 ns     22531144 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   27921800 ns     27920800 ns            8
find avx     noe 06 512 mb   28002163 ns     27859625 ns            8
find avx tbb     06 512 mb   18781737 ns     18781575 ns            8
find avx tbb noe 06 512 mb   18824362 ns     18823200 ns            8
find             06 512 mb  215318163 ns    215182287 ns            8
find         noe 06 512 mb  215218312 ns    215078963 ns            8
find     tbb     06 512 mb   23023300 ns     22725113 ns            8
find     tbb noe 06 512 mb   23230425 ns     22410562 ns            8
find avx         12 512 mb   27952700 ns     27952537 ns            8
find avx     noe 12 512 mb   28024200 ns     28023887 ns            8
find avx tbb     12 512 mb   18746388 ns     18745037 ns            8
find avx tbb noe 12 512 mb   18782213 ns     18782188 ns            8
find             12 512 mb  109259075 ns    109107725 ns            8
find         noe 12 512 mb  109238850 ns    109238137 ns            8
find     tbb     12 512 mb   19631663 ns     19471400 ns            8
find     tbb noe 12 512 mb   19542587 ns     19395550 ns            8
find avx         24 512 mb   33346762 ns     33346675 ns            8
find avx     noe 24 512 mb   33199275 ns     33198850 ns            8
find avx tbb     24 512 mb   18922437 ns     18922250 ns            8
find avx tbb noe 24 512 mb   18875463 ns     18873825 ns            8
find             24 512 mb   56663650 ns     56663162 ns            8
find         noe 24 512 mb   56632400 ns     56632000 ns            8
find     tbb     24 512 mb   19124875 ns     18726362 ns            8
find     tbb noe 24 512 mb   19184313 ns     19066075 ns            8

scan avx         06 512 mb  164749575 ns    164742575 ns            8
scan avx     noe 06 512 mb  233283162 ns    233133937 ns            8
scan avx tbb     06 512 mb   28914662 ns     28590263 ns            8
scan avx tbb noe 06 512 mb   28659563 ns     27561825 ns            8
scan             06 512 mb  164636388 ns    164491750 ns            8
scan         noe 06 512 mb  164645262 ns    164644613 ns            8
scan     tbb     06 512 mb   36069137 ns     35206575 ns            8
scan     tbb noe 06 512 mb   46502912 ns     45262163 ns            8
scan avx         12 512 mb  165481500 ns    165345913 ns            8
scan avx     noe 12 512 mb  233292188 ns    233142212 ns            8
scan avx tbb     12 512 mb   28939350 ns     28109475 ns            8
scan avx tbb noe 12 512 mb   29046875 ns     28377088 ns            8
scan             12 512 mb  165251862 ns    165108812 ns            8
scan         noe 12 512 mb  164462600 ns    164460950 ns            8
scan     tbb     12 512 mb   35679763 ns     34864988 ns            8
scan     tbb noe 12 512 mb   45131950 ns     42004750 ns            8
scan avx         24 512 mb  164645563 ns    164644913 ns            8
scan avx     noe 24 512 mb  233481400 ns    233335250 ns            8
scan avx tbb     24 512 mb   28313500 ns     28162937 ns            8
scan avx tbb noe 24 512 mb   28926763 ns     28086088 ns            8
scan             24 512 mb  164815987 ns    164678462 ns            8
scan         noe 24 512 mb  164537163 ns    164535900 ns            8
scan     tbb     24 512 mb   35791062 ns     35102337 ns            8
scan     tbb noe 24 512 mb   46345550 ns     44302100 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     55767100 ns     55691875 ns            8
find avx     noe 06 1 gb     58038125 ns     58037525 ns            8
find avx tbb     06 1 gb     37627787 ns     37336825 ns            8
find avx tbb noe 06 1 gb     37490950 ns     37245488 ns            8
find             06 1 gb    430433612 ns    430297263 ns            8
find         noe 06 1 gb    429592662 ns    429590400 ns            8
find     tbb     06 1 gb     46140562 ns     44453400 ns            8
find     tbb noe 06 1 gb     46041700 ns     42861213 ns            8
find avx         12 1 gb     55900087 ns     55899850 ns            8
find avx     noe 12 1 gb     56513000 ns     56377838 ns            8
find avx tbb     12 1 gb     37441237 ns     36676500 ns            8
find avx tbb noe 12 1 gb     37463863 ns     36926762 ns            8
find             12 1 gb    218618100 ns    218481012 ns            8
find         noe 12 1 gb    218543475 ns    218402350 ns            8
find     tbb     12 1 gb     39005363 ns     38248763 ns            8
find     tbb noe 12 1 gb     38834825 ns     37774437 ns            8
find avx         24 1 gb     66540750 ns     66539913 ns            8
find avx     noe 24 1 gb     66376387 ns     66241925 ns            8
find avx tbb     24 1 gb     37647288 ns     37646450 ns            8
find avx tbb noe 24 1 gb     37759675 ns     36977937 ns            8
find             24 1 gb    113576600 ns    113575475 ns            8
find         noe 24 1 gb    113443750 ns    113442638 ns            8
find     tbb     24 1 gb     38175887 ns     37896163 ns            8
find     tbb noe 24 1 gb     38051887 ns     37608088 ns            8

scan avx         06 1 gb    329577413 ns    329433387 ns            8
scan avx     noe 06 1 gb    466545800 ns    466399863 ns            8
scan avx tbb     06 1 gb     58478388 ns     54943075 ns            8
scan avx tbb noe 06 1 gb     58696938 ns     54751575 ns            8
scan             06 1 gb    329604088 ns    329464100 ns            8
scan         noe 06 1 gb    329202050 ns    329060900 ns            8
scan     tbb     06 1 gb     70986587 ns     69299838 ns            8
scan     tbb noe 06 1 gb     93524913 ns     84580475 ns            8
scan avx         12 1 gb    330235863 ns    330095488 ns            8
scan avx     noe 12 1 gb    466184200 ns    466039262 ns            8
scan avx tbb     12 1 gb     57046125 ns     54320700 ns            8
scan avx tbb noe 12 1 gb     57852925 ns     55002175 ns            8
scan             12 1 gb    329475437 ns    329338513 ns            8
scan         noe 12 1 gb    329151750 ns    329008650 ns            8
scan     tbb     12 1 gb     71237125 ns     69173775 ns            8
scan     tbb noe 12 1 gb     91731788 ns     83369363 ns            8
scan avx         24 1 gb    330381737 ns    330381850 ns            8
scan avx     noe 24 1 gb    466419937 ns    466273987 ns            8
scan avx tbb     24 1 gb     57386263 ns     55666325 ns            8
scan avx tbb noe 24 1 gb     58715000 ns     55434288 ns            8
scan             24 1 gb    329539263 ns    329397725 ns            8
scan         noe 24 1 gb    329938612 ns    329802425 ns            8
scan     tbb     24 1 gb     71242475 ns     69053350 ns            8
scan     tbb noe 24 1 gb     92564338 ns     85222612 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    112132913 ns    112131425 ns            8
find avx     noe 06 2 gb    113008275 ns    113006825 ns            8
find avx tbb     06 2 gb     74857450 ns     73463537 ns            8
find avx tbb noe 06 2 gb     74844050 ns     73089237 ns            8
find             06 2 gb    859165975 ns    859030138 ns            8
find         noe 06 2 gb    859899287 ns    859772550 ns            8
find     tbb     06 2 gb     91771850 ns     83221325 ns            8
find     tbb noe 06 2 gb     92004938 ns     84829650 ns            8
find avx         12 2 gb    112705038 ns    112704150 ns            8
find avx     noe 12 2 gb    112590012 ns    112458338 ns            8
find avx tbb     12 2 gb     74850462 ns     73714613 ns            8
find avx tbb noe 12 2 gb     74877100 ns     72799688 ns            8
find             12 2 gb    436466475 ns    436464113 ns            8
find         noe 12 2 gb    436875925 ns    436873587 ns            8
find     tbb     12 2 gb     77842163 ns     75947013 ns            8
find     tbb noe 12 2 gb     77705400 ns     75158625 ns            8
find avx         24 2 gb    133521137 ns    133520862 ns            8
find avx     noe 24 2 gb    132771425 ns    132635937 ns            8
find avx tbb     24 2 gb     75337500 ns     74434625 ns            8
find avx tbb noe 24 2 gb     75333013 ns     74439062 ns            8
find             24 2 gb    227054550 ns    226921213 ns            8
find         noe 24 2 gb    227164625 ns    227028075 ns            8
find     tbb     24 2 gb     76141987 ns     76142000 ns            8
find     tbb noe 24 2 gb     76073137 ns     73025913 ns            8

scan avx         06 2 gb    658537387 ns    658404525 ns            8
scan avx     noe 06 2 gb    932404312 ns    932276275 ns            8
scan avx tbb     06 2 gb    118235875 ns    105152987 ns            8
scan avx tbb noe 06 2 gb    119571975 ns    103483687 ns            8
scan             06 2 gb    659195375 ns    659064500 ns            8
scan         noe 06 2 gb    658445812 ns    658313838 ns            8
scan     tbb     06 2 gb    140906913 ns    138338888 ns            8
scan     tbb noe 06 2 gb    181033213 ns    167863975 ns            8
scan avx         12 2 gb    659869125 ns    659725825 ns            8
scan avx     noe 12 2 gb    933353213 ns    933217887 ns            8
scan avx tbb     12 2 gb    115811437 ns    105005463 ns            8
scan avx tbb noe 12 2 gb    118313800 ns    106526675 ns            8
scan             12 2 gb    659399563 ns    659399538 ns            8
scan         noe 12 2 gb    658346475 ns    658216400 ns            8
scan     tbb     12 2 gb    142084750 ns    139062837 ns            8
scan     tbb noe 12 2 gb    185780962 ns    164038588 ns            8
scan avx         24 2 gb    659094962 ns    659095125 ns            8
scan avx     noe 24 2 gb    932471025 ns    932343463 ns            8
scan avx tbb     24 2 gb    117339675 ns    105437925 ns            8
scan avx tbb noe 24 2 gb    118122025 ns    107886437 ns            8
scan             24 2 gb    660215350 ns    660084600 ns            8
scan         noe 24 2 gb    658281013 ns    658281037 ns            8
scan     tbb     24 2 gb    142346725 ns    138086925 ns            8
scan     tbb noe 24 2 gb    184595662 ns    169585387 ns            8
```

</details>

