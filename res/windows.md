# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1587 ns        0.000 ns         4096
find avx tbb 06 16 kb         975 ns         3815 ns         4096
find         06 16 kb        7228 ns         3815 ns         4096
find     tbb 06 16 kb        7654 ns         7629 ns         4096
find avx     12 16 kb        1023 ns        0.000 ns         4096
find avx tbb 12 16 kb        1016 ns        0.000 ns         4096
find         12 16 kb        4164 ns         7629 ns         4096
find     tbb 12 16 kb        7106 ns         7629 ns         4096
find avx     24 16 kb        1010 ns        0.000 ns         4096
find avx tbb 24 16 kb        1033 ns         3815 ns         4096
find         24 16 kb        2440 ns         3815 ns         4096
find     tbb 24 16 kb        6999 ns         7629 ns         4096

scan avx     06 16 kb       11025 ns        11444 ns         4096
scan avx tbb 06 16 kb       11095 ns        11444 ns         4096
scan         06 16 kb       11057 ns        11444 ns         4096
scan     tbb 06 16 kb        7778 ns         7629 ns         4096
scan avx     12 16 kb       11035 ns        11444 ns         4096
scan avx tbb 12 16 kb       11031 ns        11444 ns         4096
scan         12 16 kb       11035 ns        11444 ns         4096
scan     tbb 12 16 kb        7639 ns         7629 ns         4096
scan avx     24 16 kb       11061 ns        11444 ns         4096
scan avx tbb 24 16 kb       11094 ns        11444 ns         4096
scan         24 16 kb       11103 ns        11444 ns         4096
scan     tbb 24 16 kb        7692 ns         3815 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2123 ns        0.000 ns         4096
find avx tbb 06 64 kb        2129 ns        0.000 ns         4096
find         06 64 kb       26616 ns        26703 ns         4096
find     tbb 06 64 kb        9986 ns        11444 ns         4096
find avx     12 64 kb        2129 ns         3815 ns         4096
find avx tbb 12 64 kb        2128 ns        0.000 ns         4096
find         12 64 kb       14224 ns        15259 ns         4096
find     tbb 12 64 kb        8656 ns        11444 ns         4096
find avx     24 64 kb        2166 ns         3815 ns         4096
find avx tbb 24 64 kb        2215 ns         3815 ns         4096
find         24 64 kb        7396 ns         7629 ns         4096
find     tbb 24 64 kb        7721 ns        11444 ns         4096

scan avx     06 64 kb       42547 ns        45776 ns         4096
scan avx tbb 06 64 kb       43269 ns        41962 ns         4096
scan         06 64 kb       45880 ns        49591 ns         4096
scan     tbb 06 64 kb       14211 ns        11444 ns         4096
scan avx     12 64 kb       42579 ns        38147 ns         4096
scan avx tbb 12 64 kb       43351 ns        45776 ns         4096
scan         12 64 kb       43033 ns        41962 ns         4096
scan     tbb 12 64 kb       14427 ns        11444 ns         4096
scan avx     24 64 kb       43516 ns        41962 ns         4096
scan avx tbb 24 64 kb       42475 ns        45776 ns         4096
scan         24 64 kb       42514 ns        34332 ns         4096
scan     tbb 24 64 kb       14473 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7074 ns        15259 ns         2048
find avx tbb 06 256 kb       7067 ns         7629 ns         2048
find         06 256 kb     104027 ns       106812 ns         2048
find     tbb 06 256 kb      20683 ns        22888 ns         2048
find avx     12 256 kb       7131 ns         7629 ns         2048
find avx tbb 12 256 kb       7135 ns         7629 ns         2048
find         12 256 kb      52946 ns        53406 ns         2048
find     tbb 12 256 kb      15410 ns        0.000 ns         2048
find avx     24 256 kb       7312 ns        15259 ns         2048
find avx tbb 24 256 kb       7467 ns        15259 ns         2048
find         24 256 kb      27559 ns        30518 ns         2048
find     tbb 24 256 kb      12849 ns        15259 ns         2048

scan avx     06 256 kb     168498 ns       167847 ns         2048
scan avx tbb 06 256 kb     181732 ns       190735 ns         2048
scan         06 256 kb     168380 ns       175476 ns         2048
scan     tbb 06 256 kb      42161 ns        38147 ns         2048
scan avx     12 256 kb     168755 ns       160217 ns         2048
scan avx tbb 12 256 kb     168291 ns       175476 ns         2048
scan         12 256 kb     168451 ns       160217 ns         2048
scan     tbb 12 256 kb      42898 ns        53406 ns         2048
scan avx     24 256 kb     168687 ns       175476 ns         2048
scan avx tbb 24 256 kb     169153 ns       175476 ns         2048
scan         24 256 kb     168397 ns       152588 ns         2048
scan     tbb 24 256 kb      41814 ns        30518 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        25631 ns        30518 ns         1024
find avx tbb 06 1 mb        17888 ns        30518 ns         1024
find         06 1 mb       416726 ns       411987 ns         1024
find     tbb 06 1 mb        52537 ns        61035 ns         1024
find avx     12 1 mb        25648 ns        30518 ns         1024
find avx tbb 12 1 mb        18331 ns        30518 ns         1024
find         12 1 mb       213208 ns       228882 ns         1024
find     tbb 12 1 mb        31504 ns        15259 ns         1024
find avx     24 1 mb        26234 ns        30518 ns         1024
find avx tbb 24 1 mb        18835 ns        45776 ns         1024
find         24 1 mb       108203 ns       137329 ns         1024
find     tbb 24 1 mb        22187 ns        30518 ns         1024

scan avx     06 1 mb       671133 ns       656128 ns         1024
scan avx tbb 06 1 mb       145618 ns       183105 ns         1024
scan         06 1 mb       681759 ns       656128 ns         1024
scan     tbb 06 1 mb       144235 ns       122070 ns         1024
scan avx     12 1 mb       674750 ns       686646 ns         1024
scan avx tbb 12 1 mb       145930 ns       137329 ns         1024
scan         12 1 mb       682669 ns       686646 ns         1024
scan     tbb 12 1 mb       144201 ns       137329 ns         1024
scan avx     24 1 mb       682267 ns       701904 ns         1024
scan avx tbb 24 1 mb       145690 ns       106812 ns         1024
scan         24 1 mb       677089 ns       701904 ns         1024
scan     tbb 24 1 mb       145882 ns       152588 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       189555 ns       213623 ns          512
find avx tbb 06 4 mb       178437 ns       152588 ns          512
find         06 4 mb      1676124 ns      1770020 ns          512
find     tbb 06 4 mb       240171 ns       183105 ns          512
find avx     12 4 mb       189427 ns       213623 ns          512
find avx tbb 12 4 mb       176591 ns        91553 ns          512
find         12 4 mb       861838 ns       823975 ns          512
find     tbb 12 4 mb       219302 ns       213623 ns          512
find avx     24 4 mb       198855 ns       152588 ns          512
find avx tbb 24 4 mb       178569 ns       213623 ns          512
find         24 4 mb       455444 ns       488281 ns          512
find     tbb 24 4 mb       192128 ns       122070 ns          512

