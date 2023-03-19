# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1150 ns         1141 ns         4096
find avx tbb 06 16 kb        1074 ns         1066 ns         4096
find         06 16 kb        7486 ns         7538 ns         4096
find     tbb 06 16 kb        8831 ns         8876 ns         4096
find avx     12 16 kb        1086 ns         1079 ns         4096
find avx tbb 12 16 kb        1183 ns         1177 ns         4096
find         12 16 kb        4329 ns         4368 ns         4096
find     tbb 12 16 kb        8025 ns         8066 ns         4096
find avx     24 16 kb        1526 ns         1520 ns         4096
find avx tbb 24 16 kb        1306 ns         1304 ns         4096
find         24 16 kb        2731 ns         2774 ns         4096
find     tbb 24 16 kb        7768 ns         7810 ns         4096

scan avx     06 16 kb        6082 ns         6119 ns         4096
scan avx tbb 06 16 kb        6019 ns         6076 ns         4096
scan         06 16 kb        5813 ns         5849 ns         4096
scan     tbb 06 16 kb        7236 ns         7282 ns         4096
scan avx     12 16 kb        1186 ns         1169 ns         4096
scan avx tbb 12 16 kb        1157 ns         1154 ns         4096
scan         12 16 kb        6130 ns         6167 ns         4096
scan     tbb 12 16 kb        7268 ns         7337 ns         4096
scan avx     24 16 kb        1139 ns         1111 ns         4096
scan avx tbb 24 16 kb        1125 ns         1126 ns         4096
scan         24 16 kb        5758 ns         5807 ns         4096
scan     tbb 24 16 kb        7228 ns         7270 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2448 ns         2449 ns         4096
find avx tbb 06 64 kb        2491 ns         2466 ns         4096
find         06 64 kb       28861 ns        28946 ns         4096
find     tbb 06 64 kb       10965 ns        10995 ns         4096
find avx     12 64 kb        2484 ns         2514 ns         4096
find avx tbb 12 64 kb        2436 ns         2431 ns         4096
find         12 64 kb       14798 ns        14849 ns         4096
find     tbb 12 64 kb        9328 ns         9377 ns         4096
find avx     24 64 kb        3676 ns         3670 ns         4096
find avx tbb 24 64 kb        2776 ns         2793 ns         4096
find         24 64 kb        8170 ns         8209 ns         4096
find     tbb 24 64 kb        8851 ns         8892 ns         4096

scan avx     06 64 kb       20640 ns        20706 ns         4096
scan avx tbb 06 64 kb       20566 ns        20622 ns         4096
scan         06 64 kb       20682 ns        20742 ns         4096
scan     tbb 06 64 kb       12517 ns        12549 ns         4096
scan avx     12 64 kb        3059 ns         3061 ns         4096
scan avx tbb 12 64 kb        2483 ns         2480 ns         4096
scan         12 64 kb       21917 ns        21984 ns         4096
scan     tbb 12 64 kb       12660 ns        12700 ns         4096
scan avx     24 64 kb        2577 ns         2557 ns         4096
scan avx tbb 24 64 kb        2493 ns         2483 ns         4096
scan         24 64 kb       21287 ns        21356 ns         4096
scan     tbb 24 64 kb       11814 ns        11865 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7966 ns         7952 ns         2048
find avx tbb 06 256 kb       7775 ns         7725 ns         2048
find         06 256 kb     108694 ns       108776 ns         2048
find     tbb 06 256 kb      21361 ns        21299 ns         2048
find avx     12 256 kb       8045 ns         8050 ns         2048
find avx tbb 12 256 kb       8059 ns         8071 ns         2048
find         12 256 kb      55518 ns        55588 ns         2048
find     tbb 12 256 kb      15676 ns        15593 ns         2048
find avx     24 256 kb      12936 ns        12861 ns         2048
find avx tbb 24 256 kb       8933 ns         8940 ns         2048
find         24 256 kb      31549 ns        31680 ns         2048
find     tbb 24 256 kb      13636 ns        13574 ns         2048

