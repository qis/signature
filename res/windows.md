# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1645 ns        0.000 ns         4096
find avx tbb 06 16 kb        1044 ns        0.000 ns         4096
find         06 16 kb        7383 ns         7629 ns         4096
find     tbb 06 16 kb        9494 ns        11444 ns         4096
find avx     12 16 kb         982 ns        0.000 ns         4096
find avx tbb 12 16 kb        1050 ns        0.000 ns         4096
find         12 16 kb        4208 ns         3815 ns         4096
find     tbb 12 16 kb        8955 ns        11444 ns         4096
find avx     24 16 kb        1116 ns         3815 ns         4096
find avx tbb 24 16 kb        1144 ns        0.000 ns         4096
find         24 16 kb        2739 ns         3815 ns         4096
find     tbb 24 16 kb        8489 ns        11444 ns         4096

scan avx     06 16 kb        1116 ns        0.000 ns         4096
scan avx tbb 06 16 kb        1122 ns        0.000 ns         4096
scan         06 16 kb       14358 ns        15259 ns         4096
scan     tbb 06 16 kb        8291 ns         3815 ns         4096
scan avx     12 16 kb        1012 ns         3815 ns         4096
scan avx tbb 12 16 kb        1027 ns        0.000 ns         4096
scan         12 16 kb       14404 ns        15259 ns         4096
scan     tbb 12 16 kb        8340 ns        11444 ns         4096
scan avx     24 16 kb        1032 ns        0.000 ns         4096
scan avx tbb 24 16 kb        1059 ns        0.000 ns         4096
scan         24 16 kb       14247 ns        15259 ns         4096
scan     tbb 24 16 kb        8378 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2196 ns         3815 ns         4096
find avx tbb 06 64 kb        2235 ns         3815 ns         4096
find         06 64 kb       28425 ns        30518 ns         4096
find     tbb 06 64 kb       11773 ns        11444 ns         4096
find avx     12 64 kb        2128 ns        0.000 ns         4096
find avx tbb 12 64 kb        2156 ns         3815 ns         4096
find         12 64 kb       13995 ns        11444 ns         4096
find     tbb 12 64 kb       10078 ns        15259 ns         4096
find avx     24 64 kb        2147 ns         3815 ns         4096
find avx tbb 24 64 kb        2149 ns         3815 ns         4096
find         24 64 kb        7456 ns         7629 ns         4096
find     tbb 24 64 kb        9246 ns        11444 ns         4096

scan avx     06 64 kb        2559 ns         3815 ns         4096
scan avx tbb 06 64 kb        2515 ns         3815 ns         4096
scan         06 64 kb       53261 ns        49591 ns         4096
scan     tbb 06 64 kb       14839 ns        19073 ns         4096
scan avx     12 64 kb        2250 ns        0.000 ns         4096
scan avx tbb 12 64 kb        2292 ns        0.000 ns         4096
scan         12 64 kb       54369 ns        53406 ns         4096
scan     tbb 12 64 kb       14978 ns        19073 ns         4096
scan avx     24 64 kb        2337 ns         3815 ns         4096
scan avx tbb 24 64 kb        2324 ns        0.000 ns         4096
scan         24 64 kb       54450 ns        57220 ns         4096
scan     tbb 24 64 kb       15064 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7514 ns         7629 ns         2048
find avx tbb 06 256 kb       7645 ns         7629 ns         2048
find         06 256 kb     107350 ns       114441 ns         2048
find     tbb 06 256 kb      22604 ns        15259 ns         2048
find avx     12 256 kb       7353 ns        0.000 ns         2048
find avx tbb 12 256 kb       7275 ns         7629 ns         2048
find         12 256 kb      55614 ns        53406 ns         2048
find     tbb 12 256 kb      17146 ns        15259 ns         2048
find avx     24 256 kb       7461 ns        15259 ns         2048
find avx tbb 24 256 kb       7367 ns         7629 ns         2048
find         24 256 kb      27381 ns        30518 ns         2048
find     tbb 24 256 kb      14227 ns        22888 ns         2048

scan avx     06 256 kb       8291 ns         7629 ns         2048
scan avx tbb 06 256 kb       8425 ns         7629 ns         2048
scan         06 256 kb     209501 ns       213623 ns         2048
scan     tbb 06 256 kb      42454 ns        45776 ns         2048
scan avx     12 256 kb       8021 ns        15259 ns         2048
scan avx tbb 12 256 kb       7856 ns         7629 ns         2048
scan         12 256 kb     216497 ns       221252 ns         2048
scan     tbb 12 256 kb      41766 ns        45776 ns         2048
scan avx     24 256 kb       8191 ns         7629 ns         2048
scan avx tbb 24 256 kb       8225 ns         7629 ns         2048
scan         24 256 kb     218380 ns       221252 ns         2048
scan     tbb 24 256 kb      42923 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        28245 ns        15259 ns         1024
find avx tbb 06 1 mb        17488 ns        15259 ns         1024
find         06 1 mb       420038 ns       411987 ns         1024
find     tbb 06 1 mb        54568 ns        61035 ns         1024
find avx     12 1 mb        27119 ns        45776 ns         1024
find avx tbb 12 1 mb        17459 ns        15259 ns         1024
find         12 1 mb       211991 ns       228882 ns         1024
find     tbb 12 1 mb        33285 ns        61035 ns         1024
find avx     24 1 mb        27635 ns        45776 ns         1024
find avx tbb 24 1 mb        18046 ns        15259 ns         1024
find         24 1 mb       110063 ns        91553 ns         1024
find     tbb 24 1 mb        23570 ns        30518 ns         1024

scan avx     06 1 mb        30741 ns        45776 ns         1024
scan avx tbb 06 1 mb        18018 ns        0.000 ns         1024
scan         06 1 mb       877779 ns       885010 ns         1024
scan     tbb 06 1 mb       140531 ns       167847 ns         1024
scan avx     12 1 mb        30256 ns        15259 ns         1024
scan avx tbb 12 1 mb        17574 ns        15259 ns         1024
scan         12 1 mb       871976 ns       885010 ns         1024
scan     tbb 12 1 mb       139248 ns       122070 ns         1024
scan avx     24 1 mb        30353 ns        0.000 ns         1024
scan avx tbb 24 1 mb        17493 ns        30518 ns         1024
scan         24 1 mb       871782 ns       823975 ns         1024
scan     tbb 24 1 mb       140168 ns        91553 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       187847 ns       305176 ns          512
find avx tbb 06 4 mb       178880 ns       152588 ns          512
find         06 4 mb      1681033 ns      1678467 ns          512
find     tbb 06 4 mb       233758 ns       152588 ns          512
find avx     12 4 mb       187913 ns       213623 ns          512
find avx tbb 12 4 mb       176357 ns       244141 ns          512
find         12 4 mb       864408 ns       854492 ns          512
find     tbb 12 4 mb       199989 ns       183105 ns          512
find avx     24 4 mb       205686 ns       152588 ns          512
find avx tbb 24 4 mb       179465 ns       305176 ns          512
find         24 4 mb       454053 ns       427246 ns          512
find     tbb 24 4 mb       191006 ns       152588 ns          512