scan avx     06 4 mb      2703268 ns      2746582 ns          512
scan avx tbb 06 4 mb       596657 ns       579834 ns          512
scan         06 4 mb      2696636 ns      2655029 ns          512
scan     tbb 06 4 mb       594495 ns       579834 ns          512
scan avx     12 4 mb      2709583 ns      2746582 ns          512
scan avx tbb 12 4 mb       596325 ns       457764 ns          512
scan         12 4 mb      2697969 ns      2746582 ns          512
scan     tbb 12 4 mb       596717 ns       701904 ns          512
scan avx     24 4 mb      2693094 ns      2685547 ns          512
scan avx tbb 24 4 mb       595826 ns       518799 ns          512
scan         24 4 mb      2695409 ns      2624512 ns          512
scan     tbb 24 4 mb       598594 ns       335693 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      761747 ns        0.000 ns           64
find avx tbb 06 16 mb      649073 ns      1220703 ns           64
find         06 16 mb     6730484 ns      6835938 ns           64
find     tbb 06 16 mb      860556 ns      1220703 ns           64
find avx     12 16 mb      764612 ns      1464844 ns           64
find avx tbb 12 16 mb      634075 ns       488281 ns           64
find         12 16 mb     3473514 ns      3417969 ns           64
find     tbb 12 16 mb      708491 ns       976562 ns           64
find avx     24 16 mb      835677 ns       976562 ns           64
find avx tbb 24 16 mb      647953 ns       488281 ns           64
find         24 16 mb     1818798 ns      1953125 ns           64
find     tbb 24 16 mb      688083 ns       244141 ns           64

scan avx     06 16 mb    10828991 ns     10986328 ns           64
scan avx tbb 06 16 mb     2202556 ns      2685547 ns           64
scan         06 16 mb    10763461 ns     10742188 ns           64
scan     tbb 06 16 mb     2203102 ns      1708984 ns           64
scan avx     12 16 mb    10780030 ns     10986328 ns           64
scan avx tbb 12 16 mb     2194767 ns      2197266 ns           64
scan         12 16 mb    10785639 ns     11718750 ns           64
scan     tbb 12 16 mb     2194702 ns      2441406 ns           64
scan avx     24 16 mb    10785137 ns     10009766 ns           64
scan avx tbb 24 16 mb     2185911 ns      2197266 ns           64
scan         24 16 mb    10802362 ns     10742188 ns           64
scan     tbb 24 16 mb     2162973 ns      1953125 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3031453 ns      7812500 ns           32
find avx tbb 06 64 mb     2371872 ns      2929688 ns           32
find         06 64 mb    26483281 ns     31250000 ns           32
find     tbb 06 64 mb     2999441 ns      5859375 ns           32
find avx     12 64 mb     2991466 ns      4394531 ns           32
find avx tbb 12 64 mb     2377356 ns      2929688 ns           32
find         12 64 mb    13635528 ns     13183594 ns           32
find     tbb 12 64 mb     2538725 ns      2441406 ns           32
find avx     24 64 mb     3094625 ns        0.000 ns           32
find avx tbb 24 64 mb     2385853 ns      2929688 ns           32
find         24 64 mb     7040034 ns      6835938 ns           32
find     tbb 24 64 mb     2466450 ns      1953125 ns           32

scan avx     06 64 mb    42944156 ns     43945312 ns           32
scan avx tbb 06 64 mb     8433937 ns      7812500 ns           32
scan         06 64 mb    42986991 ns     42968750 ns           32
scan     tbb 06 64 mb     8434616 ns      7812500 ns           32
scan avx     12 64 mb    43065987 ns     42480469 ns           32
scan avx tbb 12 64 mb     8455916 ns      9277344 ns           32
scan         12 64 mb    42929131 ns     44433594 ns           32
scan     tbb 12 64 mb     8491984 ns      8300781 ns           32
scan avx     24 64 mb    43112741 ns     43457031 ns           32
scan avx tbb 24 64 mb     8595491 ns      8300781 ns           32
scan         24 64 mb    42923831 ns     43945312 ns           32
scan     tbb 24 64 mb     8460987 ns      7812500 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   11980231 ns      9765625 ns           16
find avx tbb 06 256 mb    9252894 ns      9765625 ns           16
find         06 256 mb  105989606 ns    106445312 ns           16
find     tbb 06 256 mb   11367513 ns        0.000 ns           16
find avx     12 256 mb   13119819 ns     10742188 ns           16
find avx tbb 12 256 mb    9311019 ns     10742188 ns           16
find         12 256 mb   54038519 ns     53710938 ns           16
find     tbb 12 256 mb    9726075 ns      8789062 ns           16
find avx     24 256 mb   12522344 ns     11718750 ns           16
find avx tbb 24 256 mb    9283244 ns     10742188 ns           16
find         24 256 mb   28153213 ns     27343750 ns           16
find     tbb 24 256 mb    9444912 ns      9765625 ns           16

scan avx     06 256 mb  171972187 ns    171875000 ns           16
scan avx tbb 06 256 mb   34033306 ns     34179688 ns           16
scan         06 256 mb  172005331 ns    171875000 ns           16
scan     tbb 06 256 mb   33850956 ns     32226562 ns           16
scan avx     12 256 mb  172290550 ns    171875000 ns           16
scan avx tbb 12 256 mb   33453063 ns     30273438 ns           16
scan         12 256 mb  171662406 ns    171875000 ns           16
scan     tbb 12 256 mb   33828319 ns     33203125 ns           16
scan avx     24 256 mb  171690619 ns    171875000 ns           16
scan avx tbb 24 256 mb   33524112 ns     33203125 ns           16
scan         24 256 mb  171967275 ns    171875000 ns           16
scan     tbb 24 256 mb   34511287 ns     32226562 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   24074887 ns     27343750 ns            8
find avx tbb 06 512 mb   18433362 ns     19531250 ns            8
find         06 512 mb  212344025 ns    212890625 ns            8
find     tbb 06 512 mb   22530937 ns     19531250 ns            8
find avx     12 512 mb   24030350 ns     25390625 ns            8
find avx tbb 12 512 mb   18412913 ns     19531250 ns            8
find         12 512 mb  109348425 ns    111328125 ns            8
find     tbb 12 512 mb   19290288 ns     17578125 ns            8
find avx     24 512 mb   24680475 ns     21484375 ns            8
find avx tbb 24 512 mb   18452563 ns     17578125 ns            8
find         24 512 mb   56187250 ns     54687500 ns            8
find     tbb 24 512 mb   18772887 ns     19531250 ns            8

