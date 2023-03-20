# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>1 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1859 ns        0.000 ns         4096
data |  6 | avx            685 ns        0.000 ns         4096
data |  6 |     tbb       8825 ns        11444 ns         4096
data |  6 | avx tbb       5397 ns        0.000 ns         4096
mask |  6 |               1341 ns         3815 ns         4096
mask |  6 | avx            601 ns        0.000 ns         4096
mask |  6 |     tbb       5461 ns         7629 ns         4096
mask |  6 | avx tbb       5385 ns         3815 ns         4096

data | 12 |               1045 ns        0.000 ns         4096
data | 12 | avx            744 ns        0.000 ns         4096
data | 12 |     tbb       8447 ns         7629 ns         4096
data | 12 | avx tbb       5414 ns         3815 ns         4096
mask | 12 |               1385 ns        0.000 ns         4096
mask | 12 | avx            649 ns        0.000 ns         4096
mask | 12 |     tbb       5452 ns         3815 ns         4096
mask | 12 | avx tbb       5241 ns         7629 ns         4096

data | 24 |                947 ns        0.000 ns         4096
data | 24 | avx            738 ns        0.000 ns         4096
data | 24 |     tbb       6704 ns         7629 ns         4096
data | 24 | avx tbb       4807 ns         3815 ns         4096
mask | 24 |               1433 ns         3815 ns         4096
mask | 24 | avx            675 ns        0.000 ns         4096
mask | 24 |     tbb       5042 ns         3815 ns         4096
mask | 24 | avx tbb       4775 ns         3815 ns         4096
```

</details>

<details>
<summary>2 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1684 ns         3815 ns         4096
data |  6 | avx            778 ns        0.000 ns         4096
data |  6 |     tbb       8687 ns         7629 ns         4096
data |  6 | avx tbb       5463 ns         3815 ns         4096
mask |  6 |               2199 ns        0.000 ns         4096
mask |  6 | avx            666 ns         3815 ns         4096
mask |  6 |     tbb       5714 ns         3815 ns         4096
mask |  6 | avx tbb       5268 ns         3815 ns         4096

data | 12 |               1257 ns        0.000 ns         4096
data | 12 | avx            773 ns        0.000 ns         4096
data | 12 |     tbb       8569 ns        11444 ns         4096
data | 12 | avx tbb       5386 ns         3815 ns         4096
mask | 12 |               2244 ns         3815 ns         4096
mask | 12 | avx            678 ns        0.000 ns         4096
mask | 12 |     tbb       5679 ns         7629 ns         4096
mask | 12 | avx tbb       5270 ns         7629 ns         4096

data | 24 |               1068 ns        0.000 ns         4096
data | 24 | avx            774 ns        0.000 ns         4096
data | 24 |     tbb       8256 ns         7629 ns         4096
data | 24 | avx tbb       5412 ns         7629 ns         4096
mask | 24 |               2329 ns         3815 ns         4096
mask | 24 | avx            700 ns        0.000 ns         4096
mask | 24 |     tbb       5670 ns         7629 ns         4096
mask | 24 | avx tbb       5224 ns         3815 ns         4096
```

</details>

<details>
<summary>4 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               2564 ns         3815 ns         4096
data |  6 | avx            844 ns         3815 ns         4096
data |  6 |     tbb       8661 ns         7629 ns         4096
data |  6 | avx tbb       5490 ns         3815 ns         4096
mask |  6 |               3980 ns         3815 ns         4096
mask |  6 | avx            712 ns        0.000 ns         4096
mask |  6 |     tbb       6191 ns         7629 ns         4096
mask |  6 | avx tbb       5379 ns         3815 ns         4096

data | 12 |               1705 ns        0.000 ns         4096
data | 12 | avx            840 ns        0.000 ns         4096
data | 12 |     tbb       8631 ns        11444 ns         4096
data | 12 | avx tbb       5436 ns         7629 ns         4096
mask | 12 |               3972 ns        0.000 ns         4096
mask | 12 | avx            719 ns        0.000 ns         4096
mask | 12 |     tbb       6108 ns         7629 ns         4096
mask | 12 | avx tbb       5283 ns         7629 ns         4096

data | 24 |               1294 ns        0.000 ns         4096
data | 24 | avx            844 ns         3815 ns         4096
data | 24 |     tbb       8287 ns         7629 ns         4096
data | 24 | avx tbb       5383 ns         7629 ns         4096
mask | 24 |               3976 ns        0.000 ns         4096
mask | 24 | avx            743 ns        0.000 ns         4096
mask | 24 |     tbb       6138 ns         3815 ns         4096
mask | 24 | avx tbb       5316 ns         3815 ns         4096
```

</details>

<details>
<summary>8 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               4338 ns         3815 ns         4096
data |  6 | avx            965 ns        0.000 ns         4096
data |  6 |     tbb       9022 ns        11444 ns         4096
data |  6 | avx tbb       5631 ns         3815 ns         4096
mask |  6 |               7172 ns         7629 ns         4096
mask |  6 | avx            801 ns        0.000 ns         4096
mask |  6 |     tbb       6960 ns         3815 ns         4096
mask |  6 | avx tbb       5438 ns         3815 ns         4096

data | 12 |               2587 ns        0.000 ns         4096
data | 12 | avx            956 ns        0.000 ns         4096
data | 12 |     tbb       8731 ns        11444 ns         4096
data | 12 | avx tbb       5589 ns         7629 ns         4096
mask | 12 |               7427 ns         7629 ns         4096
mask | 12 | avx            814 ns        0.000 ns         4096
mask | 12 |     tbb       6951 ns         7629 ns         4096
mask | 12 | avx tbb       5376 ns         7629 ns         4096

data | 24 |               1739 ns         3815 ns         4096
data | 24 | avx            956 ns        0.000 ns         4096
data | 24 |     tbb       8331 ns         7629 ns         4096
data | 24 | avx tbb       5495 ns         3815 ns         4096
mask | 24 |               7462 ns         7629 ns         4096
mask | 24 | avx            840 ns        0.000 ns         4096
mask | 24 |     tbb       6897 ns         7629 ns         4096
mask | 24 | avx tbb       5443 ns         7629 ns         4096
```

</details>

<details>
<summary>16 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               7887 ns         7629 ns         4096
data |  6 | avx           1245 ns         3815 ns         4096
data |  6 |     tbb       9318 ns        11444 ns         4096
data |  6 | avx tbb       5867 ns         7629 ns         4096
mask |  6 |              14591 ns        15259 ns         4096
mask |  6 | avx           1027 ns        0.000 ns         4096
mask |  6 |     tbb       8259 ns        11444 ns         4096
mask |  6 | avx tbb       5580 ns         7629 ns         4096

data | 12 |               4393 ns         3815 ns         4096
data | 12 | avx           1225 ns         3815 ns         4096
data | 12 |     tbb       8855 ns        11444 ns         4096
data | 12 | avx tbb       5814 ns         3815 ns         4096
mask | 12 |              14512 ns        15259 ns         4096
mask | 12 | avx           1028 ns        0.000 ns         4096
mask | 12 |     tbb       8232 ns        11444 ns         4096
mask | 12 | avx tbb       5672 ns         7629 ns         4096

data | 24 |               2670 ns        0.000 ns         4096
data | 24 | avx           1237 ns        0.000 ns         4096
data | 24 |     tbb       8534 ns        11444 ns         4096
data | 24 | avx tbb       5726 ns         7629 ns         4096
mask | 24 |              13836 ns        11444 ns         4096
mask | 24 | avx           1055 ns        0.000 ns         4096
mask | 24 |     tbb       8417 ns        11444 ns         4096
mask | 24 | avx tbb       5814 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              27769 ns        22888 ns         4096
data |  6 | avx           2494 ns         3815 ns         4096
data |  6 |     tbb      11820 ns        11444 ns         4096
data |  6 | avx tbb       6374 ns        11444 ns         4096
mask |  6 |              50226 ns        53406 ns         4096
mask |  6 | avx           2202 ns        0.000 ns         4096
mask |  6 |     tbb      14914 ns         7629 ns         4096
mask |  6 | avx tbb       6190 ns        11444 ns         4096

data | 12 |              14954 ns        15259 ns         4096
data | 12 | avx           2512 ns         3815 ns         4096
data | 12 |     tbb      10123 ns         7629 ns         4096
data | 12 | avx tbb       6307 ns         7629 ns         4096
mask | 12 |              52494 ns        53406 ns         4096
mask | 12 | avx           2184 ns        0.000 ns         4096
mask | 12 |     tbb      14918 ns        15259 ns         4096
mask | 12 | avx tbb       6147 ns        11444 ns         4096

