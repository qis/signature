# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       83603 ns        91553 ns         2048
data |  6 |     tbb |       19238 ns        15259 ns         2048
mask |  6 |         |      126068 ns       122070 ns         2048
mask |  6 |     tbb |       32629 ns        30518 ns         2048

data | 12 |         |       44717 ns        38147 ns         2048
data | 12 |     tbb |       14451 ns        15259 ns         2048
mask | 12 |         |      126041 ns       122070 ns         2048
mask | 12 |     tbb |       32729 ns        30518 ns         2048

data | 24 |         |       23363 ns        22888 ns         2048
data | 24 |     tbb |       12465 ns        15259 ns         2048
mask | 24 |         |      128649 ns       137329 ns         2048
mask | 24 |     tbb |       32746 ns        38147 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       17134 ns        15259 ns         1024
data |  6 | avx tbb |       13484 ns        15259 ns         1024
mask |  6 | avx     |       18948 ns        15259 ns         1024
mask |  6 | avx tbb |       13094 ns        0.000 ns         1024

data | 12 | avx     |       17187 ns        0.000 ns         1024
data | 12 | avx tbb |       13463 ns        0.000 ns         1024
mask | 12 | avx     |       18285 ns        15259 ns         1024
mask | 12 | avx tbb |       13058 ns        0.000 ns         1024

data | 24 | avx     |       17267 ns        15259 ns         1024
data | 24 | avx tbb |       12979 ns        30518 ns         1024
mask | 24 | avx     |       18899 ns        0.000 ns         1024
mask | 24 | avx tbb |       13378 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      419524 ns       457764 ns         1024
data |  6 | avx     |       26749 ns        30518 ns         1024
data |  6 |     tbb |       52982 ns        45776 ns         1024
data |  6 | avx tbb |       17258 ns        15259 ns         1024
mask |  6 |         |      624832 ns       625610 ns         1024
mask |  6 | avx     |       28849 ns        15259 ns         1024
mask |  6 |     tbb |      134063 ns       183105 ns         1024
mask |  6 | avx tbb |       17102 ns        0.000 ns         1024

data | 12 |         |      213545 ns       228882 ns         1024
data | 12 | avx     |       26291 ns        30518 ns         1024
data | 12 |     tbb |       33274 ns        30518 ns         1024
data | 12 | avx tbb |       17034 ns        30518 ns         1024
mask | 12 |         |      637316 ns       656128 ns         1024
mask | 12 | avx     |       28878 ns        45776 ns         1024
mask | 12 |     tbb |      132749 ns       152588 ns         1024
mask | 12 | avx tbb |       17121 ns        15259 ns         1024

data | 24 |         |      109399 ns       122070 ns         1024
data | 24 | avx     |       26025 ns        30518 ns         1024
data | 24 |     tbb |       22178 ns        15259 ns         1024
data | 24 | avx tbb |       18489 ns        15259 ns         1024
mask | 24 |         |      632810 ns       595093 ns         1024
mask | 24 | avx     |       29031 ns        30518 ns         1024
mask | 24 |     tbb |      131962 ns       152588 ns         1024
mask | 24 | avx tbb |       17864 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1686804 ns      1739502 ns          512
data |  6 | avx     |      197864 ns       213623 ns          512
data |  6 |     tbb |      244341 ns       244141 ns          512
data |  6 | avx tbb |      159543 ns       213623 ns          512
mask |  6 |         |     2506322 ns      2471924 ns          512
mask |  6 | avx     |      221764 ns       213623 ns          512
mask |  6 |     tbb |      582795 ns       427246 ns          512
mask |  6 | avx tbb |      158158 ns       122070 ns          512

data | 12 |         |      859556 ns       823975 ns          512
data | 12 | avx     |      195555 ns       183105 ns          512
data | 12 |     tbb |      209956 ns       183105 ns          512
data | 12 | avx tbb |      160094 ns       213623 ns          512
mask | 12 |         |     2518683 ns      2441406 ns          512
mask | 12 | avx     |      195871 ns       183105 ns          512
mask | 12 |     tbb |      550256 ns       549316 ns          512
mask | 12 | avx tbb |      157748 ns       152588 ns          512

data | 24 |         |      452846 ns       427246 ns          512
data | 24 | avx     |      194575 ns       183105 ns          512
data | 24 |     tbb |      199959 ns       213623 ns          512
data | 24 | avx tbb |      159462 ns       122070 ns          512
mask | 24 |         |     2499739 ns      2532959 ns          512
mask | 24 | avx     |      200529 ns       213623 ns          512
mask | 24 |     tbb |      550751 ns       671387 ns          512
mask | 24 | avx tbb |      160054 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6719745 ns      5126953 ns           64
data |  6 | avx     |      793405 ns       976562 ns           64
data |  6 |     tbb |      843759 ns       976562 ns           64
data |  6 | avx tbb |      639981 ns       732422 ns           64
mask |  6 |         |     9999394 ns     10253906 ns           64
mask |  6 | avx     |      800913 ns      1220703 ns           64
mask |  6 |     tbb |     2068167 ns      2929688 ns           64
mask |  6 | avx tbb |      629661 ns        0.000 ns           64