scan avx     06 512 mb  343250175 ns    343750000 ns            8
scan avx tbb 06 512 mb   66490113 ns     64453125 ns            8
scan         06 512 mb  343542950 ns    343750000 ns            8
scan     tbb 06 512 mb   66341925 ns     62500000 ns            8
scan avx     12 512 mb  344497663 ns    343750000 ns            8
scan avx tbb 12 512 mb   65940912 ns     60546875 ns            8
scan         12 512 mb  344670462 ns    345703125 ns            8
scan     tbb 12 512 mb   67578850 ns     68359375 ns            8
scan avx     24 512 mb  343596425 ns    343750000 ns            8
scan avx tbb 24 512 mb   67883063 ns     66406250 ns            8
scan         24 512 mb  343208550 ns    341796875 ns            8
scan     tbb 24 512 mb   67205650 ns     60546875 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     48266038 ns     48828125 ns            8
find avx tbb 06 1 gb     36719750 ns     31250000 ns            8
find         06 1 gb    423045375 ns    421875000 ns            8
find     tbb 06 1 gb     45194850 ns     46875000 ns            8
find avx     12 1 gb     48129188 ns     46875000 ns            8
find avx tbb 12 1 gb     36726037 ns     37109375 ns            8
find         12 1 gb    219145937 ns    220703125 ns            8
find     tbb 12 1 gb     38956625 ns     39062500 ns            8
find avx     24 1 gb     49402362 ns     46875000 ns            8
find avx tbb 24 1 gb     36832225 ns     37109375 ns            8
find         24 1 gb    116297375 ns    113281250 ns            8
find     tbb 24 1 gb     37434550 ns     37109375 ns            8

scan avx     06 1 gb    686615550 ns    687500000 ns            8
scan avx tbb 06 1 gb    131855450 ns    128906250 ns            8
scan         06 1 gb    689685200 ns    689453125 ns            8
scan     tbb 06 1 gb    133593975 ns    126953125 ns            8
scan avx     12 1 gb    686026875 ns    687500000 ns            8
scan avx tbb 12 1 gb    131782375 ns    117187500 ns            8
scan         12 1 gb    687439150 ns    687500000 ns            8
scan     tbb 12 1 gb    132190063 ns    121093750 ns            8
scan avx     24 1 gb    706322263 ns    705078125 ns            8
scan avx tbb 24 1 gb    138385850 ns    128906250 ns            8
scan         24 1 gb    691446138 ns    691406250 ns            8
scan     tbb 24 1 gb    139513687 ns    125000000 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    105775787 ns    103515625 ns            8
find avx tbb 06 2 gb     76081075 ns     44921875 ns            8
find         06 2 gb    854232287 ns    857421875 ns            8
find     tbb 06 2 gb     92949175 ns     72265625 ns            8
find avx     12 2 gb    111838063 ns    111328125 ns            8
find avx tbb 12 2 gb     76454400 ns     70312500 ns            8
find         12 2 gb    440121450 ns    441406250 ns            8
find     tbb 12 2 gb     80347700 ns     66406250 ns            8
find avx     24 2 gb    113180075 ns    113281250 ns            8
find avx tbb 24 2 gb     77319788 ns     68359375 ns            8
find         24 2 gb    236020587 ns    236328125 ns            8
find     tbb 24 2 gb     80069812 ns     41015625 ns            8

scan avx     06 2 gb   1396696250 ns   1394531250 ns            8
scan avx tbb 06 2 gb    279388088 ns    208984375 ns            8
scan         06 2 gb   1388547988 ns   1388671875 ns            8
scan     tbb 06 2 gb    278643450 ns    226562500 ns            8
scan avx     12 2 gb   1383489025 ns   1384765625 ns            8
scan avx tbb 12 2 gb    282451925 ns    230468750 ns            8
scan         12 2 gb   1390047087 ns   1386718750 ns            8
scan     tbb 12 2 gb    278635600 ns    248046875 ns            8
scan avx     24 2 gb   1391633750 ns   1392578125 ns            8
scan avx tbb 24 2 gb    279435588 ns    244140625 ns            8
scan         24 2 gb   1396261000 ns   1398437500 ns            8
scan     tbb 24 2 gb    278408762 ns    216796875 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1065 ns        0.000 ns         4096
find avx tbb 06 16 kb        1022 ns        0.000 ns         4096
find         06 16 kb        6639 ns         7629 ns         4096
find     tbb 06 16 kb        8013 ns        11444 ns         4096
find avx     12 16 kb        1004 ns        0.000 ns         4096
find avx tbb 12 16 kb        1020 ns        0.000 ns         4096
find         12 16 kb        3702 ns         3815 ns         4096
find     tbb 12 16 kb        7456 ns         7629 ns         4096
find avx     24 16 kb        1180 ns         3815 ns         4096
find avx tbb 24 16 kb        1172 ns        0.000 ns         4096
find         24 16 kb        2269 ns         3815 ns         4096
find     tbb 24 16 kb        7319 ns         7629 ns         4096

scan avx     06 16 kb       11080 ns        11444 ns         4096
scan avx tbb 06 16 kb       11034 ns         7629 ns         4096
scan         06 16 kb       11157 ns         7629 ns         4096
scan     tbb 06 16 kb        7834 ns         7629 ns         4096
scan avx     12 16 kb       11345 ns        11444 ns         4096
scan avx tbb 12 16 kb       11074 ns        15259 ns         4096
scan         12 16 kb       11039 ns        11444 ns         4096
scan     tbb 12 16 kb        7763 ns         7629 ns         4096
scan avx     24 16 kb       11032 ns         7629 ns         4096
scan avx tbb 24 16 kb       11071 ns        11444 ns         4096
scan         24 16 kb       11036 ns        11444 ns         4096
scan     tbb 24 16 kb        7751 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2237 ns         3815 ns         4096
find avx tbb 06 64 kb        2238 ns         3815 ns         4096
find         06 64 kb       27689 ns        26703 ns         4096
find     tbb 06 64 kb       10701 ns        11444 ns         4096
find avx     12 64 kb        2210 ns        0.000 ns         4096
find avx tbb 12 64 kb        2217 ns        0.000 ns         4096
find         12 64 kb       12519 ns        11444 ns         4096
find     tbb 12 64 kb        9042 ns         7629 ns         4096
find avx     24 64 kb        2685 ns         3815 ns         4096
find avx tbb 24 64 kb        2684 ns        0.000 ns         4096
find         24 64 kb        6674 ns         7629 ns         4096
find     tbb 24 64 kb        8194 ns         7629 ns         4096