data | 24 |               8078 ns         3815 ns         4096
data | 24 | avx           2595 ns        0.000 ns         4096
data | 24 |     tbb       9230 ns         7629 ns         4096
data | 24 | avx tbb       6321 ns         7629 ns         4096
mask | 24 |              51881 ns        53406 ns         4096
mask | 24 | avx           2227 ns         3815 ns         4096
mask | 24 |     tbb      14997 ns        15259 ns         4096
mask | 24 | avx tbb       6263 ns         7629 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             106995 ns       114441 ns         2048
data |  6 | avx           8028 ns        15259 ns         2048
data |  6 |     tbb      22471 ns        22888 ns         2048
data |  6 | avx tbb      10529 ns        0.000 ns         2048
mask |  6 |             207628 ns       205994 ns         2048
mask |  6 | avx           7718 ns        0.000 ns         2048
mask |  6 |     tbb      42381 ns        30518 ns         2048
mask |  6 | avx tbb      10199 ns        15259 ns         2048

data | 12 |              54706 ns        53406 ns         2048
data | 12 | avx           8018 ns         7629 ns         2048
data | 12 |     tbb      17074 ns        15259 ns         2048
data | 12 | avx tbb      10432 ns        15259 ns         2048
mask | 12 |             211561 ns       205994 ns         2048
mask | 12 | avx           7616 ns        0.000 ns         2048
mask | 12 |     tbb      41584 ns        38147 ns         2048
mask | 12 | avx tbb      10023 ns        22888 ns         2048

data | 24 |              29248 ns        38147 ns         2048
data | 24 | avx           8023 ns         7629 ns         2048
data | 24 |     tbb      14380 ns         7629 ns         2048
data | 24 | avx tbb      10331 ns         7629 ns         2048
mask | 24 |             210335 ns       205994 ns         2048
mask | 24 | avx           7655 ns         7629 ns         2048
mask | 24 |     tbb      41870 ns        45776 ns         2048
mask | 24 | avx tbb      10067 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             425604 ns       442505 ns         1024
data |  6 | avx          29246 ns        30518 ns         1024
data |  6 |     tbb      54094 ns        61035 ns         1024
data |  6 | avx tbb      17663 ns        30518 ns         1024
mask |  6 |             832095 ns       854492 ns         1024
mask |  6 | avx          28455 ns        45776 ns         1024
mask |  6 |     tbb     139114 ns       137329 ns         1024
mask |  6 | avx tbb      17053 ns        45776 ns         1024

data | 12 |             213209 ns       183105 ns         1024
data | 12 | avx          29104 ns        30518 ns         1024
data | 12 |     tbb      33850 ns        15259 ns         1024
data | 12 | avx tbb      18003 ns        0.000 ns         1024
mask | 12 |             832192 ns       839233 ns         1024
mask | 12 | avx          27925 ns        15259 ns         1024
mask | 12 |     tbb     140239 ns       152588 ns         1024
mask | 12 | avx tbb      16871 ns        0.000 ns         1024

data | 24 |             110055 ns       122070 ns         1024
data | 24 | avx          29097 ns        15259 ns         1024
data | 24 |     tbb      24408 ns        30518 ns         1024
data | 24 | avx tbb      17784 ns        15259 ns         1024
mask | 24 |             836752 ns       823975 ns         1024
mask | 24 | avx          28482 ns        15259 ns         1024
mask | 24 |     tbb     139735 ns       122070 ns         1024
mask | 24 | avx tbb      17237 ns        0.000 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            1676490 ns      1586914 ns          512
data |  6 | avx         196398 ns       213623 ns          512
data |  6 |     tbb     229403 ns        91553 ns          512
data |  6 | avx tbb     157463 ns       213623 ns          512
mask |  6 |            3022743 ns      3021240 ns          512
mask |  6 | avx         196120 ns       122070 ns          512
mask |  6 |     tbb     563373 ns       579834 ns          512
mask |  6 | avx tbb     156794 ns       213623 ns          512

data | 12 |             866795 ns       854492 ns          512
data | 12 | avx         195832 ns       183105 ns          512
data | 12 |     tbb     194463 ns       183105 ns          512
data | 12 | avx tbb     157777 ns       213623 ns          512
mask | 12 |            3269370 ns      3234863 ns          512
mask | 12 | avx         193870 ns       244141 ns          512
mask | 12 |     tbb     565210 ns       518799 ns          512
mask | 12 | avx tbb     157037 ns       152588 ns          512

data | 24 |             452271 ns       427246 ns          512
data | 24 | avx         197358 ns       122070 ns          512
data | 24 |     tbb     189246 ns       122070 ns          512
data | 24 | avx tbb     157889 ns       244141 ns          512
mask | 24 |            3292515 ns      3295898 ns          512
mask | 24 | avx         194595 ns       213623 ns          512
mask | 24 |     tbb     565496 ns       610352 ns          512
mask | 24 | avx tbb     156994 ns       122070 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            6726580 ns      7568359 ns           64
data |  6 | avx         808922 ns       732422 ns           64
data |  6 |     tbb     793347 ns       732422 ns           64
data |  6 | avx tbb     629300 ns       488281 ns           64
mask |  6 |           13116316 ns     13427734 ns           64
mask |  6 | avx         798155 ns       488281 ns           64
mask |  6 |     tbb    2131081 ns      1464844 ns           64
mask |  6 | avx tbb     604958 ns       976562 ns           64

data | 12 |            3448219 ns      3662109 ns           64
data | 12 | avx         789227 ns       976562 ns           64
data | 12 |     tbb     696116 ns       732422 ns           64
data | 12 | avx tbb     631428 ns       488281 ns           64
mask | 12 |           13083241 ns     13427734 ns           64
mask | 12 | avx         807413 ns       488281 ns           64
mask | 12 |     tbb    2112203 ns      2685547 ns           64
mask | 12 | avx tbb     592695 ns       732422 ns           64

data | 24 |            1796278 ns      1953125 ns           64
data | 24 | avx         798102 ns       488281 ns           64
data | 24 |     tbb     669623 ns       488281 ns           64
data | 24 | avx tbb     631731 ns       732422 ns           64
mask | 24 |           13154097 ns     12939453 ns           64
mask | 24 | avx         790433 ns       732422 ns           64
mask | 24 |     tbb    2126617 ns      1708984 ns           64
mask | 24 | avx tbb     598484 ns       244141 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           26618516 ns     28320312 ns           32
data |  6 | avx        3125403 ns        0.000 ns           32
data |  6 |     tbb    2954791 ns        0.000 ns           32
data |  6 | avx tbb    2370853 ns      2441406 ns           32
mask |  6 |           51671547 ns     51269531 ns           32
mask |  6 | avx        3168478 ns      2929688 ns           32
mask |  6 |     tbb    8200428 ns      8789062 ns           32
mask |  6 | avx tbb    2354919 ns      2929688 ns           32

data | 12 |           13601300 ns     13671875 ns           32
data | 12 | avx        3182622 ns       976562 ns           32
data | 12 |     tbb    2473391 ns      2441406 ns           32
data | 12 | avx tbb    2379194 ns      1953125 ns           32
mask | 12 |           52281516 ns     52734375 ns           32
mask | 12 | avx        3180769 ns      2441406 ns           32
mask | 12 |     tbb    8244009 ns      8300781 ns           32
mask | 12 | avx tbb    2357175 ns      2441406 ns           32

data | 24 |            7099684 ns      7324219 ns           32
data | 24 | avx        3199891 ns      2441406 ns           32
data | 24 |     tbb    2447650 ns      1464844 ns           32
data | 24 | avx tbb    2375250 ns      1464844 ns           32
mask | 24 |           52031797 ns     52734375 ns           32
mask | 24 | avx        3127122 ns      2929688 ns           32
mask | 24 |     tbb    8220897 ns      8300781 ns           32
mask | 24 | avx tbb    2369906 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          106390231 ns    107421875 ns           16
data |  6 | avx       13376531 ns     12695312 ns           16
data |  6 |     tbb   10823581 ns     12695312 ns           16
data |  6 | avx tbb    9279575 ns      8789062 ns           16
mask |  6 |          205965169 ns    204101562 ns           16
mask |  6 | avx       13307387 ns     12695312 ns           16
mask |  6 |     tbb   32476087 ns     30273438 ns           16
mask |  6 | avx tbb    9273375 ns      8789062 ns           16

