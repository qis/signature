# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        4399 ns         3815 ns         4096
find avx     noe 06 16 kb        1761 ns        0.000 ns         4096
find avx tbb     06 16 kb        1354 ns        0.000 ns         4096
find avx tbb noe 06 16 kb        1095 ns        0.000 ns         4096
find             06 16 kb        7251 ns         7629 ns         4096
find         noe 06 16 kb        7303 ns         7629 ns         4096
find     tbb     06 16 kb        7786 ns        11444 ns         4096
find     tbb noe 06 16 kb        7597 ns         7629 ns         4096
find avx         12 16 kb        1079 ns         3815 ns         4096
find avx     noe 12 16 kb        1087 ns        0.000 ns         4096
find avx tbb     12 16 kb        1081 ns         3815 ns         4096
find avx tbb noe 12 16 kb        1083 ns        0.000 ns         4096
find             12 16 kb        4211 ns         7629 ns         4096
find         noe 12 16 kb        4273 ns        0.000 ns         4096
find     tbb     12 16 kb        7166 ns         7629 ns         4096
find     tbb noe 12 16 kb        7161 ns         7629 ns         4096
find avx         24 16 kb        1153 ns         3815 ns         4096
find avx     noe 24 16 kb        1192 ns        0.000 ns         4096
find avx tbb     24 16 kb        1089 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1140 ns        0.000 ns         4096
find             24 16 kb        2576 ns        0.000 ns         4096
find         noe 24 16 kb        2502 ns         3815 ns         4096
find     tbb     24 16 kb        7081 ns         7629 ns         4096
find     tbb noe 24 16 kb        7009 ns        11444 ns         4096

scan avx         06 16 kb       14516 ns        11444 ns         4096
scan avx     noe 06 16 kb       14025 ns        15259 ns         4096
scan avx tbb     06 16 kb       14156 ns        15259 ns         4096
scan avx tbb noe 06 16 kb       13372 ns        11444 ns         4096
scan             06 16 kb       13016 ns        15259 ns         4096
scan         noe 06 16 kb       12100 ns        11444 ns         4096
scan     tbb     06 16 kb        7423 ns        11444 ns         4096
scan     tbb noe 06 16 kb        7459 ns         3815 ns         4096
scan avx         12 16 kb       13838 ns        15259 ns         4096
scan avx     noe 12 16 kb       14157 ns        11444 ns         4096
scan avx tbb     12 16 kb       13911 ns        15259 ns         4096
scan avx tbb noe 12 16 kb       13437 ns        11444 ns         4096
scan             12 16 kb       12899 ns        15259 ns         4096
scan         noe 12 16 kb       13590 ns        11444 ns         4096
scan     tbb     12 16 kb        7484 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7474 ns         3815 ns         4096
scan avx         24 16 kb       13910 ns        15259 ns         4096
scan avx     noe 24 16 kb       13299 ns        15259 ns         4096
scan avx tbb     24 16 kb       13360 ns        15259 ns         4096
scan avx tbb noe 24 16 kb       13350 ns        11444 ns         4096
scan             24 16 kb       13362 ns        11444 ns         4096
scan         noe 24 16 kb       13336 ns        15259 ns         4096
scan     tbb     24 16 kb        7483 ns         3815 ns         4096
scan     tbb noe 24 16 kb        7635 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2222 ns         3815 ns         4096
find avx     noe 06 64 kb        2236 ns         3815 ns         4096
find avx tbb     06 64 kb        2139 ns         3815 ns         4096
find avx tbb noe 06 64 kb        2136 ns         3815 ns         4096
find             06 64 kb       27718 ns        30518 ns         4096
find         noe 06 64 kb       27381 ns        26703 ns         4096
find     tbb     06 64 kb       10103 ns         3815 ns         4096
find     tbb noe 06 64 kb       10305 ns        11444 ns         4096
find avx         12 64 kb        2271 ns        0.000 ns         4096
find avx     noe 12 64 kb        2255 ns        0.000 ns         4096
find avx tbb     12 64 kb        2201 ns         3815 ns         4096
find avx tbb noe 12 64 kb        2155 ns        0.000 ns         4096
find             12 64 kb       14237 ns        11444 ns         4096
find         noe 12 64 kb       14906 ns        15259 ns         4096
find     tbb     12 64 kb        8709 ns        11444 ns         4096
find     tbb noe 12 64 kb        8644 ns        15259 ns         4096
find avx         24 64 kb        2423 ns         3815 ns         4096
find avx     noe 24 64 kb        2357 ns         3815 ns         4096
find avx tbb     24 64 kb        2351 ns         3815 ns         4096
find avx tbb noe 24 64 kb        2271 ns         3815 ns         4096
find             24 64 kb        7424 ns         7629 ns         4096
find         noe 24 64 kb        7978 ns        11444 ns         4096
find     tbb     24 64 kb        7957 ns        11444 ns         4096
find     tbb noe 24 64 kb        7844 ns         7629 ns         4096

scan avx         06 64 kb       53359 ns        53406 ns         4096
scan avx     noe 06 64 kb       50838 ns        53406 ns         4096
scan avx tbb     06 64 kb       50736 ns        49591 ns         4096
scan avx tbb noe 06 64 kb       50940 ns        45776 ns         4096
scan             06 64 kb       51254 ns        53406 ns         4096
scan         noe 06 64 kb       50994 ns        53406 ns         4096
scan     tbb     06 64 kb       13515 ns        11444 ns         4096
scan     tbb noe 06 64 kb       13739 ns        15259 ns         4096
scan avx         12 64 kb       51784 ns        53406 ns         4096
scan avx     noe 12 64 kb       51543 ns        45776 ns         4096
scan avx tbb     12 64 kb       51728 ns        53406 ns         4096
scan avx tbb noe 12 64 kb       51538 ns        53406 ns         4096
scan             12 64 kb       49920 ns        49591 ns         4096
scan         noe 12 64 kb       51547 ns        53406 ns         4096
scan     tbb     12 64 kb       13696 ns        19073 ns         4096
scan     tbb noe 12 64 kb       13735 ns        15259 ns         4096
scan avx         24 64 kb       53271 ns        45776 ns         4096
scan avx     noe 24 64 kb       51391 ns        53406 ns         4096
scan avx tbb     24 64 kb       51686 ns        53406 ns         4096
scan avx tbb noe 24 64 kb       51440 ns        53406 ns         4096
scan             24 64 kb       49712 ns        49591 ns         4096
scan         noe 24 64 kb       51857 ns        53406 ns         4096
scan     tbb     24 64 kb       13681 ns         7629 ns         4096
scan     tbb noe 24 64 kb       13862 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       7946 ns         7629 ns         2048
find avx     noe 06 256 kb       7697 ns        15259 ns         2048
find avx tbb     06 256 kb       7348 ns        0.000 ns         2048
find avx tbb noe 06 256 kb       7287 ns        0.000 ns         2048
find             06 256 kb     104295 ns        91553 ns         2048
find         noe 06 256 kb     105656 ns       114441 ns         2048
find     tbb     06 256 kb      20984 ns         7629 ns         2048
find     tbb noe 06 256 kb      21234 ns        22888 ns         2048
find avx         12 256 kb       7936 ns        15259 ns         2048
find avx     noe 12 256 kb       7613 ns         7629 ns         2048
find avx tbb     12 256 kb       7309 ns         7629 ns         2048
find avx tbb noe 12 256 kb       7333 ns        15259 ns         2048
find             12 256 kb      53216 ns        61035 ns         2048
find         noe 12 256 kb      54399 ns        38147 ns         2048
find     tbb     12 256 kb      15534 ns         7629 ns         2048
find     tbb noe 12 256 kb      15772 ns        22888 ns         2048
find avx         24 256 kb       8262 ns        0.000 ns         2048
find avx     noe 24 256 kb       8008 ns         7629 ns         2048
find avx tbb     24 256 kb       7630 ns         7629 ns         2048
find avx tbb noe 24 256 kb       7668 ns         7629 ns         2048
find             24 256 kb      27413 ns        15259 ns         2048
find         noe 24 256 kb      28055 ns        30518 ns         2048
find     tbb     24 256 kb      13076 ns         7629 ns         2048
find     tbb noe 24 256 kb      13112 ns        15259 ns         2048

scan avx         06 256 kb     201198 ns       198364 ns         2048
scan avx     noe 06 256 kb     199648 ns       213623 ns         2048
scan avx tbb     06 256 kb     194950 ns       198364 ns         2048
scan avx tbb noe 06 256 kb     195545 ns       205994 ns         2048
scan             06 256 kb     198149 ns       205994 ns         2048
scan         noe 06 256 kb     200186 ns       205994 ns         2048
scan     tbb     06 256 kb      39957 ns        45776 ns         2048
scan     tbb noe 06 256 kb      40167 ns        45776 ns         2048
scan avx         12 256 kb     200470 ns       190735 ns         2048
scan avx     noe 12 256 kb     202230 ns       205994 ns         2048
scan avx tbb     12 256 kb     195902 ns       183105 ns         2048
scan avx tbb noe 12 256 kb     195880 ns       198364 ns         2048
scan             12 256 kb     199146 ns       205994 ns         2048
scan         noe 12 256 kb     196448 ns       205994 ns         2048
scan     tbb     12 256 kb      39554 ns        45776 ns         2048
scan     tbb noe 12 256 kb      40572 ns        30518 ns         2048
scan avx         24 256 kb     199349 ns       198364 ns         2048
scan avx     noe 24 256 kb     199042 ns       205994 ns         2048
scan avx tbb     24 256 kb     196364 ns       190735 ns         2048
scan avx tbb noe 24 256 kb     198522 ns       198364 ns         2048
scan             24 256 kb     198755 ns       205994 ns         2048
scan         noe 24 256 kb     197486 ns       198364 ns         2048
scan     tbb     24 256 kb      39299 ns        45776 ns         2048
scan     tbb noe 24 256 kb      40007 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        27770 ns        0.000 ns         1024
find avx     noe 06 1 mb        25915 ns        30518 ns         1024
find avx tbb     06 1 mb        18556 ns        30518 ns         1024
find avx tbb noe 06 1 mb        17582 ns        15259 ns         1024
find             06 1 mb       426450 ns       442505 ns         1024
find         noe 06 1 mb       423482 ns       411987 ns         1024
find     tbb     06 1 mb        53955 ns        61035 ns         1024
find     tbb noe 06 1 mb        54561 ns        45776 ns         1024
find avx         12 1 mb        27739 ns        30518 ns         1024
find avx     noe 12 1 mb        25967 ns        45776 ns         1024
find avx tbb     12 1 mb        18906 ns        0.000 ns         1024
find avx tbb noe 12 1 mb        17070 ns        15259 ns         1024
find             12 1 mb       213584 ns       244141 ns         1024
find         noe 12 1 mb       219015 ns       213623 ns         1024
find     tbb     12 1 mb        33121 ns        76294 ns         1024
find     tbb noe 12 1 mb        32919 ns        30518 ns         1024
find avx         24 1 mb        29228 ns        30518 ns         1024
find avx     noe 24 1 mb        27310 ns        30518 ns         1024
find avx tbb     24 1 mb        18708 ns        45776 ns         1024
find avx tbb noe 24 1 mb        17950 ns        15259 ns         1024
find             24 1 mb       110311 ns        91553 ns         1024
find         noe 24 1 mb       108793 ns       106812 ns         1024
find     tbb     24 1 mb        22461 ns        15259 ns         1024
find     tbb noe 24 1 mb        22433 ns        15259 ns         1024

scan avx         06 1 mb       828560 ns       823975 ns         1024
scan avx     noe 06 1 mb       810608 ns       823975 ns         1024
scan avx tbb     06 1 mb       134944 ns       106812 ns         1024
scan avx tbb noe 06 1 mb       136719 ns       106812 ns         1024
scan             06 1 mb       846091 ns       885010 ns         1024
scan         noe 06 1 mb       824012 ns       854492 ns         1024
scan     tbb     06 1 mb       134632 ns       137329 ns         1024
scan     tbb noe 06 1 mb       137091 ns       122070 ns         1024
scan avx         12 1 mb       834791 ns       854492 ns         1024
scan avx     noe 12 1 mb       830604 ns       808716 ns         1024
scan avx tbb     12 1 mb       134641 ns        91553 ns         1024
scan avx tbb noe 12 1 mb       137918 ns       167847 ns         1024
scan             12 1 mb       809706 ns       823975 ns         1024
scan         noe 12 1 mb       818742 ns       854492 ns         1024
scan     tbb     12 1 mb       134413 ns        91553 ns         1024
scan     tbb noe 12 1 mb       137327 ns       137329 ns         1024
scan avx         24 1 mb       824349 ns       839233 ns         1024
scan avx     noe 24 1 mb       830205 ns       854492 ns         1024
scan avx tbb     24 1 mb       134194 ns        76294 ns         1024
scan avx tbb noe 24 1 mb       137678 ns       152588 ns         1024
scan             24 1 mb       822627 ns       854492 ns         1024
scan         noe 24 1 mb       817731 ns       823975 ns         1024
scan     tbb     24 1 mb       134399 ns       106812 ns         1024
scan     tbb noe 24 1 mb       138258 ns       137329 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       191374 ns       213623 ns          512
find avx     noe 06 4 mb       215737 ns       274658 ns          512
find avx tbb     06 4 mb       177542 ns       152588 ns          512
find avx tbb noe 06 4 mb       157750 ns        30518 ns          512
find             06 4 mb      1674012 ns      1708984 ns          512
find         noe 06 4 mb      1692847 ns      1678467 ns          512
find     tbb     06 4 mb       248826 ns       305176 ns          512
find     tbb noe 06 4 mb       219380 ns        91553 ns          512
find avx         12 4 mb       189563 ns       183105 ns          512
find avx     noe 12 4 mb       186580 ns       183105 ns          512
find avx tbb     12 4 mb       177301 ns       274658 ns          512
find avx tbb noe 12 4 mb       157684 ns       152588 ns          512
find             12 4 mb       857397 ns       885010 ns          512
find         noe 12 4 mb       863011 ns       610352 ns          512
find     tbb     12 4 mb       203609 ns       183105 ns          512
find     tbb noe 12 4 mb       177077 ns        61035 ns          512
find avx         24 4 mb       195663 ns       213623 ns          512
find avx     noe 24 4 mb       192962 ns       213623 ns          512
find avx tbb     24 4 mb       176139 ns       183105 ns          512
find avx tbb noe 24 4 mb       160116 ns       122070 ns          512
find             24 4 mb       452316 ns       457764 ns          512
find         noe 24 4 mb       497747 ns       518799 ns          512
find     tbb     24 4 mb       193385 ns       183105 ns          512
find     tbb noe 24 4 mb       168429 ns       122070 ns          512

