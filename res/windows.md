# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1628 ns         3815 ns         4096
find avx     noe 06 16 kb        1019 ns        0.000 ns         4096
find avx tbb     06 16 kb         998 ns        0.000 ns         4096
find avx tbb noe 06 16 kb        1022 ns        0.000 ns         4096
find             06 16 kb        7366 ns         7629 ns         4096
find         noe 06 16 kb        7237 ns         7629 ns         4096
find     tbb     06 16 kb        7806 ns         7629 ns         4096
find     tbb noe 06 16 kb        7426 ns        11444 ns         4096
find avx         12 16 kb        1069 ns        0.000 ns         4096
find avx     noe 12 16 kb        1041 ns         3815 ns         4096
find avx tbb     12 16 kb        1123 ns        0.000 ns         4096
find avx tbb noe 12 16 kb        1057 ns        0.000 ns         4096
find             12 16 kb        4206 ns         3815 ns         4096
find         noe 12 16 kb        4224 ns         3815 ns         4096
find     tbb     12 16 kb        7252 ns         7629 ns         4096
find     tbb noe 12 16 kb        7131 ns         7629 ns         4096
find avx         24 16 kb        1153 ns        0.000 ns         4096
find avx     noe 24 16 kb        1174 ns        0.000 ns         4096
find avx tbb     24 16 kb        1134 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1175 ns         3815 ns         4096
find             24 16 kb        2653 ns        0.000 ns         4096
find         noe 24 16 kb        2577 ns         3815 ns         4096
find     tbb     24 16 kb        7010 ns         7629 ns         4096
find     tbb noe 24 16 kb        6882 ns         7629 ns         4096

scan avx         06 16 kb       12000 ns        15259 ns         4096
scan avx     noe 06 16 kb       11081 ns        11444 ns         4096
scan avx tbb     06 16 kb       11079 ns        11444 ns         4096
scan avx tbb noe 06 16 kb       11117 ns         7629 ns         4096
scan             06 16 kb       11064 ns        11444 ns         4096
scan         noe 06 16 kb       11107 ns        11444 ns         4096
scan     tbb     06 16 kb        7524 ns         3815 ns         4096
scan     tbb noe 06 16 kb        7480 ns        11444 ns         4096
scan avx         12 16 kb       11643 ns        11444 ns         4096
scan avx     noe 12 16 kb       11680 ns        11444 ns         4096
scan avx tbb     12 16 kb       11826 ns        15259 ns         4096
scan avx tbb noe 12 16 kb       11213 ns        11444 ns         4096
scan             12 16 kb       11079 ns        11444 ns         4096
scan         noe 12 16 kb       11104 ns        11444 ns         4096
scan     tbb     12 16 kb        7571 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7617 ns        11444 ns         4096
scan avx         24 16 kb       11614 ns        11444 ns         4096
scan avx     noe 24 16 kb       11669 ns         7629 ns         4096
scan avx tbb     24 16 kb       11842 ns        11444 ns         4096
scan avx tbb noe 24 16 kb       11573 ns        11444 ns         4096
scan             24 16 kb       11124 ns        11444 ns         4096
scan         noe 24 16 kb       11069 ns        11444 ns         4096
scan     tbb     24 16 kb        7508 ns         7629 ns         4096
scan     tbb noe 24 16 kb        7462 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2222 ns         3815 ns         4096
find avx     noe 06 64 kb        2238 ns         3815 ns         4096
find avx tbb     06 64 kb        2238 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2162 ns        0.000 ns         4096
find             06 64 kb       27664 ns        30518 ns         4096
find         noe 06 64 kb       27105 ns        26703 ns         4096
find     tbb     06 64 kb       10053 ns        11444 ns         4096
find     tbb noe 06 64 kb        9875 ns         7629 ns         4096
find avx         12 64 kb        2232 ns         3815 ns         4096
find avx     noe 12 64 kb        2229 ns         3815 ns         4096
find avx tbb     12 64 kb        2227 ns        0.000 ns         4096
find avx tbb noe 12 64 kb        2151 ns         3815 ns         4096
find             12 64 kb       14145 ns        15259 ns         4096
find         noe 12 64 kb       14686 ns        15259 ns         4096
find     tbb     12 64 kb        8515 ns        11444 ns         4096
find     tbb noe 12 64 kb        9164 ns         7629 ns         4096
find avx         24 64 kb        2379 ns        0.000 ns         4096
find avx     noe 24 64 kb        2376 ns         3815 ns         4096
find avx tbb     24 64 kb        2375 ns        0.000 ns         4096
find avx tbb noe 24 64 kb        2311 ns         3815 ns         4096
find             24 64 kb        7437 ns         7629 ns         4096
find         noe 24 64 kb        7794 ns        11444 ns         4096
find     tbb     24 64 kb        7813 ns         7629 ns         4096
find     tbb noe 24 64 kb        7586 ns         7629 ns         4096

scan avx         06 64 kb       44603 ns        41962 ns         4096
scan avx     noe 06 64 kb       42614 ns        38147 ns         4096
scan avx tbb     06 64 kb       42628 ns        45776 ns         4096
scan avx tbb noe 06 64 kb       42590 ns        41962 ns         4096
scan             06 64 kb       44482 ns        41962 ns         4096
scan         noe 06 64 kb       42623 ns        38147 ns         4096
scan     tbb     06 64 kb       14210 ns        15259 ns         4096
scan     tbb noe 06 64 kb       14120 ns        15259 ns         4096
scan avx         12 64 kb       43211 ns        45776 ns         4096
scan avx     noe 12 64 kb       42649 ns        45776 ns         4096
scan avx tbb     12 64 kb       43249 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       43910 ns        41962 ns         4096
scan             12 64 kb       42583 ns        41962 ns         4096
scan         noe 12 64 kb       42592 ns        45776 ns         4096
scan     tbb     12 64 kb       14123 ns        11444 ns         4096
scan     tbb noe 12 64 kb       14431 ns        15259 ns         4096
scan avx         24 64 kb       45532 ns        41962 ns         4096
scan avx     noe 24 64 kb       44337 ns        41962 ns         4096
scan avx tbb     24 64 kb       42746 ns        45776 ns         4096
scan avx tbb noe 24 64 kb       42611 ns        45776 ns         4096
scan             24 64 kb       42566 ns        41962 ns         4096
scan         noe 24 64 kb       42691 ns        41962 ns         4096
scan     tbb     24 64 kb       14614 ns        11444 ns         4096
scan     tbb noe 24 64 kb       14310 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       7893 ns        0.000 ns         2048
find avx     noe 06 256 kb       7717 ns         7629 ns         2048
find avx tbb     06 256 kb       7522 ns        0.000 ns         2048
find avx tbb noe 06 256 kb       7603 ns         7629 ns         2048
find             06 256 kb     107386 ns        91553 ns         2048
find         noe 06 256 kb     104308 ns       114441 ns         2048
find     tbb     06 256 kb      20867 ns        22888 ns         2048
find     tbb noe 06 256 kb      20709 ns        22888 ns         2048
find avx         12 256 kb       7832 ns         7629 ns         2048
find avx     noe 12 256 kb       7454 ns        0.000 ns         2048
find avx tbb     12 256 kb       7131 ns        0.000 ns         2048
find avx tbb noe 12 256 kb       7171 ns        0.000 ns         2048
find             12 256 kb      53025 ns        61035 ns         2048
find         noe 12 256 kb      53680 ns        53406 ns         2048
find     tbb     12 256 kb      15522 ns        30518 ns         2048
find     tbb noe 12 256 kb      15462 ns        30518 ns         2048
find avx         24 256 kb       8187 ns         7629 ns         2048
find avx     noe 24 256 kb       7884 ns         7629 ns         2048
find avx tbb     24 256 kb       7481 ns         7629 ns         2048
find avx tbb noe 24 256 kb       7559 ns         7629 ns         2048
find             24 256 kb      27378 ns         7629 ns         2048
find         noe 24 256 kb      27391 ns        30518 ns         2048
find     tbb     24 256 kb      12980 ns        15259 ns         2048
find     tbb noe 24 256 kb      12740 ns        22888 ns         2048

scan avx         06 256 kb     170944 ns       167847 ns         2048
scan avx     noe 06 256 kb     172513 ns       175476 ns         2048
scan avx tbb     06 256 kb     168891 ns       167847 ns         2048
scan avx tbb noe 06 256 kb     170103 ns       175476 ns         2048
scan             06 256 kb     171613 ns       175476 ns         2048
scan         noe 06 256 kb     168938 ns       152588 ns         2048
scan     tbb     06 256 kb      41965 ns        45776 ns         2048
scan     tbb noe 06 256 kb      41923 ns        61035 ns         2048
scan avx         12 256 kb     175179 ns       175476 ns         2048
scan avx     noe 12 256 kb     168976 ns       175476 ns         2048
scan avx tbb     12 256 kb     170922 ns       167847 ns         2048
scan avx tbb noe 12 256 kb     170088 ns       175476 ns         2048
scan             12 256 kb     172572 ns       175476 ns         2048
scan         noe 12 256 kb     172465 ns       167847 ns         2048
scan     tbb     12 256 kb      42750 ns        53406 ns         2048
scan     tbb noe 12 256 kb      42257 ns        38147 ns         2048
scan avx         24 256 kb     171156 ns       175476 ns         2048
scan avx     noe 24 256 kb     173132 ns       167847 ns         2048
scan avx tbb     24 256 kb     168924 ns       167847 ns         2048
scan avx tbb noe 24 256 kb     168996 ns       152588 ns         2048
scan             24 256 kb     172521 ns       175476 ns         2048
scan         noe 24 256 kb     172349 ns       175476 ns         2048
scan     tbb     24 256 kb      42113 ns        53406 ns         2048
scan     tbb noe 24 256 kb      42283 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        27941 ns        15259 ns         1024
find avx     noe 06 1 mb        26135 ns        15259 ns         1024
find avx tbb     06 1 mb        19773 ns        0.000 ns         1024
find avx tbb noe 06 1 mb        17696 ns        61035 ns         1024
find             06 1 mb       417993 ns       381470 ns         1024
find         noe 06 1 mb       416880 ns       442505 ns         1024
find     tbb     06 1 mb        55392 ns        61035 ns         1024
find     tbb noe 06 1 mb        53125 ns        61035 ns         1024
find avx         12 1 mb        27784 ns        30518 ns         1024
find avx     noe 12 1 mb        25891 ns        45776 ns         1024
find avx tbb     12 1 mb        18300 ns        0.000 ns         1024
find avx tbb noe 12 1 mb        17412 ns        0.000 ns         1024
find             12 1 mb       214366 ns       228882 ns         1024
find         noe 12 1 mb       212831 ns       198364 ns         1024
find     tbb     12 1 mb        32855 ns        45776 ns         1024
find     tbb noe 12 1 mb        32068 ns        61035 ns         1024
find avx         24 1 mb        28949 ns        30518 ns         1024
find avx     noe 24 1 mb        27262 ns        30518 ns         1024
find avx tbb     24 1 mb        18805 ns        30518 ns         1024
find avx tbb noe 24 1 mb        18652 ns        0.000 ns         1024
find             24 1 mb       110213 ns        76294 ns         1024
find         noe 24 1 mb       105862 ns        61035 ns         1024
find     tbb     24 1 mb        22708 ns        15259 ns         1024
find     tbb noe 24 1 mb        23600 ns        15259 ns         1024

scan avx         06 1 mb       685174 ns       671387 ns         1024
scan avx     noe 06 1 mb       680192 ns       671387 ns         1024
scan avx tbb     06 1 mb       146492 ns       122070 ns         1024
scan avx tbb noe 06 1 mb       145008 ns       137329 ns         1024
scan             06 1 mb       679825 ns       656128 ns         1024
scan         noe 06 1 mb       687809 ns       717163 ns         1024
scan     tbb     06 1 mb       145071 ns       122070 ns         1024
scan     tbb noe 06 1 mb       145918 ns       198364 ns         1024
scan avx         12 1 mb       688363 ns       701904 ns         1024
scan avx     noe 12 1 mb       681972 ns       671387 ns         1024
scan avx tbb     12 1 mb       145570 ns       167847 ns         1024
scan avx tbb noe 12 1 mb       144754 ns       152588 ns         1024
scan             12 1 mb       693497 ns       686646 ns         1024
scan         noe 12 1 mb       683317 ns       701904 ns         1024
scan     tbb     12 1 mb       145439 ns       137329 ns         1024
scan     tbb noe 12 1 mb       144786 ns       152588 ns         1024
scan avx         24 1 mb       685638 ns       686646 ns         1024
scan avx     noe 24 1 mb       682400 ns       671387 ns         1024
scan avx tbb     24 1 mb       146044 ns       137329 ns         1024
scan avx tbb noe 24 1 mb       145157 ns       152588 ns         1024
scan             24 1 mb       686212 ns       686646 ns         1024
scan         noe 24 1 mb       674763 ns       701904 ns         1024
scan     tbb     24 1 mb       148294 ns       167847 ns         1024
scan     tbb noe 24 1 mb       145936 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       189393 ns       213623 ns          512
find avx     noe 06 4 mb       186451 ns       122070 ns          512
find avx tbb     06 4 mb       173995 ns       152588 ns          512
find avx tbb noe 06 4 mb       161584 ns       274658 ns          512
find             06 4 mb      1684377 ns      1647949 ns          512
find         noe 06 4 mb      1671688 ns      1617432 ns          512
find     tbb     06 4 mb       239587 ns       274658 ns          512
find     tbb noe 06 4 mb       213369 ns       305176 ns          512
find avx         12 4 mb       189460 ns       305176 ns          512
find avx     noe 12 4 mb       186955 ns       244141 ns          512
find avx tbb     12 4 mb       171567 ns       152588 ns          512
find avx tbb noe 12 4 mb       162213 ns       152588 ns          512
find             12 4 mb       862724 ns       915527 ns          512
find         noe 12 4 mb       872412 ns       823975 ns          512
find     tbb     12 4 mb       199124 ns       244141 ns          512
find     tbb noe 12 4 mb       175280 ns       152588 ns          512
find avx         24 4 mb       197084 ns       244141 ns          512
find avx     noe 24 4 mb       194440 ns       213623 ns          512
find avx tbb     24 4 mb       182756 ns       244141 ns          512
find avx tbb noe 24 4 mb       159339 ns        91553 ns          512
find             24 4 mb       450625 ns       427246 ns          512
find         noe 24 4 mb       444980 ns       488281 ns          512
find     tbb     24 4 mb       199978 ns        61035 ns          512
find     tbb noe 24 4 mb       168739 ns       183105 ns          512

