# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>1 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1239 ns         1233 ns         4096
data |  6 | avx            785 ns          784 ns         4096
data |  6 |     tbb       7575 ns         7617 ns         4096
data |  6 | avx tbb       5473 ns         5478 ns         4096
mask |  6 |               1200 ns         1211 ns         4096
mask |  6 | avx            788 ns          772 ns         4096
mask |  6 |     tbb       5323 ns         5347 ns         4096
mask |  6 | avx tbb       5408 ns         5448 ns         4096

data | 12 |               1151 ns         1149 ns         4096
data | 12 | avx            868 ns          871 ns         4096
data | 12 |     tbb       7605 ns         7650 ns         4096
data | 12 | avx tbb       5500 ns         5508 ns         4096
mask | 12 |               1237 ns         1243 ns         4096
mask | 12 | avx            810 ns          812 ns         4096
mask | 12 |     tbb       5391 ns         5426 ns         4096
mask | 12 | avx tbb       5268 ns         5304 ns         4096

data | 24 |               1019 ns         1025 ns         4096
data | 24 | avx            859 ns          857 ns         4096
data | 24 |     tbb       6189 ns         6235 ns         4096
data | 24 | avx tbb       4795 ns         4809 ns         4096
mask | 24 |               1241 ns         1248 ns         4096
mask | 24 | avx            827 ns          832 ns         4096
mask | 24 |     tbb       4765 ns         4812 ns         4096
mask | 24 | avx tbb       4670 ns         4692 ns         4096
```

</details>

<details>
<summary>2 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1795 ns         1838 ns         4096
data |  6 | avx            888 ns          889 ns         4096
data |  6 |     tbb       7672 ns         7711 ns         4096
data |  6 | avx tbb       5517 ns         5530 ns         4096
mask |  6 |               1732 ns         1772 ns         4096
mask |  6 | avx            835 ns          832 ns         4096
mask |  6 |     tbb       5471 ns         5516 ns         4096
mask |  6 | avx tbb       5402 ns         5430 ns         4096

data | 12 |               1363 ns         1365 ns         4096
data | 12 | avx            883 ns          891 ns         4096
data | 12 |     tbb       7847 ns         7892 ns         4096
data | 12 | avx tbb       5471 ns         5486 ns         4096
mask | 12 |               1718 ns         1757 ns         4096
mask | 12 | avx            835 ns          842 ns         4096
mask | 12 |     tbb       5514 ns         5544 ns         4096
mask | 12 | avx tbb       5323 ns         5348 ns         4096

data | 24 |               1144 ns         1148 ns         4096
data | 24 | avx            895 ns          898 ns         4096
data | 24 |     tbb       7571 ns         7612 ns         4096
data | 24 | avx tbb       5554 ns         5560 ns         4096
mask | 24 |               1729 ns         1770 ns         4096
mask | 24 | avx            859 ns          861 ns         4096
mask | 24 |     tbb       5484 ns         5528 ns         4096
mask | 24 | avx tbb       5298 ns         5336 ns         4096
```

</details>

<details>
<summary>4 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               2666 ns         2709 ns         4096
data |  6 | avx            942 ns          939 ns         4096
data |  6 |     tbb       7822 ns         7863 ns         4096
data |  6 | avx tbb       5557 ns         5570 ns         4096
mask |  6 |               2693 ns         2743 ns         4096
mask |  6 | avx            889 ns          880 ns         4096
mask |  6 |     tbb       5625 ns         5671 ns         4096
mask |  6 | avx tbb       5407 ns         5436 ns         4096

data | 12 |               1795 ns         1840 ns         4096
data | 12 | avx            929 ns          940 ns         4096
data | 12 |     tbb       7782 ns         7826 ns         4096
data | 12 | avx tbb       5554 ns         5561 ns         4096
mask | 12 |               2703 ns         2760 ns         4096
mask | 12 | avx            893 ns          900 ns         4096
mask | 12 |     tbb       5689 ns         5732 ns         4096
mask | 12 | avx tbb       5377 ns         5410 ns         4096