scan avx         06 4 mb      3206400 ns      3204346 ns          512
scan avx     noe 06 4 mb      3184270 ns      3143311 ns          512
scan avx tbb     06 4 mb       553279 ns       518799 ns          512
scan avx tbb noe 06 4 mb       533163 ns       579834 ns          512
scan             06 4 mb      3208317 ns      3265381 ns          512
scan         noe 06 4 mb      3219251 ns      3326416 ns          512
scan     tbb     06 4 mb       553373 ns       457764 ns          512
scan     tbb noe 06 4 mb       532460 ns       396729 ns          512
scan avx         12 4 mb      3079554 ns      3143311 ns          512
scan avx     noe 12 4 mb      3195347 ns      3143311 ns          512
scan avx tbb     12 4 mb       551270 ns       579834 ns          512
scan avx tbb noe 12 4 mb       532601 ns       488281 ns          512
scan             12 4 mb      3223725 ns      3295898 ns          512
scan         noe 12 4 mb      3011499 ns      3051758 ns          512
scan     tbb     12 4 mb       550195 ns       549316 ns          512
scan     tbb noe 12 4 mb       532747 ns       488281 ns          512
scan avx         24 4 mb      3201302 ns      3173828 ns          512
scan avx     noe 24 4 mb      3206747 ns      3204346 ns          512
scan avx tbb     24 4 mb       551140 ns       549316 ns          512
scan avx tbb noe 24 4 mb       532963 ns       579834 ns          512
scan             24 4 mb      3229582 ns      3265381 ns          512
scan         noe 24 4 mb      3222143 ns      3295898 ns          512
scan     tbb     24 4 mb       551036 ns       671387 ns          512
scan     tbb noe 24 4 mb       533265 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      782277 ns       244141 ns           64
find avx     noe 06 16 mb      761416 ns       488281 ns           64
find avx tbb     06 16 mb      646934 ns       244141 ns           64
find avx tbb noe 06 16 mb      630461 ns       244141 ns           64
find             06 16 mb     6798417 ns      6835938 ns           64
find         noe 06 16 mb     6760384 ns      7812500 ns           64
find     tbb     06 16 mb      847014 ns      1220703 ns           64
find     tbb noe 06 16 mb      868150 ns       732422 ns           64
find avx         12 16 mb      790058 ns       488281 ns           64
find avx     noe 12 16 mb      762952 ns       732422 ns           64
find avx tbb     12 16 mb      641353 ns       244141 ns           64
find avx tbb noe 12 16 mb      630991 ns       244141 ns           64
find             12 16 mb     3460487 ns      3173828 ns           64
find         noe 12 16 mb     3445944 ns      3662109 ns           64
find     tbb     12 16 mb      717469 ns       732422 ns           64
find     tbb noe 12 16 mb      717264 ns      1220703 ns           64
find avx         24 16 mb      795141 ns      1220703 ns           64
find avx     noe 24 16 mb      792497 ns       488281 ns           64
find avx tbb     24 16 mb      634588 ns      1220703 ns           64
find avx tbb noe 24 16 mb      634430 ns       732422 ns           64
find             24 16 mb     1836880 ns      2441406 ns           64
find         noe 24 16 mb     1794930 ns      1220703 ns           64
find     tbb     24 16 mb      681811 ns       732422 ns           64
find     tbb noe 24 16 mb      683083 ns       488281 ns           64

scan avx         06 16 mb    12923366 ns     12451172 ns           64
scan avx     noe 06 16 mb    12821783 ns     12695312 ns           64
scan avx tbb     06 16 mb     2085694 ns      1953125 ns           64
scan avx tbb noe 06 16 mb     2056647 ns      1708984 ns           64
scan             06 16 mb    12935659 ns     13183594 ns           64
scan         noe 06 16 mb    12842994 ns     12695312 ns           64
scan     tbb     06 16 mb     2093377 ns      2441406 ns           64
scan     tbb noe 06 16 mb     2017994 ns      1220703 ns           64
scan avx         12 16 mb    13002258 ns     12695312 ns           64
scan avx     noe 12 16 mb    12998022 ns     12207031 ns           64
scan avx tbb     12 16 mb     2087809 ns      1220703 ns           64
scan avx tbb noe 12 16 mb     2022531 ns      1708984 ns           64
scan             12 16 mb    12992045 ns     13427734 ns           64
scan         noe 12 16 mb    12943669 ns     12451172 ns           64
scan     tbb     12 16 mb     2094892 ns      1464844 ns           64
scan     tbb noe 12 16 mb     2058459 ns      1708984 ns           64
scan avx         24 16 mb    13025887 ns     12695312 ns           64
scan avx     noe 24 16 mb    12859711 ns     12451172 ns           64
scan avx tbb     24 16 mb     2070180 ns       976562 ns           64
scan avx tbb noe 24 16 mb     2057791 ns      1708984 ns           64
scan             24 16 mb    12891681 ns     13183594 ns           64
scan         noe 24 16 mb    12875333 ns     12695312 ns           64
scan     tbb     24 16 mb     2079398 ns      1464844 ns           64
scan     tbb noe 24 16 mb     2008406 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3040431 ns        0.000 ns           32
find avx     noe 06 64 mb     3037838 ns      1464844 ns           32
find avx tbb     06 64 mb     2374919 ns      1953125 ns           32
find avx tbb noe 06 64 mb     2374512 ns      2929688 ns           32
find             06 64 mb    26658166 ns     23437500 ns           32
find         noe 06 64 mb    27100287 ns     27832031 ns           32
find     tbb     06 64 mb     2989350 ns      2929688 ns           32
find     tbb noe 06 64 mb     3059216 ns       976562 ns           32
find avx         12 64 mb     3035009 ns        0.000 ns           32
find avx     noe 12 64 mb     3040700 ns      6347656 ns           32
find avx tbb     12 64 mb     2382244 ns      2441406 ns           32
find avx tbb noe 12 64 mb     2371053 ns      1953125 ns           32
find             12 64 mb    13621163 ns     13671875 ns           32
find         noe 12 64 mb    13645859 ns     13671875 ns           32
find     tbb     12 64 mb     2548862 ns      2441406 ns           32
find     tbb noe 12 64 mb     2550153 ns      2929688 ns           32
find avx         24 64 mb     3151737 ns      1464844 ns           32
find avx     noe 24 64 mb     3095859 ns      1953125 ns           32
find avx tbb     24 64 mb     2398722 ns      1953125 ns           32
find avx tbb noe 24 64 mb     2395237 ns      2441406 ns           32
find             24 64 mb     7081341 ns      7324219 ns           32
find         noe 24 64 mb     7162156 ns      7324219 ns           32
find     tbb     24 64 mb     2475278 ns       976562 ns           32
find     tbb noe 24 64 mb     2478569 ns      1464844 ns           32

scan avx         06 64 mb    51162125 ns     51757812 ns           32
scan avx     noe 06 64 mb    51313244 ns     51269531 ns           32
scan avx tbb     06 64 mb     7915916 ns      9765625 ns           32
scan avx tbb noe 06 64 mb     7914812 ns      8300781 ns           32
scan             06 64 mb    51841159 ns     51757812 ns           32
scan         noe 06 64 mb    51699181 ns     50781250 ns           32
scan     tbb     06 64 mb     7943963 ns      7324219 ns           32
scan     tbb noe 06 64 mb     8015231 ns      7812500 ns           32
scan avx         12 64 mb    51476738 ns     51757812 ns           32
scan avx     noe 12 64 mb    51453753 ns     50292969 ns           32
scan avx tbb     12 64 mb     7991003 ns      8789062 ns           32
scan avx tbb noe 12 64 mb     8005478 ns      7812500 ns           32
scan             12 64 mb    51557619 ns     52246094 ns           32
scan         noe 12 64 mb    51371747 ns     51269531 ns           32
scan     tbb     12 64 mb     7954819 ns      8300781 ns           32
scan     tbb noe 12 64 mb     7970162 ns      8300781 ns           32
scan avx         24 64 mb    51459056 ns     51757812 ns           32
scan avx     noe 24 64 mb    51604831 ns     51269531 ns           32
scan avx tbb     24 64 mb     8003519 ns      7324219 ns           32
scan avx tbb noe 24 64 mb     7916700 ns      7324219 ns           32
scan             24 64 mb    51964800 ns     51757812 ns           32
scan         noe 24 64 mb    51766391 ns     51269531 ns           32
scan     tbb     24 64 mb     7988809 ns      7812500 ns           32
scan     tbb noe 24 64 mb     7952084 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13229694 ns     13671875 ns           16
find avx     noe 06 256 mb   12919325 ns     13671875 ns           16
find avx tbb     06 256 mb    9285300 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9265362 ns      9765625 ns           16
find             06 256 mb  106705756 ns    107421875 ns           16
find         noe 06 256 mb  107936256 ns    107421875 ns           16
find     tbb     06 256 mb   11437088 ns     15625000 ns           16
find     tbb noe 06 256 mb   11861594 ns      9765625 ns           16
find avx         12 256 mb   12815656 ns     13671875 ns           16
find avx     noe 12 256 mb   12874506 ns     11718750 ns           16
find avx tbb     12 256 mb    9470831 ns      4882812 ns           16
find avx tbb noe 12 256 mb    9294919 ns      9765625 ns           16
find             12 256 mb   54125863 ns     54687500 ns           16
find         noe 12 256 mb   54874375 ns     53710938 ns           16
find     tbb     12 256 mb    9742588 ns     11718750 ns           16
find     tbb noe 12 256 mb    9762669 ns      6835938 ns           16
find avx         24 256 mb   13335787 ns     13671875 ns           16
find avx     noe 24 256 mb   13345900 ns     11718750 ns           16
find avx tbb     24 256 mb    9325425 ns      9765625 ns           16
find avx tbb noe 24 256 mb    9324819 ns      8789062 ns           16
find             24 256 mb   28502856 ns     29296875 ns           16
find         noe 24 256 mb   28615113 ns     30273438 ns           16
find     tbb     24 256 mb    9492356 ns     11718750 ns           16
find     tbb noe 24 256 mb    9504087 ns      7812500 ns           16

scan avx         06 256 mb  206656962 ns    204101562 ns           16
scan avx     noe 06 256 mb  206654094 ns    203125000 ns           16
scan avx tbb     06 256 mb   31278888 ns     28320312 ns           16
scan avx tbb noe 06 256 mb   30967144 ns     28320312 ns           16
scan             06 256 mb  209803512 ns    208984375 ns           16
scan         noe 06 256 mb  207176694 ns    206054688 ns           16
scan     tbb     06 256 mb   31297956 ns     28320312 ns           16
scan     tbb noe 06 256 mb   31394175 ns     28320312 ns           16
scan avx         12 256 mb  205806394 ns    206054688 ns           16
scan avx     noe 12 256 mb  206164719 ns    206054688 ns           16
scan avx tbb     12 256 mb   31432056 ns     29296875 ns           16
scan avx tbb noe 12 256 mb   31234356 ns     27343750 ns           16
scan             12 256 mb  205883275 ns    205078125 ns           16
scan         noe 12 256 mb  205386381 ns    204101562 ns           16
scan     tbb     12 256 mb   31212369 ns     28320312 ns           16
scan     tbb noe 12 256 mb   31587456 ns     29296875 ns           16
scan avx         24 256 mb  201468469 ns    202148438 ns           16
scan avx     noe 24 256 mb  201450837 ns    202148438 ns           16
scan avx tbb     24 256 mb   31422531 ns     30273438 ns           16
scan avx tbb noe 24 256 mb   31130181 ns     27343750 ns           16
scan             24 256 mb  206982587 ns    208984375 ns           16
scan         noe 24 256 mb  201320313 ns    201171875 ns           16
scan     tbb     24 256 mb   31708900 ns     27343750 ns           16
scan     tbb noe 24 256 mb   31423031 ns     28320312 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26474688 ns     27343750 ns            8
find avx     noe 06 512 mb   26544100 ns     27343750 ns            8
find avx tbb     06 512 mb   18499063 ns     15625000 ns            8
find avx tbb noe 06 512 mb   18476525 ns     15625000 ns            8
find             06 512 mb  213319162 ns    212890625 ns            8
find         noe 06 512 mb  217005050 ns    216796875 ns            8
find     tbb     06 512 mb   22675287 ns     27343750 ns            8
find     tbb noe 06 512 mb   23241825 ns     19531250 ns            8
find avx         12 512 mb   26437638 ns     25390625 ns            8
find avx     noe 12 512 mb   26476250 ns     25390625 ns            8
find avx tbb     12 512 mb   18489800 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18493287 ns     17578125 ns            8
find             12 512 mb  108307662 ns    109375000 ns            8
find         noe 12 512 mb  109625138 ns    109375000 ns            8
find     tbb     12 512 mb   19311938 ns     19531250 ns            8
find     tbb noe 12 512 mb   19375500 ns     17578125 ns            8
find avx         24 512 mb   27054475 ns     27343750 ns            8
find avx     noe 24 512 mb   27244512 ns     27343750 ns            8
find avx tbb     24 512 mb   18541512 ns     19531250 ns            8
find avx tbb noe 24 512 mb   18512600 ns     19531250 ns            8
find             24 512 mb   57237463 ns     56640625 ns            8
find         noe 24 512 mb   57182925 ns     56640625 ns            8
find     tbb     24 512 mb   18841212 ns     19531250 ns            8
find     tbb noe 24 512 mb   18828112 ns     17578125 ns            8