scan avx     06 4 mb       201871 ns       183105 ns          512
scan avx tbb 06 4 mb       174642 ns       183105 ns          512
scan         06 4 mb      3389983 ns      3448486 ns          512
scan     tbb 06 4 mb       562896 ns       671387 ns          512
scan avx     12 4 mb       203290 ns       183105 ns          512
scan avx tbb 12 4 mb       170493 ns       183105 ns          512
scan         12 4 mb      3502621 ns      3479004 ns          512
scan     tbb 12 4 mb       560462 ns       488281 ns          512
scan avx     24 4 mb       199381 ns       183105 ns          512
scan avx tbb 24 4 mb       181873 ns       274658 ns          512
scan         24 4 mb      3453069 ns      3570557 ns          512
scan     tbb 24 4 mb       563656 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      773461 ns        0.000 ns           64
find avx tbb 06 16 mb      642086 ns       244141 ns           64
find         06 16 mb     6801034 ns      6591797 ns           64
find     tbb 06 16 mb      819628 ns       732422 ns           64
find avx     12 16 mb      777053 ns       732422 ns           64
find avx tbb 12 16 mb      645556 ns       488281 ns           64
find         12 16 mb     3451086 ns      3417969 ns           64
find     tbb 12 16 mb      696617 ns       488281 ns           64
find avx     24 16 mb      856559 ns       488281 ns           64
find avx tbb 24 16 mb      641744 ns       732422 ns           64
find         24 16 mb     1877375 ns      1708984 ns           64
find     tbb 24 16 mb      669387 ns       976562 ns           64

scan avx     06 16 mb      827656 ns      1220703 ns           64
scan avx tbb 06 16 mb      646436 ns        0.000 ns           64
scan         06 16 mb    13573373 ns     13671875 ns           64
scan     tbb 06 16 mb     2122823 ns      2197266 ns           64
scan avx     12 16 mb      808173 ns       488281 ns           64
scan avx tbb 12 16 mb      642889 ns       488281 ns           64
scan         12 16 mb    13682459 ns     14160156 ns           64
scan     tbb 12 16 mb     2110484 ns      2441406 ns           64
scan avx     24 16 mb      810448 ns        0.000 ns           64
scan avx tbb 24 16 mb      641288 ns       488281 ns           64
scan         24 16 mb    13829986 ns     13427734 ns           64
scan     tbb 24 16 mb     2123095 ns      1708984 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3071356 ns      1464844 ns           32
find avx tbb 06 64 mb     2373450 ns      2929688 ns           32
find         06 64 mb    26713881 ns     26855469 ns           32
find     tbb 06 64 mb     2919881 ns        0.000 ns           32
find avx     12 64 mb     3032681 ns      7812500 ns           32
find avx tbb 12 64 mb     2373706 ns      2441406 ns           32
find         12 64 mb    13556403 ns     13183594 ns           32
find     tbb 12 64 mb     2477916 ns      1953125 ns           32
find avx     24 64 mb     3265475 ns      5371094 ns           32
find avx tbb 24 64 mb     2366069 ns      2441406 ns           32
find         24 64 mb     7133147 ns      6835938 ns           32
find     tbb 24 64 mb     2461537 ns      1953125 ns           32

scan avx     06 64 mb     3144538 ns       488281 ns           32
scan avx tbb 06 64 mb     2375381 ns      1953125 ns           32
scan         06 64 mb    55928531 ns     57128906 ns           32
scan     tbb 06 64 mb     8189384 ns      8300781 ns           32
scan avx     12 64 mb     3198831 ns      3906250 ns           32
scan avx tbb 12 64 mb     2362200 ns      2441406 ns           32
scan         12 64 mb    55767094 ns     53710938 ns           32
scan     tbb 12 64 mb     8215709 ns      7324219 ns           32
scan avx     24 64 mb     3195662 ns      3906250 ns           32
scan avx tbb 24 64 mb     2364422 ns      1464844 ns           32
scan         24 64 mb    54797016 ns     54687500 ns           32
scan     tbb 24 64 mb     8218269 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12231294 ns     11718750 ns           16
find avx tbb 06 256 mb    9300394 ns      9765625 ns           16
find         06 256 mb  106561537 ns    107421875 ns           16
find     tbb 06 256 mb   11321500 ns      9765625 ns           16
find avx     12 256 mb   12079838 ns     10742188 ns           16
find avx tbb 12 256 mb    9259700 ns      9765625 ns           16
find         12 256 mb   54672575 ns     54687500 ns           16
find     tbb 12 256 mb    9545969 ns      7812500 ns           16
find avx     24 256 mb   12743206 ns     12695312 ns           16
find avx tbb 24 256 mb    9291644 ns      7812500 ns           16
find         24 256 mb   28339787 ns     29296875 ns           16
find     tbb 24 256 mb    9461888 ns     11718750 ns           16

scan avx     06 256 mb   13754219 ns     13671875 ns           16
scan avx tbb 06 256 mb    9284956 ns     10742188 ns           16
scan         06 256 mb  219672300 ns    218750000 ns           16
scan     tbb 06 256 mb   32471031 ns     31250000 ns           16
scan avx     12 256 mb   12782931 ns     11718750 ns           16
scan avx tbb 12 256 mb    9275906 ns     10742188 ns           16
scan         12 256 mb  209159731 ns    208984375 ns           16
scan     tbb 12 256 mb   32336706 ns     32226562 ns           16
scan avx     24 256 mb   12753150 ns     13671875 ns           16
scan avx tbb 24 256 mb    9278794 ns      8789062 ns           16
scan         24 256 mb  212443388 ns    209960938 ns           16
scan     tbb 24 256 mb   32654706 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24107000 ns     25390625 ns            8
find avx tbb 06 512 mb   18425862 ns     19531250 ns            8
find         06 512 mb  213447412 ns    212890625 ns            8
find     tbb 06 512 mb   22076488 ns     17578125 ns            8
find avx     12 512 mb   24184662 ns     23437500 ns            8
find avx tbb 12 512 mb   18447412 ns     17578125 ns            8
find         12 512 mb  111627725 ns    109375000 ns            8
find     tbb 12 512 mb   19007175 ns     19531250 ns            8
find avx     24 512 mb   25771875 ns     25390625 ns            8
find avx tbb 24 512 mb   18529100 ns     17578125 ns            8
find         24 512 mb   58092675 ns     58593750 ns            8
find     tbb 24 512 mb   18817663 ns     19531250 ns            8

