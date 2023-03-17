# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1054 ns         1040 ns         4096
find avx tbb 06 16 kb        1065 ns         1052 ns         4096
find         06 16 kb        7418 ns         7456 ns         4096
find     tbb 06 16 kb        8605 ns         8656 ns         4096
find avx     12 16 kb        1104 ns         1108 ns         4096
find avx tbb 12 16 kb        1122 ns         1118 ns         4096
find         12 16 kb        4271 ns         4312 ns         4096
find     tbb 12 16 kb        8058 ns         8102 ns         4096
find avx     24 16 kb        1335 ns         1335 ns         4096
find avx tbb 24 16 kb        1327 ns         1325 ns         4096
find         24 16 kb        2681 ns         2709 ns         4096
find     tbb 24 16 kb        7569 ns         7608 ns         4096

scan avx     06 16 kb        6342 ns         6381 ns         4096
scan avx tbb 06 16 kb        6288 ns         6319 ns         4096
scan         06 16 kb        8294 ns         8347 ns         4096
scan     tbb 06 16 kb        7031 ns         7076 ns         4096
scan avx     12 16 kb        6119 ns         6167 ns         4096
scan avx tbb 12 16 kb        6114 ns         6160 ns         4096
scan         12 16 kb        8334 ns         8384 ns         4096
scan     tbb 12 16 kb        7095 ns         7099 ns         4096
scan avx     24 16 kb        6121 ns         6165 ns         4096
scan avx tbb 24 16 kb        6114 ns         6159 ns         4096
scan         24 16 kb        8304 ns         8362 ns         4096
scan     tbb 24 16 kb        8632 ns         8688 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2589 ns         2591 ns         4096
find avx tbb 06 64 kb        2434 ns         2423 ns         4096
find         06 64 kb       28326 ns        28378 ns         4096
find     tbb 06 64 kb       10899 ns        10936 ns         4096
find avx     12 64 kb        2476 ns         2436 ns         4096
find avx tbb 12 64 kb        2435 ns         2446 ns         4096
find         12 64 kb       14579 ns        14619 ns         4096
find     tbb 12 64 kb        9401 ns         9430 ns         4096
find avx     24 64 kb        3009 ns         3015 ns         4096
find avx tbb 24 64 kb        2794 ns         2787 ns         4096
find         24 64 kb        7681 ns         7727 ns         4096
find     tbb 24 64 kb        8532 ns         8580 ns         4096

scan avx     06 64 kb       21934 ns        21986 ns         4096
scan avx tbb 06 64 kb       21820 ns        21881 ns         4096
scan         06 64 kb       29058 ns        29114 ns         4096
scan     tbb 06 64 kb       10981 ns        11015 ns         4096
scan avx     12 64 kb       21346 ns        21428 ns         4096
scan avx tbb 12 64 kb       22014 ns        22066 ns         4096
scan         12 64 kb       30438 ns        30495 ns         4096
scan     tbb 12 64 kb       11032 ns        11071 ns         4096
scan avx     24 64 kb       21136 ns        21192 ns         4096
scan avx tbb 24 64 kb       21853 ns        21904 ns         4096
scan         24 64 kb       29262 ns        29302 ns         4096
scan     tbb 24 64 kb       10909 ns        10956 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7843 ns         7830 ns         2048
find avx tbb 06 256 kb       7760 ns         7760 ns         2048
find         06 256 kb     108138 ns       108201 ns         2048
find     tbb 06 256 kb      26153 ns        25646 ns         2048
find avx     12 256 kb       7828 ns         7841 ns         2048
find avx tbb 12 256 kb       8050 ns         8043 ns         2048
find         12 256 kb      56897 ns        56957 ns         2048
find     tbb 12 256 kb      15460 ns        15392 ns         2048
find avx     24 256 kb       9401 ns         9384 ns         2048
find avx tbb 24 256 kb       8513 ns         8514 ns         2048
find         24 256 kb      29140 ns        29183 ns         2048
find     tbb 24 256 kb      13053 ns        12990 ns         2048