scan avx         06 512 mb  396564050 ns    394531250 ns            8
scan avx     noe 06 512 mb  413752712 ns    408203125 ns            8
scan avx tbb     06 512 mb   62981800 ns     56640625 ns            8
scan avx tbb noe 06 512 mb   63680750 ns     54687500 ns            8
scan             06 512 mb  411978362 ns    406250000 ns            8
scan         noe 06 512 mb  411437162 ns    410156250 ns            8
scan     tbb     06 512 mb   63877625 ns     58593750 ns            8
scan     tbb noe 06 512 mb   62599212 ns     54687500 ns            8
scan avx         12 512 mb  410099062 ns    410156250 ns            8
scan avx     noe 12 512 mb  410879075 ns    410156250 ns            8
scan avx tbb     12 512 mb   62742150 ns     58593750 ns            8
scan avx tbb noe 12 512 mb   64141638 ns     54687500 ns            8
scan             12 512 mb  411108125 ns    412109375 ns            8
scan         noe 12 512 mb  411154213 ns    412109375 ns            8
scan     tbb     12 512 mb   62144937 ns     56640625 ns            8
scan     tbb noe 12 512 mb   63783625 ns     54687500 ns            8
scan avx         24 512 mb  411726912 ns    412109375 ns            8
scan avx     noe 24 512 mb  400028638 ns    400390625 ns            8
scan avx tbb     24 512 mb   62621300 ns     54687500 ns            8
scan avx tbb noe 24 512 mb   62063150 ns     56640625 ns            8
scan             24 512 mb  412910762 ns    410156250 ns            8
scan         noe 24 512 mb  402569200 ns    404296875 ns            8
scan     tbb     24 512 mb   63228813 ns     52734375 ns            8
scan     tbb noe 24 512 mb   63686600 ns     54687500 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     54027850 ns     52734375 ns            8
find avx     noe 06 1 gb     54019763 ns     54687500 ns            8
find avx tbb     06 1 gb     36892950 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36931313 ns     35156250 ns            8
find             06 1 gb    425243862 ns    425781250 ns            8
find         noe 06 1 gb    432840437 ns    431640625 ns            8
find     tbb     06 1 gb     45362438 ns     42968750 ns            8
find     tbb noe 06 1 gb     46825138 ns     41015625 ns            8
find avx         12 1 gb     54046725 ns     54687500 ns            8
find avx     noe 12 1 gb     54236475 ns     54687500 ns            8
find avx tbb     12 1 gb     36853675 ns     35156250 ns            8
find avx tbb noe 12 1 gb     36894050 ns     33203125 ns            8
find             12 1 gb    216680375 ns    218750000 ns            8
find         noe 12 1 gb    218628287 ns    218750000 ns            8
find     tbb     12 1 gb     38573612 ns     35156250 ns            8
find     tbb noe 12 1 gb     38538963 ns     35156250 ns            8
find avx         24 1 gb     55082075 ns     54687500 ns            8
find avx     noe 24 1 gb     54822725 ns     54687500 ns            8
find avx tbb     24 1 gb     36972075 ns     37109375 ns            8
find avx tbb noe 24 1 gb     37026012 ns     37109375 ns            8
find             24 1 gb    113672687 ns    115234375 ns            8
find         noe 24 1 gb    114998250 ns    117187500 ns            8
find     tbb     24 1 gb     37594338 ns     37109375 ns            8
find     tbb noe 24 1 gb     37610463 ns     37109375 ns            8

scan avx         06 1 gb    827933975 ns    828125000 ns            8
scan avx     noe 06 1 gb    828270050 ns    830078125 ns            8
scan avx tbb     06 1 gb    126452225 ns    107421875 ns            8
scan avx tbb noe 06 1 gb    126567900 ns    111328125 ns            8
scan             06 1 gb    828526550 ns    828125000 ns            8
scan         noe 06 1 gb    827740900 ns    826171875 ns            8
scan     tbb     06 1 gb    128707625 ns    109375000 ns            8
scan     tbb noe 06 1 gb    126534587 ns    113281250 ns            8
scan avx         12 1 gb    798927563 ns    798828125 ns            8
scan avx     noe 12 1 gb    822982938 ns    822265625 ns            8
scan avx tbb     12 1 gb    126416962 ns    111328125 ns            8
scan avx tbb noe 12 1 gb    124213562 ns    107421875 ns            8
scan             12 1 gb    823742662 ns    826171875 ns            8
scan         noe 12 1 gb    827505988 ns    828125000 ns            8
scan     tbb     12 1 gb    127464238 ns    111328125 ns            8
scan     tbb noe 12 1 gb    127350763 ns    111328125 ns            8
scan avx         24 1 gb    823430638 ns    822265625 ns            8
scan avx     noe 24 1 gb    804483625 ns    802734375 ns            8
scan avx tbb     24 1 gb    128763850 ns    109375000 ns            8
scan avx tbb noe 24 1 gb    127136250 ns    111328125 ns            8
scan             24 1 gb    804458713 ns    802734375 ns            8
scan         noe 24 1 gb    829617125 ns    828125000 ns            8
scan     tbb     24 1 gb    128833650 ns    113281250 ns            8
scan     tbb noe 24 1 gb    125607875 ns    113281250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    108521662 ns    109375000 ns            8
find avx     noe 06 2 gb    109626287 ns    111328125 ns            8
find avx tbb     06 2 gb     73845450 ns     64453125 ns            8
find avx tbb noe 06 2 gb     73767100 ns     72265625 ns            8
find             06 2 gb    850714850 ns    851562500 ns            8
find         noe 06 2 gb    861520538 ns    863281250 ns            8
find     tbb     06 2 gb     90418900 ns     80078125 ns            8
find     tbb noe 06 2 gb     92623500 ns     80078125 ns            8
find avx         12 2 gb    108397038 ns    109375000 ns            8
find avx     noe 12 2 gb    108440688 ns    107421875 ns            8
find avx tbb     12 2 gb     73773587 ns     74218750 ns            8
find avx tbb noe 12 2 gb     73745913 ns     62500000 ns            8
find             12 2 gb    433422212 ns    437500000 ns            8
find         noe 12 2 gb    439596925 ns    443359375 ns            8
find     tbb     12 2 gb     76949287 ns     74218750 ns            8
find     tbb noe 12 2 gb     76942187 ns     74218750 ns            8
find avx         24 2 gb    110912362 ns    109375000 ns            8
find avx     noe 24 2 gb    110466750 ns    109375000 ns            8
find avx tbb     24 2 gb     73926637 ns     70312500 ns            8
find avx tbb noe 24 2 gb     73936300 ns     70312500 ns            8
find             24 2 gb    225953738 ns    228515625 ns            8
find         noe 24 2 gb    227666025 ns    226562500 ns            8
find     tbb     24 2 gb     75178250 ns     74218750 ns            8
find     tbb noe 24 2 gb     75086913 ns     78125000 ns            8

scan avx         06 2 gb   1644172975 ns   1646484375 ns            8
scan avx     noe 06 2 gb   1657219975 ns   1656250000 ns            8
scan avx tbb     06 2 gb    246776138 ns    222656250 ns            8
scan avx tbb noe 06 2 gb    247020237 ns    222656250 ns            8
scan             06 2 gb   1655441437 ns   1656250000 ns            8
scan         noe 06 2 gb   1652941988 ns   1654296875 ns            8
scan     tbb     06 2 gb    247305088 ns    222656250 ns            8
scan     tbb noe 06 2 gb    252994100 ns    222656250 ns            8
scan avx         12 2 gb   1602103487 ns   1601562500 ns            8
scan avx     noe 12 2 gb   1653873325 ns   1652343750 ns            8
scan avx tbb     12 2 gb    250865475 ns    222656250 ns            8
scan avx tbb noe 12 2 gb    251086262 ns    222656250 ns            8
scan             12 2 gb   1651303675 ns   1650390625 ns            8
scan         noe 12 2 gb   1596843163 ns   1597656250 ns            8
scan     tbb     12 2 gb    249239513 ns    214843750 ns            8
scan     tbb noe 12 2 gb    249742612 ns    216796875 ns            8
scan avx         24 2 gb   1656659063 ns   1658203125 ns            8
scan avx     noe 24 2 gb   1646329237 ns   1646484375 ns            8
scan avx tbb     24 2 gb    244813575 ns    222656250 ns            8
scan avx tbb noe 24 2 gb    245477000 ns    222656250 ns            8
scan             24 2 gb   1655345850 ns   1656250000 ns            8
scan         noe 24 2 gb   1655450763 ns   1650390625 ns            8
scan     tbb     24 2 gb    249563650 ns    222656250 ns            8
scan     tbb noe 24 2 gb    250580100 ns    216796875 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1655 ns         3815 ns         4096
find avx     noe 06 16 kb        1010 ns        0.000 ns         4096
find avx tbb     06 16 kb        1030 ns        0.000 ns         4096
find avx tbb noe 06 16 kb        1013 ns         3815 ns         4096
find             06 16 kb        6616 ns         3815 ns         4096
find         noe 06 16 kb        6620 ns         7629 ns         4096
find     tbb     06 16 kb        7491 ns        11444 ns         4096
find     tbb noe 06 16 kb        7304 ns         7629 ns         4096
find avx         12 16 kb        1067 ns        0.000 ns         4096
find avx     noe 12 16 kb        1065 ns        0.000 ns         4096
find avx tbb     12 16 kb        1091 ns        0.000 ns         4096
find avx tbb noe 12 16 kb        1077 ns        0.000 ns         4096
find             12 16 kb        3900 ns         3815 ns         4096
find         noe 12 16 kb        3730 ns         7629 ns         4096
find     tbb     12 16 kb        7042 ns         7629 ns         4096
find     tbb noe 12 16 kb        7050 ns         7629 ns         4096
find avx         24 16 kb        1255 ns         3815 ns         4096
find avx     noe 24 16 kb        1252 ns        0.000 ns         4096
find avx tbb     24 16 kb        1254 ns         3815 ns         4096
find avx tbb noe 24 16 kb        1264 ns        0.000 ns         4096
find             24 16 kb        2409 ns        0.000 ns         4096
find         noe 24 16 kb        2342 ns         3815 ns         4096
find     tbb     24 16 kb        6793 ns         7629 ns         4096
find     tbb noe 24 16 kb        6771 ns         3815 ns         4096

scan avx         06 16 kb       12053 ns        15259 ns         4096
scan avx     noe 06 16 kb       11133 ns        11444 ns         4096
scan avx tbb     06 16 kb       11080 ns        11444 ns         4096
scan avx tbb noe 06 16 kb       11087 ns        11444 ns         4096
scan             06 16 kb       11097 ns        11444 ns         4096
scan         noe 06 16 kb       11113 ns         7629 ns         4096
scan     tbb     06 16 kb        7254 ns         7629 ns         4096
scan     tbb noe 06 16 kb        7462 ns         7629 ns         4096
scan avx         12 16 kb       11386 ns        11444 ns         4096
scan avx     noe 12 16 kb       11027 ns        11444 ns         4096
scan avx tbb     12 16 kb       11041 ns         7629 ns         4096
scan avx tbb noe 12 16 kb       11122 ns        11444 ns         4096
scan             12 16 kb       11083 ns        11444 ns         4096
scan         noe 12 16 kb       11021 ns        15259 ns         4096
scan     tbb     12 16 kb        7084 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7350 ns         3815 ns         4096
scan avx         24 16 kb       11650 ns        11444 ns         4096
scan avx     noe 24 16 kb       11381 ns        15259 ns         4096
scan avx tbb     24 16 kb       11813 ns        11444 ns         4096
scan avx tbb noe 24 16 kb       11515 ns        11444 ns         4096
scan             24 16 kb       11087 ns        11444 ns         4096
scan         noe 24 16 kb       11064 ns        11444 ns         4096
scan     tbb     24 16 kb        7121 ns         7629 ns         4096
scan     tbb noe 24 16 kb        7388 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2352 ns         3815 ns         4096
find avx     noe 06 64 kb        2320 ns         3815 ns         4096
find avx tbb     06 64 kb        2320 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2213 ns         3815 ns         4096
find             06 64 kb       25079 ns        26703 ns         4096
find         noe 06 64 kb       24684 ns        22888 ns         4096
find     tbb     06 64 kb       10092 ns         7629 ns         4096
find     tbb noe 06 64 kb        9902 ns         7629 ns         4096
find avx         12 64 kb        2454 ns         3815 ns         4096
find avx     noe 12 64 kb        2448 ns         3815 ns         4096
find avx tbb     12 64 kb        2426 ns        0.000 ns         4096
find avx tbb noe 12 64 kb        2234 ns         3815 ns         4096
find             12 64 kb       12526 ns        15259 ns         4096
find         noe 12 64 kb       12518 ns        15259 ns         4096
find     tbb     12 64 kb        8219 ns         3815 ns         4096
find     tbb noe 12 64 kb        8257 ns         7629 ns         4096
find avx         24 64 kb        2826 ns         3815 ns         4096
find avx     noe 24 64 kb        2807 ns        0.000 ns         4096
find avx tbb     24 64 kb        2883 ns         3815 ns         4096
find avx tbb noe 24 64 kb        2853 ns        0.000 ns         4096
find             24 64 kb        7109 ns        11444 ns         4096
find         noe 24 64 kb        7081 ns         3815 ns         4096
find     tbb     24 64 kb        7874 ns        11444 ns         4096
find     tbb noe 24 64 kb        7538 ns        11444 ns         4096

