# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       90515 ns        82969 ns         2048
data |  6 |     tbb |       57048 ns        57061 ns         2048
mask |  6 |         |       96119 ns        96169 ns         2048
mask |  6 |     tbb |       54819 ns        54849 ns         2048

data | 12 |         |       45820 ns        45844 ns         2048
data | 12 |     tbb |       37788 ns        37773 ns         2048
mask | 12 |         |       96101 ns        96167 ns         2048
mask | 12 |     tbb |       63467 ns        63584 ns         2048

data | 24 |         |       23702 ns        23701 ns         2048
data | 24 |     tbb |       20803 ns        20800 ns         2048
mask | 24 |         |       97850 ns        97905 ns         2048
mask | 24 |     tbb |       58825 ns        58896 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       38728 ns        38767 ns         1024
data |  6 | avx tbb |       44098 ns        44096 ns         1024
mask |  6 | avx     |       34709 ns        34715 ns         1024
mask |  6 | avx tbb |       41091 ns        41083 ns         1024

data | 12 | avx     |       39529 ns        39530 ns         1024
data | 12 | avx tbb |       43216 ns        43215 ns         1024
mask | 12 | avx     |       34200 ns        34235 ns         1024
mask | 12 | avx tbb |       41575 ns        41681 ns         1024

data | 24 | avx     |       36523 ns        36539 ns         1024
data | 24 | avx tbb |       43883 ns        43844 ns         1024
mask | 24 | avx     |       34918 ns        34936 ns         1024
mask | 24 | avx tbb |       42108 ns        42110 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      434793 ns       434921 ns         1024
data |  6 | avx     |       61952 ns        61970 ns         1024
data |  6 |     tbb |      209907 ns       209961 ns         1024
data |  6 | avx tbb |       65073 ns        65183 ns         1024
mask |  6 |         |      471157 ns       471270 ns         1024
mask |  6 | avx     |       55346 ns        55361 ns         1024
mask |  6 |     tbb |      211725 ns       211752 ns         1024
mask |  6 | avx tbb |       64079 ns        64199 ns         1024

data | 12 |         |      225179 ns       225232 ns         1024
data | 12 | avx     |       62011 ns        62010 ns         1024
data | 12 |     tbb |      159532 ns       159455 ns         1024
data | 12 | avx tbb |       66004 ns        66069 ns         1024
mask | 12 |         |      459541 ns       459685 ns         1024
mask | 12 | avx     |       55458 ns        55475 ns         1024
mask | 12 |     tbb |      241519 ns       241669 ns         1024
mask | 12 | avx tbb |       64929 ns        65033 ns         1024

data | 24 |         |      122149 ns       122259 ns         1024
data | 24 | avx     |       58326 ns        58321 ns         1024
data | 24 |     tbb |      101458 ns       101635 ns         1024
data | 24 | avx tbb |       66402 ns        66456 ns         1024
mask | 24 |         |      469850 ns       470014 ns         1024
mask | 24 | avx     |       56489 ns        56520 ns         1024
mask | 24 |     tbb |      258606 ns       258878 ns         1024
mask | 24 | avx tbb |       64342 ns        64429 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1714944 ns      1715100 ns          512
data |  6 | avx     |      251304 ns       251161 ns          512
data |  6 |     tbb |      583923 ns       583879 ns          512
data |  6 | avx tbb |      220067 ns       219971 ns          512
mask |  6 |         |     1845148 ns      1845272 ns          512
mask |  6 | avx     |      212901 ns       212748 ns          512
mask |  6 |     tbb |      530617 ns       530545 ns          512
mask |  6 | avx tbb |      216819 ns       216702 ns          512

data | 12 |         |      884751 ns       884851 ns          512
data | 12 | avx     |      253407 ns       253305 ns          512
data | 12 |     tbb |      398226 ns       398140 ns          512
data | 12 | avx tbb |      229754 ns       229730 ns          512
mask | 12 |         |     1847174 ns      1847290 ns          512
mask | 12 | avx     |      215911 ns       215796 ns          512
mask | 12 |     tbb |      570736 ns       570703 ns          512
mask | 12 | avx tbb |      220859 ns       220922 ns          512

data | 24 |         |      464005 ns       463999 ns          512
data | 24 | avx     |      228295 ns       228186 ns          512
data | 24 |     tbb |      299767 ns       299762 ns          512
data | 24 | avx tbb |      227401 ns       227439 ns          512
mask | 24 |         |     1848144 ns      1848254 ns          512
mask | 24 | avx     |      221015 ns       220850 ns          512
mask | 24 |     tbb |      563071 ns       563003 ns          512
mask | 24 | avx tbb |      220940 ns       221018 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6859944 ns      6859862 ns           64
data |  6 | avx     |     1015430 ns      1015314 ns           64
data |  6 |     tbb |     1967294 ns      1966759 ns           64
data |  6 | avx tbb |      729505 ns       728883 ns           64
mask |  6 |         |     7402436 ns      7402383 ns           64
mask |  6 | avx     |      840659 ns       840359 ns           64
mask |  6 |     tbb |     1708952 ns      1708506 ns           64
mask |  6 | avx tbb |      716414 ns       716223 ns           64