data | 12 |         |     3467202 ns      3173828 ns           64
data | 12 | avx     |      795586 ns       976562 ns           64
data | 12 |     tbb |      720508 ns       732422 ns           64
data | 12 | avx tbb |      634473 ns        0.000 ns           64
mask | 12 |         |    10087866 ns      9765625 ns           64
mask | 12 | avx     |      799700 ns       732422 ns           64
mask | 12 |     tbb |     2049230 ns      1464844 ns           64
mask | 12 | avx tbb |      621277 ns       732422 ns           64

data | 24 |         |     1837244 ns      2441406 ns           64
data | 24 | avx     |      802886 ns        0.000 ns           64
data | 24 |     tbb |      685266 ns       488281 ns           64
data | 24 | avx tbb |      632405 ns       732422 ns           64
mask | 24 |         |    10082175 ns     10253906 ns           64
mask | 24 | avx     |      793311 ns       488281 ns           64
mask | 24 |     tbb |     2066666 ns      1220703 ns           64
mask | 24 | avx tbb |      626123 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    26700084 ns     31250000 ns           32
data |  6 | avx     |     3300253 ns      2441406 ns           32
data |  6 |     tbb |     2992584 ns      2929688 ns           32
data |  6 | avx tbb |     2392022 ns      2929688 ns           32
mask |  6 |         |    39762637 ns     40527344 ns           32
mask |  6 | avx     |     3143372 ns        0.000 ns           32
mask |  6 |     tbb |     7895975 ns      6347656 ns           32
mask |  6 | avx tbb |     2385619 ns      1953125 ns           32

data | 12 |         |    13585266 ns     14160156 ns           32
data | 12 | avx     |     3167731 ns      2929688 ns           32
data | 12 |     tbb |     2547719 ns      2929688 ns           32
data | 12 | avx tbb |     2379978 ns      3417969 ns           32
mask | 12 |         |    39894431 ns     39062500 ns           32
mask | 12 | avx     |     3285147 ns      1464844 ns           32
mask | 12 |     tbb |     7927584 ns      8300781 ns           32
mask | 12 | avx tbb |     2389906 ns      2441406 ns           32

data | 24 |         |     7263400 ns      8300781 ns           32
data | 24 | avx     |     3198828 ns      2929688 ns           32
data | 24 |     tbb |     2474566 ns      1953125 ns           32
data | 24 | avx tbb |     2396366 ns      1953125 ns           32
mask | 24 |         |    39795456 ns     40527344 ns           32
mask | 24 | avx     |     3168219 ns      3906250 ns           32
mask | 24 |     tbb |     7939122 ns      8789062 ns           32
mask | 24 | avx tbb |     2403841 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   106684613 ns    106445312 ns           16
data |  6 | avx     |    12607506 ns     13671875 ns           16
data |  6 |     tbb |    11512663 ns      6835938 ns           16
data |  6 | avx tbb |     9306256 ns      7812500 ns           16
mask |  6 |         |   159617456 ns    161132812 ns           16
mask |  6 | avx     |    12655981 ns     12695312 ns           16
mask |  6 |     tbb |    31245369 ns     29296875 ns           16
mask |  6 | avx tbb |     9295531 ns      8789062 ns           16

data | 12 |         |    54444338 ns     53710938 ns           16
data | 12 | avx     |    12598450 ns     13671875 ns           16
data | 12 |     tbb |     9753200 ns     11718750 ns           16
data | 12 | avx tbb |     9341231 ns      9765625 ns           16
mask | 12 |         |   158252012 ns    157226562 ns           16
mask | 12 | avx     |    13225519 ns     12695312 ns           16
mask | 12 |     tbb |    30846963 ns     28320312 ns           16
mask | 12 | avx tbb |     9329387 ns      6835938 ns           16

data | 24 |         |    28334806 ns     28320312 ns           16
data | 24 | avx     |    12600300 ns     13671875 ns           16
data | 24 |     tbb |     9547719 ns      8789062 ns           16
data | 24 | avx tbb |     9313156 ns      8789062 ns           16
mask | 24 |         |   158812563 ns    158203125 ns           16
mask | 24 | avx     |    12971494 ns     14648438 ns           16
mask | 24 |     tbb |    31226994 ns     28320312 ns           16
mask | 24 | avx tbb |     9309744 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   213628100 ns    210937500 ns            8
data |  6 | avx     |    25363475 ns     27343750 ns            8
data |  6 |     tbb |    22731325 ns     15625000 ns            8
data |  6 | avx tbb |    18885937 ns     15625000 ns            8
mask |  6 |         |   317731912 ns    320312500 ns            8
mask |  6 | avx     |    25432525 ns     27343750 ns            8
mask |  6 |     tbb |    61232250 ns     54687500 ns            8
mask |  6 | avx tbb |    18599025 ns     17578125 ns            8

data | 12 |         |   109448475 ns    109375000 ns            8
data | 12 | avx     |    27090675 ns     29296875 ns            8
data | 12 |     tbb |    19414225 ns     21484375 ns            8
data | 12 | avx tbb |    18827200 ns     15625000 ns            8
mask | 12 |         |   318578975 ns    314453125 ns            8
mask | 12 | avx     |    25482125 ns     25390625 ns            8
mask | 12 |     tbb |    63571975 ns     52734375 ns            8
mask | 12 | avx tbb |    18532050 ns     17578125 ns            8