scan avx         06 4 mb      2724831 ns      2716064 ns          512
scan avx     noe 06 4 mb      2727452 ns      2746582 ns          512
scan avx tbb     06 4 mb       599543 ns       640869 ns          512
scan avx tbb noe 06 4 mb       581598 ns       610352 ns          512
scan             06 4 mb      2730356 ns      2807617 ns          512
scan         noe 06 4 mb      2716913 ns      2716064 ns          512
scan     tbb     06 4 mb       600826 ns       579834 ns          512
scan     tbb noe 06 4 mb       581282 ns       579834 ns          512
scan avx         12 4 mb      2735184 ns      2716064 ns          512
scan avx     noe 12 4 mb      2718356 ns      2685547 ns          512
scan avx tbb     12 4 mb       599606 ns       640869 ns          512
scan avx tbb noe 12 4 mb       586003 ns       579834 ns          512
scan             12 4 mb      2714762 ns      2746582 ns          512
scan         noe 12 4 mb      2738967 ns      2746582 ns          512
scan     tbb     12 4 mb       597301 ns       518799 ns          512
scan     tbb noe 12 4 mb       585034 ns       488281 ns          512
scan avx         24 4 mb      2714246 ns      2624512 ns          512
scan avx     noe 24 4 mb      2719383 ns      2655029 ns          512
scan avx tbb     24 4 mb       595107 ns       671387 ns          512
scan avx tbb noe 24 4 mb       581662 ns       579834 ns          512
scan             24 4 mb      2738881 ns      2716064 ns          512
scan         noe 24 4 mb      2712358 ns      2655029 ns          512
scan     tbb     24 4 mb       605403 ns       701904 ns          512
scan     tbb noe 24 4 mb       582030 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      769628 ns       732422 ns           64
find avx     noe 06 16 mb      757798 ns       976562 ns           64
find avx tbb     06 16 mb      636802 ns       488281 ns           64
find avx tbb noe 06 16 mb      637413 ns       976562 ns           64
find             06 16 mb     6882430 ns      7568359 ns           64
find         noe 06 16 mb     6704719 ns      5859375 ns           64
find     tbb     06 16 mb      850766 ns       732422 ns           64
find     tbb noe 06 16 mb      851055 ns       976562 ns           64
find avx         12 16 mb      789319 ns      1220703 ns           64
find avx     noe 12 16 mb      765352 ns       976562 ns           64
find avx tbb     12 16 mb      643563 ns       244141 ns           64
find avx tbb noe 12 16 mb      628273 ns       488281 ns           64
find             12 16 mb     3574312 ns      3417969 ns           64
find         noe 12 16 mb     3416450 ns      2929688 ns           64
find     tbb     12 16 mb      710516 ns       976562 ns           64
find     tbb noe 12 16 mb      716042 ns       732422 ns           64
find avx         24 16 mb      794266 ns       732422 ns           64
find avx     noe 24 16 mb      775422 ns       488281 ns           64
find avx tbb     24 16 mb      647333 ns      1464844 ns           64
find avx tbb noe 24 16 mb      657839 ns       488281 ns           64
find             24 16 mb     1848230 ns      1953125 ns           64
find         noe 24 16 mb     1773027 ns      1464844 ns           64
find     tbb     24 16 mb      684398 ns       244141 ns           64
find     tbb noe 24 16 mb      677036 ns       488281 ns           64

scan avx         06 16 mb    11013672 ns     10498047 ns           64
scan avx     noe 06 16 mb    10985384 ns     11718750 ns           64
scan avx tbb     06 16 mb     2203320 ns      1708984 ns           64
scan avx tbb noe 06 16 mb     2153317 ns      2685547 ns           64
scan             06 16 mb    10957273 ns     10253906 ns           64
scan         noe 06 16 mb    10994480 ns     11474609 ns           64
scan     tbb     06 16 mb     2215533 ns      1953125 ns           64
scan     tbb noe 06 16 mb     2164689 ns      1953125 ns           64
scan avx         12 16 mb    10967070 ns     11474609 ns           64
scan avx     noe 12 16 mb    10889831 ns     10253906 ns           64
scan avx tbb     12 16 mb     2227053 ns      2197266 ns           64
scan avx tbb noe 12 16 mb     2150397 ns      2929688 ns           64
scan             12 16 mb    10973873 ns     11230469 ns           64
scan         noe 12 16 mb    10909889 ns     10986328 ns           64
scan     tbb     12 16 mb     2223617 ns      2929688 ns           64
scan     tbb noe 12 16 mb     2188819 ns      1953125 ns           64
scan avx         24 16 mb    10954103 ns     10986328 ns           64
scan avx     noe 24 16 mb    10899636 ns     10498047 ns           64
scan avx tbb     24 16 mb     2207895 ns      2197266 ns           64
scan avx tbb noe 24 16 mb     2156509 ns      2685547 ns           64
scan             24 16 mb    10981116 ns     10986328 ns           64
scan         noe 24 16 mb    10911141 ns     10986328 ns           64
scan     tbb     24 16 mb     2230191 ns      1953125 ns           64
scan     tbb noe 24 16 mb     2165245 ns      1708984 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3063766 ns       488281 ns           32
find avx     noe 06 64 mb     3071831 ns      6347656 ns           32
find avx tbb     06 64 mb     2376019 ns      2929688 ns           32
find avx tbb noe 06 64 mb     2378678 ns      2929688 ns           32
find             06 64 mb    26874787 ns     30761719 ns           32
find         noe 06 64 mb    26835859 ns     30273438 ns           32
find     tbb     06 64 mb     3019200 ns      7812500 ns           32
find     tbb noe 06 64 mb     2974456 ns      2441406 ns           32
find avx         12 64 mb     3022019 ns        0.000 ns           32
find avx     noe 12 64 mb     3312112 ns      7812500 ns           32
find avx tbb     12 64 mb     2378475 ns      1464844 ns           32
find avx tbb noe 12 64 mb     2379541 ns      2929688 ns           32
find             12 64 mb    13964228 ns     14160156 ns           32
find         noe 12 64 mb    13562397 ns     13671875 ns           32
find     tbb     12 64 mb     2561703 ns      1464844 ns           32
find     tbb noe 12 64 mb     2545484 ns      3417969 ns           32
find avx         24 64 mb     3126469 ns      5859375 ns           32
find avx     noe 24 64 mb     3104316 ns      4882812 ns           32
find avx tbb     24 64 mb     2459166 ns       976562 ns           32
find avx tbb noe 24 64 mb     2386534 ns      1953125 ns           32
find             24 64 mb     7133075 ns      6835938 ns           32
find         noe 24 64 mb     7426203 ns      7324219 ns           32
find     tbb     24 64 mb     2476759 ns      2929688 ns           32
find     tbb noe 24 64 mb     2472681 ns      2441406 ns           32

scan avx         06 64 mb    43625244 ns     44921875 ns           32
scan avx     noe 06 64 mb    43412525 ns     43945312 ns           32
scan avx tbb     06 64 mb     8613556 ns      9277344 ns           32
scan avx tbb noe 06 64 mb     8390319 ns      9277344 ns           32
scan             06 64 mb    43820234 ns     43945312 ns           32
scan         noe 06 64 mb    43421416 ns     44433594 ns           32
scan     tbb     06 64 mb     8632381 ns      9277344 ns           32
scan     tbb noe 06 64 mb     8599369 ns      8789062 ns           32
scan avx         12 64 mb    43658125 ns     44433594 ns           32
scan avx     noe 12 64 mb    43407481 ns     43457031 ns           32
scan avx tbb     12 64 mb     8540525 ns      8789062 ns           32
scan avx tbb noe 12 64 mb     8617728 ns      9765625 ns           32
scan             12 64 mb    43815131 ns     43457031 ns           32
scan         noe 12 64 mb    43420947 ns     43945312 ns           32
scan     tbb     12 64 mb     8552291 ns      8300781 ns           32
scan     tbb noe 12 64 mb     8642144 ns      7324219 ns           32
scan avx         24 64 mb    43750191 ns     43457031 ns           32
scan avx     noe 24 64 mb    43378712 ns     42968750 ns           32
scan avx tbb     24 64 mb     8578284 ns      8300781 ns           32
scan avx tbb noe 24 64 mb     8583359 ns      7324219 ns           32
scan             24 64 mb    43446809 ns     42968750 ns           32
scan         noe 24 64 mb    43352644 ns     43945312 ns           32
scan     tbb     24 64 mb     8604703 ns      8789062 ns           32
scan     tbb noe 24 64 mb     8505331 ns      8789062 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   12484544 ns     13671875 ns           16
find avx     noe 06 256 mb   12027719 ns     13671875 ns           16
find avx tbb     06 256 mb    9355288 ns      8789062 ns           16
find avx tbb noe 06 256 mb    9280563 ns      9765625 ns           16
find             06 256 mb  109828738 ns    111328125 ns           16
find         noe 06 256 mb  107761144 ns    108398438 ns           16
find     tbb     06 256 mb   11513012 ns      3906250 ns           16
find     tbb noe 06 256 mb   11504663 ns     15625000 ns           16
find avx         12 256 mb   12501194 ns     12695312 ns           16
find avx     noe 12 256 mb   12110587 ns     14648438 ns           16
find avx tbb     12 256 mb    9327375 ns      8789062 ns           16
find avx tbb noe 12 256 mb    9297694 ns      9765625 ns           16
find             12 256 mb   55779613 ns     57617188 ns           16
find         noe 12 256 mb   54586719 ns     56640625 ns           16
find     tbb     12 256 mb    9919187 ns      7812500 ns           16
find     tbb noe 12 256 mb    9758694 ns     11718750 ns           16
find avx         24 256 mb   14121613 ns     15625000 ns           16
find avx     noe 24 256 mb   13204619 ns     12695312 ns           16
find avx tbb     24 256 mb    9348981 ns     10742188 ns           16
find avx tbb noe 24 256 mb    9320750 ns      9765625 ns           16
find             24 256 mb   28570919 ns     28320312 ns           16
find         noe 24 256 mb   28794444 ns     26367188 ns           16
find     tbb     24 256 mb    9542038 ns     11718750 ns           16
find     tbb noe 24 256 mb    9476406 ns      8789062 ns           16

scan avx         06 256 mb  173282531 ns    174804688 ns           16
scan avx     noe 06 256 mb  174223006 ns    171875000 ns           16
scan avx tbb     06 256 mb   33366875 ns     31250000 ns           16
scan avx tbb noe 06 256 mb   33395425 ns     30273438 ns           16
scan             06 256 mb  174147700 ns    174804688 ns           16
scan         noe 06 256 mb  174214925 ns    173828125 ns           16
scan     tbb     06 256 mb   33611694 ns     33203125 ns           16
scan     tbb noe 06 256 mb   33064687 ns     30273438 ns           16
scan avx         12 256 mb  174222800 ns    174804688 ns           16
scan avx     noe 12 256 mb  174098506 ns    174804688 ns           16
scan avx tbb     12 256 mb   33035044 ns     31250000 ns           16
scan avx tbb noe 12 256 mb   33167225 ns     32226562 ns           16
scan             12 256 mb  174553800 ns    172851562 ns           16
scan         noe 12 256 mb  174719006 ns    172851562 ns           16
scan     tbb     12 256 mb   33174238 ns     32226562 ns           16
scan     tbb noe 12 256 mb   33243987 ns     31250000 ns           16
scan avx         24 256 mb  173831106 ns    171875000 ns           16
scan avx     noe 24 256 mb  174014862 ns    176757812 ns           16
scan avx tbb     24 256 mb   33465225 ns     31250000 ns           16
scan avx tbb noe 24 256 mb   33290706 ns     32226562 ns           16
scan             24 256 mb  174478331 ns    175781250 ns           16
scan         noe 24 256 mb  173918500 ns    171875000 ns           16
scan     tbb     24 256 mb   33305450 ns     30273438 ns           16
scan     tbb noe 24 256 mb   33279725 ns     31250000 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   24489137 ns     27343750 ns            8
find avx     noe 06 512 mb   24194762 ns     25390625 ns            8
find avx tbb     06 512 mb   18507650 ns     17578125 ns            8
find avx tbb noe 06 512 mb   18759575 ns     15625000 ns            8
find             06 512 mb  214771625 ns    212890625 ns            8
find         noe 06 512 mb  215619575 ns    216796875 ns            8
find     tbb     06 512 mb   22747362 ns     15625000 ns            8
find     tbb noe 06 512 mb   22773825 ns     21484375 ns            8
find avx         12 512 mb   24181812 ns     23437500 ns            8
find avx     noe 12 512 mb   24232525 ns     25390625 ns            8
find avx tbb     12 512 mb   18542013 ns     19531250 ns            8
find avx tbb noe 12 512 mb   18493400 ns     15625000 ns            8
find             12 512 mb  109223587 ns    111328125 ns            8
find         noe 12 512 mb  108896662 ns    109375000 ns            8
find     tbb     12 512 mb   19498200 ns     21484375 ns            8
find     tbb noe 12 512 mb   19531112 ns     17578125 ns            8
find avx         24 512 mb   24852413 ns     23437500 ns            8
find avx     noe 24 512 mb   29525800 ns     29296875 ns            8
find avx tbb     24 512 mb   18560363 ns     15625000 ns            8
find avx tbb noe 24 512 mb   18546125 ns     17578125 ns            8
find             24 512 mb   61192150 ns     60546875 ns            8
find         noe 24 512 mb   59021362 ns     58593750 ns            8
find     tbb     24 512 mb   18899800 ns     17578125 ns            8
find     tbb noe 24 512 mb   18915100 ns     17578125 ns            8

