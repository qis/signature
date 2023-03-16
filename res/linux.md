# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1121 ns         1111 ns         4096
find avx tbb 06 16 kb        1152 ns         1150 ns         4096
find         06 16 kb        7390 ns         7436 ns         4096
find     tbb 06 16 kb        7900 ns         7978 ns         4096
find avx     12 16 kb        1137 ns         1128 ns         4096
find avx tbb 12 16 kb        1152 ns         1154 ns         4096
find         12 16 kb        4121 ns         4154 ns         4096
find     tbb 12 16 kb        6575 ns         6614 ns         4096
find avx     24 16 kb        1594 ns         1586 ns         4096
find avx tbb 24 16 kb        1561 ns         1548 ns         4096
find         24 16 kb        2547 ns         2576 ns         4096
find     tbb 24 16 kb        6433 ns         6474 ns         4096

scan avx     06 16 kb        6130 ns         6174 ns         4096
scan avx tbb 06 16 kb        5921 ns         5960 ns         4096
scan         06 16 kb        5667 ns         5706 ns         4096
scan     tbb 06 16 kb        6403 ns         6444 ns         4096
scan avx     12 16 kb        5713 ns         5747 ns         4096
scan avx tbb 12 16 kb        5715 ns         5757 ns         4096
scan         12 16 kb        5664 ns         5703 ns         4096
scan     tbb 12 16 kb        6397 ns         6433 ns         4096
scan avx     24 16 kb        5749 ns         5782 ns         4096
scan avx tbb 24 16 kb        5719 ns         5757 ns         4096
scan         24 16 kb        5771 ns         5807 ns         4096
scan     tbb 24 16 kb        6429 ns         6474 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2654 ns         2653 ns         4096
find avx tbb 06 64 kb        2589 ns         2600 ns         4096
find         06 64 kb       26895 ns        26956 ns         4096
find     tbb 06 64 kb       10706 ns        10754 ns         4096
find avx     12 64 kb        2807 ns         2845 ns         4096
find avx tbb 12 64 kb        2512 ns         2511 ns         4096
find         12 64 kb       14008 ns        14067 ns         4096
find     tbb 12 64 kb        8247 ns         8282 ns         4096
find avx     24 64 kb        3964 ns         3970 ns         4096
find avx tbb 24 64 kb        3873 ns         3893 ns         4096
find         24 64 kb        7538 ns         7585 ns         4096
find     tbb 24 64 kb        7401 ns         7443 ns         4096

scan avx     06 64 kb       20492 ns        20550 ns         4096
scan avx tbb 06 64 kb       20509 ns        20577 ns         4096
scan         06 64 kb       20363 ns        20421 ns         4096
scan     tbb 06 64 kb       10273 ns        10308 ns         4096
scan avx     12 64 kb       20487 ns        20535 ns         4096
scan avx tbb 12 64 kb       20486 ns        20540 ns         4096
scan         12 64 kb       20399 ns        20448 ns         4096
scan     tbb 12 64 kb       11620 ns        11669 ns         4096
scan avx     24 64 kb       20579 ns        20630 ns         4096
scan avx tbb 24 64 kb       20608 ns        20666 ns         4096
scan         24 64 kb       20969 ns        21022 ns         4096
scan     tbb 24 64 kb       10270 ns        10360 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7925 ns         7971 ns         2048
find avx tbb 06 256 kb       7958 ns         8016 ns         2048
find         06 256 kb     104992 ns       105090 ns         2048
find     tbb 06 256 kb      19693 ns        19621 ns         2048
find avx     12 256 kb       7876 ns         7940 ns         2048
find avx tbb 12 256 kb       8194 ns         8237 ns         2048
find         12 256 kb      53316 ns        53380 ns         2048
find     tbb 12 256 kb      14334 ns        14271 ns         2048
find avx     24 256 kb      13185 ns        13235 ns         2048
find avx tbb 24 256 kb      13158 ns        13204 ns         2048
find         24 256 kb      27461 ns        27572 ns         2048
find     tbb 24 256 kb      11558 ns        11507 ns         2048

