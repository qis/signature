# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83870 ns        83926 ns         2048
data |  6 |     tbb |       21290 ns        21210 ns         2048
mask |  6 |         |       96224 ns        96292 ns         2048
mask |  6 |     tbb |       20329 ns        20239 ns         2048

data | 12 |         |       44848 ns        44888 ns         2048
data | 12 |     tbb |       15824 ns        15757 ns         2048
mask | 12 |         |       95681 ns        95754 ns         2048
mask | 12 |     tbb |       20382 ns        20312 ns         2048

data | 24 |         |       23896 ns        23902 ns         2048
data | 24 |     tbb |       12913 ns        12833 ns         2048
mask | 24 |         |       95501 ns        95565 ns         2048
mask | 24 |     tbb |       19451 ns        19392 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       37978 ns        37979 ns         1024
data |  6 | avx tbb |       27172 ns        27035 ns         1024
mask |  6 | avx     |       35338 ns        35374 ns         1024
mask |  6 | avx tbb |       27053 ns        26920 ns         1024

data | 12 | avx     |       37783 ns        37765 ns         1024
data | 12 | avx tbb |       27938 ns        27783 ns         1024
mask | 12 | avx     |       34785 ns        34775 ns         1024
mask | 12 | avx tbb |       27161 ns        27023 ns         1024

data | 24 | avx     |       35345 ns        35369 ns         1024
data | 24 | avx tbb |       27231 ns        27177 ns         1024
mask | 24 | avx     |       37625 ns        37646 ns         1024
mask | 24 | avx tbb |       28221 ns        28078 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      436133 ns       436285 ns         1024
data |  6 | avx     |       59915 ns        59931 ns         1024
data |  6 |     tbb |       54671 ns        54554 ns         1024
data |  6 | avx tbb |       41354 ns        41193 ns         1024
mask |  6 |         |      463923 ns       463968 ns         1024
mask |  6 | avx     |       56070 ns        56078 ns         1024
mask |  6 |     tbb |       67252 ns        67152 ns         1024
mask |  6 | avx tbb |       40921 ns        40790 ns         1024

data | 12 |         |      222484 ns       222585 ns         1024
data | 12 | avx     |       60260 ns        60269 ns         1024
data | 12 |     tbb |       48073 ns        47931 ns         1024
data | 12 | avx tbb |       41037 ns        40889 ns         1024
mask | 12 |         |      460494 ns       460646 ns         1024
mask | 12 | avx     |       55396 ns        55416 ns         1024
mask | 12 |     tbb |       66416 ns        66318 ns         1024
mask | 12 | avx tbb |       41354 ns        41250 ns         1024

data | 24 |         |      117348 ns       117421 ns         1024
data | 24 | avx     |       55937 ns        55962 ns         1024
data | 24 |     tbb |       44232 ns        44113 ns         1024
data | 24 | avx tbb |       43398 ns        43252 ns         1024
mask | 24 |         |      460869 ns       460995 ns         1024
mask | 24 | avx     |       56305 ns        56305 ns         1024
mask | 24 |     tbb |       66023 ns        65854 ns         1024
mask | 24 | avx tbb |       41174 ns        41023 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1703886 ns      1703960 ns          512
data |  6 | avx     |      245456 ns       245296 ns          512
data |  6 |     tbb |      310950 ns       310889 ns          512
data |  6 | avx tbb |      205584 ns       205417 ns          512
mask |  6 |         |     1845587 ns      1845682 ns          512
mask |  6 | avx     |      217952 ns       217759 ns          512
mask |  6 |     tbb |      332228 ns       332137 ns          512
mask |  6 | avx tbb |      199633 ns       199565 ns          512

data | 12 |         |      867928 ns       867983 ns          512
data | 12 | avx     |      242267 ns       242097 ns          512
data | 12 |     tbb |      278767 ns       278660 ns          512
data | 12 | avx tbb |      206096 ns       205966 ns          512
mask | 12 |         |     1854005 ns      1854118 ns          512
mask | 12 | avx     |      222252 ns       222063 ns          512
mask | 12 |     tbb |      336231 ns       336094 ns          512
mask | 12 | avx tbb |      199385 ns       199301 ns          512

data | 24 |         |      458609 ns       458516 ns          512
data | 24 | avx     |      223185 ns       222903 ns          512
data | 24 |     tbb |      255035 ns       254989 ns          512
data | 24 | avx tbb |      209536 ns       209433 ns          512
mask | 24 |         |     1843731 ns      1843844 ns          512
mask | 24 | avx     |      225428 ns       225260 ns          512
mask | 24 |     tbb |      343463 ns       343394 ns          512
mask | 24 | avx tbb |      196999 ns       196960 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6773325 ns      6773244 ns           64
data |  6 | avx     |      959041 ns       959255 ns           64
data |  6 |     tbb |      854716 ns       854650 ns           64
data |  6 | avx tbb |      680891 ns       680703 ns           64
mask |  6 |         |     7375806 ns      7375736 ns           64
mask |  6 | avx     |      844980 ns       844973 ns           64
mask |  6 |     tbb |     1034688 ns      1034611 ns           64
mask |  6 | avx tbb |      677430 ns       677267 ns           64

