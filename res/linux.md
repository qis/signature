# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1057 ns         1049 ns         4096
find avx tbb 06 16 kb        1064 ns         1041 ns         4096
find         06 16 kb        7463 ns         7497 ns         4096
find     tbb 06 16 kb       17573 ns        17582 ns         4096
find avx     12 16 kb        1123 ns         1125 ns         4096
find avx tbb 12 16 kb        1122 ns         1119 ns         4096
find         12 16 kb        4364 ns         4405 ns         4096
find     tbb 12 16 kb       12291 ns        12342 ns         4096
find avx     24 16 kb        1374 ns         1366 ns         4096
find avx tbb 24 16 kb        1377 ns         1374 ns         4096
find         24 16 kb        2749 ns         2790 ns         4096
find     tbb 24 16 kb        9662 ns         9717 ns         4096

scan avx     06 16 kb        6390 ns         6415 ns         4096
scan avx tbb 06 16 kb        6344 ns         6374 ns         4096
scan         06 16 kb        8369 ns         8441 ns         4096
scan     tbb 06 16 kb       17500 ns        17499 ns         4096
scan avx     12 16 kb        6398 ns         6452 ns         4096
scan avx tbb 12 16 kb        6118 ns         6164 ns         4096
scan         12 16 kb        8090 ns         8134 ns         4096
scan     tbb 12 16 kb       16752 ns        16801 ns         4096
scan avx     24 16 kb        6205 ns         6254 ns         4096
scan avx tbb 24 16 kb        5787 ns         5840 ns         4096
scan         24 16 kb        7861 ns         7907 ns         4096
scan     tbb 24 16 kb       17388 ns        17426 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2871 ns         2876 ns         4096
find avx tbb 06 64 kb        2634 ns         2634 ns         4096
find         06 64 kb       28381 ns        28442 ns         4096
find     tbb 06 64 kb       46531 ns        46565 ns         4096
find avx     12 64 kb        2604 ns         2604 ns         4096
find avx tbb 12 64 kb        2570 ns         2576 ns         4096
find         12 64 kb       14218 ns        14269 ns         4096
find     tbb 12 64 kb       27264 ns        27290 ns         4096
find avx     24 64 kb        3061 ns         3056 ns         4096
find avx tbb 24 64 kb        2929 ns         2930 ns         4096
find         24 64 kb        7784 ns         7831 ns         4096
find     tbb 24 64 kb       17744 ns        17744 ns         4096

scan avx     06 64 kb       21231 ns        21294 ns         4096
scan avx tbb 06 64 kb       20890 ns        20945 ns         4096
scan         06 64 kb       30269 ns        30334 ns         4096
scan     tbb 06 64 kb       53300 ns        49929 ns         4096
scan avx     12 64 kb       21709 ns        21773 ns         4096
scan avx tbb 12 64 kb       20679 ns        20748 ns         4096
scan         12 64 kb       29172 ns        29231 ns         4096
scan     tbb 12 64 kb       49804 ns        49866 ns         4096
scan avx     24 64 kb       21988 ns        22047 ns         4096
scan avx tbb 24 64 kb       20752 ns        20812 ns         4096
scan         24 64 kb       29093 ns        29153 ns         4096
scan     tbb 24 64 kb       50481 ns        50539 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       8255 ns         8249 ns         2048
find avx tbb 06 256 kb       8150 ns         8164 ns         2048
find         06 256 kb     105669 ns       105739 ns         2048
find     tbb 06 256 kb     239016 ns       239312 ns         2048
find avx     12 256 kb       8222 ns         8196 ns         2048
find avx tbb 12 256 kb       8094 ns         8101 ns         2048
find         12 256 kb      56188 ns        56252 ns         2048
find     tbb 12 256 kb      96170 ns        96244 ns         2048
find avx     24 256 kb       9747 ns         9754 ns         2048
find avx tbb 24 256 kb       8929 ns         8951 ns         2048
find         24 256 kb      27811 ns        27861 ns         2048
find     tbb 24 256 kb      50182 ns        50241 ns         2048