data | 24 |               1371 ns         1373 ns         4096
data | 24 | avx            943 ns          949 ns         4096
data | 24 |     tbb       7518 ns         7565 ns         4096
data | 24 | avx tbb       5451 ns         5460 ns         4096
mask | 24 |               2718 ns         2760 ns         4096
mask | 24 | avx            907 ns          906 ns         4096
mask | 24 |     tbb       5728 ns         5772 ns         4096
mask | 24 | avx tbb       5346 ns         5383 ns         4096
```

</details>

<details>
<summary>8 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               4443 ns         4483 ns         4096
data |  6 | avx           1057 ns         1054 ns         4096
data |  6 |     tbb       8003 ns         8060 ns         4096
data |  6 | avx tbb       5651 ns         5652 ns         4096
mask |  6 |               4638 ns         4682 ns         4096
mask |  6 | avx            966 ns          969 ns         4096
mask |  6 |     tbb       6074 ns         6109 ns         4096
mask |  6 | avx tbb       5442 ns         5480 ns         4096

data | 12 |               2701 ns         2751 ns         4096
data | 12 | avx           1050 ns         1051 ns         4096
data | 12 |     tbb       7847 ns         7907 ns         4096
data | 12 | avx tbb       5669 ns         5680 ns         4096
mask | 12 |               4630 ns         4678 ns         4096
mask | 12 | avx            969 ns          974 ns         4096
mask | 12 |     tbb       6152 ns         6195 ns         4096
mask | 12 | avx tbb       5498 ns         5540 ns         4096

data | 24 |               1730 ns         1780 ns         4096
data | 24 | avx           1060 ns         1058 ns         4096
data | 24 |     tbb       7608 ns         7651 ns         4096
data | 24 | avx tbb       5598 ns         5619 ns         4096
mask | 24 |               4984 ns         5062 ns         4096
mask | 24 | avx            982 ns          986 ns         4096
mask | 24 |     tbb       5723 ns         5774 ns         4096
mask | 24 | avx tbb       5380 ns         5406 ns         4096
```

</details>

<details>
<summary>16 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               8126 ns         8162 ns         4096
data |  6 | avx           1290 ns         1281 ns         4096
data |  6 |     tbb       8420 ns         8462 ns         4096
data |  6 | avx tbb       5965 ns         5969 ns         4096
mask |  6 |               8517 ns         8567 ns         4096
mask |  6 | avx           1161 ns         1152 ns         4096
mask |  6 |     tbb       6931 ns         6963 ns         4096
mask |  6 | avx tbb       5699 ns         5762 ns         4096

data | 12 |               4550 ns         4597 ns         4096
data | 12 | avx           1304 ns         1292 ns         4096
data | 12 |     tbb       8090 ns         8133 ns         4096
data | 12 | avx tbb       5774 ns         5774 ns         4096
mask | 12 |               8528 ns         8573 ns         4096
mask | 12 | avx           1172 ns         1166 ns         4096
mask | 12 |     tbb       6777 ns         6819 ns         4096
mask | 12 | avx tbb       5614 ns         5636 ns         4096

data | 24 |               2760 ns         2795 ns         4096
data | 24 | avx           1290 ns         1287 ns         4096
data | 24 |     tbb       7811 ns         7848 ns         4096
data | 24 | avx tbb       5695 ns         5704 ns         4096
mask | 24 |               8511 ns         8576 ns         4096
mask | 24 | avx           1185 ns         1180 ns         4096
mask | 24 |     tbb       6720 ns         6761 ns         4096
mask | 24 | avx tbb       5655 ns         5665 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              28260 ns        28323 ns         4096
data |  6 | avx           2479 ns         2471 ns         4096
data |  6 |     tbb      11102 ns        11142 ns         4096
data |  6 | avx tbb       6303 ns         6317 ns         4096
mask |  6 |              30067 ns        30139 ns         4096
mask |  6 | avx           2479 ns         2470 ns         4096
mask |  6 |     tbb      10080 ns        10107 ns         4096
mask |  6 | avx tbb       6211 ns         6234 ns         4096

data | 12 |              15094 ns        15142 ns         4096
data | 12 | avx           2650 ns         2631 ns         4096
data | 12 |     tbb       9448 ns         9491 ns         4096
data | 12 | avx tbb       6503 ns         6510 ns         4096
mask | 12 |              31334 ns        31421 ns         4096
mask | 12 | avx           2437 ns         2432 ns         4096
mask | 12 |     tbb       9727 ns         9767 ns         4096
mask | 12 | avx tbb       6239 ns         6270 ns         4096

data | 24 |               7936 ns         7997 ns         4096
data | 24 | avx           2695 ns         2670 ns         4096
data | 24 |     tbb       8761 ns         8799 ns         4096
data | 24 | avx tbb       6319 ns         6329 ns         4096
mask | 24 |              30148 ns        30215 ns         4096
mask | 24 | avx           2321 ns         2318 ns         4096
mask | 24 |     tbb       9715 ns         9733 ns         4096
mask | 24 | avx tbb       6085 ns         6128 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             109613 ns       109710 ns         2048
data |  6 | avx           8261 ns         8279 ns         2048
data |  6 |     tbb      22274 ns        22185 ns         2048
data |  6 | avx tbb      10133 ns        10015 ns         2048
mask |  6 |             118899 ns       118972 ns         2048
mask |  6 | avx           7660 ns         7687 ns         2048
mask |  6 |     tbb      22641 ns        22568 ns         2048
mask |  6 | avx tbb       9652 ns         9572 ns         2048