data | 24 |         |    58026862 ns     58593750 ns            8
data | 24 | avx     |    25377987 ns     25390625 ns            8
data | 24 |     tbb |    18915588 ns     17578125 ns            8
data | 24 | avx tbb |    18539775 ns     19531250 ns            8
mask | 24 |         |   317673325 ns    318359375 ns            8
mask | 24 | avx     |    25359438 ns     29296875 ns            8
mask | 24 |     tbb |    63228625 ns     58593750 ns            8
mask | 24 | avx tbb |    18547300 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   426273950 ns    425781250 ns            8
data |  6 | avx     |    50443450 ns     48828125 ns            8
data |  6 |     tbb |    45531688 ns     33203125 ns            8
data |  6 | avx tbb |    37621863 ns     35156250 ns            8
mask |  6 |         |   635732600 ns    634765625 ns            8
mask |  6 | avx     |    50672587 ns     48828125 ns            8
mask |  6 |     tbb |   127643863 ns    103515625 ns            8
mask |  6 | avx tbb |    36991512 ns     35156250 ns            8

data | 12 |         |   217173125 ns    218750000 ns            8
data | 12 | avx     |    50572675 ns     50781250 ns            8
data | 12 |     tbb |    38677037 ns     37109375 ns            8
data | 12 | avx tbb |    37006362 ns     35156250 ns            8
mask | 12 |         |   635772350 ns    634765625 ns            8
mask | 12 | avx     |    52007000 ns     52734375 ns            8
mask | 12 |     tbb |   123786187 ns    109375000 ns            8
mask | 12 | avx tbb |    37027200 ns     39062500 ns            8

data | 24 |         |   113733300 ns    113281250 ns            8
data | 24 | avx     |    50686250 ns     48828125 ns            8
data | 24 |     tbb |    37669925 ns     33203125 ns            8
data | 24 | avx tbb |    37071988 ns     37109375 ns            8
mask | 24 |         |   636633450 ns    638671875 ns            8
mask | 24 | avx     |    51064112 ns     50781250 ns            8
mask | 24 |     tbb |   125290200 ns    107421875 ns            8
mask | 24 | avx tbb |    37591775 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   851346013 ns    849609375 ns            8
data |  6 | avx     |   102872413 ns    105468750 ns            8
data |  6 |     tbb |    90839625 ns     76171875 ns            8
data |  6 | avx tbb |    74199162 ns     72265625 ns            8
mask |  6 |         |  1269934350 ns   1269531250 ns            8
mask |  6 | avx     |   102179900 ns     97656250 ns            8
mask |  6 |     tbb |   240244637 ns    216796875 ns            8
mask |  6 | avx tbb |    73967450 ns     72265625 ns            8

data | 12 |         |   433830338 ns    433593750 ns            8
data | 12 | avx     |   106547862 ns    107421875 ns            8
data | 12 |     tbb |    77214513 ns     72265625 ns            8
data | 12 | avx tbb |    73923225 ns     72265625 ns            8
mask | 12 |         |  1270754237 ns   1271484375 ns            8
mask | 12 | avx     |   102895987 ns    103515625 ns            8
mask | 12 |     tbb |   242687500 ns    214843750 ns            8
mask | 12 | avx tbb |    73877688 ns     72265625 ns            8

data | 24 |         |   227609163 ns    226562500 ns            8
data | 24 | avx     |   102941075 ns    105468750 ns            8
data | 24 |     tbb |    75238013 ns     72265625 ns            8
data | 24 | avx tbb |    74169588 ns     72265625 ns            8
mask | 24 |         |  1271048162 ns   1267578125 ns            8
mask | 24 | avx     |   103083725 ns    101562500 ns            8
mask | 24 |     tbb |   244352212 ns    216796875 ns            8
mask | 24 | avx tbb |    73886875 ns     70312500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       76078 ns        76294 ns         2048
data |  6 |     tbb |       18990 ns        22888 ns         2048
mask |  6 |         |      114987 ns       114441 ns         2048
mask |  6 |     tbb |       31031 ns        30518 ns         2048

data | 12 |         |       41071 ns        53406 ns         2048
data | 12 |     tbb |       14007 ns        22888 ns         2048
mask | 12 |         |      115658 ns       122070 ns         2048
mask | 12 |     tbb |       30759 ns        30518 ns         2048

data | 24 |         |       21595 ns        22888 ns         2048
data | 24 |     tbb |       12447 ns        0.000 ns         2048
mask | 24 |         |      115498 ns       122070 ns         2048
mask | 24 |     tbb |       30912 ns        30518 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       19013 ns        15259 ns         1024
data |  6 | avx tbb |       14287 ns        0.000 ns         1024
mask |  6 | avx     |       17583 ns        0.000 ns         1024
mask |  6 | avx tbb |       13150 ns        15259 ns         1024

data | 12 | avx     |       19168 ns        30518 ns         1024
data | 12 | avx tbb |       13650 ns        30518 ns         1024
mask | 12 | avx     |       17963 ns        15259 ns         1024
mask | 12 | avx tbb |       13173 ns        15259 ns         1024

data | 24 | avx     |       19046 ns        30518 ns         1024
data | 24 | avx tbb |       13305 ns        15259 ns         1024
mask | 24 | avx     |       18234 ns        45776 ns         1024
mask | 24 | avx tbb |       13479 ns        15259 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      380789 ns       350952 ns         1024
data |  6 | avx     |       29059 ns        45776 ns         1024
data |  6 |     tbb |       49374 ns        45776 ns         1024
data |  6 | avx tbb |       17978 ns        15259 ns         1024
mask |  6 |         |      569683 ns       564575 ns         1024
mask |  6 | avx     |       27500 ns        15259 ns         1024
mask |  6 |     tbb |      123666 ns       137329 ns         1024
mask |  6 | avx tbb |       17099 ns        15259 ns         1024