scan avx         06 512 mb  347279625 ns    343750000 ns            8
scan avx     noe 06 512 mb  345669225 ns    343750000 ns            8
scan avx tbb     06 512 mb   67566200 ns     60546875 ns            8
scan avx tbb noe 06 512 mb   65886913 ns     56640625 ns            8
scan             06 512 mb  348255050 ns    349609375 ns            8
scan         noe 06 512 mb  348312863 ns    347656250 ns            8
scan     tbb     06 512 mb   66860587 ns     54687500 ns            8
scan     tbb noe 06 512 mb   67266450 ns     58593750 ns            8
scan avx         12 512 mb  348121088 ns    347656250 ns            8
scan avx     noe 12 512 mb  348227050 ns    347656250 ns            8
scan avx tbb     12 512 mb   67074363 ns     60546875 ns            8
scan avx tbb noe 12 512 mb   67397087 ns     56640625 ns            8
scan             12 512 mb  347665012 ns    347656250 ns            8
scan         noe 12 512 mb  348115063 ns    345703125 ns            8
scan     tbb     12 512 mb   66569650 ns     62500000 ns            8
scan     tbb noe 12 512 mb   67409812 ns     50781250 ns            8
scan avx         24 512 mb  347315300 ns    349609375 ns            8
scan avx     noe 24 512 mb  346817313 ns    347656250 ns            8
scan avx tbb     24 512 mb   67188900 ns     60546875 ns            8
scan avx tbb noe 24 512 mb   67501313 ns     60546875 ns            8
scan             24 512 mb  346169900 ns    345703125 ns            8
scan         noe 24 512 mb  347112688 ns    347656250 ns            8
scan     tbb     24 512 mb   67849675 ns     62500000 ns            8
scan     tbb noe 24 512 mb   65713000 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     48697275 ns     46875000 ns            8
find avx     noe 06 1 gb     53577412 ns     54687500 ns            8
find avx tbb     06 1 gb     36888125 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36897250 ns     37109375 ns            8
find             06 1 gb    431650213 ns    431640625 ns            8
find         noe 06 1 gb    429979625 ns    427734375 ns            8
find     tbb     06 1 gb     46698012 ns     39062500 ns            8
find     tbb noe 06 1 gb     45547313 ns     41015625 ns            8
find avx         12 1 gb     48722887 ns     50781250 ns            8
find avx     noe 12 1 gb     49264375 ns     50781250 ns            8
find avx tbb     12 1 gb     37179525 ns     33203125 ns            8
find avx tbb noe 12 1 gb     36918412 ns     35156250 ns            8
find             12 1 gb    219085875 ns    216796875 ns            8
find         noe 12 1 gb    223829650 ns    224609375 ns            8
find     tbb     12 1 gb     38720338 ns     39062500 ns            8
find     tbb noe 12 1 gb     39207937 ns     35156250 ns            8
find avx         24 1 gb     50204438 ns     48828125 ns            8
find avx     noe 24 1 gb     49788300 ns     46875000 ns            8
find avx tbb     24 1 gb     37678875 ns     37109375 ns            8
find avx tbb noe 24 1 gb     37010925 ns     33203125 ns            8
find             24 1 gb    114318675 ns    111328125 ns            8
find         noe 24 1 gb    118611175 ns    119140625 ns            8
find     tbb     24 1 gb     37625675 ns     37109375 ns            8
find     tbb noe 24 1 gb     38666600 ns     37109375 ns            8

scan avx         06 1 gb    693954025 ns    693359375 ns            8
scan avx     noe 06 1 gb    696002062 ns    695312500 ns            8
scan avx tbb     06 1 gb    136915950 ns    119140625 ns            8
scan avx tbb noe 06 1 gb    133955925 ns    119140625 ns            8
scan             06 1 gb    694605100 ns    695312500 ns            8
scan         noe 06 1 gb    694255875 ns    693359375 ns            8
scan     tbb     06 1 gb    135799250 ns    126953125 ns            8
scan     tbb noe 06 1 gb    132911188 ns    117187500 ns            8
scan avx         12 1 gb    694143963 ns    695312500 ns            8
scan avx     noe 12 1 gb    694499738 ns    695312500 ns            8
scan avx tbb     12 1 gb    133786638 ns    121093750 ns            8
scan avx tbb noe 12 1 gb    133122912 ns    119140625 ns            8
scan             12 1 gb    695495550 ns    697265625 ns            8
scan         noe 12 1 gb    697095250 ns    697265625 ns            8
scan     tbb     12 1 gb    132402212 ns    123046875 ns            8
scan     tbb noe 12 1 gb    133219463 ns    117187500 ns            8
scan avx         24 1 gb    695401100 ns    695312500 ns            8
scan avx     noe 24 1 gb    694117575 ns    695312500 ns            8
scan avx tbb     24 1 gb    132037363 ns    121093750 ns            8
scan avx tbb noe 24 1 gb    135524813 ns    121093750 ns            8
scan             24 1 gb    695457262 ns    695312500 ns            8
scan         noe 24 1 gb    694937588 ns    695312500 ns            8
scan     tbb     24 1 gb    135882412 ns    121093750 ns            8
scan     tbb noe 24 1 gb    131760775 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    102658325 ns    101562500 ns            8
find avx     noe 06 2 gb    106245238 ns    109375000 ns            8
find avx tbb     06 2 gb     73995437 ns     64453125 ns            8
find avx tbb noe 06 2 gb     74728225 ns     66406250 ns            8
find             06 2 gb    853190163 ns    849609375 ns            8
find         noe 06 2 gb    858603213 ns    857421875 ns            8
find     tbb     06 2 gb     91606275 ns     80078125 ns            8
find     tbb noe 06 2 gb     91179750 ns     80078125 ns            8
find avx         12 2 gb    103266750 ns    103515625 ns            8
find avx     noe 12 2 gb     97652137 ns     93750000 ns            8
find avx tbb     12 2 gb     74039062 ns     68359375 ns            8
find avx tbb noe 12 2 gb     73784138 ns     72265625 ns            8
find             12 2 gb    436324637 ns    437500000 ns            8
find         noe 12 2 gb    436623850 ns    433593750 ns            8
find     tbb     12 2 gb     79078413 ns     72265625 ns            8
find     tbb noe 12 2 gb     77307900 ns     68359375 ns            8
find avx         24 2 gb    100400038 ns     97656250 ns            8
find avx     noe 24 2 gb    100441087 ns    101562500 ns            8
find avx tbb     24 2 gb     74393263 ns     68359375 ns            8
find avx tbb noe 24 2 gb     74184475 ns     72265625 ns            8
find             24 2 gb    229545412 ns    228515625 ns            8
find         noe 24 2 gb    229553150 ns    232421875 ns            8
find     tbb     24 2 gb     75175525 ns     70312500 ns            8
find     tbb noe 24 2 gb     77389550 ns     74218750 ns            8

scan avx         06 2 gb   1387532275 ns   1388671875 ns            8
scan avx     noe 06 2 gb   1390735862 ns   1390625000 ns            8
scan avx tbb     06 2 gb    267984838 ns    234375000 ns            8
scan avx tbb noe 06 2 gb    271389138 ns    234375000 ns            8
scan             06 2 gb   1394137913 ns   1394531250 ns            8
scan         noe 06 2 gb   1390409613 ns   1390625000 ns            8
scan     tbb     06 2 gb    266158825 ns    244140625 ns            8
scan     tbb noe 06 2 gb    266017875 ns    240234375 ns            8
scan avx         12 2 gb   1389950888 ns   1388671875 ns            8
scan avx     noe 12 2 gb   1391143238 ns   1384765625 ns            8
scan avx tbb     12 2 gb    267978363 ns    242187500 ns            8
scan avx tbb noe 12 2 gb    271962537 ns    236328125 ns            8
scan             12 2 gb   1396641800 ns   1394531250 ns            8
scan         noe 12 2 gb   1392458925 ns   1394531250 ns            8
scan     tbb     12 2 gb    266470213 ns    236328125 ns            8
scan     tbb noe 12 2 gb    269812175 ns    238281250 ns            8
scan avx         24 2 gb   1393268100 ns   1394531250 ns            8
scan avx     noe 24 2 gb   1393516600 ns   1396484375 ns            8
scan avx tbb     24 2 gb    268027312 ns    236328125 ns            8
scan avx tbb noe 24 2 gb    267477400 ns    250000000 ns            8
scan             24 2 gb   1391493425 ns   1394531250 ns            8
scan         noe 24 2 gb   1392520800 ns   1394531250 ns            8
scan     tbb     24 2 gb    269969100 ns    236328125 ns            8
scan     tbb noe 24 2 gb    261802525 ns    240234375 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        1818 ns        0.000 ns         4096
find avx     noe 06 16 kb        1017 ns        0.000 ns         4096
find avx tbb     06 16 kb        1116 ns         3815 ns         4096
find avx tbb noe 06 16 kb        1016 ns        0.000 ns         4096
find             06 16 kb        6616 ns         3815 ns         4096
find         noe 06 16 kb        6626 ns         3815 ns         4096
find     tbb     06 16 kb        7518 ns         3815 ns         4096
find     tbb noe 06 16 kb        7343 ns        11444 ns         4096
find avx         12 16 kb        1074 ns        0.000 ns         4096
find avx     noe 12 16 kb        1063 ns        0.000 ns         4096
find avx tbb     12 16 kb        1074 ns        0.000 ns         4096
find avx tbb noe 12 16 kb        1064 ns         3815 ns         4096
find             12 16 kb        3879 ns         3815 ns         4096
find         noe 12 16 kb        3791 ns         3815 ns         4096
find     tbb     12 16 kb        7029 ns         7629 ns         4096
find     tbb noe 12 16 kb        6968 ns        11444 ns         4096
find avx         24 16 kb        1303 ns        0.000 ns         4096
find avx     noe 24 16 kb        1272 ns        0.000 ns         4096
find avx tbb     24 16 kb        1281 ns        0.000 ns         4096
find avx tbb noe 24 16 kb        1215 ns         3815 ns         4096
find             24 16 kb        2391 ns         3815 ns         4096
find         noe 24 16 kb        2272 ns         3815 ns         4096
find     tbb     24 16 kb        6843 ns         3815 ns         4096
find     tbb noe 24 16 kb        6838 ns         7629 ns         4096

scan avx         06 16 kb       11761 ns        11444 ns         4096
scan avx     noe 06 16 kb       11252 ns         7629 ns         4096
scan avx tbb     06 16 kb       11730 ns        15259 ns         4096
scan avx tbb noe 06 16 kb       11631 ns        11444 ns         4096
scan             06 16 kb       11026 ns        11444 ns         4096
scan         noe 06 16 kb       11048 ns         7629 ns         4096
scan     tbb     06 16 kb        7482 ns         7629 ns         4096
scan     tbb noe 06 16 kb        7357 ns        11444 ns         4096
scan avx         12 16 kb       11591 ns        11444 ns         4096
scan avx     noe 12 16 kb       11053 ns         3815 ns         4096
scan avx tbb     12 16 kb       11052 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11102 ns        11444 ns         4096
scan             12 16 kb       11085 ns        11444 ns         4096
scan         noe 12 16 kb       11058 ns        11444 ns         4096
scan     tbb     12 16 kb        7205 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7312 ns         3815 ns         4096
scan avx         24 16 kb       11560 ns         7629 ns         4096
scan avx     noe 24 16 kb       11661 ns        15259 ns         4096
scan avx tbb     24 16 kb       11779 ns        11444 ns         4096
scan avx tbb noe 24 16 kb       11114 ns         7629 ns         4096
scan             24 16 kb       11038 ns        11444 ns         4096
scan         noe 24 16 kb       11041 ns        11444 ns         4096
scan     tbb     24 16 kb        7201 ns         3815 ns         4096
scan     tbb noe 24 16 kb        7379 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2615 ns        0.000 ns         4096
find avx     noe 06 64 kb        2342 ns        0.000 ns         4096
find avx tbb     06 64 kb        2597 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2224 ns         3815 ns         4096
find             06 64 kb       25440 ns        26703 ns         4096
find         noe 06 64 kb       24551 ns        22888 ns         4096
find     tbb     06 64 kb       10141 ns        11444 ns         4096
find     tbb noe 06 64 kb        9795 ns         7629 ns         4096
find avx         12 64 kb        2344 ns         3815 ns         4096
find avx     noe 12 64 kb        2315 ns         3815 ns         4096
find avx tbb     12 64 kb        2344 ns        0.000 ns         4096
find avx tbb noe 12 64 kb        2218 ns         3815 ns         4096
find             12 64 kb       13043 ns        15259 ns         4096
find         noe 12 64 kb       13298 ns        15259 ns         4096
find     tbb     12 64 kb        8356 ns         7629 ns         4096
find     tbb noe 12 64 kb        8397 ns        11444 ns         4096
find avx         24 64 kb        2935 ns        0.000 ns         4096
find avx     noe 24 64 kb        2929 ns        0.000 ns         4096
find avx tbb     24 64 kb        2850 ns         7629 ns         4096
find avx tbb noe 24 64 kb        2674 ns        0.000 ns         4096
find             24 64 kb        6668 ns         3815 ns         4096
find         noe 24 64 kb        7025 ns         7629 ns         4096
find     tbb     24 64 kb        7620 ns        11444 ns         4096
find     tbb noe 24 64 kb        7557 ns         7629 ns         4096