scan avx     06 256 kb      80723 ns        80790 ns         2048
scan avx tbb 06 256 kb      83524 ns        83607 ns         2048
scan         06 256 kb     114715 ns       114792 ns         2048
scan     tbb 06 256 kb      28313 ns        28261 ns         2048
scan avx     12 256 kb      83972 ns        84015 ns         2048
scan avx tbb 12 256 kb      80585 ns        80647 ns         2048
scan         12 256 kb     114855 ns       114934 ns         2048
scan     tbb 12 256 kb      27463 ns        27374 ns         2048
scan avx     24 256 kb      84396 ns        84458 ns         2048
scan avx tbb 24 256 kb      80515 ns        80580 ns         2048
scan         24 256 kb     114123 ns       114192 ns         2048
scan     tbb 24 256 kb      27012 ns        26922 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        57117 ns        57158 ns         1024
find avx tbb 06 1 mb        41672 ns        41540 ns         1024
find         06 1 mb       431002 ns       431173 ns         1024
find     tbb 06 1 mb        55994 ns        55901 ns         1024
find avx     12 1 mb        56429 ns        56436 ns         1024
find avx tbb 12 1 mb        41475 ns        41318 ns         1024
find         12 1 mb       225364 ns       225430 ns         1024
find     tbb 12 1 mb        48996 ns        49028 ns         1024
find avx     24 1 mb        59592 ns        59578 ns         1024
find avx tbb 24 1 mb        42268 ns        42101 ns         1024
find         24 1 mb       120316 ns       120360 ns         1024
find     tbb 24 1 mb        43552 ns        43443 ns         1024

scan avx     06 1 mb       335083 ns       335217 ns         1024
scan avx tbb 06 1 mb        63982 ns        63899 ns         1024
scan         06 1 mb       467692 ns       467847 ns         1024
scan     tbb 06 1 mb        88868 ns        88775 ns         1024
scan avx     12 1 mb       334063 ns       334200 ns         1024
scan avx tbb 12 1 mb        68262 ns        68177 ns         1024
scan         12 1 mb       460210 ns       460369 ns         1024
scan     tbb 12 1 mb        88875 ns        88777 ns         1024
scan avx     24 1 mb       328150 ns       328256 ns         1024
scan avx tbb 24 1 mb        66789 ns        66692 ns         1024
scan         24 1 mb       461159 ns       461348 ns         1024
scan     tbb 24 1 mb        84375 ns        84283 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       205225 ns       205114 ns          512
find avx tbb 06 4 mb       220392 ns       220320 ns          512
find         06 4 mb      1716080 ns      1716222 ns          512
find     tbb 06 4 mb       303076 ns       303065 ns          512
find avx     12 4 mb       218433 ns       218300 ns          512
find avx tbb 12 4 mb       225043 ns       224957 ns          512
find         12 4 mb       878811 ns       878276 ns          512
find     tbb 12 4 mb       270201 ns       270192 ns          512
find avx     24 4 mb       227888 ns       227809 ns          512
find avx tbb 24 4 mb       224058 ns       223991 ns          512
find         24 4 mb       461898 ns       461895 ns          512
find     tbb 24 4 mb       251845 ns       251811 ns          512

scan avx     06 4 mb      1308808 ns      1308953 ns          512
scan avx tbb 06 4 mb       333754 ns       333759 ns          512
scan         06 4 mb      1833552 ns      1833688 ns          512
scan     tbb 06 4 mb       410458 ns       410473 ns          512
scan avx     12 4 mb      1295055 ns      1295282 ns          512
scan avx tbb 12 4 mb       339641 ns       339598 ns          512
scan         12 4 mb      1835549 ns      1835712 ns          512
scan     tbb 12 4 mb       410644 ns       410563 ns          512
scan avx     24 4 mb      1306645 ns      1306835 ns          512
scan avx tbb 24 4 mb       344071 ns       343964 ns          512
scan         24 4 mb      1839488 ns      1839664 ns          512
scan     tbb 24 4 mb       401228 ns       401252 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      815416 ns       815220 ns           64
find avx tbb 06 16 mb      675328 ns       675314 ns           64
find         06 16 mb     6816573 ns      6816614 ns           64
find     tbb 06 16 mb      856130 ns       856031 ns           64
find avx     12 16 mb      855089 ns       855005 ns           64
find avx tbb 12 16 mb      680925 ns       681128 ns           64
find         12 16 mb     3497017 ns      3496973 ns           64
find     tbb 12 16 mb      753122 ns       753292 ns           64
find avx     24 16 mb      895666 ns       895600 ns           64
find avx tbb 24 16 mb      691102 ns       691112 ns           64
find         24 16 mb     1885603 ns      1885572 ns           64
find     tbb 24 16 mb      725244 ns       725253 ns           64