data | 12 |         |     3529848 ns      3529711 ns           64
data | 12 | avx     |      942142 ns       942052 ns           64
data | 12 |     tbb |      743603 ns       743611 ns           64
data | 12 | avx tbb |      687280 ns       687225 ns           64
mask | 12 |         |     7454661 ns      7441495 ns           64
mask | 12 | avx     |      853525 ns       853486 ns           64
mask | 12 |     tbb |     1030284 ns      1030244 ns           64
mask | 12 | avx tbb |      682253 ns       682203 ns           64

data | 24 |         |     1879483 ns      1879262 ns           64
data | 24 | avx     |      848177 ns       848170 ns           64
data | 24 |     tbb |      734627 ns       734634 ns           64
data | 24 | avx tbb |      682255 ns       682217 ns           64
mask | 24 |         |     7418195 ns      7417970 ns           64
mask | 24 | avx     |      865309 ns       865286 ns           64
mask | 24 |     tbb |     1050041 ns      1049967 ns           64
mask | 24 | avx tbb |      681831 ns       681802 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26955916 ns     26955791 ns           32
data |  6 | avx     |     3752478 ns      3752119 ns           32
data |  6 |     tbb |     2912687 ns      2912687 ns           32
data |  6 | avx tbb |     2425125 ns      2424566 ns           32
mask |  6 |         |    29196763 ns     29196572 ns           32
mask |  6 | avx     |     3349350 ns      3349316 ns           32
mask |  6 |     tbb |     3644294 ns      3643994 ns           32
mask |  6 | avx tbb |     2413422 ns      2413347 ns           32

data | 12 |         |    13741338 ns     13741184 ns           32
data | 12 | avx     |     3771700 ns      3771656 ns           32
data | 12 |     tbb |     2547194 ns      2547012 ns           32
data | 12 | avx tbb |     2430616 ns      2429972 ns           32
mask | 12 |         |    29234634 ns     29234434 ns           32
mask | 12 | avx     |     3244753 ns      3244547 ns           32
mask | 12 |     tbb |     3620794 ns      3620647 ns           32
mask | 12 | avx tbb |     2427391 ns      2427363 ns           32

data | 24 |         |     7216144 ns      7216106 ns           32
data | 24 | avx     |     3265247 ns      3265303 ns           32
data | 24 |     tbb |     2516059 ns      2515922 ns           32
data | 24 | avx tbb |     2430359 ns      2430313 ns           32
mask | 24 |         |    29192828 ns     29192603 ns           32
mask | 24 | avx     |     3320769 ns      3320456 ns           32
mask | 24 |     tbb |     3677762 ns      3677378 ns           32
mask | 24 | avx tbb |     2422703 ns      2423063 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107866944 ns    107843169 ns           16
data |  6 | avx     |    14965619 ns     14966100 ns           16
data |  6 |     tbb |    10963188 ns     10935225 ns           16
data |  6 | avx tbb |     9435750 ns      9435619 ns           16
mask |  6 |         |   117058537 ns    117007613 ns           16
mask |  6 | avx     |    13056588 ns     13056463 ns           16
mask |  6 |     tbb |    14070206 ns     13896381 ns           16
mask |  6 | avx tbb |     9425144 ns      9424950 ns           16

data | 12 |         |    54854219 ns     54815506 ns           16
data | 12 | avx     |    15054944 ns     15054775 ns           16
data | 12 |     tbb |     9663013 ns      9662913 ns           16
data | 12 | avx tbb |     9442706 ns      9442594 ns           16
mask | 12 |         |   116631063 ns    116592225 ns           16
mask | 12 | avx     |    12877200 ns     12877069 ns           16
mask | 12 |     tbb |    13983613 ns     13966469 ns           16
mask | 12 | avx tbb |     9411444 ns      9411256 ns           16

data | 24 |         |    28651481 ns     28651369 ns           16
data | 24 | avx     |    12903962 ns     12903987 ns           16
data | 24 |     tbb |     9647531 ns      9647456 ns           16
data | 24 | avx tbb |     9409237 ns      9409906 ns           16
mask | 24 |         |   116570331 ns    116531075 ns           16
mask | 24 | avx     |    13279187 ns     13279163 ns           16
mask | 24 |     tbb |    13965475 ns     13960894 ns           16
mask | 24 | avx tbb |     9439494 ns      9439400 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   215484938 ns    215484738 ns            8
data |  6 | avx     |    30314375 ns     30314125 ns            8
data |  6 |     tbb |    22237838 ns     21969975 ns            8
data |  6 | avx tbb |    18782950 ns     18782850 ns            8
mask |  6 |         |   233384825 ns    233384925 ns            8
mask |  6 | avx     |    26293412 ns     26293337 ns            8
mask |  6 |     tbb |    27983250 ns     27541838 ns            8
mask |  6 | avx tbb |    18712350 ns     18712212 ns            8