scan avx     06 256 kb      82398 ns        82463 ns         2048
scan avx tbb 06 256 kb      80423 ns        80501 ns         2048
scan         06 256 kb     114507 ns       114602 ns         2048
scan     tbb 06 256 kb     227168 ns       227489 ns         2048
scan avx     12 256 kb      82053 ns        82141 ns         2048
scan avx tbb 12 256 kb      80572 ns        80640 ns         2048
scan         12 256 kb     114307 ns       114401 ns         2048
scan     tbb 12 256 kb     229657 ns       230025 ns         2048
scan avx     24 256 kb      81962 ns        82032 ns         2048
scan avx tbb 24 256 kb      80410 ns        80494 ns         2048
scan         24 256 kb     114382 ns       114461 ns         2048
scan     tbb 24 256 kb     221909 ns       222235 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        56298 ns        56312 ns         1024
find avx tbb 06 1 mb       136188 ns       136222 ns         1024
find         06 1 mb       428254 ns       428321 ns         1024
find     tbb 06 1 mb       648530 ns       648788 ns         1024
find avx     12 1 mb        56496 ns        56497 ns         1024
find avx tbb 12 1 mb       134368 ns       134468 ns         1024
find         12 1 mb       220079 ns       220153 ns         1024
find     tbb 12 1 mb       406943 ns       406414 ns         1024
find avx     24 1 mb        58800 ns        58809 ns         1024
find avx tbb 24 1 mb       150511 ns       150498 ns         1024
find         24 1 mb       122780 ns       122863 ns         1024
find     tbb 24 1 mb       253714 ns       253975 ns         1024

scan avx     06 1 mb       332622 ns       332754 ns         1024
scan avx tbb 06 1 mb       569674 ns       569926 ns         1024
scan         06 1 mb       466668 ns       466839 ns         1024
scan     tbb 06 1 mb       592201 ns       592453 ns         1024
scan avx     12 1 mb       332005 ns       332131 ns         1024
scan avx tbb 12 1 mb       570518 ns       570796 ns         1024
scan         12 1 mb       471332 ns       471492 ns         1024
scan     tbb 12 1 mb       586852 ns       587108 ns         1024
scan avx     24 1 mb       332652 ns       332761 ns         1024
scan avx tbb 24 1 mb       570337 ns       569801 ns         1024
scan         24 1 mb       466708 ns       466872 ns         1024
scan     tbb 24 1 mb       589390 ns       589663 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       205928 ns       205814 ns          512
find avx tbb 06 4 mb       421171 ns       421277 ns          512
find         06 4 mb      1703881 ns      1703954 ns          512
find     tbb 06 4 mb      2131290 ns      2131279 ns          512
find avx     12 4 mb       216917 ns       216768 ns          512
find avx tbb 12 4 mb       417779 ns       417869 ns          512
find         12 4 mb       869761 ns       869848 ns          512
find     tbb 12 4 mb      1217800 ns      1217877 ns          512
find avx     24 4 mb       229653 ns       229473 ns          512
find avx tbb 24 4 mb       454261 ns       454327 ns          512
find         24 4 mb       461368 ns       461374 ns          512
find     tbb 24 4 mb       748115 ns       748205 ns          512

scan avx     06 4 mb      1310437 ns      1310588 ns          512
scan avx tbb 06 4 mb      1763300 ns      1763387 ns          512
scan         06 4 mb      1834003 ns      1834195 ns          512
scan     tbb 06 4 mb      1846251 ns      1846342 ns          512
scan avx     12 4 mb      1303649 ns      1303775 ns          512
scan avx tbb 12 4 mb      1758241 ns      1758312 ns          512
scan         12 4 mb      1843762 ns      1843916 ns          512
scan     tbb 12 4 mb      1860546 ns      1860684 ns          512
scan avx     24 4 mb      1297277 ns      1297429 ns          512
scan avx tbb 24 4 mb      1771258 ns      1771339 ns          512
scan         24 4 mb      1832507 ns      1832664 ns          512
scan     tbb 24 4 mb      1835076 ns      1835203 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      789073 ns       788761 ns           64
find avx tbb 06 16 mb     1498631 ns      1498564 ns           64
find         06 16 mb     6817255 ns      6817023 ns           64
find     tbb 06 16 mb     7973203 ns      7973150 ns           64
find avx     12 16 mb      821511 ns       821381 ns           64
find avx tbb 12 16 mb     1515397 ns      1515355 ns           64
find         12 16 mb     3476586 ns      3476591 ns           64
find     tbb 12 16 mb     4350891 ns      4350783 ns           64
find avx     24 16 mb      848206 ns       848081 ns           64
find avx tbb 24 16 mb     1540533 ns      1540487 ns           64
find         24 16 mb     1865858 ns      1865845 ns           64
find     tbb 24 16 mb     2612206 ns      2611930 ns           64