scan avx         06 64 kb       44376 ns        45776 ns         4096
scan avx     noe 06 64 kb       42846 ns        38147 ns         4096
scan avx tbb     06 64 kb       42623 ns        45776 ns         4096
scan avx tbb noe 06 64 kb       42581 ns        45776 ns         4096
scan             06 64 kb       42572 ns        41962 ns         4096
scan         noe 06 64 kb       42680 ns        41962 ns         4096
scan     tbb     06 64 kb       13491 ns        15259 ns         4096
scan     tbb noe 06 64 kb       14019 ns        15259 ns         4096
scan avx         12 64 kb       44561 ns        45776 ns         4096
scan avx     noe 12 64 kb       42634 ns        41962 ns         4096
scan avx tbb     12 64 kb       42533 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       42525 ns        45776 ns         4096
scan             12 64 kb       42700 ns        38147 ns         4096
scan         noe 12 64 kb       42511 ns        41962 ns         4096
scan     tbb     12 64 kb       13467 ns         7629 ns         4096
scan     tbb noe 12 64 kb       14043 ns        15259 ns         4096
scan avx         24 64 kb       44657 ns        45776 ns         4096
scan avx     noe 24 64 kb       42563 ns        41962 ns         4096
scan avx tbb     24 64 kb       42517 ns        41962 ns         4096
scan avx tbb noe 24 64 kb       42586 ns        45776 ns         4096
scan             24 64 kb       42628 ns        41962 ns         4096
scan         noe 24 64 kb       42523 ns        38147 ns         4096
scan     tbb     24 64 kb       13776 ns        11444 ns         4096
scan     tbb noe 24 64 kb       14191 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8166 ns         7629 ns         2048
find avx     noe 06 256 kb       8034 ns         7629 ns         2048
find avx tbb     06 256 kb       7752 ns        0.000 ns         2048
find avx tbb noe 06 256 kb       7911 ns        15259 ns         2048
find             06 256 kb      96638 ns        91553 ns         2048
find         noe 06 256 kb      94581 ns        91553 ns         2048
find     tbb     06 256 kb      20084 ns        15259 ns         2048
find     tbb noe 06 256 kb      20124 ns        30518 ns         2048
find avx         12 256 kb       8341 ns        0.000 ns         2048
find avx     noe 12 256 kb       7984 ns        15259 ns         2048
find avx tbb     12 256 kb       7582 ns         7629 ns         2048
find avx tbb noe 12 256 kb       7849 ns         7629 ns         2048
find             12 256 kb      50205 ns        53406 ns         2048
find         noe 12 256 kb      48016 ns        45776 ns         2048
find     tbb     12 256 kb      15166 ns        22888 ns         2048
find     tbb noe 12 256 kb      15054 ns        15259 ns         2048
find avx         24 256 kb      10317 ns         7629 ns         2048
find avx     noe 24 256 kb       9350 ns         7629 ns         2048
find avx tbb     24 256 kb       9384 ns        15259 ns         2048
find avx tbb noe 24 256 kb       9377 ns        0.000 ns         2048
find             24 256 kb      24711 ns        30518 ns         2048
find         noe 24 256 kb      24684 ns        15259 ns         2048
find     tbb     24 256 kb      12831 ns        15259 ns         2048
find     tbb noe 24 256 kb      12721 ns         7629 ns         2048

scan avx         06 256 kb     170961 ns       175476 ns         2048
scan avx     noe 06 256 kb     168989 ns       167847 ns         2048
scan avx tbb     06 256 kb     168848 ns       175476 ns         2048
scan avx tbb noe 06 256 kb     168761 ns       160217 ns         2048
scan             06 256 kb     169216 ns       160217 ns         2048
scan         noe 06 256 kb     168897 ns       167847 ns         2048
scan     tbb     06 256 kb      40808 ns        38147 ns         2048
scan     tbb noe 06 256 kb      41828 ns        53406 ns         2048
scan avx         12 256 kb     171343 ns       175476 ns         2048
scan avx     noe 12 256 kb     169302 ns       160217 ns         2048
scan avx tbb     12 256 kb     168835 ns       160217 ns         2048
scan avx tbb noe 12 256 kb     168813 ns       152588 ns         2048
scan             12 256 kb     169152 ns       175476 ns         2048
scan         noe 12 256 kb     169058 ns       160217 ns         2048
scan     tbb     12 256 kb      40743 ns        53406 ns         2048
scan     tbb noe 12 256 kb      42190 ns        45776 ns         2048
scan avx         24 256 kb     170963 ns       175476 ns         2048
scan avx     noe 24 256 kb     170762 ns       175476 ns         2048
scan avx tbb     24 256 kb     168991 ns       167847 ns         2048
scan avx tbb noe 24 256 kb     168889 ns       167847 ns         2048
scan             24 256 kb     169065 ns       175476 ns         2048
scan         noe 24 256 kb     169293 ns       167847 ns         2048
scan     tbb     24 256 kb      40646 ns        45776 ns         2048
scan     tbb noe 24 256 kb      41812 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        29120 ns        61035 ns         1024
find avx     noe 06 1 mb        26871 ns        0.000 ns         1024
find avx tbb     06 1 mb        19189 ns        15259 ns         1024
find avx tbb noe 06 1 mb        17560 ns        15259 ns         1024
find             06 1 mb       380182 ns       411987 ns         1024
find         noe 06 1 mb       375255 ns       396729 ns         1024
find     tbb     06 1 mb        49571 ns        61035 ns         1024
find     tbb noe 06 1 mb        49861 ns        45776 ns         1024
find avx         12 1 mb        29361 ns        45776 ns         1024
find avx     noe 12 1 mb        27310 ns        45776 ns         1024
find avx tbb     12 1 mb        17946 ns        61035 ns         1024
find avx tbb noe 12 1 mb        17353 ns        15259 ns         1024
find             12 1 mb       194103 ns       228882 ns         1024
find         noe 12 1 mb       188117 ns       183105 ns         1024
find     tbb     12 1 mb        30625 ns        15259 ns         1024
find     tbb noe 12 1 mb        30788 ns        45776 ns         1024
find avx         24 1 mb        37247 ns        45776 ns         1024
find avx     noe 24 1 mb        33025 ns        15259 ns         1024
find avx tbb     24 1 mb        19021 ns        45776 ns         1024
find avx tbb noe 24 1 mb        17821 ns        0.000 ns         1024
find             24 1 mb        99822 ns        76294 ns         1024
find         noe 24 1 mb        95219 ns       106812 ns         1024
find     tbb     24 1 mb        22307 ns        0.000 ns         1024
find     tbb noe 24 1 mb        21531 ns        0.000 ns         1024

scan avx         06 1 mb       678453 ns       686646 ns         1024
scan avx     noe 06 1 mb       673748 ns       686646 ns         1024
scan avx tbb     06 1 mb       142111 ns       152588 ns         1024
scan avx tbb noe 06 1 mb       145235 ns       167847 ns         1024
scan             06 1 mb       677430 ns       701904 ns         1024
scan         noe 06 1 mb       673282 ns       656128 ns         1024
scan     tbb     06 1 mb       142393 ns       167847 ns         1024
scan     tbb noe 06 1 mb       145259 ns        76294 ns         1024
scan avx         12 1 mb       677039 ns       686646 ns         1024
scan avx     noe 12 1 mb       674147 ns       701904 ns         1024
scan avx tbb     12 1 mb       141334 ns       167847 ns         1024
scan avx tbb noe 12 1 mb       145569 ns       152588 ns         1024
scan             12 1 mb       678669 ns       671387 ns         1024
scan         noe 12 1 mb       674818 ns       686646 ns         1024
scan     tbb     12 1 mb       142912 ns       152588 ns         1024
scan     tbb noe 12 1 mb       144965 ns       167847 ns         1024
scan avx         24 1 mb       680169 ns       686646 ns         1024
scan avx     noe 24 1 mb       675972 ns       640869 ns         1024
scan avx tbb     24 1 mb       142073 ns       122070 ns         1024
scan avx tbb noe 24 1 mb       146518 ns       122070 ns         1024
scan             24 1 mb       678944 ns       671387 ns         1024
scan         noe 24 1 mb       674477 ns       656128 ns         1024
scan     tbb     24 1 mb       143058 ns       152588 ns         1024
scan     tbb noe 24 1 mb       144912 ns       106812 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       192482 ns       213623 ns          512
find avx     noe 06 4 mb       188646 ns       183105 ns          512
find avx tbb     06 4 mb       171696 ns       152588 ns          512
find avx tbb noe 06 4 mb       158539 ns       213623 ns          512
find             06 4 mb      1518768 ns      1434326 ns          512
find         noe 06 4 mb      1515145 ns      1525879 ns          512
find     tbb     06 4 mb       230327 ns       213623 ns          512
find     tbb noe 06 4 mb       201380 ns       122070 ns          512
find avx         12 4 mb       196455 ns       244141 ns          512
find avx     noe 12 4 mb       192104 ns       244141 ns          512
find avx tbb     12 4 mb       173149 ns       183105 ns          512
find avx tbb noe 12 4 mb       158384 ns       152588 ns          512
find             12 4 mb       775770 ns       762939 ns          512
find         noe 12 4 mb       770411 ns       762939 ns          512
find     tbb     12 4 mb       201946 ns       244141 ns          512
find     tbb noe 12 4 mb       173841 ns       213623 ns          512
find avx         24 4 mb       231102 ns       213623 ns          512
find avx     noe 24 4 mb       207699 ns        91553 ns          512
find avx tbb     24 4 mb       178634 ns        91553 ns          512
find avx tbb noe 24 4 mb       160930 ns       244141 ns          512
find             24 4 mb       417256 ns       396729 ns          512
find         noe 24 4 mb       412164 ns       488281 ns          512
find     tbb     24 4 mb       197022 ns       183105 ns          512
find     tbb noe 24 4 mb       167527 ns        91553 ns          512

scan avx         06 4 mb      2711795 ns      2777100 ns          512
scan avx     noe 06 4 mb      2702387 ns      2777100 ns          512
scan avx tbb     06 4 mb       586829 ns       549316 ns          512
scan avx tbb noe 06 4 mb       583664 ns       610352 ns          512
scan             06 4 mb      2704539 ns      2746582 ns          512
scan         noe 06 4 mb      2696608 ns      2716064 ns          512
scan     tbb     06 4 mb       584372 ns       671387 ns          512
scan     tbb noe 06 4 mb       582175 ns       671387 ns          512
scan avx         12 4 mb      2702382 ns      2716064 ns          512
scan avx     noe 12 4 mb      2695571 ns      2716064 ns          512
scan avx tbb     12 4 mb       587580 ns       579834 ns          512
scan avx tbb noe 12 4 mb       581873 ns       488281 ns          512
scan             12 4 mb      2711464 ns      2685547 ns          512
scan         noe 12 4 mb      2703788 ns      2685547 ns          512
scan     tbb     12 4 mb       585645 ns       640869 ns          512
scan     tbb noe 12 4 mb       583176 ns       610352 ns          512
scan avx         24 4 mb      2708351 ns      2624512 ns          512
scan avx     noe 24 4 mb      2704667 ns      2777100 ns          512
scan avx tbb     24 4 mb       585087 ns       549316 ns          512
scan avx tbb noe 24 4 mb       582838 ns       671387 ns          512
scan             24 4 mb      2705698 ns      2716064 ns          512
scan         noe 24 4 mb      2704084 ns      2746582 ns          512
scan     tbb     24 4 mb       586744 ns       579834 ns          512
scan     tbb noe 24 4 mb       582643 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      781383 ns       732422 ns           64
find avx     noe 06 16 mb      774970 ns       732422 ns           64
find avx tbb     06 16 mb      641991 ns       488281 ns           64
find avx tbb noe 06 16 mb      630152 ns        0.000 ns           64
find             06 16 mb     6142183 ns      6103516 ns           64
find         noe 06 16 mb     6031414 ns      5615234 ns           64
find     tbb     06 16 mb      799525 ns       976562 ns           64
find     tbb noe 06 16 mb      802914 ns       488281 ns           64
find avx         12 16 mb      798498 ns       732422 ns           64
find avx     noe 12 16 mb      773095 ns      1464844 ns           64
find avx tbb     12 16 mb      649164 ns       732422 ns           64
find avx tbb noe 12 16 mb      632656 ns       732422 ns           64
find             12 16 mb     3134661 ns      3173828 ns           64
find         noe 12 16 mb     3064998 ns      2441406 ns           64
find     tbb     12 16 mb      713125 ns       732422 ns           64
find     tbb noe 12 16 mb      710428 ns      1220703 ns           64
find avx         24 16 mb      953744 ns      1464844 ns           64
find avx     noe 24 16 mb      834848 ns       244141 ns           64
find avx tbb     24 16 mb      645116 ns       976562 ns           64
find avx tbb noe 24 16 mb      641975 ns       488281 ns           64
find             24 16 mb     1696670 ns      1953125 ns           64
find         noe 24 16 mb     1641845 ns      1953125 ns           64
find     tbb     24 16 mb      678458 ns       488281 ns           64
find     tbb noe 24 16 mb      680320 ns       976562 ns           64