scan avx     06 256 kb      80138 ns        80201 ns         2048
scan avx tbb 06 256 kb      79897 ns        79967 ns         2048
scan         06 256 kb      79713 ns        79791 ns         2048
scan     tbb 06 256 kb      25959 ns        25903 ns         2048
scan avx     12 256 kb      81761 ns        81853 ns         2048
scan avx tbb 12 256 kb      81682 ns        81777 ns         2048
scan         12 256 kb      79549 ns        79629 ns         2048
scan     tbb 12 256 kb      26799 ns        26734 ns         2048
scan avx     24 256 kb      80041 ns        80121 ns         2048
scan avx tbb 24 256 kb      79848 ns        79923 ns         2048
scan         24 256 kb      79812 ns        79882 ns         2048
scan     tbb 24 256 kb      28091 ns        28025 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        53905 ns        53969 ns         1024
find avx tbb 06 1 mb        39928 ns        39800 ns         1024
find         06 1 mb       420581 ns       420671 ns         1024
find     tbb 06 1 mb        54033 ns        53916 ns         1024
find avx     12 1 mb        56380 ns        56412 ns         1024
find avx tbb 12 1 mb        40515 ns        40403 ns         1024
find         12 1 mb       217133 ns       217218 ns         1024
find     tbb 12 1 mb        44404 ns        44310 ns         1024
find avx     24 1 mb        64698 ns        64731 ns         1024
find avx tbb 24 1 mb        41099 ns        40922 ns         1024
find         24 1 mb       116314 ns       116370 ns         1024
find     tbb 24 1 mb        42343 ns        42254 ns         1024

scan avx     06 1 mb       321243 ns       321321 ns         1024
scan avx tbb 06 1 mb        66219 ns        66100 ns         1024
scan         06 1 mb       324543 ns       324614 ns         1024
scan     tbb 06 1 mb        82376 ns        82285 ns         1024
scan avx     12 1 mb       323798 ns       323869 ns         1024
scan avx tbb 12 1 mb        67555 ns        67490 ns         1024
scan         12 1 mb       323864 ns       323944 ns         1024
scan     tbb 12 1 mb        82937 ns        82849 ns         1024
scan avx     24 1 mb       325209 ns       325277 ns         1024
scan avx tbb 24 1 mb        67970 ns        67899 ns         1024
scan         24 1 mb       323536 ns       323597 ns         1024
scan     tbb 24 1 mb        82218 ns        82110 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       198815 ns       198815 ns          512
find avx tbb 06 4 mb       218970 ns       218936 ns          512
find         06 4 mb      1700772 ns      1700899 ns          512
find     tbb 06 4 mb       329195 ns       329169 ns          512
find avx     12 4 mb       206752 ns       206719 ns          512
find avx tbb 12 4 mb       218311 ns       218291 ns          512
find         12 4 mb       871487 ns       870873 ns          512
find     tbb 12 4 mb       278021 ns       278068 ns          512
find avx     24 4 mb       256729 ns       256739 ns          512
find avx tbb 24 4 mb       227328 ns       227209 ns          512
find         24 4 mb       456105 ns       456176 ns          512
find     tbb 24 4 mb       251982 ns       251941 ns          512

scan avx     06 4 mb      1297628 ns      1297667 ns          512
scan avx tbb 06 4 mb       365514 ns       365468 ns          512
scan         06 4 mb      1294406 ns      1294513 ns          512
scan     tbb 06 4 mb       402559 ns       402509 ns          512
scan avx     12 4 mb      1289366 ns      1289467 ns          512
scan avx tbb 12 4 mb       365258 ns       363793 ns          512
scan         12 4 mb      1293460 ns      1293569 ns          512
scan     tbb 12 4 mb       399541 ns       399457 ns          512
scan avx     24 4 mb      1285555 ns      1285648 ns          512
scan avx tbb 24 4 mb       361634 ns       360181 ns          512
scan         24 4 mb      1292796 ns      1292905 ns          512
scan     tbb 24 4 mb       400848 ns       399624 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      765461 ns       765294 ns           64
find avx tbb 06 16 mb      686439 ns       686369 ns           64
find         06 16 mb     6722573 ns      6722567 ns           64
find     tbb 06 16 mb      904400 ns       904730 ns           64
find avx     12 16 mb      801037 ns       800586 ns           64
find avx tbb 12 16 mb      685506 ns       685448 ns           64
find         12 16 mb     3448831 ns      3448817 ns           64
find     tbb 12 16 mb      758103 ns       758245 ns           64
find avx     24 16 mb     1032297 ns      1032056 ns           64
find avx tbb 24 16 mb      692095 ns       691928 ns           64
find         24 16 mb     1848483 ns      1848350 ns           64
find     tbb 24 16 mb      718227 ns       718220 ns           64

