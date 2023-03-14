# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1127 ns         1128 ns         4096
find avx     noe 06 16 kb        1135 ns         1121 ns         4096
find avx tbb     06 16 kb        1155 ns         1148 ns         4096
find avx tbb noe 06 16 kb        1163 ns         1149 ns         4096
find             06 16 kb        7818 ns         7853 ns         4096
find         noe 06 16 kb        7826 ns         7858 ns         4096
find     tbb     06 16 kb        6869 ns         6893 ns         4096
find     tbb noe 06 16 kb        6867 ns         6886 ns         4096
find avx         12 16 kb        1169 ns         1150 ns         4096
find avx     noe 12 16 kb        1156 ns         1134 ns         4096
find avx tbb     12 16 kb        1173 ns         1164 ns         4096
find avx tbb noe 12 16 kb        1157 ns         1155 ns         4096
find             12 16 kb        4446 ns         4486 ns         4096
find         noe 12 16 kb        4361 ns         4388 ns         4096
find     tbb     12 16 kb        6408 ns         6437 ns         4096
find     tbb noe 12 16 kb        6272 ns         6309 ns         4096
find avx         24 16 kb        1636 ns         1626 ns         4096
find avx     noe 24 16 kb        1640 ns         1633 ns         4096
find avx tbb     24 16 kb        1647 ns         1634 ns         4096
find avx tbb noe 24 16 kb        1642 ns         1629 ns         4096
find             24 16 kb        2640 ns         2663 ns         4096
find         noe 24 16 kb        2647 ns         2679 ns         4096
find     tbb     24 16 kb        6207 ns         6247 ns         4096
find     tbb noe 24 16 kb        6247 ns         6272 ns         4096

scan avx         06 16 kb        6331 ns         6402 ns         4096
scan avx     noe 06 16 kb        6259 ns         6296 ns         4096
scan avx tbb     06 16 kb        6090 ns         6174 ns         4096
scan avx tbb noe 06 16 kb        6249 ns         6252 ns         4096
scan             06 16 kb        5922 ns         5963 ns         4096
scan         noe 06 16 kb        5747 ns         5783 ns         4096
scan     tbb     06 16 kb        6173 ns         6205 ns         4096
scan     tbb noe 06 16 kb        6240 ns         6278 ns         4096
scan avx         12 16 kb        6020 ns         6075 ns         4096
scan avx     noe 12 16 kb        5838 ns         5884 ns         4096
scan avx tbb     12 16 kb        5833 ns         5876 ns         4096
scan avx tbb noe 12 16 kb        6039 ns         6081 ns         4096
scan             12 16 kb        6060 ns         6106 ns         4096
scan         noe 12 16 kb        6134 ns         6172 ns         4096
scan     tbb     12 16 kb        6032 ns         6073 ns         4096
scan     tbb noe 12 16 kb        6093 ns         6121 ns         4096
scan avx         24 16 kb        6094 ns         6147 ns         4096
scan avx     noe 24 16 kb        6102 ns         6119 ns         4096
scan avx tbb     24 16 kb        6147 ns         6179 ns         4096
scan avx tbb noe 24 16 kb        6174 ns         6218 ns         4096
scan             24 16 kb        6116 ns         6147 ns         4096
scan         noe 24 16 kb        5796 ns         5842 ns         4096
scan     tbb     24 16 kb        6173 ns         6207 ns         4096
scan     tbb noe 24 16 kb        6026 ns         6063 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2647 ns         2643 ns         4096
find avx     noe 06 64 kb        2522 ns         2530 ns         4096
find avx tbb     06 64 kb        2552 ns         2547 ns         4096
find avx tbb noe 06 64 kb        2440 ns         2464 ns         4096
find             06 64 kb       28347 ns        28432 ns         4096
find         noe 06 64 kb       27097 ns        27172 ns         4096
find     tbb     06 64 kb        9219 ns         9252 ns         4096
find     tbb noe 06 64 kb        9498 ns         9531 ns         4096
find avx         12 64 kb        2595 ns         2641 ns         4096
find avx     noe 12 64 kb        2613 ns         2621 ns         4096
find avx tbb     12 64 kb        2578 ns         2586 ns         4096
find avx tbb noe 12 64 kb        2454 ns         2454 ns         4096
find             12 64 kb       14032 ns        14094 ns         4096
find         noe 12 64 kb       13971 ns        14026 ns         4096
find     tbb     12 64 kb        7830 ns         7858 ns         4096
find     tbb noe 12 64 kb        7737 ns         7751 ns         4096
find avx         24 64 kb        4062 ns         4042 ns         4096
find avx     noe 24 64 kb        4006 ns         3986 ns         4096
find avx tbb     24 64 kb        4426 ns         4427 ns         4096
find avx tbb noe 24 64 kb        4116 ns         4128 ns         4096
find             24 64 kb        7994 ns         8032 ns         4096
find         noe 24 64 kb        7887 ns         7941 ns         4096
find     tbb     24 64 kb        7381 ns         7409 ns         4096
find     tbb noe 24 64 kb        7081 ns         7111 ns         4096