data | 12 |              57107 ns        57182 ns         2048
data | 12 | avx           8743 ns         8763 ns         2048
data | 12 |     tbb      15544 ns        15454 ns         2048
data | 12 | avx tbb      10026 ns         9918 ns         2048
mask | 12 |             115512 ns       115597 ns         2048
mask | 12 | avx           7818 ns         7842 ns         2048
mask | 12 |     tbb      22691 ns        22595 ns         2048
mask | 12 | avx tbb       9509 ns         9425 ns         2048

data | 24 |              29073 ns        29151 ns         2048
data | 24 | avx           8296 ns         8298 ns         2048
data | 24 |     tbb      13035 ns        12951 ns         2048
data | 24 | avx tbb      10054 ns         9937 ns         2048
mask | 24 |             116179 ns       116261 ns         2048
mask | 24 | avx           7599 ns         7610 ns         2048
mask | 24 |     tbb      22554 ns        22465 ns         2048
mask | 24 | avx tbb       9587 ns         9503 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             426978 ns       427088 ns         1024
data |  6 | avx          55031 ns        55060 ns         1024
data |  6 |     tbb      55663 ns        55530 ns         1024
data |  6 | avx tbb      40669 ns        40471 ns         1024
mask |  6 |             498106 ns       498220 ns         1024
mask |  6 | avx          61879 ns        61892 ns         1024
mask |  6 |     tbb      96769 ns        96473 ns         1024
mask |  6 | avx tbb      60840 ns        60781 ns         1024

data | 12 |             235194 ns       235315 ns         1024
data | 12 | avx          60529 ns        60550 ns         1024
data | 12 |     tbb      58315 ns        58261 ns         1024
data | 12 | avx tbb      45215 ns        45071 ns         1024
mask | 12 |             473078 ns       473242 ns         1024
mask | 12 | avx          54045 ns        54077 ns         1024
mask | 12 |     tbb      65481 ns        65349 ns         1024
mask | 12 | avx tbb      42189 ns        42079 ns         1024

data | 24 |             117614 ns       117650 ns         1024
data | 24 | avx          54991 ns        54955 ns         1024
data | 24 |     tbb      43108 ns        43009 ns         1024
data | 24 | avx tbb      41725 ns        41597 ns         1024
mask | 24 |             477217 ns       477366 ns         1024
mask | 24 | avx          53018 ns        53010 ns         1024
mask | 24 |     tbb      65396 ns        65272 ns         1024
mask | 24 | avx tbb      40660 ns        40542 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            1703505 ns      1703562 ns          512
data |  6 | avx         238024 ns       237847 ns          512
data |  6 |     tbb     319509 ns       319461 ns          512
data |  6 | avx tbb     201476 ns       201385 ns          512
mask |  6 |            1872063 ns      1872107 ns          512
mask |  6 | avx         212489 ns       212315 ns          512
mask |  6 |     tbb     334718 ns       333115 ns          512
mask |  6 | avx tbb     194060 ns       194059 ns          512

data | 12 |             866810 ns       866855 ns          512
data | 12 | avx         228658 ns       228485 ns          512
data | 12 |     tbb     272908 ns       272918 ns          512
data | 12 | avx tbb     201092 ns       201029 ns          512
mask | 12 |            1855273 ns      1855402 ns          512
mask | 12 | avx         212638 ns       212445 ns          512
mask | 12 |     tbb     342575 ns       342544 ns          512
mask | 12 | avx tbb     194891 ns       193392 ns          512

data | 24 |             465513 ns       465470 ns          512
data | 24 | avx         228515 ns       228376 ns          512
data | 24 |     tbb     254325 ns       254448 ns          512
data | 24 | avx tbb     201926 ns       201875 ns          512
mask | 24 |            1866796 ns      1866928 ns          512
mask | 24 | avx         212621 ns       212447 ns          512
mask | 24 |     tbb     332238 ns       332423 ns          512
mask | 24 | avx tbb     192776 ns       192741 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            6953942 ns      6953820 ns           64
data |  6 | avx         891088 ns       891102 ns           64
data |  6 |     tbb     863827 ns       863891 ns           64
data |  6 | avx tbb     683320 ns       683377 ns           64
mask |  6 |            7413955 ns      7413947 ns           64
mask |  6 | avx         808636 ns       808647 ns           64
mask |  6 |     tbb    1051472 ns      1051664 ns           64
mask |  6 | avx tbb     676709 ns       676605 ns           64