data | 12 |         |     3520209 ns      3520120 ns           64
data | 12 | avx     |     1013461 ns      1013433 ns           64
data | 12 |     tbb |     1115695 ns      1114948 ns           64
data | 12 | avx tbb |      736508 ns       736152 ns           64
mask | 12 |         |     7508341 ns      7508195 ns           64
mask | 12 | avx     |      844256 ns       844027 ns           64
mask | 12 |     tbb |     1721033 ns      1702603 ns           64
mask | 12 | avx tbb |      731900 ns       731645 ns           64

data | 24 |         |     1889586 ns      1889730 ns           64
data | 24 | avx     |      908292 ns       908298 ns           64
data | 24 |     tbb |      813939 ns       813863 ns           64
data | 24 | avx tbb |      739467 ns       739098 ns           64
mask | 24 |         |     7375809 ns      7375750 ns           64
mask | 24 | avx     |      846211 ns       846342 ns           64
mask | 24 |     tbb |     1714819 ns      1690020 ns           64
mask | 24 | avx tbb |      737522 ns       737253 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26948803 ns     26948981 ns           32
data |  6 | avx     |     3976222 ns      3976241 ns           32
data |  6 |     tbb |     7418200 ns      7417128 ns           32
data |  6 | avx tbb |     2553550 ns      2553356 ns           32
mask |  6 |         |    29387231 ns     29376394 ns           32
mask |  6 | avx     |     3250141 ns      3250087 ns           32
mask |  6 |     tbb |     6325388 ns      6148772 ns           32
mask |  6 | avx tbb |     2522050 ns      2521681 ns           32

data | 12 |         |    13764188 ns     13764206 ns           32
data | 12 | avx     |     3997519 ns      3997569 ns           32
data | 12 |     tbb |     3934366 ns      3934181 ns           32
data | 12 | avx tbb |     2599834 ns      2599344 ns           32
mask | 12 |         |    29277966 ns     29277962 ns           32
mask | 12 | avx     |     3213784 ns      3213822 ns           32
mask | 12 |     tbb |     6151822 ns      5921328 ns           32
mask | 12 | avx tbb |     2563659 ns      2563547 ns           32

data | 24 |         |     7282453 ns      7282381 ns           32
data | 24 | avx     |     3547294 ns      3547247 ns           32
data | 24 |     tbb |     2727784 ns      2727900 ns           32
data | 24 | avx tbb |     2589825 ns      2590000 ns           32
mask | 24 |         |    29597641 ns     29597637 ns           32
mask | 24 | avx     |     3290222 ns      3290203 ns           32
mask | 24 |     tbb |     6817947 ns      6389137 ns           32
mask | 24 | avx tbb |     2552016 ns      2551806 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   107966300 ns    107943606 ns           16
data |  6 | avx     |    15840519 ns     15840313 ns           16
data |  6 |     tbb |    29021344 ns     29021106 ns           16
data |  6 | avx tbb |     9804194 ns      9787069 ns           16
mask |  6 |         |   116659094 ns    116622969 ns           16
mask |  6 | avx     |    13065494 ns     13065394 ns           16
mask |  6 |     tbb |    26512381 ns     25589412 ns           16
mask |  6 | avx tbb |     9742062 ns      9735106 ns           16

data | 12 |         |    54813194 ns     54813100 ns           16
data | 12 | avx     |    15685963 ns     15685919 ns           16
data | 12 |     tbb |    15064912 ns     15066163 ns           16
data | 12 | avx tbb |     9935619 ns      9883406 ns           16
mask | 12 |         |   116924431 ns    116884887 ns           16
mask | 12 | avx     |    13085906 ns     13085919 ns           16
mask | 12 |     tbb |    25502950 ns     24362587 ns           16
mask | 12 | avx tbb |     9901013 ns      9900806 ns           16

data | 24 |         |    28626100 ns     28626006 ns           16
data | 24 | avx     |    14184275 ns     14184187 ns           16
data | 24 |     tbb |    10586144 ns     10545019 ns           16
data | 24 | avx tbb |     9927394 ns      9927188 ns           16
mask | 24 |         |   117206231 ns    117169700 ns           16
mask | 24 | avx     |    13105687 ns     13105562 ns           16
mask | 24 |     tbb |    27041981 ns     25683794 ns           16
mask | 24 | avx tbb |     9824738 ns      9777412 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   216093088 ns    216086412 ns            8
data |  6 | avx     |    31483075 ns     31482213 ns            8
data |  6 |     tbb |    58230350 ns     58230350 ns            8
data |  6 | avx tbb |    19738187 ns     19604862 ns            8
mask |  6 |         |   233249938 ns    233170938 ns            8
mask |  6 | avx     |    25919063 ns     25918800 ns            8
mask |  6 |     tbb |    53960413 ns     50882037 ns            8
mask |  6 | avx tbb |    19456950 ns     19365762 ns            8