data | 12 |           54969350 ns     54687500 ns           16
data | 12 | avx       12521950 ns     13671875 ns           16
data | 12 |     tbb    9547713 ns      9765625 ns           16
data | 12 | avx tbb    9276781 ns     10742188 ns           16
mask | 12 |          208352062 ns    208984375 ns           16
mask | 12 | avx       13250588 ns     11718750 ns           16
mask | 12 |     tbb   32829563 ns     34179688 ns           16
mask | 12 | avx tbb    9279438 ns      8789062 ns           16

data | 24 |           29391969 ns     29296875 ns           16
data | 24 | avx       12665719 ns     12695312 ns           16
data | 24 |     tbb    9491131 ns      9765625 ns           16
data | 24 | avx tbb    9284588 ns      8789062 ns           16
mask | 24 |          205952919 ns    207031250 ns           16
mask | 24 | avx       12806631 ns     12695312 ns           16
mask | 24 |     tbb   32406819 ns     31250000 ns           16
mask | 24 | avx tbb    9302550 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          212914888 ns    214843750 ns            8
data |  6 | avx       25673362 ns     23437500 ns            8
data |  6 |     tbb   21152663 ns     21484375 ns            8
data |  6 | avx tbb   18467088 ns     19531250 ns            8
mask |  6 |          364516375 ns    365234375 ns            8
mask |  6 | avx       25580188 ns     25390625 ns            8
mask |  6 |     tbb   65831775 ns     54687500 ns            8
mask |  6 | avx tbb   18466913 ns     17578125 ns            8

data | 12 |          111551913 ns    111328125 ns            8
data | 12 | avx       25311762 ns     27343750 ns            8
data | 12 |     tbb   18966450 ns     15625000 ns            8
data | 12 | avx tbb   18614913 ns     17578125 ns            8
mask | 12 |          415163650 ns    421875000 ns            8
mask | 12 | avx       25663137 ns     29296875 ns            8
mask | 12 |     tbb   64785600 ns     64453125 ns            8
mask | 12 | avx tbb   18465237 ns     19531250 ns            8

data | 24 |           56887263 ns     54687500 ns            8
data | 24 | avx       27880913 ns     25390625 ns            8
data | 24 |     tbb   18818800 ns     19531250 ns            8
data | 24 | avx tbb   18491425 ns     15625000 ns            8
mask | 24 |          415467375 ns    412109375 ns            8
mask | 24 | avx       25510087 ns     25390625 ns            8
mask | 24 |     tbb   64690050 ns     60546875 ns            8
mask | 24 | avx tbb   18462500 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          426854962 ns    427734375 ns            8
data |  6 | avx       51193212 ns     48828125 ns            8
data |  6 |     tbb   42339562 ns     46875000 ns            8
data |  6 | avx tbb   36892813 ns     35156250 ns            8
mask |  6 |          829008275 ns    828125000 ns            8
mask |  6 | avx       55852700 ns     58593750 ns            8
mask |  6 |     tbb  130949225 ns    121093750 ns            8
mask |  6 | avx tbb   36833388 ns     35156250 ns            8

data | 12 |          217479062 ns    218750000 ns            8
data | 12 | avx       50980325 ns     50781250 ns            8
data | 12 |     tbb   37785237 ns     33203125 ns            8
data | 12 | avx tbb   37332150 ns     37109375 ns            8
mask | 12 |          829243587 ns    830078125 ns            8
mask | 12 | avx       51183000 ns     48828125 ns            8
mask | 12 |     tbb  129572362 ns    128906250 ns            8
mask | 12 | avx tbb   37212625 ns     29296875 ns            8

data | 24 |          113565775 ns    113281250 ns            8
data | 24 | avx       51303625 ns     50781250 ns            8
data | 24 |     tbb   37812788 ns     35156250 ns            8
data | 24 | avx tbb   37464512 ns     39062500 ns            8
mask | 24 |          837749850 ns    833984375 ns            8
mask | 24 | avx       50585438 ns     50781250 ns            8
mask | 24 |     tbb  129009062 ns    125000000 ns            8
mask | 24 | avx tbb   36873175 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          851583287 ns    849609375 ns            8
data |  6 | avx      102679175 ns    105468750 ns            8
data |  6 |     tbb   84649600 ns     80078125 ns            8
data |  6 | avx tbb   73623425 ns     70312500 ns            8
mask |  6 |         1663781662 ns   1667968750 ns            8
mask |  6 | avx      103061963 ns    103515625 ns            8
mask |  6 |     tbb  261884900 ns    236328125 ns            8
mask |  6 | avx tbb   73730063 ns     74218750 ns            8

data | 12 |          434195425 ns    437500000 ns            8
data | 12 | avx      102624050 ns    109375000 ns            8
data | 12 |     tbb   75755400 ns     74218750 ns            8
data | 12 | avx tbb   73666075 ns     72265625 ns            8
mask | 12 |         1672542562 ns   1671875000 ns            8
mask | 12 | avx      101184412 ns     97656250 ns            8
mask | 12 |     tbb  262191475 ns    244140625 ns            8
mask | 12 | avx tbb   73550063 ns     74218750 ns            8

data | 24 |          233005913 ns    234375000 ns            8
data | 24 | avx      102783950 ns    101562500 ns            8
data | 24 |     tbb   76728813 ns     72265625 ns            8
data | 24 | avx tbb   73533850 ns     74218750 ns            8
mask | 24 |         1648335288 ns   1652343750 ns            8
mask | 24 | avx      102551087 ns     97656250 ns            8
mask | 24 |     tbb  258766175 ns    240234375 ns            8
mask | 24 | avx tbb   73655738 ns     70312500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>1 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1886 ns         3815 ns         4096
data |  6 | avx            671 ns        0.000 ns         4096
data |  6 |     tbb       8630 ns        11444 ns         4096
data |  6 | avx tbb       5440 ns         3815 ns         4096
mask |  6 |               1222 ns        0.000 ns         4096
mask |  6 | avx            613 ns        0.000 ns         4096
mask |  6 |     tbb       5337 ns         7629 ns         4096
mask |  6 | avx tbb       5226 ns         7629 ns         4096

data | 12 |                997 ns        0.000 ns         4096
data | 12 | avx            729 ns        0.000 ns         4096
data | 12 |     tbb       8325 ns        11444 ns         4096
data | 12 | avx tbb       5381 ns         7629 ns         4096
mask | 12 |               1285 ns        0.000 ns         4096
mask | 12 | avx            642 ns        0.000 ns         4096
mask | 12 |     tbb       5354 ns         3815 ns         4096
mask | 12 | avx tbb       5221 ns         7629 ns         4096

data | 24 |                912 ns        0.000 ns         4096
data | 24 | avx            733 ns         3815 ns         4096
data | 24 |     tbb       6598 ns         3815 ns         4096
data | 24 | avx tbb       4750 ns         3815 ns         4096
mask | 24 |               1274 ns         3815 ns         4096
mask | 24 | avx            660 ns        0.000 ns         4096
mask | 24 |     tbb       4855 ns         7629 ns         4096
mask | 24 | avx tbb       4671 ns         3815 ns         4096
```

</details>

<details>
<summary>2 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1605 ns         3815 ns         4096
data |  6 | avx            767 ns        0.000 ns         4096
data |  6 |     tbb       8478 ns        11444 ns         4096
data |  6 | avx tbb       5450 ns         3815 ns         4096
mask |  6 |               1989 ns        0.000 ns         4096
mask |  6 | avx            652 ns        0.000 ns         4096
mask |  6 |     tbb       5672 ns         3815 ns         4096
mask |  6 | avx tbb       5264 ns         7629 ns         4096

data | 12 |               1215 ns        0.000 ns         4096
data | 12 | avx            763 ns         3815 ns         4096
data | 12 |     tbb       8368 ns         7629 ns         4096
data | 12 | avx tbb       5400 ns         7629 ns         4096
mask | 12 |               1994 ns        0.000 ns         4096
mask | 12 | avx            664 ns        0.000 ns         4096
mask | 12 |     tbb       5575 ns         7629 ns         4096
mask | 12 | avx tbb       5244 ns         3815 ns         4096

data | 24 |               1015 ns         3815 ns         4096
data | 24 | avx            769 ns        0.000 ns         4096
data | 24 |     tbb       8123 ns        11444 ns         4096
data | 24 | avx tbb       5339 ns        0.000 ns         4096
mask | 24 |               1997 ns         3815 ns         4096
mask | 24 | avx            688 ns        0.000 ns         4096
mask | 24 |     tbb       5577 ns         7629 ns         4096
mask | 24 | avx tbb       5249 ns         7629 ns         4096
```