scan avx         06 64 kb       21563 ns        21630 ns         4096
scan avx     noe 06 64 kb       22039 ns        22109 ns         4096
scan avx tbb     06 64 kb       20588 ns        20668 ns         4096
scan avx tbb noe 06 64 kb       20646 ns        20703 ns         4096
scan             06 64 kb       20569 ns        20636 ns         4096
scan         noe 06 64 kb       20826 ns        20919 ns         4096
scan     tbb     06 64 kb        9279 ns         9315 ns         4096
scan     tbb noe 06 64 kb        9174 ns         9206 ns         4096
scan avx         12 64 kb       21695 ns        21746 ns         4096
scan avx     noe 12 64 kb       20726 ns        20790 ns         4096
scan avx tbb     12 64 kb       20653 ns        20716 ns         4096
scan avx tbb noe 12 64 kb       20735 ns        20798 ns         4096
scan             12 64 kb       20656 ns        20722 ns         4096
scan         noe 12 64 kb       20629 ns        20710 ns         4096
scan     tbb     12 64 kb        9267 ns         9292 ns         4096
scan     tbb noe 12 64 kb        9146 ns         9182 ns         4096
scan avx         24 64 kb       21883 ns        21975 ns         4096
scan avx     noe 24 64 kb       21311 ns        21392 ns         4096
scan avx tbb     24 64 kb       20685 ns        20756 ns         4096
scan avx tbb noe 24 64 kb       20849 ns        20921 ns         4096
scan             24 64 kb       20608 ns        20677 ns         4096
scan         noe 24 64 kb       20848 ns        20923 ns         4096
scan     tbb     24 64 kb        9290 ns         9314 ns         4096
scan     tbb noe 24 64 kb        9101 ns         9126 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8695 ns         8681 ns         2048
find avx     noe 06 256 kb       8149 ns         8146 ns         2048
find avx tbb     06 256 kb       8069 ns         8061 ns         2048
find avx tbb noe 06 256 kb       8045 ns         8051 ns         2048
find             06 256 kb     105902 ns       106003 ns         2048
find         noe 06 256 kb     105214 ns       105307 ns         2048
find     tbb     06 256 kb      20441 ns        20351 ns         2048
find     tbb noe 06 256 kb      19937 ns        19838 ns         2048
find avx         12 256 kb       8511 ns         8507 ns         2048
find avx     noe 12 256 kb       7980 ns         7975 ns         2048
find avx tbb     12 256 kb       7693 ns         7693 ns         2048
find avx tbb noe 12 256 kb       7747 ns         7746 ns         2048
find             12 256 kb      53499 ns        53559 ns         2048
find         noe 12 256 kb      53382 ns        53473 ns         2048
find     tbb     12 256 kb      14070 ns        13956 ns         2048
find     tbb noe 12 256 kb      15261 ns        15192 ns         2048
find avx         24 256 kb      14654 ns        14672 ns         2048
find avx     noe 24 256 kb      13301 ns        13285 ns         2048
find avx tbb     24 256 kb      13431 ns        13436 ns         2048
find avx tbb noe 24 256 kb      13408 ns        13411 ns         2048
find             24 256 kb      27603 ns        27668 ns         2048
find         noe 24 256 kb      27846 ns        27913 ns         2048
find     tbb     24 256 kb      11518 ns        11419 ns         2048
find     tbb noe 24 256 kb      11421 ns        11333 ns         2048