scan avx         06 64 kb       44543 ns        45776 ns         4096
scan avx     noe 06 64 kb       42954 ns        45776 ns         4096
scan avx tbb     06 64 kb       44020 ns        41962 ns         4096
scan avx tbb noe 06 64 kb       42597 ns        41962 ns         4096
scan             06 64 kb       42644 ns        45776 ns         4096
scan         noe 06 64 kb       42604 ns        38147 ns         4096
scan     tbb     06 64 kb       13519 ns         7629 ns         4096
scan     tbb noe 06 64 kb       13995 ns         7629 ns         4096
scan avx         12 64 kb       43782 ns        45776 ns         4096
scan avx     noe 12 64 kb       42493 ns        45776 ns         4096
scan avx tbb     12 64 kb       42585 ns        41962 ns         4096
scan avx tbb noe 12 64 kb       42473 ns        41962 ns         4096
scan             12 64 kb       42650 ns        45776 ns         4096
scan         noe 12 64 kb       42833 ns        38147 ns         4096
scan     tbb     12 64 kb       13843 ns        19073 ns         4096
scan     tbb noe 12 64 kb       13913 ns        15259 ns         4096
scan avx         24 64 kb       43467 ns        41962 ns         4096
scan avx     noe 24 64 kb       42573 ns        45776 ns         4096
scan avx tbb     24 64 kb       42534 ns        38147 ns         4096
scan avx tbb noe 24 64 kb       42469 ns        38147 ns         4096
scan             24 64 kb       43054 ns        38147 ns         4096
scan         noe 24 64 kb       43998 ns        45776 ns         4096
scan     tbb     24 64 kb       13558 ns        19073 ns         4096
scan     tbb noe 24 64 kb       13795 ns        15259 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8346 ns        15259 ns         2048
find avx     noe 06 256 kb       7639 ns         7629 ns         2048
find avx tbb     06 256 kb       8300 ns        15259 ns         2048
find avx tbb noe 06 256 kb       7869 ns        0.000 ns         2048
find             06 256 kb      95814 ns        91553 ns         2048
find         noe 06 256 kb      94466 ns        83923 ns         2048
find     tbb     06 256 kb      21386 ns        38147 ns         2048
find     tbb noe 06 256 kb      20394 ns        30518 ns         2048
find avx         12 256 kb       8134 ns        0.000 ns         2048
find avx     noe 12 256 kb       7768 ns        0.000 ns         2048
find avx tbb     12 256 kb       7429 ns        15259 ns         2048
find avx tbb noe 12 256 kb       7339 ns         7629 ns         2048
find             12 256 kb      48200 ns        45776 ns         2048
find         noe 12 256 kb      47882 ns        53406 ns         2048
find     tbb     12 256 kb      15135 ns        22888 ns         2048
find     tbb noe 12 256 kb      16085 ns        15259 ns         2048
find avx         24 256 kb       9849 ns         7629 ns         2048
find avx     noe 24 256 kb       9716 ns         7629 ns         2048
find avx tbb     24 256 kb       8981 ns        15259 ns         2048
find avx tbb noe 24 256 kb       9149 ns         7629 ns         2048
find             24 256 kb      26168 ns        30518 ns         2048
find         noe 24 256 kb      24995 ns        22888 ns         2048
find     tbb     24 256 kb      12748 ns        15259 ns         2048
find     tbb noe 24 256 kb      12758 ns        15259 ns         2048

scan avx         06 256 kb     176556 ns       175476 ns         2048
scan avx     noe 06 256 kb     168700 ns       167847 ns         2048
scan avx tbb     06 256 kb     170853 ns       175476 ns         2048
scan avx tbb noe 06 256 kb     170240 ns       167847 ns         2048
scan             06 256 kb     168581 ns       175476 ns         2048
scan         noe 06 256 kb     170524 ns       183105 ns         2048
scan     tbb     06 256 kb      41169 ns        38147 ns         2048
scan     tbb noe 06 256 kb      43447 ns        45776 ns         2048
scan avx         12 256 kb     170765 ns       183105 ns         2048
scan avx     noe 12 256 kb     169468 ns       175476 ns         2048
scan avx tbb     12 256 kb     171730 ns       175476 ns         2048
scan avx tbb noe 12 256 kb     168751 ns       167847 ns         2048
scan             12 256 kb     172447 ns       183105 ns         2048
scan         noe 12 256 kb     169571 ns       175476 ns         2048
scan     tbb     12 256 kb      40829 ns        53406 ns         2048
scan     tbb noe 12 256 kb      41366 ns        53406 ns         2048
scan avx         24 256 kb     173297 ns       167847 ns         2048
scan avx     noe 24 256 kb     170177 ns       175476 ns         2048
scan avx tbb     24 256 kb     168562 ns       175476 ns         2048
scan avx tbb noe 24 256 kb     172588 ns       167847 ns         2048
scan             24 256 kb     169008 ns       160217 ns         2048
scan         noe 24 256 kb     168586 ns       175476 ns         2048
scan     tbb     24 256 kb      42760 ns        61035 ns         2048
scan     tbb noe 24 256 kb      41871 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        31064 ns        30518 ns         1024
find avx     noe 06 1 mb        26891 ns        0.000 ns         1024
find avx tbb     06 1 mb        18553 ns        0.000 ns         1024
find avx tbb noe 06 1 mb        17172 ns        15259 ns         1024
find             06 1 mb       380708 ns       350952 ns         1024
find         noe 06 1 mb       382065 ns       396729 ns         1024
find     tbb     06 1 mb        49466 ns        30518 ns         1024
find     tbb noe 06 1 mb        49395 ns        61035 ns         1024
find avx         12 1 mb        29087 ns        30518 ns         1024
find avx     noe 12 1 mb        26926 ns        15259 ns         1024
find avx tbb     12 1 mb        19087 ns        0.000 ns         1024
find avx tbb noe 12 1 mb        17221 ns        15259 ns         1024
find             12 1 mb       194306 ns       198364 ns         1024
find         noe 12 1 mb       194148 ns       213623 ns         1024
find     tbb     12 1 mb        30894 ns        30518 ns         1024
find     tbb noe 12 1 mb        30208 ns        30518 ns         1024
find avx         24 1 mb        35889 ns        15259 ns         1024
find avx     noe 24 1 mb        35027 ns        30518 ns         1024
find avx tbb     24 1 mb        19623 ns        15259 ns         1024
find avx tbb noe 24 1 mb        18018 ns        30518 ns         1024
find             24 1 mb        99458 ns        91553 ns         1024
find         noe 24 1 mb        96587 ns       137329 ns         1024
find     tbb     24 1 mb        22619 ns        30518 ns         1024
find     tbb noe 24 1 mb        22225 ns        45776 ns         1024

scan avx         06 1 mb       678392 ns       686646 ns         1024
scan avx     noe 06 1 mb       705939 ns       717163 ns         1024
scan avx tbb     06 1 mb       148539 ns       137329 ns         1024
scan avx tbb noe 06 1 mb       158288 ns       167847 ns         1024
scan             06 1 mb       679177 ns       686646 ns         1024
scan         noe 06 1 mb       681092 ns       686646 ns         1024
scan     tbb     06 1 mb       141556 ns       137329 ns         1024
scan     tbb noe 06 1 mb       147820 ns       122070 ns         1024
scan avx         12 1 mb       680609 ns       686646 ns         1024
scan avx     noe 12 1 mb       682650 ns       671387 ns         1024
scan avx tbb     12 1 mb       142491 ns       152588 ns         1024
scan avx tbb noe 12 1 mb       145593 ns       152588 ns         1024
scan             12 1 mb       682940 ns       671387 ns         1024
scan         noe 12 1 mb       680114 ns       656128 ns         1024
scan     tbb     12 1 mb       142489 ns       152588 ns         1024
scan     tbb noe 12 1 mb       144499 ns       122070 ns         1024
scan avx         24 1 mb       683952 ns       686646 ns         1024
scan avx     noe 24 1 mb       681974 ns       701904 ns         1024
scan avx tbb     24 1 mb       141401 ns       122070 ns         1024
scan avx tbb noe 24 1 mb       145107 ns       122070 ns         1024
scan             24 1 mb       686774 ns       701904 ns         1024
scan         noe 24 1 mb       682292 ns       686646 ns         1024
scan     tbb     24 1 mb       143876 ns       167847 ns         1024
scan     tbb noe 24 1 mb       145131 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       192117 ns       122070 ns          512
find avx     noe 06 4 mb       193546 ns       152588 ns          512
find avx tbb     06 4 mb       174677 ns       213623 ns          512
find avx tbb noe 06 4 mb       157844 ns       213623 ns          512
find             06 4 mb      1531348 ns      1586914 ns          512
find         noe 06 4 mb      1513791 ns      1556396 ns          512
find     tbb     06 4 mb       227448 ns       183105 ns          512
find     tbb noe 06 4 mb       200018 ns       213623 ns          512
find avx         12 4 mb       193835 ns       152588 ns          512
find avx     noe 12 4 mb       189254 ns       244141 ns          512
find avx tbb     12 4 mb       175167 ns       183105 ns          512
find avx tbb noe 12 4 mb       162114 ns        91553 ns          512
find             12 4 mb       777905 ns       762939 ns          512
find         noe 12 4 mb       777841 ns       762939 ns          512
find     tbb     12 4 mb       199580 ns       244141 ns          512
find     tbb noe 12 4 mb       173389 ns       183105 ns          512
find avx         24 4 mb       209597 ns       152588 ns          512
find avx     noe 24 4 mb       227031 ns       213623 ns          512
find avx tbb     24 4 mb       181924 ns       274658 ns          512
find avx tbb noe 24 4 mb       161977 ns       152588 ns          512
find             24 4 mb       413386 ns       366211 ns          512
find         noe 24 4 mb       409527 ns       366211 ns          512
find     tbb     24 4 mb       191941 ns       244141 ns          512
find     tbb noe 24 4 mb       172042 ns        30518 ns          512

scan avx         06 4 mb      2751851 ns      2807617 ns          512
scan avx     noe 06 4 mb      2727593 ns      2777100 ns          512
scan avx tbb     06 4 mb       587736 ns       610352 ns          512
scan avx tbb noe 06 4 mb       581979 ns       549316 ns          512
scan             06 4 mb      2736190 ns      2685547 ns          512
scan         noe 06 4 mb      2714481 ns      2746582 ns          512
scan     tbb     06 4 mb       593140 ns       457764 ns          512
scan     tbb noe 06 4 mb       581481 ns       518799 ns          512
scan avx         12 4 mb      2739883 ns      2716064 ns          512
scan avx     noe 12 4 mb      2732767 ns      2716064 ns          512
scan avx tbb     12 4 mb       587476 ns       518799 ns          512
scan avx tbb noe 12 4 mb       588838 ns       579834 ns          512
scan             12 4 mb      2725770 ns      2777100 ns          512
scan         noe 12 4 mb      2742239 ns      2716064 ns          512
scan     tbb     12 4 mb       585103 ns       610352 ns          512
scan     tbb noe 12 4 mb       584972 ns       518799 ns          512
scan avx         24 4 mb      2722918 ns      2746582 ns          512
scan avx     noe 24 4 mb      2715068 ns      2716064 ns          512
scan avx tbb     24 4 mb       588291 ns       488281 ns          512
scan avx tbb noe 24 4 mb       581218 ns       579834 ns          512
scan             24 4 mb      2751274 ns      2685547 ns          512
scan         noe 24 4 mb      2714761 ns      2838135 ns          512
scan     tbb     24 4 mb       590032 ns       579834 ns          512
scan     tbb noe 24 4 mb       582462 ns       488281 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      795647 ns      1220703 ns           64
find avx     noe 06 16 mb      766308 ns       732422 ns           64
find avx tbb     06 16 mb      634050 ns       976562 ns           64
find avx tbb noe 06 16 mb      632480 ns       732422 ns           64
find             06 16 mb     6195291 ns      5615234 ns           64
find         noe 06 16 mb     6035281 ns      5371094 ns           64
find     tbb     06 16 mb      810553 ns       488281 ns           64
find     tbb noe 06 16 mb      807202 ns       732422 ns           64
find avx         12 16 mb      790027 ns       244141 ns           64
find avx     noe 12 16 mb      766177 ns       488281 ns           64
find avx tbb     12 16 mb      641948 ns       488281 ns           64
find avx tbb noe 12 16 mb      634766 ns       976562 ns           64
find             12 16 mb     3151027 ns      2929688 ns           64
find         noe 12 16 mb     3201850 ns      3173828 ns           64
find     tbb     12 16 mb      714631 ns        0.000 ns           64
find     tbb noe 12 16 mb      707581 ns       976562 ns           64
find avx         24 16 mb      865862 ns      1464844 ns           64
find avx     noe 24 16 mb     1017298 ns       976562 ns           64
find avx tbb     24 16 mb      649017 ns       244141 ns           64
find avx tbb noe 24 16 mb      635089 ns       976562 ns           64
find             24 16 mb     1775294 ns      1708984 ns           64
find         noe 24 16 mb     1662875 ns      1953125 ns           64
find     tbb     24 16 mb      687300 ns       732422 ns           64
find     tbb noe 24 16 mb      672939 ns       488281 ns           64