</details>

<details>
<summary>4 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               2404 ns         3815 ns         4096
data |  6 | avx            813 ns        0.000 ns         4096
data |  6 |     tbb       8572 ns        11444 ns         4096
data |  6 | avx tbb       5503 ns         3815 ns         4096
mask |  6 |               3535 ns         3815 ns         4096
mask |  6 | avx            698 ns        0.000 ns         4096
mask |  6 |     tbb       6107 ns         7629 ns         4096
mask |  6 | avx tbb       5331 ns         3815 ns         4096

data | 12 |               1618 ns        0.000 ns         4096
data | 12 | avx            808 ns        0.000 ns         4096
data | 12 |     tbb       8442 ns         7629 ns         4096
data | 12 | avx tbb       5582 ns         7629 ns         4096
mask | 12 |               3457 ns         3815 ns         4096
mask | 12 | avx            716 ns        0.000 ns         4096
mask | 12 |     tbb       6094 ns         3815 ns         4096
mask | 12 | avx tbb       5302 ns         7629 ns         4096

data | 24 |               1234 ns        0.000 ns         4096
data | 24 | avx            810 ns        0.000 ns         4096
data | 24 |     tbb       8185 ns         7629 ns         4096
data | 24 | avx tbb       5431 ns         7629 ns         4096
mask | 24 |               3426 ns         3815 ns         4096
mask | 24 | avx            734 ns        0.000 ns         4096
mask | 24 |     tbb       6121 ns         3815 ns         4096
mask | 24 | avx tbb       5284 ns         7629 ns         4096
```

</details>

<details>
<summary>8 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               4005 ns         3815 ns         4096
data |  6 | avx            904 ns         3815 ns         4096
data |  6 |     tbb       8674 ns         7629 ns         4096
data |  6 | avx tbb       5542 ns         3815 ns         4096
mask |  6 |               6308 ns         7629 ns         4096
mask |  6 | avx            786 ns        0.000 ns         4096
mask |  6 |     tbb       6872 ns         7629 ns         4096
mask |  6 | avx tbb       5388 ns         3815 ns         4096

data | 12 |               2431 ns         3815 ns         4096
data | 12 | avx            903 ns        0.000 ns         4096
data | 12 |     tbb       8520 ns         7629 ns         4096
data | 12 | avx tbb       5633 ns         7629 ns         4096
mask | 12 |               6368 ns         7629 ns         4096
mask | 12 | avx            839 ns        0.000 ns         4096
mask | 12 |     tbb       6976 ns         7629 ns         4096
mask | 12 | avx tbb       5430 ns         3815 ns         4096

data | 24 |               1638 ns         3815 ns         4096
data | 24 | avx            904 ns        0.000 ns         4096
data | 24 |     tbb       8211 ns         7629 ns         4096
data | 24 | avx tbb       5544 ns         7629 ns         4096
mask | 24 |               6462 ns         3815 ns         4096
mask | 24 | avx            827 ns        0.000 ns         4096
mask | 24 |     tbb       6995 ns         7629 ns         4096
mask | 24 | avx tbb       5391 ns         7629 ns         4096
```

</details>

<details>
<summary>16 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               7252 ns         7629 ns         4096
data |  6 | avx           1125 ns         3815 ns         4096
data |  6 |     tbb       9089 ns         3815 ns         4096
data |  6 | avx tbb       5785 ns         7629 ns         4096
mask |  6 |              12507 ns        15259 ns         4096
mask |  6 | avx           1016 ns        0.000 ns         4096
mask |  6 |     tbb       8230 ns        11444 ns         4096
mask |  6 | avx tbb       5567 ns         7629 ns         4096

data | 12 |               4097 ns         3815 ns         4096
data | 12 | avx           1157 ns         3815 ns         4096
data | 12 |     tbb       8700 ns         7629 ns         4096
data | 12 | avx tbb       5767 ns         7629 ns         4096
mask | 12 |              12070 ns        15259 ns         4096
mask | 12 | avx           1019 ns        0.000 ns         4096
mask | 12 |     tbb       8163 ns        11444 ns         4096
mask | 12 | avx tbb       5578 ns         3815 ns         4096

data | 24 |               2489 ns         3815 ns         4096
data | 24 | avx           1134 ns        0.000 ns         4096
data | 24 |     tbb       8338 ns        11444 ns         4096
data | 24 | avx tbb       5731 ns         7629 ns         4096
mask | 24 |              12040 ns        11444 ns         4096
mask | 24 | avx            952 ns         3815 ns         4096
mask | 24 |     tbb       8306 ns         7629 ns         4096
mask | 24 | avx tbb       5635 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              25569 ns        22888 ns         4096
data |  6 | avx           2129 ns         3815 ns         4096
data |  6 |     tbb      11359 ns        15259 ns         4096
data |  6 | avx tbb       6311 ns        11444 ns         4096
mask |  6 |              44429 ns        41962 ns         4096
mask |  6 | avx           2115 ns        0.000 ns         4096
mask |  6 |     tbb      14937 ns        15259 ns         4096
mask |  6 | avx tbb       6133 ns         3815 ns         4096

data | 12 |              13487 ns        15259 ns         4096
data | 12 | avx           2122 ns        0.000 ns         4096
data | 12 |     tbb       9996 ns        15259 ns         4096
data | 12 | avx tbb       6291 ns         7629 ns         4096
mask | 12 |              46780 ns        45776 ns         4096
mask | 12 | avx           2116 ns         3815 ns         4096
mask | 12 |     tbb      14810 ns        19073 ns         4096
mask | 12 | avx tbb       6183 ns         3815 ns         4096

data | 24 |               7250 ns         7629 ns         4096
data | 24 | avx           2296 ns         3815 ns         4096
data | 24 |     tbb       9159 ns        11444 ns         4096
data | 24 | avx tbb       6272 ns        0.000 ns         4096
mask | 24 |              44490 ns        41962 ns         4096
mask | 24 | avx           2159 ns        0.000 ns         4096
mask | 24 |     tbb      14793 ns        15259 ns         4096
mask | 24 | avx tbb       6095 ns        11444 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              96746 ns       106812 ns         2048
data |  6 | avx           7365 ns         7629 ns         2048
data |  6 |     tbb      21774 ns        30518 ns         2048
data |  6 | avx tbb      10349 ns        22888 ns         2048
mask |  6 |             183251 ns       183105 ns         2048
mask |  6 | avx           7484 ns         7629 ns         2048
mask |  6 |     tbb      41777 ns        30518 ns         2048
mask |  6 | avx tbb      10113 ns        22888 ns         2048

data | 12 |              49698 ns        61035 ns         2048
data | 12 | avx           7266 ns        0.000 ns         2048
data | 12 |     tbb      17126 ns        15259 ns         2048
data | 12 | avx tbb      10397 ns        0.000 ns         2048
mask | 12 |             180077 ns       183105 ns         2048
mask | 12 | avx           7464 ns        15259 ns         2048
mask | 12 |     tbb      42435 ns        45776 ns         2048
mask | 12 | avx tbb      10112 ns         7629 ns         2048

data | 24 |              26216 ns        22888 ns         2048
data | 24 | avx           7362 ns        0.000 ns         2048
data | 24 |     tbb      13954 ns        15259 ns         2048
data | 24 | avx tbb      10213 ns         7629 ns         2048
mask | 24 |             178736 ns       190735 ns         2048
mask | 24 | avx           7599 ns        15259 ns         2048
mask | 24 |     tbb      41677 ns        38147 ns         2048
mask | 24 | avx tbb      10026 ns        0.000 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             379293 ns       396729 ns         1024
data |  6 | avx          25877 ns        30518 ns         1024
data |  6 |     tbb      49746 ns        76294 ns         1024
data |  6 | avx tbb      17630 ns        0.000 ns         1024
mask |  6 |             770808 ns       778198 ns         1024
mask |  6 | avx          27162 ns        15259 ns         1024
mask |  6 |     tbb     140023 ns       137329 ns         1024
mask |  6 | avx tbb      17151 ns        15259 ns         1024