data | 12 |         |      193534 ns       213623 ns         1024
data | 12 | avx     |       29164 ns        30518 ns         1024
data | 12 |     tbb |       32095 ns        30518 ns         1024
data | 12 | avx tbb |       17739 ns        0.000 ns         1024
mask | 12 |         |      568099 ns       549316 ns         1024
mask | 12 | avx     |       27344 ns        15259 ns         1024
mask | 12 |     tbb |      121686 ns       106812 ns         1024
mask | 12 | avx tbb |       17377 ns        15259 ns         1024

data | 24 |         |       99575 ns       106812 ns         1024
data | 24 | avx     |       29208 ns        15259 ns         1024
data | 24 |     tbb |       21972 ns        15259 ns         1024
data | 24 | avx tbb |       18021 ns        15259 ns         1024
mask | 24 |         |      568171 ns       549316 ns         1024
mask | 24 | avx     |       27628 ns        61035 ns         1024
mask | 24 |     tbb |      122916 ns       122070 ns         1024
mask | 24 | avx tbb |       16845 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1523183 ns      1525879 ns          512
data |  6 | avx     |      191631 ns       183105 ns          512
data |  6 |     tbb |      234852 ns       183105 ns          512
data |  6 | avx tbb |      159919 ns       213623 ns          512
mask |  6 |         |     2261793 ns      2288818 ns          512
mask |  6 | avx     |      195983 ns       183105 ns          512
mask |  6 |     tbb |      509755 ns       457764 ns          512
mask |  6 | avx tbb |      157818 ns       183105 ns          512

data | 12 |         |      777613 ns       762939 ns          512
data | 12 | avx     |      193769 ns       152588 ns          512
data | 12 |     tbb |      206170 ns       183105 ns          512
data | 12 | avx tbb |      159899 ns        91553 ns          512
mask | 12 |         |     2265764 ns      2258301 ns          512
mask | 12 | avx     |      195871 ns       244141 ns          512
mask | 12 |     tbb |      508675 ns       457764 ns          512
mask | 12 | avx tbb |      159765 ns       213623 ns          512

data | 24 |         |      419811 ns       366211 ns          512
data | 24 | avx     |      193487 ns       244141 ns          512
data | 24 |     tbb |      191250 ns       213623 ns          512
data | 24 | avx tbb |      160457 ns        91553 ns          512
mask | 24 |         |     2265461 ns      2197266 ns          512
mask | 24 | avx     |      198685 ns       213623 ns          512
mask | 24 |     tbb |      508203 ns       518799 ns          512
mask | 24 | avx tbb |      158397 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6078753 ns      6103516 ns           64
data |  6 | avx     |      773772 ns       976562 ns           64
data |  6 |     tbb |      798005 ns       732422 ns           64
data |  6 | avx tbb |      636848 ns      1220703 ns           64
mask |  6 |         |     9110153 ns      8544922 ns           64
mask |  6 | avx     |      795159 ns       732422 ns           64
mask |  6 |     tbb |     1903727 ns      2197266 ns           64
mask |  6 | avx tbb |      632209 ns      1220703 ns           64

data | 12 |         |     3143672 ns      2929688 ns           64
data | 12 | avx     |      783716 ns      1220703 ns           64
data | 12 |     tbb |      711264 ns        0.000 ns           64
data | 12 | avx tbb |      634330 ns       244141 ns           64
mask | 12 |         |     9168575 ns      8544922 ns           64
mask | 12 | avx     |      805923 ns       732422 ns           64
mask | 12 |     tbb |     1880055 ns      1708984 ns           64
mask | 12 | avx tbb |      627744 ns       488281 ns           64

data | 24 |         |     1710813 ns      1708984 ns           64
data | 24 | avx     |      777055 ns       732422 ns           64
data | 24 |     tbb |      676948 ns       732422 ns           64
data | 24 | avx tbb |      643584 ns       732422 ns           64
mask | 24 |         |     9118966 ns      9033203 ns           64
mask | 24 | avx     |      805622 ns       976562 ns           64
mask | 24 |     tbb |     1897408 ns      1708984 ns           64
mask | 24 | avx tbb |      628038 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24260525 ns     24902344 ns           32
data |  6 | avx     |     3082256 ns      3417969 ns           32
data |  6 |     tbb |     2819744 ns      2441406 ns           32
data |  6 | avx tbb |     2387084 ns      2929688 ns           32
mask |  6 |         |    36138981 ns     37109375 ns           32
mask |  6 | avx     |     3217497 ns      3906250 ns           32
mask |  6 |     tbb |     7146031 ns      6835938 ns           32
mask |  6 | avx tbb |     2375475 ns      2441406 ns           32

data | 12 |         |    12486756 ns     13183594 ns           32
data | 12 | avx     |     3346753 ns      5371094 ns           32
data | 12 |     tbb |     2531541 ns      1464844 ns           32
data | 12 | avx tbb |     2383462 ns      1464844 ns           32
mask | 12 |         |    36377669 ns     36132812 ns           32
mask | 12 | avx     |     3215541 ns      2929688 ns           32
mask | 12 |     tbb |     7149859 ns      6347656 ns           32
mask | 12 | avx tbb |     2382481 ns      2929688 ns           32