scan avx     06 512 mb   25729025 ns     23437500 ns            8
scan avx tbb 06 512 mb   18609662 ns     19531250 ns            8
scan         06 512 mb  435450987 ns    431640625 ns            8
scan     tbb 06 512 mb   65153688 ns     60546875 ns            8
scan avx     12 512 mb   27797275 ns     27343750 ns            8
scan avx tbb 12 512 mb   18462913 ns     19531250 ns            8
scan         12 512 mb  433934000 ns    437500000 ns            8
scan     tbb 12 512 mb   64644362 ns     60546875 ns            8
scan avx     24 512 mb   25408575 ns     23437500 ns            8
scan avx tbb 24 512 mb   18480962 ns     17578125 ns            8
scan         24 512 mb  430635762 ns    431640625 ns            8
scan     tbb 24 512 mb   64797763 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48597563 ns     48828125 ns            8
find avx tbb 06 1 gb     37344088 ns     37109375 ns            8
find         06 1 gb    424777925 ns    421875000 ns            8
find     tbb 06 1 gb     44856312 ns     35156250 ns            8
find avx     12 1 gb     52938938 ns     52734375 ns            8
find avx tbb 12 1 gb     36819075 ns     37109375 ns            8
find         12 1 gb    217192962 ns    218750000 ns            8
find     tbb 12 1 gb     37700475 ns     39062500 ns            8
find avx     24 1 gb     50916662 ns     52734375 ns            8
find avx tbb 24 1 gb     36820638 ns     31250000 ns            8
find         24 1 gb    114145000 ns    113281250 ns            8
find     tbb 24 1 gb     37646475 ns     37109375 ns            8

scan avx     06 1 gb     50760400 ns     50781250 ns            8
scan avx tbb 06 1 gb     37158837 ns     41015625 ns            8
scan         06 1 gb    867119912 ns    867187500 ns            8
scan     tbb 06 1 gb    133423750 ns    121093750 ns            8
scan avx     12 1 gb     50855100 ns     48828125 ns            8
scan avx tbb 12 1 gb     36954700 ns     35156250 ns            8
scan         12 1 gb    837150363 ns    835937500 ns            8
scan     tbb 12 1 gb    129561075 ns    123046875 ns            8
scan avx     24 1 gb     50459913 ns     50781250 ns            8
scan avx tbb 24 1 gb     36809762 ns     37109375 ns            8
scan         24 1 gb    877803850 ns    880859375 ns            8
scan     tbb 24 1 gb    130372450 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     98120963 ns     97656250 ns            8
find avx tbb 06 2 gb     73513800 ns     66406250 ns            8
find         06 2 gb    850918888 ns    849609375 ns            8
find     tbb 06 2 gb     89520675 ns     80078125 ns            8
find avx     12 2 gb    102210087 ns    101562500 ns            8
find avx tbb 12 2 gb     73513362 ns     72265625 ns            8
find         12 2 gb    433863400 ns    431640625 ns            8
find     tbb 12 2 gb     75072400 ns     74218750 ns            8
find avx     24 2 gb    100885375 ns     99609375 ns            8
find avx tbb 24 2 gb     74488925 ns     76171875 ns            8
find         24 2 gb    227453325 ns    232421875 ns            8
find     tbb 24 2 gb     75019013 ns     72265625 ns            8

scan avx     06 2 gb    108595812 ns    115234375 ns            8
scan avx tbb 06 2 gb     73747125 ns     72265625 ns            8
scan         06 2 gb   1692013113 ns   1689453125 ns            8
scan     tbb 06 2 gb    260500475 ns    238281250 ns            8
scan avx     12 2 gb    102598700 ns    103515625 ns            8
scan avx tbb 12 2 gb     73565900 ns     66406250 ns            8
scan         12 2 gb   1669837700 ns   1669921875 ns            8
scan     tbb 12 2 gb    259626738 ns    246093750 ns            8
scan avx     24 2 gb    102106800 ns     99609375 ns            8
scan avx tbb 24 2 gb     73698450 ns     74218750 ns            8
scan         24 2 gb   1705066575 ns   1708984375 ns            8
scan     tbb 24 2 gb    260840762 ns    246093750 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1591 ns        0.000 ns         4096
find avx tbb 06 16 kb        1015 ns        0.000 ns         4096
find         06 16 kb        6638 ns         7629 ns         4096
find     tbb 06 16 kb        9294 ns         7629 ns         4096
find avx     12 16 kb        1086 ns        0.000 ns         4096
find avx tbb 12 16 kb        1066 ns         3815 ns         4096
find         12 16 kb        3838 ns        0.000 ns         4096
find     tbb 12 16 kb        8680 ns         7629 ns         4096
find avx     24 16 kb        1068 ns        0.000 ns         4096
find avx tbb 24 16 kb        1115 ns         3815 ns         4096
find         24 16 kb        2321 ns        0.000 ns         4096
find     tbb 24 16 kb        8393 ns        11444 ns         4096

scan avx     06 16 kb         951 ns        0.000 ns         4096
scan avx tbb 06 16 kb         988 ns         3815 ns         4096
scan         06 16 kb       11811 ns        11444 ns         4096
scan     tbb 06 16 kb        8155 ns        11444 ns         4096
scan avx     12 16 kb        1001 ns        0.000 ns         4096
scan avx tbb 12 16 kb        1025 ns         3815 ns         4096
scan         12 16 kb       12039 ns        11444 ns         4096
scan     tbb 12 16 kb        8162 ns         7629 ns         4096
scan avx     24 16 kb        1026 ns         3815 ns         4096
scan avx tbb 24 16 kb        1047 ns        0.000 ns         4096
scan         24 16 kb       12026 ns        15259 ns         4096
scan     tbb 24 16 kb        8228 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2224 ns         3815 ns         4096
find avx tbb 06 64 kb        2224 ns        0.000 ns         4096
find         06 64 kb       25888 ns        26703 ns         4096
find     tbb 06 64 kb       11577 ns        11444 ns         4096
find avx     12 64 kb        2147 ns        0.000 ns         4096
find avx tbb 12 64 kb        2090 ns         3815 ns         4096
find         12 64 kb       12695 ns        11444 ns         4096
find     tbb 12 64 kb        9911 ns        11444 ns         4096
find avx     24 64 kb        2590 ns         3815 ns         4096
find avx tbb 24 64 kb        2501 ns        0.000 ns         4096
find         24 64 kb        7137 ns        11444 ns         4096
find     tbb 24 64 kb        9032 ns         7629 ns         4096

