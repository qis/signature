# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83111 ns        83164 ns         2048
data |  6 |     tbb |       19677 ns        19603 ns         2048
mask |  6 |         |       70281 ns        70371 ns         2048
mask |  6 |     tbb |       28871 ns        28802 ns         2048

data | 12 |         |       45411 ns        45488 ns         2048
data | 12 |     tbb |       13327 ns        13268 ns         2048
mask | 12 |         |       67310 ns        67383 ns         2048
mask | 12 |     tbb |       27254 ns        27255 ns         2048

data | 24 |         |       23906 ns        23939 ns         2048
data | 24 |     tbb |       10957 ns        10920 ns         2048
mask | 24 |         |       67642 ns        67722 ns         2048
mask | 24 |     tbb |       27327 ns        27262 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       38041 ns        38140 ns         1024
data |  6 | avx tbb |       27138 ns        27000 ns         1024
mask |  6 | avx     |       35043 ns        35059 ns         1024
mask |  6 | avx tbb |       27485 ns        27355 ns         1024

data | 12 | avx     |       37621 ns        37663 ns         1024
data | 12 | avx tbb |       28542 ns        28392 ns         1024
mask | 12 | avx     |       34907 ns        34848 ns         1024
mask | 12 | avx tbb |       28103 ns        28017 ns         1024

data | 24 | avx     |       36539 ns        36584 ns         1024
data | 24 | avx tbb |       27207 ns        27043 ns         1024
mask | 24 | avx     |       36411 ns        36448 ns         1024
mask | 24 | avx tbb |       27515 ns        27450 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      433448 ns       433595 ns         1024
data |  6 | avx     |       60568 ns        60597 ns         1024
data |  6 |     tbb |       60601 ns        60501 ns         1024
data |  6 | avx tbb |       41306 ns        41128 ns         1024
mask |  6 |         |      327889 ns       327996 ns         1024
mask |  6 | avx     |       55697 ns        55691 ns         1024
mask |  6 |     tbb |      123736 ns       123685 ns         1024
mask |  6 | avx tbb |       40685 ns        40549 ns         1024

data | 12 |         |      221742 ns       221799 ns         1024
data | 12 | avx     |       59184 ns        59207 ns         1024
data | 12 |     tbb |       45168 ns        45068 ns         1024
data | 12 | avx tbb |       41357 ns        41210 ns         1024
mask | 12 |         |      328102 ns       328218 ns         1024
mask | 12 | avx     |       55640 ns        55650 ns         1024
mask | 12 |     tbb |      129481 ns       129285 ns         1024
mask | 12 | avx tbb |       43474 ns        42573 ns         1024

data | 24 |         |      117860 ns       117921 ns         1024
data | 24 | avx     |       56680 ns        56706 ns         1024
data | 24 |     tbb |       44787 ns        44655 ns         1024
data | 24 | avx tbb |       42210 ns        41923 ns         1024
mask | 24 |         |      328339 ns       328444 ns         1024
mask | 24 | avx     |       56965 ns        56952 ns         1024
mask | 24 |     tbb |      131465 ns       131459 ns         1024
mask | 24 | avx tbb |       41085 ns        40958 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1706274 ns      1706218 ns          512
data |  6 | avx     |      239786 ns       239623 ns          512
data |  6 |     tbb |      341797 ns       341684 ns          512
data |  6 | avx tbb |      207863 ns       207738 ns          512
mask |  6 |         |     1311836 ns      1311879 ns          512
mask |  6 | avx     |      216948 ns       216782 ns          512
mask |  6 |     tbb |      493838 ns       493814 ns          512
mask |  6 | avx tbb |      196335 ns       195326 ns          512

data | 12 |         |      865481 ns       865507 ns          512
data | 12 | avx     |      239006 ns       238796 ns          512
data | 12 |     tbb |      286420 ns       286268 ns          512
data | 12 | avx tbb |      211991 ns       211815 ns          512
mask | 12 |         |     1309120 ns      1309203 ns          512
mask | 12 | avx     |      219166 ns       218981 ns          512
mask | 12 |     tbb |      494462 ns       494431 ns          512
mask | 12 | avx tbb |      195951 ns       195817 ns          512

data | 24 |         |      460319 ns       460282 ns          512
data | 24 | avx     |      219876 ns       219679 ns          512
data | 24 |     tbb |      254341 ns       254244 ns          512
data | 24 | avx tbb |      206448 ns       206304 ns          512
mask | 24 |         |     1309578 ns      1309650 ns          512
mask | 24 | avx     |      222900 ns       222781 ns          512
mask | 24 |     tbb |      513707 ns       512589 ns          512
mask | 24 | avx tbb |      204455 ns       204360 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6920458 ns      6920095 ns           64
data |  6 | avx     |      949602 ns       949561 ns           64
data |  6 |     tbb |      915973 ns       915953 ns           64
data |  6 | avx tbb |      688987 ns       688905 ns           64
mask |  6 |         |     5227366 ns      5227184 ns           64
mask |  6 | avx     |      823902 ns       823844 ns           64
mask |  6 |     tbb |     1679433 ns      1679247 ns           64
mask |  6 | avx tbb |      682891 ns       682803 ns           64