scan avx     06 256 kb      83831 ns        83897 ns         2048
scan avx tbb 06 256 kb      80491 ns        80540 ns         2048
scan         06 256 kb      80643 ns        80713 ns         2048
scan     tbb 06 256 kb      31191 ns        31111 ns         2048
scan avx     12 256 kb       8310 ns         8344 ns         2048
scan avx tbb 12 256 kb       8061 ns         8054 ns         2048
scan         12 256 kb      81138 ns        81219 ns         2048
scan     tbb 12 256 kb      31627 ns        31545 ns         2048
scan avx     24 256 kb       8474 ns         8476 ns         2048
scan avx tbb 24 256 kb       8115 ns         8125 ns         2048
scan         24 256 kb      82957 ns        83026 ns         2048
scan     tbb 24 256 kb      30370 ns        30274 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        56847 ns        56747 ns         1024
find avx tbb 06 1 mb        42079 ns        41926 ns         1024
find         06 1 mb       426910 ns       427080 ns         1024
find     tbb 06 1 mb        53977 ns        53845 ns         1024
find avx     12 1 mb        55869 ns        55882 ns         1024
find avx tbb 12 1 mb        42177 ns        42037 ns         1024
find         12 1 mb       220696 ns       220762 ns         1024
find     tbb 12 1 mb        44499 ns        44378 ns         1024
find avx     24 1 mb        64947 ns        64981 ns         1024
find avx tbb 24 1 mb        42873 ns        42730 ns         1024
find         24 1 mb       124053 ns       124101 ns         1024
find     tbb 24 1 mb        43020 ns        42929 ns         1024

scan avx     06 1 mb       330789 ns       330922 ns         1024
scan avx tbb 06 1 mb        64636 ns        64492 ns         1024
scan         06 1 mb       332343 ns       332422 ns         1024
scan     tbb 06 1 mb        99265 ns        99190 ns         1024
scan avx     12 1 mb        56242 ns        56259 ns         1024
scan avx tbb 12 1 mb        41672 ns        41569 ns         1024
scan         12 1 mb       326744 ns       326861 ns         1024
scan     tbb 12 1 mb        98940 ns        98863 ns         1024
scan avx     24 1 mb        57804 ns        57840 ns         1024
scan avx tbb 24 1 mb        41984 ns        41848 ns         1024
scan         24 1 mb       328153 ns       328274 ns         1024
scan     tbb 24 1 mb       100410 ns       100315 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       202537 ns       202396 ns          512
find avx tbb 06 4 mb       219467 ns       219316 ns          512
find         06 4 mb      1711524 ns      1711598 ns          512
find     tbb 06 4 mb       308944 ns       308813 ns          512
find avx     12 4 mb       217881 ns       217714 ns          512
find avx tbb 12 4 mb       222688 ns       222595 ns          512
find         12 4 mb       879747 ns       879042 ns          512
find     tbb 12 4 mb       267411 ns       267262 ns          512
find avx     24 4 mb       258602 ns       258502 ns          512
find avx tbb 24 4 mb       224094 ns       224021 ns          512
find         24 4 mb       495417 ns       495371 ns          512
find     tbb 24 4 mb       248708 ns       248584 ns          512

scan avx     06 4 mb      1309537 ns      1309632 ns          512
scan avx tbb 06 4 mb       328403 ns       328231 ns          512
scan         06 4 mb      1297609 ns      1297701 ns          512
scan     tbb 06 4 mb       444591 ns       444472 ns          512
scan avx     12 4 mb       210570 ns       210445 ns          512
scan avx tbb 12 4 mb       214343 ns       214217 ns          512
scan         12 4 mb      1306896 ns      1306979 ns          512
scan     tbb 12 4 mb       442559 ns       442422 ns          512
scan avx     24 4 mb       217527 ns       217396 ns          512
scan avx tbb 24 4 mb       218096 ns       217963 ns          512
scan         24 4 mb      1307992 ns      1308123 ns          512
scan     tbb 24 4 mb       447063 ns       446888 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      821944 ns       821917 ns           64
find avx tbb 06 16 mb      681319 ns       681023 ns           64
find         06 16 mb     6835394 ns      6835281 ns           64
find     tbb 06 16 mb      865456 ns       865392 ns           64
find avx     12 16 mb      860647 ns       860600 ns           64
find avx tbb 12 16 mb      687572 ns       687464 ns           64
find         12 16 mb     3528381 ns      3528370 ns           64
find     tbb 12 16 mb      750733 ns       750555 ns           64
find avx     24 16 mb     1043086 ns      1043067 ns           64
find avx tbb 24 16 mb      687466 ns       687439 ns           64
find         24 16 mb     1983767 ns      1983722 ns           64
find     tbb 24 16 mb      730347 ns       730247 ns           64