data | 24 |         |     6598766 ns      7324219 ns           32
data | 24 | avx     |     3109488 ns      2929688 ns           32
data | 24 |     tbb |     2467950 ns      1953125 ns           32
data | 24 | avx tbb |     2382278 ns      1953125 ns           32
mask | 24 |         |    36178781 ns     35644531 ns           32
mask | 24 | avx     |     3180016 ns      2929688 ns           32
mask | 24 |     tbb |     7229278 ns      7324219 ns           32
mask | 24 | avx tbb |     2377366 ns      2441406 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96527319 ns     95703125 ns           16
data |  6 | avx     |    12430925 ns     12695312 ns           16
data |  6 |     tbb |    10797319 ns      2929688 ns           16
data |  6 | avx tbb |     9320912 ns      9765625 ns           16
mask |  6 |         |   144303787 ns    142578125 ns           16
mask |  6 | avx     |    12820881 ns     11718750 ns           16
mask |  6 |     tbb |    28464225 ns     24414062 ns           16
mask |  6 | avx tbb |     9309656 ns      8789062 ns           16

data | 12 |         |    49441925 ns     50781250 ns           16
data | 12 | avx     |    12320650 ns     10742188 ns           16
data | 12 |     tbb |     9712369 ns      8789062 ns           16
data | 12 | avx tbb |     9314775 ns      8789062 ns           16
mask | 12 |         |   144461875 ns    145507812 ns           16
mask | 12 | avx     |    13276144 ns     14648438 ns           16
mask | 12 |     tbb |    27976725 ns     25390625 ns           16
mask | 12 | avx tbb |     9319425 ns      7812500 ns           16

data | 24 |         |    26185694 ns     29296875 ns           16
data | 24 | avx     |    12413381 ns      8789062 ns           16
data | 24 |     tbb |     9485256 ns      9765625 ns           16
data | 24 | avx tbb |     9319956 ns      9765625 ns           16
mask | 24 |         |   144658981 ns    145507812 ns           16
mask | 24 | avx     |    12801681 ns     13671875 ns           16
mask | 24 |     tbb |    28011650 ns     25390625 ns           16
mask | 24 | avx tbb |     9363094 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193079487 ns    187500000 ns            8
data |  6 | avx     |    24711100 ns     21484375 ns            8
data |  6 |     tbb |    21663538 ns     17578125 ns            8
data |  6 | avx tbb |    18518075 ns     19531250 ns            8
mask |  6 |         |   288957425 ns    283203125 ns            8
mask |  6 | avx     |    25519437 ns     27343750 ns            8
mask |  6 |     tbb |    56423850 ns     52734375 ns            8
mask |  6 | avx tbb |    18790750 ns     15625000 ns            8

data | 12 |         |    98130637 ns     99609375 ns            8
data | 12 | avx     |    26077850 ns     25390625 ns            8
data | 12 |     tbb |    19679938 ns     19531250 ns            8
data | 12 | avx tbb |    18829062 ns     19531250 ns            8
mask | 12 |         |   290039600 ns    298828125 ns            8
mask | 12 | avx     |    25503050 ns     25390625 ns            8
mask | 12 |     tbb |    57772787 ns     52734375 ns            8
mask | 12 | avx tbb |    18879850 ns     17578125 ns            8

data | 24 |         |    52383075 ns     50781250 ns            8
data | 24 | avx     |    24871400 ns     21484375 ns            8
data | 24 |     tbb |    18852163 ns     19531250 ns            8
data | 24 | avx tbb |    18533350 ns     19531250 ns            8
mask | 24 |         |   288407263 ns    291015625 ns            8
mask | 24 | avx     |    25615775 ns     23437500 ns            8
mask | 24 |     tbb |    56715312 ns     48828125 ns            8
mask | 24 | avx tbb |    18555838 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385667075 ns    386718750 ns            8
data |  6 | avx     |    49483000 ns     50781250 ns            8
data |  6 |     tbb |    43203062 ns     35156250 ns            8
data |  6 | avx tbb |    36983925 ns     35156250 ns            8
mask |  6 |         |   577191975 ns    576171875 ns            8
mask |  6 | avx     |    51087050 ns     48828125 ns            8
mask |  6 |     tbb |   112704000 ns     97656250 ns            8
mask |  6 | avx tbb |    36990750 ns     37109375 ns            8

data | 12 |         |   196418862 ns    197265625 ns            8
data | 12 | avx     |    49395150 ns     48828125 ns            8
data | 12 |     tbb |    39251738 ns     37109375 ns            8
data | 12 | avx tbb |    37014900 ns     37109375 ns            8
mask | 12 |         |   578230738 ns    580078125 ns            8
mask | 12 | avx     |    51356237 ns     54687500 ns            8
mask | 12 |     tbb |   115072587 ns     99609375 ns            8
mask | 12 | avx tbb |    37482987 ns     35156250 ns            8

data | 24 |         |   104903513 ns    103515625 ns            8
data | 24 | avx     |    49501700 ns     50781250 ns            8
data | 24 |     tbb |    37639875 ns     39062500 ns            8
data | 24 | avx tbb |    36991150 ns     35156250 ns            8
mask | 24 |         |   577035650 ns    578125000 ns            8
mask | 24 | avx     |    50715200 ns     50781250 ns            8
mask | 24 |     tbb |   113990413 ns     97656250 ns            8
mask | 24 | avx tbb |    37712275 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771925700 ns    771484375 ns            8
data |  6 | avx     |    98795550 ns     99609375 ns            8
data |  6 |     tbb |    85365525 ns     78125000 ns            8
data |  6 | avx tbb |    73848875 ns     70312500 ns            8
mask |  6 |         |  1157558413 ns   1160156250 ns            8
mask |  6 | avx     |   102249475 ns    105468750 ns            8
mask |  6 |     tbb |   229923700 ns    199218750 ns            8
mask |  6 | avx tbb |    74009050 ns     76171875 ns            8