data | 12 |         |     3489375 ns      3489139 ns           64
data | 12 | avx     |      939083 ns       938939 ns           64
data | 12 |     tbb |      772092 ns       771728 ns           64
data | 12 | avx tbb |      687409 ns       687361 ns           64
mask | 12 |         |     5233098 ns      5223456 ns           64
mask | 12 | avx     |      832928 ns       832917 ns           64
mask | 12 |     tbb |     1666220 ns      1666180 ns           64
mask | 12 | avx tbb |      682936 ns       682800 ns           64

data | 24 |         |     1879630 ns      1879552 ns           64
data | 24 | avx     |      837163 ns       837141 ns           64
data | 24 |     tbb |      738172 ns       738598 ns           64
data | 24 | avx tbb |      685355 ns       685255 ns           64
mask | 24 |         |     5226231 ns      5226098 ns           64
mask | 24 | avx     |      839472 ns       839411 ns           64
mask | 24 |     tbb |     1660550 ns      1660309 ns           64
mask | 24 | avx tbb |      686836 ns       686981 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    27033116 ns     27033169 ns           32
data |  6 | avx     |     3704950 ns      3704853 ns           32
data |  6 |     tbb |     3062253 ns      3062094 ns           32
data |  6 | avx tbb |     2442009 ns      2441900 ns           32
mask |  6 |         |    20673919 ns     20673772 ns           32
mask |  6 | avx     |     3235875 ns      3235847 ns           32
mask |  6 |     tbb |     6116281 ns      5922372 ns           32
mask |  6 | avx tbb |     2441794 ns      2441691 ns           32

data | 12 |         |    13810253 ns     13810138 ns           32
data | 12 | avx     |     3699337 ns      3699281 ns           32
data | 12 |     tbb |     2549859 ns      2549706 ns           32
data | 12 | avx tbb |     2444681 ns      2444525 ns           32
mask | 12 |         |    20616875 ns     20616444 ns           32
mask | 12 | avx     |     3238084 ns      3238103 ns           32
mask | 12 |     tbb |     6128247 ns      5960825 ns           32
mask | 12 | avx tbb |     2429978 ns      2429447 ns           32

data | 24 |         |     7193281 ns      7193197 ns           32
data | 24 | avx     |     3254297 ns      3254275 ns           32
data | 24 |     tbb |     2533941 ns      2534259 ns           32
data | 24 | avx tbb |     2441044 ns      2421322 ns           32
mask | 24 |         |    20835650 ns     20835372 ns           32
mask | 24 | avx     |     3273809 ns      3273766 ns           32
mask | 24 |     tbb |     6111106 ns      5975613 ns           32
mask | 24 | avx tbb |     2462019 ns      2461853 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107264394 ns    107263963 ns           16
data |  6 | avx     |    14812044 ns     14811369 ns           16
data |  6 |     tbb |    11644288 ns     11463856 ns           16
data |  6 | avx tbb |     9426669 ns      9378513 ns           16
mask |  6 |         |    82226250 ns     82202850 ns           16
mask |  6 | avx     |    12885625 ns     12885500 ns           16
mask |  6 |     tbb |    23839169 ns     22113600 ns           16
mask |  6 | avx tbb |     9416213 ns      9406150 ns           16

data | 12 |         |    54765344 ns     54764738 ns           16
data | 12 | avx     |    15067681 ns     15067663 ns           16
data | 12 |     tbb |     9735688 ns      9735244 ns           16
data | 12 | avx tbb |     9471275 ns      9471269 ns           16
mask | 12 |         |    82430506 ns     82408919 ns           16
mask | 12 | avx     |    12941206 ns     12940669 ns           16
mask | 12 |     tbb |    23882725 ns     22472569 ns           16
mask | 12 | avx tbb |     9445337 ns      9437200 ns           16

data | 24 |         |    28522844 ns     28499394 ns           16
data | 24 | avx     |    12850744 ns     12850719 ns           16
data | 24 |     tbb |     9671494 ns      9670906 ns           16
data | 24 | avx tbb |     9435756 ns      9431338 ns           16
mask | 24 |         |    82212463 ns     82190981 ns           16
mask | 24 | avx     |    13156987 ns     13156856 ns           16
mask | 24 |     tbb |    23914394 ns     22348681 ns           16
mask | 24 | avx tbb |     9455469 ns      9364644 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   215083975 ns    215082300 ns            8
data |  6 | avx     |    29490750 ns     29490563 ns            8
data |  6 |     tbb |    23065975 ns     23066112 ns            8
data |  6 | avx tbb |    18741912 ns     18660775 ns            8
mask |  6 |         |   164526787 ns    164525937 ns            8
mask |  6 | avx     |    26112963 ns     26112825 ns            8
mask |  6 |     tbb |    47944925 ns     43983537 ns            8
mask |  6 | avx tbb |    18798487 ns     18613150 ns            8