scan avx     06 64 kb        2378 ns         3815 ns         4096
scan avx tbb 06 64 kb        2343 ns         3815 ns         4096
scan         06 64 kb       44376 ns        41962 ns         4096
scan     tbb 06 64 kb       15054 ns         7629 ns         4096
scan avx     12 64 kb        2273 ns        0.000 ns         4096
scan avx tbb 12 64 kb        2255 ns         3815 ns         4096
scan         12 64 kb       44219 ns        41962 ns         4096
scan     tbb 12 64 kb       14929 ns        15259 ns         4096
scan avx     24 64 kb        2217 ns        0.000 ns         4096
scan avx tbb 24 64 kb        2254 ns         3815 ns         4096
scan         24 64 kb       44222 ns        45776 ns         4096
scan     tbb 24 64 kb       14664 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       6941 ns        0.000 ns         2048
find avx tbb 06 256 kb       6916 ns         7629 ns         2048
find         06 256 kb      97636 ns        91553 ns         2048
find     tbb 06 256 kb      22232 ns        22888 ns         2048
find avx     12 256 kb       7219 ns        15259 ns         2048
find avx tbb 12 256 kb       6984 ns        0.000 ns         2048
find         12 256 kb      49759 ns        53406 ns         2048
find     tbb 12 256 kb      17297 ns        22888 ns         2048
find avx     24 256 kb       8874 ns         7629 ns         2048
find avx tbb 24 256 kb       7982 ns        0.000 ns         2048
find         24 256 kb      26138 ns        22888 ns         2048
find     tbb 24 256 kb      14499 ns        22888 ns         2048

scan avx     06 256 kb       7796 ns        15259 ns         2048
scan avx tbb 06 256 kb       7688 ns         7629 ns         2048
scan         06 256 kb     171709 ns       167847 ns         2048
scan     tbb 06 256 kb      42378 ns        45776 ns         2048
scan avx     12 256 kb       8430 ns         7629 ns         2048
scan avx tbb 12 256 kb       7872 ns        15259 ns         2048
scan         12 256 kb     172220 ns       183105 ns         2048
scan     tbb 12 256 kb      42967 ns        30518 ns         2048
scan avx     24 256 kb       8095 ns        0.000 ns         2048
scan avx tbb 24 256 kb       7944 ns        15259 ns         2048
scan         24 256 kb     169180 ns       183105 ns         2048
scan     tbb 24 256 kb      43230 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25978 ns        15259 ns         1024
find avx tbb 06 1 mb        17795 ns        15259 ns         1024
find         06 1 mb       380539 ns       381470 ns         1024
find     tbb 06 1 mb        50019 ns        61035 ns         1024
find avx     12 1 mb        25569 ns        45776 ns         1024
find avx tbb 12 1 mb        17502 ns        0.000 ns         1024
find         12 1 mb       194149 ns       183105 ns         1024
find     tbb 12 1 mb        31690 ns        30518 ns         1024
find avx     24 1 mb        32147 ns        30518 ns         1024
find avx tbb 24 1 mb        17926 ns        30518 ns         1024
find         24 1 mb        98927 ns       122070 ns         1024
find     tbb 24 1 mb        23769 ns        45776 ns         1024

scan avx     06 1 mb        28717 ns        61035 ns         1024
scan avx tbb 06 1 mb        17471 ns        45776 ns         1024
scan         06 1 mb       680608 ns       686646 ns         1024
scan     tbb 06 1 mb       139080 ns       122070 ns         1024
scan avx     12 1 mb        30033 ns        30518 ns         1024
scan avx tbb 12 1 mb        17530 ns        30518 ns         1024
scan         12 1 mb       678976 ns       701904 ns         1024
scan     tbb 12 1 mb       140358 ns       167847 ns         1024
scan avx     24 1 mb        29625 ns        45776 ns         1024
scan avx tbb 24 1 mb        17602 ns        15259 ns         1024
scan         24 1 mb       680607 ns       686646 ns         1024
scan     tbb 24 1 mb       139925 ns       183105 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189603 ns       183105 ns          512
find avx tbb 06 4 mb       176842 ns       244141 ns          512
find         06 4 mb      1523582 ns      1617432 ns          512
find     tbb 06 4 mb       224907 ns       183105 ns          512
find avx     12 4 mb       190825 ns        91553 ns          512
find avx tbb 12 4 mb       168185 ns       152588 ns          512
find         12 4 mb       782572 ns       793457 ns          512
find     tbb 12 4 mb       201050 ns       183105 ns          512
find avx     24 4 mb       219857 ns       305176 ns          512
find avx tbb 24 4 mb       179292 ns       213623 ns          512
find         24 4 mb       416598 ns       488281 ns          512
find     tbb 24 4 mb       185329 ns       244141 ns          512

scan avx     06 4 mb       201370 ns       213623 ns          512
scan avx tbb 06 4 mb       177229 ns       122070 ns          512
scan         06 4 mb      2715067 ns      2624512 ns          512
scan     tbb 06 4 mb       566787 ns       610352 ns          512
scan avx     12 4 mb       200440 ns       152588 ns          512
scan avx tbb 12 4 mb       175790 ns       152588 ns          512
scan         12 4 mb      2709474 ns      2746582 ns          512
scan     tbb 12 4 mb       561400 ns       518799 ns          512
scan avx     24 4 mb       199829 ns       183105 ns          512
scan avx tbb 24 4 mb       174018 ns       152588 ns          512
scan         24 4 mb      2708169 ns      2746582 ns          512
scan     tbb 24 4 mb       571375 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      773073 ns       732422 ns           64
find avx tbb 06 16 mb      625066 ns       488281 ns           64
find         06 16 mb     6106770 ns      6103516 ns           64
find     tbb 06 16 mb      757480 ns       732422 ns           64
find avx     12 16 mb      773113 ns       488281 ns           64
find avx tbb 12 16 mb      641023 ns       244141 ns           64
find         12 16 mb     3190206 ns      3173828 ns           64
find     tbb 12 16 mb      689945 ns       488281 ns           64
find avx     24 16 mb      903425 ns       732422 ns           64
find avx tbb 24 16 mb      634289 ns       976562 ns           64
find         24 16 mb     1691273 ns      1464844 ns           64
find     tbb 24 16 mb      669948 ns       488281 ns           64