scan avx         06 16 mb    10878573 ns     10009766 ns           64
scan avx     noe 06 16 mb    10782192 ns     10742188 ns           64
scan avx tbb     06 16 mb     2209313 ns      2441406 ns           64
scan avx tbb noe 06 16 mb     2199925 ns      2441406 ns           64
scan             06 16 mb    10827539 ns     10253906 ns           64
scan         noe 06 16 mb    10790566 ns     10986328 ns           64
scan     tbb     06 16 mb     2178255 ns      2441406 ns           64
scan     tbb noe 06 16 mb     2163745 ns      2685547 ns           64
scan avx         12 16 mb    10850009 ns     10253906 ns           64
scan avx     noe 12 16 mb    10780709 ns     10742188 ns           64
scan avx tbb     12 16 mb     2191205 ns      1953125 ns           64
scan avx tbb noe 12 16 mb     2166737 ns      2197266 ns           64
scan             12 16 mb    10849234 ns     10986328 ns           64
scan         noe 12 16 mb    10805211 ns     10498047 ns           64
scan     tbb     12 16 mb     2192675 ns      2441406 ns           64
scan     tbb noe 12 16 mb     2169577 ns      2197266 ns           64
scan avx         24 16 mb    10816034 ns     10986328 ns           64
scan avx     noe 24 16 mb    10779695 ns     10742188 ns           64
scan avx tbb     24 16 mb     2205186 ns      2441406 ns           64
scan avx tbb noe 24 16 mb     2161300 ns      2441406 ns           64
scan             24 16 mb    10828177 ns     10742188 ns           64
scan         noe 24 16 mb    10779947 ns     10253906 ns           64
scan     tbb     24 16 mb     2200819 ns      2197266 ns           64
scan     tbb noe 24 16 mb     2171619 ns      3173828 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3067631 ns        0.000 ns           32
find avx     noe 06 64 mb     3029413 ns      3906250 ns           32
find avx tbb     06 64 mb     2392472 ns      2441406 ns           32
find avx tbb noe 06 64 mb     2381516 ns      1464844 ns           32
find             06 64 mb    24111803 ns     23437500 ns           32
find         noe 06 64 mb    24123272 ns     23437500 ns           32
find     tbb     06 64 mb     2811363 ns      2929688 ns           32
find     tbb noe 06 64 mb     2817719 ns      2929688 ns           32
find avx         12 64 mb     3090937 ns      7324219 ns           32
find avx     noe 12 64 mb     3062616 ns      4882812 ns           32
find avx tbb     12 64 mb     2390247 ns      2929688 ns           32
find avx tbb noe 12 64 mb     2377925 ns      2441406 ns           32
find             12 64 mb    12272969 ns     12207031 ns           32
find         noe 12 64 mb    12250197 ns     12207031 ns           32
find     tbb     12 64 mb     2537488 ns      2441406 ns           32
find     tbb noe 12 64 mb     2528947 ns      3417969 ns           32
find avx         24 64 mb     3709897 ns      3906250 ns           32
find avx     noe 24 64 mb     3305056 ns      3417969 ns           32
find avx tbb     24 64 mb     2408416 ns      3417969 ns           32
find avx tbb noe 24 64 mb     2388794 ns      2441406 ns           32
find             24 64 mb     6531994 ns      5859375 ns           32
find         noe 24 64 mb     6524288 ns      6347656 ns           32
find     tbb     24 64 mb     2464331 ns      3417969 ns           32
find     tbb noe 24 64 mb     2458222 ns      3417969 ns           32

scan avx         06 64 mb    43350222 ns     43457031 ns           32
scan avx     noe 06 64 mb    43281325 ns     43457031 ns           32
scan avx tbb     06 64 mb     8484103 ns      8300781 ns           32
scan avx tbb noe 06 64 mb     8588319 ns      8789062 ns           32
scan             06 64 mb    43421091 ns     42968750 ns           32
scan         noe 06 64 mb    43266050 ns     42968750 ns           32
scan     tbb     06 64 mb     8437200 ns      7324219 ns           32
scan     tbb noe 06 64 mb     8623866 ns      8789062 ns           32
scan avx         12 64 mb    43143697 ns     42968750 ns           32
scan avx     noe 12 64 mb    43104022 ns     42968750 ns           32
scan avx tbb     12 64 mb     8373050 ns      7812500 ns           32
scan avx tbb noe 12 64 mb     8501453 ns      6835938 ns           32
scan             12 64 mb    43337172 ns     44433594 ns           32
scan         noe 12 64 mb    43112978 ns     43945312 ns           32
scan     tbb     12 64 mb     8429150 ns      8789062 ns           32
scan     tbb noe 12 64 mb     8697688 ns      9277344 ns           32
scan avx         24 64 mb    43396450 ns     44433594 ns           32
scan avx     noe 24 64 mb    43181122 ns     42968750 ns           32
scan avx tbb     24 64 mb     8458422 ns      8300781 ns           32
scan avx tbb noe 24 64 mb     8593853 ns      8789062 ns           32
scan             24 64 mb    43374737 ns     42480469 ns           32
scan         noe 24 64 mb    43063353 ns     44433594 ns           32
scan     tbb     24 64 mb     8386734 ns      8300781 ns           32
scan     tbb noe 24 64 mb     8614537 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13049619 ns     11718750 ns           16
find avx     noe 06 256 mb   12991456 ns     12695312 ns           16
find avx tbb     06 256 mb    9306606 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9290825 ns      9765625 ns           16
find             06 256 mb   96429150 ns     96679688 ns           16
find         noe 06 256 mb   96353469 ns     96679688 ns           16
find     tbb     06 256 mb   10746250 ns     15625000 ns           16
find     tbb noe 06 256 mb   10756331 ns      6835938 ns           16
find avx         12 256 mb   13022444 ns     12695312 ns           16
find avx     noe 12 256 mb   13023469 ns     11718750 ns           16
find avx tbb     12 256 mb    9300019 ns      7812500 ns           16
find avx tbb noe 12 256 mb    9302888 ns      9765625 ns           16
find             12 256 mb   49036163 ns     48828125 ns           16
find         noe 12 256 mb   49020800 ns     47851562 ns           16
find     tbb     12 256 mb    9737050 ns     10742188 ns           16
find     tbb noe 12 256 mb    9690262 ns      7812500 ns           16
find avx         24 256 mb   14947250 ns     15625000 ns           16
find avx     noe 24 256 mb   13829813 ns     13671875 ns           16
find avx tbb     24 256 mb    9342912 ns      7812500 ns           16
find avx tbb noe 24 256 mb    9335237 ns      9765625 ns           16
find             24 256 mb   26152587 ns     26367188 ns           16
find         noe 24 256 mb   26122363 ns     26367188 ns           16
find     tbb     24 256 mb    9481394 ns      8789062 ns           16
find     tbb noe 24 256 mb    9484656 ns      9765625 ns           16

scan avx         06 256 mb  172519675 ns    172851562 ns           16
scan avx     noe 06 256 mb  172481200 ns    171875000 ns           16
scan avx tbb     06 256 mb   33018594 ns     31250000 ns           16
scan avx tbb noe 06 256 mb   33410125 ns     32226562 ns           16
scan             06 256 mb  172496956 ns    171875000 ns           16
scan         noe 06 256 mb  172474775 ns    171875000 ns           16
scan     tbb     06 256 mb   33137669 ns     31250000 ns           16
scan     tbb noe 06 256 mb   33426994 ns     31250000 ns           16
scan avx         12 256 mb  172474012 ns    172851562 ns           16
scan avx     noe 12 256 mb  172674744 ns    171875000 ns           16
scan avx tbb     12 256 mb   33047744 ns     31250000 ns           16
scan avx tbb noe 12 256 mb   33558800 ns     30273438 ns           16
scan             12 256 mb  172804350 ns    172851562 ns           16
scan         noe 12 256 mb  172752288 ns    172851562 ns           16
scan     tbb     12 256 mb   32917325 ns     29296875 ns           16
scan     tbb noe 12 256 mb   33545037 ns     32226562 ns           16
scan avx         24 256 mb  172756350 ns    171875000 ns           16
scan avx     noe 24 256 mb  172872338 ns    175781250 ns           16
scan avx tbb     24 256 mb   33141419 ns     31250000 ns           16
scan avx tbb noe 24 256 mb   33752956 ns     32226562 ns           16
scan             24 256 mb  172399575 ns    171875000 ns           16
scan         noe 24 256 mb  172569031 ns    172851562 ns           16
scan     tbb     24 256 mb   33144162 ns     31250000 ns           16
scan     tbb noe 24 256 mb   33406713 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26799062 ns     27343750 ns            8
find avx     noe 06 512 mb   26804162 ns     29296875 ns            8
find avx tbb     06 512 mb   18493375 ns     17578125 ns            8
find avx tbb noe 06 512 mb   18520000 ns     17578125 ns            8
find             06 512 mb  192673738 ns    191406250 ns            8
find         noe 06 512 mb  192692025 ns    193359375 ns            8
find     tbb     06 512 mb   21329688 ns     23437500 ns            8
find     tbb noe 06 512 mb   21428300 ns     19531250 ns            8
find avx         12 512 mb   26812637 ns     29296875 ns            8
find avx     noe 12 512 mb   26778925 ns     25390625 ns            8
find avx tbb     12 512 mb   18517987 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18523700 ns     19531250 ns            8
find             12 512 mb   98189963 ns     95703125 ns            8
find         noe 12 512 mb   98199712 ns    101562500 ns            8
find     tbb     12 512 mb   19255150 ns     19531250 ns            8
find     tbb noe 12 512 mb   19220100 ns     17578125 ns            8
find avx         24 512 mb   30480813 ns     31250000 ns            8
find avx     noe 24 512 mb   28284950 ns     31250000 ns            8
find avx tbb     24 512 mb   18573350 ns     17578125 ns            8
find avx tbb noe 24 512 mb   18579687 ns     17578125 ns            8
find             24 512 mb   52002700 ns     50781250 ns            8
find         noe 24 512 mb   52062613 ns     50781250 ns            8
find     tbb     24 512 mb   18837413 ns     19531250 ns            8
find     tbb noe 24 512 mb   18831988 ns     19531250 ns            8

scan avx         06 512 mb  345528988 ns    343750000 ns            8
scan avx     noe 06 512 mb  346899575 ns    345703125 ns            8
scan avx tbb     06 512 mb   65562587 ns     58593750 ns            8
scan avx tbb noe 06 512 mb   67095538 ns     60546875 ns            8
scan             06 512 mb  344986975 ns    345703125 ns            8
scan         noe 06 512 mb  344976412 ns    345703125 ns            8
scan     tbb     06 512 mb   66031238 ns     60546875 ns            8
scan     tbb noe 06 512 mb   66735838 ns     60546875 ns            8
scan avx         12 512 mb  345260062 ns    343750000 ns            8
scan avx     noe 12 512 mb  345231800 ns    343750000 ns            8
scan avx tbb     12 512 mb   65552900 ns     58593750 ns            8
scan avx tbb noe 12 512 mb   66817650 ns     58593750 ns            8
scan             12 512 mb  345020113 ns    343750000 ns            8
scan         noe 12 512 mb  345615775 ns    349609375 ns            8
scan     tbb     12 512 mb   65787463 ns     62500000 ns            8
scan     tbb noe 12 512 mb   67602588 ns     62500000 ns            8
scan avx         24 512 mb  345179500 ns    345703125 ns            8
scan avx     noe 24 512 mb  344883825 ns    343750000 ns            8
scan avx tbb     24 512 mb   65868375 ns     60546875 ns            8
scan avx tbb noe 24 512 mb   67534188 ns     64453125 ns            8
scan             24 512 mb  345785962 ns    347656250 ns            8
scan         noe 24 512 mb  345793512 ns    347656250 ns            8
scan     tbb     24 512 mb   67300988 ns     64453125 ns            8
scan     tbb noe 24 512 mb   66844013 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     54374275 ns     54687500 ns            8
find avx     noe 06 1 gb     54427837 ns     54687500 ns            8
find avx tbb     06 1 gb     36947350 ns     31250000 ns            8
find avx tbb noe 06 1 gb     37686900 ns     35156250 ns            8
find             06 1 gb    385348800 ns    384765625 ns            8
find         noe 06 1 gb    385876750 ns    386718750 ns            8
find     tbb     06 1 gb     42567763 ns     33203125 ns            8
find     tbb noe 06 1 gb     42449400 ns     41015625 ns            8
find avx         12 1 gb     54430325 ns     54687500 ns            8
find avx     noe 12 1 gb     54444375 ns     52734375 ns            8
find avx tbb     12 1 gb     36906862 ns     37109375 ns            8
find avx tbb noe 12 1 gb     36910137 ns     35156250 ns            8
find             12 1 gb    196164675 ns    195312500 ns            8
find         noe 12 1 gb    196055050 ns    197265625 ns            8
find     tbb     12 1 gb     38364400 ns     35156250 ns            8
find     tbb noe 12 1 gb     38322688 ns     33203125 ns            8
find avx         24 1 gb     61216525 ns     62500000 ns            8
find avx     noe 24 1 gb     57140362 ns     56640625 ns            8
find avx tbb     24 1 gb     37082125 ns     41015625 ns            8
find avx tbb noe 24 1 gb     37379750 ns     35156250 ns            8
find             24 1 gb    103940550 ns    105468750 ns            8
find         noe 24 1 gb    104174137 ns    103515625 ns            8
find     tbb     24 1 gb     37543125 ns     37109375 ns            8
find     tbb noe 24 1 gb     37601750 ns     37109375 ns            8