scan avx     06 64 kb       42620 ns        41962 ns         4096
scan avx tbb 06 64 kb       42628 ns        41962 ns         4096
scan         06 64 kb       42522 ns        34332 ns         4096
scan     tbb 06 64 kb       15034 ns        19073 ns         4096
scan avx     12 64 kb       48412 ns        49591 ns         4096
scan avx tbb 12 64 kb       42577 ns        45776 ns         4096
scan         12 64 kb       42552 ns        41962 ns         4096
scan     tbb 12 64 kb       15020 ns        15259 ns         4096
scan avx     24 64 kb       42645 ns        41962 ns         4096
scan avx tbb 24 64 kb       42489 ns        41962 ns         4096
scan         24 64 kb       42805 ns        45776 ns         4096
scan     tbb 24 64 kb       14923 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7875 ns        15259 ns         2048
find avx tbb 06 256 kb       7984 ns         7629 ns         2048
find         06 256 kb      97462 ns        99182 ns         2048
find     tbb 06 256 kb      22405 ns        22888 ns         2048
find avx     12 256 kb       7463 ns         7629 ns         2048
find avx tbb 12 256 kb       7483 ns         7629 ns         2048
find         12 256 kb      48165 ns        45776 ns         2048
find     tbb 12 256 kb      17010 ns        30518 ns         2048
find avx     24 256 kb       9268 ns        15259 ns         2048
find avx tbb 24 256 kb       9292 ns         7629 ns         2048
find         24 256 kb      24645 ns        38147 ns         2048
find     tbb 24 256 kb      14468 ns        15259 ns         2048

scan avx     06 256 kb     169718 ns       175476 ns         2048
scan avx tbb 06 256 kb     168917 ns       175476 ns         2048
scan         06 256 kb     169379 ns       167847 ns         2048
scan     tbb 06 256 kb      44936 ns        38147 ns         2048
scan avx     12 256 kb     169062 ns       175476 ns         2048
scan avx tbb 12 256 kb     168676 ns       167847 ns         2048
scan         12 256 kb     168825 ns       167847 ns         2048
scan     tbb 12 256 kb      45884 ns        38147 ns         2048
scan avx     24 256 kb     170468 ns       160217 ns         2048
scan avx tbb 24 256 kb     168825 ns       137329 ns         2048
scan         24 256 kb     169195 ns       167847 ns         2048
scan     tbb 24 256 kb      45084 ns        38147 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        27348 ns        15259 ns         1024
find avx tbb 06 1 mb        21011 ns        15259 ns         1024
find         06 1 mb       385174 ns       396729 ns         1024
find     tbb 06 1 mb        59806 ns        15259 ns         1024
find avx     12 1 mb        29733 ns        0.000 ns         1024
find avx tbb 12 1 mb        20659 ns        30518 ns         1024
find         12 1 mb       204504 ns       228882 ns         1024
find     tbb 12 1 mb        38486 ns        30518 ns         1024
find avx     24 1 mb        36913 ns        15259 ns         1024
find avx tbb 24 1 mb        20500 ns        0.000 ns         1024
find         24 1 mb        98258 ns       106812 ns         1024
find     tbb 24 1 mb        26333 ns        30518 ns         1024

scan avx     06 1 mb       690279 ns       686646 ns         1024
scan avx tbb 06 1 mb       159171 ns       152588 ns         1024
scan         06 1 mb       678759 ns       671387 ns         1024
scan     tbb 06 1 mb       155363 ns       152588 ns         1024
scan avx     12 1 mb       676807 ns       686646 ns         1024
scan avx tbb 12 1 mb       158804 ns       198364 ns         1024
scan         12 1 mb       693187 ns       701904 ns         1024
scan     tbb 12 1 mb       155035 ns       137329 ns         1024
scan avx     24 1 mb       678064 ns       610352 ns         1024
scan avx tbb 24 1 mb       160159 ns       167847 ns         1024
scan         24 1 mb       678433 ns       701904 ns         1024
scan     tbb 24 1 mb       157256 ns       183105 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       209592 ns       244141 ns          512
find avx tbb 06 4 mb       181160 ns        91553 ns          512
find         06 4 mb      1517317 ns      1556396 ns          512
find     tbb 06 4 mb       234074 ns       244141 ns          512
find avx     12 4 mb       212307 ns       274658 ns          512
find avx tbb 12 4 mb       178767 ns       213623 ns          512
find         12 4 mb       785459 ns       823975 ns          512
find     tbb 12 4 mb       207503 ns       244141 ns          512
find avx     24 4 mb       243888 ns       213623 ns          512
find avx tbb 24 4 mb       184559 ns        91553 ns          512
find         24 4 mb       427003 ns       366211 ns          512
find     tbb 24 4 mb       193225 ns       152588 ns          512

scan avx     06 4 mb      2706359 ns      2716064 ns          512
scan avx tbb 06 4 mb       620612 ns       457764 ns          512
scan         06 4 mb      2710457 ns      2716064 ns          512
scan     tbb 06 4 mb       605220 ns       701904 ns          512
scan avx     12 4 mb      2714903 ns      2655029 ns          512
scan avx tbb 12 4 mb       624032 ns       640869 ns          512
scan         12 4 mb      2705035 ns      2685547 ns          512
scan     tbb 12 4 mb       616779 ns       396729 ns          512
scan avx     24 4 mb      2703223 ns      2502441 ns          512
scan avx tbb 24 4 mb       622691 ns       396729 ns          512
scan         24 4 mb      2706538 ns      2746582 ns          512
scan     tbb 24 4 mb       619287 ns       518799 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      859600 ns      1220703 ns           64
find avx tbb 06 16 mb      657428 ns       732422 ns           64
find         06 16 mb     6436081 ns      6835938 ns           64
find     tbb 06 16 mb      835786 ns       732422 ns           64
find avx     12 16 mb      941791 ns       732422 ns           64
find avx tbb 12 16 mb      654164 ns       732422 ns           64
find         12 16 mb     3173050 ns      3417969 ns           64
find     tbb 12 16 mb      723689 ns       732422 ns           64
find avx     24 16 mb      982633 ns       976562 ns           64
find avx tbb 24 16 mb      669645 ns       732422 ns           64
find         24 16 mb     1755312 ns      1464844 ns           64
find     tbb 24 16 mb      693620 ns       488281 ns           64