data | 12 |             192689 ns       183105 ns         1024
data | 12 | avx          26100 ns        15259 ns         1024
data | 12 |     tbb      31926 ns        0.000 ns         1024
data | 12 | avx tbb      17459 ns        0.000 ns         1024
mask | 12 |             754264 ns       732422 ns         1024
mask | 12 | avx          27178 ns        30518 ns         1024
mask | 12 |     tbb     139639 ns        76294 ns         1024
mask | 12 | avx tbb      17117 ns        30518 ns         1024

data | 24 |              99052 ns       122070 ns         1024
data | 24 | avx          26140 ns        15259 ns         1024
data | 24 |     tbb      23038 ns        15259 ns         1024
data | 24 | avx tbb      17964 ns        0.000 ns         1024
mask | 24 |             793011 ns       823975 ns         1024
mask | 24 | avx          27237 ns        30518 ns         1024
mask | 24 |     tbb     139907 ns       137329 ns         1024
mask | 24 | avx tbb      17162 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            1516365 ns      1617432 ns          512
data |  6 | avx         196585 ns       213623 ns          512
data |  6 |     tbb     221758 ns       213623 ns          512
data |  6 | avx tbb     158020 ns       122070 ns          512
mask |  6 |            3012330 ns      3051758 ns          512
mask |  6 | avx         195156 ns       274658 ns          512
mask |  6 |     tbb     565010 ns       457764 ns          512
mask |  6 | avx tbb     160105 ns       183105 ns          512

data | 12 |             775316 ns       762939 ns          512
data | 12 | avx         193732 ns       244141 ns          512
data | 12 |     tbb     195636 ns       213623 ns          512
data | 12 | avx tbb     160306 ns       122070 ns          512
mask | 12 |            2999656 ns      3112793 ns          512
mask | 12 | avx         197220 ns       213623 ns          512
mask | 12 |     tbb     565047 ns       549316 ns          512
mask | 12 | avx tbb     158076 ns       183105 ns          512

data | 24 |             418345 ns       335693 ns          512
data | 24 | avx         194847 ns       183105 ns          512
data | 24 |     tbb     192425 ns       244141 ns          512
data | 24 | avx tbb     158912 ns       183105 ns          512
mask | 24 |            2932368 ns      2929688 ns          512
mask | 24 | avx         196006 ns       244141 ns          512
mask | 24 |     tbb     565787 ns       488281 ns          512
mask | 24 | avx tbb     156883 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            6088333 ns      5859375 ns           64
data |  6 | avx         776183 ns       488281 ns           64
data |  6 |     tbb     758652 ns       976562 ns           64
data |  6 | avx tbb     632322 ns       976562 ns           64
mask |  6 |           12087178 ns     11962891 ns           64
mask |  6 | avx         792939 ns       244141 ns           64
mask |  6 |     tbb    2133367 ns      1220703 ns           64
mask |  6 | avx tbb     593716 ns       488281 ns           64

data | 12 |            3190614 ns      3173828 ns           64
data | 12 | avx         769002 ns       732422 ns           64
data | 12 |     tbb     690795 ns        0.000 ns           64
data | 12 | avx tbb     631648 ns       244141 ns           64
mask | 12 |           12149883 ns     12207031 ns           64
mask | 12 | avx         798822 ns       732422 ns           64
mask | 12 |     tbb    2121016 ns      2685547 ns           64
mask | 12 | avx tbb     593505 ns       732422 ns           64

data | 24 |            1662953 ns      1708984 ns           64
data | 24 | avx         789212 ns       976562 ns           64
data | 24 |     tbb     667022 ns       732422 ns           64
data | 24 | avx tbb     633636 ns      1220703 ns           64
mask | 24 |           12119567 ns     11962891 ns           64
mask | 24 | avx         793091 ns       732422 ns           64
mask | 24 |     tbb    2122072 ns      3173828 ns           64
mask | 24 | avx tbb     595495 ns       976562 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           24115012 ns     24414062 ns           32
data |  6 | avx        3095647 ns       976562 ns           32
data |  6 |     tbb    2699428 ns       976562 ns           32
data |  6 | avx tbb    2368606 ns      2441406 ns           32
mask |  6 |           47824150 ns     48339844 ns           32
mask |  6 | avx        3133462 ns      1464844 ns           32
mask |  6 |     tbb    8248409 ns      7812500 ns           32
mask |  6 | avx tbb    2407894 ns      2441406 ns           32

data | 12 |           12322947 ns     12207031 ns           32
data | 12 | avx        3057078 ns        0.000 ns           32
data | 12 |     tbb    2467172 ns      2929688 ns           32
data | 12 | avx tbb    2372850 ns      2929688 ns           32
mask | 12 |           48362269 ns     48828125 ns           32
mask | 12 | avx        3143838 ns      1464844 ns           32
mask | 12 |     tbb    8314331 ns      8789062 ns           32
mask | 12 | avx tbb    2360978 ns      2441406 ns           32

data | 24 |            6536250 ns      5859375 ns           32
data | 24 | avx        3079403 ns      7812500 ns           32
data | 24 |     tbb    2499428 ns      1953125 ns           32
data | 24 | avx tbb    2374647 ns      3417969 ns           32
mask | 24 |           47720150 ns     47851562 ns           32
mask | 24 | avx        3154147 ns      3417969 ns           32
mask | 24 |     tbb    8252497 ns      8300781 ns           32
mask | 24 | avx tbb    2432822 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           96386956 ns     95703125 ns           16
data |  6 | avx       12335644 ns     12695312 ns           16
data |  6 |     tbb   10235669 ns      8789062 ns           16
data |  6 | avx tbb    9272606 ns      7812500 ns           16
mask |  6 |          190417581 ns    190429688 ns           16
mask |  6 | avx       12589725 ns     13671875 ns           16
mask |  6 |     tbb   32572906 ns     30273438 ns           16
mask |  6 | avx tbb    9290575 ns      8789062 ns           16

data | 12 |           49087269 ns     48828125 ns           16
data | 12 | avx       12874906 ns     13671875 ns           16
data | 12 |     tbb    9544875 ns      7812500 ns           16
data | 12 | avx tbb    9314919 ns      9765625 ns           16
mask | 12 |          192303725 ns    190429688 ns           16
mask | 12 | avx       12873956 ns     13671875 ns           16
mask | 12 |     tbb   32996213 ns     32226562 ns           16
mask | 12 | avx tbb    9280344 ns     10742188 ns           16

data | 24 |           26559106 ns     23437500 ns           16
data | 24 | avx       12290544 ns     10742188 ns           16
data | 24 |     tbb    9463912 ns      8789062 ns           16
data | 24 | avx tbb    9295212 ns      9765625 ns           16
mask | 24 |          191813325 ns    191406250 ns           16
mask | 24 | avx       12781844 ns     11718750 ns           16
mask | 24 |     tbb   32449575 ns     31250000 ns           16
mask | 24 | avx tbb    9280881 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          193423088 ns    191406250 ns            8
data |  6 | avx       24635837 ns     21484375 ns            8
data |  6 |     tbb   20362700 ns     19531250 ns            8
data |  6 | avx tbb   18496312 ns     19531250 ns            8
mask |  6 |          381655737 ns    378906250 ns            8
mask |  6 | avx       25277800 ns     27343750 ns            8
mask |  6 |     tbb   65866725 ns     64453125 ns            8
mask |  6 | avx tbb   18495912 ns     15625000 ns            8

data | 12 |           98160600 ns     99609375 ns            8
data | 12 | avx       24750925 ns     25390625 ns            8
data | 12 |     tbb   18911513 ns     17578125 ns            8
data | 12 | avx tbb   18464425 ns     17578125 ns            8
mask | 12 |          382773200 ns    382812500 ns            8
mask | 12 | avx       25270088 ns     25390625 ns            8
mask | 12 |     tbb   64594563 ns     64453125 ns            8
mask | 12 | avx tbb   18587763 ns     19531250 ns            8

data | 24 |           52304175 ns     62500000 ns            8
data | 24 | avx       24572663 ns     23437500 ns            8
data | 24 |     tbb   18778563 ns     19531250 ns            8
data | 24 | avx tbb   18469500 ns     15625000 ns            8
mask | 24 |          385251425 ns    382812500 ns            8
mask | 24 | avx       25220437 ns     27343750 ns            8
mask | 24 |     tbb   64986487 ns     60546875 ns            8
mask | 24 | avx tbb   18503625 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          385639862 ns    386718750 ns            8
data |  6 | avx       49288587 ns     48828125 ns            8
data |  6 |     tbb   40377275 ns     37109375 ns            8
data |  6 | avx tbb   36819313 ns     37109375 ns            8
mask |  6 |          764576275 ns    767578125 ns            8
mask |  6 | avx       51006187 ns     50781250 ns            8
mask |  6 |     tbb  130791900 ns    123046875 ns            8
mask |  6 | avx tbb   37206150 ns     39062500 ns            8