scan avx         06 1 gb    691723412 ns    693359375 ns            8
scan avx     noe 06 1 gb    691316413 ns    693359375 ns            8
scan avx tbb     06 1 gb    130764288 ns    119140625 ns            8
scan avx tbb noe 06 1 gb    135460850 ns    121093750 ns            8
scan             06 1 gb    689540763 ns    689453125 ns            8
scan         noe 06 1 gb    689454975 ns    689453125 ns            8
scan     tbb     06 1 gb    132616012 ns    128906250 ns            8
scan     tbb noe 06 1 gb    134312837 ns    119140625 ns            8
scan avx         12 1 gb    689886400 ns    687500000 ns            8
scan avx     noe 12 1 gb    689798325 ns    687500000 ns            8
scan avx tbb     12 1 gb    134080375 ns    125000000 ns            8
scan avx tbb noe 12 1 gb    133267425 ns    125000000 ns            8
scan             12 1 gb    691632363 ns    691406250 ns            8
scan         noe 12 1 gb    690184637 ns    687500000 ns            8
scan     tbb     12 1 gb    132541263 ns    121093750 ns            8
scan     tbb noe 12 1 gb    135121800 ns    123046875 ns            8
scan avx         24 1 gb    689707538 ns    689453125 ns            8
scan avx     noe 24 1 gb    690693775 ns    689453125 ns            8
scan avx tbb     24 1 gb    132204362 ns    117187500 ns            8
scan avx tbb noe 24 1 gb    134469912 ns    119140625 ns            8
scan             24 1 gb    689584688 ns    689453125 ns            8
scan         noe 24 1 gb    690071212 ns    689453125 ns            8
scan     tbb     24 1 gb    131614025 ns    119140625 ns            8
scan     tbb noe 24 1 gb    134583625 ns    125000000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    109529325 ns    109375000 ns            8
find avx     noe 06 2 gb    109535462 ns    109375000 ns            8
find avx tbb     06 2 gb     73814863 ns     72265625 ns            8
find avx tbb noe 06 2 gb     73984462 ns     72265625 ns            8
find             06 2 gb    770883062 ns    773437500 ns            8
find         noe 06 2 gb    772520425 ns    773437500 ns            8
find     tbb     06 2 gb     84808050 ns     72265625 ns            8
find     tbb noe 06 2 gb     86310387 ns     74218750 ns            8
find avx         12 2 gb    109566675 ns    109375000 ns            8
find avx     noe 12 2 gb    109626438 ns    109375000 ns            8
find avx tbb     12 2 gb     73896513 ns     78125000 ns            8
find avx tbb noe 12 2 gb     73876775 ns     70312500 ns            8
find             12 2 gb    392626588 ns    394531250 ns            8
find         noe 12 2 gb    392346712 ns    392578125 ns            8
find     tbb     12 2 gb     76533363 ns     70312500 ns            8
find     tbb noe 12 2 gb     77092050 ns     74218750 ns            8
find avx         24 2 gb    122628750 ns    125000000 ns            8
find avx     noe 24 2 gb    115096225 ns    117187500 ns            8
find avx tbb     24 2 gb     74123037 ns     76171875 ns            8
find avx tbb noe 24 2 gb     74136150 ns     70312500 ns            8
find             24 2 gb    208211763 ns    210937500 ns            8
find         noe 24 2 gb    207805175 ns    208984375 ns            8
find     tbb     24 2 gb     74957375 ns     76171875 ns            8
find     tbb noe 24 2 gb     74983450 ns     74218750 ns            8

scan avx         06 2 gb   1379953625 ns   1382812500 ns            8
scan avx     noe 06 2 gb   1382672263 ns   1380859375 ns            8
scan avx tbb     06 2 gb    266449238 ns    242187500 ns            8
scan avx tbb noe 06 2 gb    267977762 ns    240234375 ns            8
scan             06 2 gb   1381295600 ns   1384765625 ns            8
scan         noe 06 2 gb   1382880250 ns   1380859375 ns            8
scan     tbb     06 2 gb    264812275 ns    248046875 ns            8
scan     tbb noe 06 2 gb    269137713 ns    238281250 ns            8
scan avx         12 2 gb   1381012913 ns   1380859375 ns            8
scan avx     noe 12 2 gb   1381248012 ns   1380859375 ns            8
scan avx tbb     12 2 gb    262663538 ns    236328125 ns            8
scan avx tbb noe 12 2 gb    268710613 ns    234375000 ns            8
scan             12 2 gb   1381599113 ns   1382812500 ns            8
scan         noe 12 2 gb   1382282612 ns   1380859375 ns            8
scan     tbb     12 2 gb    261081788 ns    238281250 ns            8
scan     tbb noe 12 2 gb    265082362 ns    238281250 ns            8
scan avx         24 2 gb   1382301087 ns   1382812500 ns            8
scan avx     noe 24 2 gb   1381483738 ns   1382812500 ns            8
scan avx tbb     24 2 gb    268611987 ns    248046875 ns            8
scan avx tbb noe 24 2 gb    267326938 ns    234375000 ns            8
scan             24 2 gb   1379365362 ns   1380859375 ns            8
scan         noe 24 2 gb   1379655488 ns   1376953125 ns            8
scan     tbb     24 2 gb    262847863 ns    234375000 ns            8
scan     tbb noe 24 2 gb    272391125 ns    244140625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1079 ns        0.000 ns         4096
find avx     noe 06 16 kb        1014 ns        0.000 ns         4096
find avx tbb     06 16 kb        1030 ns         3815 ns         4096
find avx tbb noe 06 16 kb        1013 ns        0.000 ns         4096
find             06 16 kb        6755 ns         7629 ns         4096
find         noe 06 16 kb        6776 ns         7629 ns         4096
find     tbb     06 16 kb        7555 ns         7629 ns         4096
find     tbb noe 06 16 kb        7426 ns         3815 ns         4096
find avx         12 16 kb        1080 ns        0.000 ns         4096
find avx     noe 12 16 kb        1068 ns        0.000 ns         4096
find avx tbb     12 16 kb        1078 ns        0.000 ns         4096
find avx tbb noe 12 16 kb        1071 ns        0.000 ns         4096
find             12 16 kb        3901 ns         3815 ns         4096
find         noe 12 16 kb        3708 ns         3815 ns         4096
find     tbb     12 16 kb        7025 ns        11444 ns         4096
find     tbb noe 12 16 kb        7064 ns         3815 ns         4096
find avx         24 16 kb        1272 ns        0.000 ns         4096
find avx     noe 24 16 kb        1257 ns         3815 ns         4096
find avx tbb     24 16 kb        1242 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1246 ns        0.000 ns         4096
find             24 16 kb        2429 ns         3815 ns         4096
find         noe 24 16 kb        2277 ns        0.000 ns         4096
find     tbb     24 16 kb        6920 ns         7629 ns         4096
find     tbb noe 24 16 kb        6910 ns         7629 ns         4096

scan avx         06 16 kb       12211 ns        15259 ns         4096
scan avx     noe 06 16 kb       11794 ns        11444 ns         4096
scan avx tbb     06 16 kb       11657 ns        11444 ns         4096
scan avx tbb noe 06 16 kb       11082 ns        11444 ns         4096
scan             06 16 kb       11071 ns        11444 ns         4096
scan         noe 06 16 kb       11091 ns        15259 ns         4096
scan     tbb     06 16 kb        7474 ns        0.000 ns         4096
scan     tbb noe 06 16 kb        7181 ns         7629 ns         4096
scan avx         12 16 kb       11591 ns        11444 ns         4096
scan avx     noe 12 16 kb       11427 ns        11444 ns         4096
scan avx tbb     12 16 kb       11765 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11469 ns        11444 ns         4096
scan             12 16 kb       11125 ns        11444 ns         4096
scan         noe 12 16 kb       11035 ns        11444 ns         4096
scan     tbb     12 16 kb        7616 ns        11444 ns         4096
scan     tbb noe 12 16 kb        7225 ns         3815 ns         4096
scan avx         24 16 kb       11581 ns        11444 ns         4096
scan avx     noe 24 16 kb       11139 ns        11444 ns         4096
scan avx tbb     24 16 kb       11798 ns        11444 ns         4096
scan avx tbb noe 24 16 kb       11738 ns        11444 ns         4096
scan             24 16 kb       11058 ns        11444 ns         4096
scan         noe 24 16 kb       11036 ns        11444 ns         4096
scan     tbb     24 16 kb        7475 ns        11444 ns         4096
scan     tbb noe 24 16 kb        7457 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2334 ns         3815 ns         4096
find avx     noe 06 64 kb        2342 ns        0.000 ns         4096
find avx tbb     06 64 kb        2274 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2269 ns         3815 ns         4096
find             06 64 kb       24201 ns        22888 ns         4096
find         noe 06 64 kb       24202 ns        26703 ns         4096
find     tbb     06 64 kb        9858 ns         7629 ns         4096
find     tbb noe 06 64 kb        9918 ns         7629 ns         4096
find avx         12 64 kb        2307 ns        0.000 ns         4096
find avx     noe 12 64 kb        2364 ns        0.000 ns         4096
find avx tbb     12 64 kb        2317 ns         3815 ns         4096
find avx tbb noe 12 64 kb        2219 ns        0.000 ns         4096
find             12 64 kb       12572 ns        11444 ns         4096
find         noe 12 64 kb       12569 ns        11444 ns         4096
find     tbb     12 64 kb        8413 ns         7629 ns         4096
find     tbb noe 12 64 kb        8454 ns        11444 ns         4096
find avx         24 64 kb        2806 ns        0.000 ns         4096
find avx     noe 24 64 kb        2917 ns         7629 ns         4096
find avx tbb     24 64 kb        2883 ns         3815 ns         4096
find avx tbb noe 24 64 kb        2863 ns        0.000 ns         4096
find             24 64 kb        7142 ns         7629 ns         4096
find         noe 24 64 kb        7118 ns         7629 ns         4096
find     tbb     24 64 kb        7630 ns         3815 ns         4096
find     tbb noe 24 64 kb        7673 ns        11444 ns         4096

scan avx         06 64 kb       43231 ns        41962 ns         4096
scan avx     noe 06 64 kb       42845 ns        45776 ns         4096
scan avx tbb     06 64 kb       42589 ns        41962 ns         4096
scan avx tbb noe 06 64 kb       42707 ns        45776 ns         4096
scan             06 64 kb       42747 ns        45776 ns         4096
scan         noe 06 64 kb       42562 ns        38147 ns         4096
scan     tbb     06 64 kb       14146 ns        19073 ns         4096
scan     tbb noe 06 64 kb       13725 ns        11444 ns         4096
scan avx         12 64 kb       43783 ns        45776 ns         4096
scan avx     noe 12 64 kb       42716 ns        45776 ns         4096
scan avx tbb     12 64 kb       42707 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       42663 ns        41962 ns         4096
scan             12 64 kb       42670 ns        41962 ns         4096
scan         noe 12 64 kb       42726 ns        38147 ns         4096
scan     tbb     12 64 kb       14275 ns        11444 ns         4096
scan     tbb noe 12 64 kb       13682 ns        15259 ns         4096
scan avx         24 64 kb       43502 ns        41962 ns         4096
scan avx     noe 24 64 kb       42607 ns        45776 ns         4096
scan avx tbb     24 64 kb       42692 ns        41962 ns         4096
scan avx tbb noe 24 64 kb       42621 ns        45776 ns         4096
scan             24 64 kb       42592 ns        45776 ns         4096
scan         noe 24 64 kb       42631 ns        38147 ns         4096
scan     tbb     24 64 kb       14270 ns        19073 ns         4096
scan     tbb noe 24 64 kb       13650 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       7981 ns         7629 ns         2048
find avx     noe 06 256 kb       7787 ns        15259 ns         2048
find avx tbb     06 256 kb       7530 ns        15259 ns         2048
find avx tbb noe 06 256 kb       7589 ns         7629 ns         2048
find             06 256 kb      94707 ns        99182 ns         2048
find         noe 06 256 kb      94645 ns       106812 ns         2048
find     tbb     06 256 kb      20547 ns        22888 ns         2048
find     tbb noe 06 256 kb      20950 ns        30518 ns         2048
find avx         12 256 kb       8193 ns         7629 ns         2048
find avx     noe 12 256 kb       8124 ns        0.000 ns         2048
find avx tbb     12 256 kb       7932 ns         7629 ns         2048
find avx tbb noe 12 256 kb       7964 ns         7629 ns         2048
find             12 256 kb      48429 ns        45776 ns         2048
find         noe 12 256 kb      47913 ns        53406 ns         2048
find     tbb     12 256 kb      15184 ns        15259 ns         2048
find     tbb noe 12 256 kb      15272 ns        15259 ns         2048
find avx         24 256 kb      10305 ns         7629 ns         2048
find avx     noe 24 256 kb       9373 ns        15259 ns         2048
find avx tbb     24 256 kb       9879 ns         7629 ns         2048
find avx tbb noe 24 256 kb       9925 ns         7629 ns         2048
find             24 256 kb      25432 ns        22888 ns         2048
find         noe 24 256 kb      24703 ns        30518 ns         2048
find     tbb     24 256 kb      12793 ns        22888 ns         2048
find     tbb noe 24 256 kb      12904 ns        22888 ns         2048