scan avx         06 256 kb      83553 ns        83643 ns         2048
scan avx     noe 06 256 kb      81715 ns        81773 ns         2048
scan avx tbb     06 256 kb      80382 ns        80456 ns         2048
scan avx tbb noe 06 256 kb      80511 ns        80579 ns         2048
scan             06 256 kb      80061 ns        80119 ns         2048
scan         noe 06 256 kb      81402 ns        81465 ns         2048
scan     tbb     06 256 kb      22389 ns        22294 ns         2048
scan     tbb noe 06 256 kb      22235 ns        22149 ns         2048
scan avx         12 256 kb      82944 ns        83006 ns         2048
scan avx     noe 12 256 kb      80697 ns        80778 ns         2048
scan avx tbb     12 256 kb      80447 ns        80535 ns         2048
scan avx tbb noe 12 256 kb      80486 ns        80554 ns         2048
scan             12 256 kb      80221 ns        80279 ns         2048
scan         noe 12 256 kb      81605 ns        81671 ns         2048
scan     tbb     12 256 kb      21971 ns        21876 ns         2048
scan     tbb noe 12 256 kb      22412 ns        22324 ns         2048
scan avx         24 256 kb      82540 ns        82626 ns         2048
scan avx     noe 24 256 kb      80519 ns        80596 ns         2048
scan avx tbb     24 256 kb      80436 ns        80498 ns         2048
scan avx tbb noe 24 256 kb      80380 ns        80457 ns         2048
scan             24 256 kb      81119 ns        81199 ns         2048
scan         noe 24 256 kb      80563 ns        80629 ns         2048
scan     tbb     24 256 kb      21799 ns        21679 ns         2048
scan     tbb noe 24 256 kb      21919 ns        21812 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        55400 ns        55413 ns         1024
find avx     noe 06 1 mb        54294 ns        54306 ns         1024
find avx tbb     06 1 mb        42727 ns        42546 ns         1024
find avx tbb noe 06 1 mb        40657 ns        40518 ns         1024
find             06 1 mb       427423 ns       427598 ns         1024
find         noe 06 1 mb       424268 ns       424452 ns         1024
find     tbb     06 1 mb        56890 ns        56768 ns         1024
find     tbb noe 06 1 mb        54067 ns        53970 ns         1024
find avx         12 1 mb        55049 ns        55069 ns         1024
find avx     noe 12 1 mb        53844 ns        53882 ns         1024
find avx tbb     12 1 mb        42994 ns        42865 ns         1024
find avx tbb noe 12 1 mb        40891 ns        40797 ns         1024
find             12 1 mb       219081 ns       219185 ns         1024
find         noe 12 1 mb       215788 ns       215896 ns         1024
find     tbb     12 1 mb        44659 ns        44541 ns         1024
find     tbb noe 12 1 mb        45529 ns        45440 ns         1024
find avx         24 1 mb        66127 ns        66160 ns         1024
find avx     noe 24 1 mb        64530 ns        64550 ns         1024
find avx tbb     24 1 mb        42558 ns        42500 ns         1024
find avx tbb noe 24 1 mb        41266 ns        41108 ns         1024
find             24 1 mb       117607 ns       117705 ns         1024
find         noe 24 1 mb       113809 ns       113902 ns         1024
find     tbb     24 1 mb        45323 ns        45221 ns         1024
find     tbb noe 24 1 mb        42710 ns        42621 ns         1024

scan avx         06 1 mb       327903 ns       328046 ns         1024
scan avx     noe 06 1 mb       324964 ns       325094 ns         1024
scan avx tbb     06 1 mb        83808 ns        83731 ns         1024
scan avx tbb noe 06 1 mb        67907 ns        67808 ns         1024
scan             06 1 mb       326550 ns       326694 ns         1024
scan         noe 06 1 mb       322983 ns       323132 ns         1024
scan     tbb     06 1 mb        67184 ns        67102 ns         1024
scan     tbb noe 06 1 mb        66711 ns        66643 ns         1024
scan avx         12 1 mb       328250 ns       328390 ns         1024
scan avx     noe 12 1 mb       324042 ns       324182 ns         1024
scan avx tbb     12 1 mb        85816 ns        85058 ns         1024
scan avx tbb noe 12 1 mb        66281 ns        66128 ns         1024
scan             12 1 mb       326997 ns       327140 ns         1024
scan         noe 12 1 mb       323852 ns       323976 ns         1024
scan     tbb     12 1 mb        68640 ns        68542 ns         1024
scan     tbb noe 12 1 mb        66229 ns        66158 ns         1024
scan avx         24 1 mb       325865 ns       326011 ns         1024
scan avx     noe 24 1 mb       324149 ns       324278 ns         1024
scan avx tbb     24 1 mb        85905 ns        85817 ns         1024
scan avx tbb noe 24 1 mb        67249 ns        67114 ns         1024
scan             24 1 mb       332101 ns       332250 ns         1024
scan         noe 24 1 mb       322091 ns       322227 ns         1024
scan     tbb     24 1 mb        68887 ns        68633 ns         1024
scan     tbb noe 24 1 mb        68755 ns        68679 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       207530 ns       207354 ns          512
find avx     noe 06 4 mb       217833 ns       217597 ns          512
find avx tbb     06 4 mb       220828 ns       220611 ns          512
find avx tbb noe 06 4 mb       206013 ns       205868 ns          512
find             06 4 mb      1707514 ns      1707528 ns          512
find         noe 06 4 mb      1687960 ns      1685843 ns          512
find     tbb     06 4 mb       332288 ns       330398 ns          512
find     tbb noe 06 4 mb       302094 ns       301947 ns          512
find avx         12 4 mb       222134 ns       221935 ns          512
find avx     noe 12 4 mb       216850 ns       216662 ns          512
find avx tbb     12 4 mb       217533 ns       217452 ns          512
find avx tbb noe 12 4 mb       202379 ns       202246 ns          512
find             12 4 mb       878104 ns       878169 ns          512
find         noe 12 4 mb       859248 ns       859287 ns          512
find     tbb     12 4 mb       282760 ns       282621 ns          512
find     tbb noe 12 4 mb       259759 ns       259630 ns          512
find avx         24 4 mb       267811 ns       267611 ns          512
find avx     noe 24 4 mb       263105 ns       262915 ns          512
find avx tbb     24 4 mb       231906 ns       231745 ns          512
find avx tbb noe 24 4 mb       214876 ns       214697 ns          512
find             24 4 mb       469252 ns       469156 ns          512
find         noe 24 4 mb       452857 ns       452745 ns          512
find     tbb     24 4 mb       253151 ns       253069 ns          512
find     tbb noe 24 4 mb       231403 ns       230938 ns          512