data | 12 |         |   393532937 ns    392578125 ns            8
data | 12 | avx     |    99376875 ns    101562500 ns            8
data | 12 |     tbb |    76899462 ns     74218750 ns            8
data | 12 | avx tbb |    73988563 ns     74218750 ns            8
mask | 12 |         |  1154034588 ns   1152343750 ns            8
mask | 12 | avx     |   101734963 ns    101562500 ns            8
mask | 12 |     tbb |   224534612 ns    201171875 ns            8
mask | 12 | avx tbb |    74288187 ns     70312500 ns            8

data | 24 |         |   209797425 ns    208984375 ns            8
data | 24 | avx     |    99394338 ns     99609375 ns            8
data | 24 |     tbb |    75076875 ns     68359375 ns            8
data | 24 | avx tbb |    73952675 ns     72265625 ns            8
mask | 24 |         |  1154711662 ns   1156250000 ns            8
mask | 24 | avx     |   102405762 ns    105468750 ns            8
mask | 24 |     tbb |   225514325 ns    199218750 ns            8
mask | 24 | avx tbb |    74015913 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>200 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 200 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |       75899 ns        76294 ns         2048
data |  6 |     tbb |       19315 ns         7629 ns         2048
mask |  6 |         |      137947 ns       144958 ns         2048
mask |  6 |     tbb |       34792 ns        45776 ns         2048

data | 12 |         |       39499 ns        30518 ns         2048
data | 12 |     tbb |       14246 ns        22888 ns         2048
mask | 12 |         |      133894 ns       137329 ns         2048
mask | 12 |     tbb |       34309 ns        45776 ns         2048