scan avx         06 16 mb    11013147 ns     10742188 ns           64
scan avx     noe 06 16 mb    10818009 ns     10742188 ns           64
scan avx tbb     06 16 mb     2201941 ns      1953125 ns           64
scan avx tbb noe 06 16 mb     2175887 ns      2197266 ns           64
scan             06 16 mb    10945420 ns      9765625 ns           64
scan         noe 06 16 mb    10809133 ns     11474609 ns           64
scan     tbb     06 16 mb     2212200 ns      2441406 ns           64
scan     tbb noe 06 16 mb     2153795 ns      2441406 ns           64
scan avx         12 16 mb    10918958 ns     10986328 ns           64
scan avx     noe 12 16 mb    10823244 ns     11474609 ns           64
scan avx tbb     12 16 mb     2199906 ns      2197266 ns           64
scan avx tbb noe 12 16 mb     2182338 ns      2685547 ns           64
scan             12 16 mb    10952486 ns     11718750 ns           64
scan         noe 12 16 mb    10802653 ns     10498047 ns           64
scan     tbb     12 16 mb     2230233 ns      1708984 ns           64
scan     tbb noe 12 16 mb     2177928 ns      1708984 ns           64
scan avx         24 16 mb    10947712 ns     10253906 ns           64
scan avx     noe 24 16 mb    10814466 ns     10986328 ns           64
scan avx tbb     24 16 mb     2214334 ns      1953125 ns           64
scan avx tbb noe 24 16 mb     2178748 ns      1953125 ns           64
scan             24 16 mb    11030105 ns     10253906 ns           64
scan         noe 24 16 mb    10818122 ns     11230469 ns           64
scan     tbb     24 16 mb     2196934 ns      2197266 ns           64
scan     tbb noe 24 16 mb     2176331 ns      1953125 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3079734 ns      7812500 ns           32
find avx     noe 06 64 mb     3134994 ns       488281 ns           32
find avx tbb     06 64 mb     2372316 ns      1953125 ns           32
find avx tbb noe 06 64 mb     2401375 ns      2929688 ns           32
find             06 64 mb    24486713 ns     23925781 ns           32
find         noe 06 64 mb    24322791 ns     23437500 ns           32
find     tbb     06 64 mb     2805384 ns      4882812 ns           32
find     tbb noe 06 64 mb     2852475 ns       976562 ns           32
find avx         12 64 mb     3094241 ns      6835938 ns           32
find avx     noe 12 64 mb     3074684 ns        0.000 ns           32
find avx tbb     12 64 mb     2384300 ns      2929688 ns           32
find avx tbb noe 12 64 mb     2424100 ns      1953125 ns           32
find             12 64 mb    12260006 ns     12207031 ns           32
find         noe 12 64 mb    12522275 ns     12207031 ns           32
find     tbb     12 64 mb     2536319 ns      1953125 ns           32
find     tbb noe 12 64 mb     2526953 ns      2929688 ns           32
find avx         24 64 mb     3542969 ns      6347656 ns           32
find avx     noe 24 64 mb     3680359 ns      3417969 ns           32
find avx tbb     24 64 mb     2404512 ns      1953125 ns           32
find avx tbb noe 24 64 mb     2405737 ns      2441406 ns           32
find             24 64 mb     6671137 ns      6835938 ns           32
find         noe 24 64 mb     6568087 ns      6835938 ns           32
find     tbb     24 64 mb     2464247 ns      1953125 ns           32
find     tbb noe 24 64 mb     2487872 ns      1953125 ns           32

scan avx         06 64 mb    43361903 ns     43457031 ns           32
scan avx     noe 06 64 mb    43589097 ns     44921875 ns           32
scan avx tbb     06 64 mb     8617316 ns      8300781 ns           32
scan avx tbb noe 06 64 mb     8604884 ns      8300781 ns           32
scan             06 64 mb    43305234 ns     43945312 ns           32
scan         noe 06 64 mb    43563181 ns     44433594 ns           32
scan     tbb     06 64 mb     8564728 ns      7812500 ns           32
scan     tbb noe 06 64 mb     8702350 ns      8300781 ns           32
scan avx         12 64 mb    43610816 ns     43945312 ns           32
scan avx     noe 12 64 mb    43331559 ns     42968750 ns           32
scan avx tbb     12 64 mb     8413566 ns      7812500 ns           32
scan avx tbb noe 12 64 mb     8567216 ns      7812500 ns           32
scan             12 64 mb    43635853 ns     44921875 ns           32
scan         noe 12 64 mb    43198406 ns     44433594 ns           32
scan     tbb     12 64 mb     8514291 ns      7812500 ns           32
scan     tbb noe 12 64 mb     8515647 ns      8300781 ns           32
scan avx         24 64 mb    43893909 ns     43945312 ns           32
scan avx     noe 24 64 mb    43429447 ns     41503906 ns           32
scan avx tbb     24 64 mb     8687266 ns      8789062 ns           32
scan avx tbb noe 24 64 mb     8577441 ns      7324219 ns           32
scan             24 64 mb    43557663 ns     42480469 ns           32
scan         noe 24 64 mb    43361997 ns     43945312 ns           32
scan     tbb     24 64 mb     8461888 ns      7324219 ns           32
scan     tbb noe 24 64 mb     8579512 ns      9277344 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   12298700 ns     12695312 ns           16
find avx     noe 06 256 mb   13069144 ns     11718750 ns           16
find avx tbb     06 256 mb    9313650 ns      9765625 ns           16
find avx tbb noe 06 256 mb    9384281 ns      9765625 ns           16
find             06 256 mb   97516850 ns     95703125 ns           16
find         noe 06 256 mb   97562663 ns     97656250 ns           16
find     tbb     06 256 mb   10882056 ns     14648438 ns           16
find     tbb noe 06 256 mb   10881888 ns     14648438 ns           16
find avx         12 256 mb   13470831 ns     14648438 ns           16
find avx     noe 12 256 mb   12274838 ns     11718750 ns           16
find avx tbb     12 256 mb    9395706 ns      9765625 ns           16
find avx tbb noe 12 256 mb    9283150 ns      8789062 ns           16
find             12 256 mb   49393575 ns     49804688 ns           16
find         noe 12 256 mb   49487075 ns     49804688 ns           16
find     tbb     12 256 mb    9681694 ns      6835938 ns           16
find     tbb noe 12 256 mb    9713562 ns      5859375 ns           16
find avx         24 256 mb   13402337 ns     12695312 ns           16
find avx     noe 24 256 mb   14730456 ns     14648438 ns           16
find avx tbb     24 256 mb    9964350 ns      9765625 ns           16
find avx tbb noe 24 256 mb    9349375 ns      8789062 ns           16
find             24 256 mb   26316650 ns     26367188 ns           16
find         noe 24 256 mb   26260144 ns     24414062 ns           16
find     tbb     24 256 mb    9484275 ns     10742188 ns           16
find     tbb noe 24 256 mb    9476981 ns      6835938 ns           16

scan avx         06 256 mb  173911025 ns    174804688 ns           16
scan avx     noe 06 256 mb  174127450 ns    176757812 ns           16
scan avx tbb     06 256 mb   32982962 ns     31250000 ns           16
scan avx tbb noe 06 256 mb   34072362 ns     33203125 ns           16
scan             06 256 mb  173929025 ns    175781250 ns           16
scan         noe 06 256 mb  174101662 ns    173828125 ns           16
scan     tbb     06 256 mb   33259819 ns     31250000 ns           16
scan     tbb noe 06 256 mb   33387512 ns     33203125 ns           16
scan avx         12 256 mb  174290725 ns    172851562 ns           16
scan avx     noe 12 256 mb  174175981 ns    175781250 ns           16
scan avx tbb     12 256 mb   33015425 ns     31250000 ns           16
scan avx tbb noe 12 256 mb   33468069 ns     30273438 ns           16
scan             12 256 mb  173963231 ns    172851562 ns           16
scan         noe 12 256 mb  174123131 ns    175781250 ns           16
scan     tbb     12 256 mb   33089019 ns     32226562 ns           16
scan     tbb noe 12 256 mb   33401600 ns     32226562 ns           16
scan avx         24 256 mb  174286550 ns    173828125 ns           16
scan avx     noe 24 256 mb  174528925 ns    171875000 ns           16
scan avx tbb     24 256 mb   33080119 ns     30273438 ns           16
scan avx tbb noe 24 256 mb   33520556 ns     29296875 ns           16
scan             24 256 mb  173219700 ns    172851562 ns           16
scan         noe 24 256 mb  173937181 ns    171875000 ns           16
scan     tbb     24 256 mb   33474856 ns     30273438 ns           16
scan     tbb noe 24 256 mb   33511688 ns     30273438 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   24573975 ns     25390625 ns            8
find avx     noe 06 512 mb   24848663 ns     23437500 ns            8
find avx tbb     06 512 mb   18673575 ns     13671875 ns            8
find avx tbb noe 06 512 mb   18536938 ns     19531250 ns            8
find             06 512 mb  192987437 ns    197265625 ns            8
find         noe 06 512 mb  192831338 ns    197265625 ns            8
find     tbb     06 512 mb   21359950 ns     29296875 ns            8
find     tbb noe 06 512 mb   21370263 ns     15625000 ns            8
find avx         12 512 mb   25107038 ns     27343750 ns            8
find avx     noe 12 512 mb   26978650 ns     25390625 ns            8
find avx tbb     12 512 mb   18497112 ns     17578125 ns            8
find avx tbb noe 12 512 mb   18572788 ns     19531250 ns            8
find             12 512 mb  100369888 ns     99609375 ns            8
find         noe 12 512 mb  100532888 ns    103515625 ns            8
find     tbb     12 512 mb   19274550 ns     17578125 ns            8
find     tbb noe 12 512 mb   21105425 ns     17578125 ns            8
find avx         24 512 mb   26237150 ns     27343750 ns            8
find avx     noe 24 512 mb   29200688 ns     31250000 ns            8
find avx tbb     24 512 mb   18640625 ns     17578125 ns            8
find avx tbb noe 24 512 mb   18606225 ns     19531250 ns            8
find             24 512 mb   52530600 ns     54687500 ns            8
find         noe 24 512 mb   52600725 ns     48828125 ns            8
find     tbb     24 512 mb   18864675 ns     17578125 ns            8
find     tbb noe 24 512 mb   19275400 ns     17578125 ns            8

scan avx         06 512 mb  347723863 ns    349609375 ns            8
scan avx     noe 06 512 mb  348542538 ns    347656250 ns            8
scan avx tbb     06 512 mb   66400413 ns     56640625 ns            8
scan avx tbb noe 06 512 mb   67226512 ns     58593750 ns            8
scan             06 512 mb  349178200 ns    349609375 ns            8
scan         noe 06 512 mb  347422325 ns    349609375 ns            8
scan     tbb     06 512 mb   68348038 ns     56640625 ns            8
scan     tbb noe 06 512 mb   65919162 ns     60546875 ns            8
scan avx         12 512 mb  347571112 ns    347656250 ns            8
scan avx     noe 12 512 mb  347769950 ns    347656250 ns            8
scan avx tbb     12 512 mb   67218125 ns     62500000 ns            8
scan avx tbb noe 12 512 mb   67336725 ns     60546875 ns            8
scan             12 512 mb  348069275 ns    347656250 ns            8
scan         noe 12 512 mb  347894850 ns    351562500 ns            8
scan     tbb     12 512 mb   65696313 ns     60546875 ns            8
scan     tbb noe 12 512 mb   66220588 ns     54687500 ns            8
scan avx         24 512 mb  347459125 ns    347656250 ns            8
scan avx     noe 24 512 mb  347708813 ns    349609375 ns            8
scan avx tbb     24 512 mb   66249075 ns     64453125 ns            8
scan avx tbb noe 24 512 mb   68655738 ns     58593750 ns            8
scan             24 512 mb  347536800 ns    347656250 ns            8
scan         noe 24 512 mb  348551475 ns    347656250 ns            8
scan     tbb     24 512 mb   66006787 ns     62500000 ns            8
scan     tbb noe 24 512 mb   66718700 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     49413787 ns     46875000 ns            8
find avx     noe 06 1 gb     53884337 ns     50781250 ns            8
find avx tbb     06 1 gb     37117888 ns     37109375 ns            8
find avx tbb noe 06 1 gb     37016900 ns     35156250 ns            8
find             06 1 gb    389338762 ns    390625000 ns            8
find         noe 06 1 gb    387460650 ns    386718750 ns            8
find     tbb     06 1 gb     43395812 ns     39062500 ns            8
find     tbb noe 06 1 gb     42704488 ns     42968750 ns            8
find avx         12 1 gb     50157612 ns     50781250 ns            8
find avx     noe 12 1 gb     49850200 ns     50781250 ns            8
find avx tbb     12 1 gb     37670812 ns     35156250 ns            8
find avx tbb noe 12 1 gb     36954912 ns     35156250 ns            8
find             12 1 gb    201113400 ns    201171875 ns            8
find         noe 12 1 gb    197541175 ns    199218750 ns            8
find     tbb     12 1 gb     38608700 ns     37109375 ns            8
find     tbb noe 12 1 gb     38525300 ns     37109375 ns            8
find avx         24 1 gb     52970000 ns     50781250 ns            8
find avx     noe 24 1 gb     58494737 ns     58593750 ns            8
find avx tbb     24 1 gb     37062900 ns     35156250 ns            8
find avx tbb noe 24 1 gb     37015000 ns     37109375 ns            8
find             24 1 gb    109740587 ns    111328125 ns            8
find         noe 24 1 gb    109097763 ns    109375000 ns            8
find     tbb     24 1 gb     38701550 ns     33203125 ns            8
find     tbb noe 24 1 gb     37793625 ns     29296875 ns            8