scan avx         06 4 mb      1309035 ns      1309118 ns          512
scan avx     noe 06 4 mb      1303129 ns      1303173 ns          512
scan avx tbb     06 4 mb       408192 ns       408026 ns          512
scan avx tbb noe 06 4 mb       308774 ns       308643 ns          512
scan             06 4 mb      1296455 ns      1296508 ns          512
scan         noe 06 4 mb      1303081 ns      1303132 ns          512
scan     tbb     06 4 mb       368412 ns       368238 ns          512
scan     tbb noe 06 4 mb       337175 ns       337006 ns          512
scan avx         12 4 mb      1308730 ns      1308770 ns          512
scan avx     noe 12 4 mb      1292522 ns      1292636 ns          512
scan avx tbb     12 4 mb       399982 ns       399831 ns          512
scan avx tbb noe 12 4 mb       310038 ns       309895 ns          512
scan             12 4 mb      1294232 ns      1294301 ns          512
scan         noe 12 4 mb      1292329 ns      1292387 ns          512
scan     tbb     12 4 mb       369517 ns       369428 ns          512
scan     tbb noe 12 4 mb       347985 ns       347783 ns          512
scan avx         24 4 mb      1308147 ns      1308202 ns          512
scan avx     noe 24 4 mb      1295094 ns      1295186 ns          512
scan avx tbb     24 4 mb       411995 ns       411949 ns          512
scan avx tbb noe 24 4 mb       309072 ns       308867 ns          512
scan             24 4 mb      1297078 ns      1297146 ns          512
scan         noe 24 4 mb      1289326 ns      1289310 ns          512
scan     tbb     24 4 mb       366985 ns       366852 ns          512
scan     tbb noe 24 4 mb       349004 ns       348847 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      845856 ns       845880 ns           64
find avx     noe 06 16 mb      836592 ns       836612 ns           64
find avx tbb     06 16 mb      688808 ns       688758 ns           64
find avx tbb noe 06 16 mb      679816 ns       679727 ns           64
find             06 16 mb     6830859 ns      6830802 ns           64
find         noe 06 16 mb     6721709 ns      6721594 ns           64
find     tbb     06 16 mb      920802 ns       921197 ns           64
find     tbb noe 06 16 mb      907986 ns       907748 ns           64
find avx         12 16 mb      863656 ns       863622 ns           64
find avx     noe 12 16 mb      849023 ns       848844 ns           64
find avx tbb     12 16 mb      690009 ns       687212 ns           64
find avx tbb noe 12 16 mb      678228 ns       678116 ns           64
find             12 16 mb     3528900 ns      3528394 ns           64
find         noe 12 16 mb     3432950 ns      3432898 ns           64
find     tbb     12 16 mb      768159 ns       768450 ns           64
find     tbb noe 12 16 mb      767959 ns       768036 ns           64
find avx         24 16 mb     1079261 ns      1079409 ns           64
find avx     noe 24 16 mb     1052248 ns      1052297 ns           64
find avx tbb     24 16 mb      693537 ns       693470 ns           64
find avx tbb noe 24 16 mb      694197 ns       694094 ns           64
find             24 16 mb     1848856 ns      1848845 ns           64
find         noe 24 16 mb     1806405 ns      1806384 ns           64
find     tbb     24 16 mb      738856 ns       738763 ns           64
find     tbb noe 24 16 mb      731523 ns       731178 ns           64