data | 12 |          201121537 ns    201171875 ns            8
data | 12 | avx       49331013 ns     50781250 ns            8
data | 12 |     tbb   38286237 ns     39062500 ns            8
data | 12 | avx tbb   36851463 ns     35156250 ns            8
mask | 12 |          760593688 ns    763671875 ns            8
mask | 12 | avx       50517488 ns     50781250 ns            8
mask | 12 |     tbb  131964900 ns    117187500 ns            8
mask | 12 | avx tbb   37543912 ns     41015625 ns            8

data | 24 |          108562750 ns    109375000 ns            8
data | 24 | avx       49755525 ns     48828125 ns            8
data | 24 |     tbb   37623913 ns     35156250 ns            8
data | 24 | avx tbb   36806175 ns     39062500 ns            8
mask | 24 |          762741962 ns    761718750 ns            8
mask | 24 | avx       50685425 ns     52734375 ns            8
mask | 24 |     tbb  130067238 ns    125000000 ns            8
mask | 24 | avx tbb   36906525 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          771666125 ns    771484375 ns            8
data |  6 | avx       98530125 ns     97656250 ns            8
data |  6 |     tbb   79840937 ns     78125000 ns            8
data |  6 | avx tbb   73625913 ns     72265625 ns            8
mask |  6 |         1536975525 ns   1537109375 ns            8
mask |  6 | avx      101086013 ns     99609375 ns            8
mask |  6 |     tbb  259535875 ns    244140625 ns            8
mask |  6 | avx tbb   74573925 ns     72265625 ns            8

data | 12 |          392842288 ns    392578125 ns            8
data | 12 | avx       98821037 ns     97656250 ns            8
data | 12 |     tbb   74996487 ns     76171875 ns            8
data | 12 | avx tbb   73574262 ns     76171875 ns            8
mask | 12 |         1530138338 ns   1531250000 ns            8
mask | 12 | avx      100809837 ns     99609375 ns            8
mask | 12 |     tbb  259467913 ns    242187500 ns            8
mask | 12 | avx tbb   73840675 ns     74218750 ns            8

data | 24 |          209369837 ns    210937500 ns            8
data | 24 | avx       99366625 ns     97656250 ns            8
data | 24 |     tbb   76000600 ns     70312500 ns            8
data | 24 | avx tbb   73595512 ns     70312500 ns            8
mask | 24 |         1529849375 ns   1529296875 ns            8
mask | 24 | avx      102132313 ns    103515625 ns            8
mask | 24 |     tbb  259887125 ns    236328125 ns            8
mask | 24 | avx tbb   73661675 ns     66406250 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>1 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1857 ns         3815 ns         4096
data |  6 | avx            663 ns        0.000 ns         4096
data |  6 |     tbb       8593 ns         7629 ns         4096
data |  6 | avx tbb       5287 ns         3815 ns         4096
mask |  6 |               1169 ns         3815 ns         4096
mask |  6 | avx            577 ns        0.000 ns         4096
mask |  6 |     tbb       5282 ns         7629 ns         4096
mask |  6 | avx tbb       5227 ns         3815 ns         4096

data | 12 |                979 ns         3815 ns         4096
data | 12 | avx            722 ns        0.000 ns         4096
data | 12 |     tbb       8343 ns        11444 ns         4096
data | 12 | avx tbb       5282 ns         3815 ns         4096
mask | 12 |               1272 ns         3815 ns         4096
mask | 12 | avx            631 ns        0.000 ns         4096
mask | 12 |     tbb       5279 ns         7629 ns         4096
mask | 12 | avx tbb       5211 ns         3815 ns         4096

data | 24 |                907 ns         3815 ns         4096
data | 24 | avx            727 ns        0.000 ns         4096
data | 24 |     tbb       6615 ns         7629 ns         4096
data | 24 | avx tbb       4691 ns         7629 ns         4096
mask | 24 |               1281 ns        0.000 ns         4096
mask | 24 | avx            659 ns        0.000 ns         4096
mask | 24 |     tbb       4812 ns         3815 ns         4096
mask | 24 | avx tbb       4621 ns         3815 ns         4096
```

</details>

<details>
<summary>2 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               1597 ns        0.000 ns         4096
data |  6 | avx            759 ns         3815 ns         4096
data |  6 |     tbb       8467 ns         7629 ns         4096
data |  6 | avx tbb       5365 ns         7629 ns         4096
mask |  6 |               1995 ns        0.000 ns         4096
mask |  6 | avx            642 ns        0.000 ns         4096
mask |  6 |     tbb       5488 ns         3815 ns         4096
mask |  6 | avx tbb       5232 ns        0.000 ns         4096

data | 12 |               1210 ns        0.000 ns         4096
data | 12 | avx            755 ns        0.000 ns         4096
data | 12 |     tbb       8395 ns         7629 ns         4096
data | 12 | avx tbb       5345 ns         3815 ns         4096
mask | 12 |               1997 ns         3815 ns         4096
mask | 12 | avx            656 ns        0.000 ns         4096
mask | 12 |     tbb       5514 ns         7629 ns         4096
mask | 12 | avx tbb       5250 ns         7629 ns         4096

data | 24 |               1024 ns        0.000 ns         4096
data | 24 | avx            756 ns        0.000 ns         4096
data | 24 |     tbb       8145 ns         7629 ns         4096
data | 24 | avx tbb       5343 ns         3815 ns         4096
mask | 24 |               2003 ns        0.000 ns         4096
mask | 24 | avx            682 ns         3815 ns         4096
mask | 24 |     tbb       5530 ns         3815 ns         4096
mask | 24 | avx tbb       5240 ns         3815 ns         4096
```

</details>

<details>
<summary>4 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               2401 ns         3815 ns         4096
data |  6 | avx            809 ns        0.000 ns         4096
data |  6 |     tbb       8558 ns        11444 ns         4096
data |  6 | avx tbb       5406 ns         3815 ns         4096
mask |  6 |               3425 ns         3815 ns         4096
mask |  6 | avx            693 ns        0.000 ns         4096
mask |  6 |     tbb       5820 ns         3815 ns         4096
mask |  6 | avx tbb       5276 ns         3815 ns         4096

data | 12 |               1614 ns        0.000 ns         4096
data | 12 | avx            802 ns        0.000 ns         4096
data | 12 |     tbb       8374 ns         7629 ns         4096
data | 12 | avx tbb       5383 ns         7629 ns         4096
mask | 12 |               3450 ns         3815 ns         4096
mask | 12 | avx            704 ns        0.000 ns         4096
mask | 12 |     tbb       5885 ns         3815 ns         4096
mask | 12 | avx tbb       5294 ns         7629 ns         4096

data | 24 |               1226 ns        0.000 ns         4096
data | 24 | avx            806 ns         3815 ns         4096
data | 24 |     tbb       8154 ns         7629 ns         4096
data | 24 | avx tbb       5315 ns         7629 ns         4096
mask | 24 |               3435 ns         3815 ns         4096
mask | 24 | avx            728 ns        0.000 ns         4096
mask | 24 |     tbb       5871 ns         3815 ns         4096
mask | 24 | avx tbb       5313 ns         7629 ns         4096
```

</details>

<details>
<summary>8 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               3981 ns         3815 ns         4096
data |  6 | avx            891 ns        0.000 ns         4096
data |  6 |     tbb       8782 ns        11444 ns         4096
data |  6 | avx tbb       5554 ns         7629 ns         4096
mask |  6 |               6298 ns         7629 ns         4096
mask |  6 | avx            779 ns        0.000 ns         4096
mask |  6 |     tbb       6641 ns         7629 ns         4096
mask |  6 | avx tbb       5323 ns         7629 ns         4096

data | 12 |               2410 ns        0.000 ns         4096
data | 12 | avx            897 ns        0.000 ns         4096
data | 12 |     tbb       8450 ns        11444 ns         4096
data | 12 | avx tbb       5472 ns         3815 ns         4096
mask | 12 |               6313 ns         7629 ns         4096
mask | 12 | avx            790 ns        0.000 ns         4096
mask | 12 |     tbb       6629 ns         3815 ns         4096
mask | 12 | avx tbb       5348 ns        0.000 ns         4096

data | 24 |               1617 ns        0.000 ns         4096
data | 24 | avx            888 ns        0.000 ns         4096
data | 24 |     tbb       8168 ns         7629 ns         4096
data | 24 | avx tbb       5383 ns         7629 ns         4096
mask | 24 |               6310 ns         7629 ns         4096
mask | 24 | avx            809 ns        0.000 ns         4096
mask | 24 |     tbb       6623 ns         7629 ns         4096
mask | 24 | avx tbb       5401 ns         7629 ns         4096
```