data | 12 |         |   109703175 ns    109701525 ns            8
data | 12 | avx     |    29821825 ns     29778038 ns            8
data | 12 |     tbb |    19258425 ns     18744250 ns            8
data | 12 | avx tbb |    18751325 ns     18751350 ns            8
mask | 12 |         |   164655725 ns    164611550 ns            8
mask | 12 | avx     |    25783863 ns     25783662 ns            8
mask | 12 |     tbb |    47910075 ns     42752625 ns            8
mask | 12 | avx tbb |    18785313 ns     18720225 ns            8

data | 24 |         |    57178025 ns     57177812 ns            8
data | 24 | avx     |    25795275 ns     25795100 ns            8
data | 24 |     tbb |    19207062 ns     18721825 ns            8
data | 24 | avx tbb |    18726500 ns     18123737 ns            8
mask | 24 |         |   164750675 ns    164750600 ns            8
mask | 24 | avx     |    26314550 ns     26314338 ns            8
mask | 24 |     tbb |    47759937 ns     45781762 ns            8
mask | 24 | avx tbb |    18844187 ns     18275425 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429163712 ns    429122688 ns            8
data |  6 | avx     |    59266187 ns     59265900 ns            8
data |  6 |     tbb |    46051463 ns     42525487 ns            8
data |  6 | avx tbb |    37517462 ns     37247738 ns            8
mask |  6 |         |   329732662 ns    329732763 ns            8
mask |  6 | avx     |    51618213 ns     51618138 ns            8
mask |  6 |     tbb |    95632537 ns     86264663 ns            8
mask |  6 | avx tbb |    37540400 ns     36142675 ns            8

data | 12 |         |   220517675 ns    220476450 ns            8
data | 12 | avx     |    59661700 ns     59661525 ns            8
data | 12 |     tbb |    38246900 ns     37095188 ns            8
data | 12 | avx tbb |    37437638 ns     35929875 ns            8
mask | 12 |         |   329265338 ns    329265362 ns            8
mask | 12 | avx     |    51789888 ns     51789900 ns            8
mask | 12 |     tbb |    95634987 ns     85186875 ns            8
mask | 12 | avx tbb |    37415437 ns     36279925 ns            8

data | 24 |         |   114188487 ns    114188425 ns            8
data | 24 | avx     |    51498975 ns     51498625 ns            8
data | 24 |     tbb |    38382950 ns     38383113 ns            8
data | 24 | avx tbb |    37428437 ns     34889563 ns            8
mask | 24 |         |   329541225 ns    329541400 ns            8
mask | 24 | avx     |    52490912 ns     52490650 ns            8
mask | 24 |     tbb |    95093075 ns     80877875 ns            8
mask | 24 | avx tbb |    37393888 ns     33350550 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   858933525 ns    858933612 ns            8
data |  6 | avx     |   120157737 ns    120157550 ns            8
data |  6 |     tbb |    92031575 ns     77666962 ns            8
data |  6 | avx tbb |    74845637 ns     65536550 ns            8
mask |  6 |         |   658411500 ns    658372937 ns            8
mask |  6 | avx     |   103726312 ns    103725925 ns            8
mask |  6 |     tbb |   190661775 ns    154474325 ns            8
mask |  6 | avx tbb |    74873475 ns     69746275 ns            8

data | 12 |         |   438199650 ns    438199575 ns            8
data | 12 | avx     |   119190987 ns    119181212 ns            8
data | 12 |     tbb |    76550038 ns     71798563 ns            8
data | 12 | avx tbb |    75063050 ns     64888212 ns            8
mask | 12 |         |   658143013 ns    658103338 ns            8
mask | 12 | avx     |   103677687 ns    103677387 ns            8
mask | 12 |     tbb |   190645137 ns    143143962 ns            8
mask | 12 | avx tbb |    74920512 ns     69980512 ns            8

data | 24 |         |   228430950 ns    228391725 ns            8
data | 24 | avx     |   104169525 ns    104169150 ns            8
data | 24 |     tbb |    76532237 ns     74167400 ns            8
data | 24 | avx tbb |    74883225 ns     72145175 ns            8
mask | 24 |         |   658116663 ns    658077975 ns            8
mask | 24 | avx     |   104874688 ns    104874400 ns            8
mask | 24 |     tbb |   191003025 ns    158395037 ns            8
mask | 24 | avx tbb |    74656688 ns     67623138 ns            8
```

</details>