scan avx         06 16 mb     5237870 ns      5237847 ns           64
scan avx     noe 06 16 mb     5155995 ns      5155989 ns           64
scan avx tbb     06 16 mb     1295714 ns      1295592 ns           64
scan avx tbb noe 06 16 mb     1084702 ns      1084895 ns           64
scan             06 16 mb     5226966 ns      5226948 ns           64
scan         noe 06 16 mb     5138442 ns      5138444 ns           64
scan     tbb     06 16 mb     1095677 ns      1095484 ns           64
scan     tbb noe 06 16 mb     1080156 ns      1080520 ns           64
scan avx         12 16 mb     5223381 ns      5223358 ns           64
scan avx     noe 12 16 mb     5253380 ns      5253430 ns           64
scan avx tbb     12 16 mb     1349192 ns      1348758 ns           64
scan avx tbb noe 12 16 mb     1073516 ns      1073453 ns           64
scan             12 16 mb     5265716 ns      5265658 ns           64
scan         noe 12 16 mb     5171280 ns      5171269 ns           64
scan     tbb     12 16 mb     1083391 ns      1083200 ns           64
scan     tbb noe 12 16 mb     1087378 ns      1087567 ns           64
scan avx         24 16 mb     5235591 ns      5235572 ns           64
scan avx     noe 24 16 mb     5147063 ns      5147086 ns           64
scan avx tbb     24 16 mb     1297155 ns      1297037 ns           64
scan avx tbb noe 24 16 mb     1066945 ns      1066708 ns           64
scan             24 16 mb     5256469 ns      5256447 ns           64
scan         noe 24 16 mb     5141744 ns      5141716 ns           64
scan     tbb     24 16 mb     1093166 ns      1093559 ns           64
scan     tbb noe 24 16 mb     1078781 ns      1078800 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3207344 ns      3207384 ns           32
find avx     noe 06 64 mb     3154525 ns      3154512 ns           32
find avx tbb     06 64 mb     2441322 ns      2440966 ns           32
find avx tbb noe 06 64 mb     2432800 ns      2432322 ns           32
find             06 64 mb    26944219 ns     26944116 ns           32
find         noe 06 64 mb    26859369 ns     26840972 ns           32
find     tbb     06 64 mb     3064622 ns      3064525 ns           32
find     tbb noe 06 64 mb     3074988 ns      3074813 ns           32
find avx         12 64 mb     3166981 ns      3166994 ns           32
find avx     noe 12 64 mb     3169294 ns      3169322 ns           32
find avx tbb     12 64 mb     2453697 ns      2453966 ns           32
find avx tbb noe 12 64 mb     2451500 ns      2451384 ns           32
find             12 64 mb    13847684 ns     13827606 ns           32
find         noe 12 64 mb    13699359 ns     13699263 ns           32
find     tbb     12 64 mb     2605866 ns      2605522 ns           32
find     tbb noe 12 64 mb     2625116 ns      2624950 ns           32
find avx         24 64 mb     4133241 ns      4133263 ns           32
find avx     noe 24 64 mb     4103613 ns      4103694 ns           32
find avx tbb     24 64 mb     2478941 ns      2409000 ns           32
find avx tbb noe 24 64 mb     2456284 ns      2456159 ns           32
find             24 64 mb     7258378 ns      7258391 ns           32
find         noe 24 64 mb     7139950 ns      7139894 ns           32
find     tbb     24 64 mb     2539941 ns      2539578 ns           32
find     tbb noe 24 64 mb     2536091 ns      2535928 ns           32