scan avx         06 256 kb     170908 ns       175476 ns         2048
scan avx     noe 06 256 kb     168947 ns       160217 ns         2048
scan avx tbb     06 256 kb     168973 ns       175476 ns         2048
scan avx tbb noe 06 256 kb     169596 ns       167847 ns         2048
scan             06 256 kb     169328 ns       175476 ns         2048
scan         noe 06 256 kb     168733 ns       175476 ns         2048
scan     tbb     06 256 kb      41967 ns        45776 ns         2048
scan     tbb noe 06 256 kb      41653 ns        22888 ns         2048
scan avx         12 256 kb     171251 ns       183105 ns         2048
scan avx     noe 12 256 kb     169297 ns       160217 ns         2048
scan avx tbb     12 256 kb     169845 ns       167847 ns         2048
scan avx tbb noe 12 256 kb     169048 ns       160217 ns         2048
scan             12 256 kb     169145 ns       167847 ns         2048
scan         noe 12 256 kb     169393 ns       167847 ns         2048
scan     tbb     12 256 kb      42059 ns        30518 ns         2048
scan     tbb noe 12 256 kb      41296 ns        30518 ns         2048
scan avx         24 256 kb     170644 ns       175476 ns         2048
scan avx     noe 24 256 kb     168961 ns       160217 ns         2048
scan avx tbb     24 256 kb     168828 ns       175476 ns         2048
scan avx tbb noe 24 256 kb     170873 ns       175476 ns         2048
scan             24 256 kb     169279 ns       167847 ns         2048
scan         noe 24 256 kb     168822 ns       160217 ns         2048
scan     tbb     24 256 kb      42330 ns        45776 ns         2048
scan     tbb noe 24 256 kb      41593 ns        45776 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        29612 ns        30518 ns         1024
find avx     noe 06 1 mb        27577 ns        30518 ns         1024
find avx tbb     06 1 mb        18405 ns        15259 ns         1024
find avx tbb noe 06 1 mb        17287 ns        30518 ns         1024
find             06 1 mb       380707 ns       366211 ns         1024
find         noe 06 1 mb       375489 ns       396729 ns         1024
find     tbb     06 1 mb        50446 ns        15259 ns         1024
find     tbb noe 06 1 mb        49442 ns        76294 ns         1024
find avx         12 1 mb        28906 ns        15259 ns         1024
find avx     noe 12 1 mb        27332 ns        30518 ns         1024
find avx tbb     12 1 mb        19049 ns        30518 ns         1024
find avx tbb noe 12 1 mb        17386 ns        15259 ns         1024
find             12 1 mb       192781 ns       198364 ns         1024
find         noe 12 1 mb       189284 ns       198364 ns         1024
find     tbb     12 1 mb        31113 ns        61035 ns         1024
find     tbb noe 12 1 mb        30261 ns        15259 ns         1024
find avx         24 1 mb        36811 ns        30518 ns         1024
find avx     noe 24 1 mb        33058 ns        30518 ns         1024
find avx tbb     24 1 mb        18914 ns        30518 ns         1024
find avx tbb noe 24 1 mb        19243 ns        30518 ns         1024
find             24 1 mb        99029 ns        91553 ns         1024
find         noe 24 1 mb        95587 ns       106812 ns         1024
find     tbb     24 1 mb        21820 ns        15259 ns         1024
find     tbb noe 24 1 mb        21528 ns        30518 ns         1024

scan avx         06 1 mb       678689 ns       686646 ns         1024
scan avx     noe 06 1 mb       674170 ns       686646 ns         1024
scan avx tbb     06 1 mb       145195 ns       183105 ns         1024
scan avx tbb noe 06 1 mb       141719 ns       152588 ns         1024
scan             06 1 mb       678985 ns       656128 ns         1024
scan         noe 06 1 mb       673709 ns       671387 ns         1024
scan     tbb     06 1 mb       145290 ns       122070 ns         1024
scan     tbb noe 06 1 mb       142282 ns       122070 ns         1024
scan avx         12 1 mb       677847 ns       671387 ns         1024
scan avx     noe 12 1 mb       673443 ns       671387 ns         1024
scan avx tbb     12 1 mb       146331 ns       137329 ns         1024
scan avx tbb noe 12 1 mb       141510 ns        91553 ns         1024
scan             12 1 mb       678487 ns       701904 ns         1024
scan         noe 12 1 mb       674813 ns       656128 ns         1024
scan     tbb     12 1 mb       145146 ns        91553 ns         1024
scan     tbb noe 12 1 mb       142392 ns       167847 ns         1024
scan avx         24 1 mb       678435 ns       686646 ns         1024
scan avx     noe 24 1 mb       674229 ns       671387 ns         1024
scan avx tbb     24 1 mb       147026 ns       137329 ns         1024
scan avx tbb noe 24 1 mb       141671 ns       152588 ns         1024
scan             24 1 mb       678552 ns       656128 ns         1024
scan         noe 24 1 mb       674506 ns       686646 ns         1024
scan     tbb     24 1 mb       145263 ns       152588 ns         1024
scan     tbb noe 24 1 mb       142521 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       192798 ns       213623 ns          512
find avx     noe 06 4 mb       189519 ns       213623 ns          512
find avx tbb     06 4 mb       183223 ns       213623 ns          512
find avx tbb noe 06 4 mb       158430 ns        91553 ns          512
find             06 4 mb      1528751 ns      1525879 ns          512
find         noe 06 4 mb      1510734 ns      1464844 ns          512
find     tbb     06 4 mb       232473 ns       122070 ns          512
find     tbb noe 06 4 mb       200410 ns       122070 ns          512
find avx         12 4 mb       192343 ns       152588 ns          512
find avx     noe 12 4 mb       193455 ns       213623 ns          512
find avx tbb     12 4 mb       178237 ns       152588 ns          512
find avx tbb noe 12 4 mb       158495 ns       183105 ns          512
find             12 4 mb       777425 ns       793457 ns          512
find         noe 12 4 mb       771322 ns       732422 ns          512
find     tbb     12 4 mb       205483 ns       152588 ns          512
find     tbb noe 12 4 mb       175001 ns       213623 ns          512
find avx         24 4 mb       232035 ns       305176 ns          512
find avx     noe 24 4 mb       208972 ns       305176 ns          512
find avx tbb     24 4 mb       178979 ns       122070 ns          512
find avx tbb noe 24 4 mb       160419 ns       152588 ns          512
find             24 4 mb       417763 ns       396729 ns          512
find         noe 24 4 mb       409789 ns       366211 ns          512
find     tbb     24 4 mb       192959 ns       213623 ns          512
find     tbb noe 24 4 mb       167748 ns       152588 ns          512

scan avx         06 4 mb      2712943 ns      2746582 ns          512
scan avx     noe 06 4 mb      2707122 ns      2807617 ns          512
scan avx tbb     06 4 mb       598817 ns       518799 ns          512
scan avx tbb noe 06 4 mb       569928 ns       549316 ns          512
scan             06 4 mb      2715859 ns      2685547 ns          512
scan         noe 06 4 mb      2700898 ns      2716064 ns          512
scan     tbb     06 4 mb       596802 ns       549316 ns          512
scan     tbb noe 06 4 mb       569419 ns       488281 ns          512
scan avx         12 4 mb      2705111 ns      2655029 ns          512
scan avx     noe 12 4 mb      2697633 ns      2685547 ns          512
scan avx tbb     12 4 mb       598696 ns       671387 ns          512
scan avx tbb noe 12 4 mb       569818 ns       579834 ns          512
scan             12 4 mb      2710294 ns      2746582 ns          512
scan         noe 12 4 mb      2699435 ns      2777100 ns          512
scan     tbb     12 4 mb       597535 ns       640869 ns          512
scan     tbb noe 12 4 mb       571664 ns       640869 ns          512
scan avx         24 4 mb      2711088 ns      2746582 ns          512
scan avx     noe 24 4 mb      2699983 ns      2685547 ns          512
scan avx tbb     24 4 mb       599319 ns       610352 ns          512
scan avx tbb noe 24 4 mb       568832 ns       610352 ns          512
scan             24 4 mb      2714046 ns      2746582 ns          512
scan         noe 24 4 mb      2703214 ns      2655029 ns          512
scan     tbb     24 4 mb       600392 ns       640869 ns          512
scan     tbb noe 24 4 mb       570260 ns       671387 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      786045 ns       488281 ns           64
find avx     noe 06 16 mb      769239 ns       488281 ns           64
find avx tbb     06 16 mb      648936 ns       732422 ns           64
find avx tbb noe 06 16 mb      631364 ns       732422 ns           64
find             06 16 mb     6149566 ns      6103516 ns           64
find         noe 06 16 mb     6026483 ns      5615234 ns           64
find     tbb     06 16 mb      802695 ns       732422 ns           64
find     tbb noe 06 16 mb      799759 ns      1220703 ns           64
find avx         12 16 mb      786808 ns      1220703 ns           64
find avx     noe 12 16 mb      776186 ns      1220703 ns           64
find avx tbb     12 16 mb      639556 ns      1220703 ns           64
find avx tbb noe 12 16 mb      629827 ns       488281 ns           64
find             12 16 mb     3136025 ns      3173828 ns           64
find         noe 12 16 mb     3073192 ns      2441406 ns           64
find     tbb     12 16 mb      714728 ns        0.000 ns           64
find     tbb noe 12 16 mb      710214 ns       976562 ns           64
find avx         24 16 mb      962120 ns       732422 ns           64
find avx     noe 24 16 mb      839763 ns      1220703 ns           64
find avx tbb     24 16 mb      646088 ns       976562 ns           64
find avx tbb noe 24 16 mb      637203 ns       488281 ns           64
find             24 16 mb     1730456 ns      2685547 ns           64
find         noe 24 16 mb     1645477 ns      1464844 ns           64
find     tbb     24 16 mb      686139 ns       732422 ns           64
find     tbb noe 24 16 mb      671903 ns       488281 ns           64

scan avx         06 16 mb    10916681 ns     11718750 ns           64
scan avx     noe 06 16 mb    10789348 ns     10498047 ns           64
scan avx tbb     06 16 mb     2226708 ns      1953125 ns           64
scan avx tbb noe 06 16 mb     2158155 ns      1953125 ns           64
scan             06 16 mb    10835512 ns     10742188 ns           64
scan         noe 06 16 mb    10797131 ns     10498047 ns           64
scan     tbb     06 16 mb     2216100 ns      2197266 ns           64
scan     tbb noe 06 16 mb     2142939 ns      2197266 ns           64
scan avx         12 16 mb    10947894 ns     11230469 ns           64
scan avx     noe 12 16 mb    10823603 ns     10498047 ns           64
scan avx tbb     12 16 mb     2202130 ns      2197266 ns           64
scan avx tbb noe 12 16 mb     2162628 ns      2197266 ns           64
scan             12 16 mb    10849792 ns     10498047 ns           64
scan         noe 12 16 mb    10790487 ns     11230469 ns           64
scan     tbb     12 16 mb     2219373 ns      1953125 ns           64
scan     tbb noe 12 16 mb     2141398 ns      2197266 ns           64
scan avx         24 16 mb    10825130 ns     10253906 ns           64
scan avx     noe 24 16 mb    10805830 ns     11962891 ns           64
scan avx tbb     24 16 mb     2213423 ns      2441406 ns           64
scan avx tbb noe 24 16 mb     2126947 ns      1953125 ns           64
scan             24 16 mb    10889884 ns     11230469 ns           64
scan         noe 24 16 mb    10795350 ns     10986328 ns           64
scan     tbb     24 16 mb     2228622 ns      1953125 ns           64
scan     tbb noe 24 16 mb     2135750 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3091813 ns        0.000 ns           32
find avx     noe 06 64 mb     3071684 ns        0.000 ns           32
find avx tbb     06 64 mb     2382225 ns      2929688 ns           32
find avx tbb noe 06 64 mb     2382850 ns      2441406 ns           32
find             06 64 mb    24097528 ns     24414062 ns           32
find         noe 06 64 mb    24138656 ns     23925781 ns           32
find     tbb     06 64 mb     2812075 ns      4882812 ns           32
find     tbb noe 06 64 mb     2813559 ns      4394531 ns           32
find avx         12 64 mb     3059806 ns       976562 ns           32
find avx     noe 12 64 mb     3059203 ns       488281 ns           32
find avx tbb     12 64 mb     2394722 ns      2929688 ns           32
find avx tbb noe 12 64 mb     2393750 ns      2441406 ns           32
find             12 64 mb    12270244 ns     12207031 ns           32
find         noe 12 64 mb    12263313 ns     12207031 ns           32
find     tbb     12 64 mb     2526141 ns      2441406 ns           32
find     tbb noe 12 64 mb     2521744 ns      2929688 ns           32
find avx         24 64 mb     3684466 ns      3906250 ns           32
find avx     noe 24 64 mb     3278716 ns      3906250 ns           32
find avx tbb     24 64 mb     2406141 ns      2441406 ns           32
find avx tbb noe 24 64 mb     2403537 ns      2441406 ns           32
find             24 64 mb     6764137 ns      6835938 ns           32
find         noe 24 64 mb     6551437 ns      7324219 ns           32
find     tbb     24 64 mb     2469609 ns      2929688 ns           32
find     tbb noe 24 64 mb     2464469 ns      2441406 ns           32