scan avx     06 16 mb     5237944 ns      5237855 ns           64
scan avx tbb 06 16 mb     1040638 ns      1040625 ns           64
scan         06 16 mb     7362658 ns      7362628 ns           64
scan     tbb 06 16 mb     1395964 ns      1395773 ns           64
scan avx     12 16 mb     5258231 ns      5258212 ns           64
scan avx tbb 12 16 mb     1100691 ns      1100612 ns           64
scan         12 16 mb     7926838 ns      7926836 ns           64
scan     tbb 12 16 mb     1397623 ns      1397691 ns           64
scan avx     24 16 mb     5242656 ns      5242670 ns           64
scan avx tbb 24 16 mb     1043277 ns      1043264 ns           64
scan         24 16 mb     7434073 ns      7434055 ns           64
scan     tbb 24 16 mb     1362769 ns      1362798 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3261828 ns      3261728 ns           32
find avx tbb 06 64 mb     2419378 ns      2419841 ns           32
find         06 64 mb    26931228 ns     26930903 ns           32
find     tbb 06 64 mb     2901138 ns      2901406 ns           32
find avx     12 64 mb     3177109 ns      3177006 ns           32
find avx tbb 12 64 mb     2424547 ns      2425053 ns           32
find         12 64 mb    13699566 ns     13699525 ns           32
find     tbb 12 64 mb     2551384 ns      2551319 ns           32
find avx     24 64 mb     3418466 ns      3418366 ns           32
find avx tbb 24 64 mb     2441894 ns      2442172 ns           32
find         24 64 mb     7175931 ns      7175956 ns           32
find     tbb 24 64 mb     2502087 ns      2484838 ns           32

scan avx     06 64 mb    20597762 ns     20597462 ns           32
scan avx tbb 06 64 mb     3634409 ns      3634319 ns           32
scan         06 64 mb    29213688 ns     29202050 ns           32
scan     tbb 06 64 mb     5005406 ns      5005269 ns           32
scan avx     12 64 mb    20609400 ns     20609128 ns           32
scan avx tbb 12 64 mb     3658009 ns      3657859 ns           32
scan         12 64 mb    29250706 ns     29240259 ns           32
scan     tbb 12 64 mb     5083738 ns      5083616 ns           32
scan avx     24 64 mb    20756816 ns     20756722 ns           32
scan avx tbb 24 64 mb     3658837 ns      3658734 ns           32
scan         24 64 mb    29162037 ns     29151750 ns           32
scan     tbb 24 64 mb     4904316 ns      4902534 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12598981 ns     12598838 ns           16
find avx tbb 06 256 mb    9403938 ns      9403931 ns           16
find         06 256 mb  107369537 ns    107369294 ns           16
find     tbb 06 256 mb   11202762 ns     11075800 ns           16
find avx     12 256 mb   12850713 ns     12850531 ns           16
find avx tbb 12 256 mb    9377487 ns      9377319 ns           16
find         12 256 mb   54836219 ns     54783169 ns           16
find     tbb 12 256 mb    9665869 ns      9665694 ns           16
find avx     24 256 mb   13556331 ns     13556269 ns           16
find avx tbb 24 256 mb    9441412 ns      9441281 ns           16
find         24 256 mb   29123181 ns     29067506 ns           16
find     tbb 24 256 mb    9638312 ns      9638119 ns           16

scan avx     06 256 mb   82435944 ns     82379744 ns           16
scan avx tbb 06 256 mb   13952700 ns     13926425 ns           16
scan         06 256 mb  116565619 ns    116565594 ns           16
scan     tbb 06 256 mb   19547319 ns     19296400 ns           16
scan avx     12 256 mb   82415356 ns     82362300 ns           16
scan avx tbb 12 256 mb   13982200 ns     13916369 ns           16
scan         12 256 mb  116891437 ns    116891287 ns           16
scan     tbb 12 256 mb   19682481 ns     19495969 ns           16
scan avx     24 256 mb   82385356 ns     82330069 ns           16
scan avx tbb 24 256 mb   14024869 ns     13958788 ns           16
scan         24 256 mb  116694994 ns    116643031 ns           16
scan     tbb 24 256 mb   18717819 ns     18521675 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25246512 ns     25246400 ns            8
find avx tbb 06 512 mb   18715100 ns     18715088 ns            8
find         06 512 mb  216828812 ns    216816037 ns            8
find     tbb 06 512 mb   21513100 ns     21187300 ns            8
find avx     12 512 mb   25089512 ns     25089388 ns            8
find avx tbb 12 512 mb   18667000 ns     18667137 ns            8
find         12 512 mb  109513550 ns    109402513 ns            8
find     tbb 12 512 mb   19139463 ns     19079937 ns            8
find avx     24 512 mb   27229288 ns     27227987 ns            8
find avx tbb 24 512 mb   18743850 ns     18701800 ns            8
find         24 512 mb   57417875 ns     57314200 ns            8
find     tbb 24 512 mb   19000875 ns     19000937 ns            8