scan avx         06 64 mb    20572775 ns     20554522 ns           32
scan avx     noe 06 64 mb    20555219 ns     20554778 ns           32
scan avx tbb     06 64 mb     4653272 ns      4653138 ns           32
scan avx tbb noe 06 64 mb     3739725 ns      3739603 ns           32
scan             06 64 mb    20591325 ns     20571963 ns           32
scan         noe 06 64 mb    20846978 ns     20846684 ns           32
scan     tbb     06 64 mb     3751741 ns      3751394 ns           32
scan     tbb noe 06 64 mb     3778278 ns      3778172 ns           32
scan avx         12 64 mb    20735425 ns     20717200 ns           32
scan avx     noe 12 64 mb    20539072 ns     20538662 ns           32
scan avx tbb     12 64 mb     4650025 ns      4649991 ns           32
scan avx tbb noe 12 64 mb     3742875 ns      3742713 ns           32
scan             12 64 mb    20582950 ns     20563791 ns           32
scan         noe 12 64 mb    20528312 ns     20526531 ns           32
scan     tbb     12 64 mb     3720675 ns      3720522 ns           32
scan     tbb noe 12 64 mb     3809959 ns      3809691 ns           32
scan avx         24 64 mb    20730519 ns     20712487 ns           32
scan avx     noe 24 64 mb    20579028 ns     20579047 ns           32
scan avx tbb     24 64 mb     4641700 ns      4641566 ns           32
scan avx tbb noe 24 64 mb     3728656 ns      3728544 ns           32
scan             24 64 mb    20557400 ns     20538984 ns           32
scan         noe 24 64 mb    20565884 ns     20565809 ns           32
scan     tbb     24 64 mb     3760078 ns      3759916 ns           32
scan     tbb noe 24 64 mb     3770906 ns      3770756 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13289950 ns     13289987 ns           16
find avx     noe 06 256 mb   13372325 ns     13372187 ns           16
find avx tbb     06 256 mb    9431319 ns      9431219 ns           16
find avx tbb noe 06 256 mb    9466894 ns      9466725 ns           16
find             06 256 mb  107416569 ns    107378906 ns           16
find         noe 06 256 mb  107454825 ns    107418531 ns           16
find     tbb     06 256 mb   11653869 ns     11347394 ns           16
find     tbb noe 06 256 mb   11624037 ns     11518988 ns           16
find avx         12 256 mb   13431475 ns     13431450 ns           16
find avx     noe 12 256 mb   13416900 ns     13380575 ns           16
find avx tbb     12 256 mb    9427938 ns      9427813 ns           16
find avx tbb noe 12 256 mb    9458625 ns      9459394 ns           16
find             12 256 mb   54643481 ns     54607344 ns           16
find         noe 12 256 mb   54645125 ns     54645081 ns           16
find     tbb     12 256 mb    9932137 ns      9932025 ns           16
find     tbb noe 12 256 mb    9962544 ns      9933944 ns           16
find avx         24 256 mb   16333619 ns     16333537 ns           16
find avx     noe 24 256 mb   16436894 ns     16436937 ns           16
find avx tbb     24 256 mb    9497375 ns      9497269 ns           16
find avx tbb noe 24 256 mb    9511188 ns      9511044 ns           16
find             24 256 mb   28468475 ns     28468250 ns           16
find         noe 24 256 mb   28445625 ns     28445625 ns           16
find     tbb     24 256 mb    9653806 ns      9571825 ns           16
find     tbb noe 24 256 mb    9639769 ns      9639687 ns           16

scan avx         06 256 mb   82186600 ns     82150131 ns           16
scan avx     noe 06 256 mb   82335213 ns     82335275 ns           16
scan avx tbb     06 256 mb   17909462 ns     17588719 ns           16
scan avx tbb noe 06 256 mb   14692025 ns     14464550 ns           16
scan             06 256 mb   82251819 ns     82251181 ns           16
scan         noe 06 256 mb   82292194 ns     82292156 ns           16
scan     tbb     06 256 mb   14606456 ns     14498819 ns           16
scan     tbb noe 06 256 mb   14720538 ns     14604119 ns           16
scan avx         12 256 mb   82186594 ns     82150069 ns           16
scan avx     noe 12 256 mb   82237375 ns     82237363 ns           16
scan avx tbb     12 256 mb   17869806 ns     17680856 ns           16
scan avx tbb noe 12 256 mb   14421012 ns     14273837 ns           16
scan             12 256 mb   82332106 ns     82293625 ns           16
scan         noe 12 256 mb   82241413 ns     82241287 ns           16
scan     tbb     12 256 mb   14564413 ns     14324075 ns           16
scan     tbb noe 12 256 mb   14586281 ns     14424587 ns           16
scan avx         24 256 mb   82204106 ns     82167700 ns           16
scan avx     noe 24 256 mb   82607256 ns     82606494 ns           16
scan avx tbb     24 256 mb   17992275 ns     17814300 ns           16
scan avx tbb noe 24 256 mb   14477800 ns     14277713 ns           16
scan             24 256 mb   82288550 ns     82251375 ns           16
scan         noe 24 256 mb   82195006 ns     82195019 ns           16
scan     tbb     24 256 mb   14577925 ns     14339912 ns           16
scan     tbb noe 24 256 mb   14326256 ns     14251594 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   27391412 ns     27391338 ns            8
find avx     noe 06 512 mb   27323650 ns     27321150 ns            8
find avx tbb     06 512 mb   18758288 ns     18757225 ns            8
find avx tbb noe 06 512 mb   18788100 ns     18788012 ns            8
find             06 512 mb  214916588 ns    214846225 ns            8
find         noe 06 512 mb  214697575 ns    214623900 ns            8
find     tbb     06 512 mb   23087463 ns     22011300 ns            8
find     tbb noe 06 512 mb   23026975 ns     22659962 ns            8
find avx         12 512 mb   27448450 ns     27448275 ns            8
find avx     noe 12 512 mb   27463837 ns     27391888 ns            8
find avx tbb     12 512 mb   18798500 ns     18798387 ns            8
find avx tbb noe 12 512 mb   18741813 ns     18741550 ns            8
find             12 512 mb  109299813 ns    109228600 ns            8
find         noe 12 512 mb  109267975 ns    109267862 ns            8
find     tbb     12 512 mb   19534788 ns     19387075 ns            8
find     tbb noe 12 512 mb   19577500 ns     19427100 ns            8
find avx         24 512 mb   32714900 ns     32714725 ns            8
find avx     noe 24 512 mb   32810187 ns     32811225 ns            8
find avx tbb     24 512 mb   19014775 ns     19014812 ns            8
find avx tbb noe 24 512 mb   18880075 ns     18745413 ns            8
find             24 512 mb   56982325 ns     56982012 ns            8
find         noe 24 512 mb   57016787 ns     57016650 ns            8
find     tbb     24 512 mb   19150575 ns     19150575 ns            8
find     tbb noe 24 512 mb   19135687 ns     19135725 ns            8