scan avx         06 1 gb    695549238 ns    693359375 ns            8
scan avx     noe 06 1 gb    694308438 ns    695312500 ns            8
scan avx tbb     06 1 gb    133380638 ns    119140625 ns            8
scan avx tbb noe 06 1 gb    136787187 ns    123046875 ns            8
scan             06 1 gb    694509688 ns    695312500 ns            8
scan         noe 06 1 gb    693500025 ns    693359375 ns            8
scan     tbb     06 1 gb    131244800 ns    119140625 ns            8
scan     tbb noe 06 1 gb    133036737 ns    123046875 ns            8
scan avx         12 1 gb    694274825 ns    693359375 ns            8
scan avx     noe 12 1 gb    695012550 ns    697265625 ns            8
scan avx tbb     12 1 gb    132634813 ns    121093750 ns            8
scan avx tbb noe 12 1 gb    135004987 ns    121093750 ns            8
scan             12 1 gb    694827737 ns    695312500 ns            8
scan         noe 12 1 gb    694411325 ns    693359375 ns            8
scan     tbb     12 1 gb    132066375 ns    121093750 ns            8
scan     tbb noe 12 1 gb    137188900 ns    121093750 ns            8
scan avx         24 1 gb    694788313 ns    693359375 ns            8
scan avx     noe 24 1 gb    695511200 ns    697265625 ns            8
scan avx tbb     24 1 gb    132902125 ns    123046875 ns            8
scan avx tbb noe 24 1 gb    134866800 ns    121093750 ns            8
scan             24 1 gb    694526812 ns    695312500 ns            8
scan         noe 24 1 gb    694428125 ns    691406250 ns            8
scan     tbb     24 1 gb    132556600 ns    117187500 ns            8
scan     tbb noe 24 1 gb    132472912 ns    123046875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb     99060912 ns    101562500 ns            8
find avx     noe 06 2 gb    108250363 ns    103515625 ns            8
find avx tbb     06 2 gb     74220263 ns     68359375 ns            8
find avx tbb noe 06 2 gb     74024163 ns     70312500 ns            8
find             06 2 gb    776176025 ns    773437500 ns            8
find         noe 06 2 gb    786663062 ns    779296875 ns            8
find     tbb     06 2 gb     85236063 ns     74218750 ns            8
find     tbb noe 06 2 gb     85538625 ns     80078125 ns            8
find avx         12 2 gb    100139612 ns     99609375 ns            8
find avx     noe 12 2 gb     99364150 ns     99609375 ns            8
find avx tbb     12 2 gb     74182050 ns     70312500 ns            8
find avx tbb noe 12 2 gb     75675750 ns     72265625 ns            8
find             12 2 gb    394907050 ns    396484375 ns            8
find         noe 12 2 gb    394041487 ns    392578125 ns            8
find     tbb     12 2 gb     78593738 ns     72265625 ns            8
find     tbb noe 12 2 gb     76670687 ns     72265625 ns            8
find avx         24 2 gb    106441100 ns    105468750 ns            8
find avx     noe 24 2 gb    125842050 ns    125000000 ns            8
find avx tbb     24 2 gb     75651800 ns     66406250 ns            8
find avx tbb noe 24 2 gb     74078250 ns     72265625 ns            8
find             24 2 gb    209888400 ns    212890625 ns            8
find         noe 24 2 gb    210331675 ns    210937500 ns            8
find     tbb     24 2 gb     74925088 ns     70312500 ns            8
find     tbb noe 24 2 gb     75293825 ns     68359375 ns            8

scan avx         06 2 gb   1391023187 ns   1392578125 ns            8
scan avx     noe 06 2 gb   1386723825 ns   1384765625 ns            8
scan avx tbb     06 2 gb    265171625 ns    240234375 ns            8
scan avx tbb noe 06 2 gb    273203875 ns    246093750 ns            8
scan             06 2 gb   1385982738 ns   1382812500 ns            8
scan         noe 06 2 gb   1387082150 ns   1390625000 ns            8
scan     tbb     06 2 gb    262994725 ns    242187500 ns            8
scan     tbb noe 06 2 gb    264774125 ns    238281250 ns            8
scan avx         12 2 gb   1390645862 ns   1390625000 ns            8
scan avx     noe 12 2 gb   1391278512 ns   1390625000 ns            8
scan avx tbb     12 2 gb    267680487 ns    242187500 ns            8
scan avx tbb noe 12 2 gb    269507412 ns    242187500 ns            8
scan             12 2 gb   1392746788 ns   1394531250 ns            8
scan         noe 12 2 gb   1390475075 ns   1390625000 ns            8
scan     tbb     12 2 gb    261995412 ns    246093750 ns            8
scan     tbb noe 12 2 gb    268702650 ns    244140625 ns            8
scan avx         24 2 gb   1391996075 ns   1386718750 ns            8
scan avx     noe 24 2 gb   1390771025 ns   1388671875 ns            8
scan avx tbb     24 2 gb    264610137 ns    244140625 ns            8
scan avx tbb noe 24 2 gb    265411350 ns    230468750 ns            8
scan             24 2 gb   1388440375 ns   1386718750 ns            8
scan         noe 24 2 gb   1387468275 ns   1384765625 ns            8
scan     tbb     24 2 gb    267787588 ns    244140625 ns            8
scan     tbb noe 24 2 gb    268179612 ns    238281250 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 kb        4303 ns         3815 ns         4096
find avx     noe 06 16 kb        1775 ns        0.000 ns         4096
find avx tbb     06 16 kb        1337 ns         3815 ns         4096
find avx tbb noe 06 16 kb        1116 ns        0.000 ns         4096
find             06 16 kb        6637 ns         3815 ns         4096
find         noe 06 16 kb        6605 ns         7629 ns         4096
find     tbb     06 16 kb        7433 ns        11444 ns         4096
find     tbb noe 06 16 kb        7326 ns         3815 ns         4096
find avx         12 16 kb        1063 ns        0.000 ns         4096
find avx     noe 12 16 kb        1084 ns        0.000 ns         4096
find avx tbb     12 16 kb        1068 ns        0.000 ns         4096
find avx tbb noe 12 16 kb        1086 ns        0.000 ns         4096
find             12 16 kb        3866 ns         3815 ns         4096
find         noe 12 16 kb        3794 ns         7629 ns         4096
find     tbb     12 16 kb        6945 ns         7629 ns         4096
find     tbb noe 12 16 kb        6946 ns         7629 ns         4096
find avx         24 16 kb        1309 ns         3815 ns         4096
find avx     noe 24 16 kb        1293 ns        0.000 ns         4096
find avx tbb     24 16 kb        1292 ns         3815 ns         4096
find avx tbb noe 24 16 kb        1302 ns        0.000 ns         4096
find             24 16 kb        2497 ns         3815 ns         4096
find         noe 24 16 kb        2399 ns         3815 ns         4096
find     tbb     24 16 kb        6775 ns         7629 ns         4096
find     tbb noe 24 16 kb        6814 ns         7629 ns         4096

scan avx         06 16 kb       11678 ns        15259 ns         4096
scan avx     noe 06 16 kb       11052 ns        11444 ns         4096
scan avx tbb     06 16 kb       11676 ns        11444 ns         4096
scan avx tbb noe 06 16 kb       11735 ns        11444 ns         4096
scan             06 16 kb       11077 ns         7629 ns         4096
scan         noe 06 16 kb       11152 ns        11444 ns         4096
scan     tbb     06 16 kb        7869 ns        11444 ns         4096
scan     tbb noe 06 16 kb        7141 ns         7629 ns         4096
scan avx         12 16 kb       11477 ns        11444 ns         4096
scan avx     noe 12 16 kb       11162 ns        15259 ns         4096
scan avx tbb     12 16 kb       11073 ns        11444 ns         4096
scan avx tbb noe 12 16 kb       11029 ns        11444 ns         4096
scan             12 16 kb       11039 ns        11444 ns         4096
scan         noe 12 16 kb       11032 ns         7629 ns         4096
scan     tbb     12 16 kb        7327 ns         7629 ns         4096
scan     tbb noe 12 16 kb        7098 ns         7629 ns         4096
scan avx         24 16 kb       11589 ns        11444 ns         4096
scan avx     noe 24 16 kb       11492 ns         7629 ns         4096
scan avx tbb     24 16 kb       11772 ns         7629 ns         4096
scan avx tbb noe 24 16 kb       11286 ns        15259 ns         4096
scan             24 16 kb       11034 ns         7629 ns         4096
scan         noe 24 16 kb       11056 ns        11444 ns         4096
scan     tbb     24 16 kb        7354 ns        0.000 ns         4096
scan     tbb noe 24 16 kb        7122 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 kb        2381 ns         3815 ns         4096
find avx     noe 06 64 kb        2337 ns         3815 ns         4096
find avx tbb     06 64 kb        2349 ns        0.000 ns         4096
find avx tbb noe 06 64 kb        2248 ns         3815 ns         4096
find             06 64 kb       25247 ns        19073 ns         4096
find         noe 06 64 kb       24868 ns        22888 ns         4096
find     tbb     06 64 kb        9780 ns        11444 ns         4096
find     tbb noe 06 64 kb        9929 ns         7629 ns         4096
find avx         12 64 kb        2440 ns        0.000 ns         4096
find avx     noe 12 64 kb        2422 ns         3815 ns         4096
find avx tbb     12 64 kb        2424 ns         3815 ns         4096
find avx tbb noe 12 64 kb        2262 ns         3815 ns         4096
find             12 64 kb       12511 ns        11444 ns         4096
find         noe 12 64 kb       12622 ns        15259 ns         4096
find     tbb     12 64 kb        8143 ns         7629 ns         4096
find     tbb noe 12 64 kb        8252 ns         7629 ns         4096
find avx         24 64 kb        2816 ns         3815 ns         4096
find avx     noe 24 64 kb        2822 ns        0.000 ns         4096
find avx tbb     24 64 kb        2771 ns         3815 ns         4096
find avx tbb noe 24 64 kb        2684 ns         3815 ns         4096
find             24 64 kb        6694 ns         7629 ns         4096
find         noe 24 64 kb        6672 ns         3815 ns         4096
find     tbb     24 64 kb        7654 ns         7629 ns         4096
find     tbb noe 24 64 kb        7553 ns        11444 ns         4096

scan avx         06 64 kb       44917 ns        45776 ns         4096
scan avx     noe 06 64 kb       43036 ns        45776 ns         4096
scan avx tbb     06 64 kb       42630 ns        41962 ns         4096
scan avx tbb noe 06 64 kb       42665 ns        41962 ns         4096
scan             06 64 kb       42524 ns        38147 ns         4096
scan         noe 06 64 kb       42906 ns        41962 ns         4096
scan     tbb     06 64 kb       13933 ns        19073 ns         4096
scan     tbb noe 06 64 kb       13396 ns         7629 ns         4096
scan avx         12 64 kb       44929 ns        41962 ns         4096
scan avx     noe 12 64 kb       43551 ns        41962 ns         4096
scan avx tbb     12 64 kb       42551 ns        38147 ns         4096
scan avx tbb noe 12 64 kb       42543 ns        41962 ns         4096
scan             12 64 kb       42605 ns        41962 ns         4096
scan         noe 12 64 kb       43003 ns        38147 ns         4096
scan     tbb     12 64 kb       14285 ns        11444 ns         4096
scan     tbb noe 12 64 kb       13502 ns        15259 ns         4096
scan avx         24 64 kb       43643 ns        41962 ns         4096
scan avx     noe 24 64 kb       42504 ns        45776 ns         4096
scan avx tbb     24 64 kb       42530 ns        45776 ns         4096
scan avx tbb noe 24 64 kb       42600 ns        38147 ns         4096
scan             24 64 kb       42930 ns        45776 ns         4096
scan         noe 24 64 kb       43970 ns        45776 ns         4096
scan     tbb     24 64 kb       14104 ns        11444 ns         4096
scan     tbb noe 24 64 kb       13720 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 kb       8270 ns         7629 ns         2048
find avx     noe 06 256 kb       7929 ns        0.000 ns         2048
find avx tbb     06 256 kb       7692 ns        0.000 ns         2048
find avx tbb noe 06 256 kb       7601 ns         7629 ns         2048
find             06 256 kb      94455 ns        99182 ns         2048
find         noe 06 256 kb      94617 ns       106812 ns         2048
find     tbb     06 256 kb      20750 ns        15259 ns         2048
find     tbb noe 06 256 kb      20795 ns        22888 ns         2048
find avx         12 256 kb       8071 ns         7629 ns         2048
find avx     noe 12 256 kb       7752 ns        0.000 ns         2048
find avx tbb     12 256 kb       7458 ns         7629 ns         2048
find avx tbb noe 12 256 kb       7808 ns        0.000 ns         2048
find             12 256 kb      49810 ns        53406 ns         2048
find         noe 12 256 kb      48070 ns        45776 ns         2048
find     tbb     12 256 kb      15113 ns        22888 ns         2048
find     tbb noe 12 256 kb      15116 ns        15259 ns         2048
find avx         24 256 kb      10201 ns        15259 ns         2048
find avx     noe 24 256 kb       9298 ns         7629 ns         2048
find avx tbb     24 256 kb       9351 ns        0.000 ns         2048
find avx tbb noe 24 256 kb       9289 ns         7629 ns         2048
find             24 256 kb      24618 ns        30518 ns         2048
find         noe 24 256 kb      24878 ns        22888 ns         2048
find     tbb     24 256 kb      12705 ns        22888 ns         2048
find     tbb noe 24 256 kb      12999 ns        15259 ns         2048