scan avx     06 16 mb      817991 ns       732422 ns           64
scan avx tbb 06 16 mb      657848 ns       732422 ns           64
scan         06 16 mb    10859389 ns     10742188 ns           64
scan     tbb 06 16 mb     2117094 ns      2197266 ns           64
scan avx     12 16 mb      805330 ns      1708984 ns           64
scan avx tbb 12 16 mb      637841 ns       732422 ns           64
scan         12 16 mb    10919964 ns     10742188 ns           64
scan     tbb 12 16 mb     2118192 ns      1220703 ns           64
scan avx     24 16 mb      807803 ns       976562 ns           64
scan avx tbb 24 16 mb      632205 ns       732422 ns           64
scan         24 16 mb    10897305 ns     10253906 ns           64
scan     tbb 24 16 mb     2121302 ns      1464844 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3040225 ns      3906250 ns           32
find avx tbb 06 64 mb     2367341 ns      2441406 ns           32
find         06 64 mb    24208675 ns     22949219 ns           32
find     tbb 06 64 mb     2781975 ns      2441406 ns           32
find avx     12 64 mb     3042481 ns       488281 ns           32
find avx tbb 12 64 mb     2358056 ns       976562 ns           32
find         12 64 mb    12563850 ns     11718750 ns           32
find     tbb 12 64 mb     2473041 ns      1953125 ns           32
find avx     24 64 mb     3375553 ns      3906250 ns           32
find avx tbb 24 64 mb     2366700 ns      2441406 ns           32
find         24 64 mb     6610959 ns      7324219 ns           32
find     tbb 24 64 mb     2439775 ns      2441406 ns           32

scan avx     06 64 mb     3352663 ns      5371094 ns           32
scan avx tbb 06 64 mb     2373744 ns      2441406 ns           32
scan         06 64 mb    43419047 ns     41992188 ns           32
scan     tbb 06 64 mb     8245884 ns      8300781 ns           32
scan avx     12 64 mb     3195553 ns      4394531 ns           32
scan avx tbb 12 64 mb     2367025 ns      2441406 ns           32
scan         12 64 mb    43250328 ns     42968750 ns           32
scan     tbb 12 64 mb     8239400 ns      7812500 ns           32
scan avx     24 64 mb     3164084 ns      1464844 ns           32
scan avx tbb 24 64 mb     2373481 ns      3417969 ns           32
scan         24 64 mb    43207659 ns     42968750 ns           32
scan     tbb 24 64 mb     8268213 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12388225 ns     14648438 ns           16
find avx tbb 06 256 mb    9259731 ns      8789062 ns           16
find         06 256 mb   97070481 ns     96679688 ns           16
find     tbb 06 256 mb   10220263 ns      6835938 ns           16
find avx     12 256 mb   12080081 ns     15625000 ns           16
find avx tbb 12 256 mb    9693087 ns      9765625 ns           16
find         12 256 mb   49496200 ns     48828125 ns           16
find     tbb 12 256 mb    9595981 ns     10742188 ns           16
find avx     24 256 mb   13449812 ns     13671875 ns           16
find avx tbb 24 256 mb    9432406 ns      8789062 ns           16
find         24 256 mb   26205419 ns     30273438 ns           16
find     tbb 24 256 mb    9492263 ns      8789062 ns           16

scan avx     06 256 mb   13635506 ns     14648438 ns           16
scan avx tbb 06 256 mb    9281719 ns     10742188 ns           16
scan         06 256 mb  172414081 ns    171875000 ns           16
scan     tbb 06 256 mb   32474119 ns     30273438 ns           16
scan avx     12 256 mb   12646331 ns     12695312 ns           16
scan avx tbb 12 256 mb    9715450 ns      9765625 ns           16
scan         12 256 mb  172846012 ns    173828125 ns           16
scan     tbb 12 256 mb   32413188 ns     33203125 ns           16
scan avx     24 256 mb   12640981 ns      9765625 ns           16
scan avx tbb 24 256 mb    9300144 ns      8789062 ns           16
scan         24 256 mb  173081563 ns    172851562 ns           16
scan     tbb 24 256 mb   32825506 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24245412 ns     25390625 ns            8
find avx tbb 06 512 mb   18441625 ns     17578125 ns            8
find         06 512 mb  194124875 ns    197265625 ns            8
find     tbb 06 512 mb   20282000 ns     21484375 ns            8
find avx     12 512 mb   24234338 ns     25390625 ns            8
find avx tbb 12 512 mb   18695288 ns     21484375 ns            8
find         12 512 mb   99653525 ns     99609375 ns            8
find     tbb 12 512 mb   18841337 ns     19531250 ns            8
find avx     24 512 mb   29030363 ns     29296875 ns            8
find avx tbb 24 512 mb   18472250 ns     15625000 ns            8
find         24 512 mb   52308112 ns     54687500 ns            8
find     tbb 24 512 mb   18774712 ns     21484375 ns            8

scan avx     06 512 mb   25204600 ns     23437500 ns            8
scan avx tbb 06 512 mb   18483150 ns     19531250 ns            8
scan         06 512 mb  345175400 ns    343750000 ns            8
scan     tbb 06 512 mb   64851688 ns     62500000 ns            8
scan avx     12 512 mb   25156350 ns     25390625 ns            8
scan avx tbb 12 512 mb   18456200 ns     17578125 ns            8
scan         12 512 mb  344794525 ns    343750000 ns            8
scan     tbb 12 512 mb   64931475 ns     60546875 ns            8
scan avx     24 512 mb   25364000 ns     27343750 ns            8
scan avx tbb 24 512 mb   18500763 ns     21484375 ns            8
scan         24 512 mb  346029738 ns    347656250 ns            8
scan     tbb 24 512 mb   64628637 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48434950 ns     46875000 ns            8
find avx tbb 06 1 gb     37148175 ns     37109375 ns            8
find         06 1 gb    385326738 ns    384765625 ns            8
find     tbb 06 1 gb     39929887 ns     35156250 ns            8
find avx     12 1 gb     48402213 ns     46875000 ns            8
find avx tbb 12 1 gb     37037675 ns     41015625 ns            8
find         12 1 gb    196215975 ns    197265625 ns            8
find     tbb 12 1 gb     37667800 ns     31250000 ns            8
find avx     24 1 gb     53971100 ns     50781250 ns            8
find avx tbb 24 1 gb     36901425 ns     33203125 ns            8
find         24 1 gb    108167250 ns    105468750 ns            8
find     tbb 24 1 gb     37411950 ns     35156250 ns            8