scan avx     06 16 mb     5207089 ns      5206884 ns           64
scan avx tbb 06 16 mb     6407252 ns      6407078 ns           64
scan         06 16 mb     7436870 ns      7436992 ns           64
scan     tbb 06 16 mb     6774420 ns      6774384 ns           64
scan avx     12 16 mb     5200398 ns      5200395 ns           64
scan avx tbb 12 16 mb     6477608 ns      6477563 ns           64
scan         12 16 mb     7327673 ns      7327609 ns           64
scan     tbb 12 16 mb     6786597 ns      6786581 ns           64
scan avx     24 16 mb     5254727 ns      5254659 ns           64
scan avx tbb 24 16 mb     6419794 ns      6419750 ns           64
scan         24 16 mb     7333508 ns      7333431 ns           64
scan     tbb 24 16 mb     6741475 ns      6741433 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3127516 ns      3127156 ns           32
find avx tbb 06 64 mb     5542387 ns      5542016 ns           32
find         06 64 mb    26821209 ns     26821053 ns           32
find     tbb 06 64 mb    29802009 ns     29791400 ns           32
find avx     12 64 mb     3116209 ns      3116106 ns           32
find avx tbb 12 64 mb     5590678 ns      5590681 ns           32
find         12 64 mb    13762884 ns     13762653 ns           32
find     tbb 12 64 mb    16308316 ns     16307741 ns           32
find avx     24 64 mb     3459400 ns      3459300 ns           32
find avx tbb 24 64 mb     5700719 ns      5700194 ns           32
find         24 64 mb     7211922 ns      7211778 ns           32
find     tbb 24 64 mb     9800719 ns      9800488 ns           32

scan avx     06 64 mb    20570147 ns     20559369 ns           32
scan avx tbb 06 64 mb    24234422 ns     24234294 ns           32
scan         06 64 mb    29170997 ns     29159925 ns           32
scan     tbb 06 64 mb    25610497 ns     25610400 ns           32
scan avx     12 64 mb    20579263 ns     20579228 ns           32
scan avx tbb 12 64 mb    24277072 ns     24264262 ns           32
scan         12 64 mb    29151891 ns     29151716 ns           32
scan     tbb 12 64 mb    25746444 ns     25734994 ns           32
scan avx     24 64 mb    20541166 ns     20541072 ns           32
scan avx tbb 24 64 mb    24438231 ns     24438119 ns           32
scan         24 64 mb    29125337 ns     29113741 ns           32
scan     tbb 24 64 mb    25445106 ns     25445009 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12447388 ns     12447325 ns           16
find avx tbb 06 256 mb   21942525 ns     21942012 ns           16
find         06 256 mb  107260850 ns    107260575 ns           16
find     tbb 06 256 mb  118957675 ns    118857131 ns           16
find avx     12 256 mb   12475656 ns     12474869 ns           16
find avx tbb 12 256 mb   22245194 ns     22245175 ns           16
find         12 256 mb   54748019 ns     54725256 ns           16
find     tbb 12 256 mb   64496025 ns     64496119 ns           16
find avx     24 256 mb   13421406 ns     13421356 ns           16
find avx tbb 24 256 mb   22336350 ns     22336450 ns           16
find         24 256 mb   28541819 ns     28541681 ns           16
find     tbb 24 256 mb   38286163 ns     38286338 ns           16

scan avx     06 256 mb   82301012 ns     82301044 ns           16
scan avx tbb 06 256 mb   96265294 ns     96239806 ns           16
scan         06 256 mb  116566525 ns    116566600 ns           16
scan     tbb 06 256 mb  101624194 ns    101467169 ns           16
scan avx     12 256 mb   82393931 ns     82393862 ns           16
scan avx tbb 12 256 mb   96495175 ns     96469281 ns           16
scan         12 256 mb  116533806 ns    116533856 ns           16
scan     tbb 12 256 mb  102922475 ns    102742650 ns           16
scan avx     24 256 mb   82430931 ns     82430988 ns           16
scan avx tbb 24 256 mb   96319106 ns     96298538 ns           16
scan         24 256 mb  116558256 ns    116534550 ns           16
scan     tbb 24 256 mb  101385756 ns    101181062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25084938 ns     25084600 ns            8
find avx tbb 06 512 mb   43885400 ns     43885662 ns            8
find         06 512 mb  214365225 ns    214322237 ns            8
find     tbb 06 512 mb  236227038 ns    236057475 ns            8
find avx     12 512 mb   25066563 ns     25066287 ns            8
find avx tbb 12 512 mb   43807788 ns     43807788 ns            8
find         12 512 mb  109451775 ns    109451175 ns            8
find     tbb 12 512 mb  128554738 ns    128554875 ns            8
find avx     24 512 mb   26812687 ns     26812500 ns            8
find avx tbb 24 512 mb   44691775 ns     44692038 ns            8
find         24 512 mb   57151875 ns     57151700 ns            8
find     tbb 24 512 mb   77494250 ns     77362675 ns            8