data | 12 |         |   109605400 ns    109605362 ns            8
data | 12 | avx     |    30173812 ns     30173700 ns            8
data | 12 |     tbb |    19180387 ns     19080562 ns            8
data | 12 | avx tbb |    18764125 ns     18763900 ns            8
mask | 12 |         |   233461875 ns    233462025 ns            8
mask | 12 | avx     |    26181663 ns     26181413 ns            8
mask | 12 |     tbb |    27653125 ns     27595750 ns            8
mask | 12 | avx tbb |    18737875 ns     18737625 ns            8

data | 24 |         |    57258837 ns     57258525 ns            8
data | 24 | avx     |    26030312 ns     26030162 ns            8
data | 24 |     tbb |    19047475 ns     19020088 ns            8
data | 24 | avx tbb |    18785338 ns     18772988 ns            8
mask | 24 |         |   233104775 ns    233104825 ns            8
mask | 24 | avx     |    25999762 ns     25999637 ns            8
mask | 24 |     tbb |    27663988 ns     27413475 ns            8
mask | 24 | avx tbb |    18765187 ns     18757562 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429569325 ns    429524313 ns            8
data |  6 | avx     |    60706687 ns     60706462 ns            8
data |  6 |     tbb |    43186375 ns     41702762 ns            8
data |  6 | avx tbb |    37426013 ns     37426113 ns            8
mask |  6 |         |   467431800 ns    467360525 ns            8
mask |  6 | avx     |    52330688 ns     52330688 ns            8
mask |  6 |     tbb |    55797888 ns     53586750 ns            8
mask |  6 | avx tbb |    37382687 ns     37205463 ns            8

data | 12 |         |   219173487 ns    219164300 ns            8
data | 12 | avx     |    60044775 ns     60044400 ns            8
data | 12 |     tbb |    38189625 ns     37601213 ns            8
data | 12 | avx tbb |    37377913 ns     37277738 ns            8
mask | 12 |         |   466696113 ns    466622875 ns            8
mask | 12 | avx     |    52168112 ns     52167775 ns            8
mask | 12 |     tbb |    55164975 ns     54739025 ns            8
mask | 12 | avx tbb |    37279075 ns     37279275 ns            8

data | 24 |         |   114298150 ns    114297950 ns            8
data | 24 | avx     |    52396750 ns     52396525 ns            8
data | 24 |     tbb |    38097300 ns     38043500 ns            8
data | 24 | avx tbb |    37346925 ns     37285137 ns            8
mask | 24 |         |   466520563 ns    466449800 ns            8
mask | 24 | avx     |    53240225 ns     53240062 ns            8
mask | 24 |     tbb |    55284863 ns     54461213 ns            8
mask | 24 | avx tbb |    37427750 ns     37250512 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   858499075 ns    858499088 ns            8
data |  6 | avx     |   120680825 ns    120604937 ns            8
data |  6 |     tbb |    86116275 ns     81985863 ns            8
data |  6 | avx tbb |    74646650 ns     73293250 ns            8
mask |  6 |         |   934030862 ns    933961262 ns            8
mask |  6 | avx     |   104667850 ns    104667737 ns            8
mask |  6 |     tbb |   111912537 ns    108174525 ns            8
mask |  6 | avx tbb |    74658350 ns     74503062 ns            8

data | 12 |         |   438297775 ns    438297737 ns            8
data | 12 | avx     |   121496012 ns    121421200 ns            8
data | 12 |     tbb |    76722500 ns     74894588 ns            8
data | 12 | avx tbb |    74668600 ns     74489988 ns            8
mask | 12 |         |   933593788 ns    933520425 ns            8
mask | 12 | avx     |   103473912 ns    103404125 ns            8
mask | 12 |     tbb |   110598763 ns    106235525 ns            8
mask | 12 | avx tbb |    74587862 ns     73878513 ns            8

data | 24 |         |   228703375 ns    228633175 ns            8
data | 24 | avx     |   104222925 ns    104145525 ns            8
data | 24 |     tbb |    76057187 ns     75594250 ns            8
data | 24 | avx tbb |    74576600 ns     74051175 ns            8
mask | 24 |         |   932241200 ns    932167263 ns            8
mask | 24 | avx     |   108442175 ns    108441725 ns            8
mask | 24 |     tbb |   111253938 ns    107993400 ns            8
mask | 24 | avx tbb |    74608000 ns     74055638 ns            8
```

</details>