data | 12 |         |   109543262 ns    109542475 ns            8
data | 12 | avx     |    31721975 ns     31649912 ns            8
data | 12 |     tbb |    29903837 ns     29903125 ns            8
data | 12 | avx tbb |    19891112 ns     19628587 ns            8
mask | 12 |         |   233639513 ns    233633075 ns            8
mask | 12 | avx     |    25840962 ns     25840800 ns            8
mask | 12 |     tbb |    52650612 ns     48951500 ns            8
mask | 12 | avx tbb |    19741100 ns     19442225 ns            8

data | 24 |         |    57004362 ns     57004213 ns            8
data | 24 | avx     |    27722813 ns     27722688 ns            8
data | 24 |     tbb |    20951500 ns     20945587 ns            8
data | 24 | avx tbb |    19982450 ns     19982237 ns            8
mask | 24 |         |   233058637 ns    233057950 ns            8
mask | 24 | avx     |    26407613 ns     26407425 ns            8
mask | 24 |     tbb |    51021437 ns     44499913 ns            8
mask | 24 | avx tbb |    19765950 ns     19765075 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   429536588 ns    429495025 ns            8
data |  6 | avx     |    63998600 ns     63998437 ns            8
data |  6 |     tbb |   116229425 ns    116228800 ns            8
data |  6 | avx tbb |    39300300 ns     39093612 ns            8
mask |  6 |         |   466762025 ns    466716337 ns            8
mask |  6 | avx     |    51958700 ns     51958700 ns            8
mask |  6 |     tbb |   109400912 ns     97152237 ns            8
mask |  6 | avx tbb |    38844350 ns     38557137 ns            8

data | 12 |         |   219806550 ns    219765762 ns            8
data | 12 | avx     |    64533550 ns     64533200 ns            8
data | 12 |     tbb |    60698037 ns     60695088 ns            8
data | 12 | avx tbb |    39441737 ns     38658087 ns            8
mask | 12 |         |   465546750 ns    465493400 ns            8
mask | 12 | avx     |    52345175 ns     52344837 ns            8
mask | 12 |     tbb |   126209050 ns    110183012 ns            8
mask | 12 | avx tbb |    39204413 ns     38525575 ns            8

data | 24 |         |   114927625 ns    114927700 ns            8
data | 24 | avx     |    56095687 ns     56095513 ns            8
data | 24 |     tbb |    41935525 ns     41890475 ns            8
data | 24 | avx tbb |    39510463 ns     38808012 ns            8
mask | 24 |         |   467604637 ns    467528075 ns            8
mask | 24 | avx     |    52856125 ns     52855925 ns            8
mask | 24 |     tbb |   114674575 ns     97521700 ns            8
mask | 24 | avx tbb |    39253662 ns     38266275 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   862862737 ns    862820788 ns            8
data |  6 | avx     |   127122037 ns    127121763 ns            8
data |  6 |     tbb |   233543037 ns    233093675 ns            8
data |  6 | avx tbb |    78703825 ns     78499775 ns            8
mask |  6 |         |   934884438 ns    934832262 ns            8
mask |  6 | avx     |   104833562 ns    104832637 ns            8
mask |  6 |     tbb |   224358800 ns    213771550 ns            8
mask |  6 | avx tbb |    78560525 ns     78421287 ns            8

data | 12 |         |   440063425 ns    440062812 ns            8
data | 12 | avx     |   126785825 ns    126785825 ns            8
data | 12 |     tbb |   120168812 ns    119310837 ns            8
data | 12 | avx tbb |    80236162 ns     77767813 ns            8
mask | 12 |         |   932928650 ns    932859613 ns            8
mask | 12 | avx     |   103887425 ns    103886975 ns            8
mask | 12 |     tbb |   239002625 ns    218928088 ns            8
mask | 12 | avx tbb |    78809113 ns     77650262 ns            8

data | 24 |         |   228504913 ns    228466675 ns            8
data | 24 | avx     |   112251937 ns    112212413 ns            8
data | 24 |     tbb |    83660450 ns     83344675 ns            8
data | 24 | avx tbb |    80042800 ns     78566537 ns            8
mask | 24 |         |   940084150 ns    940046012 ns            8
mask | 24 | avx     |   104872150 ns    104831950 ns            8
mask | 24 |     tbb |   231490337 ns    209184162 ns            8
mask | 24 | avx tbb |    78235475 ns     78071475 ns            8
```

</details>