scan avx         06 256 kb     175356 ns       183105 ns         2048
scan avx     noe 06 256 kb     169484 ns       152588 ns         2048
scan avx tbb     06 256 kb     170011 ns       167847 ns         2048
scan avx tbb noe 06 256 kb     171576 ns       160217 ns         2048
scan             06 256 kb     168868 ns       175476 ns         2048
scan         noe 06 256 kb     170642 ns       160217 ns         2048
scan     tbb     06 256 kb      42095 ns        45776 ns         2048
scan     tbb noe 06 256 kb      40725 ns        45776 ns         2048
scan avx         12 256 kb     174083 ns       167847 ns         2048
scan avx     noe 12 256 kb     169509 ns       175476 ns         2048
scan avx tbb     12 256 kb     171521 ns       175476 ns         2048
scan avx tbb noe 12 256 kb     168873 ns       167847 ns         2048
scan             12 256 kb     172343 ns       167847 ns         2048
scan         noe 12 256 kb     168991 ns       175476 ns         2048
scan     tbb     12 256 kb      41740 ns        53406 ns         2048
scan     tbb noe 12 256 kb      41506 ns        38147 ns         2048
scan avx         24 256 kb     173144 ns       175476 ns         2048
scan avx     noe 24 256 kb     174013 ns       167847 ns         2048
scan avx tbb     24 256 kb     171962 ns       175476 ns         2048
scan avx tbb noe 24 256 kb     172857 ns       167847 ns         2048
scan             24 256 kb     169074 ns       167847 ns         2048
scan         noe 24 256 kb     168856 ns       167847 ns         2048
scan     tbb     24 256 kb      43246 ns        61035 ns         2048
scan     tbb noe 24 256 kb      41408 ns        30518 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 mb        29326 ns        30518 ns         1024
find avx     noe 06 1 mb        27123 ns        45776 ns         1024
find avx tbb     06 1 mb        19422 ns        45776 ns         1024
find avx tbb noe 06 1 mb        17771 ns        30518 ns         1024
find             06 1 mb       381040 ns       396729 ns         1024
find         noe 06 1 mb       382387 ns       396729 ns         1024
find     tbb     06 1 mb        50578 ns        61035 ns         1024
find     tbb noe 06 1 mb        49514 ns        45776 ns         1024
find avx         12 1 mb        28892 ns        0.000 ns         1024
find avx     noe 12 1 mb        27167 ns        15259 ns         1024
find avx tbb     12 1 mb        18313 ns        15259 ns         1024
find avx tbb noe 12 1 mb        17226 ns        30518 ns         1024
find             12 1 mb       195090 ns       183105 ns         1024
find         noe 12 1 mb       193616 ns       167847 ns         1024
find     tbb     12 1 mb        31093 ns        15259 ns         1024
find     tbb noe 12 1 mb        30906 ns        15259 ns         1024
find avx         24 1 mb        37551 ns        45776 ns         1024
find avx     noe 24 1 mb        33384 ns        45776 ns         1024
find avx tbb     24 1 mb        18750 ns        30518 ns         1024
find avx tbb noe 24 1 mb        18565 ns        30518 ns         1024
find             24 1 mb        99827 ns       122070 ns         1024
find         noe 24 1 mb        96635 ns        76294 ns         1024
find     tbb     24 1 mb        22404 ns        61035 ns         1024
find     tbb noe 24 1 mb        22017 ns        15259 ns         1024

scan avx         06 1 mb       677689 ns       701904 ns         1024
scan avx     noe 06 1 mb       680067 ns       686646 ns         1024
scan avx tbb     06 1 mb       147349 ns       152588 ns         1024
scan avx tbb noe 06 1 mb       148560 ns       152588 ns         1024
scan             06 1 mb       681697 ns       701904 ns         1024
scan         noe 06 1 mb       680260 ns       701904 ns         1024
scan     tbb     06 1 mb       147224 ns       122070 ns         1024
scan     tbb noe 06 1 mb       143263 ns       137329 ns         1024
scan avx         12 1 mb       678839 ns       686646 ns         1024
scan avx     noe 12 1 mb       679835 ns       671387 ns         1024
scan avx tbb     12 1 mb       147317 ns       183105 ns         1024
scan avx tbb noe 12 1 mb       146690 ns       137329 ns         1024
scan             12 1 mb       689568 ns       671387 ns         1024
scan         noe 12 1 mb       677979 ns       686646 ns         1024
scan     tbb     12 1 mb       146399 ns       152588 ns         1024
scan     tbb noe 12 1 mb       141246 ns       167847 ns         1024
scan avx         24 1 mb       684278 ns       671387 ns         1024
scan avx     noe 24 1 mb       679722 ns       717163 ns         1024
scan avx tbb     24 1 mb       146533 ns       106812 ns         1024
scan avx tbb noe 24 1 mb       145774 ns       167847 ns         1024
scan             24 1 mb       684643 ns       717163 ns         1024
scan         noe 24 1 mb       680671 ns       701904 ns         1024
scan     tbb     24 1 mb       146047 ns       106812 ns         1024
scan     tbb noe 24 1 mb       142327 ns       122070 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 4 mb       192148 ns       274658 ns          512
find avx     noe 06 4 mb       188755 ns       152588 ns          512
find avx tbb     06 4 mb       180902 ns       244141 ns          512
find avx tbb noe 06 4 mb       158194 ns       213623 ns          512
find             06 4 mb      1530593 ns      1617432 ns          512
find         noe 06 4 mb      1509867 ns      1495361 ns          512
find     tbb     06 4 mb       230311 ns       244141 ns          512
find     tbb noe 06 4 mb       201916 ns       122070 ns          512
find avx         12 4 mb       191844 ns       213623 ns          512
find avx     noe 12 4 mb       189721 ns       213623 ns          512
find avx tbb     12 4 mb       178390 ns       183105 ns          512
find avx tbb noe 12 4 mb       161574 ns       152588 ns          512
find             12 4 mb       780727 ns       793457 ns          512
find         noe 12 4 mb       777643 ns       732422 ns          512
find     tbb     12 4 mb       198401 ns       152588 ns          512
find     tbb noe 12 4 mb       175823 ns       183105 ns          512
find avx         24 4 mb       230071 ns       183105 ns          512
find avx     noe 24 4 mb       205916 ns       152588 ns          512
find avx tbb     24 4 mb       181394 ns        91553 ns          512
find avx tbb noe 24 4 mb       163655 ns       152588 ns          512
find             24 4 mb       419636 ns       366211 ns          512
find         noe 24 4 mb       410349 ns       427246 ns          512
find     tbb     24 4 mb       192687 ns       244141 ns          512
find     tbb noe 24 4 mb       170882 ns       183105 ns          512

scan avx         06 4 mb      2720506 ns      2716064 ns          512
scan avx     noe 06 4 mb      2715763 ns      2807617 ns          512
scan avx tbb     06 4 mb       600558 ns       610352 ns          512
scan avx tbb noe 06 4 mb       581743 ns       579834 ns          512
scan             06 4 mb      2734456 ns      2746582 ns          512
scan         noe 06 4 mb      2709459 ns      2593994 ns          512
scan     tbb     06 4 mb       601164 ns       518799 ns          512
scan     tbb noe 06 4 mb       570994 ns       671387 ns          512
scan avx         12 4 mb      2727377 ns      2685547 ns          512
scan avx     noe 12 4 mb      2714531 ns      2685547 ns          512
scan avx tbb     12 4 mb       604457 ns       610352 ns          512
scan avx tbb noe 12 4 mb       589208 ns       549316 ns          512
scan             12 4 mb      2710283 ns      2716064 ns          512
scan         noe 12 4 mb      2704869 ns      2624512 ns          512
scan     tbb     12 4 mb       598432 ns       579834 ns          512
scan     tbb noe 12 4 mb       569653 ns       610352 ns          512
scan avx         24 4 mb      2732004 ns      2655029 ns          512
scan avx     noe 24 4 mb      2711249 ns      2685547 ns          512
scan avx tbb     24 4 mb       607594 ns       579834 ns          512
scan avx tbb noe 24 4 mb       583479 ns       549316 ns          512
scan             24 4 mb      2716927 ns      2624512 ns          512
scan         noe 24 4 mb      2700951 ns      2624512 ns          512
scan     tbb     24 4 mb       596196 ns       610352 ns          512
scan     tbb noe 24 4 mb       575976 ns       610352 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 16 mb      789309 ns       976562 ns           64
find avx     noe 06 16 mb      763319 ns       732422 ns           64
find avx tbb     06 16 mb      649175 ns       244141 ns           64
find avx tbb noe 06 16 mb      633061 ns        0.000 ns           64
find             06 16 mb     6181145 ns      5859375 ns           64
find         noe 06 16 mb     6044094 ns      6103516 ns           64
find     tbb     06 16 mb      800013 ns       732422 ns           64
find     tbb noe 06 16 mb      810353 ns       244141 ns           64
find avx         12 16 mb      776955 ns       976562 ns           64
find avx     noe 12 16 mb      763355 ns       976562 ns           64
find avx tbb     12 16 mb      650539 ns       244141 ns           64
find avx tbb noe 12 16 mb      630855 ns       976562 ns           64
find             12 16 mb     3135461 ns      3173828 ns           64
find         noe 12 16 mb     3093772 ns      2685547 ns           64
find     tbb     12 16 mb      712850 ns       488281 ns           64
find     tbb noe 12 16 mb      707708 ns       976562 ns           64
find avx         24 16 mb      985389 ns      1464844 ns           64
find avx     noe 24 16 mb      829645 ns       732422 ns           64
find avx tbb     24 16 mb      646573 ns       976562 ns           64
find avx tbb noe 24 16 mb      636772 ns        0.000 ns           64
find             24 16 mb     1703259 ns      1953125 ns           64
find         noe 24 16 mb     1707269 ns      1708984 ns           64
find     tbb     24 16 mb      688113 ns       488281 ns           64
find     tbb noe 24 16 mb      673477 ns       732422 ns           64

scan avx         06 16 mb    10907605 ns     11474609 ns           64
scan avx     noe 06 16 mb    10811619 ns     10986328 ns           64
scan avx tbb     06 16 mb     2265420 ns      2685547 ns           64
scan avx tbb noe 06 16 mb     2152891 ns      2441406 ns           64
scan             06 16 mb    10954411 ns     11230469 ns           64
scan         noe 06 16 mb    10792266 ns     10253906 ns           64
scan     tbb     06 16 mb     2247898 ns      2685547 ns           64
scan     tbb noe 06 16 mb     2173331 ns      1708984 ns           64
scan avx         12 16 mb    10893433 ns     11230469 ns           64
scan avx     noe 12 16 mb    10830466 ns     10253906 ns           64
scan avx tbb     12 16 mb     2276700 ns      2685547 ns           64
scan avx tbb noe 12 16 mb     2187220 ns      1953125 ns           64
scan             12 16 mb    11022202 ns     11230469 ns           64
scan         noe 12 16 mb    10799088 ns     10498047 ns           64
scan     tbb     12 16 mb     2231511 ns      1708984 ns           64
scan     tbb noe 12 16 mb     2149134 ns      1708984 ns           64
scan avx         24 16 mb    10937519 ns     11718750 ns           64
scan avx     noe 24 16 mb    10785355 ns     10986328 ns           64
scan avx tbb     24 16 mb     2287506 ns      2441406 ns           64
scan avx tbb noe 24 16 mb     2154037 ns      2685547 ns           64
scan             24 16 mb    10871559 ns     10742188 ns           64
scan         noe 24 16 mb    10777153 ns     10986328 ns           64
scan     tbb     24 16 mb     2239827 ns      1953125 ns           64
scan     tbb noe 24 16 mb     2146652 ns      2441406 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 64 mb     3129869 ns      5859375 ns           32
find avx     noe 06 64 mb     3395578 ns      5371094 ns           32
find avx tbb     06 64 mb     2407975 ns      2441406 ns           32
find avx tbb noe 06 64 mb     2384894 ns      2441406 ns           32
find             06 64 mb    24393491 ns     24902344 ns           32
find         noe 06 64 mb    24734178 ns     24414062 ns           32
find     tbb     06 64 mb     2808875 ns      7324219 ns           32
find     tbb noe 06 64 mb     2805191 ns      3417969 ns           32
find avx         12 64 mb     3200119 ns      2929688 ns           32
find avx     noe 12 64 mb     3058097 ns      2441406 ns           32
find avx tbb     12 64 mb     2387228 ns      1953125 ns           32
find avx tbb noe 12 64 mb     2396856 ns       488281 ns           32
find             12 64 mb    12624953 ns     12207031 ns           32
find         noe 12 64 mb    12455797 ns     12695312 ns           32
find     tbb     12 64 mb     2548987 ns      3417969 ns           32
find     tbb noe 12 64 mb     2533206 ns      2441406 ns           32
find avx         24 64 mb     3764378 ns      2929688 ns           32
find avx     noe 24 64 mb     3331009 ns      2441406 ns           32
find avx tbb     24 64 mb     2399691 ns      1464844 ns           32
find avx tbb noe 24 64 mb     2404375 ns      1953125 ns           32
find             24 64 mb     6655484 ns      7324219 ns           32
find         noe 24 64 mb     6735706 ns      6347656 ns           32
find     tbb     24 64 mb     2454691 ns      2929688 ns           32
find     tbb noe 24 64 mb     2484956 ns      3417969 ns           32

scan avx         06 64 mb    43634122 ns     43945312 ns           32
scan avx     noe 06 64 mb    43627706 ns     43457031 ns           32
scan avx tbb     06 64 mb     8642431 ns      9277344 ns           32
scan avx tbb noe 06 64 mb     8620416 ns      7812500 ns           32
scan             06 64 mb    43162156 ns     42480469 ns           32
scan         noe 06 64 mb    43544684 ns     43945312 ns           32
scan     tbb     06 64 mb     8553756 ns      6835938 ns           32
scan     tbb noe 06 64 mb     8560022 ns      7324219 ns           32
scan avx         12 64 mb    43389781 ns     43945312 ns           32
scan avx     noe 12 64 mb    43573825 ns     41992188 ns           32
scan avx tbb     12 64 mb     8621156 ns      7812500 ns           32
scan avx tbb noe 12 64 mb     8516447 ns      8789062 ns           32
scan             12 64 mb    43365250 ns     43457031 ns           32
scan         noe 12 64 mb    43400472 ns     43457031 ns           32
scan     tbb     12 64 mb     8614347 ns      8300781 ns           32
scan     tbb noe 12 64 mb     8427406 ns      8789062 ns           32
scan avx         24 64 mb    43568325 ns     44433594 ns           32
scan avx     noe 24 64 mb    43305037 ns     43457031 ns           32
scan avx tbb     24 64 mb     8682444 ns      7812500 ns           32
scan avx tbb noe 24 64 mb     8649331 ns      8300781 ns           32
scan             24 64 mb    43789356 ns     44433594 ns           32
scan         noe 24 64 mb    43382081 ns     43457031 ns           32
scan     tbb     24 64 mb     8540053 ns      7812500 ns           32
scan     tbb noe 24 64 mb     8477678 ns      9277344 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 256 mb   12392019 ns      9765625 ns           16
find avx     noe 06 256 mb   12409775 ns     14648438 ns           16
find avx tbb     06 256 mb    9306625 ns     10742188 ns           16
find avx tbb noe 06 256 mb    9331062 ns      9765625 ns           16
find             06 256 mb   96829956 ns     95703125 ns           16
find         noe 06 256 mb   97237906 ns     97656250 ns           16
find     tbb     06 256 mb   10760444 ns     10742188 ns           16
find     tbb noe 06 256 mb   10900081 ns     15625000 ns           16
find avx         12 256 mb   12456381 ns     11718750 ns           16
find avx     noe 12 256 mb   12378800 ns     14648438 ns           16
find avx tbb     12 256 mb    9331081 ns      8789062 ns           16
find avx tbb noe 12 256 mb    9302519 ns      9765625 ns           16
find             12 256 mb   49662138 ns     50781250 ns           16
find         noe 12 256 mb   49811025 ns     49804688 ns           16
find     tbb     12 256 mb    9684150 ns     12695312 ns           16
find     tbb noe 12 256 mb    9865794 ns      9765625 ns           16
find avx         24 256 mb   14898325 ns     14648438 ns           16
find avx     noe 24 256 mb   13984794 ns     13671875 ns           16
find avx tbb     24 256 mb    9385813 ns     11718750 ns           16
find avx tbb noe 24 256 mb    9422588 ns      9765625 ns           16
find             24 256 mb   26593050 ns     25390625 ns           16
find         noe 24 256 mb   26855044 ns     28320312 ns           16
find     tbb     24 256 mb    9469700 ns      8789062 ns           16
find     tbb noe 24 256 mb    9470619 ns      9765625 ns           16