scan avx     06 512 mb  164647387 ns    164646362 ns            8
scan avx tbb 06 512 mb   28071650 ns     27666613 ns            8
scan         06 512 mb  233075100 ns    232969738 ns            8
scan     tbb 06 512 mb   38834487 ns     37783450 ns            8
scan avx     12 512 mb  164703688 ns    164703788 ns            8
scan avx tbb 12 512 mb   28053537 ns     27708550 ns            8
scan         12 512 mb  232652675 ns    232544062 ns            8
scan     tbb 12 512 mb   39393913 ns     37883138 ns            8
scan avx     24 512 mb  164842125 ns    164842075 ns            8
scan avx tbb 24 512 mb   27976387 ns     27655462 ns            8
scan         24 512 mb  233212463 ns    233100600 ns            8
scan     tbb 24 512 mb   37455925 ns     36857512 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50339375 ns     50289925 ns            8
find avx tbb 06 1 gb     37234550 ns     37234437 ns            8
find         06 1 gb    428966363 ns    428865900 ns            8
find     tbb 06 1 gb     42710950 ns     41938350 ns            8
find avx     12 1 gb     50601613 ns     50492413 ns            8
find avx tbb 12 1 gb     37245800 ns     37208350 ns            8
find         12 1 gb    219029550 ns    218921012 ns            8
find     tbb 12 1 gb     38614275 ns     37166600 ns            8
find avx     24 1 gb     54277362 ns     54277112 ns            8
find avx tbb 24 1 gb     37415650 ns     37415950 ns            8
find         24 1 gb    114210737 ns    114210638 ns            8
find     tbb 24 1 gb     37975750 ns     37975862 ns            8

scan avx     06 1 gb    329733675 ns    329629188 ns            8
scan avx tbb 06 1 gb     55320850 ns     54775613 ns            8
scan         06 1 gb    466597050 ns    466492950 ns            8
scan     tbb 06 1 gb     76434400 ns     74985000 ns            8
scan avx     12 1 gb    329380363 ns    329380612 ns            8
scan avx tbb 12 1 gb     55297438 ns     54149113 ns            8
scan         12 1 gb    466537975 ns    466434863 ns            8
scan     tbb 12 1 gb     77647150 ns     75194287 ns            8
scan avx     24 1 gb    329171400 ns    329171638 ns            8
scan avx tbb 24 1 gb     55641788 ns     54604362 ns            8
scan         24 1 gb    465873425 ns    465774237 ns            8
scan     tbb 24 1 gb     74485825 ns     71279237 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    102426788 ns    102424712 ns            8
find avx tbb 06 2 gb     74571600 ns     73795212 ns            8
find         06 2 gb    859169038 ns    859060138 ns            8
find     tbb 06 2 gb     86818100 ns     85159288 ns            8
find avx     12 2 gb    101568788 ns    101568300 ns            8
find avx tbb 12 2 gb     74480100 ns     73133212 ns            8
find         12 2 gb    438162850 ns    438162925 ns            8
find     tbb 12 2 gb     75939525 ns     75182150 ns            8
find avx     24 2 gb    109086325 ns    109086350 ns            8
find avx tbb 24 2 gb     74756725 ns     73758650 ns            8
find         24 2 gb    228944675 ns    228845175 ns            8
find     tbb 24 2 gb     75889637 ns     75277375 ns            8

scan avx     06 2 gb    659268800 ns    659161550 ns            8
scan avx tbb 06 2 gb    110918563 ns    106596613 ns            8
scan         06 2 gb    933617762 ns    933511188 ns            8
scan     tbb 06 2 gb    152926112 ns    148329700 ns            8
scan avx     12 2 gb    660410900 ns    660310400 ns            8
scan avx tbb 12 2 gb    110255650 ns    109519550 ns            8
scan         12 2 gb    931392050 ns    931382237 ns            8
scan     tbb 12 2 gb    157510500 ns    148497950 ns            8
scan avx     24 2 gb    660198912 ns    660097787 ns            8
scan avx tbb 24 2 gb    110346013 ns    105638900 ns            8
scan         24 2 gb    932169200 ns    932070188 ns            8
scan     tbb 24 2 gb    150372200 ns    145014163 ns            8
```

</details>