scan avx         06 512 mb  164394238 ns    164323900 ns            8
scan avx     noe 06 512 mb  164620213 ns    164620163 ns            8
scan avx tbb     06 512 mb   35712575 ns     35160938 ns            8
scan avx tbb noe 06 512 mb   28598688 ns     28359075 ns            8
scan             06 512 mb  164734887 ns    164661500 ns            8
scan         noe 06 512 mb  164497788 ns    164497025 ns            8
scan     tbb     06 512 mb   27991625 ns     27420800 ns            8
scan     tbb noe 06 512 mb   28940475 ns     26843562 ns            8
scan avx         12 512 mb  164458275 ns    164386012 ns            8
scan avx     noe 12 512 mb  165111850 ns    165111900 ns            8
scan avx tbb     12 512 mb   35828813 ns     35037187 ns            8
scan avx tbb noe 12 512 mb   28970250 ns     27482550 ns            8
scan             12 512 mb  164356738 ns    164281762 ns            8
scan         noe 12 512 mb  164239725 ns    164239313 ns            8
scan     tbb     12 512 mb   29081613 ns     27408250 ns            8
scan     tbb noe 12 512 mb   28450737 ns     26662487 ns            8
scan avx         24 512 mb  164372475 ns    164302362 ns            8
scan avx     noe 24 512 mb  164926562 ns    164926538 ns            8
scan avx tbb     24 512 mb   35849912 ns     35008575 ns            8
scan avx tbb noe 24 512 mb   29398075 ns     27704137 ns            8
scan             24 512 mb  164741938 ns    164667575 ns            8
scan         noe 24 512 mb  164997462 ns    164994963 ns            8
scan     tbb     24 512 mb   28426363 ns     27938400 ns            8
scan     tbb noe 24 512 mb   28270900 ns     27812212 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     55232900 ns     55232650 ns            8
find avx     noe 06 1 gb     55332312 ns     55331250 ns            8
find avx tbb     06 1 gb     37397738 ns     37397850 ns            8
find avx tbb noe 06 1 gb     37460813 ns     37459525 ns            8
find             06 1 gb    429781075 ns    429703538 ns            8
find         noe 06 1 gb    438187662 ns    438076738 ns            8
find     tbb     06 1 gb     46072200 ns     41400925 ns            8
find     tbb noe 06 1 gb     46103450 ns     41553413 ns            8
find avx         12 1 gb     56300600 ns     56300050 ns            8
find avx     noe 12 1 gb     55550288 ns     55480912 ns            8
find avx tbb     12 1 gb     37420150 ns     36728225 ns            8
find avx tbb noe 12 1 gb     37505225 ns     37505487 ns            8
find             12 1 gb    221457888 ns    221388488 ns            8
find         noe 12 1 gb    219278188 ns    219207088 ns            8
find     tbb     12 1 gb     39059825 ns     38671475 ns            8
find     tbb noe 12 1 gb     39014738 ns     37915538 ns            8
find avx         24 1 gb     65778050 ns     65777787 ns            8
find avx     noe 24 1 gb     65673500 ns     65672363 ns            8
find avx tbb     24 1 gb     37696100 ns     37693850 ns            8
find avx tbb noe 24 1 gb     37612300 ns     37327775 ns            8
find             24 1 gb    113465725 ns    113464850 ns            8
find         noe 24 1 gb    113372813 ns    113372100 ns            8
find     tbb     24 1 gb     38136675 ns     38136863 ns            8
find     tbb noe 24 1 gb     38187438 ns     36936262 ns            8