scan avx     06 16 mb     5199814 ns      5178795 ns           64
scan avx tbb 06 16 mb     1086420 ns      1086317 ns           64
scan         06 16 mb     5137169 ns      5136808 ns           64
scan     tbb 06 16 mb     1274394 ns      1274281 ns           64
scan avx     12 16 mb     5172895 ns      5172875 ns           64
scan avx tbb 12 16 mb     1081408 ns      1081477 ns           64
scan         12 16 mb     5143534 ns      5143548 ns           64
scan     tbb 12 16 mb     1288802 ns      1288631 ns           64
scan avx     24 16 mb     5161233 ns      5161089 ns           64
scan avx tbb 24 16 mb     1081284 ns      1081358 ns           64
scan         24 16 mb     5198191 ns      5198192 ns           64
scan     tbb 24 16 mb     1273553 ns      1273647 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3070997 ns      3070944 ns           32
find avx tbb 06 64 mb     2425119 ns      2424794 ns           32
find         06 64 mb    26570306 ns     26570141 ns           32
find     tbb 06 64 mb     3030091 ns      3029956 ns           32
find avx     12 64 mb     3029078 ns      3029041 ns           32
find avx tbb 12 64 mb     2431203 ns      2431497 ns           32
find         12 64 mb    13558947 ns     13558909 ns           32
find     tbb 12 64 mb     2581828 ns      2581531 ns           32
find avx     24 64 mb     3957769 ns      3957744 ns           32
find avx tbb 24 64 mb     2444769 ns      2444666 ns           32
find         24 64 mb     7071469 ns      7071344 ns           32
find     tbb 24 64 mb     2518409 ns      2496253 ns           32

scan avx     06 64 mb    20393403 ns     20393384 ns           32
scan avx tbb 06 64 mb     3693500 ns      3693209 ns           32
scan         06 64 mb    20356081 ns     20356062 ns           32
scan     tbb 06 64 mb     4598131 ns      4597394 ns           32
scan avx     12 64 mb    20340969 ns     20340734 ns           32
scan avx tbb 12 64 mb     3697872 ns      3697794 ns           32
scan         12 64 mb    20327525 ns     20327481 ns           32
scan     tbb 12 64 mb     4585594 ns      4585553 ns           32
scan avx     24 64 mb    20322066 ns     20321838 ns           32
scan avx tbb 24 64 mb     3699838 ns      3700106 ns           32
scan         24 64 mb    20328084 ns     20327916 ns           32
scan     tbb 24 64 mb     4561566 ns      4561509 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12331206 ns     12331094 ns           16
find avx tbb 06 256 mb    9299925 ns      9299769 ns           16
find         06 256 mb  106491144 ns    106439987 ns           16
find     tbb 06 256 mb   11474875 ns     11474756 ns           16
find avx     12 256 mb   12352850 ns     12352725 ns           16
find avx tbb 12 256 mb    9306025 ns      9305900 ns           16
find         12 256 mb   54648662 ns     54596331 ns           16
find     tbb 12 256 mb    9776169 ns      9731475 ns           16
find avx     24 256 mb   16067438 ns     16067394 ns           16
find avx tbb 24 256 mb    9374131 ns      9373181 ns           16
find         24 256 mb   28262300 ns     28206887 ns           16
find     tbb 24 256 mb    9520294 ns      9520244 ns           16

scan avx     06 256 mb   81377969 ns     81377638 ns           16
scan avx tbb 06 256 mb   14249156 ns     13928231 ns           16
scan         06 256 mb   81309438 ns     81309444 ns           16
scan     tbb 06 256 mb   17736762 ns     17626138 ns           16
scan avx     12 256 mb   81514656 ns     81460238 ns           16
scan avx tbb 12 256 mb   14238787 ns     14085062 ns           16
scan         12 256 mb   81408644 ns     81352950 ns           16
scan     tbb 12 256 mb   17609437 ns     17476225 ns           16
scan avx     24 256 mb   81684431 ns     81628575 ns           16
scan avx tbb 24 256 mb   14145563 ns     14078306 ns           16
scan         24 256 mb   81542956 ns     81489537 ns           16
scan     tbb 24 256 mb   17689525 ns     17552381 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24759800 ns     24759588 ns            8
find avx tbb 06 512 mb   18524750 ns     18523338 ns            8
find         06 512 mb  212523512 ns    212523462 ns            8
find     tbb 06 512 mb   22824675 ns     22824588 ns            8
find avx     12 512 mb   24879662 ns     24879525 ns            8
find avx tbb 12 512 mb   18598525 ns     18598287 ns            8
find         12 512 mb  108776612 ns    108776513 ns            8
find     tbb 12 512 mb   19445788 ns     19110262 ns            8
find avx     24 512 mb   32199100 ns     32198900 ns            8
find avx tbb 24 512 mb   18735113 ns     18659412 ns            8
find         24 512 mb   56426475 ns     56426325 ns            8
find     tbb 24 512 mb   18949200 ns     18948937 ns            8