scan avx     06 16 mb    10830975 ns     11230469 ns           64
scan avx tbb 06 16 mb     2309825 ns      1953125 ns           64
scan         06 16 mb    10855533 ns     10498047 ns           64
scan     tbb 06 16 mb     2335564 ns       732422 ns           64
scan avx     12 16 mb    10806081 ns     10986328 ns           64
scan avx tbb 12 16 mb     2329673 ns      1464844 ns           64
scan         12 16 mb    10813616 ns     10742188 ns           64
scan     tbb 12 16 mb     2344680 ns       976562 ns           64
scan avx     24 16 mb    10809694 ns     10742188 ns           64
scan avx tbb 24 16 mb     2346400 ns      1464844 ns           64
scan         24 16 mb    10820945 ns     10742188 ns           64
scan     tbb 24 16 mb     2290303 ns      1708984 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3351469 ns      2929688 ns           32
find avx tbb 06 64 mb     2470566 ns        0.000 ns           32
find         06 64 mb    24150194 ns     23925781 ns           32
find     tbb 06 64 mb     2974491 ns      3417969 ns           32
find avx     12 64 mb     3347428 ns      3906250 ns           32
find avx tbb 12 64 mb     2485703 ns      4394531 ns           32
find         12 64 mb    12515456 ns     12695312 ns           32
find     tbb 12 64 mb     2677284 ns      2929688 ns           32
find avx     24 64 mb     3814584 ns      3417969 ns           32
find avx tbb 24 64 mb     2492966 ns      2441406 ns           32
find         24 64 mb     6700578 ns      6347656 ns           32
find     tbb 24 64 mb     2561637 ns        0.000 ns           32

scan avx     06 64 mb    43135459 ns     43945312 ns           32
scan avx tbb 06 64 mb     9045275 ns      7324219 ns           32
scan         06 64 mb    43140156 ns     43457031 ns           32
scan     tbb 06 64 mb     8996528 ns      8789062 ns           32
scan avx     12 64 mb    43339656 ns     43945312 ns           32
scan avx tbb 12 64 mb     8971150 ns      7812500 ns           32
scan         12 64 mb    43128678 ns     43457031 ns           32
scan     tbb 12 64 mb     8959750 ns      6835938 ns           32
scan avx     24 64 mb    44133628 ns     42968750 ns           32
scan avx tbb 24 64 mb     9093791 ns      7324219 ns           32
scan         24 64 mb    43137263 ns     42968750 ns           32
scan     tbb 24 64 mb     9090309 ns      9277344 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   13927056 ns     12695312 ns           16
find avx tbb 06 256 mb    9676581 ns      1953125 ns           16
find         06 256 mb   97056300 ns     95703125 ns           16
find     tbb 06 256 mb   11510519 ns      6835938 ns           16
find avx     12 256 mb   15149131 ns     13671875 ns           16
find avx tbb 12 256 mb    9716062 ns      5859375 ns           16
find         12 256 mb   49406294 ns     50781250 ns           16
find     tbb 12 256 mb   10413800 ns     11718750 ns           16
find avx     24 256 mb   15197094 ns     14648438 ns           16
find avx tbb 24 256 mb    9666094 ns      2929688 ns           16
find         24 256 mb   29346356 ns     30273438 ns           16
find     tbb 24 256 mb   10124850 ns       976562 ns           16

scan avx     06 256 mb  174192281 ns    173828125 ns           16
scan avx tbb 06 256 mb   35934837 ns     22460938 ns           16
scan         06 256 mb  174032281 ns    173828125 ns           16
scan     tbb 06 256 mb   36226519 ns     26367188 ns           16
scan avx     12 256 mb  173711588 ns    173828125 ns           16
scan avx tbb 12 256 mb   35624244 ns     31250000 ns           16
scan         12 256 mb  172925563 ns    174804688 ns           16
scan     tbb 12 256 mb   34678081 ns     32226562 ns           16
scan avx     24 256 mb  172534181 ns    175781250 ns           16
scan avx tbb 24 256 mb   35238500 ns     27343750 ns           16
scan         24 256 mb  174987656 ns    174804688 ns           16
scan     tbb 24 256 mb   36077112 ns     26367188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   28053050 ns     27343750 ns            8
find avx tbb 06 512 mb   18987163 ns      9765625 ns            8
find         06 512 mb  194690388 ns    191406250 ns            8
find     tbb 06 512 mb   23451787 ns     11718750 ns            8
find avx     12 512 mb   30177563 ns     31250000 ns            8
find avx tbb 12 512 mb   19118275 ns     17578125 ns            8
find         12 512 mb   99277687 ns     99609375 ns            8
find     tbb 12 512 mb   21005988 ns     13671875 ns            8
find avx     24 512 mb   30959238 ns     31250000 ns            8
find avx tbb 24 512 mb   19149825 ns     15625000 ns            8
find         24 512 mb   53682888 ns     52734375 ns            8
find     tbb 24 512 mb   20831687 ns      9765625 ns            8

scan avx     06 512 mb  346188387 ns    347656250 ns            8
scan avx tbb 06 512 mb   70708812 ns     58593750 ns            8
scan         06 512 mb  346980912 ns    345703125 ns            8
scan     tbb 06 512 mb   68735237 ns     58593750 ns            8
scan avx     12 512 mb  354494463 ns    355468750 ns            8
scan avx tbb 12 512 mb   70254300 ns     50781250 ns            8
scan         12 512 mb  351139262 ns    347656250 ns            8
scan     tbb 12 512 mb   71093225 ns     44921875 ns            8
scan avx     24 512 mb  345885850 ns    343750000 ns            8
scan avx tbb 24 512 mb   70021425 ns     50781250 ns            8
scan         24 512 mb  349020975 ns    349609375 ns            8
scan     tbb 24 512 mb   71822400 ns     56640625 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     53823125 ns     52734375 ns            8
find avx tbb 06 1 gb     37975025 ns     29296875 ns            8
find         06 1 gb    389547237 ns    390625000 ns            8
find     tbb 06 1 gb     45549050 ns     42968750 ns            8
find avx     12 1 gb     53853925 ns     52734375 ns            8
find avx tbb 12 1 gb     38424000 ns     19531250 ns            8
find         12 1 gb    198090937 ns    201171875 ns            8
find     tbb 12 1 gb     42717350 ns     23437500 ns            8
find avx     24 1 gb     61348700 ns     60546875 ns            8
find avx tbb 24 1 gb     39941125 ns     23437500 ns            8
find         24 1 gb    108362225 ns    107421875 ns            8
find     tbb 24 1 gb     40349162 ns     35156250 ns            8