</details>

<details>
<summary>16 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |               7218 ns         7629 ns         4096
data |  6 | avx           1130 ns         3815 ns         4096
data |  6 |     tbb       9141 ns         7629 ns         4096
data |  6 | avx tbb       5705 ns         3815 ns         4096
mask |  6 |              12070 ns        15259 ns         4096
mask |  6 | avx            992 ns        0.000 ns         4096
mask |  6 |     tbb       7807 ns         7629 ns         4096
mask |  6 | avx tbb       5490 ns         3815 ns         4096

data | 12 |               4030 ns        0.000 ns         4096
data | 12 | avx           1124 ns        0.000 ns         4096
data | 12 |     tbb       8642 ns        11444 ns         4096
data | 12 | avx tbb       5649 ns        0.000 ns         4096
mask | 12 |              12072 ns        11444 ns         4096
mask | 12 | avx            999 ns        0.000 ns         4096
mask | 12 |     tbb       7794 ns         7629 ns         4096
mask | 12 | avx tbb       5510 ns         7629 ns         4096

data | 24 |               2461 ns         3815 ns         4096
data | 24 | avx           1120 ns         3815 ns         4096
data | 24 |     tbb       8347 ns         7629 ns         4096
data | 24 | avx tbb       5603 ns         7629 ns         4096
mask | 24 |              12031 ns        15259 ns         4096
mask | 24 | avx            943 ns        0.000 ns         4096
mask | 24 |     tbb       7784 ns         7629 ns         4096
mask | 24 | avx tbb       5481 ns         7629 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              25111 ns        26703 ns         4096
data |  6 | avx           2422 ns         3815 ns         4096
data |  6 |     tbb      11346 ns        15259 ns         4096
data |  6 | avx tbb       6188 ns         3815 ns         4096
mask |  6 |              43736 ns        45776 ns         4096
mask |  6 | avx           2071 ns        0.000 ns         4096
mask |  6 |     tbb      14072 ns         7629 ns         4096
mask |  6 | avx tbb       6014 ns         7629 ns         4096

data | 12 |              13169 ns        11444 ns         4096
data | 12 | avx           2561 ns        0.000 ns         4096
data | 12 |     tbb       9820 ns        11444 ns         4096
data | 12 | avx tbb       6181 ns         3815 ns         4096
mask | 12 |              43764 ns        45776 ns         4096
mask | 12 | avx           2108 ns         3815 ns         4096
mask | 12 |     tbb      14006 ns        15259 ns         4096
mask | 12 | avx tbb       6044 ns         7629 ns         4096

data | 24 |               7208 ns         7629 ns         4096
data | 24 | avx           2617 ns         3815 ns         4096
data | 24 |     tbb       8969 ns        15259 ns         4096
data | 24 | avx tbb       6105 ns         3815 ns         4096
mask | 24 |              43788 ns        45776 ns         4096
mask | 24 | avx           2100 ns        0.000 ns         4096
mask | 24 |     tbb      14171 ns        19073 ns         4096
mask | 24 | avx tbb       6123 ns         7629 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |              99103 ns        99182 ns         2048
data |  6 | avx           8331 ns         7629 ns         2048
data |  6 |     tbb      21664 ns        38147 ns         2048
data |  6 | avx tbb      10436 ns        15259 ns         2048
mask |  6 |             170881 ns       175476 ns         2048
mask |  6 | avx           7401 ns        0.000 ns         2048
mask |  6 |     tbb      40938 ns        53406 ns         2048
mask |  6 | avx tbb       9931 ns        15259 ns         2048

data | 12 |              49802 ns        45776 ns         2048
data | 12 | avx           8338 ns         7629 ns         2048
data | 12 |     tbb      16643 ns        15259 ns         2048
data | 12 | avx tbb      10369 ns         7629 ns         2048
mask | 12 |             173315 ns       183105 ns         2048
mask | 12 | avx           7522 ns        15259 ns         2048
mask | 12 |     tbb      40716 ns        38147 ns         2048
mask | 12 | avx tbb       9923 ns        0.000 ns         2048

data | 24 |              26438 ns        38147 ns         2048
data | 24 | avx           8459 ns         7629 ns         2048
data | 24 |     tbb      13956 ns        22888 ns         2048
data | 24 | avx tbb      10255 ns        15259 ns         2048
mask | 24 |             174409 ns       167847 ns         2048
mask | 24 | avx           7440 ns         7629 ns         2048
mask | 24 |     tbb      40455 ns        45776 ns         2048
mask | 24 | avx tbb       9979 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |             379654 ns       350952 ns         1024
data |  6 | avx          30864 ns        45776 ns         1024
data |  6 |     tbb      51142 ns        45776 ns         1024
data |  6 | avx tbb      17689 ns        0.000 ns         1024
mask |  6 |             678523 ns       717163 ns         1024
mask |  6 | avx          27549 ns        45776 ns         1024
mask |  6 |     tbb     137473 ns       152588 ns         1024
mask |  6 | avx tbb      17534 ns        0.000 ns         1024

data | 12 |             192776 ns       167847 ns         1024
data | 12 | avx          30917 ns        15259 ns         1024
data | 12 |     tbb      32116 ns        15259 ns         1024
data | 12 | avx tbb      17564 ns        30518 ns         1024
mask | 12 |             682770 ns       686646 ns         1024
mask | 12 | avx          27485 ns        15259 ns         1024
mask | 12 |     tbb     138596 ns       106812 ns         1024
mask | 12 | avx tbb      17281 ns        30518 ns         1024

data | 24 |              99008 ns       106812 ns         1024
data | 24 | avx          31379 ns        30518 ns         1024
data | 24 |     tbb      23067 ns        30518 ns         1024
data | 24 | avx tbb      17502 ns        0.000 ns         1024
mask | 24 |             678802 ns       671387 ns         1024
mask | 24 | avx          27835 ns        30518 ns         1024
mask | 24 |     tbb     136333 ns       152588 ns         1024
mask | 24 | avx tbb      17240 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            1521571 ns      1495361 ns          512
data |  6 | avx         210435 ns       213623 ns          512
data |  6 |     tbb     220518 ns       183105 ns          512
data |  6 | avx tbb     157688 ns       244141 ns          512
mask |  6 |            2708061 ns      2716064 ns          512
mask |  6 | avx         197151 ns       152588 ns          512
mask |  6 |     tbb     556593 ns       579834 ns          512
mask |  6 | avx tbb     156387 ns       213623 ns          512

data | 12 |             778426 ns       793457 ns          512
data | 12 | avx         210908 ns       274658 ns          512
data | 12 |     tbb     202745 ns       274658 ns          512
data | 12 | avx tbb     157404 ns       213623 ns          512
mask | 12 |            2707665 ns      2685547 ns          512
mask | 12 | avx         197179 ns       152588 ns          512
mask | 12 |     tbb     561789 ns       579834 ns          512
mask | 12 | avx tbb     156701 ns       183105 ns          512

data | 24 |             418019 ns       488281 ns          512
data | 24 | avx         210566 ns       274658 ns          512
data | 24 |     tbb     186915 ns       213623 ns          512
data | 24 | avx tbb     157918 ns       213623 ns          512
mask | 24 |            2714612 ns      2716064 ns          512
mask | 24 | avx         196798 ns        91553 ns          512
mask | 24 |     tbb     557206 ns       579834 ns          512
mask | 24 | avx tbb     158039 ns       213623 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |            6075173 ns      6103516 ns           64
data |  6 | avx         846031 ns       732422 ns           64
data |  6 |     tbb     760420 ns       488281 ns           64
data |  6 | avx tbb     627703 ns       732422 ns           64
mask |  6 |           10894230 ns     10253906 ns           64
mask |  6 | avx         790558 ns       244141 ns           64
mask |  6 |     tbb    2114122 ns      1708984 ns           64
mask |  6 | avx tbb     603750 ns       732422 ns           64