data | 24 |         |       21035 ns        30518 ns         2048
data | 24 |     tbb |       12102 ns         7629 ns         2048
mask | 24 |         |      137991 ns       114441 ns         2048
mask | 24 |     tbb |       34306 ns        45776 ns         2048
```

</details>

<details>
<summary>600 KiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 600 KiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 | avx     |       18643 ns        15259 ns         1024
data |  6 | avx tbb |       13997 ns        15259 ns         1024
mask |  6 | avx     |       17851 ns        15259 ns         1024
mask |  6 | avx tbb |       12989 ns        30518 ns         1024

data | 12 | avx     |       19521 ns        15259 ns         1024
data | 12 | avx tbb |       14108 ns        0.000 ns         1024
mask | 12 | avx     |       17975 ns        15259 ns         1024
mask | 12 | avx tbb |       13298 ns        0.000 ns         1024

data | 24 | avx     |       19117 ns        0.000 ns         1024
data | 24 | avx tbb |       13330 ns        30518 ns         1024
mask | 24 | avx     |       17572 ns        15259 ns         1024
mask | 24 | avx tbb |       13265 ns        30518 ns         1024
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |      379470 ns       396729 ns         1024
data |  6 | avx     |       29152 ns        15259 ns         1024
data |  6 |     tbb |       49432 ns        61035 ns         1024
data |  6 | avx tbb |       17647 ns        30518 ns         1024
mask |  6 |         |      700271 ns       686646 ns         1024
mask |  6 | avx     |       29984 ns        15259 ns         1024
mask |  6 |     tbb |      141457 ns       122070 ns         1024
mask |  6 | avx tbb |       16765 ns        30518 ns         1024

data | 12 |         |      193157 ns       167847 ns         1024
data | 12 | avx     |       29051 ns        15259 ns         1024
data | 12 |     tbb |       30645 ns        45776 ns         1024
data | 12 | avx tbb |       17733 ns        0.000 ns         1024
mask | 12 |         |      693852 ns       686646 ns         1024
mask | 12 | avx     |       27615 ns        30518 ns         1024
mask | 12 |     tbb |      141566 ns        91553 ns         1024
mask | 12 | avx tbb |       17026 ns        15259 ns         1024

data | 24 |         |       99244 ns       122070 ns         1024
data | 24 | avx     |       29035 ns        15259 ns         1024
data | 24 |     tbb |       22118 ns        15259 ns         1024
data | 24 | avx tbb |       17459 ns        30518 ns         1024
mask | 24 |         |      699912 ns       717163 ns         1024
mask | 24 | avx     |       27267 ns        15259 ns         1024
mask | 24 |     tbb |      142434 ns       106812 ns         1024
mask | 24 | avx tbb |       17016 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 4 MiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     1522369 ns      1586914 ns          512
data |  6 | avx     |      191621 ns       213623 ns          512
data |  6 |     tbb |      234715 ns       183105 ns          512
data |  6 | avx tbb |      160504 ns        91553 ns          512
mask |  6 |         |     2719815 ns      2777100 ns          512
mask |  6 | avx     |      197685 ns       152588 ns          512
mask |  6 |     tbb |      588103 ns       640869 ns          512
mask |  6 | avx tbb |      158062 ns       152588 ns          512

data | 12 |         |      778160 ns       762939 ns          512
data | 12 | avx     |      191589 ns       183105 ns          512
data | 12 |     tbb |      205826 ns       274658 ns          512
data | 12 | avx tbb |      160737 ns       213623 ns          512
mask | 12 |         |     2712748 ns      2807617 ns          512
mask | 12 | avx     |      197131 ns       244141 ns          512
mask | 12 |     tbb |      587548 ns       671387 ns          512
mask | 12 | avx tbb |      158967 ns       152588 ns          512

data | 24 |         |      416327 ns       457764 ns          512
data | 24 | avx     |      191333 ns        91553 ns          512
data | 24 |     tbb |      199336 ns       274658 ns          512
data | 24 | avx tbb |      161222 ns       213623 ns          512
mask | 24 |         |     2716599 ns      2746582 ns          512
mask | 24 | avx     |      197061 ns       183105 ns          512
mask | 24 |     tbb |      588557 ns       610352 ns          512
mask | 24 | avx tbb |      159116 ns       244141 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 16 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |     6174003 ns      6103516 ns           64
data |  6 | avx     |      777194 ns       488281 ns           64
data |  6 |     tbb |      798636 ns       488281 ns           64
data |  6 | avx tbb |      634339 ns       488281 ns           64
mask |  6 |         |    10895506 ns     10742188 ns           64
mask |  6 | avx     |      812686 ns      1220703 ns           64
mask |  6 |     tbb |     2236734 ns      2197266 ns           64
mask |  6 | avx tbb |      610895 ns       732422 ns           64

data | 12 |         |     3183330 ns      3173828 ns           64
data | 12 | avx     |      783134 ns       732422 ns           64
data | 12 |     tbb |      716642 ns       976562 ns           64
data | 12 | avx tbb |      635983 ns       732422 ns           64
mask | 12 |         |    10903798 ns     10742188 ns           64
mask | 12 | avx     |      796903 ns       732422 ns           64
mask | 12 |     tbb |     2192984 ns      2197266 ns           64
mask | 12 | avx tbb |      601700 ns       488281 ns           64

data | 24 |         |     1661631 ns      1220703 ns           64
data | 24 | avx     |      780339 ns       488281 ns           64
data | 24 |     tbb |      676688 ns       244141 ns           64
data | 24 | avx tbb |      636648 ns       244141 ns           64
mask | 24 |         |    10948319 ns     10986328 ns           64
mask | 24 | avx     |      802167 ns       732422 ns           64
mask | 24 |     tbb |     2195836 ns      2441406 ns           64
mask | 24 | avx tbb |      619612 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 64 MiB    Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    24218834 ns     24414062 ns           32
data |  6 | avx     |     3050766 ns      4882812 ns           32
data |  6 |     tbb |     2827741 ns        0.000 ns           32
data |  6 | avx tbb |     2371559 ns      1953125 ns           32
mask |  6 |         |    43313456 ns     42480469 ns           32
mask |  6 | avx     |     3224844 ns      3906250 ns           32
mask |  6 |     tbb |     8564519 ns      7812500 ns           32
mask |  6 | avx tbb |     2386703 ns      1464844 ns           32

data | 12 |         |    12390284 ns     12207031 ns           32
data | 12 | avx     |     3073706 ns        0.000 ns           32
data | 12 |     tbb |     2539191 ns      2441406 ns           32
data | 12 | avx tbb |     2398078 ns      3417969 ns           32
mask | 12 |         |    43330225 ns     43457031 ns           32
mask | 12 | avx     |     3209016 ns      5371094 ns           32
mask | 12 |     tbb |     8561575 ns      8300781 ns           32
mask | 12 | avx tbb |     2372269 ns      3417969 ns           32

data | 24 |         |     6550100 ns      6347656 ns           32
data | 24 | avx     |     3240456 ns      4882812 ns           32
data | 24 |     tbb |     2464944 ns      3906250 ns           32
data | 24 | avx tbb |     2389213 ns      2441406 ns           32
mask | 24 |         |    43306672 ns     44433594 ns           32
mask | 24 | avx     |     3175250 ns      6347656 ns           32
mask | 24 |     tbb |     8606672 ns      8300781 ns           32
mask | 24 | avx tbb |     2377988 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 256 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |    96516537 ns     96679688 ns           16
data |  6 | avx     |    12308181 ns     13671875 ns           16
data |  6 |     tbb |    10774562 ns      4882812 ns           16
data |  6 | avx tbb |     9327088 ns      8789062 ns           16
mask |  6 |         |   172968463 ns    171875000 ns           16
mask |  6 | avx     |    12724519 ns     12695312 ns           16
mask |  6 |     tbb |    33194813 ns     31250000 ns           16
mask |  6 | avx tbb |     9375750 ns      6835938 ns           16

data | 12 |         |    49518800 ns     48828125 ns           16
data | 12 | avx     |    12600094 ns     11718750 ns           16
data | 12 |     tbb |     9682888 ns      7812500 ns           16
data | 12 | avx tbb |     9368350 ns      6835938 ns           16
mask | 12 |         |   173088163 ns    173828125 ns           16
mask | 12 | avx     |    13265363 ns     14648438 ns           16
mask | 12 |     tbb |    33377425 ns     30273438 ns           16
mask | 12 | avx tbb |     9320013 ns      8789062 ns           16

data | 24 |         |    26120238 ns     28320312 ns           16
data | 24 | avx     |    12429550 ns     13671875 ns           16
data | 24 |     tbb |     9585500 ns      7812500 ns           16
data | 24 | avx tbb |     9397988 ns     12695312 ns           16
mask | 24 |         |   173044375 ns    172851562 ns           16
mask | 24 | avx     |    12631344 ns     13671875 ns           16
mask | 24 |     tbb |    33008425 ns     31250000 ns           16
mask | 24 | avx tbb |     9308144 ns      6835938 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 512 MiB   Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   193163012 ns    187500000 ns            8
data |  6 | avx     |    24818300 ns     21484375 ns            8
data |  6 |     tbb |    21456450 ns     17578125 ns            8
data |  6 | avx tbb |    18555450 ns     15625000 ns            8
mask |  6 |         |   346318262 ns    345703125 ns            8
mask |  6 | avx     |    26870825 ns     27343750 ns            8
mask |  6 |     tbb |    65695975 ns     60546875 ns            8
mask |  6 | avx tbb |    18582000 ns     17578125 ns            8

data | 12 |         |    98005200 ns     97656250 ns            8
data | 12 | avx     |    24648463 ns     25390625 ns            8
data | 12 |     tbb |    19307587 ns     23437500 ns            8
data | 12 | avx tbb |    18595875 ns     19531250 ns            8
mask | 12 |         |   346899062 ns    349609375 ns            8
mask | 12 | avx     |    25599000 ns     23437500 ns            8
mask | 12 |     tbb |    67373637 ns     62500000 ns            8
mask | 12 | avx tbb |    18529325 ns     15625000 ns            8

data | 24 |         |    52373425 ns     46875000 ns            8
data | 24 | avx     |    24841350 ns     23437500 ns            8
data | 24 |     tbb |    18855087 ns     17578125 ns            8
data | 24 | avx tbb |    18529575 ns     19531250 ns            8
mask | 24 |         |   345576313 ns    345703125 ns            8
mask | 24 | avx     |    25614000 ns     25390625 ns            8
mask | 24 |     tbb |    67225263 ns     58593750 ns            8
mask | 24 | avx tbb |    18548500 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   385803737 ns    386718750 ns            8
data |  6 | avx     |    49780100 ns     48828125 ns            8
data |  6 |     tbb |    43226025 ns     41015625 ns            8
data |  6 | avx tbb |    36967175 ns     35156250 ns            8
mask |  6 |         |   691388050 ns    691406250 ns            8
mask |  6 | avx     |    51089762 ns     48828125 ns            8
mask |  6 |     tbb |   132687313 ns    121093750 ns            8
mask |  6 | avx tbb |    37015475 ns     35156250 ns            8

data | 12 |         |   197421925 ns    197265625 ns            8
data | 12 | avx     |    50171900 ns     50781250 ns            8
data | 12 |     tbb |    39360200 ns     37109375 ns            8
data | 12 | avx tbb |    36988462 ns     39062500 ns            8
mask | 12 |         |   691790050 ns    691406250 ns            8
mask | 12 | avx     |    51041487 ns     52734375 ns            8
mask | 12 |     tbb |   132850000 ns    119140625 ns            8
mask | 12 | avx tbb |    37569825 ns     37109375 ns            8

data | 24 |         |   106398263 ns    109375000 ns            8
data | 24 | avx     |    50953575 ns     54687500 ns            8
data | 24 |     tbb |    37649000 ns     37109375 ns            8
data | 24 | avx tbb |    37019675 ns     35156250 ns            8
mask | 24 |         |   691438075 ns    691406250 ns            8
mask | 24 | avx     |    52775638 ns     52734375 ns            8
mask | 24 |     tbb |   134050425 ns    123046875 ns            8
mask | 24 | avx tbb |    37008175 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Type |  K | AVX TBB | 2 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
data |  6 |         |   771200425 ns    771484375 ns            8
data |  6 | avx     |    99944913 ns     97656250 ns            8
data |  6 |     tbb |    85367950 ns     76171875 ns            8
data |  6 | avx tbb |    73859200 ns     72265625 ns            8
mask |  6 |         |  1384704838 ns   1384765625 ns            8
mask |  6 | avx     |   103301287 ns    105468750 ns            8
mask |  6 |     tbb |   265340525 ns    244140625 ns            8
mask |  6 | avx tbb |    73918638 ns     74218750 ns            8

data | 12 |         |   392999363 ns    390625000 ns            8
data | 12 | avx     |   100118425 ns    101562500 ns            8
data | 12 |     tbb |    76775650 ns     72265625 ns            8
data | 12 | avx tbb |    74346337 ns     74218750 ns            8
mask | 12 |         |  1382496862 ns   1382812500 ns            8
mask | 12 | avx     |   102622950 ns    103515625 ns            8
mask | 12 |     tbb |   269595663 ns    234375000 ns            8
mask | 12 | avx tbb |    73979250 ns     70312500 ns            8

data | 24 |         |   209360000 ns    208984375 ns            8
data | 24 | avx     |    99379863 ns    101562500 ns            8
data | 24 |     tbb |    75128037 ns     72265625 ns            8
data | 24 | avx tbb |    74106675 ns     72265625 ns            8
mask | 24 |         |  1383864400 ns   1384765625 ns            8
mask | 24 | avx     |   101886312 ns    101562500 ns            8
mask | 24 |     tbb |   269513350 ns    240234375 ns            8
mask | 24 | avx tbb |    73991138 ns     68359375 ns            8
```

</details>