scan avx     06 1 gb    689795225 ns    691406250 ns            8
scan avx tbb 06 1 gb    139863475 ns    130859375 ns            8
scan         06 1 gb    695201200 ns    697265625 ns            8
scan     tbb 06 1 gb    136656550 ns    101562500 ns            8
scan avx     12 1 gb    697568112 ns    699218750 ns            8
scan avx tbb 12 1 gb    144713687 ns     95703125 ns            8
scan         12 1 gb    692747750 ns    693359375 ns            8
scan     tbb 12 1 gb    138281275 ns    101562500 ns            8
scan avx     24 1 gb    691321812 ns    691406250 ns            8
scan avx tbb 24 1 gb    138916850 ns    105468750 ns            8
scan         24 1 gb    689708950 ns    689453125 ns            8
scan     tbb 24 1 gb    138392412 ns    113281250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    108524925 ns    107421875 ns            8
find avx tbb 06 2 gb     75880400 ns     60546875 ns            8
find         06 2 gb    782544337 ns    783203125 ns            8
find     tbb 06 2 gb     89939513 ns     66406250 ns            8
find avx     12 2 gb    108589088 ns    109375000 ns            8
find avx tbb 12 2 gb     76106050 ns     48828125 ns            8
find         12 2 gb    400726950 ns    400390625 ns            8
find     tbb 12 2 gb     81198837 ns     54687500 ns            8
find avx     24 2 gb    125171413 ns    126953125 ns            8
find avx tbb 24 2 gb     75966800 ns     60546875 ns            8
find         24 2 gb    217838300 ns    216796875 ns            8
find     tbb 24 2 gb     79153638 ns     72265625 ns            8

scan avx     06 2 gb   1386317688 ns   1386718750 ns            8
scan avx tbb 06 2 gb    277999625 ns    240234375 ns            8
scan         06 2 gb   1387108337 ns   1384765625 ns            8
scan     tbb 06 2 gb    284427462 ns    238281250 ns            8
scan avx     12 2 gb   1391006038 ns   1390625000 ns            8
scan avx tbb 12 2 gb    283660275 ns    226562500 ns            8
scan         12 2 gb   1385287700 ns   1386718750 ns            8
scan     tbb 12 2 gb    280518725 ns    214843750 ns            8
scan avx     24 2 gb   1387509725 ns   1386718750 ns            8
scan avx tbb 24 2 gb    274894662 ns    242187500 ns            8
scan         24 2 gb   1384605063 ns   1382812500 ns            8
scan     tbb 24 2 gb    279170487 ns    234375000 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1088 ns        0.000 ns         4096
find avx tbb 06 16 kb        1037 ns        0.000 ns         4096
find         06 16 kb        6745 ns         7629 ns         4096
find     tbb 06 16 kb        7878 ns        11444 ns         4096
find avx     12 16 kb        1018 ns        0.000 ns         4096
find avx tbb 12 16 kb        1026 ns        0.000 ns         4096
find         12 16 kb        3708 ns         3815 ns         4096
find     tbb 12 16 kb        7393 ns         7629 ns         4096
find avx     24 16 kb        1181 ns        0.000 ns         4096
find avx tbb 24 16 kb        1175 ns        0.000 ns         4096
find         24 16 kb        2270 ns         3815 ns         4096
find     tbb 24 16 kb        7232 ns         7629 ns         4096

scan avx     06 16 kb       11084 ns        15259 ns         4096
scan avx tbb 06 16 kb       11060 ns        11444 ns         4096
scan         06 16 kb       11021 ns        11444 ns         4096
scan     tbb 06 16 kb        7714 ns         7629 ns         4096
scan avx     12 16 kb       11047 ns        11444 ns         4096
scan avx tbb 12 16 kb       11032 ns        11444 ns         4096
scan         12 16 kb       11072 ns        11444 ns         4096
scan     tbb 12 16 kb        7897 ns        11444 ns         4096
scan avx     24 16 kb       11078 ns        11444 ns         4096
scan avx tbb 24 16 kb       11149 ns        11444 ns         4096
scan         24 16 kb       11113 ns         3815 ns         4096
scan     tbb 24 16 kb        7909 ns        11444 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2351 ns         3815 ns         4096
find avx tbb 06 64 kb        2505 ns         3815 ns         4096
find         06 64 kb       24627 ns        26703 ns         4096
find     tbb 06 64 kb       10451 ns        11444 ns         4096
find avx     12 64 kb        2229 ns        0.000 ns         4096
find avx tbb 12 64 kb        2230 ns         3815 ns         4096
find         12 64 kb       12510 ns        11444 ns         4096
find     tbb 12 64 kb        8856 ns         7629 ns         4096
find avx     24 64 kb        2678 ns         3815 ns         4096
find avx tbb 24 64 kb        2677 ns         3815 ns         4096
find         24 64 kb        6712 ns        11444 ns         4096
find     tbb 24 64 kb        8402 ns         7629 ns         4096

scan avx     06 64 kb       42542 ns        38147 ns         4096
scan avx tbb 06 64 kb       42517 ns        45776 ns         4096
scan         06 64 kb       48068 ns        45776 ns         4096
scan     tbb 06 64 kb       15135 ns        19073 ns         4096
scan avx     12 64 kb       42516 ns        41962 ns         4096
scan avx tbb 12 64 kb       42466 ns        45776 ns         4096
scan         12 64 kb       42664 ns        41962 ns         4096
scan     tbb 12 64 kb       14941 ns        19073 ns         4096
scan avx     24 64 kb       42496 ns        41962 ns         4096
scan avx tbb 24 64 kb       44261 ns        45776 ns         4096
scan         24 64 kb       42615 ns        38147 ns         4096
scan     tbb 24 64 kb       14930 ns        19073 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       7671 ns         7629 ns         2048
find avx tbb 06 256 kb       7737 ns         7629 ns         2048
find         06 256 kb      94631 ns        91553 ns         2048
find     tbb 06 256 kb      22823 ns        30518 ns         2048
find avx     12 256 kb       8021 ns         7629 ns         2048
find avx tbb 12 256 kb       7544 ns        15259 ns         2048
find         12 256 kb      47930 ns        45776 ns         2048
find     tbb 12 256 kb      16861 ns        30518 ns         2048
find avx     24 256 kb       9375 ns        15259 ns         2048
find avx tbb 24 256 kb       9365 ns        22888 ns         2048
find         24 256 kb      24740 ns        15259 ns         2048
find     tbb 24 256 kb      14239 ns        22888 ns         2048