data | 12 |            3492920 ns      3492900 ns           64
data | 12 | avx         875544 ns       875533 ns           64
data | 12 |     tbb     749464 ns       749545 ns           64
data | 12 | avx tbb     684580 ns       684566 ns           64
mask | 12 |            7386409 ns      7386348 ns           64
mask | 12 | avx         812528 ns       812486 ns           64
mask | 12 |     tbb    1036419 ns      1036425 ns           64
mask | 12 | avx tbb     675953 ns       676145 ns           64

data | 24 |            1844270 ns      1844195 ns           64
data | 24 | avx         878573 ns       878592 ns           64
data | 24 |     tbb     733270 ns       733281 ns           64
data | 24 | avx tbb     680567 ns       680569 ns           64
mask | 24 |            7399723 ns      7399388 ns           64
mask | 24 | avx         809795 ns       809756 ns           64
mask | 24 |     tbb    1036528 ns      1036394 ns           64
mask | 24 | avx tbb     677402 ns       677412 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           26816516 ns     26816394 ns           32
data |  6 | avx        3559638 ns      3559350 ns           32
data |  6 |     tbb    2899725 ns      2900097 ns           32
data |  6 | avx tbb    2435628 ns      2436284 ns           32
mask |  6 |           29128925 ns     29128637 ns           32
mask |  6 | avx        3090822 ns      3090572 ns           32
mask |  6 |     tbb    3649172 ns      3649103 ns           32
mask |  6 | avx tbb    2419381 ns      2419131 ns           32

data | 12 |           13803878 ns     13803634 ns           32
data | 12 | avx        3517184 ns      3516981 ns           32
data | 12 |     tbb    2544100 ns      2544853 ns           32
data | 12 | avx tbb    2430022 ns      2430294 ns           32
mask | 12 |           29179466 ns     29179150 ns           32
mask | 12 | avx        3168353 ns      3168069 ns           32
mask | 12 |     tbb    3626597 ns      3626519 ns           32
mask | 12 | avx tbb    2411622 ns      2411762 ns           32

data | 24 |            7255256 ns      7255019 ns           32
data | 24 | avx        3096838 ns      3096613 ns           32
data | 24 |     tbb    2497547 ns      2497453 ns           32
data | 24 | avx tbb    2435662 ns      2435628 ns           32
mask | 24 |           29091441 ns     29091125 ns           32
mask | 24 | avx        3123763 ns      3123569 ns           32
mask | 24 |     tbb    3628403 ns      3628334 ns           32
mask | 24 | avx tbb    2422106 ns      2422153 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          107266706 ns    107237556 ns           16
data |  6 | avx       14536669 ns     14536619 ns           16
data |  6 |     tbb   10925306 ns     10875794 ns           16
data |  6 | avx tbb    9399081 ns      9400231 ns           16
mask |  6 |          128007237 ns    127976050 ns           16
mask |  6 | avx       14124931 ns     14124731 ns           16
mask |  6 |     tbb   15344881 ns     15154681 ns           16
mask |  6 | avx tbb    9664231 ns      9663806 ns           16

data | 12 |           57789687 ns     57759700 ns           16
data | 12 | avx       15770650 ns     15770406 ns           16
data | 12 |     tbb    9929794 ns      9917731 ns           16
data | 12 | avx tbb    9634506 ns      9633888 ns           16
mask | 12 |          133137388 ns    133107437 ns           16
mask | 12 | avx       13299475 ns     13299150 ns           16
mask | 12 |     tbb   15135581 ns     14995294 ns           16
mask | 12 | avx tbb    9564125 ns      9563806 ns           16

data | 24 |           30072231 ns     30071794 ns           16
data | 24 | avx       13413625 ns     13413525 ns           16
data | 24 |     tbb    9860538 ns      9834494 ns           16
data | 24 | avx tbb    9588900 ns      9588613 ns           16
mask | 24 |          123921800 ns    123891856 ns           16
mask | 24 | avx       14357862 ns     14357550 ns           16
mask | 24 |     tbb   15212125 ns     15125919 ns           16
mask | 24 | avx tbb    9723269 ns      9722013 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          225089862 ns    225088212 ns            8
data |  6 | avx       30731838 ns     30731600 ns            8
data |  6 |     tbb   23386913 ns     23077913 ns            8
data |  6 | avx tbb   19372062 ns     19367662 ns            8
mask |  6 |          253755938 ns    253497125 ns            8
mask |  6 | avx       27896275 ns     27895825 ns            8
mask |  6 |     tbb   30060950 ns     29666912 ns            8
mask |  6 | avx tbb   19259100 ns     19258350 ns            8