scan avx     06 16 mb     5252689 ns      5231647 ns           64
scan avx tbb 06 16 mb     1046064 ns      1045975 ns           64
scan         06 16 mb     5256402 ns      5256348 ns           64
scan     tbb 06 16 mb     1551280 ns      1551253 ns           64
scan avx     12 16 mb      850809 ns       850725 ns           64
scan avx tbb 12 16 mb      677373 ns       677134 ns           64
scan         12 16 mb     5232384 ns      5232187 ns           64
scan     tbb 12 16 mb     1546222 ns      1546816 ns           64
scan avx     24 16 mb      890141 ns       890095 ns           64
scan avx tbb 24 16 mb      677581 ns       678069 ns           64
scan         24 16 mb     5203256 ns      5203116 ns           64
scan     tbb 24 16 mb     1534548 ns      1534397 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3248306 ns      3248322 ns           32
find avx tbb 06 64 mb     2410431 ns      2410506 ns           32
find         06 64 mb    27122309 ns     27122053 ns           32
find     tbb 06 64 mb     2908378 ns      2907966 ns           32
find avx     12 64 mb     3191922 ns      3191872 ns           32
find avx tbb 12 64 mb     2422559 ns      2423009 ns           32
find         12 64 mb    13812038 ns     13812062 ns           32
find     tbb 12 64 mb     2571328 ns      2571228 ns           32
find avx     24 64 mb     3955847 ns      3955816 ns           32
find avx tbb 24 64 mb     2425219 ns      2425066 ns           32
find         24 64 mb     7647391 ns      7647166 ns           32
find     tbb 24 64 mb     2500875 ns      2500744 ns           32

scan avx     06 64 mb    20713016 ns     20712766 ns           32
scan avx tbb 06 64 mb     3660212 ns      3660106 ns           32
scan         06 64 mb    20571231 ns     20571225 ns           32
scan     tbb 06 64 mb     5653109 ns      5653403 ns           32
scan avx     12 64 mb     3155103 ns      3155034 ns           32
scan avx tbb 12 64 mb     2416041 ns      2415953 ns           32
scan         12 64 mb    20588378 ns     20588291 ns           32
scan     tbb 12 64 mb     5693147 ns      5693409 ns           32
scan avx     24 64 mb     3227981 ns      3227991 ns           32
scan avx tbb 24 64 mb     2425762 ns      2425856 ns           32
scan         24 64 mb    20609559 ns     20609328 ns           32
scan     tbb 24 64 mb     5667184 ns      5667450 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12631850 ns     12607712 ns           16
find avx tbb 06 256 mb    9391319 ns      9391269 ns           16
find         06 256 mb  107511575 ns    107510206 ns           16
find     tbb 06 256 mb   11109425 ns     11058519 ns           16
find avx     12 256 mb   12920287 ns     12920162 ns           16
find avx tbb 12 256 mb    9373600 ns      9373100 ns           16
find         12 256 mb   54872044 ns     54871637 ns           16
find     tbb 12 256 mb    9628794 ns      9629431 ns           16
find avx     24 256 mb   15986344 ns     15986294 ns           16
find avx tbb 24 256 mb    9433575 ns      9433544 ns           16
find         24 256 mb   30234100 ns     30234025 ns           16
find     tbb 24 256 mb    9590788 ns      9590300 ns           16

scan avx     06 256 mb   82523588 ns     82500487 ns           16
scan avx tbb 06 256 mb   14322744 ns     14210894 ns           16
scan         06 256 mb   82257231 ns     82234663 ns           16
scan     tbb 06 256 mb   22165506 ns     21973813 ns           16
scan avx     12 256 mb   12510256 ns     12510181 ns           16
scan avx tbb 12 256 mb    9379087 ns      9379006 ns           16
scan         12 256 mb   82062925 ns     82041025 ns           16
scan     tbb 12 256 mb   22095694 ns     21835425 ns           16
scan avx     24 256 mb   12998650 ns     12998588 ns           16
scan avx tbb 24 256 mb    9396787 ns      9396706 ns           16
scan         24 256 mb   82187581 ns     82163363 ns           16
scan     tbb 24 256 mb   22047012 ns     21786988 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25346825 ns     25346588 ns            8
find avx tbb 06 512 mb   18694263 ns     18694400 ns            8
find         06 512 mb  215057587 ns    215012875 ns            8
find     tbb 06 512 mb   22096163 ns     21675775 ns            8
find avx     12 512 mb   25042875 ns     25042650 ns            8
find avx tbb 12 512 mb   18650062 ns     18648513 ns            8
find         12 512 mb  110251037 ns    110250163 ns            8
find     tbb 12 512 mb   19434475 ns     19137750 ns            8
find avx     24 512 mb   31871938 ns     31871887 ns            8
find avx tbb 24 512 mb   18764150 ns     18764138 ns            8
find         24 512 mb   60759050 ns     60706812 ns            8
find     tbb 24 512 mb   19056837 ns     19056775 ns            8