scan avx     06 256 kb     172064 ns       175476 ns         2048
scan avx tbb 06 256 kb     172462 ns       175476 ns         2048
scan         06 256 kb     175854 ns       175476 ns         2048
scan     tbb 06 256 kb      45904 ns        53406 ns         2048
scan avx     12 256 kb     173362 ns       183105 ns         2048
scan avx tbb 12 256 kb     170161 ns       175476 ns         2048
scan         12 256 kb     168746 ns       167847 ns         2048
scan     tbb 12 256 kb      45300 ns        45776 ns         2048
scan avx     24 256 kb     168767 ns       175476 ns         2048
scan avx tbb 24 256 kb     175696 ns       175476 ns         2048
scan         24 256 kb     168359 ns       175476 ns         2048
scan     tbb 24 256 kb      45593 ns        53406 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        28380 ns        15259 ns         1024
find avx tbb 06 1 mb        21757 ns        30518 ns         1024
find         06 1 mb       380384 ns       335693 ns         1024
find     tbb 06 1 mb        59319 ns        30518 ns         1024
find avx     12 1 mb        29292 ns        45776 ns         1024
find avx tbb 12 1 mb        19949 ns        15259 ns         1024
find         12 1 mb       192154 ns       167847 ns         1024
find     tbb 12 1 mb        37509 ns        45776 ns         1024
find avx     24 1 mb        36617 ns        61035 ns         1024
find avx tbb 24 1 mb        20819 ns        30518 ns         1024
find         24 1 mb        98830 ns       106812 ns         1024
find     tbb 24 1 mb        28187 ns        30518 ns         1024

scan avx     06 1 mb       678536 ns       671387 ns         1024
scan avx tbb 06 1 mb       156693 ns       137329 ns         1024
scan         06 1 mb       697956 ns       671387 ns         1024
scan     tbb 06 1 mb       155205 ns       152588 ns         1024
scan avx     12 1 mb       698291 ns       732422 ns         1024
scan avx tbb 12 1 mb       160974 ns       152588 ns         1024
scan         12 1 mb       679525 ns       671387 ns         1024
scan     tbb 12 1 mb       156243 ns       167847 ns         1024
scan avx     24 1 mb       677304 ns       671387 ns         1024
scan avx tbb 24 1 mb       157906 ns       167847 ns         1024
scan         24 1 mb       690865 ns       701904 ns         1024
scan     tbb 24 1 mb       155251 ns       167847 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       210909 ns       183105 ns          512
find avx tbb 06 4 mb       183835 ns       122070 ns          512
find         06 4 mb      1524009 ns      1556396 ns          512
find     tbb 06 4 mb       248808 ns       244141 ns          512
find avx     12 4 mb       212410 ns       183105 ns          512
find avx tbb 12 4 mb       176627 ns       122070 ns          512
find         12 4 mb       791146 ns       762939 ns          512
find     tbb 12 4 mb       213575 ns       213623 ns          512
find avx     24 4 mb       243968 ns       305176 ns          512
find avx tbb 24 4 mb       183987 ns        30518 ns          512
find         24 4 mb       424837 ns       427246 ns          512
find     tbb 24 4 mb       191359 ns        91553 ns          512

scan avx     06 4 mb      2700672 ns      2655029 ns          512
scan avx tbb 06 4 mb       620784 ns       427246 ns          512
scan         06 4 mb      2701000 ns      2716064 ns          512
scan     tbb 06 4 mb       615405 ns       396729 ns          512
scan avx     12 4 mb      2701917 ns      2838135 ns          512
scan avx tbb 12 4 mb       620245 ns       579834 ns          512
scan         12 4 mb      2702617 ns      2655029 ns          512
scan     tbb 12 4 mb       615402 ns       457764 ns          512
scan avx     24 4 mb      2714381 ns      2655029 ns          512
scan avx tbb 24 4 mb       621203 ns       640869 ns          512
scan         24 4 mb      2738400 ns      2807617 ns          512
scan     tbb 24 4 mb       617760 ns       549316 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      858261 ns      1220703 ns           64
find avx tbb 06 16 mb      656531 ns       488281 ns           64
find         06 16 mb     6200634 ns      6591797 ns           64
find     tbb 06 16 mb      832108 ns        0.000 ns           64
find avx     12 16 mb      895188 ns      1464844 ns           64
find avx tbb 12 16 mb      655436 ns      1220703 ns           64
find         12 16 mb     3178052 ns      3173828 ns           64
find     tbb 12 16 mb      722014 ns       732422 ns           64
find avx     24 16 mb      983136 ns      1220703 ns           64
find avx tbb 24 16 mb      671514 ns       488281 ns           64
find         24 16 mb     1722286 ns      1953125 ns           64
find     tbb 24 16 mb      698916 ns       732422 ns           64

scan avx     06 16 mb    11521048 ns     10986328 ns           64
scan avx tbb 06 16 mb     2337852 ns      1953125 ns           64
scan         06 16 mb    10831119 ns     11230469 ns           64
scan     tbb 06 16 mb     2305034 ns      1464844 ns           64
scan avx     12 16 mb    10838016 ns     10498047 ns           64
scan avx tbb 12 16 mb     2320881 ns      2685547 ns           64
scan         12 16 mb    11159505 ns     11474609 ns           64
scan     tbb 12 16 mb     2313953 ns      1953125 ns           64
scan avx     24 16 mb    10821813 ns     10986328 ns           64
scan avx tbb 24 16 mb     2310181 ns      1464844 ns           64
scan         24 16 mb    10873823 ns     10986328 ns           64
scan     tbb 24 16 mb     2312698 ns      2197266 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3432681 ns      2929688 ns           32
find avx tbb 06 64 mb     2482556 ns      3417969 ns           32
find         06 64 mb    24111466 ns     23437500 ns           32
find     tbb 06 64 mb     3002259 ns      1953125 ns           32
find avx     12 64 mb     3349672 ns      3417969 ns           32
find avx tbb 12 64 mb     2471453 ns        0.000 ns           32
find         12 64 mb    12367584 ns     11718750 ns           32
find     tbb 12 64 mb     2695791 ns      4882812 ns           32
find avx     24 64 mb     3796909 ns      1953125 ns           32
find avx tbb 24 64 mb     2506431 ns      4882812 ns           32
find         24 64 mb     7390238 ns      8789062 ns           32
find     tbb 24 64 mb     2587772 ns      2929688 ns           32