data | 12 |          113736450 ns    113736375 ns            8
data | 12 | avx       30710500 ns     30710237 ns            8
data | 12 |     tbb   19218900 ns     19096900 ns            8
data | 12 | avx tbb   18734500 ns     18734463 ns            8
mask | 12 |          233872937 ns    233873100 ns            8
mask | 12 | avx       25512275 ns     25512088 ns            8
mask | 12 |     tbb   28028125 ns     27611350 ns            8
mask | 12 | avx tbb   18711475 ns     18711438 ns            8

data | 24 |           56941825 ns     56883275 ns            8
data | 24 | avx       25518162 ns     25518050 ns            8
data | 24 |     tbb   19043825 ns     19043800 ns            8
data | 24 | avx tbb   18735825 ns     18734738 ns            8
mask | 24 |          233177375 ns    233176712 ns            8
mask | 24 | avx       26069650 ns     26069300 ns            8
mask | 24 |     tbb   28000400 ns     27508112 ns            8
mask | 24 | avx tbb   18717238 ns     18717087 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          428905975 ns    428848163 ns            8
data |  6 | avx       59389325 ns     59389163 ns            8
data |  6 |     tbb   43222375 ns     42393388 ns            8
data |  6 | avx tbb   37337850 ns     37136375 ns            8
mask |  6 |          465519200 ns    465460150 ns            8
mask |  6 | avx       51371663 ns     51371462 ns            8
mask |  6 |     tbb   55188500 ns     54499437 ns            8
mask |  6 | avx tbb   37280737 ns     37273500 ns            8

data | 12 |          219020587 ns    218964112 ns            8
data | 12 | avx       58457263 ns     58456862 ns            8
data | 12 |     tbb   38740638 ns     38261163 ns            8
data | 12 | avx tbb   37350937 ns     37350950 ns            8
mask | 12 |          465677750 ns    465619013 ns            8
mask | 12 | avx       51632262 ns     51632038 ns            8
mask | 12 |     tbb   56150825 ns     54310713 ns            8
mask | 12 | avx tbb   37342200 ns     37297038 ns            8

data | 24 |          113891562 ns    113891475 ns            8
data | 24 | avx       51748400 ns     51749425 ns            8
data | 24 |     tbb   38016875 ns     37999537 ns            8
data | 24 | avx tbb   37459475 ns     37436212 ns            8
mask | 24 |          466626063 ns    466564538 ns            8
mask | 24 | avx       52067300 ns     52066987 ns            8
mask | 24 |     tbb   55902000 ns     54760738 ns            8
mask | 24 | avx tbb   37373688 ns     37207800 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          859166450 ns    859166225 ns            8
data |  6 | avx      118911237 ns    118854975 ns            8
data |  6 |     tbb   87683212 ns     85224713 ns            8
data |  6 | avx tbb   74653600 ns     74316075 ns            8
mask |  6 |          933612263 ns    933558888 ns            8
mask |  6 | avx      103908262 ns    103908212 ns            8
mask |  6 |     tbb  110319412 ns    110039750 ns            8
mask |  6 | avx tbb   74596350 ns     73392425 ns            8

data | 12 |          439013425 ns    439013387 ns            8
data | 12 | avx      118196113 ns    118139500 ns            8
data | 12 |     tbb   76503800 ns     75325000 ns            8
data | 12 | avx tbb   74695125 ns     73701813 ns            8
mask | 12 |          932706087 ns    932651262 ns            8
mask | 12 | avx      103444575 ns    103444300 ns            8
mask | 12 |     tbb  110784975 ns    106799837 ns            8
mask | 12 | avx tbb   74627950 ns     74290750 ns            8

data | 24 |          228507087 ns    228451425 ns            8
data | 24 | avx      103772012 ns    103716150 ns            8
data | 24 |     tbb   75863312 ns     75568013 ns            8
data | 24 | avx tbb   74693650 ns     73349225 ns            8
mask | 24 |          932638800 ns    932575763 ns            8
mask | 24 | avx      105362513 ns    105362475 ns            8
mask | 24 |     tbb  110973088 ns    108655062 ns            8
mask | 24 | avx tbb   74637325 ns     74252125 ns            8
```

</details>