scan avx         06 1 gb    329492062 ns    329489825 ns            8
scan avx     noe 06 1 gb    329427475 ns    329356975 ns            8
scan avx tbb     06 1 gb     70943638 ns     70245250 ns            8
scan avx tbb noe 06 1 gb     58078100 ns     52441137 ns            8
scan             06 1 gb    329263287 ns    329190987 ns            8
scan         noe 06 1 gb    328992588 ns    328915337 ns            8
scan     tbb     06 1 gb     58032512 ns     54454400 ns            8
scan     tbb noe 06 1 gb     57006387 ns     55236512 ns            8
scan avx         12 1 gb    329255225 ns    329183150 ns            8
scan avx     noe 12 1 gb    329638800 ns    329567713 ns            8
scan avx tbb     12 1 gb     70728150 ns     70248100 ns            8
scan avx tbb noe 12 1 gb     57737050 ns     52881875 ns            8
scan             12 1 gb    329279700 ns    329138825 ns            8
scan         noe 12 1 gb    328984588 ns    328845975 ns            8
scan     tbb     12 1 gb     57100550 ns     53183025 ns            8
scan     tbb noe 12 1 gb     58003613 ns     55437075 ns            8
scan avx         24 1 gb    329091838 ns    328949337 ns            8
scan avx     noe 24 1 gb    329661612 ns    329522425 ns            8
scan avx tbb     24 1 gb     71533475 ns     69469825 ns            8
scan avx tbb noe 24 1 gb     57481875 ns     53109650 ns            8
scan             24 1 gb    329476337 ns    329344137 ns            8
scan         noe 24 1 gb    329379750 ns    329239550 ns            8
scan     tbb     24 1 gb     59050012 ns     52763200 ns            8
scan     tbb noe 24 1 gb     57878325 ns     52388437 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    111424813 ns    111423637 ns            8
find avx     noe 06 2 gb    111645712 ns    111644613 ns            8
find avx tbb     06 2 gb     74883500 ns     73126713 ns            8
find avx tbb noe 06 2 gb     74776075 ns     74774862 ns            8
find             06 2 gb    859477237 ns    859336075 ns            8
find         noe 06 2 gb    859378263 ns    859243800 ns            8
find     tbb     06 2 gb     91735963 ns     83351512 ns            8
find     tbb noe 06 2 gb     91821337 ns     79900650 ns            8
find avx         12 2 gb    111945487 ns    111701200 ns            8
find avx     noe 12 2 gb    111759100 ns    111638500 ns            8
find avx tbb     12 2 gb     74801775 ns     74764062 ns            8
find avx tbb noe 12 2 gb     74809100 ns     72963600 ns            8
find             12 2 gb    437078913 ns    437078912 ns            8
find         noe 12 2 gb    436451488 ns    436451475 ns            8
find     tbb     12 2 gb     77934950 ns     73567438 ns            8
find     tbb noe 12 2 gb     77927188 ns     72644000 ns            8
find avx         24 2 gb    131620125 ns    131481438 ns            8
find avx     noe 24 2 gb    131436600 ns    131436213 ns            8
find avx tbb     24 2 gb     75256138 ns     75256250 ns            8
find avx tbb noe 24 2 gb     75325600 ns     74152062 ns            8
find             24 2 gb    227148225 ns    227018688 ns            8
find         noe 24 2 gb    227172637 ns    227040500 ns            8
find     tbb     24 2 gb     76081350 ns     75282150 ns            8
find     tbb noe 24 2 gb     76195050 ns     74531400 ns            8

scan avx         06 2 gb    658850350 ns    658718413 ns            8
scan avx     noe 06 2 gb    658483313 ns    658475813 ns            8
scan avx tbb     06 2 gb    141715263 ns    138360613 ns            8
scan avx tbb noe 06 2 gb    114907425 ns    105157462 ns            8
scan             06 2 gb    658674025 ns    658546362 ns            8
scan         noe 06 2 gb    658338888 ns    658338737 ns            8
scan     tbb     06 2 gb    116790550 ns    110739150 ns            8
scan     tbb noe 06 2 gb    117618675 ns    105168250 ns            8
scan avx         12 2 gb    659328337 ns    659194800 ns            8
scan avx     noe 12 2 gb    659104225 ns    659104400 ns            8
scan avx tbb     12 2 gb    142438475 ns    137819825 ns            8
scan avx tbb noe 12 2 gb    114884575 ns    108974212 ns            8
scan             12 2 gb    659607938 ns    659473725 ns            8
scan         noe 12 2 gb    658581837 ns    658582012 ns            8
scan     tbb     12 2 gb    116840300 ns    107755263 ns            8
scan     tbb noe 12 2 gb    118025788 ns    107703800 ns            8
scan avx         24 2 gb    658560837 ns    658427350 ns            8
scan avx     noe 24 2 gb    658872838 ns    658872987 ns            8
scan avx tbb     24 2 gb    141650412 ns    138036437 ns            8
scan avx tbb noe 24 2 gb    115986500 ns    110226137 ns            8
scan             24 2 gb    658112463 ns    657982213 ns            8
scan         noe 24 2 gb    657479775 ns    657479975 ns            8
scan     tbb     24 2 gb    118672887 ns    109168687 ns            8
scan     tbb noe 24 2 gb    117029050 ns    107483062 ns            8
```

</details>