scan avx     06 512 mb  162778837 ns    162667713 ns            8
scan avx tbb 06 512 mb   28835075 ns     28075688 ns            8
scan         06 512 mb  162757138 ns    162644225 ns            8
scan     tbb 06 512 mb   35020687 ns     34629600 ns            8
scan avx     12 512 mb  162684775 ns    162684588 ns            8
scan avx tbb 12 512 mb   28612500 ns     28015162 ns            8
scan         12 512 mb  162732012 ns    162623575 ns            8
scan     tbb 12 512 mb   35113362 ns     34789050 ns            8
scan avx     24 512 mb  162762712 ns    162653300 ns            8
scan avx tbb 24 512 mb   28244075 ns     27627338 ns            8
scan         24 512 mb  164842025 ns    164732150 ns            8
scan     tbb 24 512 mb   35329388 ns     34842925 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     49789750 ns     49789388 ns            8
find avx tbb 06 1 gb     37157075 ns     37157412 ns            8
find         06 1 gb    425327150 ns    425219413 ns            8
find     tbb 06 1 gb     45688950 ns     43390550 ns            8
find avx     12 1 gb     49833012 ns     49660288 ns            8
find avx tbb 12 1 gb     37237425 ns     36942762 ns            8
find         12 1 gb    216885838 ns    216845300 ns            8
find     tbb 12 1 gb     38803562 ns     37687987 ns            8
find avx     24 1 gb     64710075 ns     64709825 ns            8
find avx tbb 24 1 gb     37350775 ns     36686375 ns            8
find         24 1 gb    113079638 ns    113039137 ns            8
find     tbb 24 1 gb     37805438 ns     37805262 ns            8

scan avx     06 1 gb    325510600 ns    325510788 ns            8
scan avx tbb 06 1 gb     58101562 ns     54632125 ns            8
scan         06 1 gb    325741625 ns    325701137 ns            8
scan     tbb 06 1 gb     70406988 ns     69425113 ns            8
scan avx     12 1 gb    325442550 ns    325394825 ns            8
scan avx tbb 12 1 gb     57827050 ns     52849000 ns            8
scan         12 1 gb    325502350 ns    325460612 ns            8
scan     tbb 12 1 gb     70288887 ns     68956413 ns            8
scan avx     24 1 gb    326150512 ns    326107563 ns            8
scan avx tbb 24 1 gb     56944775 ns     53814387 ns            8
scan         24 1 gb    325492900 ns    325452513 ns            8
scan     tbb 24 1 gb     70333737 ns     69485850 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     99951637 ns     99951213 ns            8
find avx tbb 06 2 gb     74326663 ns     72357288 ns            8
find         06 2 gb    855586662 ns    855546988 ns            8
find     tbb 06 2 gb     91150525 ns     86270150 ns            8
find avx     12 2 gb     99631287 ns     99630750 ns            8
find avx tbb 12 2 gb     74144338 ns     72967263 ns            8
find         12 2 gb    433854887 ns    433854950 ns            8
find     tbb 12 2 gb     77762063 ns     75135737 ns            8
find avx     24 2 gb    129440950 ns    129440625 ns            8
find avx tbb 24 2 gb     74671800 ns     71922538 ns            8
find         24 2 gb    225962600 ns    225923462 ns            8
find     tbb 24 2 gb     75642250 ns     74992263 ns            8

scan avx     06 2 gb    651139725 ns    651098525 ns            8
scan avx tbb 06 2 gb    113097012 ns    104174175 ns            8
scan         06 2 gb    650360638 ns    650320200 ns            8
scan     tbb 06 2 gb    140224912 ns    138508388 ns            8
scan avx     12 2 gb    651665012 ns    651616050 ns            8
scan avx tbb 12 2 gb    114697912 ns    104224488 ns            8
scan         12 2 gb    651116563 ns    651075925 ns            8
scan     tbb 12 2 gb    141719713 ns    137772050 ns            8
scan avx     24 2 gb    651166575 ns    651125787 ns            8
scan avx tbb 24 2 gb    113886387 ns    106909137 ns            8
scan         24 2 gb    651040013 ns    650999012 ns            8
scan     tbb 24 2 gb    140686962 ns    137803987 ns            8
```

</details>