scan avx         06 64 mb    43204341 ns     42968750 ns           32
scan avx     noe 06 64 mb    43109438 ns     42480469 ns           32
scan avx tbb     06 64 mb     8505397 ns      8789062 ns           32
scan avx tbb noe 06 64 mb     8449175 ns      8300781 ns           32
scan             06 64 mb    43216691 ns     42480469 ns           32
scan         noe 06 64 mb    43094519 ns     41503906 ns           32
scan     tbb     06 64 mb     8607441 ns      8789062 ns           32
scan     tbb noe 06 64 mb     8412875 ns      7812500 ns           32
scan avx         12 64 mb    43364550 ns     43457031 ns           32
scan avx     noe 12 64 mb    43120906 ns     43945312 ns           32
scan avx tbb     12 64 mb     8527484 ns      8789062 ns           32
scan avx tbb noe 12 64 mb     8522897 ns      9277344 ns           32
scan             12 64 mb    43444853 ns     45410156 ns           32
scan         noe 12 64 mb    43229662 ns     41992188 ns           32
scan     tbb     12 64 mb     8436878 ns      8789062 ns           32
scan     tbb noe 12 64 mb     8578341 ns      7324219 ns           32
scan avx         24 64 mb    43257269 ns     43945312 ns           32
scan avx     noe 24 64 mb    43141866 ns     43945312 ns           32
scan avx tbb     24 64 mb     8562269 ns      7812500 ns           32
scan avx tbb noe 24 64 mb     8424353 ns      7812500 ns           32
scan             24 64 mb    43408069 ns     43945312 ns           32
scan         noe 24 64 mb    43086725 ns     43945312 ns           32
scan     tbb     24 64 mb     8535112 ns      7812500 ns           32
scan     tbb noe 24 64 mb     8352437 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   13108887 ns     14648438 ns           16
find avx     noe 06 256 mb   13048963 ns     13671875 ns           16
find avx tbb     06 256 mb    9307150 ns      8789062 ns           16
find avx tbb noe 06 256 mb    9291594 ns      9765625 ns           16
find             06 256 mb   96513338 ns     95703125 ns           16
find         noe 06 256 mb   96578738 ns     96679688 ns           16
find     tbb     06 256 mb   10756994 ns     15625000 ns           16
find     tbb noe 06 256 mb   10741700 ns     11718750 ns           16
find avx         12 256 mb   12979613 ns     13671875 ns           16
find avx     noe 12 256 mb   13012387 ns     14648438 ns           16
find avx tbb     12 256 mb    9312794 ns      8789062 ns           16
find avx tbb noe 12 256 mb    9298287 ns     10742188 ns           16
find             12 256 mb   49230744 ns     49804688 ns           16
find         noe 12 256 mb   49035337 ns     49804688 ns           16
find     tbb     12 256 mb    9677744 ns      9765625 ns           16
find     tbb noe 12 256 mb    9672612 ns     11718750 ns           16
find avx         24 256 mb   15130412 ns     14648438 ns           16
find avx     noe 24 256 mb   13842075 ns     13671875 ns           16
find avx tbb     24 256 mb    9329531 ns      8789062 ns           16
find avx tbb noe 24 256 mb    9340269 ns      8789062 ns           16
find             24 256 mb   26084950 ns     25390625 ns           16
find         noe 24 256 mb   26129044 ns     27343750 ns           16
find     tbb     24 256 mb    9476400 ns      9765625 ns           16
find     tbb noe 24 256 mb    9504662 ns     10742188 ns           16

scan avx         06 256 mb  172669994 ns    171875000 ns           16
scan avx     noe 06 256 mb  172675762 ns    171875000 ns           16
scan avx tbb     06 256 mb   33280937 ns     32226562 ns           16
scan avx tbb noe 06 256 mb   32837019 ns     32226562 ns           16
scan             06 256 mb  172464956 ns    172851562 ns           16
scan         noe 06 256 mb  172322981 ns    172851562 ns           16
scan     tbb     06 256 mb   33015456 ns     32226562 ns           16
scan     tbb noe 06 256 mb   33006731 ns     31250000 ns           16
scan avx         12 256 mb  172611381 ns    175781250 ns           16
scan avx     noe 12 256 mb  172899406 ns    173828125 ns           16
scan avx tbb     12 256 mb   32867413 ns     34179688 ns           16
scan avx tbb noe 12 256 mb   32999575 ns     31250000 ns           16
scan             12 256 mb  172639550 ns    171875000 ns           16
scan         noe 12 256 mb  172452175 ns    172851562 ns           16
scan     tbb     12 256 mb   32806500 ns     31250000 ns           16
scan     tbb noe 12 256 mb   33123437 ns     32226562 ns           16
scan avx         24 256 mb  172395144 ns    172851562 ns           16
scan avx     noe 24 256 mb  172454431 ns    172851562 ns           16
scan avx tbb     24 256 mb   33109644 ns     32226562 ns           16
scan avx tbb noe 24 256 mb   32772762 ns     30273438 ns           16
scan             24 256 mb  172463912 ns    172851562 ns           16
scan         noe 24 256 mb  172417281 ns    172851562 ns           16
scan     tbb     24 256 mb   33149156 ns     30273438 ns           16
scan     tbb noe 24 256 mb   32972706 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   26828000 ns     27343750 ns            8
find avx     noe 06 512 mb   26769613 ns     27343750 ns            8
find avx tbb     06 512 mb   18521062 ns     19531250 ns            8
find avx tbb noe 06 512 mb   18517125 ns     17578125 ns            8
find             06 512 mb  193238162 ns    189453125 ns            8
find         noe 06 512 mb  192762338 ns    193359375 ns            8
find     tbb     06 512 mb   21320362 ns     23437500 ns            8
find     tbb noe 06 512 mb   21628925 ns     19531250 ns            8
find avx         12 512 mb   26702537 ns     27343750 ns            8
find avx     noe 12 512 mb   26802862 ns     27343750 ns            8
find avx tbb     12 512 mb   18511700 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18509150 ns     19531250 ns            8
find             12 512 mb   98079525 ns     99609375 ns            8
find         noe 12 512 mb   98096650 ns     99609375 ns            8
find     tbb     12 512 mb   19263575 ns     19531250 ns            8
find     tbb noe 12 512 mb   19200400 ns     19531250 ns            8
find avx         24 512 mb   31185363 ns     27343750 ns            8
find avx     noe 24 512 mb   28368663 ns     29296875 ns            8
find avx tbb     24 512 mb   18589100 ns     19531250 ns            8
find avx tbb noe 24 512 mb   18614862 ns     21484375 ns            8
find             24 512 mb   52077662 ns     52734375 ns            8
find         noe 24 512 mb   52197725 ns     50781250 ns            8
find     tbb     24 512 mb   18844325 ns     17578125 ns            8
find     tbb noe 24 512 mb   18847787 ns     17578125 ns            8

scan avx         06 512 mb  344890463 ns    343750000 ns            8
scan avx     noe 06 512 mb  344835863 ns    345703125 ns            8
scan avx tbb     06 512 mb   67021163 ns     60546875 ns            8
scan avx tbb noe 06 512 mb   65886613 ns     62500000 ns            8
scan             06 512 mb  344843750 ns    345703125 ns            8
scan         noe 06 512 mb  344879087 ns    345703125 ns            8
scan     tbb     06 512 mb   66639675 ns     62500000 ns            8
scan     tbb noe 06 512 mb   66102075 ns     62500000 ns            8
scan avx         12 512 mb  344986563 ns    345703125 ns            8
scan avx     noe 12 512 mb  346480825 ns    347656250 ns            8
scan avx tbb     12 512 mb   66265087 ns     60546875 ns            8
scan avx tbb noe 12 512 mb   66435437 ns     58593750 ns            8
scan             12 512 mb  344924612 ns    343750000 ns            8
scan         noe 12 512 mb  344768937 ns    345703125 ns            8
scan     tbb     12 512 mb   66137750 ns     60546875 ns            8
scan     tbb noe 12 512 mb   66454988 ns     54687500 ns            8
scan avx         24 512 mb  345594575 ns    343750000 ns            8
scan avx     noe 24 512 mb  345316513 ns    343750000 ns            8
scan avx tbb     24 512 mb   67368400 ns     56640625 ns            8
scan avx tbb noe 24 512 mb   66469100 ns     62500000 ns            8
scan             24 512 mb  344889838 ns    345703125 ns            8
scan         noe 24 512 mb  344699200 ns    343750000 ns            8
scan     tbb     24 512 mb   65986762 ns     58593750 ns            8
scan     tbb noe 24 512 mb   65684900 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     54197175 ns     52734375 ns            8
find avx     noe 06 1 gb     54388075 ns     54687500 ns            8
find avx tbb     06 1 gb     36906475 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36924487 ns     35156250 ns            8
find             06 1 gb    385680075 ns    384765625 ns            8
find         noe 06 1 gb    385357900 ns    386718750 ns            8
find     tbb     06 1 gb     42440512 ns     39062500 ns            8
find     tbb noe 06 1 gb     42407625 ns     41015625 ns            8
find avx         12 1 gb     54337550 ns     56640625 ns            8
find avx     noe 12 1 gb     54436425 ns     54687500 ns            8
find avx tbb     12 1 gb     36990737 ns     37109375 ns            8
find avx tbb noe 12 1 gb     36957950 ns     31250000 ns            8
find             12 1 gb    196609150 ns    199218750 ns            8
find         noe 12 1 gb    196562013 ns    197265625 ns            8
find     tbb     12 1 gb     38297338 ns     33203125 ns            8
find     tbb noe 12 1 gb     38406150 ns     37109375 ns            8
find avx         24 1 gb     63146388 ns     64453125 ns            8
find avx     noe 24 1 gb     57447087 ns     58593750 ns            8
find avx tbb     24 1 gb     37024550 ns     37109375 ns            8
find avx tbb noe 24 1 gb     37057988 ns     35156250 ns            8
find             24 1 gb    105648775 ns    105468750 ns            8
find         noe 24 1 gb    104212925 ns    105468750 ns            8
find     tbb     24 1 gb     37548950 ns     33203125 ns            8
find     tbb noe 24 1 gb     37569337 ns     35156250 ns            8

scan avx         06 1 gb    690476000 ns    689453125 ns            8
scan avx     noe 06 1 gb    690681225 ns    689453125 ns            8
scan avx tbb     06 1 gb    131248550 ns    121093750 ns            8
scan avx tbb noe 06 1 gb    133659200 ns    121093750 ns            8
scan             06 1 gb    689581238 ns    689453125 ns            8
scan         noe 06 1 gb    689560763 ns    691406250 ns            8
scan     tbb     06 1 gb    131768687 ns    125000000 ns            8
scan     tbb noe 06 1 gb    130924925 ns    121093750 ns            8
scan avx         12 1 gb    690570625 ns    691406250 ns            8
scan avx     noe 12 1 gb    690575437 ns    691406250 ns            8
scan avx tbb     12 1 gb    132389450 ns    121093750 ns            8
scan avx tbb noe 12 1 gb    132045650 ns    119140625 ns            8
scan             12 1 gb    691042538 ns    689453125 ns            8
scan         noe 12 1 gb    689576513 ns    689453125 ns            8
scan     tbb     12 1 gb    130311988 ns    123046875 ns            8
scan     tbb noe 12 1 gb    132493550 ns    123046875 ns            8
scan avx         24 1 gb    691274087 ns    689453125 ns            8
scan avx     noe 24 1 gb    690925562 ns    691406250 ns            8
scan avx tbb     24 1 gb    133421600 ns    117187500 ns            8
scan avx tbb noe 24 1 gb    134136212 ns    125000000 ns            8
scan             24 1 gb    689614575 ns    689453125 ns            8
scan         noe 24 1 gb    690296175 ns    691406250 ns            8
scan     tbb     24 1 gb    133505913 ns    121093750 ns            8
scan     tbb noe 24 1 gb    132234138 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    109347325 ns    109375000 ns            8
find avx     noe 06 2 gb    109492262 ns    109375000 ns            8
find avx tbb     06 2 gb     73958738 ns     72265625 ns            8
find avx tbb noe 06 2 gb     73858525 ns     72265625 ns            8
find             06 2 gb    771596938 ns    773437500 ns            8
find         noe 06 2 gb    772271675 ns    771484375 ns            8
find     tbb     06 2 gb     84940038 ns     72265625 ns            8
find     tbb noe 06 2 gb     84762787 ns     76171875 ns            8
find avx         12 2 gb    109446775 ns    109375000 ns            8
find avx     noe 12 2 gb    110178950 ns    109375000 ns            8
find avx tbb     12 2 gb     73821287 ns     72265625 ns            8
find avx tbb noe 12 2 gb     73772600 ns     78125000 ns            8
find             12 2 gb    393299725 ns    394531250 ns            8
find         noe 12 2 gb    393098387 ns    392578125 ns            8
find     tbb     12 2 gb     76488500 ns     70312500 ns            8
find     tbb noe 12 2 gb     76528187 ns     76171875 ns            8
find avx         24 2 gb    122838087 ns    125000000 ns            8
find avx     noe 24 2 gb    115430875 ns    111328125 ns            8
find avx tbb     24 2 gb     74136288 ns     70312500 ns            8
find avx tbb noe 24 2 gb     74114138 ns     72265625 ns            8
find             24 2 gb    208979300 ns    208984375 ns            8
find         noe 24 2 gb    208849688 ns    208984375 ns            8
find     tbb     24 2 gb     74978062 ns     74218750 ns            8
find     tbb noe 24 2 gb     74982125 ns     78125000 ns            8

scan avx         06 2 gb   1381121000 ns   1382812500 ns            8
scan avx     noe 06 2 gb   1381570287 ns   1378906250 ns            8
scan avx tbb     06 2 gb    264968012 ns    240234375 ns            8
scan avx tbb noe 06 2 gb    265285162 ns    240234375 ns            8
scan             06 2 gb   1380041287 ns   1380859375 ns            8
scan         noe 06 2 gb   1378844075 ns   1378906250 ns            8
scan     tbb     06 2 gb    265595538 ns    242187500 ns            8
scan     tbb noe 06 2 gb    268502300 ns    234375000 ns            8
scan avx         12 2 gb   1378782113 ns   1378906250 ns            8
scan avx     noe 12 2 gb   1379261113 ns   1378906250 ns            8
scan avx tbb     12 2 gb    264888087 ns    230468750 ns            8
scan avx tbb noe 12 2 gb    266825712 ns    234375000 ns            8
scan             12 2 gb   1379280875 ns   1375000000 ns            8
scan         noe 12 2 gb   1379469600 ns   1380859375 ns            8
scan     tbb     12 2 gb    271385875 ns    246093750 ns            8
scan     tbb noe 12 2 gb    264331737 ns    236328125 ns            8
scan avx         24 2 gb   1378951075 ns   1378906250 ns            8
scan avx     noe 24 2 gb   1380787113 ns   1380859375 ns            8
scan avx tbb     24 2 gb    273177537 ns    234375000 ns            8
scan avx tbb noe 24 2 gb    264537663 ns    250000000 ns            8
scan             24 2 gb   1387033650 ns   1384765625 ns            8
scan         noe 24 2 gb   1379680063 ns   1380859375 ns            8
scan     tbb     24 2 gb    267827900 ns    238281250 ns            8
scan     tbb noe 24 2 gb    267184137 ns    234375000 ns            8
```

</details>