scan avx         06 256 mb  174159144 ns    174804688 ns           16
scan avx     noe 06 256 mb  174520381 ns    174804688 ns           16
scan avx tbb     06 256 mb   33716369 ns     29296875 ns           16
scan avx tbb noe 06 256 mb   33269456 ns     32226562 ns           16
scan             06 256 mb  173598237 ns    172851562 ns           16
scan         noe 06 256 mb  173673250 ns    172851562 ns           16
scan     tbb     06 256 mb   33333156 ns     30273438 ns           16
scan     tbb noe 06 256 mb   33348675 ns     30273438 ns           16
scan avx         12 256 mb  173944581 ns    171875000 ns           16
scan avx     noe 12 256 mb  173784656 ns    174804688 ns           16
scan avx tbb     12 256 mb   33705344 ns     30273438 ns           16
scan avx tbb noe 12 256 mb   32830937 ns     30273438 ns           16
scan             12 256 mb  173806619 ns    173828125 ns           16
scan         noe 12 256 mb  173769025 ns    172851562 ns           16
scan     tbb     12 256 mb   33409656 ns     31250000 ns           16
scan     tbb noe 12 256 mb   33119181 ns     31250000 ns           16
scan avx         24 256 mb  173780619 ns    173828125 ns           16
scan avx     noe 24 256 mb  173799469 ns    173828125 ns           16
scan avx tbb     24 256 mb   33807844 ns     32226562 ns           16
scan avx tbb noe 24 256 mb   33020012 ns     31250000 ns           16
scan             24 256 mb  173476469 ns    174804688 ns           16
scan         noe 24 256 mb  173470294 ns    174804688 ns           16
scan     tbb     24 256 mb   33734644 ns     32226562 ns           16
scan     tbb noe 24 256 mb   32971463 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 512 mb   24447025 ns     23437500 ns            8
find avx     noe 06 512 mb   27118425 ns     25390625 ns            8
find avx tbb     06 512 mb   18571350 ns     19531250 ns            8
find avx tbb noe 06 512 mb   18594313 ns     17578125 ns            8
find             06 512 mb  193740050 ns    195312500 ns            8
find         noe 06 512 mb  193553150 ns    203125000 ns            8
find     tbb     06 512 mb   21415737 ns     29296875 ns            8
find     tbb noe 06 512 mb   21833412 ns     11718750 ns            8
find avx         12 512 mb   24871712 ns     23437500 ns            8
find avx     noe 12 512 mb   24684363 ns     23437500 ns            8
find avx tbb     12 512 mb   18880638 ns     17578125 ns            8
find avx tbb noe 12 512 mb   18562037 ns     17578125 ns            8
find             12 512 mb   99463037 ns    103515625 ns            8
find         noe 12 512 mb   98703587 ns     99609375 ns            8
find     tbb     12 512 mb   19355988 ns     19531250 ns            8
find     tbb noe 12 512 mb   19331762 ns     21484375 ns            8
find avx         24 512 mb   31475737 ns     31250000 ns            8
find avx     noe 24 512 mb   26932512 ns     27343750 ns            8
find avx tbb     24 512 mb   18640125 ns     17578125 ns            8
find avx tbb noe 24 512 mb   18602138 ns     19531250 ns            8
find             24 512 mb   52921050 ns     48828125 ns            8
find         noe 24 512 mb   55116675 ns     50781250 ns            8
find     tbb     24 512 mb   18889575 ns     21484375 ns            8
find     tbb noe 24 512 mb   18870375 ns     19531250 ns            8

scan avx         06 512 mb  347695725 ns    349609375 ns            8
scan avx     noe 06 512 mb  348980025 ns    349609375 ns            8
scan avx tbb     06 512 mb   67297537 ns     58593750 ns            8
scan avx tbb noe 06 512 mb   67220738 ns     62500000 ns            8
scan             06 512 mb  346793837 ns    345703125 ns            8
scan         noe 06 512 mb  346782463 ns    345703125 ns            8
scan     tbb     06 512 mb   66603638 ns     56640625 ns            8
scan     tbb noe 06 512 mb   66083075 ns     60546875 ns            8
scan avx         12 512 mb  348353575 ns    343750000 ns            8
scan avx     noe 12 512 mb  347159000 ns    345703125 ns            8
scan avx tbb     12 512 mb   67641825 ns     62500000 ns            8
scan avx tbb noe 12 512 mb   66869863 ns     60546875 ns            8
scan             12 512 mb  347427538 ns    347656250 ns            8
scan         noe 12 512 mb  348243575 ns    345703125 ns            8
scan     tbb     12 512 mb   65761388 ns     62500000 ns            8
scan     tbb noe 12 512 mb   66427025 ns     54687500 ns            8
scan avx         24 512 mb  347288900 ns    347656250 ns            8
scan avx     noe 24 512 mb  347344300 ns    351562500 ns            8
scan avx tbb     24 512 mb   68369325 ns     58593750 ns            8
scan avx tbb noe 24 512 mb   66625525 ns     56640625 ns            8
scan             24 512 mb  348368850 ns    349609375 ns            8
scan         noe 24 512 mb  349601638 ns    349609375 ns            8
scan     tbb     24 512 mb   67836338 ns     62500000 ns            8
scan     tbb noe 24 512 mb   67181400 ns     62500000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 1 gb     49840237 ns     46875000 ns            8
find avx     noe 06 1 gb     49338875 ns     46875000 ns            8
find avx tbb     06 1 gb     37413488 ns     35156250 ns            8
find avx tbb noe 06 1 gb     36956537 ns     35156250 ns            8
find             06 1 gb    387414200 ns    390625000 ns            8
find         noe 06 1 gb    386681987 ns    388671875 ns            8
find     tbb     06 1 gb     42541162 ns     37109375 ns            8
find     tbb noe 06 1 gb     42655213 ns     46875000 ns            8
find avx         12 1 gb     56883338 ns     56640625 ns            8
find avx     noe 12 1 gb     49892050 ns     48828125 ns            8
find avx tbb     12 1 gb     37733337 ns     33203125 ns            8
find avx tbb noe 12 1 gb     36964238 ns     37109375 ns            8
find             12 1 gb    197304650 ns    193359375 ns            8
find         noe 12 1 gb    201241600 ns    199218750 ns            8
find     tbb     12 1 gb     38408750 ns     35156250 ns            8
find     tbb noe 12 1 gb     39497800 ns     39062500 ns            8
find avx         24 1 gb     61077575 ns     64453125 ns            8
find avx     noe 24 1 gb     59779775 ns     60546875 ns            8
find avx tbb     24 1 gb     38617200 ns     23437500 ns            8
find avx tbb noe 24 1 gb     37274025 ns     35156250 ns            8
find             24 1 gb    110754050 ns    111328125 ns            8
find         noe 24 1 gb    106600275 ns    105468750 ns            8
find     tbb     24 1 gb     37739212 ns     35156250 ns            8
find     tbb noe 24 1 gb     38241700 ns     35156250 ns            8

scan avx         06 1 gb    699129750 ns    699218750 ns            8
scan avx     noe 06 1 gb    695094338 ns    695312500 ns            8
scan avx tbb     06 1 gb    136527775 ns    123046875 ns            8
scan avx tbb noe 06 1 gb    137364500 ns    121093750 ns            8
scan             06 1 gb    701748775 ns    701171875 ns            8
scan         noe 06 1 gb    694595075 ns    695312500 ns            8
scan     tbb     06 1 gb    133222087 ns    119140625 ns            8
scan     tbb noe 06 1 gb    132647700 ns    125000000 ns            8
scan avx         12 1 gb    695120263 ns    697265625 ns            8
scan avx     noe 12 1 gb    695578287 ns    695312500 ns            8
scan avx tbb     12 1 gb    136171663 ns    123046875 ns            8
scan avx tbb noe 12 1 gb    134984713 ns    121093750 ns            8
scan             12 1 gb    693261188 ns    693359375 ns            8
scan         noe 12 1 gb    694649325 ns    691406250 ns            8
scan     tbb     12 1 gb    134476588 ns    119140625 ns            8
scan     tbb noe 12 1 gb    134660162 ns    119140625 ns            8
scan avx         24 1 gb    695635938 ns    695312500 ns            8
scan avx     noe 24 1 gb    695306650 ns    695312500 ns            8
scan avx tbb     24 1 gb    137220750 ns    123046875 ns            8
scan avx tbb noe 24 1 gb    132786450 ns    119140625 ns            8
scan             24 1 gb    702468712 ns    701171875 ns            8
scan         noe 24 1 gb    703958462 ns    705078125 ns            8
scan     tbb     24 1 gb    131495837 ns    117187500 ns            8
scan     tbb noe 24 1 gb    134052200 ns    119140625 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx         06 2 gb    102286312 ns    103515625 ns            8
find avx     noe 06 2 gb    110143200 ns    105468750 ns            8
find avx tbb     06 2 gb     77447637 ns     74218750 ns            8
find avx tbb noe 06 2 gb     74227387 ns     72265625 ns            8
find             06 2 gb    782723687 ns    781250000 ns            8
find         noe 06 2 gb    776691387 ns    781250000 ns            8
find     tbb     06 2 gb     85991162 ns     72265625 ns            8
find     tbb noe 06 2 gb     86844675 ns     72265625 ns            8
find avx         12 2 gb    105285188 ns    105468750 ns            8
find avx     noe 12 2 gb    100058113 ns     99609375 ns            8
find avx tbb     12 2 gb     74257375 ns     66406250 ns            8
find avx tbb noe 12 2 gb     75883013 ns     66406250 ns            8
find             12 2 gb    397225337 ns    392578125 ns            8
find         noe 12 2 gb    401800288 ns    400390625 ns            8
find     tbb     12 2 gb     76707625 ns     72265625 ns            8
find     tbb noe 12 2 gb     77081500 ns     68359375 ns            8
find avx         24 2 gb    119131825 ns    121093750 ns            8
find avx     noe 24 2 gb    107042150 ns    103515625 ns            8
find avx tbb     24 2 gb     74604600 ns     66406250 ns            8
find avx tbb noe 24 2 gb     75669675 ns     72265625 ns            8
find             24 2 gb    209797263 ns    210937500 ns            8
find         noe 24 2 gb    212545200 ns    216796875 ns            8
find     tbb     24 2 gb     75826425 ns     72265625 ns            8
find     tbb noe 24 2 gb     76007763 ns     72265625 ns            8

scan avx         06 2 gb   1407280475 ns   1408203125 ns            8
scan avx     noe 06 2 gb   1393036200 ns   1390625000 ns            8
scan avx tbb     06 2 gb    272543563 ns    238281250 ns            8
scan avx tbb noe 06 2 gb    267412463 ns    234375000 ns            8
scan             06 2 gb   1395482700 ns   1396484375 ns            8
scan         noe 06 2 gb   1390071050 ns   1394531250 ns            8
scan     tbb     06 2 gb    267495650 ns    232421875 ns            8
scan     tbb noe 06 2 gb    265304012 ns    230468750 ns            8
scan avx         12 2 gb   1414548213 ns   1417968750 ns            8
scan avx     noe 12 2 gb   1402631775 ns   1404296875 ns            8
scan avx tbb     12 2 gb    277064612 ns    238281250 ns            8
scan avx tbb noe 12 2 gb    268807900 ns    236328125 ns            8
scan             12 2 gb   1405162862 ns   1408203125 ns            8
scan         noe 12 2 gb   1393347225 ns   1396484375 ns            8
scan     tbb     12 2 gb    267148088 ns    234375000 ns            8
scan     tbb noe 12 2 gb    265407075 ns    238281250 ns            8
scan avx         24 2 gb   1395481750 ns   1392578125 ns            8
scan avx     noe 24 2 gb   1392728612 ns   1390625000 ns            8
scan avx tbb     24 2 gb    273291187 ns    232421875 ns            8
scan avx tbb noe 24 2 gb    272868587 ns    232421875 ns            8
scan             24 2 gb   1392858762 ns   1390625000 ns            8
scan         noe 24 2 gb   1413402588 ns   1412109375 ns            8
scan     tbb     24 2 gb    267403863 ns    236328125 ns            8
scan     tbb noe 24 2 gb    270490550 ns    240234375 ns            8
```

</details>