scan avx     06 1 gb     55212212 ns     56640625 ns            8
scan avx tbb 06 1 gb     36845800 ns     39062500 ns            8
scan         06 1 gb    690833263 ns    687500000 ns            8
scan     tbb 06 1 gb    129260437 ns    121093750 ns            8
scan avx     12 1 gb     51474800 ns     52734375 ns            8
scan avx tbb 12 1 gb     36851212 ns     33203125 ns            8
scan         12 1 gb    690663538 ns    691406250 ns            8
scan     tbb 12 1 gb    130333175 ns    125000000 ns            8
scan avx     24 1 gb     55373662 ns     54687500 ns            8
scan avx tbb 24 1 gb     36893813 ns     35156250 ns            8
scan         24 1 gb    691037687 ns    689453125 ns            8
scan     tbb 24 1 gb    129184275 ns    125000000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    103051988 ns    103515625 ns            8
find avx tbb 06 2 gb     73525763 ns     78125000 ns            8
find         06 2 gb    776556425 ns    777343750 ns            8
find     tbb 06 2 gb     79802262 ns     72265625 ns            8
find avx     12 2 gb    100313237 ns    101562500 ns            8
find avx tbb 12 2 gb     73558637 ns     74218750 ns            8
find         12 2 gb    392644500 ns    392578125 ns            8
find     tbb 12 2 gb     75071788 ns     74218750 ns            8
find avx     24 2 gb    107929425 ns    109375000 ns            8
find avx tbb 24 2 gb     73541475 ns     70312500 ns            8
find         24 2 gb    208953450 ns    207031250 ns            8
find     tbb 24 2 gb     74725362 ns     72265625 ns            8

scan avx     06 2 gb    101322313 ns     99609375 ns            8
scan avx tbb 06 2 gb     73582400 ns     76171875 ns            8
scan         06 2 gb   1380698187 ns   1380859375 ns            8
scan     tbb 06 2 gb    259277263 ns    240234375 ns            8
scan avx     12 2 gb    101192575 ns    103515625 ns            8
scan avx tbb 12 2 gb     73609875 ns     74218750 ns            8
scan         12 2 gb   1380575163 ns   1382812500 ns            8
scan     tbb 12 2 gb    258094538 ns    250000000 ns            8
scan avx     24 2 gb    109366762 ns    109375000 ns            8
scan avx tbb 24 2 gb     73935262 ns     78125000 ns            8
scan         24 2 gb   1381701437 ns   1378906250 ns            8
scan     tbb 24 2 gb    259727112 ns    246093750 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1614 ns        0.000 ns         4096
find avx tbb 06 16 kb        1025 ns        0.000 ns         4096
find         06 16 kb        6784 ns         7629 ns         4096
find     tbb 06 16 kb        9472 ns         7629 ns         4096
find avx     12 16 kb         992 ns        0.000 ns         4096
find avx tbb 12 16 kb         972 ns        0.000 ns         4096
find         12 16 kb        3848 ns         3815 ns         4096
find     tbb 12 16 kb        8689 ns         7629 ns         4096
find avx     24 16 kb        1183 ns         3815 ns         4096
find avx tbb 24 16 kb        1169 ns        0.000 ns         4096
find         24 16 kb        2359 ns         3815 ns         4096
find     tbb 24 16 kb        8320 ns        11444 ns         4096

scan avx     06 16 kb         950 ns        0.000 ns         4096
scan avx tbb 06 16 kb         977 ns         3815 ns         4096
scan         06 16 kb       10142 ns        11444 ns         4096
scan     tbb 06 16 kb        7606 ns         7629 ns         4096
scan avx     12 16 kb         995 ns         3815 ns         4096
scan avx tbb 12 16 kb        1028 ns        0.000 ns         4096
scan         12 16 kb       10256 ns        11444 ns         4096
scan     tbb 12 16 kb        7684 ns         7629 ns         4096
scan avx     24 16 kb        1033 ns         3815 ns         4096
scan avx tbb 24 16 kb        1038 ns        0.000 ns         4096
scan         24 16 kb       10371 ns        11444 ns         4096
scan     tbb 24 16 kb        7631 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2182 ns        0.000 ns         4096
find avx tbb 06 64 kb        2231 ns        0.000 ns         4096
find         06 64 kb       25947 ns        22888 ns         4096
find     tbb 06 64 kb       11374 ns        11444 ns         4096
find avx     12 64 kb        2104 ns         3815 ns         4096
find avx tbb 12 64 kb        2067 ns         3815 ns         4096
find         12 64 kb       12732 ns        15259 ns         4096
find     tbb 12 64 kb        9910 ns        11444 ns         4096
find avx     24 64 kb        2517 ns        0.000 ns         4096
find avx tbb 24 64 kb        2540 ns        0.000 ns         4096
find         24 64 kb        6873 ns         7629 ns         4096
find     tbb 24 64 kb        9189 ns         7629 ns         4096

scan avx     06 64 kb        2343 ns        0.000 ns         4096
scan avx tbb 06 64 kb        2358 ns         3815 ns         4096
scan         06 64 kb       37596 ns        30518 ns         4096
scan     tbb 06 64 kb       13135 ns        15259 ns         4096
scan avx     12 64 kb        2257 ns         3815 ns         4096
scan avx tbb 12 64 kb        2257 ns        0.000 ns         4096
scan         12 64 kb       37278 ns        38147 ns         4096
scan     tbb 12 64 kb       13357 ns        11444 ns         4096
scan avx     24 64 kb        2226 ns         3815 ns         4096
scan avx tbb 24 64 kb        2239 ns        0.000 ns         4096
scan         24 64 kb       36128 ns        34332 ns         4096
scan     tbb 24 64 kb       13064 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7007 ns        0.000 ns         2048
find avx tbb 06 256 kb       6883 ns        0.000 ns         2048
find         06 256 kb      97559 ns        99182 ns         2048
find     tbb 06 256 kb      22039 ns        22888 ns         2048
find avx     12 256 kb       6985 ns         7629 ns         2048
find avx tbb 12 256 kb       6866 ns         7629 ns         2048
find         12 256 kb      47930 ns        45776 ns         2048
find     tbb 12 256 kb      16699 ns        22888 ns         2048
find avx     24 256 kb       8793 ns        15259 ns         2048
find avx tbb 24 256 kb       8192 ns        0.000 ns         2048
find         24 256 kb      25317 ns        22888 ns         2048
find     tbb 24 256 kb      13983 ns        22888 ns         2048