data | 12 |            3136833 ns      3173828 ns           64
data | 12 | avx         839797 ns       732422 ns           64
data | 12 |     tbb     687762 ns      1464844 ns           64
data | 12 | avx tbb     631605 ns       488281 ns           64
mask | 12 |           10942467 ns      9765625 ns           64
mask | 12 | avx         783670 ns       732422 ns           64
mask | 12 |     tbb    2115508 ns      1708984 ns           64
mask | 12 | avx tbb     597775 ns       244141 ns           64

data | 24 |            1649408 ns      1464844 ns           64
data | 24 | avx         887525 ns       732422 ns           64
data | 24 |     tbb     667675 ns       732422 ns           64
data | 24 | avx tbb     632898 ns       488281 ns           64
mask | 24 |           10871744 ns     10986328 ns           64
mask | 24 | avx         797909 ns       732422 ns           64
mask | 24 |     tbb    2113537 ns      2441406 ns           64
mask | 24 | avx tbb     593533 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           24161034 ns     22460938 ns           32
data |  6 | avx        3436816 ns      4394531 ns           32
data |  6 |     tbb    2658081 ns       976562 ns           32
data |  6 | avx tbb    2371516 ns      2441406 ns           32
mask |  6 |           43295991 ns     43945312 ns           32
mask |  6 | avx        3243247 ns      1953125 ns           32
mask |  6 |     tbb    8238141 ns      7812500 ns           32
mask |  6 | avx tbb    2359453 ns      1953125 ns           32

data | 12 |           12410253 ns     14160156 ns           32
data | 12 | avx        3362697 ns      1464844 ns           32
data | 12 |     tbb    2468603 ns      3417969 ns           32
data | 12 | avx tbb    2368759 ns      1953125 ns           32
mask | 12 |           43227341 ns     41992188 ns           32
mask | 12 | avx        3162125 ns      3417969 ns           32
mask | 12 |     tbb    8254759 ns      7812500 ns           32
mask | 12 | avx tbb    2359706 ns      1953125 ns           32

data | 24 |            6722884 ns      6347656 ns           32
data | 24 | avx        3379984 ns      3906250 ns           32
data | 24 |     tbb    2437944 ns      2441406 ns           32
data | 24 | avx tbb    2437600 ns      1953125 ns           32
mask | 24 |           43244328 ns     42480469 ns           32
mask | 24 | avx        3154525 ns      1464844 ns           32
mask | 24 |     tbb    8166728 ns      7324219 ns           32
mask | 24 | avx tbb    2355541 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |           96562925 ns     97656250 ns           16
data |  6 | avx       13471763 ns     13671875 ns           16
data |  6 |     tbb   10101169 ns      5859375 ns           16
data |  6 | avx tbb    9279537 ns      7812500 ns           16
mask |  6 |          173154888 ns    173828125 ns           16
mask |  6 | avx       13113462 ns     15625000 ns           16
mask |  6 |     tbb   32493131 ns     31250000 ns           16
mask |  6 | avx tbb    9273800 ns      9765625 ns           16

data | 12 |           49877413 ns     49804688 ns           16
data | 12 | avx       13630169 ns     13671875 ns           16
data | 12 |     tbb    9572100 ns      9765625 ns           16
data | 12 | avx tbb    9284125 ns      8789062 ns           16
mask | 12 |          176868419 ns    178710938 ns           16
mask | 12 | avx       12739181 ns     12695312 ns           16
mask | 12 |     tbb   32430719 ns     30273438 ns           16
mask | 12 | avx tbb    9780706 ns     11718750 ns           16

data | 24 |           26740169 ns     30273438 ns           16
data | 24 | avx       13504087 ns     13671875 ns           16
data | 24 |     tbb    9457594 ns      7812500 ns           16
data | 24 | avx tbb    9301019 ns      7812500 ns           16
mask | 24 |          173073469 ns    175781250 ns           16
mask | 24 | avx       12897269 ns     13671875 ns           16
mask | 24 |     tbb   32393250 ns     32226562 ns           16
mask | 24 | avx tbb    9281300 ns     11718750 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          193973200 ns    187500000 ns            8
data |  6 | avx       27035225 ns     25390625 ns            8
data |  6 |     tbb   19977738 ns     19531250 ns            8
data |  6 | avx tbb   18685387 ns     15625000 ns            8
mask |  6 |          346446487 ns    345703125 ns            8
mask |  6 | avx       25366950 ns     27343750 ns            8
mask |  6 |     tbb   64472475 ns     62500000 ns            8
mask |  6 | avx tbb   18450538 ns     17578125 ns            8

data | 12 |           99781225 ns    101562500 ns            8
data | 12 | avx       28787187 ns     29296875 ns            8
data | 12 |     tbb   18913550 ns     17578125 ns            8
data | 12 | avx tbb   18459313 ns     15625000 ns            8
mask | 12 |          344966937 ns    347656250 ns            8
mask | 12 | avx       25307500 ns     29296875 ns            8
mask | 12 |     tbb   65257063 ns     62500000 ns            8
mask | 12 | avx tbb   18485188 ns     19531250 ns            8

data | 24 |           52411100 ns     54687500 ns            8
data | 24 | avx       27143637 ns     25390625 ns            8
data | 24 |     tbb   18869825 ns     21484375 ns            8
data | 24 | avx tbb   18484000 ns     19531250 ns            8
mask | 24 |          345581612 ns    343750000 ns            8
mask | 24 | avx       25437212 ns     27343750 ns            8
mask | 24 |     tbb   64740000 ns     64453125 ns            8
mask | 24 | avx tbb   18546138 ns     15625000 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          385604512 ns    388671875 ns            8
data |  6 | avx       55514625 ns     54687500 ns            8
data |  6 |     tbb   40404275 ns     39062500 ns            8
data |  6 | avx tbb   36859662 ns     39062500 ns            8
mask |  6 |          692144438 ns    695312500 ns            8
mask |  6 | avx       50658850 ns     50781250 ns            8
mask |  6 |     tbb  129973325 ns    125000000 ns            8
mask |  6 | avx tbb   36881988 ns     41015625 ns            8

data | 12 |          196292325 ns    197265625 ns            8
data | 12 | avx       55801550 ns     54687500 ns            8
data | 12 |     tbb   37673213 ns     35156250 ns            8
data | 12 | avx tbb   36886225 ns     39062500 ns            8
mask | 12 |          690905625 ns    689453125 ns            8
mask | 12 | avx       55423788 ns     54687500 ns            8
mask | 12 |     tbb  128783550 ns    126953125 ns            8
mask | 12 | avx tbb   36850800 ns     37109375 ns            8

data | 24 |          106133688 ns    107421875 ns            8
data | 24 | avx       55667038 ns     56640625 ns            8
data | 24 |     tbb   37569837 ns     39062500 ns            8
data | 24 | avx tbb   36865763 ns     41015625 ns            8
mask | 24 |          690847937 ns    691406250 ns            8
mask | 24 | avx       51181750 ns     48828125 ns            8
mask | 24 |     tbb  128931887 ns    121093750 ns            8
mask | 24 | avx tbb   37122163 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```

--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  6 |          771136575 ns    769531250 ns            8
data |  6 | avx      109708862 ns    107421875 ns            8
data |  6 |     tbb   81190737 ns     78125000 ns            8
data |  6 | avx tbb   73665225 ns     72265625 ns            8
mask |  6 |         1382810113 ns   1382812500 ns            8
mask |  6 | avx      101533575 ns     97656250 ns            8
mask |  6 |     tbb  259795188 ns    240234375 ns            8
mask |  6 | avx tbb   73640013 ns     70312500 ns            8

data | 12 |          394774425 ns    392578125 ns            8
data | 12 | avx      110098525 ns    111328125 ns            8
data | 12 |     tbb   75394987 ns     68359375 ns            8
data | 12 | avx tbb   73597887 ns     72265625 ns            8
mask | 12 |         1380130750 ns   1378906250 ns            8
mask | 12 | avx      102371725 ns    103515625 ns            8
mask | 12 |     tbb  260578613 ns    238281250 ns            8
mask | 12 | avx tbb   73644837 ns     74218750 ns            8

data | 24 |          215723562 ns    218750000 ns            8
data | 24 | avx      111102900 ns    111328125 ns            8
data | 24 |     tbb   75078025 ns     76171875 ns            8
data | 24 | avx tbb   74396175 ns     72265625 ns            8
mask | 24 |         1381111738 ns   1380859375 ns            8
mask | 24 | avx      102408587 ns     99609375 ns            8
mask | 24 |     tbb  260428512 ns    246093750 ns            8
mask | 24 | avx tbb   73566900 ns     74218750 ns            8
```

</details>