scan avx     06 512 mb  164559350 ns    164558950 ns            8
scan avx tbb 06 512 mb   28800550 ns     28649500 ns            8
scan         06 512 mb  164420113 ns    164377087 ns            8
scan     tbb 06 512 mb   44223100 ns     43873750 ns            8
scan avx     12 512 mb   25171425 ns     25171500 ns            8
scan avx tbb 12 512 mb   18673200 ns     18671762 ns            8
scan         12 512 mb  164069587 ns    164069175 ns            8
scan     tbb 12 512 mb   44198562 ns     43278850 ns            8
scan avx     24 512 mb   26018912 ns     26018750 ns            8
scan avx tbb 24 512 mb   18690363 ns     18554738 ns            8
scan         24 512 mb  164343688 ns    164342500 ns            8
scan     tbb 24 512 mb   44309413 ns     43353225 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50615312 ns     50614500 ns            8
find avx tbb 06 1 gb     37194875 ns     37196763 ns            8
find         06 1 gb    429959075 ns    429916138 ns            8
find     tbb 06 1 gb     44192438 ns     43271488 ns            8
find avx     12 1 gb     50079550 ns     50079262 ns            8
find avx tbb 12 1 gb     37244012 ns     37202775 ns            8
find         12 1 gb    219468913 ns    219426250 ns            8
find     tbb 12 1 gb     38315963 ns     37874513 ns            8
find avx     24 1 gb     63802525 ns     63759425 ns            8
find avx tbb 24 1 gb     37313188 ns     37313438 ns            8
find         24 1 gb    120944675 ns    120944012 ns            8
find     tbb 24 1 gb     38147788 ns     38147913 ns            8

scan avx     06 1 gb    329255187 ns    329254038 ns            8
scan avx tbb 06 1 gb     56117725 ns     53969212 ns            8
scan         06 1 gb    328753412 ns    328710575 ns            8
scan     tbb 06 1 gb     88298612 ns     86201412 ns            8
scan avx     12 1 gb     50731600 ns     50731313 ns            8
scan avx tbb 12 1 gb     37217350 ns     36969863 ns            8
scan         12 1 gb    329301225 ns    329258000 ns            8
scan     tbb 12 1 gb     88167588 ns     85752925 ns            8
scan avx     24 1 gb     51628262 ns     51627862 ns            8
scan avx tbb 24 1 gb     37240200 ns     37072687 ns            8
scan         24 1 gb    328705987 ns    328662463 ns            8
scan     tbb 24 1 gb     88732788 ns     87935200 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    101643075 ns    101640862 ns            8
find avx tbb 06 2 gb     74390312 ns     74083862 ns            8
find         06 2 gb    860923313 ns    860880712 ns            8
find     tbb 06 2 gb     87021200 ns     82762312 ns            8
find avx     12 2 gb    100967638 ns    100967262 ns            8
find avx tbb 12 2 gb     74439625 ns     74422525 ns            8
find         12 2 gb    439141487 ns    439139950 ns            8
find     tbb 12 2 gb     76215463 ns     75710525 ns            8
find avx     24 2 gb    127147538 ns    127105888 ns            8
find avx tbb 24 2 gb     74625438 ns     74486950 ns            8
find         24 2 gb    241692500 ns    241652550 ns            8
find     tbb 24 2 gb     75940012 ns     75543175 ns            8

scan avx     06 2 gb    658488438 ns    658443250 ns            8
scan avx tbb 06 2 gb    111776400 ns    108132213 ns            8
scan         06 2 gb    656829275 ns    656782763 ns            8
scan     tbb 06 2 gb    177266088 ns    174564250 ns            8
scan avx     12 2 gb    100677900 ns    100677475 ns            8
scan avx tbb 12 2 gb     74352813 ns     73777425 ns            8
scan         12 2 gb    657484988 ns    657443225 ns            8
scan     tbb 12 2 gb    175369213 ns    170024438 ns            8
scan avx     24 2 gb    103273075 ns    103272612 ns            8
scan avx tbb 24 2 gb     74447750 ns     73799987 ns            8
scan         24 2 gb    657935575 ns    657892813 ns            8
scan     tbb 24 2 gb    176432338 ns    170820438 ns            8
```

</details>