scan avx     06 256 kb       8104 ns         7629 ns         2048
scan avx tbb 06 256 kb       7749 ns         7629 ns         2048
scan         06 256 kb     145636 ns       152588 ns         2048
scan     tbb 06 256 kb      35962 ns        30518 ns         2048
scan avx     12 256 kb       8759 ns        15259 ns         2048
scan avx tbb 12 256 kb       8198 ns        15259 ns         2048
scan         12 256 kb     143200 ns       129700 ns         2048
scan     tbb 12 256 kb      35963 ns        45776 ns         2048
scan avx     24 256 kb       7888 ns         7629 ns         2048
scan avx tbb 24 256 kb       7793 ns         7629 ns         2048
scan         24 256 kb     145625 ns       144958 ns         2048
scan     tbb 24 256 kb      35898 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25355 ns        30518 ns         1024
find avx tbb 06 1 mb        18308 ns        15259 ns         1024
find         06 1 mb       380409 ns       366211 ns         1024
find     tbb 06 1 mb        50923 ns        61035 ns         1024
find avx     12 1 mb        25703 ns        45776 ns         1024
find avx tbb 12 1 mb        17664 ns        45776 ns         1024
find         12 1 mb       192974 ns       183105 ns         1024
find     tbb 12 1 mb        31869 ns        61035 ns         1024
find avx     24 1 mb        33483 ns        0.000 ns         1024
find avx tbb 24 1 mb        18804 ns        15259 ns         1024
find         24 1 mb        98978 ns       106812 ns         1024
find     tbb 24 1 mb        23151 ns        15259 ns         1024

scan avx     06 1 mb        28402 ns        30518 ns         1024
scan avx tbb 06 1 mb        17317 ns        0.000 ns         1024
scan         06 1 mb       603331 ns       595093 ns         1024
scan     tbb 06 1 mb       117130 ns       106812 ns         1024
scan avx     12 1 mb        30056 ns        15259 ns         1024
scan avx tbb 12 1 mb        17751 ns        61035 ns         1024
scan         12 1 mb       587346 ns       549316 ns         1024
scan     tbb 12 1 mb       119132 ns       122070 ns         1024
scan avx     24 1 mb        29052 ns        30518 ns         1024
scan avx tbb 24 1 mb        17835 ns        30518 ns         1024
scan         24 1 mb       602393 ns       595093 ns         1024
scan     tbb 24 1 mb       117830 ns        76294 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       192287 ns       183105 ns          512
find avx tbb 06 4 mb       168323 ns       213623 ns          512
find         06 4 mb      1534006 ns      1495361 ns          512
find     tbb 06 4 mb       219879 ns       122070 ns          512
find avx     12 4 mb       190771 ns       152588 ns          512
find avx tbb 12 4 mb       174890 ns       183105 ns          512
find         12 4 mb       783158 ns       823975 ns          512
find     tbb 12 4 mb       196655 ns        91553 ns          512
find avx     24 4 mb       212932 ns       213623 ns          512
find avx tbb 24 4 mb       178081 ns       152588 ns          512
find         24 4 mb       418228 ns       427246 ns          512
find     tbb 24 4 mb       193567 ns       183105 ns          512

scan avx     06 4 mb       199659 ns       183105 ns          512
scan avx tbb 06 4 mb       177106 ns       152588 ns          512
scan         06 4 mb      2295709 ns      2197266 ns          512
scan     tbb 06 4 mb       481433 ns       427246 ns          512
scan avx     12 4 mb       200644 ns       213623 ns          512
scan avx tbb 12 4 mb       174142 ns       122070 ns          512
scan         12 4 mb      2272346 ns      2319336 ns          512
scan     tbb 12 4 mb       476734 ns       457764 ns          512
scan avx     24 4 mb       202662 ns       183105 ns          512
scan avx tbb 24 4 mb       182419 ns       183105 ns          512
scan         24 4 mb      2283818 ns      2380371 ns          512
scan     tbb 24 4 mb       481346 ns       366211 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      776711 ns      1220703 ns           64
find avx tbb 06 16 mb      640631 ns       732422 ns           64
find         06 16 mb     6106145 ns      6591797 ns           64
find     tbb 06 16 mb      754072 ns       976562 ns           64
find avx     12 16 mb      785595 ns       976562 ns           64
find avx tbb 12 16 mb      637091 ns       488281 ns           64
find         12 16 mb     3169148 ns      3173828 ns           64
find     tbb 12 16 mb      704194 ns       244141 ns           64
find avx     24 16 mb      916400 ns       488281 ns           64
find avx tbb 24 16 mb      631383 ns       488281 ns           64
find         24 16 mb     1693230 ns      1464844 ns           64
find     tbb 24 16 mb      668877 ns       488281 ns           64

scan avx     06 16 mb      810008 ns       488281 ns           64
scan avx tbb 06 16 mb      641523 ns       976562 ns           64
scan         06 16 mb     9175181 ns      9033203 ns           64
scan     tbb 06 16 mb     1822187 ns      2441406 ns           64
scan avx     12 16 mb      816394 ns       732422 ns           64
scan avx tbb 12 16 mb      638986 ns      1220703 ns           64
scan         12 16 mb     9200538 ns      9277344 ns           64
scan     tbb 12 16 mb     1817519 ns      1708984 ns           64
scan avx     24 16 mb      824917 ns       732422 ns           64
scan avx tbb 24 16 mb      635659 ns       488281 ns           64
scan         24 16 mb     9212781 ns      9033203 ns           64
scan     tbb 24 16 mb     1825166 ns      1220703 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3085006 ns      5859375 ns           32
find avx tbb 06 64 mb     2363941 ns      1953125 ns           32
find         06 64 mb    24147816 ns     24414062 ns           32
find     tbb 06 64 mb     2680172 ns      2441406 ns           32
find avx     12 64 mb     3001825 ns      7812500 ns           32
find avx tbb 12 64 mb     2365488 ns      2441406 ns           32
find         12 64 mb    12261828 ns     11718750 ns           32
find     tbb 12 64 mb     2490428 ns      2929688 ns           32
find avx     24 64 mb     3380775 ns      3906250 ns           32
find avx tbb 24 64 mb     2377781 ns      2441406 ns           32
find         24 64 mb     6522153 ns      6835938 ns           32
find     tbb 24 64 mb     2555075 ns      1953125 ns           32

scan avx     06 64 mb     3179081 ns      1464844 ns           32
scan avx tbb 06 64 mb     2361919 ns      2441406 ns           32
scan         06 64 mb    36134753 ns     36132812 ns           32
scan     tbb 06 64 mb     6876494 ns      6347656 ns           32
scan avx     12 64 mb     3123887 ns      2441406 ns           32
scan avx tbb 12 64 mb     2434687 ns      1953125 ns           32
scan         12 64 mb    36119303 ns     36132812 ns           32
scan     tbb 12 64 mb     6887609 ns      5859375 ns           32
scan avx     24 64 mb     3355666 ns      1953125 ns           32
scan avx tbb 24 64 mb     2365716 ns      2929688 ns           32
scan         24 64 mb    36627356 ns     36132812 ns           32
scan     tbb 24 64 mb     6943603 ns      7324219 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12044163 ns      8789062 ns           16
find avx tbb 06 256 mb    9259575 ns      9765625 ns           16
find         06 256 mb   96591369 ns     98632812 ns           16
find     tbb 06 256 mb   10131556 ns     15625000 ns           16
find avx     12 256 mb   12133106 ns     10742188 ns           16
find avx tbb 12 256 mb    9269525 ns      9765625 ns           16
find         12 256 mb   49024206 ns     48828125 ns           16
find     tbb 12 256 mb    9550062 ns      8789062 ns           16
find avx     24 256 mb   14118944 ns     14648438 ns           16
find avx tbb 24 256 mb    9284013 ns     10742188 ns           16
find         24 256 mb   26159438 ns     27343750 ns           16
find     tbb 24 256 mb    9470156 ns      7812500 ns           16