scan avx     06 64 mb    43149313 ns     42480469 ns           32
scan avx tbb 06 64 mb     9149834 ns      6347656 ns           32
scan         06 64 mb    43459566 ns     44433594 ns           32
scan     tbb 06 64 mb     9064644 ns      6835938 ns           32
scan avx     12 64 mb    43764609 ns     43457031 ns           32
scan avx tbb 12 64 mb     8987478 ns      6835938 ns           32
scan         12 64 mb    43044100 ns     41992188 ns           32
scan     tbb 12 64 mb     8978591 ns      8789062 ns           32
scan avx     24 64 mb    43121178 ns     43945312 ns           32
scan avx tbb 24 64 mb     9288703 ns      5859375 ns           32
scan         24 64 mb    43061556 ns     43945312 ns           32
scan     tbb 24 64 mb     8924806 ns      8300781 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   13965019 ns     14648438 ns           16
find avx tbb 06 256 mb    9544050 ns     11718750 ns           16
find         06 256 mb  100091413 ns    100585938 ns           16
find     tbb 06 256 mb   11303025 ns      7812500 ns           16
find avx     12 256 mb   13711381 ns     12695312 ns           16
find avx tbb 12 256 mb    9697700 ns      4882812 ns           16
find         12 256 mb   49919669 ns     49804688 ns           16
find     tbb 12 256 mb   10319656 ns     11718750 ns           16
find avx     24 256 mb   15310769 ns     15625000 ns           16
find avx tbb 24 256 mb    9703137 ns      7812500 ns           16
find         24 256 mb   27234788 ns     27343750 ns           16
find     tbb 24 256 mb    9954350 ns      3906250 ns           16

scan avx     06 256 mb  173289806 ns    172851562 ns           16
scan avx tbb 06 256 mb   35387081 ns     31250000 ns           16
scan         06 256 mb  172711600 ns    172851562 ns           16
scan     tbb 06 256 mb   35449406 ns     27343750 ns           16
scan avx     12 256 mb  172071862 ns    171875000 ns           16
scan avx tbb 12 256 mb   35929312 ns     28320312 ns           16
scan         12 256 mb  173164312 ns    173828125 ns           16
scan     tbb 12 256 mb   35166619 ns     29296875 ns           16
scan avx     24 256 mb  173149738 ns    172851562 ns           16
scan avx tbb 24 256 mb   35651087 ns     28320312 ns           16
scan         24 256 mb  173238025 ns    172851562 ns           16
scan     tbb 24 256 mb   35581919 ns     26367188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   28118175 ns     25390625 ns            8
find avx tbb 06 512 mb   19125563 ns     13671875 ns            8
find         06 512 mb  192647600 ns    191406250 ns            8
find     tbb 06 512 mb   22729787 ns     23437500 ns            8
find avx     12 512 mb   29086612 ns     27343750 ns            8
find avx tbb 12 512 mb   19220600 ns     19531250 ns            8
find         12 512 mb  100529662 ns    107421875 ns            8
find     tbb 12 512 mb   20451862 ns     23437500 ns            8
find avx     24 512 mb   32887625 ns     33203125 ns            8
find avx tbb 24 512 mb   19243637 ns     19531250 ns            8
find         24 512 mb   53616600 ns     54687500 ns            8
find     tbb 24 512 mb   20070725 ns      7812500 ns            8

scan avx     06 512 mb  344597062 ns    343750000 ns            8
scan avx tbb 06 512 mb   70215625 ns     72265625 ns            8
scan         06 512 mb  345079125 ns    345703125 ns            8
scan     tbb 06 512 mb   70346537 ns     68359375 ns            8
scan avx     12 512 mb  345978313 ns    349609375 ns            8
scan avx tbb 12 512 mb   69723413 ns     60546875 ns            8
scan         12 512 mb  344377900 ns    343750000 ns            8
scan     tbb 12 512 mb   70993100 ns     35156250 ns            8
scan avx     24 512 mb  349043988 ns    347656250 ns            8
scan avx tbb 24 512 mb   69513187 ns     48828125 ns            8
scan         24 512 mb  347702337 ns    347656250 ns            8
scan     tbb 24 512 mb   70719900 ns     33203125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     54490450 ns     58593750 ns            8
find avx tbb 06 1 gb     39003925 ns     37109375 ns            8
find         06 1 gb    391257825 ns    390625000 ns            8
find     tbb 06 1 gb     45230538 ns     33203125 ns            8
find avx     12 1 gb     54931162 ns     54687500 ns            8
find avx tbb 12 1 gb     38263062 ns     25390625 ns            8
find         12 1 gb    204150750 ns    197265625 ns            8
find     tbb 12 1 gb     41743500 ns     21484375 ns            8
find avx     24 1 gb     65625700 ns     64453125 ns            8
find avx tbb 24 1 gb     38074100 ns     27343750 ns            8
find         24 1 gb    106580950 ns    105468750 ns            8
find     tbb 24 1 gb     39113663 ns     27343750 ns            8

scan avx     06 1 gb    694132538 ns    693359375 ns            8
scan avx tbb 06 1 gb    139218550 ns    113281250 ns            8
scan         06 1 gb    690707763 ns    689453125 ns            8
scan     tbb 06 1 gb    136747387 ns    107421875 ns            8
scan avx     12 1 gb    692866875 ns    693359375 ns            8
scan avx tbb 12 1 gb    142300200 ns    101562500 ns            8
scan         12 1 gb    696531162 ns    699218750 ns            8
scan     tbb 12 1 gb    139866125 ns     97656250 ns            8
scan avx     24 1 gb    695892762 ns    697265625 ns            8
scan avx tbb 24 1 gb    140132537 ns     95703125 ns            8
scan         24 1 gb    692063775 ns    691406250 ns            8
scan     tbb 24 1 gb    141992863 ns    107421875 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    107323075 ns    109375000 ns            8
find avx tbb 06 2 gb     76936937 ns     58593750 ns            8
find         06 2 gb    770429087 ns    769531250 ns            8
find     tbb 06 2 gb     87862612 ns     80078125 ns            8
find avx     12 2 gb    107585837 ns    105468750 ns            8
find avx tbb 12 2 gb     77089950 ns     70312500 ns            8
find         12 2 gb    395014137 ns    390625000 ns            8
find     tbb 12 2 gb     84575587 ns     66406250 ns            8
find avx     24 2 gb    122392525 ns    123046875 ns            8
find avx tbb 24 2 gb     76998362 ns     54687500 ns            8
find         24 2 gb    213118775 ns    210937500 ns            8
find     tbb 24 2 gb     79701250 ns     64453125 ns            8

scan avx     06 2 gb   1387288775 ns   1388671875 ns            8
scan avx tbb 06 2 gb    279090425 ns    251953125 ns            8
scan         06 2 gb   1381872425 ns   1380859375 ns            8
scan     tbb 06 2 gb    280089850 ns    218750000 ns            8
scan avx     12 2 gb   1395841362 ns   1392578125 ns            8
scan avx tbb 12 2 gb    280785763 ns    226562500 ns            8
scan         12 2 gb   1380494838 ns   1380859375 ns            8
scan     tbb 12 2 gb    272831438 ns    222656250 ns            8
scan avx     24 2 gb   1380107325 ns   1376953125 ns            8
scan avx tbb 24 2 gb    278277987 ns    220703125 ns            8
scan         24 2 gb   1393243113 ns   1392578125 ns            8
scan     tbb 24 2 gb    281682225 ns    234375000 ns            8
```

</details>