scan avx     06 512 mb  164475787 ns    164475288 ns            8
scan avx tbb 06 512 mb  192900800 ns    192598625 ns            8
scan         06 512 mb  232900512 ns    232856637 ns            8
scan     tbb 06 512 mb  208306538 ns    206957113 ns            8
scan avx     12 512 mb  164622512 ns    164622675 ns            8
scan avx tbb 12 512 mb  192818200 ns    192231862 ns            8
scan         12 512 mb  233052250 ns    233010912 ns            8
scan     tbb 12 512 mb  207686300 ns    207069725 ns            8
scan avx     24 512 mb  164559163 ns    164559125 ns            8
scan avx tbb 24 512 mb  192650488 ns    192277150 ns            8
scan         24 512 mb  233115813 ns    233074575 ns            8
scan     tbb 24 512 mb  207348688 ns    206263900 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50476900 ns     50476537 ns            8
find avx tbb 06 1 gb     90052600 ns     89995700 ns            8
find         06 1 gb    429046175 ns    428986713 ns            8
find     tbb 06 1 gb    477560988 ns    476735113 ns            8
find avx     12 1 gb     50281925 ns     50281575 ns            8
find avx tbb 12 1 gb     89447500 ns     89433225 ns            8
find         12 1 gb    218946300 ns    218904300 ns            8
find     tbb 12 1 gb    260489437 ns    260445650 ns            8
find avx     24 1 gb     53966463 ns     53966037 ns            8
find avx tbb 24 1 gb     91673250 ns     91481313 ns            8
find         24 1 gb    114420675 ns    114419550 ns            8
find     tbb 24 1 gb    153615338 ns    153615562 ns            8

scan avx     06 1 gb    328885263 ns    328843562 ns            8
scan avx tbb 06 1 gb    391643463 ns    390402450 ns            8
scan         06 1 gb    465595088 ns    465552012 ns            8
scan     tbb 06 1 gb    413931925 ns    412165575 ns            8
scan avx     12 1 gb    329821825 ns    329778513 ns            8
scan avx tbb 12 1 gb    390258125 ns    389638750 ns            8
scan         12 1 gb    466098238 ns    466057150 ns            8
scan     tbb 12 1 gb    415085113 ns    411522163 ns            8
scan avx     24 1 gb    329130100 ns    329089987 ns            8
scan avx tbb 24 1 gb    389031525 ns    388269637 ns            8
scan         24 1 gb    465836762 ns    465837087 ns            8
scan     tbb 24 1 gb    409981038 ns    407012388 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    100677862 ns    100677362 ns            8
find avx tbb 06 2 gb    180550050 ns    179522700 ns            8
find         06 2 gb    857733350 ns    857695288 ns            8
find     tbb 06 2 gb    954926438 ns    953310838 ns            8
find avx     12 2 gb    101036913 ns    101036538 ns            8
find avx tbb 12 2 gb    178647675 ns    178383600 ns            8
find         12 2 gb    438799875 ns    438799800 ns            8
find     tbb 12 2 gb    521206950 ns    520850275 ns            8
find avx     24 2 gb    108126588 ns    108126388 ns            8
find avx tbb 24 2 gb    181911487 ns    179657087 ns            8
find         24 2 gb    228386175 ns    228347650 ns            8
find     tbb 24 2 gb    312221963 ns    312222100 ns            8

scan avx     06 2 gb    658857000 ns    658811900 ns            8
scan avx tbb 06 2 gb    774336125 ns    769711950 ns            8
scan         06 2 gb    931919200 ns    931919325 ns            8
scan     tbb 06 2 gb    818039288 ns    813629025 ns            8
scan avx     12 2 gb    659169363 ns    659127725 ns            8
scan avx tbb 12 2 gb    776159700 ns    773889075 ns            8
scan         12 2 gb    932437437 ns    932398663 ns            8
scan     tbb 12 2 gb    821864750 ns    816418725 ns            8
scan avx     24 2 gb    658064975 ns    658026950 ns            8
scan avx tbb 24 2 gb    776583187 ns    775308750 ns            8
scan         24 2 gb    932390450 ns    932350050 ns            8
scan     tbb 24 2 gb    813443737 ns    805180375 ns            8
```

</details>