scan avx     06 256 mb   12668963 ns     11718750 ns           16
scan avx tbb 06 256 mb    9284281 ns      9765625 ns           16
scan         06 256 mb  145043275 ns    144531250 ns           16
scan     tbb 06 256 mb   27243831 ns     27343750 ns           16
scan avx     12 256 mb   12666844 ns     13671875 ns           16
scan avx tbb 12 256 mb    9286700 ns      9765625 ns           16
scan         12 256 mb  144641319 ns    145507812 ns           16
scan     tbb 12 256 mb   27099844 ns     23437500 ns           16
scan avx     24 256 mb   13014331 ns     13671875 ns           16
scan avx tbb 24 256 mb    9330856 ns      7812500 ns           16
scan         24 256 mb  144692319 ns    145507812 ns           16
scan     tbb 24 256 mb   27100650 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24304438 ns     27343750 ns            8
find avx tbb 06 512 mb   18435150 ns     15625000 ns            8
find         06 512 mb  193750925 ns    197265625 ns            8
find     tbb 06 512 mb   20628125 ns     15625000 ns            8
find avx     12 512 mb   24231188 ns     25390625 ns            8
find avx tbb 12 512 mb   18458637 ns     13671875 ns            8
find         12 512 mb   99673512 ns     99609375 ns            8
find     tbb 12 512 mb   18934837 ns     17578125 ns            8
find avx     24 512 mb   27576950 ns     25390625 ns            8
find avx tbb 24 512 mb   18463638 ns     17578125 ns            8
find         24 512 mb   56267075 ns     58593750 ns            8
find     tbb 24 512 mb   19278725 ns     19531250 ns            8

scan avx     06 512 mb   25595487 ns     29296875 ns            8
scan avx tbb 06 512 mb   18485113 ns     17578125 ns            8
scan         06 512 mb  289869000 ns    292968750 ns            8
scan     tbb 06 512 mb   54187087 ns     50781250 ns            8
scan avx     12 512 mb   27749987 ns     25390625 ns            8
scan avx tbb 12 512 mb   18488000 ns     19531250 ns            8
scan         12 512 mb  289107300 ns    292968750 ns            8
scan     tbb 12 512 mb   53894075 ns     46875000 ns            8
scan avx     24 512 mb   25223775 ns     25390625 ns            8
scan avx tbb 24 512 mb   18496225 ns     19531250 ns            8
scan         24 512 mb  289605650 ns    291015625 ns            8
scan     tbb 24 512 mb   53936575 ns     46875000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48741838 ns     48828125 ns            8
find avx tbb 06 1 gb     37323188 ns     37109375 ns            8
find         06 1 gb    385487163 ns    384765625 ns            8
find     tbb 06 1 gb     39914963 ns     39062500 ns            8
find avx     12 1 gb     48608950 ns     48828125 ns            8
find avx tbb 12 1 gb     36779562 ns     39062500 ns            8
find         12 1 gb    199673475 ns    201171875 ns            8
find     tbb 12 1 gb     37653650 ns     35156250 ns            8
find avx     24 1 gb     54379875 ns     52734375 ns            8
find avx tbb 24 1 gb     36835837 ns     39062500 ns            8
find         24 1 gb    104502525 ns    105468750 ns            8
find     tbb 24 1 gb     37515225 ns     39062500 ns            8

scan avx     06 1 gb     50481513 ns     52734375 ns            8
scan avx tbb 06 1 gb     36832288 ns     37109375 ns            8
scan         06 1 gb    579297012 ns    578125000 ns            8
scan     tbb 06 1 gb    107644500 ns    101562500 ns            8
scan avx     12 1 gb     55122987 ns     54687500 ns            8
scan avx tbb 12 1 gb     36833775 ns     39062500 ns            8
scan         12 1 gb    578553125 ns    580078125 ns            8
scan     tbb 12 1 gb    107791675 ns    101562500 ns            8
scan avx     24 1 gb     50761438 ns     52734375 ns            8
scan avx tbb 24 1 gb     36851150 ns     37109375 ns            8
scan         24 1 gb    578636362 ns    578125000 ns            8
scan     tbb 24 1 gb    108287713 ns     99609375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb     97294950 ns     99609375 ns            8
find avx tbb 06 2 gb     73599362 ns     72265625 ns            8
find         06 2 gb    772403887 ns    775390625 ns            8
find     tbb 06 2 gb     79932950 ns     76171875 ns            8
find avx     12 2 gb     96934213 ns     99609375 ns            8
find avx tbb 12 2 gb     73958625 ns     72265625 ns            8
find         12 2 gb    395404813 ns    394531250 ns            8
find     tbb 12 2 gb     75513000 ns     76171875 ns            8
find avx     24 2 gb    111289925 ns    109375000 ns            8
find avx tbb 24 2 gb     73725763 ns     74218750 ns            8
find         24 2 gb    215361913 ns    214843750 ns            8
find     tbb 24 2 gb     74713762 ns     74218750 ns            8

scan avx     06 2 gb    102482900 ns    101562500 ns            8
scan avx tbb 06 2 gb     73783638 ns     72265625 ns            8
scan         06 2 gb   1160322800 ns   1162109375 ns            8
scan     tbb 06 2 gb    217135800 ns    203125000 ns            8
scan avx     12 2 gb    101905038 ns    103515625 ns            8
scan avx tbb 12 2 gb     73644000 ns     74218750 ns            8
scan         12 2 gb   1157067063 ns   1158203125 ns            8
scan     tbb 12 2 gb    215010575 ns    187500000 ns            8
scan avx     24 2 gb    101650825 ns    101562500 ns            8
scan avx tbb 24 2 gb     73617387 ns     66406250 ns            8
scan         24 2 gb   1161289850 ns   1160156250 ns            8
scan     tbb 24 2 gb    216268400 ns    205078125 ns            8
```

</details>

