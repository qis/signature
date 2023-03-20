# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |                796 ns        0.000 ns         4096
data |  1 | avx            724 ns        0.000 ns         4096
data |  1 |     tbb       5513 ns         7629 ns         4096
data |  1 | avx tbb        709 ns        0.000 ns         4096
mask |  1 |                751 ns        0.000 ns         4096
mask |  1 | avx            716 ns        0.000 ns         4096
mask |  1 |     tbb       5506 ns         7629 ns         4096
mask |  1 | avx tbb        750 ns         3815 ns         4096

data |  2 |              20598 ns        22888 ns         4096
data |  2 | avx           1086 ns        0.000 ns         4096
data |  2 |     tbb      11060 ns         7629 ns         4096
data |  2 | avx tbb       1153 ns        0.000 ns         4096
mask |  2 |              13605 ns        15259 ns         4096
mask |  2 | avx           1028 ns         3815 ns         4096
mask |  2 |     tbb       8339 ns        11444 ns         4096
mask |  2 | avx tbb       1013 ns        0.000 ns         4096

data |  3 |              13876 ns        11444 ns         4096
data |  3 | avx            980 ns        0.000 ns         4096
data |  3 |     tbb      10087 ns        11444 ns         4096
data |  3 | avx tbb        984 ns        0.000 ns         4096
mask |  3 |              11274 ns         7629 ns         4096
mask |  3 | avx            931 ns        0.000 ns         4096
mask |  3 |     tbb       8307 ns         7629 ns         4096
mask |  3 | avx tbb        932 ns        0.000 ns         4096

data |  4 |              10815 ns        11444 ns         4096
data |  4 | avx            972 ns        0.000 ns         4096
data |  4 |     tbb       9656 ns        11444 ns         4096
data |  4 | avx tbb        992 ns        0.000 ns         4096
mask |  4 |              13592 ns        11444 ns         4096
mask |  4 | avx            944 ns        0.000 ns         4096
mask |  4 |     tbb       8343 ns        11444 ns         4096
mask |  4 | avx tbb        948 ns        0.000 ns         4096

data |  5 |               8655 ns         7629 ns         4096
data |  5 | avx            970 ns        0.000 ns         4096
data |  5 |     tbb       9618 ns         7629 ns         4096
data |  5 | avx tbb       1001 ns        0.000 ns         4096
mask |  5 |              11604 ns         7629 ns         4096
mask |  5 | avx            987 ns        0.000 ns         4096
mask |  5 |     tbb       8320 ns         7629 ns         4096
mask |  5 | avx tbb       1009 ns        0.000 ns         4096

data |  6 |               7791 ns        11444 ns         4096
data |  6 | avx           1035 ns        0.000 ns         4096
data |  6 |     tbb       9240 ns        11444 ns         4096
data |  6 | avx tbb       1093 ns         3815 ns         4096
mask |  6 |              11679 ns        11444 ns         4096
mask |  6 | avx            929 ns         3815 ns         4096
mask |  6 |     tbb       8312 ns        11444 ns         4096
mask |  6 | avx tbb        941 ns        0.000 ns         4096

data |  7 |               6395 ns         3815 ns         4096
data |  7 | avx           1033 ns        0.000 ns         4096
data |  7 |     tbb       9289 ns        11444 ns         4096
data |  7 | avx tbb       1094 ns        0.000 ns         4096
mask |  7 |              11531 ns        11444 ns         4096
mask |  7 | avx            950 ns         3815 ns         4096
mask |  7 |     tbb       8357 ns         7629 ns         4096
mask |  7 | avx tbb       1008 ns        0.000 ns         4096

data |  8 |               6168 ns         3815 ns         4096
data |  8 | avx           1087 ns        0.000 ns         4096
data |  8 |     tbb       8983 ns         7629 ns         4096
data |  8 | avx tbb       1074 ns        0.000 ns         4096
mask |  8 |              11463 ns        11444 ns         4096
mask |  8 | avx           1004 ns        0.000 ns         4096
mask |  8 |     tbb       8299 ns         7629 ns         4096
mask |  8 | avx tbb       1012 ns        0.000 ns         4096

data |  9 |               5488 ns         3815 ns         4096
data |  9 | avx            936 ns         3815 ns         4096
data |  9 |     tbb       8929 ns        11444 ns         4096
data |  9 | avx tbb        955 ns        0.000 ns         4096
mask |  9 |              12021 ns        11444 ns         4096
mask |  9 | avx            998 ns        0.000 ns         4096
mask |  9 |     tbb       8372 ns        11444 ns         4096
mask |  9 | avx tbb       1010 ns         3815 ns         4096

data | 10 |               5034 ns         7629 ns         4096
data | 10 | avx           1006 ns        0.000 ns         4096
data | 10 |     tbb       8852 ns         7629 ns         4096
data | 10 | avx tbb       1014 ns        0.000 ns         4096
mask | 10 |              12126 ns        11444 ns         4096
mask | 10 | avx           1095 ns         3815 ns         4096
mask | 10 |     tbb       8341 ns        11444 ns         4096
mask | 10 | avx tbb       1110 ns        0.000 ns         4096

data | 11 |               4650 ns         3815 ns         4096
data | 11 | avx           1006 ns         3815 ns         4096
data | 11 |     tbb       8827 ns        11444 ns         4096
data | 11 | avx tbb        963 ns        0.000 ns         4096
mask | 11 |              11386 ns        11444 ns         4096
mask | 11 | avx            935 ns        0.000 ns         4096
mask | 11 |     tbb       8459 ns        11444 ns         4096
mask | 11 | avx tbb        978 ns         3815 ns         4096

data | 12 |               4204 ns         3815 ns         4096
data | 12 | avx           1047 ns        0.000 ns         4096
data | 12 |     tbb       8916 ns        11444 ns         4096
data | 12 | avx tbb       1031 ns         3815 ns         4096
mask | 12 |              11382 ns        11444 ns         4096
mask | 12 | avx            944 ns        0.000 ns         4096
mask | 12 |     tbb       8317 ns        11444 ns         4096
mask | 12 | avx tbb        985 ns        0.000 ns         4096

data | 13 |               4079 ns         3815 ns         4096
data | 13 | avx           1005 ns        0.000 ns         4096
data | 13 |     tbb       8714 ns        11444 ns         4096
data | 13 | avx tbb       1004 ns         3815 ns         4096
mask | 13 |              12113 ns        11444 ns         4096
mask | 13 | avx           1024 ns        0.000 ns         4096
mask | 13 |     tbb       8311 ns         7629 ns         4096
mask | 13 | avx tbb       1017 ns         3815 ns         4096

data | 14 |               3782 ns         3815 ns         4096
data | 14 | avx           1011 ns        0.000 ns         4096
data | 14 |     tbb       8769 ns         3815 ns         4096
data | 14 | avx tbb        992 ns        0.000 ns         4096
mask | 14 |              12040 ns        15259 ns         4096
mask | 14 | avx           1033 ns        0.000 ns         4096
mask | 14 |     tbb       8426 ns         7629 ns         4096
mask | 14 | avx tbb       1010 ns        0.000 ns         4096

data | 15 |               3638 ns        0.000 ns         4096
data | 15 | avx            994 ns        0.000 ns         4096
data | 15 |     tbb       8614 ns         7629 ns         4096
data | 15 | avx tbb       1025 ns        0.000 ns         4096
mask | 15 |              12134 ns        11444 ns         4096
mask | 15 | avx           1023 ns        0.000 ns         4096
mask | 15 |     tbb       8339 ns         7629 ns         4096
mask | 15 | avx tbb       1035 ns         3815 ns         4096

data | 16 |               3489 ns         3815 ns         4096
data | 16 | avx           1005 ns        0.000 ns         4096
data | 16 |     tbb       8585 ns         7629 ns         4096
data | 16 | avx tbb       1014 ns        0.000 ns         4096
mask | 16 |              11526 ns        11444 ns         4096
mask | 16 | avx            962 ns        0.000 ns         4096
mask | 16 |     tbb       8345 ns         7629 ns         4096
mask | 16 | avx tbb        975 ns        0.000 ns         4096

data | 17 |               3167 ns         3815 ns         4096
data | 17 | avx           1068 ns        0.000 ns         4096
data | 17 |     tbb       8568 ns         7629 ns         4096
data | 17 | avx tbb       1075 ns        0.000 ns         4096
mask | 17 |              11459 ns        15259 ns         4096
mask | 17 | avx           1112 ns        0.000 ns         4096
mask | 17 |     tbb       8331 ns         7629 ns         4096
mask | 17 | avx tbb       1166 ns        0.000 ns         4096

data | 18 |               3280 ns        0.000 ns         4096
data | 18 | avx           1090 ns        0.000 ns         4096
data | 18 |     tbb       8595 ns         7629 ns         4096
data | 18 | avx tbb       1067 ns         3815 ns         4096
mask | 18 |              11842 ns        15259 ns         4096
mask | 18 | avx           1122 ns        0.000 ns         4096
mask | 18 |     tbb       8287 ns         3815 ns         4096
mask | 18 | avx tbb       1115 ns        0.000 ns         4096

data | 19 |               3083 ns         3815 ns         4096
data | 19 | avx           1095 ns        0.000 ns         4096
data | 19 |     tbb       8595 ns         7629 ns         4096
data | 19 | avx tbb       1086 ns        0.000 ns         4096
mask | 19 |              11842 ns        15259 ns         4096
mask | 19 | avx           1100 ns        0.000 ns         4096
mask | 19 |     tbb       8292 ns         7629 ns         4096
mask | 19 | avx tbb       1110 ns        0.000 ns         4096

data | 20 |               2983 ns         3815 ns         4096
data | 20 | avx           1077 ns        0.000 ns         4096
data | 20 |     tbb       8495 ns         7629 ns         4096
data | 20 | avx tbb       1099 ns         3815 ns         4096
mask | 20 |              11827 ns        15259 ns         4096
mask | 20 | avx           1117 ns        0.000 ns         4096
mask | 20 |     tbb       8309 ns         7629 ns         4096
mask | 20 | avx tbb       1105 ns        0.000 ns         4096

data | 21 |               2864 ns         3815 ns         4096
data | 21 | avx           1082 ns        0.000 ns         4096
data | 21 |     tbb       8480 ns         3815 ns         4096
data | 21 | avx tbb       1014 ns        0.000 ns         4096
mask | 21 |              11156 ns        11444 ns         4096
mask | 21 | avx           1041 ns        0.000 ns         4096
mask | 21 |     tbb       8340 ns        11444 ns         4096
mask | 21 | avx tbb       1094 ns        0.000 ns         4096

data | 22 |               2689 ns         3815 ns         4096
data | 22 | avx           1076 ns         3815 ns         4096
data | 22 |     tbb       8485 ns         7629 ns         4096
data | 22 | avx tbb       1129 ns        0.000 ns         4096
mask | 22 |              12120 ns        11444 ns         4096
mask | 22 | avx           1117 ns         3815 ns         4096
mask | 22 |     tbb       8353 ns        11444 ns         4096
mask | 22 | avx tbb       1129 ns         3815 ns         4096

data | 23 |               2797 ns         3815 ns         4096
data | 23 | avx           1097 ns        0.000 ns         4096
data | 23 |     tbb       8446 ns        11444 ns         4096
data | 23 | avx tbb       1025 ns        0.000 ns         4096
mask | 23 |              11320 ns        11444 ns         4096
mask | 23 | avx           1047 ns         3815 ns         4096
mask | 23 |     tbb       8334 ns         7629 ns         4096
mask | 23 | avx tbb       1102 ns        0.000 ns         4096

data | 24 |               2552 ns        0.000 ns         4096
data | 24 | avx           1097 ns        0.000 ns         4096
data | 24 |     tbb       8508 ns         7629 ns         4096
data | 24 | avx tbb       1088 ns         3815 ns         4096
mask | 24 |              12171 ns        15259 ns         4096
mask | 24 | avx           1110 ns         3815 ns         4096
mask | 24 |     tbb       8221 ns         3815 ns         4096
mask | 24 | avx tbb       1125 ns        0.000 ns         4096

data | 25 |               2561 ns        0.000 ns         4096
data | 25 | avx           1097 ns        0.000 ns         4096
data | 25 |     tbb       8345 ns         7629 ns         4096
data | 25 | avx tbb       1112 ns         3815 ns         4096
mask | 25 |              12079 ns        11444 ns         4096
mask | 25 | avx           1129 ns        0.000 ns         4096
mask | 25 |     tbb       8315 ns         7629 ns         4096
mask | 25 | avx tbb       1249 ns        0.000 ns         4096

data | 26 |               2502 ns         3815 ns         4096
data | 26 | avx           1102 ns        0.000 ns         4096
data | 26 |     tbb       8401 ns         7629 ns         4096
data | 26 | avx tbb       1090 ns        0.000 ns         4096
mask | 26 |              11824 ns        15259 ns         4096
mask | 26 | avx           1114 ns        0.000 ns         4096
mask | 26 |     tbb       8326 ns         7629 ns         4096
mask | 26 | avx tbb       1116 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1515 ns         3815 ns         4096
data |  1 | avx           1378 ns        0.000 ns         4096
data |  1 |     tbb       5879 ns         3815 ns         4096
data |  1 | avx tbb       1348 ns        0.000 ns         4096
mask |  1 |               1530 ns        0.000 ns         4096
mask |  1 | avx           1354 ns        0.000 ns         4096
mask |  1 |     tbb       5875 ns         3815 ns         4096
mask |  1 | avx tbb       1404 ns         3815 ns         4096

data |  2 |              79912 ns        72479 ns         4096
data |  2 | avx           2342 ns         3815 ns         4096
data |  2 |     tbb      17296 ns        15259 ns         4096
data |  2 | avx tbb       2484 ns        0.000 ns         4096
mask |  2 |              48281 ns        45776 ns         4096
mask |  2 | avx           2361 ns        0.000 ns         4096
mask |  2 |     tbb      15353 ns        19073 ns         4096
mask |  2 | avx tbb       2491 ns         7629 ns         4096

data |  3 |              56511 ns        53406 ns         4096
data |  3 | avx           2191 ns         3815 ns         4096
data |  3 |     tbb      14536 ns        11444 ns         4096
data |  3 | avx tbb       2142 ns        0.000 ns         4096
mask |  3 |              49378 ns        53406 ns         4096
mask |  3 | avx           2173 ns         3815 ns         4096
mask |  3 |     tbb      14907 ns        15259 ns         4096
mask |  3 | avx tbb       2259 ns         3815 ns         4096

data |  4 |              41674 ns        41962 ns         4096
data |  4 | avx           2043 ns         3815 ns         4096
data |  4 |     tbb      13110 ns        15259 ns         4096
data |  4 | avx tbb       2162 ns        0.000 ns         4096
mask |  4 |              50077 ns        53406 ns         4096
mask |  4 | avx           2189 ns        0.000 ns         4096
mask |  4 |     tbb      14909 ns        19073 ns         4096
mask |  4 | avx tbb       2237 ns        0.000 ns         4096

data |  5 |              33767 ns        34332 ns         4096
data |  5 | avx           1925 ns         3815 ns         4096
data |  5 |     tbb      12787 ns        15259 ns         4096
data |  5 | avx tbb       1967 ns         3815 ns         4096
mask |  5 |              51715 ns        45776 ns         4096
mask |  5 | avx           2169 ns         3815 ns         4096
mask |  5 |     tbb      14910 ns        19073 ns         4096
mask |  5 | avx tbb       2283 ns        0.000 ns         4096

data |  6 |              28357 ns        22888 ns         4096
data |  6 | avx           2127 ns         3815 ns         4096
data |  6 |     tbb      11911 ns        11444 ns         4096
data |  6 | avx tbb       2174 ns         3815 ns         4096
mask |  6 |              45190 ns        49591 ns         4096
mask |  6 | avx           2210 ns        0.000 ns         4096
mask |  6 |     tbb      14881 ns        15259 ns         4096
mask |  6 | avx tbb       2311 ns        0.000 ns         4096

data |  7 |              23809 ns        15259 ns         4096
data |  7 | avx           2176 ns        0.000 ns         4096
data |  7 |     tbb      11420 ns         7629 ns         4096
data |  7 | avx tbb       2144 ns        0.000 ns         4096
mask |  7 |              44518 ns        41962 ns         4096
mask |  7 | avx           2185 ns        0.000 ns         4096
mask |  7 |     tbb      14898 ns        15259 ns         4096
mask |  7 | avx tbb       2276 ns        0.000 ns         4096

data |  8 |              21251 ns        22888 ns         4096
data |  8 | avx           2153 ns         3815 ns         4096
data |  8 |     tbb      11025 ns        11444 ns         4096
data |  8 | avx tbb       2100 ns         3815 ns         4096
mask |  8 |              44851 ns        45776 ns         4096
mask |  8 | avx           2173 ns         3815 ns         4096
mask |  8 |     tbb      14920 ns        15259 ns         4096
mask |  8 | avx tbb       2301 ns         3815 ns         4096

data |  9 |              19149 ns        15259 ns         4096
data |  9 | avx           2014 ns        0.000 ns         4096
data |  9 |     tbb      10807 ns         7629 ns         4096
data |  9 | avx tbb       2052 ns         3815 ns         4096
mask |  9 |              44490 ns        41962 ns         4096
mask |  9 | avx           2190 ns         3815 ns         4096
mask |  9 |     tbb      14895 ns        11444 ns         4096
mask |  9 | avx tbb       2318 ns         3815 ns         4096

data | 10 |              17372 ns        19073 ns         4096
data | 10 | avx           2053 ns         3815 ns         4096
data | 10 |     tbb      10673 ns         7629 ns         4096
data | 10 | avx tbb       2023 ns         3815 ns         4096
mask | 10 |              44968 ns        41962 ns         4096
mask | 10 | avx           2391 ns        0.000 ns         4096
mask | 10 |     tbb      14939 ns        15259 ns         4096
mask | 10 | avx tbb       2520 ns         3815 ns         4096

data | 11 |              15877 ns        19073 ns         4096
data | 11 | avx           2057 ns         3815 ns         4096
data | 11 |     tbb      10284 ns         7629 ns         4096
data | 11 | avx tbb       2018 ns        0.000 ns         4096
mask | 11 |              45363 ns        45776 ns         4096
mask | 11 | avx           2166 ns         3815 ns         4096
mask | 11 |     tbb      14893 ns        11444 ns         4096
mask | 11 | avx tbb       2310 ns        0.000 ns         4096

data | 12 |              14586 ns        15259 ns         4096
data | 12 | avx           2174 ns        0.000 ns         4096
data | 12 |     tbb       9970 ns        11444 ns         4096
data | 12 | avx tbb       2134 ns        0.000 ns         4096
mask | 12 |              44670 ns        45776 ns         4096
mask | 12 | avx           2195 ns        0.000 ns         4096
mask | 12 |     tbb      14909 ns        11444 ns         4096
mask | 12 | avx tbb       2311 ns        0.000 ns         4096

data | 13 |              13379 ns        15259 ns         4096
data | 13 | avx           2071 ns         3815 ns         4096
data | 13 |     tbb       9961 ns         7629 ns         4096
data | 13 | avx tbb       2035 ns        0.000 ns         4096
mask | 13 |              44838 ns        45776 ns         4096
mask | 13 | avx           2190 ns        0.000 ns         4096
mask | 13 |     tbb      14882 ns        11444 ns         4096
mask | 13 | avx tbb       2322 ns         3815 ns         4096

data | 14 |              12318 ns        11444 ns         4096
data | 14 | avx           2079 ns         3815 ns         4096
data | 14 |     tbb       9775 ns        11444 ns         4096
data | 14 | avx tbb       2107 ns        0.000 ns         4096
mask | 14 |              43361 ns        45776 ns         4096
mask | 14 | avx           2197 ns        0.000 ns         4096
mask | 14 |     tbb      14944 ns        11444 ns         4096
mask | 14 | avx tbb       2316 ns        0.000 ns         4096

data | 15 |              11567 ns        11444 ns         4096
data | 15 | avx           1921 ns        0.000 ns         4096
data | 15 |     tbb       9706 ns        15259 ns         4096
data | 15 | avx tbb       2120 ns         3815 ns         4096
mask | 15 |              45007 ns        41962 ns         4096
mask | 15 | avx           2220 ns         3815 ns         4096
mask | 15 |     tbb      15190 ns        15259 ns         4096
mask | 15 | avx tbb       2276 ns         3815 ns         4096

data | 16 |              11604 ns        11444 ns         4096
data | 16 | avx           2027 ns         3815 ns         4096
data | 16 |     tbb       9548 ns        11444 ns         4096
data | 16 | avx tbb       2087 ns         3815 ns         4096
mask | 16 |              45225 ns        41962 ns         4096
mask | 16 | avx           2206 ns        0.000 ns         4096
mask | 16 |     tbb      15253 ns        11444 ns         4096
mask | 16 | avx tbb       2259 ns        0.000 ns         4096

data | 17 |              10595 ns         7629 ns         4096
data | 17 | avx           2270 ns         7629 ns         4096
data | 17 |     tbb       9514 ns         3815 ns         4096
data | 17 | avx tbb       2269 ns        0.000 ns         4096
mask | 17 |              42993 ns        41962 ns         4096
mask | 17 | avx           2371 ns        0.000 ns         4096
mask | 17 |     tbb      14931 ns        15259 ns         4096
mask | 17 | avx tbb       2515 ns        0.000 ns         4096

data | 18 |               9932 ns        11444 ns         4096
data | 18 | avx           2134 ns        0.000 ns         4096
data | 18 |     tbb       9504 ns         7629 ns         4096
data | 18 | avx tbb       2286 ns         3815 ns         4096
mask | 18 |              43486 ns        45776 ns         4096
mask | 18 | avx           2385 ns         3815 ns         4096
mask | 18 |     tbb      14979 ns        11444 ns         4096
mask | 18 | avx tbb       2930 ns         3815 ns         4096

data | 19 |               9785 ns        11444 ns         4096
data | 19 | avx           2296 ns         3815 ns         4096
data | 19 |     tbb       9456 ns        15259 ns         4096
data | 19 | avx tbb       2244 ns        0.000 ns         4096
mask | 19 |              44530 ns        45776 ns         4096
mask | 19 | avx           2383 ns        0.000 ns         4096
mask | 19 |     tbb      14882 ns        19073 ns         4096
mask | 19 | avx tbb       2463 ns         3815 ns         4096

data | 20 |               8977 ns         7629 ns         4096
data | 20 | avx           2263 ns        0.000 ns         4096
data | 20 |     tbb       9516 ns         7629 ns         4096
data | 20 | avx tbb       2281 ns         3815 ns         4096
mask | 20 |              43274 ns        45776 ns         4096
mask | 20 | avx           2381 ns         3815 ns         4096
mask | 20 |     tbb      14908 ns        11444 ns         4096
mask | 20 | avx tbb       2468 ns         3815 ns         4096

data | 21 |               8556 ns        11444 ns         4096
data | 21 | avx           2157 ns         3815 ns         4096
data | 21 |     tbb       9299 ns         3815 ns         4096
data | 21 | avx tbb       2155 ns         3815 ns         4096
mask | 21 |              42989 ns        38147 ns         4096
mask | 21 | avx           2381 ns         3815 ns         4096
mask | 21 |     tbb      14960 ns        11444 ns         4096
mask | 21 | avx tbb       2490 ns         3815 ns         4096

data | 22 |               8490 ns        0.000 ns         4096
data | 22 | avx           2299 ns         3815 ns         4096
data | 22 |     tbb       9183 ns        11444 ns         4096
data | 22 | avx tbb       2161 ns        0.000 ns         4096
mask | 22 |              43646 ns        45776 ns         4096
mask | 22 | avx           2390 ns         3815 ns         4096
mask | 22 |     tbb      14977 ns        15259 ns         4096
mask | 22 | avx tbb       2517 ns         3815 ns         4096

data | 23 |               7945 ns        11444 ns         4096
data | 23 | avx           2163 ns         3815 ns         4096
data | 23 |     tbb       9150 ns         7629 ns         4096
data | 23 | avx tbb       2295 ns        0.000 ns         4096
mask | 23 |              43221 ns        38147 ns         4096
mask | 23 | avx           2390 ns         3815 ns         4096
mask | 23 |     tbb      15170 ns        15259 ns         4096
mask | 23 | avx tbb       2516 ns         3815 ns         4096

data | 24 |               8007 ns        11444 ns         4096
data | 24 | avx           2275 ns         3815 ns         4096
data | 24 |     tbb       9247 ns         7629 ns         4096
data | 24 | avx tbb       2150 ns         3815 ns         4096
mask | 24 |              42954 ns        41962 ns         4096
mask | 24 | avx           2389 ns         3815 ns         4096
mask | 24 |     tbb      15123 ns        15259 ns         4096
mask | 24 | avx tbb       2510 ns         7629 ns         4096

data | 25 |               7615 ns         7629 ns         4096
data | 25 | avx           2212 ns        0.000 ns         4096
data | 25 |     tbb       9124 ns        11444 ns         4096
data | 25 | avx tbb       2358 ns         3815 ns         4096
mask | 25 |              44777 ns        41962 ns         4096
mask | 25 | avx           2406 ns         3815 ns         4096
mask | 25 |     tbb      14906 ns        15259 ns         4096
mask | 25 | avx tbb       2508 ns         3815 ns         4096

data | 26 |               7290 ns         7629 ns         4096
data | 26 | avx           2188 ns        0.000 ns         4096
data | 26 |     tbb       9214 ns        11444 ns         4096
data | 26 | avx tbb       2197 ns        0.000 ns         4096
mask | 26 |              44774 ns        45776 ns         4096
mask | 26 | avx           2401 ns         3815 ns         4096
mask | 26 |     tbb      14886 ns        15259 ns         4096
mask | 26 | avx tbb       2475 ns         7629 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4765 ns        0.000 ns         2048
data |  1 | avx           4616 ns        0.000 ns         2048
data |  1 |     tbb       9574 ns        0.000 ns         2048
data |  1 | avx tbb       4856 ns        0.000 ns         2048
mask |  1 |               4737 ns         7629 ns         2048
mask |  1 | avx           4656 ns         7629 ns         2048
mask |  1 |     tbb       9498 ns        0.000 ns         2048
mask |  1 | avx tbb       4716 ns         7629 ns         2048

data |  2 |             315833 ns       305176 ns         2048
data |  2 | avx           8110 ns         7629 ns         2048
data |  2 |     tbb      44265 ns        45776 ns         2048
data |  2 | avx tbb       8722 ns        15259 ns         2048
mask |  2 |             197671 ns       190735 ns         2048
mask |  2 | avx           8387 ns        15259 ns         2048
mask |  2 |     tbb      42690 ns        45776 ns         2048
mask |  2 | avx tbb       9239 ns         7629 ns         2048

data |  3 |             212509 ns       221252 ns         2048
data |  3 | avx           6946 ns         7629 ns         2048
data |  3 |     tbb      33854 ns        22888 ns         2048
data |  3 | avx tbb       7660 ns         7629 ns         2048
mask |  3 |             205470 ns       205994 ns         2048
mask |  3 | avx           7505 ns        0.000 ns         2048
mask |  3 |     tbb      41943 ns        53406 ns         2048
mask |  3 | avx tbb       7919 ns        15259 ns         2048

data |  4 |             160562 ns       152588 ns         2048
data |  4 | avx           6816 ns        15259 ns         2048
data |  4 |     tbb      27773 ns        38147 ns         2048
data |  4 | avx tbb       7009 ns         7629 ns         2048
mask |  4 |             201543 ns       205994 ns         2048
mask |  4 | avx           7544 ns        15259 ns         2048
mask |  4 |     tbb      41975 ns        38147 ns         2048
mask |  4 | avx tbb       7889 ns         7629 ns         2048

data |  5 |             129288 ns       114441 ns         2048
data |  5 | avx           6601 ns         7629 ns         2048
data |  5 |     tbb      24709 ns        30518 ns         2048
data |  5 | avx tbb       6921 ns        0.000 ns         2048
mask |  5 |             185203 ns       183105 ns         2048
mask |  5 | avx           7637 ns        15259 ns         2048
mask |  5 |     tbb      42140 ns        45776 ns         2048
mask |  5 | avx tbb       8151 ns        15259 ns         2048

data |  6 |             108965 ns       106812 ns         2048
data |  6 | avx           7116 ns         7629 ns         2048
data |  6 |     tbb      23203 ns        22888 ns         2048
data |  6 | avx tbb       7549 ns         7629 ns         2048
mask |  6 |             184667 ns       183105 ns         2048
mask |  6 | avx           7506 ns         7629 ns         2048
mask |  6 |     tbb      42820 ns        45776 ns         2048
mask |  6 | avx tbb       7907 ns         7629 ns         2048

data |  7 |              93469 ns        76294 ns         2048
data |  7 | avx           7021 ns        15259 ns         2048
data |  7 |     tbb      21436 ns        15259 ns         2048
data |  7 | avx tbb       7431 ns         7629 ns         2048
mask |  7 |             175784 ns       183105 ns         2048
mask |  7 | avx           7507 ns        0.000 ns         2048
mask |  7 |     tbb      42695 ns        53406 ns         2048
mask |  7 | avx tbb       8272 ns         7629 ns         2048

data |  8 |              82606 ns        91553 ns         2048
data |  8 | avx           6921 ns         7629 ns         2048
data |  8 |     tbb      19633 ns        15259 ns         2048
data |  8 | avx tbb       7187 ns         7629 ns         2048
mask |  8 |             174079 ns       183105 ns         2048
mask |  8 | avx           7514 ns        0.000 ns         2048
mask |  8 |     tbb      42033 ns        30518 ns         2048
mask |  8 | avx tbb       7981 ns        15259 ns         2048

data |  9 |              73952 ns        76294 ns         2048
data |  9 | avx           6473 ns         7629 ns         2048
data |  9 |     tbb      18819 ns        15259 ns         2048
data |  9 | avx tbb       6814 ns        15259 ns         2048
mask |  9 |             176733 ns       175476 ns         2048
mask |  9 | avx           7602 ns         7629 ns         2048
mask |  9 |     tbb      42033 ns        53406 ns         2048
mask |  9 | avx tbb       7934 ns         7629 ns         2048

data | 10 |              66736 ns        76294 ns         2048
data | 10 | avx           6554 ns        15259 ns         2048
data | 10 |     tbb      18475 ns        22888 ns         2048
data | 10 | avx tbb       6727 ns         7629 ns         2048
mask | 10 |             177341 ns       167847 ns         2048
mask | 10 | avx           7777 ns         7629 ns         2048
mask | 10 |     tbb      42945 ns        45776 ns         2048
mask | 10 | avx tbb       8156 ns        15259 ns         2048

data | 11 |              58108 ns        53406 ns         2048
data | 11 | avx           6444 ns        15259 ns         2048
data | 11 |     tbb      18888 ns        30518 ns         2048
data | 11 | avx tbb       6852 ns         7629 ns         2048
mask | 11 |             176304 ns       167847 ns         2048
mask | 11 | avx           7560 ns        15259 ns         2048
mask | 11 |     tbb      41977 ns        38147 ns         2048
mask | 11 | avx tbb       7902 ns        0.000 ns         2048

data | 12 |              56658 ns        53406 ns         2048
data | 12 | avx           7179 ns         7629 ns         2048
data | 12 |     tbb      17339 ns        15259 ns         2048
data | 12 | avx tbb       7278 ns        15259 ns         2048
mask | 12 |             175975 ns       175476 ns         2048
mask | 12 | avx           7605 ns         7629 ns         2048
mask | 12 |     tbb      43204 ns        45776 ns         2048
mask | 12 | avx tbb       8243 ns        15259 ns         2048

data | 13 |              50770 ns        53406 ns         2048
data | 13 | avx           6572 ns        0.000 ns         2048
data | 13 |     tbb      16499 ns        22888 ns         2048
data | 13 | avx tbb       6823 ns         7629 ns         2048
mask | 13 |             179711 ns       183105 ns         2048
mask | 13 | avx           7602 ns        15259 ns         2048
mask | 13 |     tbb      42031 ns        45776 ns         2048
mask | 13 | avx tbb       7953 ns         7629 ns         2048

data | 14 |              47383 ns        53406 ns         2048
data | 14 | avx           7125 ns        0.000 ns         2048
data | 14 |     tbb      16214 ns        22888 ns         2048
data | 14 | avx tbb       6806 ns         7629 ns         2048
mask | 14 |             177049 ns       175476 ns         2048
mask | 14 | avx           7557 ns         7629 ns         2048
mask | 14 |     tbb      42226 ns        45776 ns         2048
mask | 14 | avx tbb       7909 ns        15259 ns         2048

data | 15 |              45039 ns        45776 ns         2048
data | 15 | avx           6908 ns        0.000 ns         2048
data | 15 |     tbb      15819 ns        15259 ns         2048
data | 15 | avx tbb       7092 ns         7629 ns         2048
mask | 15 |             176681 ns       183105 ns         2048
mask | 15 | avx           7572 ns         7629 ns         2048
mask | 15 |     tbb      42932 ns        45776 ns         2048
mask | 15 | avx tbb       8150 ns        0.000 ns         2048

data | 16 |              43619 ns        45776 ns         2048
data | 16 | avx           6901 ns         7629 ns         2048
data | 16 |     tbb      15612 ns         7629 ns         2048
data | 16 | avx tbb       6906 ns         7629 ns         2048
mask | 16 |             174648 ns       183105 ns         2048
mask | 16 | avx           7739 ns        15259 ns         2048
mask | 16 |     tbb      42629 ns        53406 ns         2048
mask | 16 | avx tbb       8348 ns        15259 ns         2048

data | 17 |              38535 ns        30518 ns         2048
data | 17 | avx           7212 ns        0.000 ns         2048
data | 17 |     tbb      15407 ns        22888 ns         2048
data | 17 | avx tbb       7591 ns         7629 ns         2048
mask | 17 |             175997 ns       190735 ns         2048
mask | 17 | avx           7864 ns        0.000 ns         2048
mask | 17 |     tbb      43595 ns        53406 ns         2048
mask | 17 | avx tbb       8609 ns         7629 ns         2048

data | 18 |              36857 ns        38147 ns         2048
data | 18 | avx           7315 ns        0.000 ns         2048
data | 18 |     tbb      15180 ns        15259 ns         2048
data | 18 | avx tbb       7514 ns         7629 ns         2048
mask | 18 |             177936 ns       183105 ns         2048
mask | 18 | avx           7857 ns        0.000 ns         2048
mask | 18 |     tbb      42103 ns        61035 ns         2048
mask | 18 | avx tbb       8274 ns         7629 ns         2048

data | 19 |              34911 ns        45776 ns         2048
data | 19 | avx           7371 ns         7629 ns         2048
data | 19 |     tbb      15113 ns        30518 ns         2048
data | 19 | avx tbb       7625 ns         7629 ns         2048
mask | 19 |             176336 ns       167847 ns         2048
mask | 19 | avx           7901 ns        15259 ns         2048
mask | 19 |     tbb      42993 ns        53406 ns         2048
mask | 19 | avx tbb       8693 ns         7629 ns         2048

data | 20 |              33526 ns        38147 ns         2048
data | 20 | avx           7698 ns        0.000 ns         2048
data | 20 |     tbb      14723 ns         7629 ns         2048
data | 20 | avx tbb       7590 ns        15259 ns         2048
mask | 20 |             175182 ns       183105 ns         2048
mask | 20 | avx           7798 ns        0.000 ns         2048
mask | 20 |     tbb      42127 ns        45776 ns         2048
mask | 20 | avx tbb       8224 ns         7629 ns         2048

data | 21 |              31566 ns        38147 ns         2048
data | 21 | avx           7161 ns        0.000 ns         2048
data | 21 |     tbb      15675 ns        15259 ns         2048
data | 21 | avx tbb       7570 ns         7629 ns         2048
mask | 21 |             174817 ns       183105 ns         2048
mask | 21 | avx           7868 ns        0.000 ns         2048
mask | 21 |     tbb      42790 ns        45776 ns         2048
mask | 21 | avx tbb       8448 ns        15259 ns         2048

data | 22 |              32451 ns        22888 ns         2048
data | 22 | avx           7716 ns         7629 ns         2048
data | 22 |     tbb      14498 ns        15259 ns         2048
data | 22 | avx tbb       7847 ns        15259 ns         2048
mask | 22 |             178027 ns       152588 ns         2048
mask | 22 | avx           7808 ns         7629 ns         2048
mask | 22 |     tbb      42647 ns        53406 ns         2048
mask | 22 | avx tbb       8393 ns         7629 ns         2048

data | 23 |              30607 ns        22888 ns         2048
data | 23 | avx           7538 ns        0.000 ns         2048
data | 23 |     tbb      14611 ns         7629 ns         2048
data | 23 | avx tbb       7412 ns         7629 ns         2048
mask | 23 |             172862 ns       152588 ns         2048
mask | 23 | avx           7794 ns        0.000 ns         2048
mask | 23 |     tbb      42938 ns        53406 ns         2048
mask | 23 | avx tbb       8609 ns         7629 ns         2048

data | 24 |              27970 ns        30518 ns         2048
data | 24 | avx           7341 ns        0.000 ns         2048
data | 24 |     tbb      14199 ns        22888 ns         2048
data | 24 | avx tbb       7584 ns        0.000 ns         2048
mask | 24 |             176915 ns       167847 ns         2048
mask | 24 | avx           7837 ns        15259 ns         2048
mask | 24 |     tbb      42076 ns        38147 ns         2048
mask | 24 | avx tbb       8227 ns        0.000 ns         2048

data | 25 |              27538 ns        30518 ns         2048
data | 25 | avx           7651 ns        0.000 ns         2048
data | 25 |     tbb      14190 ns         7629 ns         2048
data | 25 | avx tbb       7563 ns         7629 ns         2048
mask | 25 |             176281 ns       183105 ns         2048
mask | 25 | avx           7872 ns        15259 ns         2048
mask | 25 |     tbb      42429 ns        53406 ns         2048
mask | 25 | avx tbb       8536 ns         7629 ns         2048

data | 26 |              26266 ns        22888 ns         2048
data | 26 | avx           7237 ns        15259 ns         2048
data | 26 |     tbb      14034 ns         7629 ns         2048
data | 26 | avx tbb       7619 ns         7629 ns         2048
mask | 26 |             177948 ns       183105 ns         2048
mask | 26 | avx           7870 ns        0.000 ns         2048
mask | 26 |     tbb      42053 ns        53406 ns         2048
mask | 26 | avx tbb       8391 ns        0.000 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              17125 ns        30518 ns         1024
data |  1 | avx          17567 ns        15259 ns         1024
data |  1 |     tbb      17244 ns        30518 ns         1024
data |  1 | avx tbb      16645 ns        15259 ns         1024
mask |  1 |              16891 ns        0.000 ns         1024
mask |  1 | avx          15997 ns        15259 ns         1024
mask |  1 |     tbb      17336 ns        0.000 ns         1024
mask |  1 | avx tbb      16036 ns        15259 ns         1024

data |  2 |            1257673 ns      1266479 ns         1024
data |  2 | avx          29706 ns        15259 ns         1024
data |  2 |     tbb     138882 ns       137329 ns         1024
data |  2 | avx tbb      17881 ns        45776 ns         1024
mask |  2 |             789420 ns       808716 ns         1024
mask |  2 | avx          32027 ns        30518 ns         1024
mask |  2 |     tbb     139562 ns       137329 ns         1024
mask |  2 | avx tbb      18014 ns        15259 ns         1024

data |  3 |             839545 ns       839233 ns         1024
data |  3 | avx          25776 ns        45776 ns         1024
data |  3 |     tbb      98892 ns       106812 ns         1024
data |  3 | avx tbb      17082 ns        15259 ns         1024
mask |  3 |             814455 ns       808716 ns         1024
mask |  3 | avx          28100 ns        30518 ns         1024
mask |  3 |     tbb     139378 ns       106812 ns         1024
mask |  3 | avx tbb      17186 ns        0.000 ns         1024

data |  4 |             633573 ns       640869 ns         1024
data |  4 | avx          23724 ns        0.000 ns         1024
data |  4 |     tbb      75675 ns        61035 ns         1024
data |  4 | avx tbb      16978 ns        30518 ns         1024
mask |  4 |             824147 ns       839233 ns         1024
mask |  4 | avx          27803 ns        0.000 ns         1024
mask |  4 |     tbb     139208 ns       167847 ns         1024
mask |  4 | avx tbb      16899 ns        0.000 ns         1024

data |  5 |             511271 ns       488281 ns         1024
data |  5 | avx          23107 ns        45776 ns         1024
data |  5 |     tbb      63103 ns        61035 ns         1024
data |  5 | avx tbb      16721 ns        0.000 ns         1024
mask |  5 |             776995 ns       762939 ns         1024
mask |  5 | avx          27805 ns        0.000 ns         1024
mask |  5 |     tbb     139519 ns       152588 ns         1024
mask |  5 | avx tbb      16958 ns        0.000 ns         1024

data |  6 |             426443 ns       381470 ns         1024
data |  6 | avx          24454 ns        45776 ns         1024
data |  6 |     tbb      55803 ns        45776 ns         1024
data |  6 | avx tbb      17582 ns        0.000 ns         1024
mask |  6 |             752338 ns       747681 ns         1024
mask |  6 | avx          28234 ns        15259 ns         1024
mask |  6 |     tbb     140927 ns       137329 ns         1024
mask |  6 | avx tbb      17090 ns        30518 ns         1024

data |  7 |             366761 ns       350952 ns         1024
data |  7 | avx          25862 ns        15259 ns         1024
data |  7 |     tbb      48642 ns        45776 ns         1024
data |  7 | avx tbb      17561 ns        15259 ns         1024
mask |  7 |             749336 ns       732422 ns         1024
mask |  7 | avx          28101 ns        30518 ns         1024
mask |  7 |     tbb     139558 ns       106812 ns         1024
mask |  7 | avx tbb      17576 ns        15259 ns         1024

data |  8 |             320359 ns       320435 ns         1024
data |  8 | avx          25645 ns        15259 ns         1024
data |  8 |     tbb      45312 ns        45776 ns         1024
data |  8 | avx tbb      17605 ns        0.000 ns         1024
mask |  8 |             805413 ns       823975 ns         1024
mask |  8 | avx          28079 ns        30518 ns         1024
mask |  8 |     tbb     141000 ns       137329 ns         1024
mask |  8 | avx tbb      16932 ns        30518 ns         1024

data |  9 |             283915 ns       274658 ns         1024
data |  9 | avx          23377 ns        45776 ns         1024
data |  9 |     tbb      40484 ns        45776 ns         1024
data |  9 | avx tbb      17202 ns        30518 ns         1024
mask |  9 |             769283 ns       732422 ns         1024
mask |  9 | avx          28248 ns        0.000 ns         1024
mask |  9 |     tbb     139563 ns       106812 ns         1024
mask |  9 | avx tbb      17176 ns        0.000 ns         1024

data | 10 |             258036 ns       228882 ns         1024
data | 10 | avx          23512 ns        30518 ns         1024
data | 10 |     tbb      37659 ns        61035 ns         1024
data | 10 | avx tbb      17415 ns        15259 ns         1024
mask | 10 |             718891 ns       671387 ns         1024
mask | 10 | avx          28966 ns        15259 ns         1024
mask | 10 |     tbb     139405 ns       122070 ns         1024
mask | 10 | avx tbb      17440 ns        30518 ns         1024

data | 11 |             234629 ns       183105 ns         1024
data | 11 | avx          23608 ns        15259 ns         1024
data | 11 |     tbb      35601 ns        0.000 ns         1024
data | 11 | avx tbb      17378 ns        0.000 ns         1024
mask | 11 |             720668 ns       686646 ns         1024
mask | 11 | avx          28055 ns        15259 ns         1024
mask | 11 |     tbb     140392 ns       167847 ns         1024
mask | 11 | avx tbb      17108 ns        15259 ns         1024

data | 12 |             215204 ns       244141 ns         1024
data | 12 | avx          26421 ns        30518 ns         1024
data | 12 |     tbb      34184 ns        15259 ns         1024
data | 12 | avx tbb      17415 ns        45776 ns         1024
mask | 12 |             739405 ns       732422 ns         1024
mask | 12 | avx          28328 ns        15259 ns         1024
mask | 12 |     tbb     140999 ns       152588 ns         1024
mask | 12 | avx tbb      17435 ns        30518 ns         1024

data | 13 |             199493 ns       183105 ns         1024
data | 13 | avx          24528 ns        15259 ns         1024
data | 13 |     tbb      32680 ns        15259 ns         1024
data | 13 | avx tbb      17267 ns        45776 ns         1024
mask | 13 |             740356 ns       747681 ns         1024
mask | 13 | avx          28628 ns        30518 ns         1024
mask | 13 |     tbb     140447 ns       137329 ns         1024
mask | 13 | avx tbb      17090 ns        45776 ns         1024

data | 14 |             185499 ns       152588 ns         1024
data | 14 | avx          24849 ns        0.000 ns         1024
data | 14 |     tbb      30791 ns        15259 ns         1024
data | 14 | avx tbb      16983 ns        0.000 ns         1024
mask | 14 |             738322 ns       747681 ns         1024
mask | 14 | avx          28238 ns        15259 ns         1024
mask | 14 |     tbb     140333 ns       152588 ns         1024
mask | 14 | avx tbb      17459 ns        15259 ns         1024

data | 15 |             173933 ns       183105 ns         1024
data | 15 | avx          24164 ns        15259 ns         1024
data | 15 |     tbb      29607 ns        45776 ns         1024
data | 15 | avx tbb      17367 ns        15259 ns         1024
mask | 15 |             742560 ns       732422 ns         1024
mask | 15 | avx          28477 ns        30518 ns         1024
mask | 15 |     tbb     139771 ns       152588 ns         1024
mask | 15 | avx tbb      17700 ns        0.000 ns         1024

data | 16 |             165160 ns       167847 ns         1024
data | 16 | avx          23334 ns        15259 ns         1024
data | 16 |     tbb      28232 ns        76294 ns         1024
data | 16 | avx tbb      17032 ns        0.000 ns         1024
mask | 16 |             758085 ns       778198 ns         1024
mask | 16 | avx          27922 ns        45776 ns         1024
mask | 16 |     tbb     139730 ns       137329 ns         1024
mask | 16 | avx tbb      17023 ns        15259 ns         1024

data | 17 |             155512 ns       152588 ns         1024
data | 17 | avx          26111 ns        15259 ns         1024
data | 17 |     tbb      27515 ns        30518 ns         1024
data | 17 | avx tbb      17306 ns        45776 ns         1024
mask | 17 |             747240 ns       747681 ns         1024
mask | 17 | avx          28913 ns        15259 ns         1024
mask | 17 |     tbb     139399 ns       152588 ns         1024
mask | 17 | avx tbb      18042 ns        30518 ns         1024

data | 18 |             146431 ns       137329 ns         1024
data | 18 | avx          26680 ns        30518 ns         1024
data | 18 |     tbb      26646 ns        15259 ns         1024
data | 18 | avx tbb      17406 ns        0.000 ns         1024
mask | 18 |             750683 ns       732422 ns         1024
mask | 18 | avx          29509 ns        45776 ns         1024
mask | 18 |     tbb     139669 ns       122070 ns         1024
mask | 18 | avx tbb      17625 ns        45776 ns         1024

data | 19 |             138801 ns       137329 ns         1024
data | 19 | avx          26723 ns        15259 ns         1024
data | 19 |     tbb      26079 ns        30518 ns         1024
data | 19 | avx tbb      17305 ns        15259 ns         1024
mask | 19 |             733951 ns       762939 ns         1024
mask | 19 | avx          29237 ns        30518 ns         1024
mask | 19 |     tbb     140036 ns       152588 ns         1024
mask | 19 | avx tbb      17609 ns        45776 ns         1024

data | 20 |             131161 ns       122070 ns         1024
data | 20 | avx          26682 ns        30518 ns         1024
data | 20 |     tbb      25629 ns        15259 ns         1024
data | 20 | avx tbb      17398 ns        15259 ns         1024
mask | 20 |             764079 ns       747681 ns         1024
mask | 20 | avx          29025 ns        45776 ns         1024
mask | 20 |     tbb     140863 ns       167847 ns         1024
mask | 20 | avx tbb      17825 ns        45776 ns         1024

data | 21 |             126683 ns       106812 ns         1024
data | 21 | avx          25999 ns        15259 ns         1024
data | 21 |     tbb      24794 ns        30518 ns         1024
data | 21 | avx tbb      17360 ns        15259 ns         1024
mask | 21 |             770379 ns       793457 ns         1024
mask | 21 | avx          28872 ns        30518 ns         1024
mask | 21 |     tbb     139955 ns       183105 ns         1024
mask | 21 | avx tbb      17610 ns        15259 ns         1024

data | 22 |             119226 ns       106812 ns         1024
data | 22 | avx          26098 ns        15259 ns         1024
data | 22 |     tbb      25137 ns        45776 ns         1024
data | 22 | avx tbb      17126 ns        0.000 ns         1024
mask | 22 |             738848 ns       747681 ns         1024
mask | 22 | avx          29050 ns        61035 ns         1024
mask | 22 |     tbb     139586 ns       122070 ns         1024
mask | 22 | avx tbb      17422 ns        30518 ns         1024

data | 23 |             116407 ns       122070 ns         1024
data | 23 | avx          25956 ns        30518 ns         1024
data | 23 |     tbb      24068 ns        15259 ns         1024
data | 23 | avx tbb      17609 ns        45776 ns         1024
mask | 23 |             725744 ns       717163 ns         1024
mask | 23 | avx          28828 ns        15259 ns         1024
mask | 23 |     tbb     139724 ns       167847 ns         1024
mask | 23 | avx tbb      18381 ns        45776 ns         1024

data | 24 |             111149 ns       122070 ns         1024
data | 24 | avx          26170 ns        30518 ns         1024
data | 24 |     tbb      23810 ns        61035 ns         1024
data | 24 | avx tbb      17702 ns        30518 ns         1024
mask | 24 |             726964 ns       717163 ns         1024
mask | 24 | avx          29103 ns        61035 ns         1024
mask | 24 |     tbb     140690 ns       106812 ns         1024
mask | 24 | avx tbb      17424 ns        30518 ns         1024

data | 25 |             108046 ns        61035 ns         1024
data | 25 | avx          26216 ns        30518 ns         1024
data | 25 |     tbb      23236 ns        30518 ns         1024
data | 25 | avx tbb      17671 ns        15259 ns         1024
mask | 25 |             738404 ns       732422 ns         1024
mask | 25 | avx          29005 ns        30518 ns         1024
mask | 25 |     tbb     140403 ns       122070 ns         1024
mask | 25 | avx tbb      17513 ns        30518 ns         1024

data | 26 |             107993 ns       106812 ns         1024
data | 26 | avx          27064 ns        15259 ns         1024
data | 26 |     tbb      22855 ns        61035 ns         1024
data | 26 | avx tbb      17577 ns        30518 ns         1024
mask | 26 |             744696 ns       747681 ns         1024
mask | 26 | avx          28936 ns        30518 ns         1024
mask | 26 |     tbb     139808 ns       106812 ns         1024
mask | 26 | avx tbb      17183 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             166264 ns       122070 ns          512
data |  1 | avx         164137 ns       213623 ns          512
data |  1 |     tbb     170969 ns       213623 ns          512
data |  1 | avx tbb     155341 ns        61035 ns          512
mask |  1 |             166102 ns       213623 ns          512
mask |  1 | avx         164196 ns       152588 ns          512
mask |  1 |     tbb     168320 ns       213623 ns          512
mask |  1 | avx tbb     154408 ns       122070 ns          512

data |  2 |            5046603 ns      5035400 ns          512
data |  2 | avx         205873 ns       213623 ns          512
data |  2 |     tbb     561208 ns       518799 ns          512
data |  2 | avx tbb     159024 ns       122070 ns          512
mask |  2 |            3294744 ns      3295898 ns          512
mask |  2 | avx         214296 ns       335693 ns          512
mask |  2 |     tbb     570628 ns       518799 ns          512
mask |  2 | avx tbb     158933 ns       183105 ns          512

data |  3 |            3358866 ns      3387451 ns          512
data |  3 | avx         187543 ns       213623 ns          512
data |  3 |     tbb     393423 ns       427246 ns          512
data |  3 | avx tbb     157961 ns       183105 ns          512
mask |  3 |            3281968 ns      3204346 ns          512
mask |  3 | avx         196617 ns       152588 ns          512
mask |  3 |     tbb     568285 ns       610352 ns          512
mask |  3 | avx tbb     156177 ns        91553 ns          512

data |  4 |            2534887 ns      2471924 ns          512
data |  4 | avx         187985 ns       244141 ns          512
data |  4 |     tbb     311080 ns       305176 ns          512
data |  4 | avx tbb     156997 ns        91553 ns          512
mask |  4 |            3239175 ns      3112793 ns          512
mask |  4 | avx         196797 ns       122070 ns          512
mask |  4 |     tbb     568712 ns       579834 ns          512
mask |  4 | avx tbb     156852 ns       183105 ns          512

data |  5 |            2025802 ns      2044678 ns          512
data |  5 | avx         185873 ns       152588 ns          512
data |  5 |     tbb     264536 ns       213623 ns          512
data |  5 | avx tbb     156895 ns        91553 ns          512
mask |  5 |            3250701 ns      3204346 ns          512
mask |  5 | avx         198693 ns       183105 ns          512
mask |  5 |     tbb     568639 ns       640869 ns          512
mask |  5 | avx tbb     157798 ns       152588 ns          512

data |  6 |            1698142 ns      1708984 ns          512
data |  6 | avx         186960 ns       213623 ns          512
data |  6 |     tbb     233018 ns       213623 ns          512
data |  6 | avx tbb     158633 ns        91553 ns          512
mask |  6 |            3278718 ns      3204346 ns          512
mask |  6 | avx         196120 ns       213623 ns          512
mask |  6 |     tbb     567909 ns       671387 ns          512
mask |  6 | avx tbb     156355 ns       122070 ns          512

data |  7 |            1456285 ns      1464844 ns          512
data |  7 | avx         187716 ns       335693 ns          512
data |  7 |     tbb     219898 ns       183105 ns          512
data |  7 | avx tbb     157637 ns       152588 ns          512
mask |  7 |            3252602 ns      3265381 ns          512
mask |  7 | avx         195092 ns       244141 ns          512
mask |  7 |     tbb     567784 ns       518799 ns          512
mask |  7 | avx tbb     157541 ns       213623 ns          512

data |  8 |            1284452 ns      1342773 ns          512
data |  8 | avx         185506 ns       152588 ns          512
data |  8 |     tbb     208844 ns       366211 ns          512
data |  8 | avx tbb     156736 ns        61035 ns          512
mask |  8 |            3138883 ns      3082275 ns          512
mask |  8 | avx         198469 ns       183105 ns          512
mask |  8 |     tbb     565307 ns       579834 ns          512
mask |  8 | avx tbb     158774 ns        91553 ns          512

data |  9 |            1144094 ns      1129150 ns          512
data |  9 | avx         185552 ns       152588 ns          512
data |  9 |     tbb     208423 ns       152588 ns          512
data |  9 | avx tbb     157470 ns       213623 ns          512
mask |  9 |            3223361 ns      3295898 ns          512
mask |  9 | avx         196457 ns       122070 ns          512
mask |  9 |     tbb     566132 ns       457764 ns          512
mask |  9 | avx tbb     158195 ns       122070 ns          512

data | 10 |            1018921 ns      1098633 ns          512
data | 10 | avx         186049 ns       122070 ns          512
data | 10 |     tbb     204575 ns        91553 ns          512
data | 10 | avx tbb     157687 ns       183105 ns          512
mask | 10 |            3270620 ns      3265381 ns          512
mask | 10 | avx         194749 ns       183105 ns          512
mask | 10 |     tbb     565370 ns       549316 ns          512
mask | 10 | avx tbb     157169 ns       183105 ns          512

data | 11 |             956067 ns       976562 ns          512
data | 11 | avx         185771 ns       213623 ns          512
data | 11 |     tbb     201829 ns       183105 ns          512
data | 11 | avx tbb     158524 ns       183105 ns          512
mask | 11 |            3236641 ns      3234863 ns          512
mask | 11 | avx         197511 ns       183105 ns          512
mask | 11 |     tbb     569285 ns       457764 ns          512
mask | 11 | avx tbb     157620 ns       183105 ns          512

data | 12 |             868444 ns       732422 ns          512
data | 12 | avx         186108 ns       213623 ns          512
data | 12 |     tbb     203120 ns       366211 ns          512
data | 12 | avx tbb     158432 ns       183105 ns          512
mask | 12 |            3229446 ns      3326416 ns          512
mask | 12 | avx         197605 ns       152588 ns          512
mask | 12 |     tbb     564490 ns       610352 ns          512
mask | 12 | avx tbb     157201 ns       213623 ns          512

data | 13 |             812358 ns       762939 ns          512
data | 13 | avx         186155 ns       152588 ns          512
data | 13 |     tbb     200303 ns       244141 ns          512
data | 13 | avx tbb     157276 ns       183105 ns          512
mask | 13 |            3158475 ns      3204346 ns          512
mask | 13 | avx         197769 ns       213623 ns          512
mask | 13 |     tbb     570631 ns       640869 ns          512
mask | 13 | avx tbb     157918 ns       152588 ns          512

data | 14 |             751011 ns       793457 ns          512
data | 14 | avx         189739 ns       183105 ns          512
data | 14 |     tbb     192856 ns       183105 ns          512
data | 14 | avx tbb     158349 ns       122070 ns          512
mask | 14 |            3219901 ns      3143311 ns          512
mask | 14 | avx         194776 ns       305176 ns          512
mask | 14 |     tbb     569620 ns       732422 ns          512
mask | 14 | avx tbb     156677 ns       213623 ns          512

data | 15 |             704010 ns       671387 ns          512
data | 15 | avx         185177 ns       213623 ns          512
data | 15 |     tbb     200212 ns       305176 ns          512
data | 15 | avx tbb     156462 ns       152588 ns          512
mask | 15 |            3237164 ns      3234863 ns          512
mask | 15 | avx         196468 ns       244141 ns          512
mask | 15 |     tbb     568040 ns       549316 ns          512
mask | 15 | avx tbb     158442 ns       183105 ns          512

data | 16 |             663549 ns       701904 ns          512
data | 16 | avx         185701 ns       183105 ns          512
data | 16 |     tbb     193869 ns       213623 ns          512
data | 16 | avx tbb     158698 ns       213623 ns          512
mask | 16 |            3202384 ns      3173828 ns          512
mask | 16 | avx         197370 ns       213623 ns          512
mask | 16 |     tbb     568937 ns       701904 ns          512
mask | 16 | avx tbb     156418 ns       183105 ns          512

data | 17 |             630156 ns       610352 ns          512
data | 17 | avx         217754 ns       244141 ns          512
data | 17 |     tbb     201673 ns       122070 ns          512
data | 17 | avx tbb     157644 ns       152588 ns          512
mask | 17 |            3197937 ns      3112793 ns          512
mask | 17 | avx         199416 ns       213623 ns          512
mask | 17 |     tbb     567032 ns       640869 ns          512
mask | 17 | avx tbb     158176 ns       213623 ns          512

data | 18 |             594832 ns       610352 ns          512
data | 18 | avx         194072 ns       152588 ns          512
data | 18 |     tbb     198309 ns       244141 ns          512
data | 18 | avx tbb     156948 ns       183105 ns          512
mask | 18 |            3202967 ns      3173828 ns          512
mask | 18 | avx         195291 ns       274658 ns          512
mask | 18 |     tbb     566015 ns       518799 ns          512
mask | 18 | avx tbb     156733 ns       213623 ns          512

data | 19 |             565022 ns       549316 ns          512
data | 19 | avx         193695 ns       244141 ns          512
data | 19 |     tbb     191038 ns       122070 ns          512
data | 19 | avx tbb     159375 ns       152588 ns          512
mask | 19 |            3182050 ns      3051758 ns          512
mask | 19 | avx         196617 ns       152588 ns          512
mask | 19 |     tbb     567430 ns       549316 ns          512
mask | 19 | avx tbb     157073 ns       122070 ns          512

data | 20 |             534603 ns       579834 ns          512
data | 20 | avx         192032 ns       152588 ns          512
data | 20 |     tbb     200195 ns       244141 ns          512
data | 20 | avx tbb     158004 ns       122070 ns          512
mask | 20 |            3238914 ns      3265381 ns          512
mask | 20 | avx         195229 ns       213623 ns          512
mask | 20 |     tbb     568939 ns       610352 ns          512
mask | 20 | avx tbb     158393 ns        30518 ns          512

data | 21 |             508499 ns       549316 ns          512
data | 21 | avx         193670 ns       183105 ns          512
data | 21 |     tbb     196508 ns       213623 ns          512
data | 21 | avx tbb     157061 ns       213623 ns          512
mask | 21 |            3267672 ns      3234863 ns          512
mask | 21 | avx         214744 ns       305176 ns          512
mask | 21 |     tbb     592494 ns       549316 ns          512
mask | 21 | avx tbb     157341 ns       152588 ns          512

data | 22 |             488693 ns       579834 ns          512
data | 22 | avx         198071 ns       213623 ns          512
data | 22 |     tbb     196905 ns       213623 ns          512
data | 22 | avx tbb     157122 ns       122070 ns          512
mask | 22 |            3199514 ns      3143311 ns          512
mask | 22 | avx         198578 ns       244141 ns          512
mask | 22 |     tbb     568238 ns       579834 ns          512
mask | 22 | avx tbb     157473 ns        91553 ns          512

data | 23 |             469274 ns       518799 ns          512
data | 23 | avx         194243 ns       183105 ns          512
data | 23 |     tbb     190018 ns       244141 ns          512
data | 23 | avx tbb     157826 ns       122070 ns          512
mask | 23 |            3224316 ns      3265381 ns          512
mask | 23 | avx         198917 ns       183105 ns          512
mask | 23 |     tbb     566476 ns       579834 ns          512
mask | 23 | avx tbb     158136 ns       152588 ns          512

data | 24 |             452833 ns       427246 ns          512
data | 24 | avx         197156 ns       244141 ns          512
data | 24 |     tbb     193576 ns       183105 ns          512
data | 24 | avx tbb     159620 ns       244141 ns          512
mask | 24 |            3175016 ns      3173828 ns          512
mask | 24 | avx         198935 ns       335693 ns          512
mask | 24 |     tbb     571913 ns       579834 ns          512
mask | 24 | avx tbb     156783 ns       152588 ns          512

data | 25 |             440153 ns       427246 ns          512
data | 25 | avx         196456 ns       122070 ns          512
data | 25 |     tbb     190717 ns       183105 ns          512
data | 25 | avx tbb     158852 ns       152588 ns          512
mask | 25 |            3173686 ns      3265381 ns          512
mask | 25 | avx         194659 ns       213623 ns          512
mask | 25 |     tbb     568182 ns       549316 ns          512
mask | 25 | avx tbb     156876 ns       122070 ns          512

data | 26 |             427912 ns       457764 ns          512
data | 26 | avx         193757 ns       274658 ns          512
data | 26 |     tbb     190763 ns       305176 ns          512
data | 26 | avx tbb     158247 ns       122070 ns          512
mask | 26 |            3219224 ns      3326416 ns          512
mask | 26 | avx         199780 ns       213623 ns          512
mask | 26 |     tbb     566997 ns       671387 ns          512
mask | 26 | avx tbb     159134 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             680692 ns       976562 ns           64
data |  1 | avx         667252 ns       976562 ns           64
data |  1 |     tbb     621247 ns       488281 ns           64
data |  1 | avx tbb     615386 ns       244141 ns           64
mask |  1 |             687684 ns       976562 ns           64
mask |  1 | avx         670258 ns       488281 ns           64
mask |  1 |     tbb     624947 ns       488281 ns           64
mask |  1 | avx tbb     621777 ns       976562 ns           64

data |  2 |           20141566 ns     20507812 ns           64
data |  2 | avx         825627 ns       488281 ns           64
data |  2 |     tbb    2074698 ns      1708984 ns           64
data |  2 | avx tbb     612534 ns       488281 ns           64
mask |  2 |           13249158 ns     12939453 ns           64
mask |  2 | avx         857652 ns      1220703 ns           64
mask |  2 |     tbb    2115689 ns      1953125 ns           64
mask |  2 | avx tbb     623778 ns       488281 ns           64

data |  3 |           13488764 ns     12695312 ns           64
data |  3 | avx         759895 ns       488281 ns           64
data |  3 |     tbb    1458306 ns       976562 ns           64
data |  3 | avx tbb     619980 ns       488281 ns           64
mask |  3 |           13233516 ns     12695312 ns           64
mask |  3 | avx         798230 ns       732422 ns           64
mask |  3 |     tbb    2125672 ns      2441406 ns           64
mask |  3 | avx tbb     602116 ns       488281 ns           64

data |  4 |           10102655 ns     10498047 ns           64
data |  4 | avx         757114 ns       244141 ns           64
data |  4 |     tbb    1139148 ns      2197266 ns           64
data |  4 | avx tbb     625250 ns       488281 ns           64
mask |  4 |           13169628 ns     12695312 ns           64
mask |  4 | avx         792700 ns        0.000 ns           64
mask |  4 |     tbb    2134889 ns      1953125 ns           64
mask |  4 | avx tbb     610887 ns       976562 ns           64

data |  5 |            8211719 ns      8056641 ns           64
data |  5 | avx         755964 ns       244141 ns           64
data |  5 |     tbb     935322 ns       976562 ns           64
data |  5 | avx tbb     627266 ns       488281 ns           64
mask |  5 |           13376255 ns     13183594 ns           64
mask |  5 | avx         798670 ns       976562 ns           64
mask |  5 |     tbb    2128325 ns      1953125 ns           64
mask |  5 | avx tbb     591948 ns       976562 ns           64

data |  6 |            6768602 ns      7812500 ns           64
data |  6 | avx         765542 ns       488281 ns           64
data |  6 |     tbb     811208 ns      1220703 ns           64
data |  6 | avx tbb     625575 ns       244141 ns           64
mask |  6 |           13059617 ns     12939453 ns           64
mask |  6 | avx         783784 ns       488281 ns           64
mask |  6 |     tbb    2136231 ns      2441406 ns           64
mask |  6 | avx tbb     607356 ns       244141 ns           64

data |  7 |            5852903 ns      5615234 ns           64
data |  7 | avx         763922 ns       488281 ns           64
data |  7 |     tbb     753827 ns       488281 ns           64
data |  7 | avx tbb     626702 ns       488281 ns           64
mask |  7 |           13189131 ns     13183594 ns           64
mask |  7 | avx         787627 ns       976562 ns           64
mask |  7 |     tbb    2113913 ns      2197266 ns           64
mask |  7 | avx tbb     608380 ns       488281 ns           64

data |  8 |            5207527 ns      5371094 ns           64
data |  8 | avx         782653 ns       732422 ns           64
data |  8 |     tbb     724972 ns       488281 ns           64
data |  8 | avx tbb     625339 ns       976562 ns           64
mask |  8 |           13199514 ns     13427734 ns           64
mask |  8 | avx         783259 ns       976562 ns           64
mask |  8 |     tbb    2130870 ns      2441406 ns           64
mask |  8 | avx tbb     606972 ns       244141 ns           64

data |  9 |            4650816 ns      4150391 ns           64
data |  9 | avx         757742 ns       976562 ns           64
data |  9 |     tbb     710873 ns       488281 ns           64
data |  9 | avx tbb     623683 ns       732422 ns           64
mask |  9 |           13319459 ns     13183594 ns           64
mask |  9 | avx         791556 ns      1220703 ns           64
mask |  9 |     tbb    2132269 ns      2197266 ns           64
mask |  9 | avx tbb     602153 ns       488281 ns           64

data | 10 |            4072563 ns      4882812 ns           64
data | 10 | avx         767702 ns       488281 ns           64
data | 10 |     tbb     701119 ns       976562 ns           64
data | 10 | avx tbb     624167 ns       488281 ns           64
mask | 10 |           13314398 ns     13671875 ns           64
mask | 10 | avx         790795 ns       732422 ns           64
mask | 10 |     tbb    2126558 ns      2441406 ns           64
mask | 10 | avx tbb     620244 ns       732422 ns           64

data | 11 |            3854198 ns      3417969 ns           64
data | 11 | avx         761806 ns       488281 ns           64
data | 11 |     tbb     694333 ns       732422 ns           64
data | 11 | avx tbb     626256 ns       732422 ns           64
mask | 11 |           13173695 ns     13671875 ns           64
mask | 11 | avx         796944 ns       976562 ns           64
mask | 11 |     tbb    2155867 ns      1708984 ns           64
mask | 11 | avx tbb     607259 ns       488281 ns           64

data | 12 |            3560902 ns      4150391 ns           64
data | 12 | avx         766094 ns       488281 ns           64
data | 12 |     tbb     696100 ns       732422 ns           64
data | 12 | avx tbb     625827 ns       732422 ns           64
mask | 12 |           12947231 ns     13183594 ns           64
mask | 12 | avx         785466 ns       976562 ns           64
mask | 12 |     tbb    2110938 ns      1464844 ns           64
mask | 12 | avx tbb     609592 ns       244141 ns           64

data | 13 |            3276533 ns      3173828 ns           64
data | 13 | avx         756853 ns        0.000 ns           64
data | 13 |     tbb     692258 ns       244141 ns           64
data | 13 | avx tbb     626541 ns       244141 ns           64
mask | 13 |           13330209 ns     13671875 ns           64
mask | 13 | avx         787158 ns       976562 ns           64
mask | 13 |     tbb    2159497 ns      2197266 ns           64
mask | 13 | avx tbb     605550 ns       244141 ns           64

data | 14 |            3050444 ns      3662109 ns           64
data | 14 | avx         750092 ns       976562 ns           64
data | 14 |     tbb     682939 ns      1464844 ns           64
data | 14 | avx tbb     627166 ns       244141 ns           64
mask | 14 |           13199267 ns     12939453 ns           64
mask | 14 | avx         797658 ns       976562 ns           64
mask | 14 |     tbb    2119102 ns      2197266 ns           64
mask | 14 | avx tbb     602227 ns       976562 ns           64

data | 15 |            2859845 ns      3417969 ns           64
data | 15 | avx         765337 ns        0.000 ns           64
data | 15 |     tbb     682428 ns       732422 ns           64
data | 15 | avx tbb     628647 ns       732422 ns           64
mask | 15 |           12972655 ns     13183594 ns           64
mask | 15 | avx         795264 ns       488281 ns           64
mask | 15 |     tbb    2140595 ns      1953125 ns           64
mask | 15 | avx tbb     591411 ns       976562 ns           64

data | 16 |            2624480 ns      2685547 ns           64
data | 16 | avx         751919 ns       732422 ns           64
data | 16 |     tbb     685441 ns       732422 ns           64
data | 16 | avx tbb     627042 ns       488281 ns           64
mask | 16 |           13225725 ns     13916016 ns           64
mask | 16 | avx         796158 ns       732422 ns           64
mask | 16 |     tbb    2132261 ns      2685547 ns           64
mask | 16 | avx tbb     604089 ns       732422 ns           64

data | 17 |            2607664 ns      2929688 ns           64
data | 17 | avx         786514 ns      1220703 ns           64
data | 17 |     tbb     685656 ns       488281 ns           64
data | 17 | avx tbb     627442 ns       732422 ns           64
mask | 17 |           13210512 ns     13183594 ns           64
mask | 17 | avx         794798 ns       976562 ns           64
mask | 17 |     tbb    2148497 ns      1708984 ns           64
mask | 17 | avx tbb     593431 ns       488281 ns           64

data | 18 |            2364217 ns      1953125 ns           64
data | 18 | avx         783684 ns       732422 ns           64
data | 18 |     tbb     677486 ns       488281 ns           64
data | 18 | avx tbb     630286 ns      1464844 ns           64
mask | 18 |           13189308 ns     13427734 ns           64
mask | 18 | avx         792547 ns       732422 ns           64
mask | 18 |     tbb    2136631 ns      1953125 ns           64
mask | 18 | avx tbb     605486 ns       976562 ns           64

data | 19 |            2279653 ns      1953125 ns           64
data | 19 | avx         793011 ns       732422 ns           64
data | 19 |     tbb     682263 ns       732422 ns           64
data | 19 | avx tbb     631792 ns       732422 ns           64
mask | 19 |           13306608 ns     13427734 ns           64
mask | 19 | avx         793233 ns       732422 ns           64
mask | 19 |     tbb    2135920 ns      2197266 ns           64
mask | 19 | avx tbb     622873 ns       732422 ns           64

data | 20 |            2177153 ns      3173828 ns           64
data | 20 | avx         789092 ns       488281 ns           64
data | 20 |     tbb     681666 ns       244141 ns           64
data | 20 | avx tbb     630648 ns       488281 ns           64
mask | 20 |           13204905 ns     12695312 ns           64
mask | 20 | avx         816648 ns       732422 ns           64
mask | 20 |     tbb    2140072 ns      1708984 ns           64
mask | 20 | avx tbb     605427 ns       488281 ns           64

data | 21 |            2083078 ns      2685547 ns           64
data | 21 | avx         796573 ns       244141 ns           64
data | 21 |     tbb     681045 ns       732422 ns           64
data | 21 | avx tbb     628992 ns       488281 ns           64
mask | 21 |           13453034 ns     13427734 ns           64
mask | 21 | avx         790741 ns       488281 ns           64
mask | 21 |     tbb    2123691 ns      2197266 ns           64
mask | 21 | avx tbb     611153 ns       732422 ns           64

data | 22 |            2009588 ns      2197266 ns           64
data | 22 | avx         794136 ns       976562 ns           64
data | 22 |     tbb     686395 ns       244141 ns           64
data | 22 | avx tbb     633141 ns       976562 ns           64
mask | 22 |           13271578 ns     13671875 ns           64
mask | 22 | avx         792020 ns       732422 ns           64
mask | 22 |     tbb    2118967 ns      1220703 ns           64
mask | 22 | avx tbb     601750 ns       732422 ns           64

data | 23 |            1871988 ns      1953125 ns           64
data | 23 | avx         794175 ns       732422 ns           64
data | 23 |     tbb     679109 ns       976562 ns           64
data | 23 | avx tbb     632911 ns       976562 ns           64
mask | 23 |           13265723 ns     12695312 ns           64
mask | 23 | avx         802778 ns       732422 ns           64
mask | 23 |     tbb    2128453 ns      2197266 ns           64
mask | 23 | avx tbb     602244 ns       976562 ns           64

data | 24 |            1912450 ns      2197266 ns           64
data | 24 | avx         798031 ns       732422 ns           64
data | 24 |     tbb     675662 ns      1220703 ns           64
data | 24 | avx tbb     630822 ns       976562 ns           64
mask | 24 |           13067811 ns     13183594 ns           64
mask | 24 | avx         793772 ns      1464844 ns           64
mask | 24 |     tbb    2127142 ns      2441406 ns           64
mask | 24 | avx tbb     603567 ns       488281 ns           64

data | 25 |            1824270 ns      1953125 ns           64
data | 25 | avx         791367 ns       976562 ns           64
data | 25 |     tbb     671334 ns      1220703 ns           64
data | 25 | avx tbb     629377 ns        0.000 ns           64
mask | 25 |           13074897 ns     12695312 ns           64
mask | 25 | avx         783797 ns       732422 ns           64
mask | 25 |     tbb    2164070 ns      2441406 ns           64
mask | 25 | avx tbb     593889 ns       488281 ns           64

data | 26 |            1749372 ns      1953125 ns           64
data | 26 | avx         790069 ns       976562 ns           64
data | 26 |     tbb     667470 ns       732422 ns           64
data | 26 | avx tbb     634056 ns       244141 ns           64
mask | 26 |           13145062 ns     14160156 ns           64
mask | 26 | avx         792761 ns      1464844 ns           64
mask | 26 |     tbb    2136967 ns      2685547 ns           64
mask | 26 | avx tbb     617202 ns       244141 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2658166 ns      2441406 ns           32
data |  1 | avx        2658878 ns      2441406 ns           32
data |  1 |     tbb    2351063 ns      1464844 ns           32
data |  1 | avx tbb    2352013 ns      1953125 ns           32
mask |  1 |            2643331 ns      2929688 ns           32
mask |  1 | avx        2643759 ns      2441406 ns           32
mask |  1 |     tbb    2342303 ns      1953125 ns           32
mask |  1 | avx tbb    2352453 ns      3906250 ns           32

data |  2 |           80386609 ns     81542969 ns           32
data |  2 | avx        3350628 ns      3417969 ns           32
data |  2 |     tbb    8086891 ns      8300781 ns           32
data |  2 | avx tbb    2377572 ns      2929688 ns           32
mask |  2 |           52366209 ns     52246094 ns           32
mask |  2 | avx        3398472 ns      4394531 ns           32
mask |  2 |     tbb    8231475 ns      7812500 ns           32
mask |  2 | avx tbb    2378472 ns      2441406 ns           32

data |  3 |           53457622 ns     53710938 ns           32
data |  3 | avx        3027672 ns        0.000 ns           32
data |  3 |     tbb    5386081 ns      5371094 ns           32
data |  3 | avx tbb    2346491 ns      3417969 ns           32
mask |  3 |           52130416 ns     51757812 ns           32
mask |  3 | avx        3156553 ns        0.000 ns           32
mask |  3 |     tbb    8255263 ns      8300781 ns           32
mask |  3 | avx tbb    2355350 ns      1953125 ns           32

data |  4 |           40442262 ns     41015625 ns           32
data |  4 | avx        3020669 ns        0.000 ns           32
data |  4 |     tbb    4115003 ns      3906250 ns           32
data |  4 | avx tbb    2404588 ns      1464844 ns           32
mask |  4 |           52946494 ns     53222656 ns           32
mask |  4 | avx        3251431 ns      1464844 ns           32
mask |  4 |     tbb    8301500 ns      8300781 ns           32
mask |  4 | avx tbb    2352819 ns      2929688 ns           32

data |  5 |           32274469 ns     31738281 ns           32
data |  5 | avx        3036209 ns        0.000 ns           32
data |  5 |     tbb    3377969 ns      3417969 ns           32
data |  5 | avx tbb    2370522 ns      1953125 ns           32
mask |  5 |           52279497 ns     52246094 ns           32
mask |  5 | avx        3151684 ns      4882812 ns           32
mask |  5 |     tbb    8287159 ns      8789062 ns           32
mask |  5 | avx tbb    2360222 ns      1464844 ns           32

data |  6 |           26866903 ns     25390625 ns           32
data |  6 | avx        3041322 ns      5859375 ns           32
data |  6 |     tbb    2919594 ns        0.000 ns           32
data |  6 | avx tbb    2373747 ns      2929688 ns           32
mask |  6 |           52151331 ns     53222656 ns           32
mask |  6 | avx        3184897 ns      2441406 ns           32
mask |  6 |     tbb    8254975 ns      7812500 ns           32
mask |  6 | avx tbb    2362984 ns      1953125 ns           32

data |  7 |           23182650 ns     22460938 ns           32
data |  7 | avx        3029691 ns      2441406 ns           32
data |  7 |     tbb    2626438 ns      3417969 ns           32
data |  7 | avx tbb    2356388 ns      1953125 ns           32
mask |  7 |           52111366 ns     52246094 ns           32
mask |  7 | avx        3151863 ns      3417969 ns           32
mask |  7 |     tbb    8257994 ns      9765625 ns           32
mask |  7 | avx tbb    2368791 ns      1953125 ns           32

data |  8 |           20503812 ns     20996094 ns           32
data |  8 | avx        3228775 ns      3906250 ns           32
data |  8 |     tbb    2543331 ns      2929688 ns           32
data |  8 | avx tbb    2358159 ns      2441406 ns           32
mask |  8 |           51785897 ns     51757812 ns           32
mask |  8 | avx        3286338 ns      4882812 ns           32
mask |  8 |     tbb    8259153 ns      7812500 ns           32
mask |  8 | avx tbb    2355922 ns      2441406 ns           32

data |  9 |           18581094 ns     21484375 ns           32
data |  9 | avx        2998997 ns        0.000 ns           32
data |  9 |     tbb    2529850 ns      1953125 ns           32
data |  9 | avx tbb    2362838 ns      1953125 ns           32
mask |  9 |           52746334 ns     52734375 ns           32
mask |  9 | avx        3178641 ns      3906250 ns           32
mask |  9 |     tbb    8307316 ns      8789062 ns           32
mask |  9 | avx tbb    2355031 ns      1464844 ns           32

data | 10 |           16223072 ns     15625000 ns           32
data | 10 | avx        3028641 ns       976562 ns           32
data | 10 |     tbb    2511759 ns      1953125 ns           32
data | 10 | avx tbb    2366775 ns      1953125 ns           32
mask | 10 |           52783369 ns     54199219 ns           32
mask | 10 | avx        3223050 ns      3417969 ns           32
mask | 10 |     tbb    8222588 ns      8300781 ns           32
mask | 10 | avx tbb    2351266 ns      2441406 ns           32

data | 11 |           15066012 ns     15136719 ns           32
data | 11 | avx        3023906 ns      6347656 ns           32
data | 11 |     tbb    2479488 ns      2441406 ns           32
data | 11 | avx tbb    2402512 ns      2929688 ns           32
mask | 11 |           52379250 ns     53710938 ns           32
mask | 11 | avx        3142472 ns      4882812 ns           32
mask | 11 |     tbb    8257356 ns      6835938 ns           32
mask | 11 | avx tbb    2380591 ns      1953125 ns           32

data | 12 |           13872803 ns     12695312 ns           32
data | 12 | avx        3110981 ns      1953125 ns           32
data | 12 |     tbb    2474416 ns      2929688 ns           32
data | 12 | avx tbb    2366059 ns      2929688 ns           32
mask | 12 |           52856863 ns     52734375 ns           32
mask | 12 | avx        3156984 ns      1953125 ns           32
mask | 12 |     tbb    8231862 ns      7812500 ns           32
mask | 12 | avx tbb    2367609 ns      2929688 ns           32

data | 13 |           12790506 ns     11718750 ns           32
data | 13 | avx        3032741 ns      6835938 ns           32
data | 13 |     tbb    2465038 ns      2929688 ns           32
data | 13 | avx tbb    2364147 ns      1953125 ns           32
mask | 13 |           52136972 ns     52734375 ns           32
mask | 13 | avx        3154906 ns       488281 ns           32
mask | 13 |     tbb    8232841 ns      8300781 ns           32
mask | 13 | avx tbb    2356781 ns      2929688 ns           32

data | 14 |           11792331 ns     13183594 ns           32
data | 14 | avx        3017003 ns        0.000 ns           32
data | 14 |     tbb    2478691 ns      2929688 ns           32
data | 14 | avx tbb    2371119 ns      3417969 ns           32
mask | 14 |           51777906 ns     51269531 ns           32
mask | 14 | avx        3161894 ns      2929688 ns           32
mask | 14 |     tbb    8284322 ns      8789062 ns           32
mask | 14 | avx tbb    2362894 ns      1953125 ns           32

data | 15 |           11098075 ns     11230469 ns           32
data | 15 | avx        3011809 ns      6347656 ns           32
data | 15 |     tbb    2480078 ns      2929688 ns           32
data | 15 | avx tbb    2369266 ns      1953125 ns           32
mask | 15 |           52769625 ns     53710938 ns           32
mask | 15 | avx        3146750 ns      6835938 ns           32
mask | 15 |     tbb    8242916 ns      8300781 ns           32
mask | 15 | avx tbb    2357438 ns      2441406 ns           32

data | 16 |           10429225 ns     11230469 ns           32
data | 16 | avx        3241994 ns      2929688 ns           32
data | 16 |     tbb    2463138 ns      2441406 ns           32
data | 16 | avx tbb    2369256 ns      3417969 ns           32
mask | 16 |           52199200 ns     53222656 ns           32
mask | 16 | avx        3189047 ns      3906250 ns           32
mask | 16 |     tbb    8241719 ns      7812500 ns           32
mask | 16 | avx tbb    2366687 ns      1953125 ns           32

data | 17 |           10029566 ns     10742188 ns           32
data | 17 | avx        3114609 ns        0.000 ns           32
data | 17 |     tbb    2458778 ns      2441406 ns           32
data | 17 | avx tbb    2370675 ns      1464844 ns           32
mask | 17 |           52590613 ns     54199219 ns           32
mask | 17 | avx        3160250 ns      3906250 ns           32
mask | 17 |     tbb    8238922 ns      7812500 ns           32
mask | 17 | avx tbb    2351044 ns      2441406 ns           32

data | 18 |            9499356 ns      8300781 ns           32
data | 18 | avx        3165453 ns      5371094 ns           32
data | 18 |     tbb    2475056 ns      2929688 ns           32
data | 18 | avx tbb    2378441 ns      2441406 ns           32
mask | 18 |           51224006 ns     51269531 ns           32
mask | 18 | avx        3171297 ns      5371094 ns           32
mask | 18 |     tbb    8224238 ns      7812500 ns           32
mask | 18 | avx tbb    2357734 ns      2441406 ns           32

data | 19 |            8997572 ns      8789062 ns           32
data | 19 | avx        3133044 ns        0.000 ns           32
data | 19 |     tbb    2481441 ns      1953125 ns           32
data | 19 | avx tbb    2368262 ns      1464844 ns           32
mask | 19 |           51620137 ns     51269531 ns           32
mask | 19 | avx        3164641 ns      5859375 ns           32
mask | 19 |     tbb    8224700 ns      7812500 ns           32
mask | 19 | avx tbb    2356678 ns      3417969 ns           32

data | 20 |            8402362 ns      8789062 ns           32
data | 20 | avx        3113284 ns       976562 ns           32
data | 20 |     tbb    2466625 ns      1953125 ns           32
data | 20 | avx tbb    2374066 ns      2441406 ns           32
mask | 20 |           52248616 ns     51757812 ns           32
mask | 20 | avx        3194216 ns      3906250 ns           32
mask | 20 |     tbb    8286750 ns      7324219 ns           32
mask | 20 | avx tbb    2355638 ns      1953125 ns           32

data | 21 |            8030819 ns      7812500 ns           32
data | 21 | avx        3147322 ns      4882812 ns           32
data | 21 |     tbb    2460275 ns      2929688 ns           32
data | 21 | avx tbb    2371537 ns      1953125 ns           32
mask | 21 |           51818056 ns     49804688 ns           32
mask | 21 | avx        3164959 ns      4394531 ns           32
mask | 21 |     tbb    8310297 ns      7324219 ns           32
mask | 21 | avx tbb    2361259 ns      2441406 ns           32

data | 22 |            7797975 ns      9277344 ns           32
data | 22 | avx        3158522 ns      2929688 ns           32
data | 22 |     tbb    2453763 ns      1464844 ns           32
data | 22 | avx tbb    2365831 ns      1953125 ns           32
mask | 22 |           52683381 ns     53222656 ns           32
mask | 22 | avx        3177441 ns      5371094 ns           32
mask | 22 |     tbb    8292963 ns      7324219 ns           32
mask | 22 | avx tbb    2355775 ns      1953125 ns           32

data | 23 |            7473850 ns      7324219 ns           32
data | 23 | avx        3129056 ns        0.000 ns           32
data | 23 |     tbb    2452425 ns      2929688 ns           32
data | 23 | avx tbb    2362653 ns      1953125 ns           32
mask | 23 |           51865916 ns     51269531 ns           32
mask | 23 | avx        3185531 ns      6347656 ns           32
mask | 23 |     tbb    8288062 ns      9277344 ns           32
mask | 23 | avx tbb    2354988 ns      2929688 ns           32

data | 24 |            7185000 ns      8300781 ns           32
data | 24 | avx        3323412 ns      2929688 ns           32
data | 24 |     tbb    2457831 ns      3906250 ns           32
data | 24 | avx tbb    2359753 ns       976562 ns           32
mask | 24 |           52754284 ns     51757812 ns           32
mask | 24 | avx        3143519 ns      3906250 ns           32
mask | 24 |     tbb    8297528 ns      8300781 ns           32
mask | 24 | avx tbb    2360619 ns      1953125 ns           32

data | 25 |            6960113 ns      5371094 ns           32
data | 25 | avx        3177828 ns      3417969 ns           32
data | 25 |     tbb    2443237 ns      1953125 ns           32
data | 25 | avx tbb    2371137 ns      2441406 ns           32
mask | 25 |           50920184 ns     52734375 ns           32
mask | 25 | avx        3162109 ns      2441406 ns           32
mask | 25 |     tbb    8317112 ns      7324219 ns           32
mask | 25 | avx tbb    2352391 ns      2441406 ns           32

data | 26 |            6746078 ns      6347656 ns           32
data | 26 | avx        3134431 ns      5371094 ns           32
data | 26 |     tbb    2448112 ns      3417969 ns           32
data | 26 | avx tbb    2355309 ns      2441406 ns           32
mask | 26 |           51611791 ns     52734375 ns           32
mask | 26 | avx        3168778 ns      1464844 ns           32
mask | 26 |     tbb    8222653 ns      7812500 ns           32
mask | 26 | avx tbb    2373438 ns      3906250 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10687219 ns      8789062 ns           16
data |  1 | avx       10684062 ns     12695312 ns           16
data |  1 |     tbb    9206194 ns      8789062 ns           16
data |  1 | avx tbb    9240025 ns      9765625 ns           16
mask |  1 |           10544931 ns      8789062 ns           16
mask |  1 | avx       10737019 ns     14648438 ns           16
mask |  1 |     tbb    9231531 ns      8789062 ns           16
mask |  1 | avx tbb    9250963 ns      8789062 ns           16

data |  2 |          321452662 ns    323242188 ns           16
data |  2 | avx       13190850 ns     13671875 ns           16
data |  2 |     tbb   31646706 ns     29296875 ns           16
data |  2 | avx tbb    9356212 ns      8789062 ns           16
mask |  2 |          209946175 ns    208984375 ns           16
mask |  2 | avx       13439125 ns     13671875 ns           16
mask |  2 |     tbb   32618556 ns     33203125 ns           16
mask |  2 | avx tbb    9362412 ns     11718750 ns           16

data |  3 |          214057344 ns    203125000 ns           16
data |  3 | avx       12055706 ns     12695312 ns           16
data |  3 |     tbb   21385131 ns     19531250 ns           16
data |  3 | avx tbb    9266519 ns     11718750 ns           16
mask |  3 |          208931581 ns    210937500 ns           16
mask |  3 | avx       12728863 ns     11718750 ns           16
mask |  3 |     tbb   32708381 ns     31250000 ns           16
mask |  3 | avx tbb    9270119 ns      6835938 ns           16

data |  4 |          160734000 ns    159179688 ns           16
data |  4 | avx       12186712 ns     15625000 ns           16
data |  4 |     tbb   15957313 ns     15625000 ns           16
data |  4 | avx tbb    9332294 ns      8789062 ns           16
mask |  4 |          212373612 ns    213867188 ns           16
mask |  4 | avx       12723906 ns     12695312 ns           16
mask |  4 |     tbb   32828800 ns     31250000 ns           16
mask |  4 | avx tbb    9269131 ns      8789062 ns           16

data |  5 |          130089869 ns    128906250 ns           16
data |  5 | avx       12160500 ns     10742188 ns           16
data |  5 |     tbb   12866800 ns     11718750 ns           16
data |  5 | avx tbb    9266037 ns      9765625 ns           16
mask |  5 |          207935025 ns    209960938 ns           16
mask |  5 | avx       12758481 ns     12695312 ns           16
mask |  5 |     tbb   32440669 ns     32226562 ns           16
mask |  5 | avx tbb    9291969 ns      9765625 ns           16

data |  6 |          107709650 ns    107421875 ns           16
data |  6 | avx       12213619 ns     11718750 ns           16
data |  6 |     tbb   11222900 ns     15625000 ns           16
data |  6 | avx tbb    9254506 ns      9765625 ns           16
mask |  6 |          209475512 ns    208984375 ns           16
mask |  6 | avx       13189731 ns     12695312 ns           16
mask |  6 |     tbb   32357000 ns     32226562 ns           16
mask |  6 | avx tbb    9290763 ns      9765625 ns           16

data |  7 |           92543044 ns     91796875 ns           16
data |  7 | avx       12737131 ns     13671875 ns           16
data |  7 |     tbb   10142788 ns     12695312 ns           16
data |  7 | avx tbb    9264431 ns      7812500 ns           16
mask |  7 |          211820463 ns    213867188 ns           16
mask |  7 | avx       12641425 ns     13671875 ns           16
mask |  7 |     tbb   32551756 ns     31250000 ns           16
mask |  7 | avx tbb    9276731 ns      8789062 ns           16

data |  8 |           82103913 ns     83007812 ns           16
data |  8 | avx       12118862 ns     12695312 ns           16
data |  8 |     tbb    9716438 ns      8789062 ns           16
data |  8 | avx tbb    9293537 ns      9765625 ns           16
mask |  8 |          208229563 ns    208984375 ns           16
mask |  8 | avx       12586812 ns     13671875 ns           16
mask |  8 |     tbb   32769588 ns     32226562 ns           16
mask |  8 | avx tbb    9286112 ns      8789062 ns           16

data |  9 |           72664475 ns     75195312 ns           16
data |  9 | avx       12249700 ns     11718750 ns           16
data |  9 |     tbb    9771106 ns      9765625 ns           16
data |  9 | avx tbb    9265719 ns      9765625 ns           16
mask |  9 |          204982456 ns    203125000 ns           16
mask |  9 | avx       12751469 ns     13671875 ns           16
mask |  9 |     tbb   32676700 ns     33203125 ns           16
mask |  9 | avx tbb    9296625 ns      8789062 ns           16

data | 10 |           65471675 ns     64453125 ns           16
data | 10 | avx       12132825 ns     13671875 ns           16
data | 10 |     tbb    9629131 ns      9765625 ns           16
data | 10 | avx tbb    9273731 ns      9765625 ns           16
mask | 10 |          209335312 ns    209960938 ns           16
mask | 10 | avx       13179331 ns     12695312 ns           16
mask | 10 |     tbb   32731362 ns     31250000 ns           16
mask | 10 | avx tbb    9288363 ns      8789062 ns           16

data | 11 |           60732106 ns     59570312 ns           16
data | 11 | avx       12350969 ns     11718750 ns           16
data | 11 |     tbb    9590875 ns     11718750 ns           16
data | 11 | avx tbb    9255306 ns      8789062 ns           16
mask | 11 |          209938944 ns    211914062 ns           16
mask | 11 | avx       12614500 ns     10742188 ns           16
mask | 11 |     tbb   32649556 ns     32226562 ns           16
mask | 11 | avx tbb    9268544 ns      8789062 ns           16

data | 12 |           54914344 ns     56640625 ns           16
data | 12 | avx       12178587 ns     13671875 ns           16
data | 12 |     tbb    9512031 ns     12695312 ns           16
data | 12 | avx tbb    9275794 ns      8789062 ns           16
mask | 12 |          208831269 ns    208984375 ns           16
mask | 12 | avx       12759312 ns     13671875 ns           16
mask | 12 |     tbb   32525850 ns     29296875 ns           16
mask | 12 | avx tbb    9301137 ns      8789062 ns           16

data | 13 |           51317000 ns     48828125 ns           16
data | 13 | avx       12045519 ns      9765625 ns           16
data | 13 |     tbb    9542031 ns      8789062 ns           16
data | 13 | avx tbb    9267769 ns      9765625 ns           16
mask | 13 |          211647281 ns    211914062 ns           16
mask | 13 | avx       12612381 ns     11718750 ns           16
mask | 13 |     tbb   32361331 ns     30273438 ns           16
mask | 13 | avx tbb    9282500 ns      9765625 ns           16

data | 14 |           48112731 ns     48828125 ns           16
data | 14 | avx       12829806 ns      9765625 ns           16
data | 14 |     tbb    9531912 ns      9765625 ns           16
data | 14 | avx tbb    9274025 ns      9765625 ns           16
mask | 14 |          211882881 ns    211914062 ns           16
mask | 14 | avx       12740931 ns     11718750 ns           16
mask | 14 |     tbb   32590744 ns     30273438 ns           16
mask | 14 | avx tbb    9323225 ns     10742188 ns           16

data | 15 |           44687806 ns     45898438 ns           16
data | 15 | avx       12697806 ns     15625000 ns           16
data | 15 |     tbb    9564313 ns      6835938 ns           16
data | 15 | avx tbb    9292000 ns      9765625 ns           16
mask | 15 |          205567369 ns    207031250 ns           16
mask | 15 | avx       12703837 ns     11718750 ns           16
mask | 15 |     tbb   32458419 ns     32226562 ns           16
mask | 15 | avx tbb    9282044 ns      8789062 ns           16

data | 16 |           42150356 ns     38085938 ns           16
data | 16 | avx       12092844 ns     13671875 ns           16
data | 16 |     tbb    9623175 ns     11718750 ns           16
data | 16 | avx tbb    9274919 ns      8789062 ns           16
mask | 16 |          207908650 ns    207031250 ns           16
mask | 16 | avx       13046044 ns     11718750 ns           16
mask | 16 |     tbb   32645650 ns     31250000 ns           16
mask | 16 | avx tbb    9287894 ns     10742188 ns           16

data | 17 |           40288781 ns     41992188 ns           16
data | 17 | avx       12631225 ns     13671875 ns           16
data | 17 |     tbb    9583344 ns      9765625 ns           16
data | 17 | avx tbb    9282781 ns     10742188 ns           16
mask | 17 |          209974462 ns    209960938 ns           16
mask | 17 | avx       12572100 ns     13671875 ns           16
mask | 17 |     tbb   32572381 ns     32226562 ns           16
mask | 17 | avx tbb    9275675 ns      9765625 ns           16

data | 18 |           37488000 ns     36132812 ns           16
data | 18 | avx       12527925 ns     13671875 ns           16
data | 18 |     tbb    9515250 ns      8789062 ns           16
data | 18 | avx tbb    9300700 ns      9765625 ns           16
mask | 18 |          207830863 ns    211914062 ns           16
mask | 18 | avx       12693950 ns     13671875 ns           16
mask | 18 |     tbb   32590481 ns     29296875 ns           16
mask | 18 | avx tbb    9275469 ns      9765625 ns           16

data | 19 |           35324213 ns     36132812 ns           16
data | 19 | avx       12648987 ns     11718750 ns           16
data | 19 |     tbb    9567856 ns      8789062 ns           16
data | 19 | avx tbb    9286456 ns      6835938 ns           16
mask | 19 |          212943463 ns    211914062 ns           16
mask | 19 | avx       12569481 ns     12695312 ns           16
mask | 19 |     tbb   32651437 ns     31250000 ns           16
mask | 19 | avx tbb    9290056 ns      9765625 ns           16

data | 20 |           33660300 ns     33203125 ns           16
data | 20 | avx       13139794 ns     14648438 ns           16
data | 20 |     tbb    9502794 ns      8789062 ns           16
data | 20 | avx tbb    9295294 ns      8789062 ns           16
mask | 20 |          209316169 ns    208007812 ns           16
mask | 20 | avx       12649612 ns     11718750 ns           16
mask | 20 |     tbb   32637281 ns     31250000 ns           16
mask | 20 | avx tbb    9563663 ns     10742188 ns           16

data | 21 |           32575856 ns     32226562 ns           16
data | 21 | avx       12520000 ns     13671875 ns           16
data | 21 |     tbb    9534112 ns      8789062 ns           16
data | 21 | avx tbb    9276925 ns      8789062 ns           16
mask | 21 |          204382881 ns    204101562 ns           16
mask | 21 | avx       13247069 ns     14648438 ns           16
mask | 21 |     tbb   32572350 ns     33203125 ns           16
mask | 21 | avx tbb    9285575 ns      8789062 ns           16

data | 22 |           31148037 ns     32226562 ns           16
data | 22 | avx       12498456 ns     10742188 ns           16
data | 22 |     tbb    9495300 ns     10742188 ns           16
data | 22 | avx tbb    9280325 ns      9765625 ns           16
mask | 22 |          210068575 ns    209960938 ns           16
mask | 22 | avx       12615887 ns     12695312 ns           16
mask | 22 |     tbb   32426769 ns     31250000 ns           16
mask | 22 | avx tbb    9293544 ns      8789062 ns           16

data | 23 |           29576419 ns     30273438 ns           16
data | 23 | avx       13330319 ns     12695312 ns           16
data | 23 |     tbb    9498212 ns      7812500 ns           16
data | 23 | avx tbb    9281069 ns      7812500 ns           16
mask | 23 |          210336594 ns    208984375 ns           16
mask | 23 | avx       12592919 ns     11718750 ns           16
mask | 23 |     tbb   32460469 ns     31250000 ns           16
mask | 23 | avx tbb    9302781 ns     11718750 ns           16

data | 24 |           28671312 ns     28320312 ns           16
data | 24 | avx       12750012 ns     11718750 ns           16
data | 24 |     tbb    9471675 ns      9765625 ns           16
data | 24 | avx tbb    9278894 ns      8789062 ns           16
mask | 24 |          206165112 ns    206054688 ns           16
mask | 24 | avx       13168206 ns     14648438 ns           16
mask | 24 |     tbb   32662075 ns     32226562 ns           16
mask | 24 | avx tbb    9280344 ns      7812500 ns           16

data | 25 |           27752056 ns     25390625 ns           16
data | 25 | avx       12641131 ns     13671875 ns           16
data | 25 |     tbb    9502569 ns      9765625 ns           16
data | 25 | avx tbb    9278856 ns      9765625 ns           16
mask | 25 |          211623575 ns    210937500 ns           16
mask | 25 | avx       12748406 ns     13671875 ns           16
mask | 25 |     tbb   32526600 ns     31250000 ns           16
mask | 25 | avx tbb    9302019 ns      8789062 ns           16

data | 26 |           26909000 ns     31250000 ns           16
data | 26 | avx       13188469 ns     12695312 ns           16
data | 26 |     tbb    9471381 ns      8789062 ns           16
data | 26 | avx tbb    9312819 ns     11718750 ns           16
mask | 26 |          208545912 ns    208007812 ns           16
mask | 26 | avx       12832294 ns     12695312 ns           16
mask | 26 |     tbb   32606344 ns     32226562 ns           16
mask | 26 | avx tbb    9271363 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           21287425 ns     17578125 ns            8
data |  1 | avx       21167488 ns     21484375 ns            8
data |  1 |     tbb   18569737 ns     17578125 ns            8
data |  1 | avx tbb   18347938 ns     17578125 ns            8
mask |  1 |           22760512 ns     25390625 ns            8
mask |  1 | avx       23768762 ns     31250000 ns            8
mask |  1 |     tbb   18359125 ns     13671875 ns            8
mask |  1 | avx tbb   18357662 ns     17578125 ns            8

data |  2 |          640991837 ns    638671875 ns            8
data |  2 | avx       29028838 ns     27343750 ns            8
data |  2 |     tbb   62687688 ns     60546875 ns            8
data |  2 | avx tbb   18714975 ns     17578125 ns            8
mask |  2 |          423489225 ns    421875000 ns            8
mask |  2 | avx       26917000 ns     25390625 ns            8
mask |  2 |     tbb   65430487 ns     60546875 ns            8
mask |  2 | avx tbb   18603875 ns     19531250 ns            8

data |  3 |          429192187 ns    429687500 ns            8
data |  3 | avx       24208625 ns     23437500 ns            8
data |  3 |     tbb   41480700 ns     39062500 ns            8
data |  3 | avx tbb   18561863 ns     15625000 ns            8
mask |  3 |          420811250 ns    425781250 ns            8
mask |  3 | avx       25331400 ns     23437500 ns            8
mask |  3 |     tbb   65199337 ns     62500000 ns            8
mask |  3 | avx tbb   18479650 ns     19531250 ns            8

data |  4 |          321760613 ns    320312500 ns            8
data |  4 | avx       24174325 ns     25390625 ns            8
data |  4 |     tbb   32298838 ns     31250000 ns            8
data |  4 | avx tbb   18444813 ns     17578125 ns            8
mask |  4 |          413995700 ns    419921875 ns            8
mask |  4 | avx       25586487 ns     27343750 ns            8
mask |  4 |     tbb   64798125 ns     64453125 ns            8
mask |  4 | avx tbb   18488175 ns     13671875 ns            8

data |  5 |          259130650 ns    263671875 ns            8
data |  5 | avx       26481112 ns     25390625 ns            8
data |  5 |     tbb   26431825 ns     25390625 ns            8
data |  5 | avx tbb   18455625 ns     19531250 ns            8
mask |  5 |          419869750 ns    417968750 ns            8
mask |  5 | avx       27933375 ns     27343750 ns            8
mask |  5 |     tbb   64707525 ns     58593750 ns            8
mask |  5 | avx tbb   18502325 ns     19531250 ns            8

data |  6 |          215861038 ns    210937500 ns            8
data |  6 | avx       24180337 ns     23437500 ns            8
data |  6 |     tbb   22345425 ns     31250000 ns            8
data |  6 | avx tbb   18433025 ns     19531250 ns            8
mask |  6 |          416818750 ns    423828125 ns            8
mask |  6 | avx       27740213 ns     27343750 ns            8
mask |  6 |     tbb   64981225 ns     58593750 ns            8
mask |  6 | avx tbb   18469038 ns     17578125 ns            8

data |  7 |          186568225 ns    187500000 ns            8
data |  7 | avx       24182138 ns     23437500 ns            8
data |  7 |     tbb   19913350 ns     19531250 ns            8
data |  7 | avx tbb   18604487 ns     17578125 ns            8
mask |  7 |          417908062 ns    414062500 ns            8
mask |  7 | avx       25398812 ns     27343750 ns            8
mask |  7 |     tbb   65222550 ns     60546875 ns            8
mask |  7 | avx tbb   18458175 ns     17578125 ns            8

data |  8 |          162552200 ns    156250000 ns            8
data |  8 | avx       26689250 ns     25390625 ns            8
data |  8 |     tbb   19676337 ns     23437500 ns            8
data |  8 | avx tbb   18447288 ns     19531250 ns            8
mask |  8 |          417950063 ns    419921875 ns            8
mask |  8 | avx       25515525 ns     25390625 ns            8
mask |  8 |     tbb   65009912 ns     60546875 ns            8
mask |  8 | avx tbb   18648900 ns     21484375 ns            8

data |  9 |          147541200 ns    144531250 ns            8
data |  9 | avx       24516350 ns     21484375 ns            8
data |  9 |     tbb   20365475 ns     19531250 ns            8
data |  9 | avx tbb   18420587 ns     15625000 ns            8
mask |  9 |          418189987 ns    417968750 ns            8
mask |  9 | avx       25245225 ns     25390625 ns            8
mask |  9 |     tbb   65976962 ns     58593750 ns            8
mask |  9 | avx tbb   18458562 ns     19531250 ns            8

data | 10 |          132848525 ns    134765625 ns            8
data | 10 | avx       24189238 ns     23437500 ns            8
data | 10 |     tbb   18950850 ns     17578125 ns            8
data | 10 | avx tbb   18453525 ns     19531250 ns            8
mask | 10 |          413939725 ns    410156250 ns            8
mask | 10 | avx       25369487 ns     27343750 ns            8
mask | 10 |     tbb   65335762 ns     58593750 ns            8
mask | 10 | avx tbb   18460988 ns     17578125 ns            8

data | 11 |          118780112 ns    119140625 ns            8
data | 11 | avx       25901850 ns     29296875 ns            8
data | 11 |     tbb   18878800 ns     17578125 ns            8
data | 11 | avx tbb   18436112 ns     17578125 ns            8
mask | 11 |          415117638 ns    412109375 ns            8
mask | 11 | avx       25235187 ns     25390625 ns            8
mask | 11 |     tbb   65135638 ns     60546875 ns            8
mask | 11 | avx tbb   18479137 ns     19531250 ns            8

data | 12 |          109266138 ns    109375000 ns            8
data | 12 | avx       24319463 ns     25390625 ns            8
data | 12 |     tbb   18919100 ns     19531250 ns            8
data | 12 | avx tbb   18446175 ns     19531250 ns            8
mask | 12 |          418294625 ns    421875000 ns            8
mask | 12 | avx       27557625 ns     29296875 ns            8
mask | 12 |     tbb   64666613 ns     60546875 ns            8
mask | 12 | avx tbb   18509987 ns     19531250 ns            8

data | 13 |          102243088 ns    105468750 ns            8
data | 13 | avx       24243025 ns     21484375 ns            8
data | 13 |     tbb   19030362 ns     19531250 ns            8
data | 13 | avx tbb   18425225 ns     21484375 ns            8
mask | 13 |          420881475 ns    419921875 ns            8
mask | 13 | avx       26342537 ns     25390625 ns            8
mask | 13 |     tbb   64981325 ns     62500000 ns            8
mask | 13 | avx tbb   18496000 ns     17578125 ns            8

data | 14 |           94947900 ns     93750000 ns            8
data | 14 | avx       24172825 ns     23437500 ns            8
data | 14 |     tbb   18921938 ns     21484375 ns            8
data | 14 | avx tbb   18458825 ns     19531250 ns            8
mask | 14 |          422095688 ns    425781250 ns            8
mask | 14 | avx       25555362 ns     23437500 ns            8
mask | 14 |     tbb   64504875 ns     62500000 ns            8
mask | 14 | avx tbb   18490438 ns     17578125 ns            8

data | 15 |           94238675 ns     95703125 ns            8
data | 15 | avx       24268913 ns     25390625 ns            8
data | 15 |     tbb   19350425 ns     19531250 ns            8
data | 15 | avx tbb   18433163 ns     17578125 ns            8
mask | 15 |          418191300 ns    421875000 ns            8
mask | 15 | avx       25284300 ns     23437500 ns            8
mask | 15 |     tbb   64519288 ns     62500000 ns            8
mask | 15 | avx tbb   18504763 ns     19531250 ns            8

data | 16 |           85328988 ns     87890625 ns            8
data | 16 | avx       24476113 ns     25390625 ns            8
data | 16 |     tbb   19122787 ns     21484375 ns            8
data | 16 | avx tbb   18454300 ns     19531250 ns            8
mask | 16 |          417005412 ns    417968750 ns            8
mask | 16 | avx       25321250 ns     27343750 ns            8
mask | 16 |     tbb   65559325 ns     60546875 ns            8
mask | 16 | avx tbb   18483200 ns     19531250 ns            8

data | 17 |           82438687 ns     82031250 ns            8
data | 17 | avx       25413425 ns     25390625 ns            8
data | 17 |     tbb   18925112 ns     19531250 ns            8
data | 17 | avx tbb   18556287 ns     17578125 ns            8
mask | 17 |          422242775 ns    414062500 ns            8
mask | 17 | avx       25300238 ns     21484375 ns            8
mask | 17 |     tbb   65805875 ns     56640625 ns            8
mask | 17 | avx tbb   18641937 ns     17578125 ns            8

data | 18 |           74968150 ns     76171875 ns            8
data | 18 | avx       25147762 ns     23437500 ns            8
data | 18 |     tbb   19078012 ns     19531250 ns            8
data | 18 | avx tbb   20158450 ns     19531250 ns            8
mask | 18 |          422682350 ns    423828125 ns            8
mask | 18 | avx       25633037 ns     25390625 ns            8
mask | 18 |     tbb   64597238 ns     58593750 ns            8
mask | 18 | avx tbb   18494588 ns     19531250 ns            8

data | 19 |           74237963 ns     78125000 ns            8
data | 19 | avx       25314400 ns     23437500 ns            8
data | 19 |     tbb   18880487 ns     21484375 ns            8
data | 19 | avx tbb   18473050 ns     13671875 ns            8
mask | 19 |          415698075 ns    416015625 ns            8
mask | 19 | avx       25243725 ns     23437500 ns            8
mask | 19 |     tbb   64516550 ns     56640625 ns            8
mask | 19 | avx tbb   18468213 ns     21484375 ns            8

data | 20 |           67043775 ns     66406250 ns            8
data | 20 | avx       25142137 ns     25390625 ns            8
data | 20 |     tbb   19015212 ns     19531250 ns            8
data | 20 | avx tbb   18504437 ns     19531250 ns            8
mask | 20 |          417710488 ns    417968750 ns            8
mask | 20 | avx       27610650 ns     29296875 ns            8
mask | 20 |     tbb   65086637 ns     62500000 ns            8
mask | 20 | avx tbb   18463175 ns     19531250 ns            8

data | 21 |           64255600 ns     64453125 ns            8
data | 21 | avx       25380950 ns     23437500 ns            8
data | 21 |     tbb   18911813 ns     19531250 ns            8
data | 21 | avx tbb   18459075 ns     19531250 ns            8
mask | 21 |          414635125 ns    412109375 ns            8
mask | 21 | avx       25537625 ns     23437500 ns            8
mask | 21 |     tbb   64568362 ns     60546875 ns            8
mask | 21 | avx tbb   18446675 ns     19531250 ns            8

data | 22 |           63409475 ns     64453125 ns            8
data | 22 | avx       25271012 ns     23437500 ns            8
data | 22 |     tbb   18918250 ns     19531250 ns            8
data | 22 | avx tbb   18465487 ns     19531250 ns            8
mask | 22 |          419809625 ns    421875000 ns            8
mask | 22 | avx       25200238 ns     25390625 ns            8
mask | 22 |     tbb   64838012 ns     58593750 ns            8
mask | 22 | avx tbb   18477825 ns     19531250 ns            8

data | 23 |           61015188 ns     60546875 ns            8
data | 23 | avx       25358363 ns     23437500 ns            8
data | 23 |     tbb   18891387 ns     19531250 ns            8
data | 23 | avx tbb   18463525 ns     17578125 ns            8
mask | 23 |          420726750 ns    421875000 ns            8
mask | 23 | avx       25787037 ns     27343750 ns            8
mask | 23 |     tbb   64577038 ns     60546875 ns            8
mask | 23 | avx tbb   18455338 ns     17578125 ns            8

data | 24 |           61044975 ns     62500000 ns            8
data | 24 | avx       26204663 ns     25390625 ns            8
data | 24 |     tbb   19301600 ns     19531250 ns            8
data | 24 | avx tbb   18478775 ns     19531250 ns            8
mask | 24 |          412987163 ns    414062500 ns            8
mask | 24 | avx       25261350 ns     23437500 ns            8
mask | 24 |     tbb   64981562 ns     62500000 ns            8
mask | 24 | avx tbb   18507775 ns     19531250 ns            8

data | 25 |           57295812 ns     56640625 ns            8
data | 25 | avx       25547175 ns     27343750 ns            8
data | 25 |     tbb   18787450 ns     19531250 ns            8
data | 25 | avx tbb   18598487 ns     19531250 ns            8
mask | 25 |          423102938 ns    421875000 ns            8
mask | 25 | avx       27540775 ns     27343750 ns            8
mask | 25 |     tbb   65803750 ns     64453125 ns            8
mask | 25 | avx tbb   18491300 ns     15625000 ns            8

data | 26 |           53679850 ns     62500000 ns            8
data | 26 | avx       25112900 ns     25390625 ns            8
data | 26 |     tbb   19042525 ns     17578125 ns            8
data | 26 | avx tbb   18469625 ns     19531250 ns            8
mask | 26 |          419956525 ns    416015625 ns            8
mask | 26 | avx       25347250 ns     25390625 ns            8
mask | 26 |     tbb   64578737 ns     60546875 ns            8
mask | 26 | avx tbb   18475725 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           42484887 ns     41015625 ns            8
data |  1 | avx       42510725 ns     41015625 ns            8
data |  1 |     tbb   36607400 ns     35156250 ns            8
data |  1 | avx tbb   37046137 ns     37109375 ns            8
mask |  1 |           42479375 ns     41015625 ns            8
mask |  1 | avx       42648137 ns     44921875 ns            8
mask |  1 |     tbb   36620475 ns     35156250 ns            8
mask |  1 | avx tbb   36867425 ns     35156250 ns            8

data |  2 |         1285429650 ns   1289062500 ns            8
data |  2 | avx       53429250 ns     54687500 ns            8
data |  2 |     tbb  125051587 ns    113281250 ns            8
data |  2 | avx tbb   37971600 ns     39062500 ns            8
mask |  2 |          843842088 ns    845703125 ns            8
mask |  2 | avx       54035587 ns     52734375 ns            8
mask |  2 |     tbb  129860625 ns    119140625 ns            8
mask |  2 | avx tbb   37077162 ns     37109375 ns            8

data |  3 |          859454438 ns    857421875 ns            8
data |  3 | avx       49054825 ns     46875000 ns            8
data |  3 |     tbb   83519737 ns     80078125 ns            8
data |  3 | avx tbb   36782787 ns     39062500 ns            8
mask |  3 |          836659888 ns    837890625 ns            8
mask |  3 | avx       55647500 ns     54687500 ns            8
mask |  3 |     tbb  130787487 ns    121093750 ns            8
mask |  3 | avx tbb   36842175 ns     39062500 ns            8

data |  4 |          644722312 ns    640625000 ns            8
data |  4 | avx       54667325 ns     54687500 ns            8
data |  4 |     tbb   64716600 ns     58593750 ns            8
data |  4 | avx tbb   36778263 ns     39062500 ns            8
mask |  4 |          839711262 ns    839843750 ns            8
mask |  4 | avx       50738987 ns     50781250 ns            8
mask |  4 |     tbb  129158925 ns    117187500 ns            8
mask |  4 | avx tbb   36876125 ns     37109375 ns            8

data |  5 |          516769488 ns    517578125 ns            8
data |  5 | avx       48326975 ns     48828125 ns            8
data |  5 |     tbb   51289050 ns     48828125 ns            8
data |  5 | avx tbb   36792700 ns     35156250 ns            8
mask |  5 |          835620550 ns    833984375 ns            8
mask |  5 | avx       50556088 ns     52734375 ns            8
mask |  5 |     tbb  130521613 ns    123046875 ns            8
mask |  5 | avx tbb   36867212 ns     37109375 ns            8

data |  6 |          433727150 ns    433593750 ns            8
data |  6 | avx       48451887 ns     46875000 ns            8
data |  6 |     tbb   44142025 ns     37109375 ns            8
data |  6 | avx tbb   37103875 ns     35156250 ns            8
mask |  6 |          834313662 ns    832031250 ns            8
mask |  6 | avx       51054175 ns     48828125 ns            8
mask |  6 |     tbb  129005750 ns    123046875 ns            8
mask |  6 | avx tbb   36863600 ns     37109375 ns            8

data |  7 |          372347475 ns    371093750 ns            8
data |  7 | avx       48860688 ns     48828125 ns            8
data |  7 |     tbb   40722763 ns     39062500 ns            8
data |  7 | avx tbb   36766350 ns     31250000 ns            8
mask |  7 |          827883487 ns    828125000 ns            8
mask |  7 | avx       50695962 ns     50781250 ns            8
mask |  7 |     tbb  130886225 ns    119140625 ns            8
mask |  7 | avx tbb   36822425 ns     39062500 ns            8

data |  8 |          328466875 ns    330078125 ns            8
data |  8 | avx       49497550 ns     50781250 ns            8
data |  8 |     tbb   38937713 ns     39062500 ns            8
data |  8 | avx tbb   36761850 ns     37109375 ns            8
mask |  8 |          834571550 ns    833984375 ns            8
mask |  8 | avx       55417725 ns     56640625 ns            8
mask |  8 |     tbb  130752075 ns    125000000 ns            8
mask |  8 | avx tbb   36866237 ns     37109375 ns            8

data |  9 |          293444663 ns    294921875 ns            8
data |  9 | avx       48372600 ns     50781250 ns            8
data |  9 |     tbb   38617787 ns     35156250 ns            8
data |  9 | avx tbb   37044438 ns     31250000 ns            8
mask |  9 |          835090163 ns    833984375 ns            8
mask |  9 | avx       50842538 ns     52734375 ns            8
mask |  9 |     tbb  129419300 ns    126953125 ns            8
mask |  9 | avx tbb   37690875 ns     41015625 ns            8

data | 10 |          258098250 ns    255859375 ns            8
data | 10 | avx       48361787 ns     48828125 ns            8
data | 10 |     tbb   37871562 ns     37109375 ns            8
data | 10 | avx tbb   36743963 ns     37109375 ns            8
mask | 10 |          841781600 ns    837890625 ns            8
mask | 10 | avx       51354062 ns     50781250 ns            8
mask | 10 |     tbb  130930225 ns    123046875 ns            8
mask | 10 | avx tbb   36894088 ns     35156250 ns            8

data | 11 |          237687413 ns    236328125 ns            8
data | 11 | avx       48704975 ns     48828125 ns            8
data | 11 |     tbb   39403875 ns     39062500 ns            8
data | 11 | avx tbb   36782725 ns     37109375 ns            8
mask | 11 |          834578075 ns    835937500 ns            8
mask | 11 | avx       55638050 ns     54687500 ns            8
mask | 11 |     tbb  129886975 ns    126953125 ns            8
mask | 11 | avx tbb   36817387 ns     37109375 ns            8

data | 12 |          223060113 ns    222656250 ns            8
data | 12 | avx       53756500 ns     50781250 ns            8
data | 12 |     tbb   37881100 ns     35156250 ns            8
data | 12 | avx tbb   36757450 ns     37109375 ns            8
mask | 12 |          840135488 ns    839843750 ns            8
mask | 12 | avx       55624088 ns     56640625 ns            8
mask | 12 |     tbb  130335550 ns    125000000 ns            8
mask | 12 | avx tbb   36841150 ns     35156250 ns            8

data | 13 |          207904663 ns    207031250 ns            8
data | 13 | avx       50354025 ns     50781250 ns            8
data | 13 |     tbb   38081075 ns     35156250 ns            8
data | 13 | avx tbb   36800875 ns     37109375 ns            8
mask | 13 |          836556700 ns    833984375 ns            8
mask | 13 | avx       55688937 ns     56640625 ns            8
mask | 13 |     tbb  129022350 ns    126953125 ns            8
mask | 13 | avx tbb   36817037 ns     39062500 ns            8

data | 14 |          192493637 ns    193359375 ns            8
data | 14 | avx       48467150 ns     50781250 ns            8
data | 14 |     tbb   37651625 ns     35156250 ns            8
data | 14 | avx tbb   36786375 ns     37109375 ns            8
mask | 14 |          839402837 ns    835937500 ns            8
mask | 14 | avx       55688150 ns     54687500 ns            8
mask | 14 |     tbb  129194612 ns    121093750 ns            8
mask | 14 | avx tbb   36853875 ns     37109375 ns            8

data | 15 |          177115300 ns    179687500 ns            8
data | 15 | avx       53013788 ns     54687500 ns            8
data | 15 |     tbb   37570550 ns     37109375 ns            8
data | 15 | avx tbb   36775775 ns     37109375 ns            8
mask | 15 |          829240475 ns    832031250 ns            8
mask | 15 | avx       50983025 ns     52734375 ns            8
mask | 15 |     tbb  131121425 ns    125000000 ns            8
mask | 15 | avx tbb   37201550 ns     35156250 ns            8

data | 16 |          166933913 ns    169921875 ns            8
data | 16 | avx       48618800 ns     48828125 ns            8
data | 16 |     tbb   37716463 ns     35156250 ns            8
data | 16 | avx tbb   37044775 ns     41015625 ns            8
mask | 16 |          842312575 ns    841796875 ns            8
mask | 16 | avx       51155950 ns     50781250 ns            8
mask | 16 |     tbb  129843437 ns    119140625 ns            8
mask | 16 | avx tbb   36833675 ns     35156250 ns            8

data | 17 |          162548450 ns    162109375 ns            8
data | 17 | avx       54758438 ns     56640625 ns            8
data | 17 |     tbb   37654825 ns     41015625 ns            8
data | 17 | avx tbb   37178275 ns     37109375 ns            8
mask | 17 |          834310012 ns    833984375 ns            8
mask | 17 | avx       50783075 ns     50781250 ns            8
mask | 17 |     tbb  129200275 ns    123046875 ns            8
mask | 17 | avx tbb   36907488 ns     39062500 ns            8

data | 18 |          149386263 ns    150390625 ns            8
data | 18 | avx       50570125 ns     48828125 ns            8
data | 18 |     tbb   38754563 ns     35156250 ns            8
data | 18 | avx tbb   36942137 ns     37109375 ns            8
mask | 18 |          831675500 ns    830078125 ns            8
mask | 18 | avx       54955850 ns     52734375 ns            8
mask | 18 |     tbb  130026163 ns    121093750 ns            8
mask | 18 | avx tbb   36911000 ns     39062500 ns            8

data | 19 |          141668812 ns    142578125 ns            8
data | 19 | avx       50356500 ns     50781250 ns            8
data | 19 |     tbb   39612037 ns     39062500 ns            8
data | 19 | avx tbb   36835612 ns     35156250 ns            8
mask | 19 |          838729813 ns    837890625 ns            8
mask | 19 | avx       50593300 ns     48828125 ns            8
mask | 19 |     tbb  131506338 ns    121093750 ns            8
mask | 19 | avx tbb   36823562 ns     39062500 ns            8

data | 20 |          138276600 ns    136718750 ns            8
data | 20 | avx       50468875 ns     52734375 ns            8
data | 20 |     tbb   37647450 ns     35156250 ns            8
data | 20 | avx tbb   36811437 ns     37109375 ns            8
mask | 20 |          835820188 ns    835937500 ns            8
mask | 20 | avx       50933900 ns     50781250 ns            8
mask | 20 |     tbb  130072900 ns    119140625 ns            8
mask | 20 | avx tbb   36846550 ns     39062500 ns            8

data | 21 |          132490263 ns    132812500 ns            8
data | 21 | avx       50323687 ns     48828125 ns            8
data | 21 |     tbb   37667375 ns     35156250 ns            8
data | 21 | avx tbb   37317950 ns     35156250 ns            8
mask | 21 |          834327050 ns    835937500 ns            8
mask | 21 | avx       50812937 ns     50781250 ns            8
mask | 21 |     tbb  130008612 ns    125000000 ns            8
mask | 21 | avx tbb   36855112 ns     41015625 ns            8

data | 22 |          123369163 ns    123046875 ns            8
data | 22 | avx       52901175 ns     52734375 ns            8
data | 22 |     tbb   38256812 ns     37109375 ns            8
data | 22 | avx tbb   36862775 ns     37109375 ns            8
mask | 22 |          831164062 ns    832031250 ns            8
mask | 22 | avx       50690288 ns     50781250 ns            8
mask | 22 |     tbb  130725213 ns    119140625 ns            8
mask | 22 | avx tbb   36845387 ns     37109375 ns            8

data | 23 |          118824638 ns    117187500 ns            8
data | 23 | avx       51032787 ns     48828125 ns            8
data | 23 |     tbb   37726012 ns     35156250 ns            8
data | 23 | avx tbb   36845075 ns     33203125 ns            8
mask | 23 |          829560425 ns    830078125 ns            8
mask | 23 | avx       50683738 ns     52734375 ns            8
mask | 23 |     tbb  129637988 ns    121093750 ns            8
mask | 23 | avx tbb   36953075 ns     37109375 ns            8

data | 24 |          114682100 ns    117187500 ns            8
data | 24 | avx       50640488 ns     52734375 ns            8
data | 24 |     tbb   37731250 ns     35156250 ns            8
data | 24 | avx tbb   36863887 ns     35156250 ns            8
mask | 24 |          835312812 ns    830078125 ns            8
mask | 24 | avx       50976388 ns     54687500 ns            8
mask | 24 |     tbb  129022200 ns    125000000 ns            8
mask | 24 | avx tbb   36896213 ns     37109375 ns            8

data | 25 |          110393500 ns    109375000 ns            8
data | 25 | avx       50476362 ns     48828125 ns            8
data | 25 |     tbb   37600650 ns     37109375 ns            8
data | 25 | avx tbb   36896262 ns     37109375 ns            8
mask | 25 |          837062662 ns    835937500 ns            8
mask | 25 | avx       51187925 ns     46875000 ns            8
mask | 25 |     tbb  130009762 ns    121093750 ns            8
mask | 25 | avx tbb   36909175 ns     35156250 ns            8

data | 26 |          107759338 ns    105468750 ns            8
data | 26 | avx       50414875 ns     50781250 ns            8
data | 26 |     tbb   37465925 ns     41015625 ns            8
data | 26 | avx tbb   37149888 ns     39062500 ns            8
mask | 26 |          835605138 ns    835937500 ns            8
mask | 26 | avx       55041400 ns     54687500 ns            8
mask | 26 |     tbb  130469587 ns    117187500 ns            8
mask | 26 | avx tbb   36869425 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           88575838 ns     83984375 ns            8
data |  1 | avx       85573275 ns     87890625 ns            8
data |  1 |     tbb   73127763 ns     72265625 ns            8
data |  1 | avx tbb   73089325 ns     76171875 ns            8
mask |  1 |           85398362 ns     87890625 ns            8
mask |  1 | avx       85201788 ns     87890625 ns            8
mask |  1 |     tbb   73149325 ns     74218750 ns            8
mask |  1 | avx tbb   73105563 ns     62500000 ns            8

data |  2 |         2575173625 ns   2576171875 ns            8
data |  2 | avx      105389625 ns    109375000 ns            8
data |  2 |     tbb  255210863 ns    232421875 ns            8
data |  2 | avx tbb   73870463 ns     72265625 ns            8
mask |  2 |         1672107538 ns   1673828125 ns            8
mask |  2 | avx      109691438 ns    111328125 ns            8
mask |  2 |     tbb  262683375 ns    242187500 ns            8
mask |  2 | avx tbb   74006362 ns     74218750 ns            8

data |  3 |         1716287850 ns   1710937500 ns            8
data |  3 | avx       97179187 ns     99609375 ns            8
data |  3 |     tbb  168634525 ns    158203125 ns            8
data |  3 | avx tbb   73406862 ns     72265625 ns            8
mask |  3 |         1683778838 ns   1683593750 ns            8
mask |  3 | avx      101419400 ns    101562500 ns            8
mask |  3 |     tbb  258036613 ns    242187500 ns            8
mask |  3 | avx tbb   73641175 ns     70312500 ns            8

data |  4 |         1287678787 ns   1283203125 ns            8
data |  4 | avx      103264687 ns    107421875 ns            8
data |  4 |     tbb  125853100 ns    121093750 ns            8
data |  4 | avx tbb   73416062 ns     70312500 ns            8
mask |  4 |         1671300462 ns   1673828125 ns            8
mask |  4 | avx      101706113 ns    101562500 ns            8
mask |  4 |     tbb  259319125 ns    246093750 ns            8
mask |  4 | avx tbb   73541387 ns     70312500 ns            8

data |  5 |         1032972587 ns   1031250000 ns            8
data |  5 | avx       96744250 ns     95703125 ns            8
data |  5 |     tbb  101173875 ns     93750000 ns            8
data |  5 | avx tbb   73454388 ns     70312500 ns            8
mask |  5 |         1668401387 ns   1671875000 ns            8
mask |  5 | avx      102103650 ns    101562500 ns            8
mask |  5 |     tbb  260726525 ns    240234375 ns            8
mask |  5 | avx tbb   73528950 ns     72265625 ns            8

data |  6 |          863885375 ns    865234375 ns            8
data |  6 | avx       96917463 ns     95703125 ns            8
data |  6 |     tbb   87930237 ns     82031250 ns            8
data |  6 | avx tbb   73529562 ns     74218750 ns            8
mask |  6 |         1680783275 ns   1683593750 ns            8
mask |  6 | avx      101797425 ns    101562500 ns            8
mask |  6 |     tbb  259421325 ns    244140625 ns            8
mask |  6 | avx tbb   73601937 ns     72265625 ns            8

data |  7 |          744906725 ns    742187500 ns            8
data |  7 | avx       96926938 ns     95703125 ns            8
data |  7 |     tbb   79600425 ns     74218750 ns            8
data |  7 | avx tbb   73491025 ns     74218750 ns            8
mask |  7 |         1675032350 ns   1671875000 ns            8
mask |  7 | avx      102663375 ns    101562500 ns            8
mask |  7 |     tbb  259455525 ns    244140625 ns            8
mask |  7 | avx tbb   73904538 ns     76171875 ns            8

data |  8 |          649995000 ns    650390625 ns            8
data |  8 | avx       97192187 ns     97656250 ns            8
data |  8 |     tbb   77646088 ns     74218750 ns            8
data |  8 | avx tbb   73476013 ns     72265625 ns            8
mask |  8 |         1662093562 ns   1664062500 ns            8
mask |  8 | avx      102092425 ns    103515625 ns            8
mask |  8 |     tbb  259577975 ns    244140625 ns            8
mask |  8 | avx tbb   76244813 ns     70312500 ns            8

data |  9 |          581179963 ns    580078125 ns            8
data |  9 | avx       96669475 ns     97656250 ns            8
data |  9 |     tbb   76338175 ns     70312500 ns            8
data |  9 | avx tbb   73482400 ns     72265625 ns            8
mask |  9 |         1677809750 ns   1673828125 ns            8
mask |  9 | avx      102034425 ns     97656250 ns            8
mask |  9 |     tbb  259570188 ns    242187500 ns            8
mask |  9 | avx tbb   73571400 ns     72265625 ns            8

data | 10 |          519809675 ns    517578125 ns            8
data | 10 | avx       96905637 ns     95703125 ns            8
data | 10 |     tbb   74908600 ns     74218750 ns            8
data | 10 | avx tbb   73444150 ns     74218750 ns            8
mask | 10 |         1668435962 ns   1667968750 ns            8
mask | 10 | avx      101677913 ns    101562500 ns            8
mask | 10 |     tbb  264028075 ns    238281250 ns            8
mask | 10 | avx tbb   73559238 ns     74218750 ns            8

data | 11 |          476979637 ns    476562500 ns            8
data | 11 | avx       97748588 ns     97656250 ns            8
data | 11 |     tbb   75117537 ns     72265625 ns            8
data | 11 | avx tbb   73482313 ns     70312500 ns            8
mask | 11 |         1678265012 ns   1677734375 ns            8
mask | 11 | avx      108001562 ns    105468750 ns            8
mask | 11 |     tbb  261046688 ns    246093750 ns            8
mask | 11 | avx tbb   73630562 ns     74218750 ns            8

data | 12 |          441356038 ns    441406250 ns            8
data | 12 | avx       97299288 ns     99609375 ns            8
data | 12 |     tbb   76413025 ns     72265625 ns            8
data | 12 | avx tbb   73503687 ns     76171875 ns            8
mask | 12 |         1667091675 ns   1662109375 ns            8
mask | 12 | avx      102289125 ns    103515625 ns            8
mask | 12 |     tbb  259674975 ns    250000000 ns            8
mask | 12 | avx tbb   73590863 ns     66406250 ns            8

data | 13 |          414780712 ns    414062500 ns            8
data | 13 | avx       97181225 ns     97656250 ns            8
data | 13 |     tbb   75156850 ns     74218750 ns            8
data | 13 | avx tbb   73451913 ns     74218750 ns            8
mask | 13 |         1681778038 ns   1683593750 ns            8
mask | 13 | avx      101459587 ns    103515625 ns            8
mask | 13 |     tbb  261446600 ns    240234375 ns            8
mask | 13 | avx tbb   73531925 ns     72265625 ns            8

data | 14 |          379096175 ns    376953125 ns            8
data | 14 | avx       97940063 ns     93750000 ns            8
data | 14 |     tbb   75837212 ns     70312500 ns            8
data | 14 | avx tbb   73418900 ns     76171875 ns            8
mask | 14 |         1671467525 ns   1671875000 ns            8
mask | 14 | avx      107187587 ns    109375000 ns            8
mask | 14 |     tbb  258004163 ns    240234375 ns            8
mask | 14 | avx tbb   73567388 ns     74218750 ns            8

data | 15 |          353863625 ns    351562500 ns            8
data | 15 | avx       96810350 ns     93750000 ns            8
data | 15 |     tbb   75498050 ns     70312500 ns            8
data | 15 | avx tbb   73552563 ns     68359375 ns            8
mask | 15 |         1678864925 ns   1673828125 ns            8
mask | 15 | avx      101938662 ns    105468750 ns            8
mask | 15 |     tbb  257639412 ns    248046875 ns            8
mask | 15 | avx tbb   73664100 ns     72265625 ns            8

data | 16 |          334188575 ns    333984375 ns            8
data | 16 | avx       97359262 ns     97656250 ns            8
data | 16 |     tbb   75037375 ns     74218750 ns            8
data | 16 | avx tbb   73478300 ns     78125000 ns            8
mask | 16 |         1674570475 ns   1671875000 ns            8
mask | 16 | avx      101468025 ns    101562500 ns            8
mask | 16 |     tbb  260654987 ns    244140625 ns            8
mask | 16 | avx tbb   73645987 ns     72265625 ns            8

data | 17 |          318684112 ns    316406250 ns            8
data | 17 | avx      101790025 ns    101562500 ns            8
data | 17 |     tbb   77426600 ns     74218750 ns            8
data | 17 | avx tbb   73730500 ns     72265625 ns            8
mask | 17 |         1700031113 ns   1703125000 ns            8
mask | 17 | avx      101707000 ns    101562500 ns            8
mask | 17 |     tbb  261565875 ns    238281250 ns            8
mask | 17 | avx tbb   73712000 ns     72265625 ns            8

data | 18 |          302425800 ns    302734375 ns            8
data | 18 | avx      100786063 ns    103515625 ns            8
data | 18 |     tbb   76862375 ns     70312500 ns            8
data | 18 | avx tbb   73593162 ns     78125000 ns            8
mask | 18 |         1679033775 ns   1677734375 ns            8
mask | 18 | avx      109254125 ns    109375000 ns            8
mask | 18 |     tbb  261493113 ns    236328125 ns            8
mask | 18 | avx tbb   73597863 ns     74218750 ns            8

data | 19 |          283104063 ns    283203125 ns            8
data | 19 | avx      100730825 ns     99609375 ns            8
data | 19 |     tbb   75060825 ns     72265625 ns            8
data | 19 | avx tbb   73598500 ns     74218750 ns            8
mask | 19 |         1677884063 ns   1677734375 ns            8
mask | 19 | avx      102578900 ns    101562500 ns            8
mask | 19 |     tbb  261472412 ns    250000000 ns            8
mask | 19 | avx tbb   73568675 ns     70312500 ns            8

data | 20 |          269591100 ns    265625000 ns            8
data | 20 | avx      100983338 ns    101562500 ns            8
data | 20 |     tbb   75118925 ns     76171875 ns            8
data | 20 | avx tbb   73581200 ns     72265625 ns            8
mask | 20 |         1668330987 ns   1667968750 ns            8
mask | 20 | avx      101677675 ns    101562500 ns            8
mask | 20 |     tbb  258122550 ns    242187500 ns            8
mask | 20 | avx tbb   74266325 ns     76171875 ns            8

data | 21 |          257093188 ns    257812500 ns            8
data | 21 | avx      100850550 ns    101562500 ns            8
data | 21 |     tbb   75460837 ns     72265625 ns            8
data | 21 | avx tbb   73613700 ns     70312500 ns            8
mask | 21 |         1688476613 ns   1685546875 ns            8
mask | 21 | avx      102125937 ns     99609375 ns            8
mask | 21 |     tbb  259378300 ns    244140625 ns            8
mask | 21 | avx tbb   73621925 ns     70312500 ns            8

data | 22 |          246195775 ns    250000000 ns            8
data | 22 | avx      106694187 ns    107421875 ns            8
data | 22 |     tbb   75489013 ns     72265625 ns            8
data | 22 | avx tbb   73701788 ns     74218750 ns            8
mask | 22 |         1665207513 ns   1664062500 ns            8
mask | 22 | avx      101826187 ns    101562500 ns            8
mask | 22 |     tbb  258305188 ns    244140625 ns            8
mask | 22 | avx tbb   73683112 ns     74218750 ns            8

data | 23 |          237605550 ns    236328125 ns            8
data | 23 | avx      101102487 ns     99609375 ns            8
data | 23 |     tbb   75010825 ns     72265625 ns            8
data | 23 | avx tbb   73546987 ns     70312500 ns            8
mask | 23 |         1672498225 ns   1669921875 ns            8
mask | 23 | avx      107036413 ns    107421875 ns            8
mask | 23 |     tbb  261193400 ns    236328125 ns            8
mask | 23 | avx tbb   73594875 ns     70312500 ns            8

data | 24 |          229181775 ns    226562500 ns            8
data | 24 | avx      101233825 ns     99609375 ns            8
data | 24 |     tbb   74798300 ns     74218750 ns            8
data | 24 | avx tbb   73586863 ns     74218750 ns            8
mask | 24 |         1680031750 ns   1677734375 ns            8
mask | 24 | avx      102014837 ns    101562500 ns            8
mask | 24 |     tbb  258048087 ns    236328125 ns            8
mask | 24 | avx tbb   73613638 ns     74218750 ns            8

data | 25 |          221064650 ns    220703125 ns            8
data | 25 | avx      101054425 ns    101562500 ns            8
data | 25 |     tbb   74968263 ns     74218750 ns            8
data | 25 | avx tbb   73593275 ns     72265625 ns            8
mask | 25 |         1664663400 ns   1666015625 ns            8
mask | 25 | avx      107853500 ns    109375000 ns            8
mask | 25 |     tbb  258618925 ns    238281250 ns            8
mask | 25 | avx tbb   73546450 ns     72265625 ns            8

data | 26 |          214469475 ns    210937500 ns            8
data | 26 | avx      107176750 ns    107421875 ns            8
data | 26 |     tbb   75203375 ns     72265625 ns            8
data | 26 | avx tbb   73682175 ns     70312500 ns            8
mask | 26 |         1650941587 ns   1650390625 ns            8
mask | 26 | avx      102269300 ns    101562500 ns            8
mask | 26 |     tbb  261591013 ns    253906250 ns            8
mask | 26 | avx tbb   73638025 ns     68359375 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1240 ns        0.000 ns         4096
data |  1 | avx            712 ns        0.000 ns         4096
data |  1 |     tbb       5516 ns         7629 ns         4096
data |  1 | avx tbb        701 ns        0.000 ns         4096
mask |  1 |                755 ns        0.000 ns         4096
mask |  1 | avx            711 ns         3815 ns         4096
mask |  1 |     tbb       5435 ns         7629 ns         4096
mask |  1 | avx tbb        711 ns        0.000 ns         4096

data |  2 |              18590 ns        15259 ns         4096
data |  2 | avx           1068 ns        0.000 ns         4096
data |  2 |     tbb      10763 ns        11444 ns         4096
data |  2 | avx tbb       1123 ns        0.000 ns         4096
mask |  2 |               9565 ns        11444 ns         4096
mask |  2 | avx            960 ns         3815 ns         4096
mask |  2 |     tbb       7611 ns         7629 ns         4096
mask |  2 | avx tbb        975 ns        0.000 ns         4096

data |  3 |              12499 ns        15259 ns         4096
data |  3 | avx            971 ns         3815 ns         4096
data |  3 |     tbb       9826 ns        11444 ns         4096
data |  3 | avx tbb        960 ns         3815 ns         4096
mask |  3 |               9320 ns        11444 ns         4096
mask |  3 | avx            896 ns        0.000 ns         4096
mask |  3 |     tbb       7563 ns         3815 ns         4096
mask |  3 | avx tbb        946 ns        0.000 ns         4096

data |  4 |               9837 ns         7629 ns         4096
data |  4 | avx            967 ns         3815 ns         4096
data |  4 |     tbb       9468 ns        11444 ns         4096
data |  4 | avx tbb       1080 ns        0.000 ns         4096
mask |  4 |              10214 ns        11444 ns         4096
mask |  4 | avx            969 ns        0.000 ns         4096
mask |  4 |     tbb       7635 ns         3815 ns         4096
mask |  4 | avx tbb        974 ns         3815 ns         4096

data |  5 |               8315 ns        11444 ns         4096
data |  5 | avx           1032 ns        0.000 ns         4096
data |  5 |     tbb       9273 ns        11444 ns         4096
data |  5 | avx tbb       1073 ns        0.000 ns         4096
mask |  5 |               9900 ns         7629 ns         4096
mask |  5 | avx            978 ns        0.000 ns         4096
mask |  5 |     tbb       7614 ns         7629 ns         4096
mask |  5 | avx tbb        983 ns        0.000 ns         4096

data |  6 |               6807 ns         7629 ns         4096
data |  6 | avx           1012 ns        0.000 ns         4096
data |  6 |     tbb       9070 ns        11444 ns         4096
data |  6 | avx tbb       1061 ns         3815 ns         4096
mask |  6 |               9758 ns        11444 ns         4096
mask |  6 | avx            919 ns        0.000 ns         4096
mask |  6 |     tbb       7692 ns         7629 ns         4096
mask |  6 | avx tbb        953 ns         3815 ns         4096

data |  7 |               6182 ns         7629 ns         4096
data |  7 | avx           1080 ns        0.000 ns         4096
data |  7 |     tbb       8948 ns         7629 ns         4096
data |  7 | avx tbb       1101 ns        0.000 ns         4096
mask |  7 |               9704 ns        11444 ns         4096
mask |  7 | avx            947 ns        0.000 ns         4096
mask |  7 |     tbb       7599 ns         7629 ns         4096
mask |  7 | avx tbb        974 ns         3815 ns         4096

data |  8 |               5483 ns         3815 ns         4096
data |  8 | avx           1067 ns         3815 ns         4096
data |  8 |     tbb       8829 ns         7629 ns         4096
data |  8 | avx tbb       1054 ns        0.000 ns         4096
mask |  8 |               9764 ns         7629 ns         4096
mask |  8 | avx            922 ns        0.000 ns         4096
mask |  8 |     tbb       7655 ns         7629 ns         4096
mask |  8 | avx tbb       1011 ns         3815 ns         4096

data |  9 |               4998 ns         3815 ns         4096
data |  9 | avx           1079 ns        0.000 ns         4096
data |  9 |     tbb       8793 ns         7629 ns         4096
data |  9 | avx tbb       1104 ns        0.000 ns         4096
mask |  9 |              10200 ns        11444 ns         4096
mask |  9 | avx            972 ns        0.000 ns         4096
mask |  9 |     tbb       7657 ns        11444 ns         4096
mask |  9 | avx tbb       1003 ns         3815 ns         4096

data | 10 |               4572 ns         3815 ns         4096
data | 10 | avx           1078 ns        0.000 ns         4096
data | 10 |     tbb       8679 ns        11444 ns         4096
data | 10 | avx tbb       1019 ns        0.000 ns         4096
mask | 10 |               9655 ns        11444 ns         4096
mask | 10 | avx            972 ns        0.000 ns         4096
mask | 10 |     tbb       7618 ns         3815 ns         4096
mask | 10 | avx tbb       1046 ns        0.000 ns         4096

data | 11 |               4400 ns         7629 ns         4096
data | 11 | avx           1034 ns         3815 ns         4096
data | 11 |     tbb       8647 ns        11444 ns         4096
data | 11 | avx tbb       1035 ns        0.000 ns         4096
mask | 11 |              10211 ns        11444 ns         4096
mask | 11 | avx            962 ns        0.000 ns         4096
mask | 11 |     tbb       7703 ns         3815 ns         4096
mask | 11 | avx tbb        971 ns         3815 ns         4096

data | 12 |               3947 ns         3815 ns         4096
data | 12 | avx           1073 ns        0.000 ns         4096
data | 12 |     tbb       8672 ns         7629 ns         4096
data | 12 | avx tbb       1063 ns         3815 ns         4096
mask | 12 |               9704 ns        11444 ns         4096
mask | 12 | avx            903 ns         3815 ns         4096
mask | 12 |     tbb       7623 ns         7629 ns         4096
mask | 12 | avx tbb        934 ns        0.000 ns         4096

data | 13 |               3606 ns         7629 ns         4096
data | 13 | avx            992 ns        0.000 ns         4096
data | 13 |     tbb       8567 ns         7629 ns         4096
data | 13 | avx tbb        990 ns        0.000 ns         4096
mask | 13 |               9869 ns        11444 ns         4096
mask | 13 | avx            963 ns        0.000 ns         4096
mask | 13 |     tbb       7561 ns        11444 ns         4096
mask | 13 | avx tbb       1023 ns        0.000 ns         4096

data | 14 |               3661 ns         3815 ns         4096
data | 14 | avx           1133 ns        0.000 ns         4096
data | 14 |     tbb       8596 ns        11444 ns         4096
data | 14 | avx tbb       1096 ns         3815 ns         4096
mask | 14 |              10244 ns        11444 ns         4096
mask | 14 | avx            981 ns        0.000 ns         4096
mask | 14 |     tbb       7603 ns        11444 ns         4096
mask | 14 | avx tbb        911 ns        0.000 ns         4096

data | 15 |               3117 ns         3815 ns         4096
data | 15 | avx            940 ns        0.000 ns         4096
data | 15 |     tbb       8489 ns         7629 ns         4096
data | 15 | avx tbb        952 ns        0.000 ns         4096
mask | 15 |               9387 ns        11444 ns         4096
mask | 15 | avx            911 ns        0.000 ns         4096
mask | 15 |     tbb       7584 ns         7629 ns         4096
mask | 15 | avx tbb        974 ns        0.000 ns         4096

data | 16 |               3129 ns        0.000 ns         4096
data | 16 | avx            987 ns        0.000 ns         4096
data | 16 |     tbb       8443 ns         7629 ns         4096
data | 16 | avx tbb       1033 ns        0.000 ns         4096
mask | 16 |              10292 ns        11444 ns         4096
mask | 16 | avx            984 ns        0.000 ns         4096
mask | 16 |     tbb       7619 ns        11444 ns         4096
mask | 16 | avx tbb       1019 ns         3815 ns         4096

data | 17 |               3165 ns         3815 ns         4096
data | 17 | avx           1146 ns        0.000 ns         4096
data | 17 |     tbb       8520 ns         7629 ns         4096
data | 17 | avx tbb       1210 ns        0.000 ns         4096
mask | 17 |              10289 ns        11444 ns         4096
mask | 17 | avx            978 ns        0.000 ns         4096
mask | 17 |     tbb       7589 ns        11444 ns         4096
mask | 17 | avx tbb        987 ns        0.000 ns         4096

data | 18 |               2927 ns         3815 ns         4096
data | 18 | avx           1102 ns         3815 ns         4096
data | 18 |     tbb       8436 ns         3815 ns         4096
data | 18 | avx tbb       1079 ns        0.000 ns         4096
mask | 18 |               9767 ns         7629 ns         4096
mask | 18 | avx            915 ns        0.000 ns         4096
mask | 18 |     tbb       7586 ns        11444 ns         4096
mask | 18 | avx tbb        988 ns        0.000 ns         4096

data | 19 |               2814 ns         3815 ns         4096
data | 19 | avx           1109 ns         3815 ns         4096
data | 19 |     tbb       8398 ns         7629 ns         4096
data | 19 | avx tbb       1148 ns        0.000 ns         4096
mask | 19 |               9930 ns         7629 ns         4096
mask | 19 | avx            978 ns        0.000 ns         4096
mask | 19 |     tbb       7705 ns         7629 ns         4096
mask | 19 | avx tbb        971 ns        0.000 ns         4096

data | 20 |               2712 ns         3815 ns         4096
data | 20 | avx           1084 ns        0.000 ns         4096
data | 20 |     tbb       8432 ns        11444 ns         4096
data | 20 | avx tbb       1148 ns        0.000 ns         4096
mask | 20 |              10193 ns         7629 ns         4096
mask | 20 | avx            987 ns        0.000 ns         4096
mask | 20 |     tbb       7618 ns         7629 ns         4096
mask | 20 | avx tbb        972 ns        0.000 ns         4096

data | 21 |               2727 ns        0.000 ns         4096
data | 21 | avx           1115 ns         3815 ns         4096
data | 21 |     tbb       8332 ns         7629 ns         4096
data | 21 | avx tbb       1152 ns         3815 ns         4096
mask | 21 |              10217 ns        11444 ns         4096
mask | 21 | avx            983 ns         3815 ns         4096
mask | 21 |     tbb       7563 ns         7629 ns         4096
mask | 21 | avx tbb        976 ns        0.000 ns         4096

data | 22 |               2560 ns         3815 ns         4096
data | 22 | avx           1090 ns        0.000 ns         4096
data | 22 |     tbb       8356 ns         7629 ns         4096
data | 22 | avx tbb       1081 ns        0.000 ns         4096
mask | 22 |               9411 ns        11444 ns         4096
mask | 22 | avx            925 ns        0.000 ns         4096
mask | 22 |     tbb       7611 ns         7629 ns         4096
mask | 22 | avx tbb        982 ns         3815 ns         4096

data | 23 |               2452 ns         3815 ns         4096
data | 23 | avx           1077 ns         3815 ns         4096
data | 23 |     tbb       8321 ns         3815 ns         4096
data | 23 | avx tbb       1186 ns         3815 ns         4096
mask | 23 |              10175 ns         7629 ns         4096
mask | 23 | avx            985 ns        0.000 ns         4096
mask | 23 |     tbb       7556 ns         7629 ns         4096
mask | 23 | avx tbb        994 ns        0.000 ns         4096

data | 24 |               2422 ns         3815 ns         4096
data | 24 | avx           1106 ns         3815 ns         4096
data | 24 |     tbb       8230 ns        11444 ns         4096
data | 24 | avx tbb       1072 ns        0.000 ns         4096
mask | 24 |               9377 ns         7629 ns         4096
mask | 24 | avx            939 ns        0.000 ns         4096
mask | 24 |     tbb       7641 ns         3815 ns         4096
mask | 24 | avx tbb       1010 ns         3815 ns         4096

data | 25 |               2306 ns         3815 ns         4096
data | 25 | avx           1118 ns        0.000 ns         4096
data | 25 |     tbb       8349 ns         7629 ns         4096
data | 25 | avx tbb       1141 ns        0.000 ns         4096
mask | 25 |              10241 ns         7629 ns         4096
mask | 25 | avx            970 ns         3815 ns         4096
mask | 25 |     tbb       7564 ns        11444 ns         4096
mask | 25 | avx tbb       1006 ns         3815 ns         4096

data | 26 |               2307 ns         3815 ns         4096
data | 26 | avx           1103 ns         3815 ns         4096
data | 26 |     tbb       8245 ns         7629 ns         4096
data | 26 | avx tbb       1160 ns        0.000 ns         4096
mask | 26 |              10232 ns        11444 ns         4096
mask | 26 | avx            989 ns        0.000 ns         4096
mask | 26 |     tbb       7531 ns         3815 ns         4096
mask | 26 | avx tbb       1019 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1580 ns         3815 ns         4096
data |  1 | avx           1436 ns         3815 ns         4096
data |  1 |     tbb       6002 ns         3815 ns         4096
data |  1 | avx tbb       1390 ns        0.000 ns         4096
mask |  1 |               1559 ns        0.000 ns         4096
mask |  1 | avx           1424 ns        0.000 ns         4096
mask |  1 |     tbb       5927 ns         7629 ns         4096
mask |  1 | avx tbb       1382 ns         3815 ns         4096

data |  2 |              72506 ns        76294 ns         4096
data |  2 | avx           2302 ns         3815 ns         4096
data |  2 |     tbb      17080 ns        19073 ns         4096
data |  2 | avx tbb       2446 ns         3815 ns         4096
mask |  2 |              37751 ns        34332 ns         4096
mask |  2 | avx           2407 ns         3815 ns         4096
mask |  2 |     tbb      13070 ns        15259 ns         4096
mask |  2 | avx tbb       2467 ns         3815 ns         4096

data |  3 |              49270 ns        45776 ns         4096
data |  3 | avx           1947 ns         3815 ns         4096
data |  3 |     tbb      14545 ns        19073 ns         4096
data |  3 | avx tbb       2057 ns        0.000 ns         4096
mask |  3 |              37527 ns        38147 ns         4096
mask |  3 | avx           2134 ns         3815 ns         4096
mask |  3 |     tbb      13009 ns        15259 ns         4096
mask |  3 | avx tbb       2237 ns        0.000 ns         4096

data |  4 |              37251 ns        34332 ns         4096
data |  4 | avx           2061 ns         3815 ns         4096
data |  4 |     tbb      12987 ns        15259 ns         4096
data |  4 | avx tbb       2020 ns         3815 ns         4096
mask |  4 |              35889 ns        38147 ns         4096
mask |  4 | avx           2101 ns        0.000 ns         4096
mask |  4 |     tbb      13037 ns        15259 ns         4096
mask |  4 | avx tbb       2196 ns         3815 ns         4096

data |  5 |              30349 ns        26703 ns         4096
data |  5 | avx           2046 ns        0.000 ns         4096
data |  5 |     tbb      12204 ns        15259 ns         4096
data |  5 | avx tbb       2109 ns         3815 ns         4096
mask |  5 |              37146 ns        38147 ns         4096
mask |  5 | avx           2277 ns        0.000 ns         4096
mask |  5 |     tbb      13054 ns        15259 ns         4096
mask |  5 | avx tbb       2195 ns        0.000 ns         4096

data |  6 |              24405 ns        22888 ns         4096
data |  6 | avx           2032 ns        0.000 ns         4096
data |  6 |     tbb      11444 ns        11444 ns         4096
data |  6 | avx tbb       2141 ns        0.000 ns         4096
mask |  6 |              37116 ns        38147 ns         4096
mask |  6 | avx           2297 ns         3815 ns         4096
mask |  6 |     tbb      13037 ns        11444 ns         4096
mask |  6 | avx tbb       2287 ns        0.000 ns         4096

data |  7 |              21096 ns        22888 ns         4096
data |  7 | avx           2048 ns        0.000 ns         4096
data |  7 |     tbb      11364 ns        15259 ns         4096
data |  7 | avx tbb       2120 ns         3815 ns         4096
mask |  7 |              36897 ns        41962 ns         4096
mask |  7 | avx           2275 ns        0.000 ns         4096
mask |  7 |     tbb      13077 ns        11444 ns         4096
mask |  7 | avx tbb       2271 ns         3815 ns         4096

data |  8 |              19493 ns        19073 ns         4096
data |  8 | avx           2166 ns         3815 ns         4096
data |  8 |     tbb      10613 ns        11444 ns         4096
data |  8 | avx tbb       2038 ns         3815 ns         4096
mask |  8 |              35707 ns        38147 ns         4096
mask |  8 | avx           2138 ns        0.000 ns         4096
mask |  8 |     tbb      13054 ns         7629 ns         4096
mask |  8 | avx tbb       2218 ns        0.000 ns         4096

data |  9 |              16981 ns        11444 ns         4096
data |  9 | avx           2131 ns         3815 ns         4096
data |  9 |     tbb      10297 ns        15259 ns         4096
data |  9 | avx tbb       2116 ns        0.000 ns         4096
mask |  9 |              37279 ns        38147 ns         4096
mask |  9 | avx           2168 ns        0.000 ns         4096
mask |  9 |     tbb      13073 ns        15259 ns         4096
mask |  9 | avx tbb       2240 ns         3815 ns         4096

data | 10 |              15054 ns        11444 ns         4096
data | 10 | avx           2011 ns        0.000 ns         4096
data | 10 |     tbb      10116 ns        11444 ns         4096
data | 10 | avx tbb       2226 ns        0.000 ns         4096
mask | 10 |              37542 ns        34332 ns         4096
mask | 10 | avx           2150 ns        0.000 ns         4096
mask | 10 |     tbb      13243 ns         7629 ns         4096
mask | 10 | avx tbb       2241 ns        0.000 ns         4096

data | 11 |              14262 ns        11444 ns         4096
data | 11 | avx           2039 ns         3815 ns         4096
data | 11 |     tbb      10003 ns        11444 ns         4096
data | 11 | avx tbb       2034 ns         3815 ns         4096
mask | 11 |              35758 ns        38147 ns         4096
mask | 11 | avx           2111 ns         3815 ns         4096
mask | 11 |     tbb      13247 ns        15259 ns         4096
mask | 11 | avx tbb       2180 ns         3815 ns         4096

data | 12 |              13325 ns        11444 ns         4096
data | 12 | avx           2136 ns         3815 ns         4096
data | 12 |     tbb       9910 ns        11444 ns         4096
data | 12 | avx tbb       2229 ns         3815 ns         4096
mask | 12 |              37742 ns        41962 ns         4096
mask | 12 | avx           2094 ns         3815 ns         4096
mask | 12 |     tbb      13068 ns        15259 ns         4096
mask | 12 | avx tbb       2148 ns         3815 ns         4096

data | 13 |              11878 ns        11444 ns         4096
data | 13 | avx           2240 ns         3815 ns         4096
data | 13 |     tbb       9716 ns        11444 ns         4096
data | 13 | avx tbb       2282 ns         3815 ns         4096
mask | 13 |              35859 ns        34332 ns         4096
mask | 13 | avx           2115 ns         3815 ns         4096
mask | 13 |     tbb      13177 ns        15259 ns         4096
mask | 13 | avx tbb       2186 ns        0.000 ns         4096

data | 14 |              11417 ns         7629 ns         4096
data | 14 | avx           2144 ns        0.000 ns         4096
data | 14 |     tbb       9745 ns        11444 ns         4096
data | 14 | avx tbb       2118 ns         3815 ns         4096
mask | 14 |              37132 ns        34332 ns         4096
mask | 14 | avx           2123 ns         3815 ns         4096
mask | 14 |     tbb      13041 ns        15259 ns         4096
mask | 14 | avx tbb       2209 ns        0.000 ns         4096

data | 15 |              10457 ns        11444 ns         4096
data | 15 | avx           2056 ns         3815 ns         4096
data | 15 |     tbb       9472 ns        15259 ns         4096
data | 15 | avx tbb       2169 ns        0.000 ns         4096
mask | 15 |              37672 ns        41962 ns         4096
mask | 15 | avx           2101 ns        0.000 ns         4096
mask | 15 |     tbb      13061 ns        15259 ns         4096
mask | 15 | avx tbb       2185 ns        0.000 ns         4096

data | 16 |               9831 ns        11444 ns         4096
data | 16 | avx           2031 ns         3815 ns         4096
data | 16 |     tbb       9336 ns        11444 ns         4096
data | 16 | avx tbb       2151 ns        0.000 ns         4096
mask | 16 |              35879 ns        38147 ns         4096
mask | 16 | avx           2097 ns        0.000 ns         4096
mask | 16 |     tbb      13463 ns        15259 ns         4096
mask | 16 | avx tbb       2208 ns         3815 ns         4096

data | 17 |               9325 ns        11444 ns         4096
data | 17 | avx           2577 ns        0.000 ns         4096
data | 17 |     tbb       9294 ns        15259 ns         4096
data | 17 | avx tbb       2499 ns         3815 ns         4096
mask | 17 |              35641 ns        38147 ns         4096
mask | 17 | avx           2113 ns        0.000 ns         4096
mask | 17 |     tbb      13055 ns        15259 ns         4096
mask | 17 | avx tbb       2213 ns        0.000 ns         4096

data | 18 |               8852 ns         3815 ns         4096
data | 18 | avx           2416 ns        0.000 ns         4096
data | 18 |     tbb       9405 ns        11444 ns         4096
data | 18 | avx tbb       2344 ns         3815 ns         4096
mask | 18 |              35677 ns        38147 ns         4096
mask | 18 | avx           2126 ns         3815 ns         4096
mask | 18 |     tbb      13026 ns        11444 ns         4096
mask | 18 | avx tbb       2235 ns        0.000 ns         4096

data | 19 |               8790 ns        11444 ns         4096
data | 19 | avx           2580 ns         3815 ns         4096
data | 19 |     tbb       9192 ns        11444 ns         4096
data | 19 | avx tbb       2369 ns         3815 ns         4096
mask | 19 |              35643 ns        38147 ns         4096
mask | 19 | avx           2134 ns         3815 ns         4096
mask | 19 |     tbb      13039 ns        11444 ns         4096
mask | 19 | avx tbb       2192 ns         3815 ns         4096

data | 20 |               8013 ns        11444 ns         4096
data | 20 | avx           2413 ns         3815 ns         4096
data | 20 |     tbb       9160 ns        11444 ns         4096
data | 20 | avx tbb       2344 ns        0.000 ns         4096
mask | 20 |              35690 ns        38147 ns         4096
mask | 20 | avx           2122 ns         3815 ns         4096
mask | 20 |     tbb      13228 ns        15259 ns         4096
mask | 20 | avx tbb       2214 ns        0.000 ns         4096

data | 21 |               7640 ns         7629 ns         4096
data | 21 | avx           2429 ns         3815 ns         4096
data | 21 |     tbb       9020 ns         7629 ns         4096
data | 21 | avx tbb       2359 ns         3815 ns         4096
mask | 21 |              35633 ns        38147 ns         4096
mask | 21 | avx           2135 ns         3815 ns         4096
mask | 21 |     tbb      13320 ns        11444 ns         4096
mask | 21 | avx tbb       2208 ns        0.000 ns         4096

data | 22 |               7486 ns         3815 ns         4096
data | 22 | avx           2445 ns        0.000 ns         4096
data | 22 |     tbb       9138 ns        15259 ns         4096
data | 22 | avx tbb       2554 ns         3815 ns         4096
mask | 22 |              37692 ns        38147 ns         4096
mask | 22 | avx           2125 ns         3815 ns         4096
mask | 22 |     tbb      13039 ns        15259 ns         4096
mask | 22 | avx tbb       2236 ns         3815 ns         4096

data | 23 |               7160 ns         3815 ns         4096
data | 23 | avx           2424 ns         3815 ns         4096
data | 23 |     tbb       9061 ns        11444 ns         4096
data | 23 | avx tbb       2492 ns        0.000 ns         4096
mask | 23 |              37386 ns        38147 ns         4096
mask | 23 | avx           2117 ns        0.000 ns         4096
mask | 23 |     tbb      13004 ns        15259 ns         4096
mask | 23 | avx tbb       2192 ns        0.000 ns         4096

data | 24 |               6836 ns         7629 ns         4096
data | 24 | avx           2407 ns         3815 ns         4096
data | 24 |     tbb       8957 ns        15259 ns         4096
data | 24 | avx tbb       2405 ns        0.000 ns         4096
mask | 24 |              35916 ns        38147 ns         4096
mask | 24 | avx           2094 ns        0.000 ns         4096
mask | 24 |     tbb      13082 ns        15259 ns         4096
mask | 24 | avx tbb       2268 ns         3815 ns         4096

data | 25 |               6653 ns         7629 ns         4096
data | 25 | avx           2575 ns         7629 ns         4096
data | 25 |     tbb       9228 ns        11444 ns         4096
data | 25 | avx tbb       2442 ns         3815 ns         4096
mask | 25 |              35743 ns        38147 ns         4096
mask | 25 | avx           2141 ns         3815 ns         4096
mask | 25 |     tbb      13303 ns        15259 ns         4096
mask | 25 | avx tbb       2199 ns         3815 ns         4096

data | 26 |               6701 ns         7629 ns         4096
data | 26 | avx           2551 ns        0.000 ns         4096
data | 26 |     tbb       8843 ns        11444 ns         4096
data | 26 | avx tbb       2335 ns         3815 ns         4096
mask | 26 |              35624 ns        34332 ns         4096
mask | 26 | avx           2149 ns         3815 ns         4096
mask | 26 |     tbb      13051 ns        11444 ns         4096
mask | 26 | avx tbb       2185 ns        0.000 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               5404 ns        0.000 ns         2048
data |  1 | avx           5129 ns         7629 ns         2048
data |  1 |     tbb       9576 ns        15259 ns         2048
data |  1 | avx tbb       4683 ns        0.000 ns         2048
mask |  1 |               4897 ns         7629 ns         2048
mask |  1 | avx           4700 ns        15259 ns         2048
mask |  1 |     tbb       9477 ns        15259 ns         2048
mask |  1 | avx tbb       4946 ns        0.000 ns         2048

data |  2 |             285486 ns       274658 ns         2048
data |  2 | avx           8034 ns         7629 ns         2048
data |  2 |     tbb      40398 ns        38147 ns         2048
data |  2 | avx tbb       8455 ns        15259 ns         2048
mask |  2 |             144417 ns       152588 ns         2048
mask |  2 | avx           8526 ns        15259 ns         2048
mask |  2 |     tbb      35863 ns        45776 ns         2048
mask |  2 | avx tbb       8968 ns        15259 ns         2048

data |  3 |             191621 ns       190735 ns         2048
data |  3 | avx           6665 ns        15259 ns         2048
data |  3 |     tbb      31071 ns        15259 ns         2048
data |  3 | avx tbb       6827 ns        0.000 ns         2048
mask |  3 |             144447 ns       144958 ns         2048
mask |  3 | avx           7442 ns        15259 ns         2048
mask |  3 |     tbb      35896 ns        30518 ns         2048
mask |  3 | avx tbb       7880 ns        15259 ns         2048

data |  4 |             144481 ns       152588 ns         2048
data |  4 | avx           6559 ns        15259 ns         2048
data |  4 |     tbb      26425 ns        38147 ns         2048
data |  4 | avx tbb       6704 ns        0.000 ns         2048
mask |  4 |             144388 ns       144958 ns         2048
mask |  4 | avx           7423 ns        15259 ns         2048
mask |  4 |     tbb      35911 ns        38147 ns         2048
mask |  4 | avx tbb       7895 ns         7629 ns         2048

data |  5 |             116345 ns       106812 ns         2048
data |  5 | avx           6613 ns         7629 ns         2048
data |  5 |     tbb      23650 ns        30518 ns         2048
data |  5 | avx tbb       7037 ns         7629 ns         2048
mask |  5 |             141405 ns       152588 ns         2048
mask |  5 | avx           7484 ns         7629 ns         2048
mask |  5 |     tbb      36209 ns        38147 ns         2048
mask |  5 | avx tbb       7672 ns         7629 ns         2048

data |  6 |              97572 ns        91553 ns         2048
data |  6 | avx           6830 ns        0.000 ns         2048
data |  6 |     tbb      21775 ns        22888 ns         2048
data |  6 | avx tbb       7164 ns         7629 ns         2048
mask |  6 |             144609 ns       137329 ns         2048
mask |  6 | avx           7448 ns         7629 ns         2048
mask |  6 |     tbb      35912 ns        38147 ns         2048
mask |  6 | avx tbb       7869 ns         7629 ns         2048

data |  7 |              84290 ns        76294 ns         2048
data |  7 | avx           6585 ns        0.000 ns         2048
data |  7 |     tbb      20359 ns        15259 ns         2048
data |  7 | avx tbb       6842 ns        15259 ns         2048
mask |  7 |             144438 ns       144958 ns         2048
mask |  7 | avx           7431 ns         7629 ns         2048
mask |  7 |     tbb      36741 ns        45776 ns         2048
mask |  7 | avx tbb       7847 ns        0.000 ns         2048

data |  8 |              74373 ns        83923 ns         2048
data |  8 | avx           6612 ns        0.000 ns         2048
data |  8 |     tbb      19486 ns         7629 ns         2048
data |  8 | avx tbb       6712 ns         7629 ns         2048
mask |  8 |             142902 ns       129700 ns         2048
mask |  8 | avx           7446 ns        15259 ns         2048
mask |  8 |     tbb      36356 ns        38147 ns         2048
mask |  8 | avx tbb       8241 ns         7629 ns         2048

data |  9 |              66494 ns        61035 ns         2048
data |  9 | avx           6667 ns         7629 ns         2048
data |  9 |     tbb      18431 ns        15259 ns         2048
data |  9 | avx tbb       6981 ns         7629 ns         2048
mask |  9 |             145405 ns       152588 ns         2048
mask |  9 | avx           7581 ns        15259 ns         2048
mask |  9 |     tbb      35901 ns        38147 ns         2048
mask |  9 | avx tbb       7884 ns        0.000 ns         2048

data | 10 |              60201 ns        61035 ns         2048
data | 10 | avx           6614 ns         7629 ns         2048
data | 10 |     tbb      18130 ns         7629 ns         2048
data | 10 | avx tbb       6754 ns         7629 ns         2048
mask | 10 |             144619 ns       137329 ns         2048
mask | 10 | avx           7426 ns         7629 ns         2048
mask | 10 |     tbb      35914 ns        45776 ns         2048
mask | 10 | avx tbb       7768 ns         7629 ns         2048

data | 11 |              53928 ns        53406 ns         2048
data | 11 | avx           7089 ns         7629 ns         2048
data | 11 |     tbb      17256 ns        15259 ns         2048
data | 11 | avx tbb       7000 ns        0.000 ns         2048
mask | 11 |             141338 ns       152588 ns         2048
mask | 11 | avx           7331 ns        0.000 ns         2048
mask | 11 |     tbb      35990 ns        30518 ns         2048
mask | 11 | avx tbb       7688 ns        15259 ns         2048

data | 12 |              50868 ns        61035 ns         2048
data | 12 | avx           6579 ns        0.000 ns         2048
data | 12 |     tbb      16746 ns        15259 ns         2048
data | 12 | avx tbb       6864 ns         7629 ns         2048
mask | 12 |             144425 ns       144958 ns         2048
mask | 12 | avx           7396 ns        15259 ns         2048
mask | 12 |     tbb      36019 ns        38147 ns         2048
mask | 12 | avx tbb       7701 ns        15259 ns         2048

data | 13 |              45752 ns        45776 ns         2048
data | 13 | avx           7409 ns        15259 ns         2048
data | 13 |     tbb      16465 ns        30518 ns         2048
data | 13 | avx tbb       7295 ns         7629 ns         2048
mask | 13 |             144380 ns       129700 ns         2048
mask | 13 | avx           7266 ns        0.000 ns         2048
mask | 13 |     tbb      36554 ns        38147 ns         2048
mask | 13 | avx tbb       8047 ns        15259 ns         2048

data | 14 |              43730 ns        45776 ns         2048
data | 14 | avx           6768 ns         7629 ns         2048
data | 14 |     tbb      15964 ns        15259 ns         2048
data | 14 | avx tbb       6895 ns        15259 ns         2048
mask | 14 |             144474 ns       152588 ns         2048
mask | 14 | avx           7299 ns        0.000 ns         2048
mask | 14 |     tbb      35853 ns        22888 ns         2048
mask | 14 | avx tbb       7805 ns        0.000 ns         2048

data | 15 |              38979 ns        22888 ns         2048
data | 15 | avx           6863 ns         7629 ns         2048
data | 15 |     tbb      15889 ns        30518 ns         2048
data | 15 | avx tbb       7543 ns         7629 ns         2048
mask | 15 |             144999 ns       144958 ns         2048
mask | 15 | avx           7374 ns        15259 ns         2048
mask | 15 |     tbb      36001 ns        38147 ns         2048
mask | 15 | avx tbb       8038 ns        15259 ns         2048

data | 16 |              37379 ns        30518 ns         2048
data | 16 | avx           7547 ns         7629 ns         2048
data | 16 |     tbb      15378 ns        15259 ns         2048
data | 16 | avx tbb       7229 ns        0.000 ns         2048
mask | 16 |             144737 ns       152588 ns         2048
mask | 16 | avx           7392 ns        15259 ns         2048
mask | 16 |     tbb      36673 ns        30518 ns         2048
mask | 16 | avx tbb       7943 ns        15259 ns         2048

data | 17 |              35784 ns        38147 ns         2048
data | 17 | avx           9010 ns        0.000 ns         2048
data | 17 |     tbb      15190 ns        15259 ns         2048
data | 17 | avx tbb       8109 ns         7629 ns         2048
mask | 17 |             144647 ns       129700 ns         2048
mask | 17 | avx           7432 ns         7629 ns         2048
mask | 17 |     tbb      35946 ns        45776 ns         2048
mask | 17 | avx tbb       7877 ns         7629 ns         2048

data | 18 |              34571 ns        38147 ns         2048
data | 18 | avx           8862 ns         7629 ns         2048
data | 18 |     tbb      15334 ns         7629 ns         2048
data | 18 | avx tbb       8101 ns         7629 ns         2048
mask | 18 |             145553 ns       144958 ns         2048
mask | 18 | avx           7596 ns        15259 ns         2048
mask | 18 |     tbb      36791 ns        38147 ns         2048
mask | 18 | avx tbb       8031 ns        0.000 ns         2048

data | 19 |              32738 ns        30518 ns         2048
data | 19 | avx           8923 ns        15259 ns         2048
data | 19 |     tbb      15652 ns        30518 ns         2048
data | 19 | avx tbb       8094 ns        0.000 ns         2048
mask | 19 |             144550 ns       137329 ns         2048
mask | 19 | avx           7442 ns         7629 ns         2048
mask | 19 |     tbb      35943 ns        30518 ns         2048
mask | 19 | avx tbb       7824 ns         7629 ns         2048

data | 20 |              29797 ns        38147 ns         2048
data | 20 | avx           8894 ns        15259 ns         2048
data | 20 |     tbb      14805 ns        22888 ns         2048
data | 20 | avx tbb       8004 ns         7629 ns         2048
mask | 20 |             144719 ns       152588 ns         2048
mask | 20 | avx           7457 ns         7629 ns         2048
mask | 20 |     tbb      35901 ns        38147 ns         2048
mask | 20 | avx tbb       7895 ns         7629 ns         2048

data | 21 |              28734 ns        30518 ns         2048
data | 21 | avx           8892 ns         7629 ns         2048
data | 21 |     tbb      14568 ns        30518 ns         2048
data | 21 | avx tbb       8128 ns        22888 ns         2048
mask | 21 |             141976 ns       144958 ns         2048
mask | 21 | avx           7477 ns        15259 ns         2048
mask | 21 |     tbb      36716 ns        53406 ns         2048
mask | 21 | avx tbb       8216 ns         7629 ns         2048

data | 22 |              27276 ns        38147 ns         2048
data | 22 | avx           8347 ns         7629 ns         2048
data | 22 |     tbb      14365 ns        15259 ns         2048
data | 22 | avx tbb       7685 ns         7629 ns         2048
mask | 22 |             141588 ns       144958 ns         2048
mask | 22 | avx           7442 ns        0.000 ns         2048
mask | 22 |     tbb      35922 ns        45776 ns         2048
mask | 22 | avx tbb       7719 ns        15259 ns         2048

data | 23 |              26516 ns        30518 ns         2048
data | 23 | avx           8842 ns        0.000 ns         2048
data | 23 |     tbb      14207 ns        22888 ns         2048
data | 23 | avx tbb       7983 ns        15259 ns         2048
mask | 23 |             141464 ns       144958 ns         2048
mask | 23 | avx           7438 ns        15259 ns         2048
mask | 23 |     tbb      35931 ns        22888 ns         2048
mask | 23 | avx tbb       7804 ns         7629 ns         2048

data | 24 |              25528 ns        15259 ns         2048
data | 24 | avx           8837 ns         7629 ns         2048
data | 24 |     tbb      14166 ns        15259 ns         2048
data | 24 | avx tbb       8045 ns         7629 ns         2048
mask | 24 |             145170 ns       152588 ns         2048
mask | 24 | avx           7370 ns        0.000 ns         2048
mask | 24 |     tbb      36292 ns        22888 ns         2048
mask | 24 | avx tbb       7885 ns        15259 ns         2048

data | 25 |              24515 ns        22888 ns         2048
data | 25 | avx           8830 ns         7629 ns         2048
data | 25 |     tbb      13901 ns        15259 ns         2048
data | 25 | avx tbb       8106 ns         7629 ns         2048
mask | 25 |             144583 ns       137329 ns         2048
mask | 25 | avx           7565 ns        0.000 ns         2048
mask | 25 |     tbb      35862 ns        30518 ns         2048
mask | 25 | avx tbb       7935 ns         7629 ns         2048

data | 26 |              23758 ns        22888 ns         2048
data | 26 | avx           8997 ns        15259 ns         2048
data | 26 |     tbb      14812 ns        15259 ns         2048
data | 26 | avx tbb       7909 ns        15259 ns         2048
mask | 26 |             144424 ns       137329 ns         2048
mask | 26 | avx           7446 ns         7629 ns         2048
mask | 26 |     tbb      35975 ns        45776 ns         2048
mask | 26 | avx tbb       7860 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              17094 ns        15259 ns         1024
data |  1 | avx          19019 ns        30518 ns         1024
data |  1 |     tbb      17135 ns        15259 ns         1024
data |  1 | avx tbb      16352 ns        0.000 ns         1024
mask |  1 |              20642 ns        30518 ns         1024
mask |  1 | avx          18996 ns        30518 ns         1024
mask |  1 |     tbb      17392 ns        0.000 ns         1024
mask |  1 | avx tbb      16311 ns        15259 ns         1024

data |  2 |            1128921 ns      1098633 ns         1024
data |  2 | avx          28975 ns        15259 ns         1024
data |  2 |     tbb     122538 ns       122070 ns         1024
data |  2 | avx tbb      17473 ns        15259 ns         1024
mask |  2 |             574206 ns       564575 ns         1024
mask |  2 | avx          31542 ns        15259 ns         1024
mask |  2 |     tbb     117381 ns       106812 ns         1024
mask |  2 | avx tbb      17290 ns        0.000 ns         1024

data |  3 |             755202 ns       732422 ns         1024
data |  3 | avx          24161 ns        45776 ns         1024
data |  3 |     tbb      86093 ns        61035 ns         1024
data |  3 | avx tbb      17230 ns        30518 ns         1024
mask |  3 |             577549 ns       534058 ns         1024
mask |  3 | avx          27619 ns        45776 ns         1024
mask |  3 |     tbb     117785 ns       122070 ns         1024
mask |  3 | avx tbb      16868 ns        30518 ns         1024

data |  4 |             565855 ns       564575 ns         1024
data |  4 | avx          23782 ns        45776 ns         1024
data |  4 |     tbb      70700 ns        61035 ns         1024
data |  4 | avx tbb      17108 ns        30518 ns         1024
mask |  4 |             571058 ns       564575 ns         1024
mask |  4 | avx          27832 ns        30518 ns         1024
mask |  4 |     tbb     117495 ns       106812 ns         1024
mask |  4 | avx tbb      17212 ns        61035 ns         1024

data |  5 |             453785 ns       457764 ns         1024
data |  5 | avx          23330 ns        15259 ns         1024
data |  5 |     tbb      58367 ns        61035 ns         1024
data |  5 | avx tbb      17755 ns        30518 ns         1024
mask |  5 |             571924 ns       534058 ns         1024
mask |  5 | avx          27326 ns        30518 ns         1024
mask |  5 |     tbb     117888 ns       106812 ns         1024
mask |  5 | avx tbb      16944 ns        15259 ns         1024

data |  6 |             379860 ns       396729 ns         1024
data |  6 | avx          23646 ns        30518 ns         1024
data |  6 |     tbb      49706 ns       106812 ns         1024
data |  6 | avx tbb      17182 ns        15259 ns         1024
mask |  6 |             582062 ns       534058 ns         1024
mask |  6 | avx          27170 ns        30518 ns         1024
mask |  6 |     tbb     117387 ns        91553 ns         1024
mask |  6 | avx tbb      16849 ns        45776 ns         1024

data |  7 |             325040 ns       350952 ns         1024
data |  7 | avx          23223 ns        30518 ns         1024
data |  7 |     tbb      44558 ns        61035 ns         1024
data |  7 | avx tbb      17164 ns        45776 ns         1024
mask |  7 |             565990 ns       564575 ns         1024
mask |  7 | avx          27367 ns        15259 ns         1024
mask |  7 |     tbb     117573 ns       122070 ns         1024
mask |  7 | avx tbb      17227 ns        15259 ns         1024

data |  8 |             287609 ns       289917 ns         1024
data |  8 | avx          23127 ns        15259 ns         1024
data |  8 |     tbb      40898 ns        30518 ns         1024
data |  8 | avx tbb      16927 ns        45776 ns         1024
mask |  8 |             571883 ns       564575 ns         1024
mask |  8 | avx          27481 ns        30518 ns         1024
mask |  8 |     tbb     117589 ns       137329 ns         1024
mask |  8 | avx tbb      16971 ns        45776 ns         1024

data |  9 |             255522 ns       213623 ns         1024
data |  9 | avx          23647 ns        45776 ns         1024
data |  9 |     tbb      37653 ns        30518 ns         1024
data |  9 | avx tbb      17198 ns        30518 ns         1024
mask |  9 |             582908 ns       579834 ns         1024
mask |  9 | avx          27301 ns        45776 ns         1024
mask |  9 |     tbb     118359 ns       106812 ns         1024
mask |  9 | avx tbb      18080 ns        15259 ns         1024

data | 10 |             229257 ns       259399 ns         1024
data | 10 | avx          23362 ns        30518 ns         1024
data | 10 |     tbb      35969 ns        0.000 ns         1024
data | 10 | avx tbb      17157 ns        15259 ns         1024
mask | 10 |             567279 ns       595093 ns         1024
mask | 10 | avx          27340 ns        15259 ns         1024
mask | 10 |     tbb     117591 ns       122070 ns         1024
mask | 10 | avx tbb      17009 ns        0.000 ns         1024

data | 11 |             210861 ns       167847 ns         1024
data | 11 | avx          23814 ns        15259 ns         1024
data | 11 |     tbb      33607 ns        45776 ns         1024
data | 11 | avx tbb      17262 ns        15259 ns         1024
mask | 11 |             570069 ns       564575 ns         1024
mask | 11 | avx          27232 ns        0.000 ns         1024
mask | 11 |     tbb     116362 ns       137329 ns         1024
mask | 11 | avx tbb      17692 ns        15259 ns         1024

data | 12 |             192499 ns       152588 ns         1024
data | 12 | avx          23517 ns        15259 ns         1024
data | 12 |     tbb      31695 ns        30518 ns         1024
data | 12 | avx tbb      17639 ns        30518 ns         1024
mask | 12 |             582687 ns       579834 ns         1024
mask | 12 | avx          27148 ns        15259 ns         1024
mask | 12 |     tbb     116547 ns       106812 ns         1024
mask | 12 | avx tbb      17935 ns        30518 ns         1024

data | 13 |             176083 ns       198364 ns         1024
data | 13 | avx          25473 ns        30518 ns         1024
data | 13 |     tbb      30269 ns        30518 ns         1024
data | 13 | avx tbb      16808 ns        30518 ns         1024
mask | 13 |             567424 ns       549316 ns         1024
mask | 13 | avx          27344 ns        30518 ns         1024
mask | 13 |     tbb     116969 ns        91553 ns         1024
mask | 13 | avx tbb      16724 ns        0.000 ns         1024

data | 14 |             166701 ns       152588 ns         1024
data | 14 | avx          23591 ns        0.000 ns         1024
data | 14 |     tbb      30054 ns        30518 ns         1024
data | 14 | avx tbb      17968 ns        15259 ns         1024
mask | 14 |             566334 ns       564575 ns         1024
mask | 14 | avx          27164 ns        30518 ns         1024
mask | 14 |     tbb     118120 ns       152588 ns         1024
mask | 14 | avx tbb      17001 ns        45776 ns         1024

data | 15 |             154527 ns       167847 ns         1024
data | 15 | avx          25824 ns        0.000 ns         1024
data | 15 |     tbb      28676 ns        45776 ns         1024
data | 15 | avx tbb      17631 ns        45776 ns         1024
mask | 15 |             580529 ns       595093 ns         1024
mask | 15 | avx          27507 ns        45776 ns         1024
mask | 15 |     tbb     116422 ns       137329 ns         1024
mask | 15 | avx tbb      17511 ns        0.000 ns         1024

data | 16 |             145550 ns       152588 ns         1024
data | 16 | avx          25613 ns        15259 ns         1024
data | 16 |     tbb      29881 ns        61035 ns         1024
data | 16 | avx tbb      17402 ns        15259 ns         1024
mask | 16 |             569928 ns       595093 ns         1024
mask | 16 | avx          27236 ns        0.000 ns         1024
mask | 16 |     tbb     118090 ns       122070 ns         1024
mask | 16 | avx tbb      17093 ns        30518 ns         1024

data | 17 |             137478 ns       137329 ns         1024
data | 17 | avx          32121 ns        30518 ns         1024
data | 17 |     tbb      26773 ns        30518 ns         1024
data | 17 | avx tbb      17335 ns        15259 ns         1024
mask | 17 |             565206 ns       579834 ns         1024
mask | 17 | avx          27345 ns        61035 ns         1024
mask | 17 |     tbb     117984 ns       137329 ns         1024
mask | 17 | avx tbb      17274 ns        15259 ns         1024

data | 18 |             129607 ns       106812 ns         1024
data | 18 | avx          31674 ns        15259 ns         1024
data | 18 |     tbb      25683 ns        30518 ns         1024
data | 18 | avx tbb      17671 ns        0.000 ns         1024
mask | 18 |             578325 ns       595093 ns         1024
mask | 18 | avx          27868 ns        30518 ns         1024
mask | 18 |     tbb     116934 ns       137329 ns         1024
mask | 18 | avx tbb      17180 ns        0.000 ns         1024

data | 19 |             123827 ns       122070 ns         1024
data | 19 | avx          31033 ns        30518 ns         1024
data | 19 |     tbb      25133 ns        45776 ns         1024
data | 19 | avx tbb      17427 ns        0.000 ns         1024
mask | 19 |             573680 ns       564575 ns         1024
mask | 19 | avx          27540 ns        45776 ns         1024
mask | 19 |     tbb     118136 ns        76294 ns         1024
mask | 19 | avx tbb      17207 ns        15259 ns         1024

data | 20 |             118567 ns       152588 ns         1024
data | 20 | avx          31004 ns        15259 ns         1024
data | 20 |     tbb      25264 ns        30518 ns         1024
data | 20 | avx tbb      17627 ns        0.000 ns         1024
mask | 20 |             568547 ns       595093 ns         1024
mask | 20 | avx          27754 ns        15259 ns         1024
mask | 20 |     tbb     116821 ns       106812 ns         1024
mask | 20 | avx tbb      17196 ns        15259 ns         1024

data | 21 |             112173 ns       122070 ns         1024
data | 21 | avx          31447 ns        15259 ns         1024
data | 21 |     tbb      24133 ns        30518 ns         1024
data | 21 | avx tbb      17437 ns        45776 ns         1024
mask | 21 |             569538 ns       579834 ns         1024
mask | 21 | avx          27626 ns        45776 ns         1024
mask | 21 |     tbb     116785 ns       106812 ns         1024
mask | 21 | avx tbb      17106 ns        15259 ns         1024

data | 22 |             107717 ns       106812 ns         1024
data | 22 | avx          31319 ns        15259 ns         1024
data | 22 |     tbb      23788 ns        15259 ns         1024
data | 22 | avx tbb      17390 ns        30518 ns         1024
mask | 22 |             572836 ns       564575 ns         1024
mask | 22 | avx          27888 ns        30518 ns         1024
mask | 22 |     tbb     118029 ns       106812 ns         1024
mask | 22 | avx tbb      17057 ns        15259 ns         1024

data | 23 |             102886 ns       106812 ns         1024
data | 23 | avx          30878 ns        15259 ns         1024
data | 23 |     tbb      23279 ns        15259 ns         1024
data | 23 | avx tbb      17937 ns        15259 ns         1024
mask | 23 |             571329 ns       595093 ns         1024
mask | 23 | avx          27455 ns        30518 ns         1024
mask | 23 |     tbb     116725 ns       122070 ns         1024
mask | 23 | avx tbb      17017 ns        15259 ns         1024

data | 24 |              99322 ns       137329 ns         1024
data | 24 | avx          30911 ns        30518 ns         1024
data | 24 |     tbb      22883 ns        0.000 ns         1024
data | 24 | avx tbb      17777 ns        15259 ns         1024
mask | 24 |             581051 ns       595093 ns         1024
mask | 24 | avx          27862 ns        30518 ns         1024
mask | 24 |     tbb     117952 ns       122070 ns         1024
mask | 24 | avx tbb      17070 ns        15259 ns         1024

data | 25 |              95589 ns       122070 ns         1024
data | 25 | avx          31408 ns        45776 ns         1024
data | 25 |     tbb      22904 ns        45776 ns         1024
data | 25 | avx tbb      17508 ns        30518 ns         1024
mask | 25 |             570580 ns       595093 ns         1024
mask | 25 | avx          27677 ns        30518 ns         1024
mask | 25 |     tbb     116955 ns       152588 ns         1024
mask | 25 | avx tbb      17089 ns        15259 ns         1024

data | 26 |              92214 ns        91553 ns         1024
data | 26 | avx          30863 ns        30518 ns         1024
data | 26 |     tbb      22298 ns        15259 ns         1024
data | 26 | avx tbb      17683 ns        0.000 ns         1024
mask | 26 |             574569 ns       579834 ns         1024
mask | 26 | avx          27571 ns        15259 ns         1024
mask | 26 |     tbb     117330 ns       122070 ns         1024
mask | 26 | avx tbb      17294 ns        45776 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             168038 ns       213623 ns          512
data |  1 | avx         165388 ns       183105 ns          512
data |  1 |     tbb     172073 ns       183105 ns          512
data |  1 | avx tbb     154456 ns        91553 ns          512
mask |  1 |             166800 ns       244141 ns          512
mask |  1 | avx         164303 ns        30518 ns          512
mask |  1 |     tbb     173636 ns       122070 ns          512
mask |  1 | avx tbb     156743 ns       152588 ns          512

data |  2 |            4506293 ns      4333496 ns          512
data |  2 | avx         208330 ns       335693 ns          512
data |  2 |     tbb     492295 ns       488281 ns          512
data |  2 | avx tbb     159505 ns        91553 ns          512
mask |  2 |            2271147 ns      2319336 ns          512
mask |  2 | avx         210071 ns       152588 ns          512
mask |  2 |     tbb     478206 ns       488281 ns          512
mask |  2 | avx tbb     158629 ns       152588 ns          512

data |  3 |            3001639 ns      2899170 ns          512
data |  3 | avx         190261 ns       183105 ns          512
data |  3 |     tbb     352546 ns       366211 ns          512
data |  3 | avx tbb     157687 ns       152588 ns          512
mask |  3 |            2271063 ns      2197266 ns          512
mask |  3 | avx         195057 ns       183105 ns          512
mask |  3 |     tbb     479514 ns       488281 ns          512
mask |  3 | avx tbb     156566 ns       152588 ns          512

data |  4 |            2256811 ns      2349854 ns          512
data |  4 | avx         186004 ns       244141 ns          512
data |  4 |     tbb     281101 ns       335693 ns          512
data |  4 | avx tbb     159600 ns       122070 ns          512
mask |  4 |            2267631 ns      2258301 ns          512
mask |  4 | avx         196056 ns       183105 ns          512
mask |  4 |     tbb     479678 ns       366211 ns          512
mask |  4 | avx tbb     156594 ns        91553 ns          512

data |  5 |            1814091 ns      1831055 ns          512
data |  5 | avx         190196 ns       152588 ns          512
data |  5 |     tbb     241629 ns       213623 ns          512
data |  5 | avx tbb     157124 ns       183105 ns          512
mask |  5 |            2284084 ns      2197266 ns          512
mask |  5 | avx         194554 ns       213623 ns          512
mask |  5 |     tbb     480539 ns       427246 ns          512
mask |  5 | avx tbb     157218 ns       152588 ns          512

data |  6 |            1517638 ns      1434326 ns          512
data |  6 | avx         188631 ns       274658 ns          512
data |  6 |     tbb     224892 ns       244141 ns          512
data |  6 | avx tbb     159339 ns        61035 ns          512
mask |  6 |            2275471 ns      2227783 ns          512
mask |  6 | avx         195079 ns       274658 ns          512
mask |  6 |     tbb     477612 ns       579834 ns          512
mask |  6 | avx tbb     157309 ns       122070 ns          512

data |  7 |            1313187 ns      1281738 ns          512
data |  7 | avx         187437 ns       183105 ns          512
data |  7 |     tbb     212653 ns       244141 ns          512
data |  7 | avx tbb     158090 ns       183105 ns          512
mask |  7 |            2268266 ns      2288818 ns          512
mask |  7 | avx         197244 ns       244141 ns          512
mask |  7 |     tbb     478427 ns       427246 ns          512
mask |  7 | avx tbb     158209 ns       183105 ns          512

data |  8 |            1150384 ns      1159668 ns          512
data |  8 | avx         186738 ns       183105 ns          512
data |  8 |     tbb     204921 ns       305176 ns          512
data |  8 | avx tbb     157223 ns       183105 ns          512
mask |  8 |            2270080 ns      2319336 ns          512
mask |  8 | avx         199661 ns        91553 ns          512
mask |  8 |     tbb     478146 ns       457764 ns          512
mask |  8 | avx tbb     159088 ns       122070 ns          512

data |  9 |            1019428 ns       915527 ns          512
data |  9 | avx         188422 ns       183105 ns          512
data |  9 |     tbb     204622 ns       183105 ns          512
data |  9 | avx tbb     160166 ns       122070 ns          512
mask |  9 |            2274808 ns      2227783 ns          512
mask |  9 | avx         194905 ns       244141 ns          512
mask |  9 |     tbb     479056 ns       427246 ns          512
mask |  9 | avx tbb     157930 ns       152588 ns          512

data | 10 |             924029 ns      1007080 ns          512
data | 10 | avx         186683 ns       213623 ns          512
data | 10 |     tbb     200948 ns        91553 ns          512
data | 10 | avx tbb     158049 ns       152588 ns          512
mask | 10 |            2269927 ns      2288818 ns          512
mask | 10 | avx         195634 ns       213623 ns          512
mask | 10 |     tbb     480275 ns       457764 ns          512
mask | 10 | avx tbb     157671 ns       183105 ns          512

data | 11 |             845879 ns       854492 ns          512
data | 11 | avx         187531 ns       305176 ns          512
data | 11 |     tbb     198012 ns       244141 ns          512
data | 11 | avx tbb     156716 ns       152588 ns          512
mask | 11 |            2270179 ns      2288818 ns          512
mask | 11 | avx         195113 ns       213623 ns          512
mask | 11 |     tbb     477738 ns       427246 ns          512
mask | 11 | avx tbb     158073 ns       152588 ns          512

data | 12 |             775205 ns       762939 ns          512
data | 12 | avx         188495 ns        91553 ns          512
data | 12 |     tbb     200160 ns        61035 ns          512
data | 12 | avx tbb     158066 ns       183105 ns          512
mask | 12 |            2269580 ns      2197266 ns          512
mask | 12 | avx         195283 ns       183105 ns          512
mask | 12 |     tbb     478562 ns       396729 ns          512
mask | 12 | avx tbb     158389 ns       183105 ns          512

data | 13 |             722325 ns       732422 ns          512
data | 13 | avx         190832 ns       122070 ns          512
data | 13 |     tbb     198968 ns       244141 ns          512
data | 13 | avx tbb     157581 ns       122070 ns          512
mask | 13 |            2276771 ns      2258301 ns          512
mask | 13 | avx         196663 ns       183105 ns          512
mask | 13 |     tbb     478426 ns       427246 ns          512
mask | 13 | avx tbb     157301 ns       274658 ns          512

data | 14 |             675228 ns       793457 ns          512
data | 14 | avx         186248 ns       213623 ns          512
data | 14 |     tbb     203229 ns       213623 ns          512
data | 14 | avx tbb     158618 ns       213623 ns          512
mask | 14 |            2266284 ns      2258301 ns          512
mask | 14 | avx         197846 ns       183105 ns          512
mask | 14 |     tbb     478086 ns       427246 ns          512
mask | 14 | avx tbb     158320 ns       213623 ns          512

data | 15 |             630071 ns       762939 ns          512
data | 15 | avx         188627 ns       183105 ns          512
data | 15 |     tbb     194831 ns       305176 ns          512
data | 15 | avx tbb     158136 ns       152588 ns          512
mask | 15 |            2268212 ns      2227783 ns          512
mask | 15 | avx         194644 ns       213623 ns          512
mask | 15 |     tbb     477123 ns       427246 ns          512
mask | 15 | avx tbb     156416 ns       183105 ns          512

data | 16 |             603237 ns       518799 ns          512
data | 16 | avx         188296 ns       152588 ns          512
data | 16 |     tbb     203001 ns       183105 ns          512
data | 16 | avx tbb     157738 ns       152588 ns          512
mask | 16 |            2266863 ns      2258301 ns          512
mask | 16 | avx         195095 ns       122070 ns          512
mask | 16 |     tbb     477912 ns       488281 ns          512
mask | 16 | avx tbb     157708 ns       122070 ns          512

data | 17 |             563679 ns       640869 ns          512
data | 17 | avx         211203 ns       183105 ns          512
data | 17 |     tbb     196554 ns       152588 ns          512
data | 17 | avx tbb     158231 ns       244141 ns          512
mask | 17 |            2269011 ns      2258301 ns          512
mask | 17 | avx         198273 ns       244141 ns          512
mask | 17 |     tbb     479495 ns       518799 ns          512
mask | 17 | avx tbb     158295 ns       152588 ns          512

data | 18 |             531784 ns       610352 ns          512
data | 18 | avx         205093 ns        91553 ns          512
data | 18 |     tbb     190413 ns       213623 ns          512
data | 18 | avx tbb     159428 ns        91553 ns          512
mask | 18 |            2269703 ns      2288818 ns          512
mask | 18 | avx         195748 ns       305176 ns          512
mask | 18 |     tbb     481805 ns       518799 ns          512
mask | 18 | avx tbb     158534 ns       183105 ns          512

data | 19 |             502837 ns       457764 ns          512
data | 19 | avx         209518 ns       183105 ns          512
data | 19 |     tbb     196839 ns       213623 ns          512
data | 19 | avx tbb     159603 ns       183105 ns          512
mask | 19 |            2264558 ns      2288818 ns          512
mask | 19 | avx         197077 ns       213623 ns          512
mask | 19 |     tbb     479343 ns       366211 ns          512
mask | 19 | avx tbb     158654 ns        91553 ns          512

data | 20 |             479576 ns       488281 ns          512
data | 20 | avx         218158 ns       213623 ns          512
data | 20 |     tbb     192494 ns       122070 ns          512
data | 20 | avx tbb     159165 ns       183105 ns          512
mask | 20 |            2264202 ns      2288818 ns          512
mask | 20 | avx         197731 ns       213623 ns          512
mask | 20 |     tbb     480002 ns       396729 ns          512
mask | 20 | avx tbb     158908 ns       183105 ns          512

data | 21 |             462084 ns       457764 ns          512
data | 21 | avx         207105 ns        91553 ns          512
data | 21 |     tbb     195079 ns       152588 ns          512
data | 21 | avx tbb     160311 ns       152588 ns          512
mask | 21 |            2270730 ns      1953125 ns          512
mask | 21 | avx         196260 ns       305176 ns          512
mask | 21 |     tbb     485115 ns       518799 ns          512
mask | 21 | avx tbb     158119 ns       122070 ns          512

data | 22 |             443758 ns       427246 ns          512
data | 22 | avx         207629 ns       122070 ns          512
data | 22 |     tbb     192185 ns       244141 ns          512
data | 22 | avx tbb     158445 ns       183105 ns          512
mask | 22 |            2265722 ns      2227783 ns          512
mask | 22 | avx         198927 ns       244141 ns          512
mask | 22 |     tbb     479257 ns       427246 ns          512
mask | 22 | avx tbb     158317 ns       213623 ns          512

data | 23 |             428544 ns       488281 ns          512
data | 23 | avx         208834 ns       183105 ns          512
data | 23 |     tbb     193725 ns       122070 ns          512
data | 23 | avx tbb     158857 ns        91553 ns          512
mask | 23 |            2267848 ns      2197266 ns          512
mask | 23 | avx         196729 ns       183105 ns          512
mask | 23 |     tbb     478265 ns       427246 ns          512
mask | 23 | avx tbb     157169 ns        91553 ns          512

data | 24 |             416573 ns       335693 ns          512
data | 24 | avx         210226 ns       213623 ns          512
data | 24 |     tbb     191878 ns       213623 ns          512
data | 24 | avx tbb     161741 ns       152588 ns          512
mask | 24 |            2262002 ns      2258301 ns          512
mask | 24 | avx         196432 ns        91553 ns          512
mask | 24 |     tbb     479317 ns       549316 ns          512
mask | 24 | avx tbb     157837 ns       122070 ns          512

data | 25 |             415261 ns       457764 ns          512
data | 25 | avx         204889 ns       213623 ns          512
data | 25 |     tbb     199365 ns       183105 ns          512
data | 25 | avx tbb     159601 ns       213623 ns          512
mask | 25 |            2265088 ns      2349854 ns          512
mask | 25 | avx         198550 ns       183105 ns          512
mask | 25 |     tbb     476536 ns       549316 ns          512
mask | 25 | avx tbb     158241 ns       122070 ns          512

data | 26 |             400553 ns       427246 ns          512
data | 26 | avx         208091 ns       122070 ns          512
data | 26 |     tbb     195328 ns       183105 ns          512
data | 26 | avx tbb     157437 ns       305176 ns          512
mask | 26 |            2264759 ns      2349854 ns          512
mask | 26 | avx         196637 ns       274658 ns          512
mask | 26 |     tbb     479420 ns       610352 ns          512
mask | 26 | avx tbb     157834 ns       183105 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             676220 ns       732422 ns           64
data |  1 | avx         663381 ns       732422 ns           64
data |  1 |     tbb     630292 ns       732422 ns           64
data |  1 | avx tbb     618995 ns       488281 ns           64
mask |  1 |             675173 ns       244141 ns           64
mask |  1 | avx         666181 ns       976562 ns           64
mask |  1 |     tbb     633334 ns       732422 ns           64
mask |  1 | avx tbb     615234 ns       244141 ns           64

data |  2 |           18072558 ns     18310547 ns           64
data |  2 | avx         826408 ns       488281 ns           64
data |  2 |     tbb    1863156 ns      1708984 ns           64
data |  2 | avx tbb     631880 ns       976562 ns           64
mask |  2 |            9162722 ns      9033203 ns           64
mask |  2 | avx         838542 ns      1708984 ns           64
mask |  2 |     tbb    1822270 ns      1464844 ns           64
mask |  2 | avx tbb     629720 ns       976562 ns           64

data |  3 |           12091027 ns     12207031 ns           64
data |  3 | avx         755209 ns       244141 ns           64
data |  3 |     tbb    1282083 ns      2197266 ns           64
data |  3 | avx tbb     624338 ns       488281 ns           64
mask |  3 |            9088361 ns      9033203 ns           64
mask |  3 | avx         805158 ns      1220703 ns           64
mask |  3 |     tbb    1813791 ns      2197266 ns           64
mask |  3 | avx tbb     623498 ns       732422 ns           64

data |  4 |            9136506 ns      9033203 ns           64
data |  4 | avx         752219 ns       976562 ns           64
data |  4 |     tbb    1002114 ns       976562 ns           64
data |  4 | avx tbb     626609 ns       488281 ns           64
mask |  4 |            9127927 ns      9033203 ns           64
mask |  4 | avx         786650 ns       244141 ns           64
mask |  4 |     tbb    1817394 ns      1708984 ns           64
mask |  4 | avx tbb     630041 ns       244141 ns           64

data |  5 |            7300752 ns      7568359 ns           64
data |  5 | avx         757436 ns       732422 ns           64
data |  5 |     tbb     821083 ns       732422 ns           64
data |  5 | avx tbb     623048 ns       732422 ns           64
mask |  5 |            9173595 ns      9277344 ns           64
mask |  5 | avx         795764 ns       488281 ns           64
mask |  5 |     tbb    1821405 ns      1220703 ns           64
mask |  5 | avx tbb     621061 ns       244141 ns           64

data |  6 |            6137816 ns      6103516 ns           64
data |  6 | avx         761208 ns       244141 ns           64
data |  6 |     tbb     756948 ns       488281 ns           64
data |  6 | avx tbb     626241 ns       488281 ns           64
mask |  6 |            9125344 ns      9033203 ns           64
mask |  6 | avx         789245 ns       976562 ns           64
mask |  6 |     tbb    1815339 ns      2197266 ns           64
mask |  6 | avx tbb     634883 ns       244141 ns           64

data |  7 |            5269309 ns      3906250 ns           64
data |  7 | avx         762961 ns       976562 ns           64
data |  7 |     tbb     721063 ns      1220703 ns           64
data |  7 | avx tbb     628964 ns        0.000 ns           64
mask |  7 |            9141283 ns      9033203 ns           64
mask |  7 | avx         787631 ns      1220703 ns           64
mask |  7 |     tbb    1811750 ns      1953125 ns           64
mask |  7 | avx tbb     627103 ns       976562 ns           64

data |  8 |            4641577 ns      4394531 ns           64
data |  8 | avx         770573 ns       244141 ns           64
data |  8 |     tbb     713733 ns       244141 ns           64
data |  8 | avx tbb     626200 ns       244141 ns           64
mask |  8 |            9179933 ns      9277344 ns           64
mask |  8 | avx         791906 ns       244141 ns           64
mask |  8 |     tbb    1823864 ns      1953125 ns           64
mask |  8 | avx tbb     620914 ns       488281 ns           64

data |  9 |            4142378 ns      3662109 ns           64
data |  9 | avx         752695 ns       244141 ns           64
data |  9 |     tbb     696192 ns        0.000 ns           64
data |  9 | avx tbb     625841 ns       244141 ns           64
mask |  9 |            9119414 ns      9033203 ns           64
mask |  9 | avx         787891 ns       488281 ns           64
mask |  9 |     tbb    1795719 ns      1708984 ns           64
mask |  9 | avx tbb     621331 ns       732422 ns           64

data | 10 |            3724766 ns      4150391 ns           64
data | 10 | avx         765545 ns       976562 ns           64
data | 10 |     tbb     700181 ns      1220703 ns           64
data | 10 | avx tbb     625037 ns       488281 ns           64
mask | 10 |            9111227 ns      9277344 ns           64
mask | 10 | avx         833830 ns      1220703 ns           64
mask | 10 |     tbb    1818184 ns      1464844 ns           64
mask | 10 | avx tbb     624538 ns       976562 ns           64

data | 11 |            3407530 ns      3173828 ns           64
data | 11 | avx         760422 ns       732422 ns           64
data | 11 |     tbb     693980 ns       244141 ns           64
data | 11 | avx tbb     633789 ns       732422 ns           64
mask | 11 |            9142939 ns      9277344 ns           64
mask | 11 | avx         787112 ns       732422 ns           64
mask | 11 |     tbb    1819911 ns      1953125 ns           64
mask | 11 | avx tbb     624766 ns        0.000 ns           64

data | 12 |            3135884 ns      3173828 ns           64
data | 12 | avx         758119 ns       976562 ns           64
data | 12 |     tbb     695925 ns       976562 ns           64
data | 12 | avx tbb     626995 ns       732422 ns           64
mask | 12 |            9192856 ns      9277344 ns           64
mask | 12 | avx         790680 ns      1220703 ns           64
mask | 12 |     tbb    1815323 ns      1708984 ns           64
mask | 12 | avx tbb     623095 ns       488281 ns           64

data | 13 |            2980759 ns      2929688 ns           64
data | 13 | avx         766675 ns      1220703 ns           64
data | 13 |     tbb     687872 ns       244141 ns           64
data | 13 | avx tbb     624923 ns       244141 ns           64
mask | 13 |            9136603 ns      8056641 ns           64
mask | 13 | avx         792663 ns       732422 ns           64
mask | 13 |     tbb    1812712 ns      1708984 ns           64
mask | 13 | avx tbb     620692 ns       732422 ns           64

data | 14 |            2740081 ns      2197266 ns           64
data | 14 | avx         789184 ns       244141 ns           64
data | 14 |     tbb     694152 ns       732422 ns           64
data | 14 | avx tbb     627155 ns       244141 ns           64
mask | 14 |            9091316 ns      9033203 ns           64
mask | 14 | avx         793106 ns      1220703 ns           64
mask | 14 |     tbb    1823175 ns      1953125 ns           64
mask | 14 | avx tbb     613119 ns       488281 ns           64

data | 15 |            2615450 ns      2441406 ns           64
data | 15 | avx         757208 ns       488281 ns           64
data | 15 |     tbb     685778 ns       732422 ns           64
data | 15 | avx tbb     637800 ns       732422 ns           64
mask | 15 |            9171875 ns      8789062 ns           64
mask | 15 | avx         791795 ns       244141 ns           64
mask | 15 |     tbb    1808663 ns      1464844 ns           64
mask | 15 | avx tbb     624239 ns      1464844 ns           64

data | 16 |            2455697 ns      2441406 ns           64
data | 16 | avx         759138 ns       732422 ns           64
data | 16 |     tbb     683634 ns       488281 ns           64
data | 16 | avx tbb     627955 ns       244141 ns           64
mask | 16 |            9144497 ns      9033203 ns           64
mask | 16 | avx         782294 ns       244141 ns           64
mask | 16 |     tbb    1811253 ns       976562 ns           64
mask | 16 | avx tbb     628883 ns       244141 ns           64

data | 17 |            2316275 ns      2929688 ns           64
data | 17 | avx         862034 ns      1220703 ns           64
data | 17 |     tbb     690741 ns       488281 ns           64
data | 17 | avx tbb     628808 ns       732422 ns           64
mask | 17 |            9128191 ns      9521484 ns           64
mask | 17 | avx         798614 ns       488281 ns           64
mask | 17 |     tbb    1827373 ns      1464844 ns           64
mask | 17 | avx tbb     625850 ns       488281 ns           64

data | 18 |            2158331 ns      2441406 ns           64
data | 18 | avx         860120 ns       976562 ns           64
data | 18 |     tbb     680870 ns       976562 ns           64
data | 18 | avx tbb     631944 ns       488281 ns           64
mask | 18 |            9121186 ns      9277344 ns           64
mask | 18 | avx         799461 ns      1220703 ns           64
mask | 18 |     tbb    1824744 ns      1464844 ns           64
mask | 18 | avx tbb     611136 ns       244141 ns           64

data | 19 |            2121567 ns      2197266 ns           64
data | 19 | avx         856778 ns      1220703 ns           64
data | 19 |     tbb     672917 ns       488281 ns           64
data | 19 | avx tbb     631448 ns       488281 ns           64
mask | 19 |            9137655 ns      9277344 ns           64
mask | 19 | avx         789003 ns       732422 ns           64
mask | 19 |     tbb    1811125 ns      1220703 ns           64
mask | 19 | avx tbb     615883 ns       732422 ns           64

data | 20 |            1954105 ns      1953125 ns           64
data | 20 | avx         835662 ns       488281 ns           64
data | 20 |     tbb     675661 ns       244141 ns           64
data | 20 | avx tbb     632786 ns       244141 ns           64
mask | 20 |            9185148 ns      9765625 ns           64
mask | 20 | avx         789866 ns       976562 ns           64
mask | 20 |     tbb    1807242 ns      1953125 ns           64
mask | 20 | avx tbb     627089 ns       488281 ns           64

data | 21 |            1875173 ns      1464844 ns           64
data | 21 | avx         861655 ns       244141 ns           64
data | 21 |     tbb     681748 ns       976562 ns           64
data | 21 | avx tbb     634206 ns       732422 ns           64
mask | 21 |            9126625 ns      9277344 ns           64
mask | 21 | avx         825866 ns       976562 ns           64
mask | 21 |     tbb    1807297 ns      1708984 ns           64
mask | 21 | avx tbb     620270 ns       732422 ns           64

data | 22 |            1814553 ns      2197266 ns           64
data | 22 | avx         849959 ns      1220703 ns           64
data | 22 |     tbb     668987 ns       976562 ns           64
data | 22 | avx tbb     630644 ns       732422 ns           64
mask | 22 |            9090291 ns      8789062 ns           64
mask | 22 | avx         799417 ns       732422 ns           64
mask | 22 |     tbb    1849323 ns      2441406 ns           64
mask | 22 | avx tbb     627828 ns       488281 ns           64

data | 23 |            1772217 ns      1464844 ns           64
data | 23 | avx         843509 ns       488281 ns           64
data | 23 |     tbb     669761 ns       488281 ns           64
data | 23 | avx tbb     631361 ns       244141 ns           64
mask | 23 |            9102059 ns      9277344 ns           64
mask | 23 | avx         789688 ns      1464844 ns           64
mask | 23 |     tbb    1833397 ns      1708984 ns           64
mask | 23 | avx tbb     623008 ns       732422 ns           64

data | 24 |            1691123 ns      1464844 ns           64
data | 24 | avx         892508 ns       976562 ns           64
data | 24 |     tbb     672509 ns       732422 ns           64
data | 24 | avx tbb     629253 ns       732422 ns           64
mask | 24 |            9119120 ns      8544922 ns           64
mask | 24 | avx         833452 ns       732422 ns           64
mask | 24 |     tbb    1806392 ns      1708984 ns           64
mask | 24 | avx tbb     618795 ns       488281 ns           64

data | 25 |            1645902 ns       732422 ns           64
data | 25 | avx         842753 ns       976562 ns           64
data | 25 |     tbb     675480 ns       732422 ns           64
data | 25 | avx tbb     632813 ns       244141 ns           64
mask | 25 |            9180328 ns      8789062 ns           64
mask | 25 | avx         797630 ns       488281 ns           64
mask | 25 |     tbb    1804184 ns      2197266 ns           64
mask | 25 | avx tbb     626298 ns       244141 ns           64

data | 26 |            1612898 ns       976562 ns           64
data | 26 | avx         845056 ns       976562 ns           64
data | 26 |     tbb     668353 ns       976562 ns           64
data | 26 | avx tbb     632986 ns       244141 ns           64
mask | 26 |            9132056 ns     10009766 ns           64
mask | 26 | avx         794169 ns       732422 ns           64
mask | 26 |     tbb    1817823 ns      1953125 ns           64
mask | 26 | avx tbb     629961 ns       488281 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2728300 ns      3417969 ns           32
data |  1 | avx        2645469 ns      3906250 ns           32
data |  1 |     tbb    2341137 ns      2441406 ns           32
data |  1 | avx tbb    2352913 ns      2441406 ns           32
mask |  1 |            2899797 ns      4394531 ns           32
mask |  1 | avx        2665556 ns      2929688 ns           32
mask |  1 |     tbb    2346663 ns      1953125 ns           32
mask |  1 | avx tbb    2346431 ns      2441406 ns           32

data |  2 |           71839406 ns     72753906 ns           32
data |  2 | avx        3285600 ns      2929688 ns           32
data |  2 |     tbb    7029753 ns      6835938 ns           32
data |  2 | avx tbb    2367062 ns      3417969 ns           32
mask |  2 |           36085244 ns     35156250 ns           32
mask |  2 | avx        3330828 ns      4394531 ns           32
mask |  2 |     tbb    6924825 ns      6347656 ns           32
mask |  2 | avx tbb    2363256 ns      2441406 ns           32

data |  3 |           47931047 ns     47851562 ns           32
data |  3 | avx        3000772 ns      5859375 ns           32
data |  3 |     tbb    4720709 ns      4394531 ns           32
data |  3 | avx tbb    2358519 ns      1953125 ns           32
mask |  3 |           36195434 ns     36621094 ns           32
mask |  3 | avx        3164888 ns      5859375 ns           32
mask |  3 |     tbb    6871781 ns      6835938 ns           32
mask |  3 | avx tbb    2351494 ns      1953125 ns           32

data |  4 |           36020056 ns     35644531 ns           32
data |  4 | avx        3031481 ns       976562 ns           32
data |  4 |     tbb    3623988 ns      3417969 ns           32
data |  4 | avx tbb    2354006 ns      1464844 ns           32
mask |  4 |           36128678 ns     37597656 ns           32
mask |  4 | avx        3140291 ns      3906250 ns           32
mask |  4 |     tbb    6855762 ns      5371094 ns           32
mask |  4 | avx tbb    2351294 ns      2929688 ns           32

data |  5 |           28853775 ns     29296875 ns           32
data |  5 | avx        3030322 ns        0.000 ns           32
data |  5 |     tbb    3035641 ns      7324219 ns           32
data |  5 | avx tbb    2355925 ns      2441406 ns           32
mask |  5 |           36047209 ns     34667969 ns           32
mask |  5 | avx        3151909 ns      3417969 ns           32
mask |  5 |     tbb    6967197 ns      6835938 ns           32
mask |  5 | avx tbb    2360625 ns      2929688 ns           32

data |  6 |           24303462 ns     23437500 ns           32
data |  6 | avx        3004359 ns        0.000 ns           32
data |  6 |     tbb    2663903 ns      2929688 ns           32
data |  6 | avx tbb    2435044 ns      1953125 ns           32
mask |  6 |           36218234 ns     36621094 ns           32
mask |  6 | avx        3160731 ns      3906250 ns           32
mask |  6 |     tbb    6856113 ns      7324219 ns           32
mask |  6 | avx tbb    2360634 ns      1953125 ns           32

data |  7 |           20910959 ns     21484375 ns           32
data |  7 | avx        2999756 ns        0.000 ns           32
data |  7 |     tbb    2559844 ns      1464844 ns           32
data |  7 | avx tbb    2366762 ns      1953125 ns           32
mask |  7 |           36246134 ns     36621094 ns           32
mask |  7 | avx        3176366 ns      2441406 ns           32
mask |  7 |     tbb    6933116 ns      6347656 ns           32
mask |  7 | avx tbb    2360422 ns      2929688 ns           32

data |  8 |           18280506 ns     18066406 ns           32
data |  8 | avx        3003653 ns      6835938 ns           32
data |  8 |     tbb    2531913 ns      2929688 ns           32
data |  8 | avx tbb    2363153 ns      2441406 ns           32
mask |  8 |           36149269 ns     37109375 ns           32
mask |  8 | avx        3133013 ns      3417969 ns           32
mask |  8 |     tbb    6898600 ns      6835938 ns           32
mask |  8 | avx tbb    2357684 ns      3417969 ns           32

data |  9 |           16135338 ns     16113281 ns           32
data |  9 | avx        3012925 ns      2929688 ns           32
data |  9 |     tbb    2504862 ns      2929688 ns           32
data |  9 | avx tbb    2357066 ns      2929688 ns           32
mask |  9 |           36326575 ns     36621094 ns           32
mask |  9 | avx        3168572 ns       488281 ns           32
mask |  9 |     tbb    6878806 ns      6835938 ns           32
mask |  9 | avx tbb    2352028 ns      1953125 ns           32

data | 10 |           14583775 ns     15136719 ns           32
data | 10 | avx        3022878 ns      1464844 ns           32
data | 10 |     tbb    2485219 ns      2929688 ns           32
data | 10 | avx tbb    2371062 ns      1464844 ns           32
mask | 10 |           36134109 ns     36132812 ns           32
mask | 10 | avx        3157684 ns       488281 ns           32
mask | 10 |     tbb    6883812 ns      6347656 ns           32
mask | 10 | avx tbb    2367128 ns      1953125 ns           32

data | 11 |           13451731 ns     13671875 ns           32
data | 11 | avx        3023756 ns      3417969 ns           32
data | 11 |     tbb    2472594 ns      2441406 ns           32
data | 11 | avx tbb    2367759 ns      2929688 ns           32
mask | 11 |           36139909 ns     35644531 ns           32
mask | 11 | avx        3137359 ns      2441406 ns           32
mask | 11 |     tbb    6914784 ns      7324219 ns           32
mask | 11 | avx tbb    2360966 ns      2929688 ns           32

data | 12 |           12437363 ns     12207031 ns           32
data | 12 | avx        2996037 ns        0.000 ns           32
data | 12 |     tbb    2467556 ns      2929688 ns           32
data | 12 | avx tbb    2362594 ns      2441406 ns           32
mask | 12 |           36150178 ns     36132812 ns           32
mask | 12 | avx        3155472 ns      4882812 ns           32
mask | 12 |     tbb    6867934 ns      7324219 ns           32
mask | 12 | avx tbb    2352769 ns      1464844 ns           32

data | 13 |           11451466 ns     12207031 ns           32
data | 13 | avx        3032722 ns        0.000 ns           32
data | 13 |     tbb    2488231 ns      3417969 ns           32
data | 13 | avx tbb    2370484 ns      2929688 ns           32
mask | 13 |           36107631 ns     36621094 ns           32
mask | 13 | avx        3119906 ns        0.000 ns           32
mask | 13 |     tbb    6848731 ns      6347656 ns           32
mask | 13 | avx tbb    2358469 ns      1953125 ns           32

data | 14 |           10681906 ns     12695312 ns           32
data | 14 | avx        3040534 ns       488281 ns           32
data | 14 |     tbb    2471184 ns      2929688 ns           32
data | 14 | avx tbb    2374737 ns      1953125 ns           32
mask | 14 |           36151069 ns     35644531 ns           32
mask | 14 | avx        3187750 ns      5859375 ns           32
mask | 14 |     tbb    6893181 ns      6347656 ns           32
mask | 14 | avx tbb    2359206 ns      1953125 ns           32

data | 15 |           10030472 ns     10253906 ns           32
data | 15 | avx        3011056 ns        0.000 ns           32
data | 15 |     tbb    2463669 ns      1953125 ns           32
data | 15 | avx tbb    2440637 ns      2441406 ns           32
mask | 15 |           36208231 ns     35644531 ns           32
mask | 15 | avx        3179578 ns      2929688 ns           32
mask | 15 |     tbb    6927428 ns      6347656 ns           32
mask | 15 | avx tbb    2371334 ns      1953125 ns           32

data | 16 |            9373744 ns      9277344 ns           32
data | 16 | avx        3007294 ns      3906250 ns           32
data | 16 |     tbb    2465172 ns      1464844 ns           32
data | 16 | avx tbb    2377159 ns      2441406 ns           32
mask | 16 |           36169178 ns     35644531 ns           32
mask | 16 | avx        3122831 ns      5859375 ns           32
mask | 16 |     tbb    6880459 ns      6835938 ns           32
mask | 16 | avx tbb    2358056 ns      2441406 ns           32

data | 17 |            8992206 ns      9277344 ns           32
data | 17 | avx        3346619 ns      2929688 ns           32
data | 17 |     tbb    2460319 ns      3417969 ns           32
data | 17 | avx tbb    2372159 ns      1464844 ns           32
mask | 17 |           36114506 ns     36621094 ns           32
mask | 17 | avx        3145628 ns        0.000 ns           32
mask | 17 |     tbb    6932006 ns      5859375 ns           32
mask | 17 | avx tbb    2361394 ns      2929688 ns           32

data | 18 |            8474303 ns      7812500 ns           32
data | 18 | avx        3417678 ns      2441406 ns           32
data | 18 |     tbb    2455753 ns      1953125 ns           32
data | 18 | avx tbb    2369825 ns      2441406 ns           32
mask | 18 |           36153031 ns     36621094 ns           32
mask | 18 | avx        3134578 ns      5859375 ns           32
mask | 18 |     tbb    6875072 ns      5859375 ns           32
mask | 18 | avx tbb    2358997 ns      2441406 ns           32

data | 19 |            8004872 ns      7812500 ns           32
data | 19 | avx        3413119 ns      2441406 ns           32
data | 19 |     tbb    2453566 ns      1953125 ns           32
data | 19 | avx tbb    2366900 ns      2441406 ns           32
mask | 19 |           36156031 ns     36132812 ns           32
mask | 19 | avx        3179941 ns      2441406 ns           32
mask | 19 |     tbb    6865059 ns      4882812 ns           32
mask | 19 | avx tbb    2357684 ns      2929688 ns           32

data | 20 |            7637187 ns      8300781 ns           32
data | 20 | avx        3354397 ns      2929688 ns           32
data | 20 |     tbb    2445169 ns      2929688 ns           32
data | 20 | avx tbb    2372053 ns      2929688 ns           32
mask | 20 |           36198959 ns     36132812 ns           32
mask | 20 | avx        3155200 ns       488281 ns           32
mask | 20 |     tbb    6956056 ns      7324219 ns           32
mask | 20 | avx tbb    2361909 ns      2929688 ns           32

data | 21 |            7237309 ns      7324219 ns           32
data | 21 | avx        3331353 ns      3906250 ns           32
data | 21 |     tbb    2476206 ns      1953125 ns           32
data | 21 | avx tbb    2366344 ns      2929688 ns           32
mask | 21 |           36034413 ns     35644531 ns           32
mask | 21 | avx        3219606 ns      3906250 ns           32
mask | 21 |     tbb    6839537 ns      6347656 ns           32
mask | 21 | avx tbb    2351537 ns      2441406 ns           32

data | 22 |            7186409 ns      7812500 ns           32
data | 22 | avx        3367437 ns      2441406 ns           32
data | 22 |     tbb    2434953 ns      2929688 ns           32
data | 22 | avx tbb    2367181 ns      2929688 ns           32
mask | 22 |           36117294 ns     36621094 ns           32
mask | 22 | avx        3159075 ns      3417969 ns           32
mask | 22 |     tbb    6959712 ns      7324219 ns           32
mask | 22 | avx tbb    2353081 ns      1464844 ns           32

data | 23 |            6761169 ns      7324219 ns           32
data | 23 | avx        3462372 ns      2441406 ns           32
data | 23 |     tbb    2436828 ns      3906250 ns           32
data | 23 | avx tbb    2372600 ns      2441406 ns           32
mask | 23 |           36161841 ns     36621094 ns           32
mask | 23 | avx        3178422 ns      2929688 ns           32
mask | 23 |     tbb    6880928 ns      7324219 ns           32
mask | 23 | avx tbb    2358297 ns      1953125 ns           32

data | 24 |            6614291 ns      7324219 ns           32
data | 24 | avx        3377441 ns      3906250 ns           32
data | 24 |     tbb    2440394 ns      1953125 ns           32
data | 24 | avx tbb    2369019 ns      1953125 ns           32
mask | 24 |           36101578 ns     36132812 ns           32
mask | 24 | avx        3187144 ns      1953125 ns           32
mask | 24 |     tbb    6845969 ns      6835938 ns           32
mask | 24 | avx tbb    2350428 ns      1953125 ns           32

data | 25 |            6366178 ns      5859375 ns           32
data | 25 | avx        3591319 ns      5371094 ns           32
data | 25 |     tbb    2426394 ns      1953125 ns           32
data | 25 | avx tbb    2375941 ns      3417969 ns           32
mask | 25 |           36564047 ns     36621094 ns           32
mask | 25 | avx        3155869 ns      1464844 ns           32
mask | 25 |     tbb    6901397 ns      6835938 ns           32
mask | 25 | avx tbb    2360734 ns      2929688 ns           32

data | 26 |            6210744 ns      6347656 ns           32
data | 26 | avx        3378672 ns      1953125 ns           32
data | 26 |     tbb    2428762 ns      1464844 ns           32
data | 26 | avx tbb    2378094 ns      2441406 ns           32
mask | 26 |           36125172 ns     36132812 ns           32
mask | 26 | avx        3147819 ns       488281 ns           32
mask | 26 |     tbb    6921325 ns      6835938 ns           32
mask | 26 | avx tbb    2366822 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10570856 ns     11718750 ns           16
data |  1 | avx       10570656 ns     11718750 ns           16
data |  1 |     tbb    9220894 ns     13671875 ns           16
data |  1 | avx tbb    9211731 ns      8789062 ns           16
mask |  1 |           10570575 ns      8789062 ns           16
mask |  1 | avx       10593206 ns     10742188 ns           16
mask |  1 |     tbb    9534794 ns      8789062 ns           16
mask |  1 | avx tbb    9216881 ns      9765625 ns           16

data |  2 |          287041513 ns    286132812 ns           16
data |  2 | avx       13228494 ns     12695312 ns           16
data |  2 |     tbb   27891750 ns     27343750 ns           16
data |  2 | avx tbb    9344519 ns      9765625 ns           16
mask |  2 |          144625113 ns    141601562 ns           16
mask |  2 | avx       13357169 ns     12695312 ns           16
mask |  2 |     tbb   27139988 ns     26367188 ns           16
mask |  2 | avx tbb    9347181 ns      6835938 ns           16

data |  3 |          191791000 ns    193359375 ns           16
data |  3 | avx       12161300 ns      5859375 ns           16
data |  3 |     tbb   18468881 ns     20507812 ns           16
data |  3 | avx tbb    9261156 ns      8789062 ns           16
mask |  3 |          144547088 ns    144531250 ns           16
mask |  3 | avx       13005031 ns     11718750 ns           16
mask |  3 |     tbb   27204681 ns     28320312 ns           16
mask |  3 | avx tbb    9258637 ns      8789062 ns           16

data |  4 |          144129512 ns    147460938 ns           16
data |  4 | avx       12179675 ns     12695312 ns           16
data |  4 |     tbb   14158537 ns     12695312 ns           16
data |  4 | avx tbb    9265225 ns     10742188 ns           16
mask |  4 |          144426444 ns    146484375 ns           16
mask |  4 | avx       12670875 ns     13671875 ns           16
mask |  4 |     tbb   27289606 ns     24414062 ns           16
mask |  4 | avx tbb    9317750 ns      9765625 ns           16

data |  5 |          115464931 ns    115234375 ns           16
data |  5 | avx       12010587 ns      9765625 ns           16
data |  5 |     tbb   11462794 ns     15625000 ns           16
data |  5 | avx tbb    9300469 ns      8789062 ns           16
mask |  5 |          145046181 ns    144531250 ns           16
mask |  5 | avx       12636944 ns     13671875 ns           16
mask |  5 |     tbb   27066169 ns     21484375 ns           16
mask |  5 | avx tbb    9281319 ns      7812500 ns           16

data |  6 |           99011350 ns     98632812 ns           16
data |  6 | avx       12071937 ns     13671875 ns           16
data |  6 |     tbb   10166213 ns     10742188 ns           16
data |  6 | avx tbb    9263862 ns      9765625 ns           16
mask |  6 |          144729094 ns    143554688 ns           16
mask |  6 | avx       13254531 ns     15625000 ns           16
mask |  6 |     tbb   27089006 ns     26367188 ns           16
mask |  6 | avx tbb    9271556 ns      8789062 ns           16

data |  7 |           83964169 ns     84960938 ns           16
data |  7 | avx       12106844 ns     11718750 ns           16
data |  7 |     tbb    9718019 ns     11718750 ns           16
data |  7 | avx tbb    9265625 ns      6835938 ns           16
mask |  7 |          144436344 ns    144531250 ns           16
mask |  7 | avx       12553587 ns     13671875 ns           16
mask |  7 |     tbb   27272131 ns     25390625 ns           16
mask |  7 | avx tbb    9319688 ns     10742188 ns           16

data |  8 |           72864044 ns     72265625 ns           16
data |  8 | avx       12509675 ns     13671875 ns           16
data |  8 |     tbb    9593481 ns     11718750 ns           16
data |  8 | avx tbb    9320688 ns      9765625 ns           16
mask |  8 |          145205137 ns    145507812 ns           16
mask |  8 | avx       12724962 ns     13671875 ns           16
mask |  8 |     tbb   26999425 ns     24414062 ns           16
mask |  8 | avx tbb    9366625 ns      9765625 ns           16

data |  9 |           64267619 ns     64453125 ns           16
data |  9 | avx       12073131 ns     15625000 ns           16
data |  9 |     tbb    9574494 ns      9765625 ns           16
data |  9 | avx tbb    9281319 ns      9765625 ns           16
mask |  9 |          144784050 ns    145507812 ns           16
mask |  9 | avx       12624300 ns     13671875 ns           16
mask |  9 |     tbb   27094581 ns     24414062 ns           16
mask |  9 | avx tbb    9269294 ns      6835938 ns           16

data | 10 |           58602269 ns     56640625 ns           16
data | 10 | avx       13215613 ns     12695312 ns           16
data | 10 |     tbb    9738894 ns      8789062 ns           16
data | 10 | avx tbb    9257181 ns      9765625 ns           16
mask | 10 |          144364900 ns    145507812 ns           16
mask | 10 | avx       12553806 ns     10742188 ns           16
mask | 10 |     tbb   27148825 ns     25390625 ns           16
mask | 10 | avx tbb    9286969 ns      8789062 ns           16

data | 11 |           53746013 ns     52734375 ns           16
data | 11 | avx       12677794 ns      4882812 ns           16
data | 11 |     tbb    9524262 ns      7812500 ns           16
data | 11 | avx tbb    9318906 ns      8789062 ns           16
mask | 11 |          144700625 ns    143554688 ns           16
mask | 11 | avx       12602325 ns     13671875 ns           16
mask | 11 |     tbb   27060325 ns     26367188 ns           16
mask | 11 | avx tbb    9289300 ns     10742188 ns           16

data | 12 |           49451825 ns     48828125 ns           16
data | 12 | avx       12152806 ns     15625000 ns           16
data | 12 |     tbb    9523713 ns      8789062 ns           16
data | 12 | avx tbb    9255856 ns      9765625 ns           16
mask | 12 |          144580537 ns    146484375 ns           16
mask | 12 | avx       12773963 ns     13671875 ns           16
mask | 12 |     tbb   27212425 ns     23437500 ns           16
mask | 12 | avx tbb    9275637 ns     10742188 ns           16

data | 13 |           46209300 ns     47851562 ns           16
data | 13 | avx       12175862 ns     10742188 ns           16
data | 13 |     tbb   10196406 ns      9765625 ns           16
data | 13 | avx tbb    9288200 ns      8789062 ns           16
mask | 13 |          144835781 ns    145507812 ns           16
mask | 13 | avx       12621800 ns     13671875 ns           16
mask | 13 |     tbb   27145181 ns     30273438 ns           16
mask | 13 | avx tbb    9280775 ns      8789062 ns           16

data | 14 |           42740144 ns     43945312 ns           16
data | 14 | avx       12081231 ns      9765625 ns           16
data | 14 |     tbb    9610600 ns      9765625 ns           16
data | 14 | avx tbb    9269456 ns      9765625 ns           16
mask | 14 |          144735825 ns    145507812 ns           16
mask | 14 | avx       13105550 ns     13671875 ns           16
mask | 14 |     tbb   26996731 ns     24414062 ns           16
mask | 14 | avx tbb    9277412 ns      9765625 ns           16

data | 15 |           40088494 ns     39062500 ns           16
data | 15 | avx       12651381 ns     16601562 ns           16
data | 15 |     tbb    9585300 ns     10742188 ns           16
data | 15 | avx tbb    9278525 ns     11718750 ns           16
mask | 15 |          144869450 ns    144531250 ns           16
mask | 15 | avx       12533962 ns     12695312 ns           16
mask | 15 |     tbb   27322781 ns     25390625 ns           16
mask | 15 | avx tbb    9294013 ns      8789062 ns           16

data | 16 |           38312594 ns     37109375 ns           16
data | 16 | avx       12147869 ns      9765625 ns           16
data | 16 |     tbb    9536125 ns      7812500 ns           16
data | 16 | avx tbb    9288600 ns      9765625 ns           16
mask | 16 |          144229962 ns    145507812 ns           16
mask | 16 | avx       13086300 ns     12695312 ns           16
mask | 16 |     tbb   27269600 ns     27343750 ns           16
mask | 16 | avx tbb    9268163 ns      9765625 ns           16

data | 17 |           36136181 ns     37109375 ns           16
data | 17 | avx       13950119 ns     13671875 ns           16
data | 17 |     tbb    9547481 ns     10742188 ns           16
data | 17 | avx tbb    9302925 ns      9765625 ns           16
mask | 17 |          144665731 ns    144531250 ns           16
mask | 17 | avx       12703431 ns     13671875 ns           16
mask | 17 |     tbb   27132975 ns     24414062 ns           16
mask | 17 | avx tbb    9286356 ns      9765625 ns           16

data | 18 |           33542138 ns     33203125 ns           16
data | 18 | avx       13392006 ns     13671875 ns           16
data | 18 |     tbb    9541744 ns      8789062 ns           16
data | 18 | avx tbb    9280550 ns     10742188 ns           16
mask | 18 |          144323931 ns    146484375 ns           16
mask | 18 | avx       12554488 ns     12695312 ns           16
mask | 18 |     tbb   27117475 ns     30273438 ns           16
mask | 18 | avx tbb    9291587 ns      9765625 ns           16

data | 19 |           31686581 ns     32226562 ns           16
data | 19 | avx       13558437 ns     12695312 ns           16
data | 19 |     tbb    9519938 ns      8789062 ns           16
data | 19 | avx tbb    9276900 ns      9765625 ns           16
mask | 19 |          144840569 ns    146484375 ns           16
mask | 19 | avx       12694837 ns     13671875 ns           16
mask | 19 |     tbb   27050356 ns     27343750 ns           16
mask | 19 | avx tbb    9282419 ns      9765625 ns           16

data | 20 |           30838125 ns     30273438 ns           16
data | 20 | avx       14008469 ns     12695312 ns           16
data | 20 |     tbb    9517225 ns     10742188 ns           16
data | 20 | avx tbb    9276225 ns      8789062 ns           16
mask | 20 |          145072750 ns    146484375 ns           16
mask | 20 | avx       13721975 ns     14648438 ns           16
mask | 20 |     tbb   27107956 ns     25390625 ns           16
mask | 20 | avx tbb    9289675 ns      7812500 ns           16

data | 21 |           29218181 ns     29296875 ns           16
data | 21 | avx       13470169 ns     13671875 ns           16
data | 21 |     tbb    9481481 ns     12695312 ns           16
data | 21 | avx tbb    9282056 ns      7812500 ns           16
mask | 21 |          144659769 ns    148437500 ns           16
mask | 21 | avx       12840044 ns     12695312 ns           16
mask | 21 |     tbb   27133844 ns     25390625 ns           16
mask | 21 | avx tbb    9275375 ns      9765625 ns           16

data | 22 |           28343381 ns     30273438 ns           16
data | 22 | avx       13434462 ns     13671875 ns           16
data | 22 |     tbb    9488344 ns     11718750 ns           16
data | 22 | avx tbb    9302550 ns     10742188 ns           16
mask | 22 |          144797369 ns    145507812 ns           16
mask | 22 | avx       12602419 ns     10742188 ns           16
mask | 22 |     tbb   27289000 ns     27343750 ns           16
mask | 22 | avx tbb    9298719 ns     10742188 ns           16

data | 23 |           26942831 ns     31250000 ns           16
data | 23 | avx       14635787 ns     15625000 ns           16
data | 23 |     tbb    9448806 ns      8789062 ns           16
data | 23 | avx tbb    9283994 ns      9765625 ns           16
mask | 23 |          144646650 ns    144531250 ns           16
mask | 23 | avx       12617706 ns     11718750 ns           16
mask | 23 |     tbb   27018250 ns     27343750 ns           16
mask | 23 | avx tbb    9291219 ns      9765625 ns           16

data | 24 |           26642381 ns     20507812 ns           16
data | 24 | avx       13460525 ns     13671875 ns           16
data | 24 |     tbb    9463625 ns      7812500 ns           16
data | 24 | avx tbb    9324800 ns      7812500 ns           16
mask | 24 |          144452950 ns    144531250 ns           16
mask | 24 | avx       12594031 ns     12695312 ns           16
mask | 24 |     tbb   27394781 ns     28320312 ns           16
mask | 24 | avx tbb    9280425 ns      9765625 ns           16

data | 25 |           26053612 ns     26367188 ns           16
data | 25 | avx       14001269 ns     14648438 ns           16
data | 25 |     tbb    9458644 ns     10742188 ns           16
data | 25 | avx tbb    9284963 ns     10742188 ns           16
mask | 25 |          144584469 ns    143554688 ns           16
mask | 25 | avx       12611244 ns     11718750 ns           16
mask | 25 |     tbb   27053250 ns     23437500 ns           16
mask | 25 | avx tbb    9302300 ns      6835938 ns           16

data | 26 |           25196325 ns     25390625 ns           16
data | 26 | avx       13439687 ns     13671875 ns           16
data | 26 |     tbb    9977963 ns     10742188 ns           16
data | 26 | avx tbb    9295100 ns     10742188 ns           16
mask | 26 |          144429781 ns    144531250 ns           16
mask | 26 | avx       12662763 ns     13671875 ns           16
mask | 26 |     tbb   27168444 ns     25390625 ns           16
mask | 26 | avx tbb    9285706 ns      8789062 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           21360787 ns     25390625 ns            8
data |  1 | avx       23699012 ns     31250000 ns            8
data |  1 |     tbb   18344775 ns     17578125 ns            8
data |  1 | avx tbb   18343837 ns     15625000 ns            8
mask |  1 |           23713050 ns     27343750 ns            8
mask |  1 | avx       21163975 ns     21484375 ns            8
mask |  1 |     tbb   18355963 ns     15625000 ns            8
mask |  1 | avx tbb   18348500 ns     17578125 ns            8

data |  2 |          574648950 ns    576171875 ns            8
data |  2 | avx       26116550 ns     27343750 ns            8
data |  2 |     tbb   54776950 ns     54687500 ns            8
data |  2 | avx tbb   18540588 ns     17578125 ns            8
mask |  2 |          289583925 ns    291015625 ns            8
mask |  2 | avx       26769025 ns     29296875 ns            8
mask |  2 |     tbb   54034700 ns     52734375 ns            8
mask |  2 | avx tbb   18626863 ns     19531250 ns            8

data |  3 |          383341588 ns    376953125 ns            8
data |  3 | avx       24195675 ns     23437500 ns            8
data |  3 |     tbb   37450550 ns     31250000 ns            8
data |  3 | avx tbb   18425288 ns     17578125 ns            8
mask |  3 |          289270512 ns    287109375 ns            8
mask |  3 | avx       25518013 ns     25390625 ns            8
mask |  3 |     tbb   54526163 ns     50781250 ns            8
mask |  3 | avx tbb   18458875 ns     15625000 ns            8

data |  4 |          287788400 ns    296875000 ns            8
data |  4 | avx       24379587 ns     25390625 ns            8
data |  4 |     tbb   28312125 ns     25390625 ns            8
data |  4 | avx tbb   18439725 ns     19531250 ns            8
mask |  4 |          289496425 ns    287109375 ns            8
mask |  4 | avx       25262725 ns     25390625 ns            8
mask |  4 |     tbb   54064387 ns     52734375 ns            8
mask |  4 | avx tbb   18481525 ns     17578125 ns            8

data |  5 |          231762712 ns    228515625 ns            8
data |  5 | avx       24879575 ns     27343750 ns            8
data |  5 |     tbb   22842737 ns     29296875 ns            8
data |  5 | avx tbb   18435687 ns     15625000 ns            8
mask |  5 |          290084612 ns    292968750 ns            8
mask |  5 | avx       27529325 ns     27343750 ns            8
mask |  5 |     tbb   53998950 ns     52734375 ns            8
mask |  5 | avx tbb   18471538 ns     17578125 ns            8

data |  6 |          192718387 ns    191406250 ns            8
data |  6 | avx       24154112 ns     25390625 ns            8
data |  6 |     tbb   20320400 ns     17578125 ns            8
data |  6 | avx tbb   18588950 ns     17578125 ns            8
mask |  6 |          289707137 ns    294921875 ns            8
mask |  6 | avx       25357175 ns     25390625 ns            8
mask |  6 |     tbb   54005125 ns     46875000 ns            8
mask |  6 | avx tbb   18461850 ns     19531250 ns            8

data |  7 |          166615475 ns    166015625 ns            8
data |  7 | avx       24199825 ns     25390625 ns            8
data |  7 |     tbb   19562500 ns     17578125 ns            8
data |  7 | avx tbb   18565888 ns     17578125 ns            8
mask |  7 |          289453237 ns    289062500 ns            8
mask |  7 | avx       27477813 ns     29296875 ns            8
mask |  7 |     tbb   53894500 ns     56640625 ns            8
mask |  7 | avx tbb   18449700 ns     15625000 ns            8

data |  8 |          146949788 ns    148437500 ns            8
data |  8 | avx       26684287 ns     23437500 ns            8
data |  8 |     tbb   19354575 ns     19531250 ns            8
data |  8 | avx tbb   18428213 ns     19531250 ns            8
mask |  8 |          289322688 ns    283203125 ns            8
mask |  8 | avx       27488925 ns     29296875 ns            8
mask |  8 |     tbb   53834800 ns     48828125 ns            8
mask |  8 | avx tbb   18483850 ns     19531250 ns            8

data |  9 |          130171025 ns    132812500 ns            8
data |  9 | avx       24238538 ns     23437500 ns            8
data |  9 |     tbb   19142750 ns     19531250 ns            8
data |  9 | avx tbb   18591975 ns     17578125 ns            8
mask |  9 |          289209125 ns    283203125 ns            8
mask |  9 | avx       25228275 ns     23437500 ns            8
mask |  9 |     tbb   53987875 ns     50781250 ns            8
mask |  9 | avx tbb   18472487 ns     15625000 ns            8

data | 10 |          119811038 ns    115234375 ns            8
data | 10 | avx       24195425 ns     23437500 ns            8
data | 10 |     tbb   18951575 ns     19531250 ns            8
data | 10 | avx tbb   18422650 ns     19531250 ns            8
mask | 10 |          289901950 ns    285156250 ns            8
mask | 10 | avx       25591400 ns     25390625 ns            8
mask | 10 |     tbb   54988775 ns     44921875 ns            8
mask | 10 | avx tbb   18464113 ns     17578125 ns            8

data | 11 |          108346213 ns    107421875 ns            8
data | 11 | avx       24447513 ns     21484375 ns            8
data | 11 |     tbb   18929175 ns     17578125 ns            8
data | 11 | avx tbb   18451487 ns     19531250 ns            8
mask | 11 |          288718000 ns    296875000 ns            8
mask | 11 | avx       25458525 ns     23437500 ns            8
mask | 11 |     tbb   54186363 ns     50781250 ns            8
mask | 11 | avx tbb   18482562 ns     17578125 ns            8

data | 12 |           99733775 ns     99609375 ns            8
data | 12 | avx       24194137 ns     23437500 ns            8
data | 12 |     tbb   18959537 ns     19531250 ns            8
data | 12 | avx tbb   18441025 ns     19531250 ns            8
mask | 12 |          290275725 ns    289062500 ns            8
mask | 12 | avx       27436487 ns     23437500 ns            8
mask | 12 |     tbb   54215300 ns     52734375 ns            8
mask | 12 | avx tbb   18496162 ns     17578125 ns            8

data | 13 |           91645238 ns     91796875 ns            8
data | 13 | avx       24226687 ns     25390625 ns            8
data | 13 |     tbb   18920225 ns     19531250 ns            8
data | 13 | avx tbb   18456112 ns     17578125 ns            8
mask | 13 |          296102425 ns    298828125 ns            8
mask | 13 | avx       25421238 ns     25390625 ns            8
mask | 13 |     tbb   53914550 ns     48828125 ns            8
mask | 13 | avx tbb   18496787 ns     17578125 ns            8

data | 14 |           85291437 ns     78125000 ns            8
data | 14 | avx       24299962 ns     25390625 ns            8
data | 14 |     tbb   18976513 ns     17578125 ns            8
data | 14 | avx tbb   18448838 ns     19531250 ns            8
mask | 14 |          289301337 ns    283203125 ns            8
mask | 14 | avx       25174100 ns     25390625 ns            8
mask | 14 |     tbb   53852013 ns     52734375 ns            8
mask | 14 | avx tbb   18490550 ns     19531250 ns            8

data | 15 |           80212562 ns     80078125 ns            8
data | 15 | avx       24235500 ns     27343750 ns            8
data | 15 |     tbb   18888737 ns     21484375 ns            8
data | 15 | avx tbb   18424963 ns     19531250 ns            8
mask | 15 |          289351100 ns    285156250 ns            8
mask | 15 | avx       25087587 ns     21484375 ns            8
mask | 15 |     tbb   54183950 ns     52734375 ns            8
mask | 15 | avx tbb   18492337 ns     17578125 ns            8

data | 16 |           77010575 ns     78125000 ns            8
data | 16 | avx       26618450 ns     25390625 ns            8
data | 16 |     tbb   18975800 ns     17578125 ns            8
data | 16 | avx tbb   18455725 ns     19531250 ns            8
mask | 16 |          288707850 ns    281250000 ns            8
mask | 16 | avx       30729487 ns     29296875 ns            8
mask | 16 |     tbb   53898737 ns     50781250 ns            8
mask | 16 | avx tbb   18471187 ns     19531250 ns            8

data | 17 |           70398275 ns     64453125 ns            8
data | 17 | avx       27068063 ns     27343750 ns            8
data | 17 |     tbb   18916712 ns     17578125 ns            8
data | 17 | avx tbb   18486275 ns     15625000 ns            8
mask | 17 |          289449312 ns    287109375 ns            8
mask | 17 | avx       25369475 ns     27343750 ns            8
mask | 17 |     tbb   53888162 ns     50781250 ns            8
mask | 17 | avx tbb   18491112 ns     19531250 ns            8

data | 18 |           68448675 ns     68359375 ns            8
data | 18 | avx       27101213 ns     25390625 ns            8
data | 18 |     tbb   18997725 ns     17578125 ns            8
data | 18 | avx tbb   18628088 ns     17578125 ns            8
mask | 18 |          290016425 ns    289062500 ns            8
mask | 18 | avx       25326688 ns     25390625 ns            8
mask | 18 |     tbb   54234950 ns     52734375 ns            8
mask | 18 | avx tbb   18485475 ns     19531250 ns            8

data | 19 |           63278500 ns     64453125 ns            8
data | 19 | avx       26968762 ns     27343750 ns            8
data | 19 |     tbb   19321062 ns     19531250 ns            8
data | 19 | avx tbb   18445125 ns     17578125 ns            8
mask | 19 |          288424813 ns    285156250 ns            8
mask | 19 | avx       25559950 ns     25390625 ns            8
mask | 19 |     tbb   54589737 ns     52734375 ns            8
mask | 19 | avx tbb   18530075 ns     17578125 ns            8

data | 20 |           60357075 ns     60546875 ns            8
data | 20 | avx       27278425 ns     27343750 ns            8
data | 20 |     tbb   18889238 ns     19531250 ns            8
data | 20 | avx tbb   18510900 ns     15625000 ns            8
mask | 20 |          290361275 ns    287109375 ns            8
mask | 20 | avx       25559800 ns     25390625 ns            8
mask | 20 |     tbb   54149800 ns     46875000 ns            8
mask | 20 | avx tbb   18483850 ns     19531250 ns            8

data | 21 |           60000700 ns     60546875 ns            8
data | 21 | avx       29315288 ns     29296875 ns            8
data | 21 |     tbb   18850762 ns     17578125 ns            8
data | 21 | avx tbb   18465262 ns     17578125 ns            8
mask | 21 |          289480737 ns    287109375 ns            8
mask | 21 | avx       25228462 ns     23437500 ns            8
mask | 21 |     tbb   54400175 ns     50781250 ns            8
mask | 21 | avx tbb   18473637 ns     17578125 ns            8

data | 22 |           55768900 ns     52734375 ns            8
data | 22 | avx       27038112 ns     27343750 ns            8
data | 22 |     tbb   18819825 ns     17578125 ns            8
data | 22 | avx tbb   18455975 ns     19531250 ns            8
mask | 22 |          288793025 ns    283203125 ns            8
mask | 22 | avx       25324713 ns     25390625 ns            8
mask | 22 |     tbb   53905200 ns     52734375 ns            8
mask | 22 | avx tbb   18592837 ns     17578125 ns            8

data | 23 |           56054837 ns     52734375 ns            8
data | 23 | avx       27029838 ns     25390625 ns            8
data | 23 |     tbb   21882350 ns     17578125 ns            8
data | 23 | avx tbb   18474637 ns     19531250 ns            8
mask | 23 |          289586037 ns    285156250 ns            8
mask | 23 | avx       25320325 ns     23437500 ns            8
mask | 23 |     tbb   53971000 ns     50781250 ns            8
mask | 23 | avx tbb   18471687 ns     19531250 ns            8

data | 24 |           54338250 ns     52734375 ns            8
data | 24 | avx       29454138 ns     31250000 ns            8
data | 24 |     tbb   18805000 ns     19531250 ns            8
data | 24 | avx tbb   18481725 ns     19531250 ns            8
mask | 24 |          289206350 ns    283203125 ns            8
mask | 24 | avx       26165475 ns     23437500 ns            8
mask | 24 |     tbb   54385738 ns     50781250 ns            8
mask | 24 | avx tbb   18497337 ns     17578125 ns            8

data | 25 |           50709688 ns     48828125 ns            8
data | 25 | avx       29258012 ns     27343750 ns            8
data | 25 |     tbb   18752237 ns     19531250 ns            8
data | 25 | avx tbb   18505800 ns     17578125 ns            8
mask | 25 |          288806725 ns    283203125 ns            8
mask | 25 | avx       25246588 ns     25390625 ns            8
mask | 25 |     tbb   54285800 ns     50781250 ns            8
mask | 25 | avx tbb   18484187 ns     15625000 ns            8

data | 26 |           49375463 ns     48828125 ns            8
data | 26 | avx       27001437 ns     25390625 ns            8
data | 26 |     tbb   18754325 ns     19531250 ns            8
data | 26 | avx tbb   18490225 ns     17578125 ns            8
mask | 26 |          289026850 ns    294921875 ns            8
mask | 26 | avx       25500588 ns     25390625 ns            8
mask | 26 |     tbb   53966713 ns     50781250 ns            8
mask | 26 | avx tbb   18510488 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           42586425 ns     41015625 ns            8
data |  1 | avx       47175725 ns     46875000 ns            8
data |  1 |     tbb   36627200 ns     35156250 ns            8
data |  1 | avx tbb   36602588 ns     37109375 ns            8
mask |  1 |           42342113 ns     42968750 ns            8
mask |  1 | avx       44206187 ns     44921875 ns            8
mask |  1 |     tbb   36641837 ns     33203125 ns            8
mask |  1 | avx tbb   36595325 ns     37109375 ns            8

data |  2 |         1148110925 ns   1146484375 ns            8
data |  2 | avx       56277500 ns     54687500 ns            8
data |  2 |     tbb  109808200 ns    105468750 ns            8
data |  2 | avx tbb   37267662 ns     35156250 ns            8
mask |  2 |          576841750 ns    578125000 ns            8
mask |  2 | avx       54445725 ns     54687500 ns            8
mask |  2 |     tbb  108406950 ns    103515625 ns            8
mask |  2 | avx tbb   37034862 ns     35156250 ns            8

data |  3 |          766212337 ns    765625000 ns            8
data |  3 | avx       48609112 ns     48828125 ns            8
data |  3 |     tbb   74539963 ns     66406250 ns            8
data |  3 | avx tbb   36781363 ns     35156250 ns            8
mask |  3 |          578524125 ns    580078125 ns            8
mask |  3 | avx       50975150 ns     52734375 ns            8
mask |  3 |     tbb  108940600 ns     99609375 ns            8
mask |  3 | avx tbb   36829588 ns     37109375 ns            8

data |  4 |          575283250 ns    576171875 ns            8
data |  4 | avx       48573600 ns     48828125 ns            8
data |  4 |     tbb   55673762 ns     54687500 ns            8
data |  4 | avx tbb   36779712 ns     39062500 ns            8
mask |  4 |          577215887 ns    578125000 ns            8
mask |  4 | avx       50373375 ns     50781250 ns            8
mask |  4 |     tbb  108572625 ns    103515625 ns            8
mask |  4 | avx tbb   36839237 ns     39062500 ns            8

data |  5 |          461748513 ns    462890625 ns            8
data |  5 | avx       48651375 ns     50781250 ns            8
data |  5 |     tbb   45164375 ns     39062500 ns            8
data |  5 | avx tbb   36778725 ns     37109375 ns            8
mask |  5 |          578018425 ns    578125000 ns            8
mask |  5 | avx       55254638 ns     56640625 ns            8
mask |  5 |     tbb  108298037 ns    101562500 ns            8
mask |  5 | avx tbb   36825725 ns     35156250 ns            8

data |  6 |          387713000 ns    384765625 ns            8
data |  6 | avx       53100475 ns     52734375 ns            8
data |  6 |     tbb   39669563 ns     39062500 ns            8
data |  6 | avx tbb   37077900 ns     37109375 ns            8
mask |  6 |          577218450 ns    576171875 ns            8
mask |  6 | avx       51915175 ns     52734375 ns            8
mask |  6 |     tbb  107642400 ns    107421875 ns            8
mask |  6 | avx tbb   36815450 ns     37109375 ns            8

data |  7 |          335700187 ns    335937500 ns            8
data |  7 | avx       48905312 ns     48828125 ns            8
data |  7 |     tbb   39118825 ns     37109375 ns            8
data |  7 | avx tbb   36751150 ns     39062500 ns            8
mask |  7 |          576728288 ns    576171875 ns            8
mask |  7 | avx       51113325 ns     50781250 ns            8
mask |  7 |     tbb  107650225 ns    103515625 ns            8
mask |  7 | avx tbb   36862800 ns     39062500 ns            8

data |  8 |          291395350 ns    291015625 ns            8
data |  8 | avx       48483675 ns     46875000 ns            8
data |  8 |     tbb   38307913 ns     39062500 ns            8
data |  8 | avx tbb   36803450 ns     37109375 ns            8
mask |  8 |          580284100 ns    582031250 ns            8
mask |  8 | avx       55183612 ns     54687500 ns            8
mask |  8 |     tbb  108900525 ns    101562500 ns            8
mask |  8 | avx tbb   36832600 ns     33203125 ns            8

data |  9 |          257211863 ns    259765625 ns            8
data |  9 | avx       48511337 ns     46875000 ns            8
data |  9 |     tbb   38120925 ns     35156250 ns            8
data |  9 | avx tbb   36912150 ns     33203125 ns            8
mask |  9 |          577536837 ns    578125000 ns            8
mask |  9 | avx       50616312 ns     52734375 ns            8
mask |  9 |     tbb  108303412 ns     97656250 ns            8
mask |  9 | avx tbb   36785050 ns     35156250 ns            8

data | 10 |          233610275 ns    232421875 ns            8
data | 10 | avx       52934550 ns     50781250 ns            8
data | 10 |     tbb   37880525 ns     37109375 ns            8
data | 10 | avx tbb   36775125 ns     37109375 ns            8
mask | 10 |          578842100 ns    580078125 ns            8
mask | 10 | avx       55102263 ns     56640625 ns            8
mask | 10 |     tbb  108801213 ns    101562500 ns            8
mask | 10 | avx tbb   36809425 ns     35156250 ns            8

data | 11 |          216578000 ns    216796875 ns            8
data | 11 | avx       48615000 ns     48828125 ns            8
data | 11 |     tbb   37764625 ns     41015625 ns            8
data | 11 | avx tbb   37090288 ns     39062500 ns            8
mask | 11 |          577892875 ns    576171875 ns            8
mask | 11 | avx       50997775 ns     50781250 ns            8
mask | 11 |     tbb  108965862 ns    103515625 ns            8
mask | 11 | avx tbb   36857637 ns     35156250 ns            8

data | 12 |          199333237 ns    201171875 ns            8
data | 12 | avx       49001012 ns     48828125 ns            8
data | 12 |     tbb   37667825 ns     39062500 ns            8
data | 12 | avx tbb   36791838 ns     39062500 ns            8
mask | 12 |          577675513 ns    576171875 ns            8
mask | 12 | avx       55463713 ns     56640625 ns            8
mask | 12 |     tbb  108282925 ns    101562500 ns            8
mask | 12 | avx tbb   36823762 ns     33203125 ns            8

data | 13 |          183293137 ns    185546875 ns            8
data | 13 | avx       49621338 ns     48828125 ns            8
data | 13 |     tbb   37614850 ns     35156250 ns            8
data | 13 | avx tbb   37048000 ns     37109375 ns            8
mask | 13 |          577946250 ns    578125000 ns            8
mask | 13 | avx       50405650 ns     50781250 ns            8
mask | 13 |     tbb  108859862 ns     99609375 ns            8
mask | 13 | avx tbb   36820050 ns     35156250 ns            8

data | 14 |          170557413 ns    166015625 ns            8
data | 14 | avx       48459612 ns     50781250 ns            8
data | 14 |     tbb   37714550 ns     37109375 ns            8
data | 14 | avx tbb   36837900 ns     35156250 ns            8
mask | 14 |          578020825 ns    578125000 ns            8
mask | 14 | avx       50490962 ns     48828125 ns            8
mask | 14 |     tbb  109178987 ns     99609375 ns            8
mask | 14 | avx tbb   36811725 ns     37109375 ns            8

data | 15 |          163552112 ns    162109375 ns            8
data | 15 | avx       49526450 ns     50781250 ns            8
data | 15 |     tbb   37844925 ns     37109375 ns            8
data | 15 | avx tbb   37155013 ns     37109375 ns            8
mask | 15 |          578250450 ns    578125000 ns            8
mask | 15 | avx       50413950 ns     48828125 ns            8
mask | 15 |     tbb  107762750 ns    101562500 ns            8
mask | 15 | avx tbb   36832912 ns     37109375 ns            8

data | 16 |          150709800 ns    150390625 ns            8
data | 16 | avx       48875650 ns     48828125 ns            8
data | 16 |     tbb   38628737 ns     39062500 ns            8
data | 16 | avx tbb   36767975 ns     35156250 ns            8
mask | 16 |          576762862 ns    576171875 ns            8
mask | 16 | avx       50504350 ns     50781250 ns            8
mask | 16 |     tbb  109517125 ns    101562500 ns            8
mask | 16 | avx tbb   36835363 ns     35156250 ns            8

data | 17 |          141044300 ns    140625000 ns            8
data | 17 | avx       58710912 ns     56640625 ns            8
data | 17 |     tbb   37849200 ns     37109375 ns            8
data | 17 | avx tbb   36868563 ns     37109375 ns            8
mask | 17 |          577331000 ns    578125000 ns            8
mask | 17 | avx       53953713 ns     52734375 ns            8
mask | 17 |     tbb  107642675 ns    105468750 ns            8
mask | 17 | avx tbb   37532212 ns     35156250 ns            8

data | 18 |          133213800 ns    130859375 ns            8
data | 18 | avx       58336137 ns     58593750 ns            8
data | 18 |     tbb   37633475 ns     37109375 ns            8
data | 18 | avx tbb   36874313 ns     39062500 ns            8
mask | 18 |          577444825 ns    576171875 ns            8
mask | 18 | avx       50373375 ns     46875000 ns            8
mask | 18 |     tbb  109692938 ns    105468750 ns            8
mask | 18 | avx tbb   36893200 ns     37109375 ns            8

data | 19 |          126608600 ns    126953125 ns            8
data | 19 | avx       53946512 ns     56640625 ns            8
data | 19 |     tbb   37576075 ns     39062500 ns            8
data | 19 | avx tbb   36870312 ns     35156250 ns            8
mask | 19 |          577909063 ns    580078125 ns            8
mask | 19 | avx       55348113 ns     56640625 ns            8
mask | 19 |     tbb  108271950 ns    101562500 ns            8
mask | 19 | avx tbb   36901412 ns     35156250 ns            8

data | 20 |          123985525 ns    123046875 ns            8
data | 20 | avx       59165388 ns     58593750 ns            8
data | 20 |     tbb   37755850 ns     39062500 ns            8
data | 20 | avx tbb   36857688 ns     37109375 ns            8
mask | 20 |          577998275 ns    578125000 ns            8
mask | 20 | avx       50648337 ns     50781250 ns            8
mask | 20 |     tbb  108979288 ns    105468750 ns            8
mask | 20 | avx tbb   36795338 ns     35156250 ns            8

data | 21 |          116132750 ns    117187500 ns            8
data | 21 | avx       55424463 ns     54687500 ns            8
data | 21 |     tbb   37702900 ns     39062500 ns            8
data | 21 | avx tbb   36988763 ns     39062500 ns            8
mask | 21 |          578468037 ns    578125000 ns            8
mask | 21 | avx       50681225 ns     50781250 ns            8
mask | 21 |     tbb  107818725 ns     97656250 ns            8
mask | 21 | avx tbb   36891925 ns     35156250 ns            8

data | 22 |          115696288 ns    119140625 ns            8
data | 22 | avx       55659625 ns     56640625 ns            8
data | 22 |     tbb   37507513 ns     37109375 ns            8
data | 22 | avx tbb   36845587 ns     37109375 ns            8
mask | 22 |          578203913 ns    578125000 ns            8
mask | 22 | avx       56110412 ns     54687500 ns            8
mask | 22 |     tbb  108168762 ns    103515625 ns            8
mask | 22 | avx tbb   36892525 ns     33203125 ns            8

data | 23 |          107973675 ns    109375000 ns            8
data | 23 | avx       55446212 ns     52734375 ns            8
data | 23 |     tbb   37546862 ns     33203125 ns            8
data | 23 | avx tbb   37177800 ns     35156250 ns            8
mask | 23 |          577302200 ns    578125000 ns            8
mask | 23 | avx       50642450 ns     50781250 ns            8
mask | 23 |     tbb  107724875 ns     99609375 ns            8
mask | 23 | avx tbb   36838325 ns     37109375 ns            8

data | 24 |          104945188 ns    105468750 ns            8
data | 24 | avx       59971637 ns     60546875 ns            8
data | 24 |     tbb   37360725 ns     37109375 ns            8
data | 24 | avx tbb   36919263 ns     37109375 ns            8
mask | 24 |          578732500 ns    580078125 ns            8
mask | 24 | avx       50638938 ns     50781250 ns            8
mask | 24 |     tbb  108259087 ns     95703125 ns            8
mask | 24 | avx tbb   36865488 ns     35156250 ns            8

data | 25 |          101522288 ns    101562500 ns            8
data | 25 | avx       54388725 ns     56640625 ns            8
data | 25 |     tbb   37368600 ns     37109375 ns            8
data | 25 | avx tbb   36861563 ns     37109375 ns            8
mask | 25 |          578548488 ns    576171875 ns            8
mask | 25 | avx       50482438 ns     52734375 ns            8
mask | 25 |     tbb  108613275 ns    105468750 ns            8
mask | 25 | avx tbb   37134063 ns     35156250 ns            8

data | 26 |          104927387 ns    101562500 ns            8
data | 26 | avx       55367213 ns     52734375 ns            8
data | 26 |     tbb   37480713 ns     37109375 ns            8
data | 26 | avx tbb   36872163 ns     37109375 ns            8
mask | 26 |          577221675 ns    572265625 ns            8
mask | 26 | avx       50568975 ns     50781250 ns            8
mask | 26 |     tbb  108382238 ns     99609375 ns            8
mask | 26 | avx tbb   36874187 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           86281325 ns     85937500 ns            8
data |  1 | avx       84981987 ns     83984375 ns            8
data |  1 |     tbb   73163488 ns     74218750 ns            8
data |  1 | avx tbb   73154750 ns     72265625 ns            8
mask |  1 |           91463537 ns     93750000 ns            8
mask |  1 | avx       85122850 ns     87890625 ns            8
mask |  1 |     tbb   73116125 ns     70312500 ns            8
mask |  1 | avx tbb   73145225 ns     72265625 ns            8

data |  2 |         2300014012 ns   2300781250 ns            8
data |  2 | avx      104939512 ns    109375000 ns            8
data |  2 |     tbb  218694575 ns    205078125 ns            8
data |  2 | avx tbb   73812238 ns     70312500 ns            8
mask |  2 |         1164503550 ns   1166015625 ns            8
mask |  2 | avx      109105550 ns    111328125 ns            8
mask |  2 |     tbb  215153488 ns    201171875 ns            8
mask |  2 | avx tbb   73854163 ns     78125000 ns            8

data |  3 |         1532685425 ns   1531250000 ns            8
data |  3 | avx       97373038 ns     97656250 ns            8
data |  3 |     tbb  145957025 ns    140625000 ns            8
data |  3 | avx tbb   73523875 ns     74218750 ns            8
mask |  3 |         1155781912 ns   1156250000 ns            8
mask |  3 | avx      101352087 ns    101562500 ns            8
mask |  3 |     tbb  219757325 ns    203125000 ns            8
mask |  3 | avx tbb   73627500 ns     72265625 ns            8

data |  4 |         1151604737 ns   1156250000 ns            8
data |  4 | avx       97266275 ns     97656250 ns            8
data |  4 |     tbb  111303413 ns    101562500 ns            8
data |  4 | avx tbb   73407800 ns     74218750 ns            8
mask |  4 |         1156647775 ns   1156250000 ns            8
mask |  4 | avx      101212000 ns    103515625 ns            8
mask |  4 |     tbb  215268088 ns    201171875 ns            8
mask |  4 | avx tbb   73645325 ns     72265625 ns            8

data |  5 |          922733550 ns    923828125 ns            8
data |  5 | avx       97129950 ns     97656250 ns            8
data |  5 |     tbb   91106625 ns     87890625 ns            8
data |  5 | avx tbb   73448925 ns     74218750 ns            8
mask |  5 |         1155704287 ns   1156250000 ns            8
mask |  5 | avx      102550050 ns    101562500 ns            8
mask |  5 |     tbb  217323762 ns    203125000 ns            8
mask |  5 | avx tbb   73647175 ns     72265625 ns            8

data |  6 |          771405625 ns    771484375 ns            8
data |  6 | avx       96931025 ns     95703125 ns            8
data |  6 |     tbb   80569150 ns     74218750 ns            8
data |  6 | avx tbb   73526125 ns     68359375 ns            8
mask |  6 |         1157738013 ns   1158203125 ns            8
mask |  6 | avx      101295113 ns    103515625 ns            8
mask |  6 |     tbb  215213463 ns    203125000 ns            8
mask |  6 | avx tbb   73591563 ns     74218750 ns            8

data |  7 |          666579162 ns    667968750 ns            8
data |  7 | avx       97101625 ns     93750000 ns            8
data |  7 |     tbb   77820025 ns     70312500 ns            8
data |  7 | avx tbb   75256075 ns     70312500 ns            8
mask |  7 |         1155613263 ns   1156250000 ns            8
mask |  7 | avx      101434150 ns     99609375 ns            8
mask |  7 |     tbb  216211125 ns    203125000 ns            8
mask |  7 | avx tbb   73565063 ns     68359375 ns            8

data |  8 |          584653775 ns    582031250 ns            8
data |  8 | avx       98058287 ns     97656250 ns            8
data |  8 |     tbb   76274825 ns     68359375 ns            8
data |  8 | avx tbb   74673813 ns     72265625 ns            8
mask |  8 |         1157365000 ns   1160156250 ns            8
mask |  8 | avx      102253975 ns     99609375 ns            8
mask |  8 |     tbb  217306950 ns    199218750 ns            8
mask |  8 | avx tbb   73553487 ns     70312500 ns            8

data |  9 |          514532838 ns    513671875 ns            8
data |  9 | avx       97072500 ns     95703125 ns            8
data |  9 |     tbb   75615200 ns     74218750 ns            8
data |  9 | avx tbb   73367413 ns     74218750 ns            8
mask |  9 |         1156495838 ns   1156250000 ns            8
mask |  9 | avx      101040487 ns    101562500 ns            8
mask |  9 |     tbb  215131762 ns    199218750 ns            8
mask |  9 | avx tbb   73592325 ns     74218750 ns            8

data | 10 |          470390187 ns    472656250 ns            8
data | 10 | avx       97824888 ns    101562500 ns            8
data | 10 |     tbb   75431650 ns     74218750 ns            8
data | 10 | avx tbb   73406600 ns     74218750 ns            8
mask | 10 |         1155863612 ns   1158203125 ns            8
mask | 10 | avx      102493912 ns    101562500 ns            8
mask | 10 |     tbb  217496075 ns    205078125 ns            8
mask | 10 | avx tbb   73671162 ns     70312500 ns            8

data | 11 |          426703663 ns    427734375 ns            8
data | 11 | avx       97478137 ns     97656250 ns            8
data | 11 |     tbb   75792400 ns     72265625 ns            8
data | 11 | avx tbb   73570500 ns     72265625 ns            8
mask | 11 |         1163307837 ns   1164062500 ns            8
mask | 11 | avx      100640612 ns    103515625 ns            8
mask | 11 |     tbb  215389488 ns    201171875 ns            8
mask | 11 | avx tbb   73604925 ns     72265625 ns            8

data | 12 |          392596288 ns    394531250 ns            8
data | 12 | avx       97140575 ns     99609375 ns            8
data | 12 |     tbb   75565125 ns     74218750 ns            8
data | 12 | avx tbb   73441563 ns     74218750 ns            8
mask | 12 |         1155101888 ns   1156250000 ns            8
mask | 12 | avx      101697088 ns    105468750 ns            8
mask | 12 |     tbb  215078563 ns    201171875 ns            8
mask | 12 | avx tbb   73628587 ns     74218750 ns            8

data | 13 |          366186738 ns    367187500 ns            8
data | 13 | avx       97618912 ns     99609375 ns            8
data | 13 |     tbb   76367063 ns     74218750 ns            8
data | 13 | avx tbb   73479850 ns     70312500 ns            8
mask | 13 |         1155134138 ns   1156250000 ns            8
mask | 13 | avx      100906662 ns     99609375 ns            8
mask | 13 |     tbb  215006125 ns    201171875 ns            8
mask | 13 | avx tbb   73667225 ns     72265625 ns            8

data | 14 |          341303912 ns    341796875 ns            8
data | 14 | avx       97208112 ns     95703125 ns            8
data | 14 |     tbb   75320350 ns     72265625 ns            8
data | 14 | avx tbb   73422438 ns     70312500 ns            8
mask | 14 |         1154229963 ns   1152343750 ns            8
mask | 14 | avx      101774938 ns    101562500 ns            8
mask | 14 |     tbb  216220337 ns    199218750 ns            8
mask | 14 | avx tbb   73686638 ns     74218750 ns            8

data | 15 |          320598925 ns    320312500 ns            8
data | 15 | avx       97662125 ns     99609375 ns            8
data | 15 |     tbb   75130712 ns     74218750 ns            8
data | 15 | avx tbb   73581987 ns     72265625 ns            8
mask | 15 |         1156354825 ns   1156250000 ns            8
mask | 15 | avx      104296350 ns    103515625 ns            8
mask | 15 |     tbb  216762800 ns    201171875 ns            8
mask | 15 | avx tbb   73580600 ns     72265625 ns            8

data | 16 |          301996600 ns    300781250 ns            8
data | 16 | avx       97391550 ns     97656250 ns            8
data | 16 |     tbb   76178337 ns     78125000 ns            8
data | 16 | avx tbb   73464187 ns     74218750 ns            8
mask | 16 |         1157219125 ns   1156250000 ns            8
mask | 16 | avx      101181388 ns    101562500 ns            8
mask | 16 |     tbb  214959087 ns    199218750 ns            8
mask | 16 | avx tbb   73653075 ns     72265625 ns            8

data | 17 |          286401875 ns    285156250 ns            8
data | 17 | avx      111266425 ns    113281250 ns            8
data | 17 |     tbb   75070787 ns     74218750 ns            8
data | 17 | avx tbb   73686800 ns     70312500 ns            8
mask | 17 |         1156268488 ns   1156250000 ns            8
mask | 17 | avx      101449825 ns    101562500 ns            8
mask | 17 |     tbb  216133963 ns    201171875 ns            8
mask | 17 | avx tbb   73588913 ns     76171875 ns            8

data | 18 |          266115513 ns    265625000 ns            8
data | 18 | avx      108674750 ns    107421875 ns            8
data | 18 |     tbb   75585888 ns     70312500 ns            8
data | 18 | avx tbb   73662000 ns     70312500 ns            8
mask | 18 |         1155680600 ns   1156250000 ns            8
mask | 18 | avx      101428150 ns     99609375 ns            8
mask | 18 |     tbb  218912513 ns    207031250 ns            8
mask | 18 | avx tbb   73623500 ns     72265625 ns            8

data | 19 |          253715675 ns    253906250 ns            8
data | 19 | avx      108505500 ns    107421875 ns            8
data | 19 |     tbb   75279237 ns     70312500 ns            8
data | 19 | avx tbb   73661538 ns     76171875 ns            8
mask | 19 |         1155835037 ns   1156250000 ns            8
mask | 19 | avx      107307675 ns    105468750 ns            8
mask | 19 |     tbb  215682350 ns    201171875 ns            8
mask | 19 | avx tbb   73727575 ns     72265625 ns            8

data | 20 |          241737087 ns    242187500 ns            8
data | 20 | avx      108172337 ns    109375000 ns            8
data | 20 |     tbb   75287637 ns     76171875 ns            8
data | 20 | avx tbb   73617713 ns     76171875 ns            8
mask | 20 |         1154408763 ns   1154296875 ns            8
mask | 20 | avx      101840475 ns    105468750 ns            8
mask | 20 |     tbb  215008050 ns    205078125 ns            8
mask | 20 | avx tbb   73705675 ns     68359375 ns            8

data | 21 |          232188837 ns    234375000 ns            8
data | 21 | avx      110986538 ns    111328125 ns            8
data | 21 |     tbb   74791213 ns     72265625 ns            8
data | 21 | avx tbb   73643763 ns     72265625 ns            8
mask | 21 |         1154284237 ns   1154296875 ns            8
mask | 21 | avx      102262350 ns    105468750 ns            8
mask | 21 |     tbb  216236838 ns    205078125 ns            8
mask | 21 | avx tbb   74486950 ns     76171875 ns            8

data | 22 |          223064362 ns    222656250 ns            8
data | 22 | avx      111064325 ns    109375000 ns            8
data | 22 |     tbb   74764138 ns     70312500 ns            8
data | 22 | avx tbb   73767175 ns     72265625 ns            8
mask | 22 |         1153387450 ns   1156250000 ns            8
mask | 22 | avx      101549525 ns    101562500 ns            8
mask | 22 |     tbb  215241225 ns    208984375 ns            8
mask | 22 | avx tbb   73685625 ns     70312500 ns            8

data | 23 |          216855625 ns    214843750 ns            8
data | 23 | avx      111005063 ns    109375000 ns            8
data | 23 |     tbb   74783675 ns     72265625 ns            8
data | 23 | avx tbb   73576288 ns     72265625 ns            8
mask | 23 |         1157869063 ns   1158203125 ns            8
mask | 23 | avx      101464187 ns    101562500 ns            8
mask | 23 |     tbb  215995225 ns    205078125 ns            8
mask | 23 | avx tbb   75243437 ns     74218750 ns            8

data | 24 |          208890987 ns    208984375 ns            8
data | 24 | avx      108476175 ns    109375000 ns            8
data | 24 |     tbb   74883000 ns     74218750 ns            8
data | 24 | avx tbb   73736875 ns     72265625 ns            8
mask | 24 |         1154823675 ns   1158203125 ns            8
mask | 24 | avx      101752837 ns    103515625 ns            8
mask | 24 |     tbb  222004488 ns    197265625 ns            8
mask | 24 | avx tbb   73591313 ns     74218750 ns            8

data | 25 |          202656562 ns    203125000 ns            8
data | 25 | avx      108120588 ns    109375000 ns            8
data | 25 |     tbb   74909588 ns     72265625 ns            8
data | 25 | avx tbb   73638175 ns     74218750 ns            8
mask | 25 |         1156096800 ns   1156250000 ns            8
mask | 25 | avx      101586112 ns    103515625 ns            8
mask | 25 |     tbb  215004762 ns    205078125 ns            8
mask | 25 | avx tbb   73683700 ns     74218750 ns            8

data | 26 |          196946725 ns    199218750 ns            8
data | 26 | avx      108849925 ns    109375000 ns            8
data | 26 |     tbb   74630513 ns     72265625 ns            8
data | 26 | avx tbb   73565637 ns     74218750 ns            8
mask | 26 |         1155393013 ns   1156250000 ns            8
mask | 26 | avx      101441163 ns    101562500 ns            8
mask | 26 |     tbb  217501012 ns    201171875 ns            8
mask | 26 | avx tbb   73560087 ns     76171875 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1202 ns        0.000 ns         4096
data |  1 | avx            717 ns        0.000 ns         4096
data |  1 |     tbb       5554 ns         3815 ns         4096
data |  1 | avx tbb        735 ns        0.000 ns         4096
mask |  1 |                708 ns         3815 ns         4096
mask |  1 | avx            712 ns         3815 ns         4096
mask |  1 |     tbb       5497 ns         3815 ns         4096
mask |  1 | avx tbb        730 ns        0.000 ns         4096

data |  2 |              18451 ns        15259 ns         4096
data |  2 | avx           1074 ns        0.000 ns         4096
data |  2 |     tbb      10702 ns         7629 ns         4096
data |  2 | avx tbb       1143 ns         3815 ns         4096
mask |  2 |              11728 ns        11444 ns         4096
mask |  2 | avx            988 ns        0.000 ns         4096
mask |  2 |     tbb       8338 ns         3815 ns         4096
mask |  2 | avx tbb       1036 ns         3815 ns         4096

data |  3 |              13334 ns        15259 ns         4096
data |  3 | avx           1042 ns         3815 ns         4096
data |  3 |     tbb      10118 ns        11444 ns         4096
data |  3 | avx tbb       1031 ns         3815 ns         4096
mask |  3 |              11332 ns         7629 ns         4096
mask |  3 | avx            901 ns        0.000 ns         4096
mask |  3 |     tbb       8365 ns         7629 ns         4096
mask |  3 | avx tbb        936 ns         3815 ns         4096

data |  4 |               9828 ns        11444 ns         4096
data |  4 | avx           1021 ns        0.000 ns         4096
data |  4 |     tbb       9533 ns         7629 ns         4096
data |  4 | avx tbb       1062 ns        0.000 ns         4096
mask |  4 |              11476 ns        11444 ns         4096
mask |  4 | avx            954 ns        0.000 ns         4096
mask |  4 |     tbb       8362 ns         7629 ns         4096
mask |  4 | avx tbb        992 ns        0.000 ns         4096

data |  5 |               8277 ns         7629 ns         4096
data |  5 | avx           1018 ns         3815 ns         4096
data |  5 |     tbb       9403 ns         7629 ns         4096
data |  5 | avx tbb       1097 ns         3815 ns         4096
mask |  5 |              11955 ns         7629 ns         4096
mask |  5 | avx            989 ns        0.000 ns         4096
mask |  5 |     tbb       8407 ns        11444 ns         4096
mask |  5 | avx tbb        968 ns        0.000 ns         4096

data |  6 |               6836 ns         7629 ns         4096
data |  6 | avx           1012 ns        0.000 ns         4096
data |  6 |     tbb       9109 ns        11444 ns         4096
data |  6 | avx tbb       1059 ns         3815 ns         4096
mask |  6 |              11318 ns        11444 ns         4096
mask |  6 | avx            914 ns        0.000 ns         4096
mask |  6 |     tbb       8368 ns        11444 ns         4096
mask |  6 | avx tbb        910 ns        0.000 ns         4096

data |  7 |               5788 ns         3815 ns         4096
data |  7 | avx            987 ns        0.000 ns         4096
data |  7 |     tbb       8990 ns         7629 ns         4096
data |  7 | avx tbb       1021 ns        0.000 ns         4096
mask |  7 |              11500 ns        11444 ns         4096
mask |  7 | avx            947 ns        0.000 ns         4096
mask |  7 |     tbb       8384 ns         3815 ns         4096
mask |  7 | avx tbb        994 ns         3815 ns         4096

data |  8 |               5511 ns         7629 ns         4096
data |  8 | avx           1018 ns        0.000 ns         4096
data |  8 |     tbb       8948 ns        11444 ns         4096
data |  8 | avx tbb       1002 ns        0.000 ns         4096
mask |  8 |              11773 ns        11444 ns         4096
mask |  8 | avx            968 ns         3815 ns         4096
mask |  8 |     tbb       8337 ns        11444 ns         4096
mask |  8 | avx tbb        976 ns        0.000 ns         4096

data |  9 |               4915 ns         3815 ns         4096
data |  9 | avx           1001 ns        0.000 ns         4096
data |  9 |     tbb       8783 ns        11444 ns         4096
data |  9 | avx tbb       1007 ns         3815 ns         4096
mask |  9 |              11989 ns        11444 ns         4096
mask |  9 | avx            979 ns        0.000 ns         4096
mask |  9 |     tbb       8387 ns        11444 ns         4096
mask |  9 | avx tbb        997 ns        0.000 ns         4096

data | 10 |               4575 ns         3815 ns         4096
data | 10 | avx           1033 ns        0.000 ns         4096
data | 10 |     tbb       8941 ns         7629 ns         4096
data | 10 | avx tbb       1031 ns        0.000 ns         4096
mask | 10 |              12124 ns        15259 ns         4096
mask | 10 | avx            986 ns        0.000 ns         4096
mask | 10 |     tbb       8335 ns         7629 ns         4096
mask | 10 | avx tbb       1000 ns        0.000 ns         4096

data | 11 |               4234 ns         3815 ns         4096
data | 11 | avx           1054 ns         3815 ns         4096
data | 11 |     tbb       8724 ns         3815 ns         4096
data | 11 | avx tbb       1030 ns        0.000 ns         4096
mask | 11 |              12513 ns        11444 ns         4096
mask | 11 | avx            979 ns        0.000 ns         4096
mask | 11 |     tbb       8380 ns        11444 ns         4096
mask | 11 | avx tbb       1003 ns        0.000 ns         4096

data | 12 |               3954 ns         3815 ns         4096
data | 12 | avx           1035 ns        0.000 ns         4096
data | 12 |     tbb       8691 ns        11444 ns         4096
data | 12 | avx tbb        974 ns        0.000 ns         4096
mask | 12 |              11801 ns         3815 ns         4096
mask | 12 | avx            976 ns        0.000 ns         4096
mask | 12 |     tbb       8432 ns        11444 ns         4096
mask | 12 | avx tbb        975 ns         3815 ns         4096

data | 13 |               3635 ns         3815 ns         4096
data | 13 | avx            965 ns         3815 ns         4096
data | 13 |     tbb       8622 ns        11444 ns         4096
data | 13 | avx tbb        969 ns        0.000 ns         4096
mask | 13 |              11886 ns        11444 ns         4096
mask | 13 | avx            908 ns        0.000 ns         4096
mask | 13 |     tbb       8398 ns         3815 ns         4096
mask | 13 | avx tbb        924 ns         3815 ns         4096

data | 14 |               3511 ns         3815 ns         4096
data | 14 | avx           1014 ns         3815 ns         4096
data | 14 |     tbb       8593 ns        11444 ns         4096
data | 14 | avx tbb       1020 ns        0.000 ns         4096
mask | 14 |              11399 ns        11444 ns         4096
mask | 14 | avx            905 ns         3815 ns         4096
mask | 14 |     tbb       8504 ns         3815 ns         4096
mask | 14 | avx tbb        974 ns        0.000 ns         4096

data | 15 |               3330 ns         3815 ns         4096
data | 15 | avx           1001 ns        0.000 ns         4096
data | 15 |     tbb       8554 ns         7629 ns         4096
data | 15 | avx tbb       1025 ns        0.000 ns         4096
mask | 15 |              12319 ns         7629 ns         4096
mask | 15 | avx            930 ns         3815 ns         4096
mask | 15 |     tbb       8374 ns        11444 ns         4096
mask | 15 | avx tbb        942 ns        0.000 ns         4096

data | 16 |               3013 ns         3815 ns         4096
data | 16 | avx            950 ns        0.000 ns         4096
data | 16 |     tbb       8511 ns         3815 ns         4096
data | 16 | avx tbb        994 ns        0.000 ns         4096
mask | 16 |              11310 ns        15259 ns         4096
mask | 16 | avx            921 ns        0.000 ns         4096
mask | 16 |     tbb       8385 ns         3815 ns         4096
mask | 16 | avx tbb        980 ns        0.000 ns         4096

data | 17 |               2955 ns         3815 ns         4096
data | 17 | avx           1118 ns        0.000 ns         4096
data | 17 |     tbb       8597 ns        11444 ns         4096
data | 17 | avx tbb       1107 ns        0.000 ns         4096
mask | 17 |              11821 ns        11444 ns         4096
mask | 17 | avx            956 ns        0.000 ns         4096
mask | 17 |     tbb       8391 ns        11444 ns         4096
mask | 17 | avx tbb        927 ns         3815 ns         4096

data | 18 |               2757 ns         3815 ns         4096
data | 18 | avx           1063 ns        0.000 ns         4096
data | 18 |     tbb       8491 ns         7629 ns         4096
data | 18 | avx tbb       1052 ns         3815 ns         4096
mask | 18 |              11743 ns         7629 ns         4096
mask | 18 | avx            980 ns        0.000 ns         4096
mask | 18 |     tbb       8355 ns         7629 ns         4096
mask | 18 | avx tbb        979 ns        0.000 ns         4096

data | 19 |               2778 ns         3815 ns         4096
data | 19 | avx           1093 ns        0.000 ns         4096
data | 19 |     tbb       8432 ns         7629 ns         4096
data | 19 | avx tbb       1053 ns        0.000 ns         4096
mask | 19 |              11708 ns        11444 ns         4096
mask | 19 | avx            918 ns        0.000 ns         4096
mask | 19 |     tbb       8496 ns         7629 ns         4096
mask | 19 | avx tbb        948 ns         3815 ns         4096

data | 20 |               2645 ns         3815 ns         4096
data | 20 | avx           1099 ns        0.000 ns         4096
data | 20 |     tbb       8539 ns         3815 ns         4096
data | 20 | avx tbb       1137 ns        0.000 ns         4096
mask | 20 |              12142 ns        15259 ns         4096
mask | 20 | avx            983 ns         3815 ns         4096
mask | 20 |     tbb       8321 ns         7629 ns         4096
mask | 20 | avx tbb        995 ns        0.000 ns         4096

data | 21 |               2630 ns         3815 ns         4096
data | 21 | avx           1150 ns        0.000 ns         4096
data | 21 |     tbb       8406 ns        11444 ns         4096
data | 21 | avx tbb       1040 ns        0.000 ns         4096
mask | 21 |              11266 ns        11444 ns         4096
mask | 21 | avx            931 ns        0.000 ns         4096
mask | 21 |     tbb       8321 ns        11444 ns         4096
mask | 21 | avx tbb        957 ns        0.000 ns         4096

data | 22 |               2497 ns        0.000 ns         4096
data | 22 | avx           1120 ns        0.000 ns         4096
data | 22 |     tbb       8424 ns         7629 ns         4096
data | 22 | avx tbb       1098 ns        0.000 ns         4096
mask | 22 |              11824 ns        11444 ns         4096
mask | 22 | avx            971 ns        0.000 ns         4096
mask | 22 |     tbb       8366 ns        11444 ns         4096
mask | 22 | avx tbb        984 ns        0.000 ns         4096

data | 23 |               2462 ns        0.000 ns         4096
data | 23 | avx           1131 ns        0.000 ns         4096
data | 23 |     tbb       8329 ns         7629 ns         4096
data | 23 | avx tbb       1016 ns        0.000 ns         4096
mask | 23 |              11047 ns        11444 ns         4096
mask | 23 | avx            909 ns        0.000 ns         4096
mask | 23 |     tbb       8361 ns        11444 ns         4096
mask | 23 | avx tbb        953 ns        0.000 ns         4096

data | 24 |               2293 ns         3815 ns         4096
data | 24 | avx           1092 ns        0.000 ns         4096
data | 24 |     tbb       8331 ns         3815 ns         4096
data | 24 | avx tbb       1014 ns        0.000 ns         4096
mask | 24 |              11148 ns        11444 ns         4096
mask | 24 | avx            911 ns        0.000 ns         4096
mask | 24 |     tbb       8548 ns         7629 ns         4096
mask | 24 | avx tbb        951 ns         3815 ns         4096

data | 25 |               2227 ns         3815 ns         4096
data | 25 | avx           1085 ns         3815 ns         4096
data | 25 |     tbb       8350 ns        11444 ns         4096
data | 25 | avx tbb       1048 ns        0.000 ns         4096
mask | 25 |              11848 ns        11444 ns         4096
mask | 25 | avx            996 ns        0.000 ns         4096
mask | 25 |     tbb       8317 ns         3815 ns         4096
mask | 25 | avx tbb        987 ns        0.000 ns         4096

data | 26 |               2185 ns         3815 ns         4096
data | 26 | avx           1076 ns        0.000 ns         4096
data | 26 |     tbb       8270 ns        11444 ns         4096
data | 26 | avx tbb       1057 ns         3815 ns         4096
mask | 26 |              11597 ns        11444 ns         4096
mask | 26 | avx            929 ns        0.000 ns         4096
mask | 26 |     tbb       8404 ns        11444 ns         4096
mask | 26 | avx tbb        989 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1413 ns         3815 ns         4096
data |  1 | avx           1410 ns        0.000 ns         4096
data |  1 |     tbb       5974 ns         7629 ns         4096
data |  1 | avx tbb       1493 ns        0.000 ns         4096
mask |  1 |               1441 ns        0.000 ns         4096
mask |  1 | avx           1466 ns         3815 ns         4096
mask |  1 |     tbb       5915 ns         7629 ns         4096
mask |  1 | avx tbb       1488 ns         3815 ns         4096

data |  2 |              73697 ns        76294 ns         4096
data |  2 | avx           2344 ns        0.000 ns         4096
data |  2 |     tbb      17120 ns        11444 ns         4096
data |  2 | avx tbb       2480 ns         3815 ns         4096
mask |  2 |              45308 ns        41962 ns         4096
mask |  2 | avx           2356 ns         3815 ns         4096
mask |  2 |     tbb      14914 ns        15259 ns         4096
mask |  2 | avx tbb       2520 ns        0.000 ns         4096

data |  3 |              48012 ns        49591 ns         4096
data |  3 | avx           1993 ns         3815 ns         4096
data |  3 |     tbb      14355 ns        15259 ns         4096
data |  3 | avx tbb       2069 ns         3815 ns         4096
mask |  3 |              44697 ns        45776 ns         4096
mask |  3 | avx           2124 ns        0.000 ns         4096
mask |  3 |     tbb      14961 ns        19073 ns         4096
mask |  3 | avx tbb       2269 ns         3815 ns         4096

data |  4 |              37655 ns        41962 ns         4096
data |  4 | avx           2045 ns         3815 ns         4096
data |  4 |     tbb      12971 ns         7629 ns         4096
data |  4 | avx tbb       2061 ns         3815 ns         4096
mask |  4 |              43171 ns        41962 ns         4096
mask |  4 | avx           2142 ns         3815 ns         4096
mask |  4 |     tbb      15029 ns        19073 ns         4096
mask |  4 | avx tbb       2269 ns         3815 ns         4096

data |  5 |              29886 ns        30518 ns         4096
data |  5 | avx           2151 ns         3815 ns         4096
data |  5 |     tbb      12137 ns        15259 ns         4096
data |  5 | avx tbb       2106 ns         3815 ns         4096
mask |  5 |              44617 ns        45776 ns         4096
mask |  5 | avx           2194 ns         3815 ns         4096
mask |  5 |     tbb      15356 ns        15259 ns         4096
mask |  5 | avx tbb       2250 ns         3815 ns         4096

data |  6 |              25792 ns        26703 ns         4096
data |  6 | avx           2154 ns        0.000 ns         4096
data |  6 |     tbb      11406 ns        11444 ns         4096
data |  6 | avx tbb       2258 ns         3815 ns         4096
mask |  6 |              43886 ns        41962 ns         4096
mask |  6 | avx           2137 ns        0.000 ns         4096
mask |  6 |     tbb      15147 ns        19073 ns         4096
mask |  6 | avx tbb       2286 ns         3815 ns         4096

data |  7 |              21301 ns        22888 ns         4096
data |  7 | avx           2109 ns        0.000 ns         4096
data |  7 |     tbb      11046 ns        11444 ns         4096
data |  7 | avx tbb       2083 ns         3815 ns         4096
mask |  7 |              44584 ns        45776 ns         4096
mask |  7 | avx           2136 ns        0.000 ns         4096
mask |  7 |     tbb      15241 ns        15259 ns         4096
mask |  7 | avx tbb       2245 ns        0.000 ns         4096

data |  8 |              19009 ns        19073 ns         4096
data |  8 | avx           2069 ns         3815 ns         4096
data |  8 |     tbb      10626 ns        11444 ns         4096
data |  8 | avx tbb       2031 ns        0.000 ns         4096
mask |  8 |              44540 ns        45776 ns         4096
mask |  8 | avx           2143 ns         3815 ns         4096
mask |  8 |     tbb      15245 ns        11444 ns         4096
mask |  8 | avx tbb       2276 ns         3815 ns         4096

data |  9 |              17221 ns        15259 ns         4096
data |  9 | avx           2079 ns         3815 ns         4096
data |  9 |     tbb      10354 ns        15259 ns         4096
data |  9 | avx tbb       2063 ns        0.000 ns         4096
mask |  9 |              44681 ns        45776 ns         4096
mask |  9 | avx           2153 ns         3815 ns         4096
mask |  9 |     tbb      15081 ns        15259 ns         4096
mask |  9 | avx tbb       2261 ns         3815 ns         4096

data | 10 |              15359 ns        15259 ns         4096
data | 10 | avx           2078 ns        0.000 ns         4096
data | 10 |     tbb      10176 ns         3815 ns         4096
data | 10 | avx tbb       2031 ns        0.000 ns         4096
mask | 10 |              44797 ns        45776 ns         4096
mask | 10 | avx           2132 ns        0.000 ns         4096
mask | 10 |     tbb      15047 ns        19073 ns         4096
mask | 10 | avx tbb       2224 ns         3815 ns         4096

data | 11 |              13782 ns        15259 ns         4096
data | 11 | avx           2246 ns         3815 ns         4096
data | 11 |     tbb      10085 ns        11444 ns         4096
data | 11 | avx tbb       2189 ns         3815 ns         4096
mask | 11 |              43652 ns        41962 ns         4096
mask | 11 | avx           2106 ns         3815 ns         4096
mask | 11 |     tbb      14927 ns        15259 ns         4096
mask | 11 | avx tbb       2232 ns         3815 ns         4096

data | 12 |              12926 ns        15259 ns         4096
data | 12 | avx           1915 ns        0.000 ns         4096
data | 12 |     tbb       9945 ns         7629 ns         4096
data | 12 | avx tbb       2144 ns        0.000 ns         4096
mask | 12 |              43316 ns        45776 ns         4096
mask | 12 | avx           2160 ns         3815 ns         4096
mask | 12 |     tbb      15025 ns        15259 ns         4096
mask | 12 | avx tbb       2231 ns         3815 ns         4096

data | 13 |              11952 ns        11444 ns         4096
data | 13 | avx           2100 ns         3815 ns         4096
data | 13 |     tbb       9871 ns        11444 ns         4096
data | 13 | avx tbb       2213 ns        0.000 ns         4096
mask | 13 |              44624 ns        45776 ns         4096
mask | 13 | avx           2158 ns        0.000 ns         4096
mask | 13 |     tbb      14948 ns        15259 ns         4096
mask | 13 | avx tbb       2221 ns        0.000 ns         4096

data | 14 |              11384 ns        15259 ns         4096
data | 14 | avx           2051 ns        0.000 ns         4096
data | 14 |     tbb       9635 ns        11444 ns         4096
data | 14 | avx tbb       2014 ns         3815 ns         4096
mask | 14 |              44647 ns        41962 ns         4096
mask | 14 | avx           2111 ns         3815 ns         4096
mask | 14 |     tbb      14947 ns        19073 ns         4096
mask | 14 | avx tbb       2224 ns         3815 ns         4096

data | 15 |              10417 ns        11444 ns         4096
data | 15 | avx           2075 ns         3815 ns         4096
data | 15 |     tbb       9570 ns         7629 ns         4096
data | 15 | avx tbb       2214 ns         3815 ns         4096
mask | 15 |              43275 ns        45776 ns         4096
mask | 15 | avx           2100 ns         3815 ns         4096
mask | 15 |     tbb      14968 ns        15259 ns         4096
mask | 15 | avx tbb       2235 ns         3815 ns         4096

data | 16 |               9887 ns        11444 ns         4096
data | 16 | avx           1938 ns         3815 ns         4096
data | 16 |     tbb       9412 ns        11444 ns         4096
data | 16 | avx tbb       2135 ns        0.000 ns         4096
mask | 16 |              43736 ns        45776 ns         4096
mask | 16 | avx           2118 ns        0.000 ns         4096
mask | 16 |     tbb      15111 ns        19073 ns         4096
mask | 16 | avx tbb       2183 ns         3815 ns         4096

data | 17 |               9553 ns         7629 ns         4096
data | 17 | avx           2504 ns        0.000 ns         4096
data | 17 |     tbb       9418 ns        11444 ns         4096
data | 17 | avx tbb       2522 ns         3815 ns         4096
mask | 17 |              44662 ns        41962 ns         4096
mask | 17 | avx           2136 ns        0.000 ns         4096
mask | 17 |     tbb      15182 ns        15259 ns         4096
mask | 17 | avx tbb       2212 ns        0.000 ns         4096

data | 18 |               8899 ns        11444 ns         4096
data | 18 | avx           2453 ns         3815 ns         4096
data | 18 |     tbb       9320 ns        11444 ns         4096
data | 18 | avx tbb       2597 ns         3815 ns         4096
mask | 18 |              43539 ns        45776 ns         4096
mask | 18 | avx           2117 ns         3815 ns         4096
mask | 18 |     tbb      15236 ns        15259 ns         4096
mask | 18 | avx tbb       2224 ns         3815 ns         4096

data | 19 |               8503 ns        11444 ns         4096
data | 19 | avx           2369 ns        0.000 ns         4096
data | 19 |     tbb       9252 ns        11444 ns         4096
data | 19 | avx tbb       2608 ns         3815 ns         4096
mask | 19 |              43665 ns        45776 ns         4096
mask | 19 | avx           2116 ns        0.000 ns         4096
mask | 19 |     tbb      14927 ns        15259 ns         4096
mask | 19 | avx tbb       2253 ns         3815 ns         4096

data | 20 |               8285 ns         7629 ns         4096
data | 20 | avx           2501 ns         3815 ns         4096
data | 20 |     tbb       9237 ns         7629 ns         4096
data | 20 | avx tbb       2543 ns         3815 ns         4096
mask | 20 |              44442 ns        38147 ns         4096
mask | 20 | avx           2116 ns        0.000 ns         4096
mask | 20 |     tbb      14921 ns        15259 ns         4096
mask | 20 | avx tbb       2276 ns         3815 ns         4096

data | 21 |               7758 ns         7629 ns         4096
data | 21 | avx           2384 ns        0.000 ns         4096
data | 21 |     tbb       9243 ns         7629 ns         4096
data | 21 | avx tbb       2591 ns         3815 ns         4096
mask | 21 |              43277 ns        45776 ns         4096
mask | 21 | avx           2132 ns         3815 ns         4096
mask | 21 |     tbb      14975 ns        15259 ns         4096
mask | 21 | avx tbb       2203 ns        0.000 ns         4096

data | 22 |               7563 ns         7629 ns         4096
data | 22 | avx           2509 ns         3815 ns         4096
data | 22 |     tbb       9125 ns        11444 ns         4096
data | 22 | avx tbb       2498 ns        0.000 ns         4096
mask | 22 |              43726 ns        41962 ns         4096
mask | 22 | avx           2108 ns         3815 ns         4096
mask | 22 |     tbb      14950 ns        11444 ns         4096
mask | 22 | avx tbb       2227 ns         3815 ns         4096

data | 23 |               7112 ns        11444 ns         4096
data | 23 | avx           2351 ns         3815 ns         4096
data | 23 |     tbb       8996 ns         7629 ns         4096
data | 23 | avx tbb       2682 ns        0.000 ns         4096
mask | 23 |              45303 ns        49591 ns         4096
mask | 23 | avx           2115 ns        0.000 ns         4096
mask | 23 |     tbb      14974 ns        15259 ns         4096
mask | 23 | avx tbb       2230 ns         3815 ns         4096

data | 24 |               7189 ns         7629 ns         4096
data | 24 | avx           2500 ns        0.000 ns         4096
data | 24 |     tbb       9034 ns        11444 ns         4096
data | 24 | avx tbb       2442 ns         3815 ns         4096
mask | 24 |              42968 ns        45776 ns         4096
mask | 24 | avx           2138 ns        0.000 ns         4096
mask | 24 |     tbb      15126 ns         7629 ns         4096
mask | 24 | avx tbb       2202 ns        0.000 ns         4096

data | 25 |               6719 ns         7629 ns         4096
data | 25 | avx           2361 ns         3815 ns         4096
data | 25 |     tbb       8971 ns         7629 ns         4096
data | 25 | avx tbb       2586 ns         3815 ns         4096
mask | 25 |              43551 ns        41962 ns         4096
mask | 25 | avx           2127 ns         3815 ns         4096
mask | 25 |     tbb      15323 ns         7629 ns         4096
mask | 25 | avx tbb       2248 ns         3815 ns         4096

data | 26 |               6663 ns         7629 ns         4096
data | 26 | avx           2507 ns         3815 ns         4096
data | 26 |     tbb       9019 ns        11444 ns         4096
data | 26 | avx tbb       2572 ns         3815 ns         4096
mask | 26 |              44658 ns        49591 ns         4096
mask | 26 | avx           2139 ns        0.000 ns         4096
mask | 26 |     tbb      14974 ns         7629 ns         4096
mask | 26 | avx tbb       2219 ns        0.000 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4881 ns        0.000 ns         2048
data |  1 | avx           4638 ns        0.000 ns         2048
data |  1 |     tbb       9518 ns        0.000 ns         2048
data |  1 | avx tbb       4891 ns        0.000 ns         2048
mask |  1 |               4922 ns        0.000 ns         2048
mask |  1 | avx           4564 ns        0.000 ns         2048
mask |  1 |     tbb       9566 ns        15259 ns         2048
mask |  1 | avx tbb       5163 ns         7629 ns         2048

data |  2 |             282561 ns       289917 ns         2048
data |  2 | avx           8086 ns         7629 ns         2048
data |  2 |     tbb      40495 ns        45776 ns         2048
data |  2 | avx tbb       8513 ns         7629 ns         2048
mask |  2 |             173886 ns       175476 ns         2048
mask |  2 | avx           8547 ns         7629 ns         2048
mask |  2 |     tbb      42045 ns        38147 ns         2048
mask |  2 | avx tbb       8926 ns        15259 ns         2048

data |  3 |             191513 ns       198364 ns         2048
data |  3 | avx           6571 ns        15259 ns         2048
data |  3 |     tbb      32320 ns        38147 ns         2048
data |  3 | avx tbb       7239 ns        15259 ns         2048
mask |  3 |             178037 ns       167847 ns         2048
mask |  3 | avx           7524 ns         7629 ns         2048
mask |  3 |     tbb      42834 ns        45776 ns         2048
mask |  3 | avx tbb       8012 ns         7629 ns         2048

data |  4 |             142369 ns       152588 ns         2048
data |  4 | avx           6543 ns        15259 ns         2048
data |  4 |     tbb      27180 ns        30518 ns         2048
data |  4 | avx tbb       7191 ns         7629 ns         2048
mask |  4 |             187902 ns       198364 ns         2048
mask |  4 | avx           7582 ns         7629 ns         2048
mask |  4 |     tbb      42892 ns        45776 ns         2048
mask |  4 | avx tbb       7982 ns        15259 ns         2048

data |  5 |             113305 ns       114441 ns         2048
data |  5 | avx           6737 ns        0.000 ns         2048
data |  5 |     tbb      23833 ns        22888 ns         2048
data |  5 | avx tbb       7108 ns        15259 ns         2048
mask |  5 |             174711 ns       175476 ns         2048
mask |  5 | avx           7561 ns         7629 ns         2048
mask |  5 |     tbb      42565 ns        45776 ns         2048
mask |  5 | avx tbb       8148 ns        0.000 ns         2048

data |  6 |              95691 ns       106812 ns         2048
data |  6 | avx           6512 ns         7629 ns         2048
data |  6 |     tbb      22117 ns        22888 ns         2048
data |  6 | avx tbb       6953 ns         7629 ns         2048
mask |  6 |             175745 ns       175476 ns         2048
mask |  6 | avx           7412 ns         7629 ns         2048
mask |  6 |     tbb      41916 ns        53406 ns         2048
mask |  6 | avx tbb       7842 ns         7629 ns         2048

data |  7 |              84302 ns        91553 ns         2048
data |  7 | avx           6611 ns         7629 ns         2048
data |  7 |     tbb      20576 ns        22888 ns         2048
data |  7 | avx tbb       6948 ns         7629 ns         2048
mask |  7 |             175848 ns       175476 ns         2048
mask |  7 | avx           7353 ns        15259 ns         2048
mask |  7 |     tbb      41898 ns        45776 ns         2048
mask |  7 | avx tbb       7817 ns         7629 ns         2048

data |  8 |              73951 ns        83923 ns         2048
data |  8 | avx           6602 ns         7629 ns         2048
data |  8 |     tbb      19821 ns        22888 ns         2048
data |  8 | avx tbb       6866 ns        0.000 ns         2048
mask |  8 |             176895 ns       183105 ns         2048
mask |  8 | avx           7425 ns        15259 ns         2048
mask |  8 |     tbb      43199 ns        61035 ns         2048
mask |  8 | avx tbb       8022 ns        15259 ns         2048

data |  9 |              63860 ns        53406 ns         2048
data |  9 | avx           6516 ns        15259 ns         2048
data |  9 |     tbb      18425 ns        22888 ns         2048
data |  9 | avx tbb       7062 ns         7629 ns         2048
mask |  9 |             172399 ns       160217 ns         2048
mask |  9 | avx           7563 ns         7629 ns         2048
mask |  9 |     tbb      42156 ns        45776 ns         2048
mask |  9 | avx tbb       8009 ns        0.000 ns         2048

data | 10 |              60277 ns        68665 ns         2048
data | 10 | avx           6706 ns         7629 ns         2048
data | 10 |     tbb      17940 ns        22888 ns         2048
data | 10 | avx tbb       7034 ns         7629 ns         2048
mask | 10 |             175368 ns       175476 ns         2048
mask | 10 | avx           7550 ns        15259 ns         2048
mask | 10 |     tbb      42291 ns        38147 ns         2048
mask | 10 | avx tbb       8029 ns        15259 ns         2048

data | 11 |              52268 ns        45776 ns         2048
data | 11 | avx           7294 ns        15259 ns         2048
data | 11 |     tbb      17829 ns        22888 ns         2048
data | 11 | avx tbb       7325 ns        15259 ns         2048
mask | 11 |             174625 ns       183105 ns         2048
mask | 11 | avx           7390 ns         7629 ns         2048
mask | 11 |     tbb      42257 ns        30518 ns         2048
mask | 11 | avx tbb       7792 ns         7629 ns         2048

data | 12 |              50172 ns        53406 ns         2048
data | 12 | avx           6917 ns        15259 ns         2048
data | 12 |     tbb      16974 ns         7629 ns         2048
data | 12 | avx tbb       6900 ns        15259 ns         2048
mask | 12 |             175291 ns       183105 ns         2048
mask | 12 | avx           7405 ns        15259 ns         2048
mask | 12 |     tbb      42102 ns        45776 ns         2048
mask | 12 | avx tbb       7821 ns        15259 ns         2048

data | 13 |              47077 ns        45776 ns         2048
data | 13 | avx           7211 ns         7629 ns         2048
data | 13 |     tbb      16582 ns        15259 ns         2048
data | 13 | avx tbb       7329 ns        0.000 ns         2048
mask | 13 |             173790 ns       167847 ns         2048
mask | 13 | avx           7470 ns        15259 ns         2048
mask | 13 |     tbb      43653 ns        38147 ns         2048
mask | 13 | avx tbb       8246 ns        15259 ns         2048

data | 14 |              42607 ns        38147 ns         2048
data | 14 | avx           7162 ns         7629 ns         2048
data | 14 |     tbb      15957 ns        22888 ns         2048
data | 14 | avx tbb       6918 ns         7629 ns         2048
mask | 14 |             172930 ns       152588 ns         2048
mask | 14 | avx           7430 ns         7629 ns         2048
mask | 14 |     tbb      41967 ns        38147 ns         2048
mask | 14 | avx tbb       7740 ns         7629 ns         2048

data | 15 |              39797 ns        38147 ns         2048
data | 15 | avx           7400 ns        15259 ns         2048
data | 15 |     tbb      16027 ns         7629 ns         2048
data | 15 | avx tbb       7595 ns         7629 ns         2048
mask | 15 |             178896 ns       175476 ns         2048
mask | 15 | avx           7468 ns        0.000 ns         2048
mask | 15 |     tbb      42869 ns        53406 ns         2048
mask | 15 | avx tbb       8033 ns         7629 ns         2048

data | 16 |              36378 ns        38147 ns         2048
data | 16 | avx           6586 ns        0.000 ns         2048
data | 16 |     tbb      15424 ns         7629 ns         2048
data | 16 | avx tbb       7390 ns         7629 ns         2048
mask | 16 |             173874 ns       175476 ns         2048
mask | 16 | avx           7440 ns        0.000 ns         2048
mask | 16 |     tbb      42010 ns        53406 ns         2048
mask | 16 | avx tbb       7761 ns        0.000 ns         2048

data | 17 |              35937 ns        22888 ns         2048
data | 17 | avx           8137 ns        15259 ns         2048
data | 17 |     tbb      15350 ns        30518 ns         2048
data | 17 | avx tbb       8940 ns         7629 ns         2048
mask | 17 |             172996 ns       175476 ns         2048
mask | 17 | avx           7474 ns        15259 ns         2048
mask | 17 |     tbb      42937 ns        38147 ns         2048
mask | 17 | avx tbb       8082 ns        0.000 ns         2048

data | 18 |              33021 ns        30518 ns         2048
data | 18 | avx           7685 ns         7629 ns         2048
data | 18 |     tbb      15015 ns        15259 ns         2048
data | 18 | avx tbb       8690 ns        15259 ns         2048
mask | 18 |             176097 ns       160217 ns         2048
mask | 18 | avx           7380 ns        0.000 ns         2048
mask | 18 |     tbb      42647 ns        38147 ns         2048
mask | 18 | avx tbb       7751 ns         7629 ns         2048

data | 19 |              32259 ns        45776 ns         2048
data | 19 | avx           8218 ns        15259 ns         2048
data | 19 |     tbb      14972 ns        15259 ns         2048
data | 19 | avx tbb       8791 ns         7629 ns         2048
mask | 19 |             178004 ns       175476 ns         2048
mask | 19 | avx           7401 ns         7629 ns         2048
mask | 19 |     tbb      42709 ns        45776 ns         2048
mask | 19 | avx tbb       8160 ns        15259 ns         2048

data | 20 |              29445 ns        38147 ns         2048
data | 20 | avx           7782 ns        0.000 ns         2048
data | 20 |     tbb      14652 ns        22888 ns         2048
data | 20 | avx tbb       8817 ns        15259 ns         2048
mask | 20 |             172204 ns       183105 ns         2048
mask | 20 | avx           7497 ns         7629 ns         2048
mask | 20 |     tbb      42846 ns        53406 ns         2048
mask | 20 | avx tbb       7884 ns        15259 ns         2048

data | 21 |              29325 ns        30518 ns         2048
data | 21 | avx           8285 ns        15259 ns         2048
data | 21 |     tbb      14412 ns         7629 ns         2048
data | 21 | avx tbb       8757 ns         7629 ns         2048
mask | 21 |             175087 ns       167847 ns         2048
mask | 21 | avx           7537 ns        0.000 ns         2048
mask | 21 |     tbb      42607 ns        53406 ns         2048
mask | 21 | avx tbb       8019 ns         7629 ns         2048

data | 22 |              26983 ns        30518 ns         2048
data | 22 | avx           7682 ns        15259 ns         2048
data | 22 |     tbb      14304 ns        30518 ns         2048
data | 22 | avx tbb       8798 ns         7629 ns         2048
mask | 22 |             175308 ns       183105 ns         2048
mask | 22 | avx           7515 ns        0.000 ns         2048
mask | 22 |     tbb      42099 ns        61035 ns         2048
mask | 22 | avx tbb       7951 ns        15259 ns         2048

data | 23 |              26101 ns        22888 ns         2048
data | 23 | avx           8322 ns        15259 ns         2048
data | 23 |     tbb      14209 ns        22888 ns         2048
data | 23 | avx tbb       8907 ns        15259 ns         2048
mask | 23 |             177574 ns       183105 ns         2048
mask | 23 | avx           7520 ns         7629 ns         2048
mask | 23 |     tbb      42913 ns        53406 ns         2048
mask | 23 | avx tbb       8116 ns         7629 ns         2048

data | 24 |              25762 ns        30518 ns         2048
data | 24 | avx           7774 ns        0.000 ns         2048
data | 24 |     tbb      13917 ns        22888 ns         2048
data | 24 | avx tbb       8670 ns        0.000 ns         2048
mask | 24 |             174966 ns       175476 ns         2048
mask | 24 | avx           7427 ns         7629 ns         2048
mask | 24 |     tbb      42134 ns        38147 ns         2048
mask | 24 | avx tbb       7867 ns        0.000 ns         2048

data | 25 |              23925 ns        22888 ns         2048
data | 25 | avx           8144 ns        0.000 ns         2048
data | 25 |     tbb      14312 ns         7629 ns         2048
data | 25 | avx tbb       8866 ns         7629 ns         2048
mask | 25 |             173067 ns       160217 ns         2048
mask | 25 | avx           7423 ns        0.000 ns         2048
mask | 25 |     tbb      42603 ns        38147 ns         2048
mask | 25 | avx tbb       8038 ns         7629 ns         2048

data | 26 |              24734 ns        22888 ns         2048
data | 26 | avx           8185 ns         7629 ns         2048
data | 26 |     tbb      13675 ns        22888 ns         2048
data | 26 | avx tbb       8679 ns         7629 ns         2048
mask | 26 |             175843 ns       175476 ns         2048
mask | 26 | avx           7342 ns        15259 ns         2048
mask | 26 |     tbb      42007 ns        61035 ns         2048
mask | 26 | avx tbb       7684 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              16364 ns        15259 ns         1024
data |  1 | avx          16980 ns        0.000 ns         1024
data |  1 |     tbb      17419 ns        45776 ns         1024
data |  1 | avx tbb      17125 ns        30518 ns         1024
mask |  1 |              18158 ns        15259 ns         1024
mask |  1 | avx          16893 ns        30518 ns         1024
mask |  1 |     tbb      17816 ns        15259 ns         1024
mask |  1 | avx tbb      16671 ns        15259 ns         1024

data |  2 |            1128656 ns      1144409 ns         1024
data |  2 | avx          29747 ns        45776 ns         1024
data |  2 |     tbb     123294 ns       106812 ns         1024
data |  2 | avx tbb      17719 ns        15259 ns         1024
mask |  2 |             765688 ns       747681 ns         1024
mask |  2 | avx          31913 ns        30518 ns         1024
mask |  2 |     tbb     140411 ns       167847 ns         1024
mask |  2 | avx tbb      17561 ns        30518 ns         1024

data |  3 |             753201 ns       732422 ns         1024
data |  3 | avx          24313 ns        30518 ns         1024
data |  3 |     tbb      86411 ns       106812 ns         1024
data |  3 | avx tbb      17086 ns        45776 ns         1024
mask |  3 |             729433 ns       747681 ns         1024
mask |  3 | avx          27712 ns        15259 ns         1024
mask |  3 |     tbb     140954 ns       137329 ns         1024
mask |  3 | avx tbb      17199 ns        30518 ns         1024

data |  4 |             571338 ns       564575 ns         1024
data |  4 | avx          23629 ns        30518 ns         1024
data |  4 |     tbb      68195 ns        61035 ns         1024
data |  4 | avx tbb      17318 ns        15259 ns         1024
mask |  4 |             732286 ns       732422 ns         1024
mask |  4 | avx          27609 ns        30518 ns         1024
mask |  4 |     tbb     140028 ns       152588 ns         1024
mask |  4 | avx tbb      17438 ns        0.000 ns         1024

data |  5 |             454571 ns       473022 ns         1024
data |  5 | avx          23504 ns        30518 ns         1024
data |  5 |     tbb      57366 ns        61035 ns         1024
data |  5 | avx tbb      17056 ns        0.000 ns         1024
mask |  5 |             724813 ns       732422 ns         1024
mask |  5 | avx          27439 ns        15259 ns         1024
mask |  5 |     tbb     139335 ns       106812 ns         1024
mask |  5 | avx tbb      17271 ns        30518 ns         1024

data |  6 |             380849 ns       396729 ns         1024
data |  6 | avx          23295 ns        15259 ns         1024
data |  6 |     tbb      49976 ns        61035 ns         1024
data |  6 | avx tbb      18136 ns        0.000 ns         1024
mask |  6 |             731401 ns       732422 ns         1024
mask |  6 | avx          27478 ns        15259 ns         1024
mask |  6 |     tbb     141284 ns       137329 ns         1024
mask |  6 | avx tbb      17127 ns        30518 ns         1024

data |  7 |             324404 ns       335693 ns         1024
data |  7 | avx          23749 ns        30518 ns         1024
data |  7 |     tbb      45424 ns        76294 ns         1024
data |  7 | avx tbb      17187 ns        15259 ns         1024
mask |  7 |             749268 ns       717163 ns         1024
mask |  7 | avx          27695 ns        0.000 ns         1024
mask |  7 |     tbb     139925 ns       152588 ns         1024
mask |  7 | avx tbb      17186 ns        15259 ns         1024

data |  8 |             284295 ns       305176 ns         1024
data |  8 | avx          23689 ns        15259 ns         1024
data |  8 |     tbb      40871 ns        30518 ns         1024
data |  8 | avx tbb      17138 ns        15259 ns         1024
mask |  8 |             734361 ns       762939 ns         1024
mask |  8 | avx          27487 ns        45776 ns         1024
mask |  8 |     tbb     139315 ns       122070 ns         1024
mask |  8 | avx tbb      17656 ns        30518 ns         1024

data |  9 |             254580 ns       259399 ns         1024
data |  9 | avx          24295 ns        30518 ns         1024
data |  9 |     tbb      38702 ns        45776 ns         1024
data |  9 | avx tbb      17433 ns        15259 ns         1024
mask |  9 |             729020 ns       747681 ns         1024
mask |  9 | avx          27966 ns        30518 ns         1024
mask |  9 |     tbb     140288 ns       152588 ns         1024
mask |  9 | avx tbb      17061 ns        30518 ns         1024

data | 10 |             228511 ns       213623 ns         1024
data | 10 | avx          24234 ns        45776 ns         1024
data | 10 |     tbb      36538 ns        45776 ns         1024
data | 10 | avx tbb      17212 ns        30518 ns         1024
mask | 10 |             739425 ns       747681 ns         1024
mask | 10 | avx          27689 ns        30518 ns         1024
mask | 10 |     tbb     141382 ns       122070 ns         1024
mask | 10 | avx tbb      17095 ns        0.000 ns         1024

data | 11 |             210113 ns       213623 ns         1024
data | 11 | avx          23970 ns        15259 ns         1024
data | 11 |     tbb      34029 ns        15259 ns         1024
data | 11 | avx tbb      17092 ns        15259 ns         1024
mask | 11 |             751873 ns       762939 ns         1024
mask | 11 | avx          27221 ns        0.000 ns         1024
mask | 11 |     tbb     139606 ns       183105 ns         1024
mask | 11 | avx tbb      16963 ns        0.000 ns         1024

data | 12 |             192681 ns       213623 ns         1024
data | 12 | avx          24305 ns        30518 ns         1024
data | 12 |     tbb      31569 ns        15259 ns         1024
data | 12 | avx tbb      16990 ns        15259 ns         1024
mask | 12 |             723645 ns       701904 ns         1024
mask | 12 | avx          27474 ns        61035 ns         1024
mask | 12 |     tbb     139118 ns       152588 ns         1024
mask | 12 | avx tbb      17002 ns        0.000 ns         1024

data | 13 |             178949 ns       198364 ns         1024
data | 13 | avx          25573 ns        30518 ns         1024
data | 13 |     tbb      30189 ns        30518 ns         1024
data | 13 | avx tbb      17832 ns        30518 ns         1024
mask | 13 |             747749 ns       762939 ns         1024
mask | 13 | avx          27270 ns        15259 ns         1024
mask | 13 |     tbb     139226 ns       152588 ns         1024
mask | 13 | avx tbb      17077 ns        0.000 ns         1024

data | 14 |             166197 ns       167847 ns         1024
data | 14 | avx          23630 ns        30518 ns         1024
data | 14 |     tbb      29068 ns        45776 ns         1024
data | 14 | avx tbb      17387 ns        30518 ns         1024
mask | 14 |             716622 ns       732422 ns         1024
mask | 14 | avx          27659 ns        45776 ns         1024
mask | 14 |     tbb     139598 ns       152588 ns         1024
mask | 14 | avx tbb      17279 ns        0.000 ns         1024

data | 15 |             155324 ns       167847 ns         1024
data | 15 | avx          23782 ns        0.000 ns         1024
data | 15 |     tbb      28089 ns        0.000 ns         1024
data | 15 | avx tbb      17154 ns        0.000 ns         1024
mask | 15 |             741649 ns       732422 ns         1024
mask | 15 | avx          27367 ns        15259 ns         1024
mask | 15 |     tbb     139531 ns       106812 ns         1024
mask | 15 | avx tbb      17056 ns        30518 ns         1024

data | 16 |             146025 ns       167847 ns         1024
data | 16 | avx          24215 ns        61035 ns         1024
data | 16 |     tbb      26906 ns        15259 ns         1024
data | 16 | avx tbb      17161 ns        15259 ns         1024
mask | 16 |             730500 ns       762939 ns         1024
mask | 16 | avx          27639 ns        15259 ns         1024
mask | 16 |     tbb     139585 ns       167847 ns         1024
mask | 16 | avx tbb      17179 ns        0.000 ns         1024

data | 17 |             137494 ns       167847 ns         1024
data | 17 | avx          28293 ns        30518 ns         1024
data | 17 |     tbb      26573 ns        45776 ns         1024
data | 17 | avx tbb      17387 ns        30518 ns         1024
mask | 17 |             732238 ns       701904 ns         1024
mask | 17 | avx          27219 ns        0.000 ns         1024
mask | 17 |     tbb     139807 ns       152588 ns         1024
mask | 17 | avx tbb      17533 ns        0.000 ns         1024

data | 18 |             129320 ns       122070 ns         1024
data | 18 | avx          28081 ns        0.000 ns         1024
data | 18 |     tbb      25815 ns        30518 ns         1024
data | 18 | avx tbb      17925 ns        15259 ns         1024
mask | 18 |             724294 ns       732422 ns         1024
mask | 18 | avx          27823 ns        45776 ns         1024
mask | 18 |     tbb     140789 ns       198364 ns         1024
mask | 18 | avx tbb      17215 ns        0.000 ns         1024

data | 19 |             122181 ns       106812 ns         1024
data | 19 | avx          28192 ns        0.000 ns         1024
data | 19 |     tbb      25967 ns        0.000 ns         1024
data | 19 | avx tbb      17520 ns        15259 ns         1024
mask | 19 |             728931 ns       732422 ns         1024
mask | 19 | avx          27425 ns        0.000 ns         1024
mask | 19 |     tbb     139223 ns       152588 ns         1024
mask | 19 | avx tbb      17523 ns        30518 ns         1024

data | 20 |             118469 ns       122070 ns         1024
data | 20 | avx          27791 ns        45776 ns         1024
data | 20 |     tbb      26037 ns        15259 ns         1024
data | 20 | avx tbb      17374 ns        15259 ns         1024
mask | 20 |             733311 ns       747681 ns         1024
mask | 20 | avx          26794 ns        30518 ns         1024
mask | 20 |     tbb     140404 ns       122070 ns         1024
mask | 20 | avx tbb      17262 ns        15259 ns         1024

data | 21 |             111139 ns        91553 ns         1024
data | 21 | avx          27819 ns        0.000 ns         1024
data | 21 |     tbb      23963 ns        30518 ns         1024
data | 21 | avx tbb      17708 ns        30518 ns         1024
mask | 21 |             732965 ns       717163 ns         1024
mask | 21 | avx          27109 ns        45776 ns         1024
mask | 21 |     tbb     139407 ns       152588 ns         1024
mask | 21 | avx tbb      17052 ns        0.000 ns         1024

data | 22 |             106289 ns       122070 ns         1024
data | 22 | avx          27864 ns        30518 ns         1024
data | 22 |     tbb      23682 ns        30518 ns         1024
data | 22 | avx tbb      17457 ns        15259 ns         1024
mask | 22 |             731400 ns       686646 ns         1024
mask | 22 | avx          27204 ns        45776 ns         1024
mask | 22 |     tbb     139474 ns       167847 ns         1024
mask | 22 | avx tbb      16897 ns        15259 ns         1024

data | 23 |             103654 ns       122070 ns         1024
data | 23 | avx          27786 ns        30518 ns         1024
data | 23 |     tbb      23151 ns        30518 ns         1024
data | 23 | avx tbb      17517 ns        15259 ns         1024
mask | 23 |             729250 ns       671387 ns         1024
mask | 23 | avx          27684 ns        0.000 ns         1024
mask | 23 |     tbb     140039 ns       137329 ns         1024
mask | 23 | avx tbb      17042 ns        15259 ns         1024

data | 24 |              98957 ns        61035 ns         1024
data | 24 | avx          28285 ns        45776 ns         1024
data | 24 |     tbb      23238 ns        30518 ns         1024
data | 24 | avx tbb      17417 ns        45776 ns         1024
mask | 24 |             742750 ns       747681 ns         1024
mask | 24 | avx          27442 ns        15259 ns         1024
mask | 24 |     tbb     140039 ns       167847 ns         1024
mask | 24 | avx tbb      17018 ns        15259 ns         1024

data | 25 |              94954 ns       122070 ns         1024
data | 25 | avx          28049 ns        15259 ns         1024
data | 25 |     tbb      23194 ns        45776 ns         1024
data | 25 | avx tbb      17596 ns        15259 ns         1024
mask | 25 |             745236 ns       747681 ns         1024
mask | 25 | avx          27480 ns        30518 ns         1024
mask | 25 |     tbb     140493 ns       122070 ns         1024
mask | 25 | avx tbb      17088 ns        30518 ns         1024

data | 26 |              91883 ns       106812 ns         1024
data | 26 | avx          28436 ns        30518 ns         1024
data | 26 |     tbb      22674 ns        30518 ns         1024
data | 26 | avx tbb      17999 ns        0.000 ns         1024
mask | 26 |             732341 ns       732422 ns         1024
mask | 26 | avx          27371 ns        30518 ns         1024
mask | 26 |     tbb     141362 ns       167847 ns         1024
mask | 26 | avx tbb      17377 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             167427 ns       183105 ns          512
data |  1 | avx         166808 ns       122070 ns          512
data |  1 |     tbb     175630 ns       213623 ns          512
data |  1 | avx tbb     154653 ns       152588 ns          512
mask |  1 |             166700 ns       122070 ns          512
mask |  1 | avx         165903 ns       213623 ns          512
mask |  1 |     tbb     175646 ns       183105 ns          512
mask |  1 | avx tbb     154919 ns       122070 ns          512

data |  2 |            4509479 ns      4486084 ns          512
data |  2 | avx         206308 ns       122070 ns          512
data |  2 |     tbb     493778 ns       579834 ns          512
data |  2 | avx tbb     158705 ns       183105 ns          512
mask |  2 |            3166368 ns      3204346 ns          512
mask |  2 | avx         215848 ns       274658 ns          512
mask |  2 |     tbb     570246 ns       610352 ns          512
mask |  2 | avx tbb     158564 ns       244141 ns          512

data |  3 |            3001386 ns      3051758 ns          512
data |  3 | avx         188063 ns       305176 ns          512
data |  3 |     tbb     350687 ns       457764 ns          512
data |  3 | avx tbb     157429 ns       152588 ns          512
mask |  3 |            3111141 ns      3082275 ns          512
mask |  3 | avx         193986 ns       122070 ns          512
mask |  3 |     tbb     570956 ns       579834 ns          512
mask |  3 | avx tbb     157687 ns       183105 ns          512

data |  4 |            2258337 ns      2075195 ns          512
data |  4 | avx         187528 ns       183105 ns          512
data |  4 |     tbb     279073 ns       244141 ns          512
data |  4 | avx tbb     158476 ns       122070 ns          512
mask |  4 |            3158221 ns      3173828 ns          512
mask |  4 | avx         197932 ns       274658 ns          512
mask |  4 |     tbb     567532 ns       640869 ns          512
mask |  4 | avx tbb     157584 ns       183105 ns          512

data |  5 |            1813523 ns      1831055 ns          512
data |  5 | avx         186737 ns       183105 ns          512
data |  5 |     tbb     243346 ns       305176 ns          512
data |  5 | avx tbb     158033 ns       183105 ns          512
mask |  5 |            3204480 ns      3082275 ns          512
mask |  5 | avx         198516 ns       152588 ns          512
mask |  5 |     tbb     565118 ns       549316 ns          512
mask |  5 | avx tbb     157490 ns       213623 ns          512

data |  6 |            1520110 ns      1647949 ns          512
data |  6 | avx         189167 ns       213623 ns          512
data |  6 |     tbb     223005 ns       183105 ns          512
data |  6 | avx tbb     157862 ns       122070 ns          512
mask |  6 |            3039543 ns      3051758 ns          512
mask |  6 | avx         197816 ns       305176 ns          512
mask |  6 |     tbb     568621 ns       610352 ns          512
mask |  6 | avx tbb     156637 ns       183105 ns          512

data |  7 |            1308807 ns      1312256 ns          512
data |  7 | avx         186970 ns       122070 ns          512
data |  7 |     tbb     211626 ns       274658 ns          512
data |  7 | avx tbb     157374 ns       122070 ns          512
mask |  7 |            3039014 ns      3112793 ns          512
mask |  7 | avx         197887 ns       274658 ns          512
mask |  7 |     tbb     570197 ns       579834 ns          512
mask |  7 | avx tbb     156371 ns       152588 ns          512

data |  8 |            1148370 ns      1098633 ns          512
data |  8 | avx         187551 ns       274658 ns          512
data |  8 |     tbb     204468 ns       122070 ns          512
data |  8 | avx tbb     157883 ns       213623 ns          512
mask |  8 |            3138216 ns      3112793 ns          512
mask |  8 | avx         195710 ns       213623 ns          512
mask |  8 |     tbb     566614 ns       549316 ns          512
mask |  8 | avx tbb     157441 ns        91553 ns          512

data |  9 |            1016537 ns       946045 ns          512
data |  9 | avx         189814 ns       213623 ns          512
data |  9 |     tbb     205977 ns       274658 ns          512
data |  9 | avx tbb     157604 ns        61035 ns          512
mask |  9 |            3155923 ns      3112793 ns          512
mask |  9 | avx         199315 ns       274658 ns          512
mask |  9 |     tbb     567600 ns       457764 ns          512
mask |  9 | avx tbb     157732 ns       213623 ns          512

data | 10 |             925166 ns       946045 ns          512
data | 10 | avx         188296 ns       183105 ns          512
data | 10 |     tbb     200926 ns       122070 ns          512
data | 10 | avx tbb     159334 ns       152588 ns          512
mask | 10 |            3078630 ns      3112793 ns          512
mask | 10 | avx         195736 ns       122070 ns          512
mask | 10 |     tbb     566461 ns       396729 ns          512
mask | 10 | avx tbb     158056 ns        91553 ns          512

data | 11 |             855154 ns       885010 ns          512
data | 11 | avx         190740 ns       213623 ns          512
data | 11 |     tbb     193854 ns        61035 ns          512
data | 11 | avx tbb     157010 ns       122070 ns          512
mask | 11 |            3126665 ns      3173828 ns          512
mask | 11 | avx         194440 ns       152588 ns          512
mask | 11 |     tbb     565507 ns       579834 ns          512
mask | 11 | avx tbb     156855 ns       183105 ns          512

data | 12 |             779602 ns       793457 ns          512
data | 12 | avx         186341 ns       213623 ns          512
data | 12 |     tbb     199680 ns       274658 ns          512
data | 12 | avx tbb     157128 ns       122070 ns          512
mask | 12 |            3123906 ns      3082275 ns          512
mask | 12 | avx         198258 ns       213623 ns          512
mask | 12 |     tbb     564994 ns       518799 ns          512
mask | 12 | avx tbb     157121 ns       213623 ns          512

data | 13 |             722067 ns       671387 ns          512
data | 13 | avx         187845 ns        91553 ns          512
data | 13 |     tbb     198854 ns       213623 ns          512
data | 13 | avx tbb     157344 ns       213623 ns          512
mask | 13 |            3121012 ns      3204346 ns          512
mask | 13 | avx         196975 ns       244141 ns          512
mask | 13 |     tbb     568822 ns       518799 ns          512
mask | 13 | avx tbb     156453 ns       152588 ns          512

data | 14 |             676893 ns       732422 ns          512
data | 14 | avx         189122 ns       183105 ns          512
data | 14 |     tbb     196526 ns       183105 ns          512
data | 14 | avx tbb     158111 ns        91553 ns          512
mask | 14 |            3203939 ns      3112793 ns          512
mask | 14 | avx         199359 ns       244141 ns          512
mask | 14 |     tbb     568011 ns       640869 ns          512
mask | 14 | avx tbb     158197 ns       122070 ns          512

data | 15 |             631757 ns       457764 ns          512
data | 15 | avx         188621 ns       274658 ns          512
data | 15 |     tbb     194666 ns       305176 ns          512
data | 15 | avx tbb     157853 ns        91553 ns          512
mask | 15 |            3151653 ns      3265381 ns          512
mask | 15 | avx         197566 ns       152588 ns          512
mask | 15 |     tbb     568587 ns       640869 ns          512
mask | 15 | avx tbb     157013 ns        30518 ns          512

data | 16 |             601871 ns       610352 ns          512
data | 16 | avx         186419 ns       122070 ns          512
data | 16 |     tbb     195415 ns       183105 ns          512
data | 16 | avx tbb     158218 ns       183105 ns          512
mask | 16 |            3117770 ns      3204346 ns          512
mask | 16 | avx         195981 ns       122070 ns          512
mask | 16 |     tbb     566434 ns       610352 ns          512
mask | 16 | avx tbb     157779 ns       152588 ns          512

data | 17 |             562134 ns       671387 ns          512
data | 17 | avx         197604 ns        61035 ns          512
data | 17 |     tbb     195752 ns        91553 ns          512
data | 17 | avx tbb     159950 ns       183105 ns          512
mask | 17 |            3099247 ns      3204346 ns          512
mask | 17 | avx         198293 ns       152588 ns          512
mask | 17 |     tbb     567739 ns       640869 ns          512
mask | 17 | avx tbb     157712 ns       183105 ns          512

data | 18 |             530901 ns       457764 ns          512
data | 18 | avx         197562 ns       244141 ns          512
data | 18 |     tbb     193179 ns       122070 ns          512
data | 18 | avx tbb     159909 ns       213623 ns          512
mask | 18 |            3076581 ns      3173828 ns          512
mask | 18 | avx         196582 ns       244141 ns          512
mask | 18 |     tbb     568223 ns       701904 ns          512
mask | 18 | avx tbb     157712 ns       152588 ns          512

data | 19 |             504846 ns       549316 ns          512
data | 19 | avx         199557 ns       183105 ns          512
data | 19 |     tbb     191279 ns       183105 ns          512
data | 19 | avx tbb     160331 ns       183105 ns          512
mask | 19 |            3172011 ns      3204346 ns          512
mask | 19 | avx         198352 ns       213623 ns          512
mask | 19 |     tbb     567336 ns       640869 ns          512
mask | 19 | avx tbb     157807 ns       213623 ns          512

data | 20 |             481423 ns       518799 ns          512
data | 20 | avx         198097 ns       213623 ns          512
data | 20 |     tbb     193055 ns       244141 ns          512
data | 20 | avx tbb     158200 ns        91553 ns          512
mask | 20 |            3093479 ns      3021240 ns          512
mask | 20 | avx         196914 ns       213623 ns          512
mask | 20 |     tbb     565752 ns       579834 ns          512
mask | 20 | avx tbb     159257 ns       152588 ns          512

data | 21 |             460476 ns       427246 ns          512
data | 21 | avx         198676 ns        61035 ns          512
data | 21 |     tbb     195590 ns       183105 ns          512
data | 21 | avx tbb     158317 ns       183105 ns          512
mask | 21 |            3108217 ns      3234863 ns          512
mask | 21 | avx         197760 ns       213623 ns          512
mask | 21 |     tbb     566928 ns       610352 ns          512
mask | 21 | avx tbb     157971 ns       122070 ns          512

data | 22 |             443613 ns       366211 ns          512
data | 22 | avx         195854 ns       274658 ns          512
data | 22 |     tbb     195829 ns        61035 ns          512
data | 22 | avx tbb     159929 ns       183105 ns          512
mask | 22 |            3188379 ns      3112793 ns          512
mask | 22 | avx         196673 ns        61035 ns          512
mask | 22 |     tbb     569157 ns       640869 ns          512
mask | 22 | avx tbb     157877 ns       213623 ns          512

data | 23 |             439552 ns       427246 ns          512
data | 23 | avx         196692 ns       244141 ns          512
data | 23 |     tbb     189272 ns       183105 ns          512
data | 23 | avx tbb     159638 ns       213623 ns          512
mask | 23 |            3099873 ns      3082275 ns          512
mask | 23 | avx         195246 ns       152588 ns          512
mask | 23 |     tbb     570508 ns       610352 ns          512
mask | 23 | avx tbb     157735 ns       152588 ns          512

data | 24 |             413780 ns       366211 ns          512
data | 24 | avx         196189 ns       244141 ns          512
data | 24 |     tbb     192327 ns       244141 ns          512
data | 24 | avx tbb     158139 ns       152588 ns          512
mask | 24 |            3092818 ns      3204346 ns          512
mask | 24 | avx         197864 ns       183105 ns          512
mask | 24 |     tbb     564814 ns       732422 ns          512
mask | 24 | avx tbb     157472 ns       122070 ns          512

data | 25 |             405775 ns       366211 ns          512
data | 25 | avx         198589 ns       183105 ns          512
data | 25 |     tbb     195677 ns       183105 ns          512
data | 25 | avx tbb     158664 ns       213623 ns          512
mask | 25 |            3131915 ns      3051758 ns          512
mask | 25 | avx         195401 ns       244141 ns          512
mask | 25 |     tbb     565678 ns       610352 ns          512
mask | 25 | avx tbb     158141 ns       122070 ns          512

data | 26 |             392752 ns       366211 ns          512
data | 26 | avx         198838 ns       274658 ns          512
data | 26 |     tbb     189939 ns       122070 ns          512
data | 26 | avx tbb     158103 ns        91553 ns          512
mask | 26 |            3122120 ns      3082275 ns          512
mask | 26 | avx         195605 ns       183105 ns          512
mask | 26 |     tbb     564457 ns       488281 ns          512
mask | 26 | avx tbb     157631 ns        61035 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             669970 ns       488281 ns           64
data |  1 | avx         662420 ns       488281 ns           64
data |  1 |     tbb     632455 ns       976562 ns           64
data |  1 | avx tbb     616450 ns       732422 ns           64
mask |  1 |             673175 ns       488281 ns           64
mask |  1 | avx         665737 ns       488281 ns           64
mask |  1 |     tbb     625025 ns       976562 ns           64
mask |  1 | avx tbb     614678 ns       488281 ns           64

data |  2 |           18019302 ns     17822266 ns           64
data |  2 | avx         835598 ns       976562 ns           64
data |  2 |     tbb    1852063 ns      2197266 ns           64
data |  2 | avx tbb     626939 ns       488281 ns           64
mask |  2 |           12251194 ns     11718750 ns           64
mask |  2 | avx         857897 ns       732422 ns           64
mask |  2 |     tbb    2128698 ns      2197266 ns           64
mask |  2 | avx tbb     596781 ns       732422 ns           64

data |  3 |           11998147 ns     12207031 ns           64
data |  3 | avx         760642 ns       732422 ns           64
data |  3 |     tbb    1284044 ns       732422 ns           64
data |  3 | avx tbb     626183 ns       488281 ns           64
mask |  3 |           12437505 ns     12695312 ns           64
mask |  3 | avx         791967 ns       732422 ns           64
mask |  3 |     tbb    2114809 ns      2685547 ns           64
mask |  3 | avx tbb     613053 ns       488281 ns           64

data |  4 |            9118489 ns      9033203 ns           64
data |  4 | avx         767941 ns      1220703 ns           64
data |  4 |     tbb    1015961 ns       976562 ns           64
data |  4 | avx tbb     623673 ns       488281 ns           64
mask |  4 |           12949181 ns     13427734 ns           64
mask |  4 | avx         799450 ns       976562 ns           64
mask |  4 |     tbb    2133948 ns      2685547 ns           64
mask |  4 | avx tbb     593353 ns       488281 ns           64

data |  5 |            7225672 ns      7568359 ns           64
data |  5 | avx         762541 ns       732422 ns           64
data |  5 |     tbb     846425 ns       244141 ns           64
data |  5 | avx tbb     627027 ns       488281 ns           64
mask |  5 |           12814161 ns     12939453 ns           64
mask |  5 | avx         796902 ns       732422 ns           64
mask |  5 |     tbb    2117856 ns      2441406 ns           64
mask |  5 | avx tbb     601698 ns       732422 ns           64

data |  6 |            6057227 ns      6103516 ns           64
data |  6 | avx         763481 ns       976562 ns           64
data |  6 |     tbb     743470 ns       488281 ns           64
data |  6 | avx tbb     622220 ns       244141 ns           64
mask |  6 |           12607873 ns     12207031 ns           64
mask |  6 | avx         786233 ns       732422 ns           64
mask |  6 |     tbb    2121997 ns      2441406 ns           64
mask |  6 | avx tbb     597805 ns       488281 ns           64

data |  7 |            5230911 ns      6103516 ns           64
data |  7 | avx         765195 ns       976562 ns           64
data |  7 |     tbb     724942 ns       488281 ns           64
data |  7 | avx tbb     627122 ns       732422 ns           64
mask |  7 |           12658580 ns     12695312 ns           64
mask |  7 | avx         783672 ns       244141 ns           64
mask |  7 |     tbb    2153045 ns      2685547 ns           64
mask |  7 | avx tbb     595459 ns       732422 ns           64

data |  8 |            4582973 ns      5126953 ns           64
data |  8 | avx         761389 ns      1220703 ns           64
data |  8 |     tbb     708355 ns       732422 ns           64
data |  8 | avx tbb     627972 ns       732422 ns           64
mask |  8 |           12246527 ns     12451172 ns           64
mask |  8 | avx         797556 ns      1220703 ns           64
mask |  8 |     tbb    2123594 ns      2685547 ns           64
mask |  8 | avx tbb     609050 ns       732422 ns           64

data |  9 |            4156789 ns      3906250 ns           64
data |  9 | avx         752925 ns       732422 ns           64
data |  9 |     tbb     704731 ns       488281 ns           64
data |  9 | avx tbb     628155 ns       488281 ns           64
mask |  9 |           12828956 ns     12695312 ns           64
mask |  9 | avx         802534 ns       244141 ns           64
mask |  9 |     tbb    2122913 ns      2685547 ns           64
mask |  9 | avx tbb     602745 ns       488281 ns           64

data | 10 |            3652459 ns      3417969 ns           64
data | 10 | avx         752183 ns      1220703 ns           64
data | 10 |     tbb     696937 ns       244141 ns           64
data | 10 | avx tbb     630044 ns       976562 ns           64
mask | 10 |           12665625 ns     12695312 ns           64
mask | 10 | avx         802788 ns      1220703 ns           64
mask | 10 |     tbb    2120637 ns      2441406 ns           64
mask | 10 | avx tbb     603978 ns       488281 ns           64

data | 11 |            3421228 ns      3662109 ns           64
data | 11 | avx         758787 ns       732422 ns           64
data | 11 |     tbb     686822 ns       244141 ns           64
data | 11 | avx tbb     627353 ns       488281 ns           64
mask | 11 |           12314623 ns     12451172 ns           64
mask | 11 | avx         790697 ns       732422 ns           64
mask | 11 |     tbb    2128581 ns      1953125 ns           64
mask | 11 | avx tbb     593781 ns       976562 ns           64

data | 12 |            3096395 ns      3662109 ns           64
data | 12 | avx         754225 ns       976562 ns           64
data | 12 |     tbb     678828 ns       976562 ns           64
data | 12 | avx tbb     623952 ns       732422 ns           64
mask | 12 |           12457577 ns     12207031 ns           64
mask | 12 | avx         787252 ns       976562 ns           64
mask | 12 |     tbb    2133616 ns      1708984 ns           64
mask | 12 | avx tbb     603747 ns       732422 ns           64

data | 13 |            2936158 ns      2441406 ns           64
data | 13 | avx         761527 ns       488281 ns           64
data | 13 |     tbb     683589 ns       488281 ns           64
data | 13 | avx tbb     624938 ns       732422 ns           64
mask | 13 |           12576038 ns     12451172 ns           64
mask | 13 | avx         780822 ns       976562 ns           64
mask | 13 |     tbb    2132086 ns      1953125 ns           64
mask | 13 | avx tbb     598844 ns       488281 ns           64

data | 14 |            2746958 ns      2441406 ns           64
data | 14 | avx         753581 ns       976562 ns           64
data | 14 |     tbb     683600 ns      1220703 ns           64
data | 14 | avx tbb     627559 ns      1464844 ns           64
mask | 14 |           12581963 ns     13671875 ns           64
mask | 14 | avx         793339 ns       976562 ns           64
mask | 14 |     tbb    2130863 ns      2441406 ns           64
mask | 14 | avx tbb     602119 ns       732422 ns           64

data | 15 |            2513209 ns      2685547 ns           64
data | 15 | avx         764270 ns       488281 ns           64
data | 15 |     tbb     691852 ns       976562 ns           64
data | 15 | avx tbb     626711 ns       732422 ns           64
mask | 15 |           12496600 ns     11474609 ns           64
mask | 15 | avx         781511 ns       732422 ns           64
mask | 15 |     tbb    2138044 ns      2441406 ns           64
mask | 15 | avx tbb     604222 ns       732422 ns           64

data | 16 |            2427342 ns      2197266 ns           64
data | 16 | avx         763895 ns       976562 ns           64
data | 16 |     tbb     684650 ns       732422 ns           64
data | 16 | avx tbb     627320 ns       732422 ns           64
mask | 16 |           12662212 ns     13671875 ns           64
mask | 16 | avx         789700 ns       732422 ns           64
mask | 16 |     tbb    2138822 ns      2685547 ns           64
mask | 16 | avx tbb     616017 ns       488281 ns           64

data | 17 |            2283234 ns      3173828 ns           64
data | 17 | avx         781303 ns      1220703 ns           64
data | 17 |     tbb     692142 ns       732422 ns           64
data | 17 | avx tbb     631302 ns      1220703 ns           64
mask | 17 |           12184897 ns     11962891 ns           64
mask | 17 | avx         798780 ns       732422 ns           64
mask | 17 |     tbb    2128709 ns      2685547 ns           64
mask | 17 | avx tbb     599259 ns       488281 ns           64

data | 18 |            2092902 ns      2441406 ns           64
data | 18 | avx         787502 ns       488281 ns           64
data | 18 |     tbb     675122 ns       488281 ns           64
data | 18 | avx tbb     630258 ns       732422 ns           64
mask | 18 |           12727653 ns     13183594 ns           64
mask | 18 | avx         785348 ns       732422 ns           64
mask | 18 |     tbb    2136048 ns      1953125 ns           64
mask | 18 | avx tbb     619955 ns       732422 ns           64

data | 19 |            2054013 ns      1708984 ns           64
data | 19 | avx         816164 ns       976562 ns           64
data | 19 |     tbb     678980 ns       732422 ns           64
data | 19 | avx tbb     632692 ns       244141 ns           64
mask | 19 |           12988920 ns     13183594 ns           64
mask | 19 | avx         800027 ns       488281 ns           64
mask | 19 |     tbb    2128588 ns      1708984 ns           64
mask | 19 | avx tbb     596027 ns       488281 ns           64

data | 20 |            1930925 ns      1708984 ns           64
data | 20 | avx         771502 ns       732422 ns           64
data | 20 |     tbb     681473 ns       976562 ns           64
data | 20 | avx tbb     631547 ns       732422 ns           64
mask | 20 |           12305477 ns     13183594 ns           64
mask | 20 | avx         804197 ns      1464844 ns           64
mask | 20 |     tbb    2139200 ns      1953125 ns           64
mask | 20 | avx tbb     591406 ns       732422 ns           64

data | 21 |            1948609 ns      1464844 ns           64
data | 21 | avx         864270 ns       976562 ns           64
data | 21 |     tbb     678236 ns       732422 ns           64
data | 21 | avx tbb     645763 ns       488281 ns           64
mask | 21 |           12981755 ns     12939453 ns           64
mask | 21 | avx         787077 ns       732422 ns           64
mask | 21 |     tbb    2134792 ns      2685547 ns           64
mask | 21 | avx tbb     604878 ns       488281 ns           64

data | 22 |            1836719 ns      1464844 ns           64
data | 22 | avx         794550 ns       244141 ns           64
data | 22 |     tbb     674467 ns       732422 ns           64
data | 22 | avx tbb     630380 ns       488281 ns           64
mask | 22 |           12890100 ns     13671875 ns           64
mask | 22 | avx         792186 ns        0.000 ns           64
mask | 22 |     tbb    2127834 ns      2441406 ns           64
mask | 22 | avx tbb     616931 ns       732422 ns           64

data | 23 |            1776761 ns      1220703 ns           64
data | 23 | avx         821053 ns      1708984 ns           64
data | 23 |     tbb     666081 ns      1220703 ns           64
data | 23 | avx tbb     630825 ns       488281 ns           64
mask | 23 |           12565672 ns     13671875 ns           64
mask | 23 | avx         802338 ns       732422 ns           64
mask | 23 |     tbb    2130217 ns      2197266 ns           64
mask | 23 | avx tbb     594986 ns       488281 ns           64

data | 24 |            1662811 ns      1953125 ns           64
data | 24 | avx         783097 ns      1220703 ns           64
data | 24 |     tbb     677528 ns       732422 ns           64
data | 24 | avx tbb     632989 ns       732422 ns           64
mask | 24 |           12284589 ns     12695312 ns           64
mask | 24 | avx         794981 ns       976562 ns           64
mask | 24 |     tbb    2135666 ns      2685547 ns           64
mask | 24 | avx tbb     591542 ns       732422 ns           64

data | 25 |            1593491 ns      2685547 ns           64
data | 25 | avx         774637 ns       976562 ns           64
data | 25 |     tbb     664439 ns       732422 ns           64
data | 25 | avx tbb     632666 ns       976562 ns           64
mask | 25 |           13118564 ns     12695312 ns           64
mask | 25 | avx         797273 ns      1464844 ns           64
mask | 25 |     tbb    2169231 ns       976562 ns           64
mask | 25 | avx tbb     604719 ns       732422 ns           64

data | 26 |            1592022 ns      2441406 ns           64
data | 26 | avx         787703 ns       488281 ns           64
data | 26 |     tbb     673714 ns       244141 ns           64
data | 26 | avx tbb     639506 ns       488281 ns           64
mask | 26 |           12675269 ns     12695312 ns           64
mask | 26 | avx         809278 ns       488281 ns           64
mask | 26 |     tbb    2123502 ns      2197266 ns           64
mask | 26 | avx tbb     608745 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2686350 ns      3906250 ns           32
data |  1 | avx        2670178 ns      2441406 ns           32
data |  1 |     tbb    2343366 ns      1953125 ns           32
data |  1 | avx tbb    2346659 ns      1953125 ns           32
mask |  1 |            2650369 ns      3417969 ns           32
mask |  1 | avx        2633584 ns      2441406 ns           32
mask |  1 |     tbb    2356169 ns      1464844 ns           32
mask |  1 | avx tbb    2348853 ns      2929688 ns           32

data |  2 |           71870981 ns     72265625 ns           32
data |  2 | avx        3268172 ns      3906250 ns           32
data |  2 |     tbb    7011406 ns      6835938 ns           32
data |  2 | avx tbb    2381509 ns      2929688 ns           32
mask |  2 |           49639281 ns     51269531 ns           32
mask |  2 | avx        3469344 ns      3906250 ns           32
mask |  2 |     tbb    8281300 ns      7324219 ns           32
mask |  2 | avx tbb    2366681 ns      1464844 ns           32

data |  3 |           47977675 ns     47851562 ns           32
data |  3 | avx        3027716 ns      4394531 ns           32
data |  3 |     tbb    4782381 ns      5371094 ns           32
data |  3 | avx tbb    2345072 ns      1953125 ns           32
mask |  3 |           49877122 ns     48828125 ns           32
mask |  3 | avx        3149616 ns       976562 ns           32
mask |  3 |     tbb    8194538 ns      8300781 ns           32
mask |  3 | avx tbb    2350781 ns      2929688 ns           32

data |  4 |           36021091 ns     35644531 ns           32
data |  4 | avx        3044650 ns      5859375 ns           32
data |  4 |     tbb    3598875 ns      1953125 ns           32
data |  4 | avx tbb    2348503 ns      2441406 ns           32
mask |  4 |           48827775 ns     48828125 ns           32
mask |  4 | avx        3180731 ns      3417969 ns           32
mask |  4 |     tbb    8290984 ns      7812500 ns           32
mask |  4 | avx tbb    2357809 ns      2441406 ns           32

data |  5 |           28930844 ns     29296875 ns           32
data |  5 | avx        3026781 ns        0.000 ns           32
data |  5 |     tbb    2966175 ns      6347656 ns           32
data |  5 | avx tbb    2361819 ns      3417969 ns           32
mask |  5 |           48529344 ns     48828125 ns           32
mask |  5 | avx        3165941 ns      2929688 ns           32
mask |  5 |     tbb    8220397 ns      8789062 ns           32
mask |  5 | avx tbb    2350672 ns      1464844 ns           32

data |  6 |           24127275 ns     24414062 ns           32
data |  6 | avx        3056578 ns      7324219 ns           32
data |  6 |     tbb    2671400 ns      2929688 ns           32
data |  6 | avx tbb    2372116 ns      1953125 ns           32
mask |  6 |           50348200 ns     51269531 ns           32
mask |  6 | avx        3174378 ns      3906250 ns           32
mask |  6 |     tbb    8294578 ns      7812500 ns           32
mask |  6 | avx tbb    2352231 ns      2441406 ns           32

data |  7 |           20909978 ns     20996094 ns           32
data |  7 | avx        3035322 ns       976562 ns           32
data |  7 |     tbb    2646597 ns      2441406 ns           32
data |  7 | avx tbb    2358491 ns      2441406 ns           32
mask |  7 |           50047194 ns     48339844 ns           32
mask |  7 | avx        3121078 ns      5371094 ns           32
mask |  7 |     tbb    8256428 ns      8300781 ns           32
mask |  7 | avx tbb    2366931 ns      1464844 ns           32

data |  8 |           18226950 ns     18554688 ns           32
data |  8 | avx        3172016 ns      7812500 ns           32
data |  8 |     tbb    2534494 ns      1953125 ns           32
data |  8 | avx tbb    2365703 ns      1953125 ns           32
mask |  8 |           52189972 ns     52246094 ns           32
mask |  8 | avx        3183534 ns      2929688 ns           32
mask |  8 |     tbb    8281869 ns      7324219 ns           32
mask |  8 | avx tbb    2349444 ns      1953125 ns           32

data |  9 |           16162997 ns     16113281 ns           32
data |  9 | avx        3019309 ns        0.000 ns           32
data |  9 |     tbb    2495219 ns      1953125 ns           32
data |  9 | avx tbb    2380687 ns      2929688 ns           32
mask |  9 |           48451378 ns     47851562 ns           32
mask |  9 | avx        3197003 ns      5859375 ns           32
mask |  9 |     tbb    8248303 ns      6835938 ns           32
mask |  9 | avx tbb    2353306 ns      2441406 ns           32

data | 10 |           14577378 ns     14160156 ns           32
data | 10 | avx        3040053 ns        0.000 ns           32
data | 10 |     tbb    2484428 ns      3906250 ns           32
data | 10 | avx tbb    2365050 ns      2441406 ns           32
mask | 10 |           51346409 ns     53222656 ns           32
mask | 10 | avx        3159697 ns       488281 ns           32
mask | 10 |     tbb    8238181 ns      8300781 ns           32
mask | 10 | avx tbb    2433403 ns      2929688 ns           32

data | 11 |           13458662 ns     13183594 ns           32
data | 11 | avx        3115969 ns      4394531 ns           32
data | 11 |     tbb    2480634 ns      3906250 ns           32
data | 11 | avx tbb    2345438 ns      2441406 ns           32
mask | 11 |           49718553 ns     49804688 ns           32
mask | 11 | avx        3170644 ns       976562 ns           32
mask | 11 |     tbb    8190119 ns      8300781 ns           32
mask | 11 | avx tbb    2354372 ns      1953125 ns           32

data | 12 |           12370387 ns     12695312 ns           32
data | 12 | avx        3025563 ns      2441406 ns           32
data | 12 |     tbb    2480575 ns      2441406 ns           32
data | 12 | avx tbb    2356903 ns      1953125 ns           32
mask | 12 |           51924744 ns     52246094 ns           32
mask | 12 | avx        3168178 ns      2929688 ns           32
mask | 12 |     tbb    8205944 ns      8789062 ns           32
mask | 12 | avx tbb    2360047 ns      2441406 ns           32

data | 13 |           11586691 ns      9765625 ns           32
data | 13 | avx        3038153 ns      5371094 ns           32
data | 13 |     tbb    2475406 ns      1953125 ns           32
data | 13 | avx tbb    2420913 ns      1953125 ns           32
mask | 13 |           49889456 ns     48339844 ns           32
mask | 13 | avx        3245456 ns      3906250 ns           32
mask | 13 |     tbb    8201969 ns      9277344 ns           32
mask | 13 | avx tbb    2367369 ns      2441406 ns           32

data | 14 |           10864166 ns     15625000 ns           32
data | 14 | avx        3019316 ns      6835938 ns           32
data | 14 |     tbb    2476497 ns      3906250 ns           32
data | 14 | avx tbb    2347300 ns      1953125 ns           32
mask | 14 |           49865469 ns     50292969 ns           32
mask | 14 | avx        3116609 ns       976562 ns           32
mask | 14 |     tbb    8237316 ns      7324219 ns           32
mask | 14 | avx tbb    2351606 ns      2441406 ns           32

data | 15 |           10086300 ns      9277344 ns           32
data | 15 | avx        3070688 ns       976562 ns           32
data | 15 |     tbb    2469466 ns      2929688 ns           32
data | 15 | avx tbb    2354472 ns      2441406 ns           32
mask | 15 |           49968084 ns     49316406 ns           32
mask | 15 | avx        3157841 ns      1464844 ns           32
mask | 15 |     tbb    8270559 ns      7812500 ns           32
mask | 15 | avx tbb    2356959 ns      2441406 ns           32

data | 16 |            9411147 ns      8300781 ns           32
data | 16 | avx        3029762 ns      2441406 ns           32
data | 16 |     tbb    2465028 ns      2441406 ns           32
data | 16 | avx tbb    2372122 ns      2441406 ns           32
mask | 16 |           48993128 ns     49316406 ns           32
mask | 16 | avx        3166150 ns      1464844 ns           32
mask | 16 |     tbb    8234681 ns      6835938 ns           32
mask | 16 | avx tbb    2352422 ns      1953125 ns           32

data | 17 |            8845597 ns      8300781 ns           32
data | 17 | avx        3108716 ns        0.000 ns           32
data | 17 |     tbb    2473569 ns      1953125 ns           32
data | 17 | avx tbb    2370687 ns      1953125 ns           32
mask | 17 |           49974097 ns     47363281 ns           32
mask | 17 | avx        3153831 ns      6347656 ns           32
mask | 17 |     tbb    8264441 ns      8300781 ns           32
mask | 17 | avx tbb    2372756 ns      2929688 ns           32

data | 18 |            8360084 ns      7812500 ns           32
data | 18 | avx        3097959 ns        0.000 ns           32
data | 18 |     tbb    2454253 ns      2441406 ns           32
data | 18 | avx tbb    2363884 ns      1953125 ns           32
mask | 18 |           49611200 ns     49316406 ns           32
mask | 18 | avx        3187066 ns      3906250 ns           32
mask | 18 |     tbb    8256962 ns      7812500 ns           32
mask | 18 | avx tbb    2370631 ns      3417969 ns           32

data | 19 |            7976381 ns      8789062 ns           32
data | 19 | avx        3293888 ns      4882812 ns           32
data | 19 |     tbb    2453231 ns      2441406 ns           32
data | 19 | avx tbb    2377731 ns      2441406 ns           32
mask | 19 |           51214406 ns     52246094 ns           32
mask | 19 | avx        3201147 ns      1464844 ns           32
mask | 19 |     tbb    8277572 ns      8300781 ns           32
mask | 19 | avx tbb    2369056 ns      2929688 ns           32

data | 20 |            7569025 ns      8789062 ns           32
data | 20 | avx        3116128 ns       488281 ns           32
data | 20 |     tbb    2451150 ns      1464844 ns           32
data | 20 | avx tbb    2365181 ns      1953125 ns           32
mask | 20 |           49886003 ns     49316406 ns           32
mask | 20 | avx        3163991 ns      4882812 ns           32
mask | 20 |     tbb    8241594 ns      7812500 ns           32
mask | 20 | avx tbb    2360766 ns      2441406 ns           32

data | 21 |            7267003 ns      6347656 ns           32
data | 21 | avx        3049519 ns        0.000 ns           32
data | 21 |     tbb    2450812 ns      2929688 ns           32
data | 21 | avx tbb    2366350 ns      1464844 ns           32
mask | 21 |           48917084 ns     50292969 ns           32
mask | 21 | avx        3169650 ns      3906250 ns           32
mask | 21 |     tbb    8252744 ns      7812500 ns           32
mask | 21 | avx tbb    2354041 ns      1464844 ns           32

data | 22 |            7060844 ns      6347656 ns           32
data | 22 | avx        3135313 ns      4394531 ns           32
data | 22 |     tbb    2442969 ns      2929688 ns           32
data | 22 | avx tbb    2374591 ns      1464844 ns           32
mask | 22 |           49927816 ns     48339844 ns           32
mask | 22 | avx        3163153 ns      5371094 ns           32
mask | 22 |     tbb    8270803 ns      7324219 ns           32
mask | 22 | avx tbb    2363731 ns      2929688 ns           32

data | 23 |            6739787 ns      5859375 ns           32
data | 23 | avx        3095947 ns        0.000 ns           32
data | 23 |     tbb    2442875 ns      2441406 ns           32
data | 23 | avx tbb    2364206 ns      1953125 ns           32
mask | 23 |           51474359 ns     52246094 ns           32
mask | 23 | avx        3188284 ns      3417969 ns           32
mask | 23 |     tbb    8255666 ns      8789062 ns           32
mask | 23 | avx tbb    2355450 ns      3906250 ns           32

data | 24 |            6570919 ns      6347656 ns           32
data | 24 | avx        3126484 ns      4882812 ns           32
data | 24 |     tbb    2428884 ns      2929688 ns           32
data | 24 | avx tbb    2369941 ns      2441406 ns           32
mask | 24 |           51293978 ns     52734375 ns           32
mask | 24 | avx        3236847 ns      4882812 ns           32
mask | 24 |     tbb    8372550 ns      8300781 ns           32
mask | 24 | avx tbb    2367372 ns      1953125 ns           32

data | 25 |            6455166 ns      5859375 ns           32
data | 25 | avx        3106200 ns      4394531 ns           32
data | 25 |     tbb    2432606 ns      1953125 ns           32
data | 25 | avx tbb    2364969 ns      2929688 ns           32
mask | 25 |           48717709 ns     48828125 ns           32
mask | 25 | avx        3193022 ns      3906250 ns           32
mask | 25 |     tbb    8258950 ns      8300781 ns           32
mask | 25 | avx tbb    2358953 ns      1953125 ns           32

data | 26 |            6179097 ns      5859375 ns           32
data | 26 | avx        3135284 ns      2441406 ns           32
data | 26 |     tbb    2434919 ns      2441406 ns           32
data | 26 | avx tbb    2370175 ns      2929688 ns           32
mask | 26 |           50126137 ns     49316406 ns           32
mask | 26 | avx        3198328 ns      2929688 ns           32
mask | 26 |     tbb    8302931 ns      8300781 ns           32
mask | 26 | avx tbb    2372638 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10704394 ns      7812500 ns           16
data |  1 | avx       10670075 ns     15625000 ns           16
data |  1 |     tbb    9212088 ns      9765625 ns           16
data |  1 | avx tbb    9219400 ns      9765625 ns           16
mask |  1 |           10667381 ns      7812500 ns           16
mask |  1 | avx       10670250 ns     15625000 ns           16
mask |  1 |     tbb    9220225 ns      8789062 ns           16
mask |  1 | avx tbb    9236844 ns     10742188 ns           16

data |  2 |          287655100 ns    287109375 ns           16
data |  2 | avx       13310050 ns     13671875 ns           16
data |  2 |     tbb   27463337 ns     28320312 ns           16
data |  2 | avx tbb    9299231 ns      8789062 ns           16
mask |  2 |          192733731 ns    191406250 ns           16
mask |  2 | avx       13641875 ns     13671875 ns           16
mask |  2 |     tbb   32610531 ns     33203125 ns           16
mask |  2 | avx tbb    9314744 ns      7812500 ns           16

data |  3 |          191709325 ns    191406250 ns           16
data |  3 | avx       12167325 ns     10742188 ns           16
data |  3 |     tbb   18587506 ns     16601562 ns           16
data |  3 | avx tbb    9265250 ns      9765625 ns           16
mask |  3 |          206361469 ns    208007812 ns           16
mask |  3 | avx       12724162 ns     13671875 ns           16
mask |  3 |     tbb   32832894 ns     29296875 ns           16
mask |  3 | avx tbb    9279175 ns      8789062 ns           16

data |  4 |          144135387 ns    144531250 ns           16
data |  4 | avx       12184531 ns     12695312 ns           16
data |  4 |     tbb   14366194 ns     11718750 ns           16
data |  4 | avx tbb    9257769 ns      8789062 ns           16
mask |  4 |          199362394 ns    194335938 ns           16
mask |  4 | avx       12774813 ns     11718750 ns           16
mask |  4 |     tbb   32507444 ns     31250000 ns           16
mask |  4 | avx tbb    9301600 ns     10742188 ns           16

data |  5 |          115526975 ns    117187500 ns           16
data |  5 | avx       12852325 ns     12695312 ns           16
data |  5 |     tbb   11608281 ns     14648438 ns           16
data |  5 | avx tbb    9253100 ns      9765625 ns           16
mask |  5 |          196066444 ns    196289062 ns           16
mask |  5 | avx       12689500 ns     13671875 ns           16
mask |  5 |     tbb   32640787 ns     29296875 ns           16
mask |  5 | avx tbb    9314875 ns      6835938 ns           16

data |  6 |           96374331 ns     96679688 ns           16
data |  6 | avx       12056131 ns     10742188 ns           16
data |  6 |     tbb   10284788 ns     11718750 ns           16
data |  6 | avx tbb    9267231 ns      6835938 ns           16
mask |  6 |          198930250 ns    200195312 ns           16
mask |  6 | avx       13280519 ns     12695312 ns           16
mask |  6 |     tbb   32749363 ns     29296875 ns           16
mask |  6 | avx tbb    9268944 ns      7812500 ns           16

data |  7 |           83382044 ns     83007812 ns           16
data |  7 | avx       12673688 ns     16601562 ns           16
data |  7 |     tbb    9857375 ns     10742188 ns           16
data |  7 | avx tbb    9273519 ns      8789062 ns           16
mask |  7 |          198498538 ns    199218750 ns           16
mask |  7 | avx       12749325 ns     12695312 ns           16
mask |  7 |     tbb   32578100 ns     31250000 ns           16
mask |  7 | avx tbb    9283775 ns      9765625 ns           16

data |  8 |           73098244 ns     71289062 ns           16
data |  8 | avx       12169413 ns     12695312 ns           16
data |  8 |     tbb   10667713 ns      6835938 ns           16
data |  8 | avx tbb    9261631 ns      7812500 ns           16
mask |  8 |          205774631 ns    206054688 ns           16
mask |  8 | avx       12760025 ns     11718750 ns           16
mask |  8 |     tbb   32412881 ns     32226562 ns           16
mask |  8 | avx tbb    9273744 ns      9765625 ns           16

data |  9 |           64959613 ns     65429688 ns           16
data |  9 | avx       12187237 ns     12695312 ns           16
data |  9 |     tbb    9858869 ns      8789062 ns           16
data |  9 | avx tbb    9265713 ns      9765625 ns           16
mask |  9 |          206375538 ns    207031250 ns           16
mask |  9 | avx       13058362 ns     10742188 ns           16
mask |  9 |     tbb   32892081 ns     32226562 ns           16
mask |  9 | avx tbb    9280188 ns      8789062 ns           16

data | 10 |           58237494 ns     46875000 ns           16
data | 10 | avx       12077600 ns     13671875 ns           16
data | 10 |     tbb    9533244 ns     10742188 ns           16
data | 10 | avx tbb    9309688 ns      6835938 ns           16
mask | 10 |          205839881 ns    203125000 ns           16
mask | 10 | avx       12694412 ns     12695312 ns           16
mask | 10 |     tbb   32336594 ns     30273438 ns           16
mask | 10 | avx tbb    9280269 ns      8789062 ns           16

data | 11 |           53779962 ns     53710938 ns           16
data | 11 | avx       12227144 ns     12695312 ns           16
data | 11 |     tbb    9504744 ns      8789062 ns           16
data | 11 | avx tbb    9805662 ns      6835938 ns           16
mask | 11 |          206394375 ns    206054688 ns           16
mask | 11 | avx       12702256 ns     13671875 ns           16
mask | 11 |     tbb   32445469 ns     31250000 ns           16
mask | 11 | avx tbb    9334312 ns      9765625 ns           16

data | 12 |           49200381 ns     47851562 ns           16
data | 12 | avx       12256156 ns     13671875 ns           16
data | 12 |     tbb    9501575 ns      7812500 ns           16
data | 12 | avx tbb    9270169 ns      8789062 ns           16
mask | 12 |          194856787 ns    193359375 ns           16
mask | 12 | avx       13286612 ns     13671875 ns           16
mask | 12 |     tbb   32552775 ns     32226562 ns           16
mask | 12 | avx tbb    9285825 ns      8789062 ns           16

data | 13 |           45858356 ns     46875000 ns           16
data | 13 | avx       12256462 ns     11718750 ns           16
data | 13 |     tbb    9755794 ns      9765625 ns           16
data | 13 | avx tbb    9263887 ns      9765625 ns           16
mask | 13 |          205801431 ns    208007812 ns           16
mask | 13 | avx       12807969 ns     11718750 ns           16
mask | 13 |     tbb   32563481 ns     32226562 ns           16
mask | 13 | avx tbb    9274825 ns      9765625 ns           16

data | 14 |           43490137 ns     47851562 ns           16
data | 14 | avx       12077787 ns     10742188 ns           16
data | 14 |     tbb    9535356 ns      7812500 ns           16
data | 14 | avx tbb    9268463 ns     10742188 ns           16
mask | 14 |          193495844 ns    193359375 ns           16
mask | 14 | avx       12700281 ns     13671875 ns           16
mask | 14 |     tbb   32418550 ns     29296875 ns           16
mask | 14 | avx tbb    9270225 ns      9765625 ns           16

data | 15 |           39989244 ns     39062500 ns           16
data | 15 | avx       12667850 ns     12695312 ns           16
data | 15 |     tbb    9520481 ns      7812500 ns           16
data | 15 | avx tbb    9325687 ns      8789062 ns           16
mask | 15 |          206487363 ns    205078125 ns           16
mask | 15 | avx       12708006 ns     11718750 ns           16
mask | 15 |     tbb   32732775 ns     31250000 ns           16
mask | 15 | avx tbb    9324669 ns      9765625 ns           16

data | 16 |           38048837 ns     39062500 ns           16
data | 16 | avx       12216687 ns     12695312 ns           16
data | 16 |     tbb    9586794 ns      9765625 ns           16
data | 16 | avx tbb    9256875 ns      8789062 ns           16
mask | 16 |          207174956 ns    207031250 ns           16
mask | 16 | avx       12741694 ns     13671875 ns           16
mask | 16 |     tbb   32446787 ns     30273438 ns           16
mask | 16 | avx tbb    9285244 ns      8789062 ns           16

data | 17 |           35174062 ns     35156250 ns           16
data | 17 | avx       12688337 ns     13671875 ns           16
data | 17 |     tbb    9524644 ns      6835938 ns           16
data | 17 | avx tbb    9292169 ns      9765625 ns           16
mask | 17 |          206104069 ns    206054688 ns           16
mask | 17 | avx       12744225 ns     11718750 ns           16
mask | 17 |     tbb   32690563 ns     30273438 ns           16
mask | 17 | avx tbb    9280331 ns      7812500 ns           16

data | 18 |           34203519 ns     34179688 ns           16
data | 18 | avx       12929006 ns     13671875 ns           16
data | 18 |     tbb    9511563 ns      9765625 ns           16
data | 18 | avx tbb    9278181 ns      8789062 ns           16
mask | 18 |          200215450 ns    197265625 ns           16
mask | 18 | avx       12599200 ns     12695312 ns           16
mask | 18 |     tbb   32345894 ns     33203125 ns           16
mask | 18 | avx tbb    9288569 ns      8789062 ns           16

data | 19 |           32372137 ns     32226562 ns           16
data | 19 | avx       12320100 ns     11718750 ns           16
data | 19 |     tbb    9555094 ns      9765625 ns           16
data | 19 | avx tbb    9297113 ns      8789062 ns           16
mask | 19 |          198955038 ns    202148438 ns           16
mask | 19 | avx       12759219 ns     10742188 ns           16
mask | 19 |     tbb   32431662 ns     31250000 ns           16
mask | 19 | avx tbb    9303600 ns      8789062 ns           16

data | 20 |           30245981 ns     29296875 ns           16
data | 20 | avx       12786975 ns     11718750 ns           16
data | 20 |     tbb    9507900 ns     11718750 ns           16
data | 20 | avx tbb    9280312 ns      7812500 ns           16
mask | 20 |          194605387 ns    194335938 ns           16
mask | 20 | avx       12766700 ns     12695312 ns           16
mask | 20 |     tbb   32490644 ns     30273438 ns           16
mask | 20 | avx tbb    9287281 ns     11718750 ns           16

data | 21 |           29563144 ns     27343750 ns           16
data | 21 | avx       12398988 ns     11718750 ns           16
data | 21 |     tbb    9475094 ns      9765625 ns           16
data | 21 | avx tbb    9288806 ns      9765625 ns           16
mask | 21 |          193755800 ns    195312500 ns           16
mask | 21 | avx       12751975 ns     13671875 ns           16
mask | 21 |     tbb   32566150 ns     33203125 ns           16
mask | 21 | avx tbb    9277525 ns      7812500 ns           16

data | 22 |           28901712 ns     28320312 ns           16
data | 22 | avx       13274087 ns     13671875 ns           16
data | 22 |     tbb    9445650 ns      9765625 ns           16
data | 22 | avx tbb    9318069 ns      9765625 ns           16
mask | 22 |          195332575 ns    196289062 ns           16
mask | 22 | avx       12754956 ns     12695312 ns           16
mask | 22 |     tbb   32312331 ns     32226562 ns           16
mask | 22 | avx tbb    9296556 ns      9765625 ns           16

data | 23 |           27118469 ns     31250000 ns           16
data | 23 | avx       12505944 ns     13671875 ns           16
data | 23 |     tbb    9517869 ns     11718750 ns           16
data | 23 | avx tbb    9281844 ns      8789062 ns           16
mask | 23 |          193659956 ns    194335938 ns           16
mask | 23 | avx       12756906 ns     12695312 ns           16
mask | 23 |     tbb   32472906 ns     32226562 ns           16
mask | 23 | avx tbb    9279456 ns      8789062 ns           16

data | 24 |           26236062 ns     28320312 ns           16
data | 24 | avx       12354000 ns     12695312 ns           16
data | 24 |     tbb    9460231 ns     10742188 ns           16
data | 24 | avx tbb    9298119 ns     11718750 ns           16
mask | 24 |          204758106 ns    207031250 ns           16
mask | 24 | avx       12697588 ns     14648438 ns           16
mask | 24 |     tbb   32679437 ns     33203125 ns           16
mask | 24 | avx tbb    9312612 ns      6835938 ns           16

data | 25 |           25650037 ns     25390625 ns           16
data | 25 | avx       13640469 ns     14648438 ns           16
data | 25 |     tbb    9493625 ns      7812500 ns           16
data | 25 | avx tbb    9285681 ns      9765625 ns           16
mask | 25 |          205669294 ns    206054688 ns           16
mask | 25 | avx       12725019 ns     13671875 ns           16
mask | 25 |     tbb   32406969 ns     33203125 ns           16
mask | 25 | avx tbb    9292013 ns      9765625 ns           16

data | 26 |           25401050 ns     25390625 ns           16
data | 26 | avx       12520875 ns     10742188 ns           16
data | 26 |     tbb    9454806 ns     10742188 ns           16
data | 26 | avx tbb    9307000 ns      9765625 ns           16
mask | 26 |          194073562 ns    192382812 ns           16
mask | 26 | avx       13292419 ns     14648438 ns           16
mask | 26 |     tbb   32539363 ns     31250000 ns           16
mask | 26 | avx tbb    9293375 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           21168862 ns     21484375 ns            8
data |  1 | avx       23658025 ns     19531250 ns            8
data |  1 |     tbb   18336988 ns     17578125 ns            8
data |  1 | avx tbb   18345463 ns     17578125 ns            8
mask |  1 |           23582188 ns     33203125 ns            8
mask |  1 | avx       21377863 ns     19531250 ns            8
mask |  1 |     tbb   18467787 ns     17578125 ns            8
mask |  1 | avx tbb   18493938 ns     19531250 ns            8

data |  2 |          575288725 ns    572265625 ns            8
data |  2 | avx       27501313 ns     25390625 ns            8
data |  2 |     tbb   54809938 ns     54687500 ns            8
data |  2 | avx tbb   18640700 ns     17578125 ns            8
mask |  2 |          391593725 ns    388671875 ns            8
mask |  2 | avx       27159375 ns     27343750 ns            8
mask |  2 |     tbb   65267700 ns     64453125 ns            8
mask |  2 | avx tbb   18625987 ns     19531250 ns            8

data |  3 |          384112025 ns    382812500 ns            8
data |  3 | avx       26756350 ns     25390625 ns            8
data |  3 |     tbb   37116100 ns     31250000 ns            8
data |  3 | avx tbb   18404238 ns     19531250 ns            8
mask |  3 |          388536787 ns    386718750 ns            8
mask |  3 | avx       25582187 ns     25390625 ns            8
mask |  3 |     tbb   65454025 ns     62500000 ns            8
mask |  3 | avx tbb   18448525 ns     19531250 ns            8

data |  4 |          287671138 ns    292968750 ns            8
data |  4 | avx       24137425 ns     27343750 ns            8
data |  4 |     tbb   28029213 ns     25390625 ns            8
data |  4 | avx tbb   18454125 ns     19531250 ns            8
mask |  4 |          414523037 ns    416015625 ns            8
mask |  4 | avx       25232800 ns     25390625 ns            8
mask |  4 |     tbb   65357125 ns     62500000 ns            8
mask |  4 | avx tbb   18449150 ns     19531250 ns            8

data |  5 |          231926637 ns    234375000 ns            8
data |  5 | avx       24495425 ns     25390625 ns            8
data |  5 |     tbb   23245413 ns     19531250 ns            8
data |  5 | avx tbb   18442600 ns     17578125 ns            8
mask |  5 |          387428413 ns    388671875 ns            8
mask |  5 | avx       25572562 ns     25390625 ns            8
mask |  5 |     tbb   64991775 ns     60546875 ns            8
mask |  5 | avx tbb   18464062 ns     17578125 ns            8

data |  6 |          193647300 ns    197265625 ns            8
data |  6 | avx       26550875 ns     29296875 ns            8
data |  6 |     tbb   20101050 ns     21484375 ns            8
data |  6 | avx tbb   18428038 ns     17578125 ns            8
mask |  6 |          413197712 ns    414062500 ns            8
mask |  6 | avx       27821712 ns     25390625 ns            8
mask |  6 |     tbb   65682938 ns     62500000 ns            8
mask |  6 | avx tbb   18501838 ns     19531250 ns            8

data |  7 |          167792875 ns    167968750 ns            8
data |  7 | avx       24180138 ns     23437500 ns            8
data |  7 |     tbb   19677750 ns     17578125 ns            8
data |  7 | avx tbb   18443100 ns     17578125 ns            8
mask |  7 |          397923125 ns    406250000 ns            8
mask |  7 | avx       25249412 ns     27343750 ns            8
mask |  7 |     tbb   64945550 ns     60546875 ns            8
mask |  7 | avx tbb   18493962 ns     17578125 ns            8

data |  8 |          147079725 ns    148437500 ns            8
data |  8 | avx       24238375 ns     27343750 ns            8
data |  8 |     tbb   19127213 ns     19531250 ns            8
data |  8 | avx tbb   18542975 ns     17578125 ns            8
mask |  8 |          415498550 ns    416015625 ns            8
mask |  8 | avx       27778850 ns     25390625 ns            8
mask |  8 |     tbb   65175475 ns     60546875 ns            8
mask |  8 | avx tbb   18473763 ns     17578125 ns            8

data |  9 |          130477837 ns    130859375 ns            8
data |  9 | avx       26779437 ns     27343750 ns            8
data |  9 |     tbb   19003787 ns     19531250 ns            8
data |  9 | avx tbb   18460912 ns     17578125 ns            8
mask |  9 |          409598912 ns    412109375 ns            8
mask |  9 | avx       25580737 ns     25390625 ns            8
mask |  9 |     tbb   64859563 ns     64453125 ns            8
mask |  9 | avx tbb   18460450 ns     17578125 ns            8

data | 10 |          116946637 ns    109375000 ns            8
data | 10 | avx       24245388 ns     23437500 ns            8
data | 10 |     tbb   18973738 ns     17578125 ns            8
data | 10 | avx tbb   18435775 ns     19531250 ns            8
mask | 10 |          399008212 ns    404296875 ns            8
mask | 10 | avx       25154662 ns     25390625 ns            8
mask | 10 |     tbb   65140912 ns     58593750 ns            8
mask | 10 | avx tbb   18475388 ns     17578125 ns            8

data | 11 |          109881537 ns    109375000 ns            8
data | 11 | avx       24554400 ns     25390625 ns            8
data | 11 |     tbb   19024425 ns     21484375 ns            8
data | 11 | avx tbb   18592000 ns     19531250 ns            8
mask | 11 |          397297100 ns    394531250 ns            8
mask | 11 | avx       25126400 ns     23437500 ns            8
mask | 11 |     tbb   65158050 ns     62500000 ns            8
mask | 11 | avx tbb   18445413 ns     19531250 ns            8

data | 12 |           99854513 ns     99609375 ns            8
data | 12 | avx       24555525 ns     27343750 ns            8
data | 12 |     tbb   19195050 ns     19531250 ns            8
data | 12 | avx tbb   18451875 ns     17578125 ns            8
mask | 12 |          412632837 ns    417968750 ns            8
mask | 12 | avx       25517063 ns     27343750 ns            8
mask | 12 |     tbb   65431375 ns     64453125 ns            8
mask | 12 | avx tbb   18465125 ns     19531250 ns            8

data | 13 |           91697050 ns     91796875 ns            8
data | 13 | avx       26654263 ns     23437500 ns            8
data | 13 |     tbb   18906975 ns     19531250 ns            8
data | 13 | avx tbb   18446387 ns     17578125 ns            8
mask | 13 |          398928262 ns    396484375 ns            8
mask | 13 | avx       27532012 ns     25390625 ns            8
mask | 13 |     tbb   64471250 ns     62500000 ns            8
mask | 13 | avx tbb   18477725 ns     19531250 ns            8

data | 14 |           85541712 ns     89843750 ns            8
data | 14 | avx       24427037 ns     23437500 ns            8
data | 14 |     tbb   18922325 ns     17578125 ns            8
data | 14 | avx tbb   18423850 ns     17578125 ns            8
mask | 14 |          396920450 ns    402343750 ns            8
mask | 14 | avx       25190175 ns     23437500 ns            8
mask | 14 |     tbb   65741075 ns     62500000 ns            8
mask | 14 | avx tbb   18432763 ns     17578125 ns            8

data | 15 |           80668175 ns     82031250 ns            8
data | 15 | avx       26695263 ns     29296875 ns            8
data | 15 |     tbb   18925900 ns     17578125 ns            8
data | 15 | avx tbb   18443013 ns     19531250 ns            8
mask | 15 |          414002938 ns    416015625 ns            8
mask | 15 | avx       25472588 ns     23437500 ns            8
mask | 15 |     tbb   64502650 ns     60546875 ns            8
mask | 15 | avx tbb   18501312 ns     17578125 ns            8

data | 16 |           76806088 ns     76171875 ns            8
data | 16 | avx       26768912 ns     25390625 ns            8
data | 16 |     tbb   19040538 ns     17578125 ns            8
data | 16 | avx tbb   18470150 ns     15625000 ns            8
mask | 16 |          388036950 ns    388671875 ns            8
mask | 16 | avx       25157950 ns     23437500 ns            8
mask | 16 |     tbb   64963513 ns     60546875 ns            8
mask | 16 | avx tbb   18480812 ns     15625000 ns            8

data | 17 |           71216675 ns     78125000 ns            8
data | 17 | avx       26912563 ns     27343750 ns            8
data | 17 |     tbb   18859838 ns     17578125 ns            8
data | 17 | avx tbb   18467425 ns     19531250 ns            8
mask | 17 |          386745825 ns    384765625 ns            8
mask | 17 | avx       27527875 ns     27343750 ns            8
mask | 17 |     tbb   65244088 ns     64453125 ns            8
mask | 17 | avx tbb   18650338 ns     17578125 ns            8

data | 18 |           68832125 ns     66406250 ns            8
data | 18 | avx       24612587 ns     23437500 ns            8
data | 18 |     tbb   19211813 ns     17578125 ns            8
data | 18 | avx tbb   18464763 ns     21484375 ns            8
mask | 18 |          399817762 ns    398437500 ns            8
mask | 18 | avx       25500038 ns     27343750 ns            8
mask | 18 |     tbb   64452475 ns     58593750 ns            8
mask | 18 | avx tbb   18504762 ns     17578125 ns            8

data | 19 |           65204787 ns     66406250 ns            8
data | 19 | avx       25017225 ns     25390625 ns            8
data | 19 |     tbb   18852250 ns     17578125 ns            8
data | 19 | avx tbb   18483112 ns     19531250 ns            8
mask | 19 |          388003787 ns    388671875 ns            8
mask | 19 | avx       25594912 ns     25390625 ns            8
mask | 19 |     tbb   64553262 ns     62500000 ns            8
mask | 19 | avx tbb   18475300 ns     19531250 ns            8

data | 20 |           60442800 ns     58593750 ns            8
data | 20 | avx       25192850 ns     25390625 ns            8
data | 20 |     tbb   18857700 ns     19531250 ns            8
data | 20 | avx tbb   18444513 ns     17578125 ns            8
mask | 20 |          396197587 ns    396484375 ns            8
mask | 20 | avx       25511538 ns     27343750 ns            8
mask | 20 |     tbb   65728250 ns     64453125 ns            8
mask | 20 | avx tbb   18488963 ns     19531250 ns            8

data | 21 |           57930025 ns     58593750 ns            8
data | 21 | avx       24568100 ns     25390625 ns            8
data | 21 |     tbb   18853863 ns     17578125 ns            8
data | 21 | avx tbb   18470088 ns     17578125 ns            8
mask | 21 |          399791150 ns    396484375 ns            8
mask | 21 | avx       25376163 ns     25390625 ns            8
mask | 21 |     tbb   65190700 ns     62500000 ns            8
mask | 21 | avx tbb   18473937 ns     19531250 ns            8

data | 22 |           59991813 ns     60546875 ns            8
data | 22 | avx       24933062 ns     27343750 ns            8
data | 22 |     tbb   18874925 ns     17578125 ns            8
data | 22 | avx tbb   18501700 ns     17578125 ns            8
mask | 22 |          397886188 ns    394531250 ns            8
mask | 22 | avx       25174587 ns     27343750 ns            8
mask | 22 |     tbb   65068725 ns     62500000 ns            8
mask | 22 | avx tbb   18648962 ns     15625000 ns            8

data | 23 |           53967025 ns     54687500 ns            8
data | 23 | avx       24698800 ns     25390625 ns            8
data | 23 |     tbb   18893037 ns     19531250 ns            8
data | 23 | avx tbb   18494437 ns     15625000 ns            8
mask | 23 |          414387413 ns    410156250 ns            8
mask | 23 | avx       25486587 ns     25390625 ns            8
mask | 23 |     tbb   64885775 ns     58593750 ns            8
mask | 23 | avx tbb   18497175 ns     17578125 ns            8

data | 24 |           54485287 ns     64453125 ns            8
data | 24 | avx       25495888 ns     27343750 ns            8
data | 24 |     tbb   18835737 ns     17578125 ns            8
data | 24 | avx tbb   18645412 ns     19531250 ns            8
mask | 24 |          413662188 ns    414062500 ns            8
mask | 24 | avx       25608000 ns     25390625 ns            8
mask | 24 |     tbb   64632238 ns     64453125 ns            8
mask | 24 | avx tbb   18482387 ns     17578125 ns            8

data | 25 |           50717625 ns     50781250 ns            8
data | 25 | avx       24598725 ns     23437500 ns            8
data | 25 |     tbb   18757125 ns     17578125 ns            8
data | 25 | avx tbb   18476025 ns     19531250 ns            8
mask | 25 |          401063913 ns    396484375 ns            8
mask | 25 | avx       25626450 ns     25390625 ns            8
mask | 25 |     tbb   64994388 ns     64453125 ns            8
mask | 25 | avx tbb   18501587 ns     19531250 ns            8

data | 26 |           50347812 ns     50781250 ns            8
data | 26 | avx       24631750 ns     25390625 ns            8
data | 26 |     tbb   19346888 ns     19531250 ns            8
data | 26 | avx tbb   18456662 ns     17578125 ns            8
mask | 26 |          398202112 ns    390625000 ns            8
mask | 26 | avx       25128675 ns     23437500 ns            8
mask | 26 |     tbb   64652650 ns     64453125 ns            8
mask | 26 | avx tbb   18474162 ns     17578125 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           47485938 ns     44921875 ns            8
data |  1 | avx       42860675 ns     42968750 ns            8
data |  1 |     tbb   36617363 ns     35156250 ns            8
data |  1 | avx tbb   36857687 ns     35156250 ns            8
mask |  1 |           42791125 ns     42968750 ns            8
mask |  1 | avx       42906150 ns     42968750 ns            8
mask |  1 |     tbb   36996012 ns     39062500 ns            8
mask |  1 | avx tbb   36794350 ns     39062500 ns            8

data |  2 |         1148906762 ns   1152343750 ns            8
data |  2 | avx       57641962 ns     60546875 ns            8
data |  2 |     tbb  109432513 ns    103515625 ns            8
data |  2 | avx tbb   37015913 ns     37109375 ns            8
mask |  2 |          797094575 ns    798828125 ns            8
mask |  2 | avx       53896750 ns     54687500 ns            8
mask |  2 |     tbb  130207437 ns    123046875 ns            8
mask |  2 | avx tbb   37025800 ns     37109375 ns            8

data |  3 |          765899838 ns    763671875 ns            8
data |  3 | avx       48414988 ns     48828125 ns            8
data |  3 |     tbb   74117612 ns     66406250 ns            8
data |  3 | avx tbb   36761850 ns     39062500 ns            8
mask |  3 |          829392313 ns    828125000 ns            8
mask |  3 | avx       51206975 ns     52734375 ns            8
mask |  3 |     tbb  130281575 ns    117187500 ns            8
mask |  3 | avx tbb   36873725 ns     37109375 ns            8

data |  4 |          576583012 ns    570312500 ns            8
data |  4 | avx       49088800 ns     48828125 ns            8
data |  4 |     tbb   55970850 ns     50781250 ns            8
data |  4 | avx tbb   37029200 ns     39062500 ns            8
mask |  4 |          778997225 ns    777343750 ns            8
mask |  4 | avx       51100750 ns     48828125 ns            8
mask |  4 |     tbb  130695238 ns    119140625 ns            8
mask |  4 | avx tbb   40179325 ns     39062500 ns            8

data |  5 |          461560813 ns    460937500 ns            8
data |  5 | avx       53580300 ns     56640625 ns            8
data |  5 |     tbb   46796850 ns     41015625 ns            8
data |  5 | avx tbb   36745075 ns     37109375 ns            8
mask |  5 |          801563213 ns    802734375 ns            8
mask |  5 | avx       50825062 ns     50781250 ns            8
mask |  5 |     tbb  130517750 ns    123046875 ns            8
mask |  5 | avx tbb   36891850 ns     37109375 ns            8

data |  6 |          386391562 ns    386718750 ns            8
data |  6 | avx       49049862 ns     50781250 ns            8
data |  6 |     tbb   40475625 ns     41015625 ns            8
data |  6 | avx tbb   37231350 ns     35156250 ns            8
mask |  6 |          790946188 ns    791015625 ns            8
mask |  6 | avx       51088675 ns     48828125 ns            8
mask |  6 |     tbb  130637000 ns    117187500 ns            8
mask |  6 | avx tbb   36814262 ns     33203125 ns            8

data |  7 |          333137700 ns    333984375 ns            8
data |  7 | avx       51450300 ns     54687500 ns            8
data |  7 |     tbb   38399838 ns     33203125 ns            8
data |  7 | avx tbb   37145800 ns     35156250 ns            8
mask |  7 |          808447600 ns    810546875 ns            8
mask |  7 | avx       55048150 ns     52734375 ns            8
mask |  7 |     tbb  129314687 ns    125000000 ns            8
mask |  7 | avx tbb   36885700 ns     39062500 ns            8

data |  8 |          293989887 ns    296875000 ns            8
data |  8 | avx       48481463 ns     48828125 ns            8
data |  8 |     tbb   37762075 ns     37109375 ns            8
data |  8 | avx tbb   37901012 ns     37109375 ns            8
mask |  8 |          804759137 ns    806640625 ns            8
mask |  8 | avx       51350725 ns     50781250 ns            8
mask |  8 |     tbb  129172175 ns    123046875 ns            8
mask |  8 | avx tbb   36864112 ns     35156250 ns            8

data |  9 |          257008812 ns    255859375 ns            8
data |  9 | avx       48984325 ns     48828125 ns            8
data |  9 |     tbb   37503550 ns     37109375 ns            8
data |  9 | avx tbb   36749413 ns     37109375 ns            8
mask |  9 |          813366225 ns    814453125 ns            8
mask |  9 | avx       51270025 ns     50781250 ns            8
mask |  9 |     tbb  129942025 ns    121093750 ns            8
mask |  9 | avx tbb   36791275 ns     37109375 ns            8

data | 10 |          233094712 ns    234375000 ns            8
data | 10 | avx       49076375 ns     48828125 ns            8
data | 10 |     tbb   37652700 ns     37109375 ns            8
data | 10 | avx tbb   37105825 ns     37109375 ns            8
mask | 10 |          787420837 ns    789062500 ns            8
mask | 10 | avx       50589337 ns     50781250 ns            8
mask | 10 |     tbb  129485412 ns    123046875 ns            8
mask | 10 | avx tbb   36879512 ns     35156250 ns            8

data | 11 |          216525563 ns    216796875 ns            8
data | 11 | avx       48707100 ns     46875000 ns            8
data | 11 |     tbb   41286388 ns     35156250 ns            8
data | 11 | avx tbb   36845425 ns     37109375 ns            8
mask | 11 |          799701275 ns    798828125 ns            8
mask | 11 | avx       50489488 ns     50781250 ns            8
mask | 11 |     tbb  130805238 ns    119140625 ns            8
mask | 11 | avx tbb   36842300 ns     35156250 ns            8

data | 12 |          199581275 ns    201171875 ns            8
data | 12 | avx       49322825 ns     48828125 ns            8
data | 12 |     tbb   38601200 ns     37109375 ns            8
data | 12 | avx tbb   36898025 ns     37109375 ns            8
mask | 12 |          817427662 ns    820312500 ns            8
mask | 12 | avx       51091388 ns     50781250 ns            8
mask | 12 |     tbb  131275225 ns    125000000 ns            8
mask | 12 | avx tbb   36840700 ns     37109375 ns            8

data | 13 |          183065837 ns    183593750 ns            8
data | 13 | avx       49178187 ns     48828125 ns            8
data | 13 |     tbb   37579300 ns     35156250 ns            8
data | 13 | avx tbb   36797838 ns     39062500 ns            8
mask | 13 |          820814100 ns    822265625 ns            8
mask | 13 | avx       55510250 ns     54687500 ns            8
mask | 13 |     tbb  129131950 ns    119140625 ns            8
mask | 13 | avx tbb   36810262 ns     37109375 ns            8

data | 14 |          174186125 ns    175781250 ns            8
data | 14 | avx       48756462 ns     48828125 ns            8
data | 14 |     tbb   38333325 ns     37109375 ns            8
data | 14 | avx tbb   37063187 ns     39062500 ns            8
mask | 14 |          781943462 ns    783203125 ns            8
mask | 14 | avx       55443937 ns     52734375 ns            8
mask | 14 |     tbb  130090825 ns    125000000 ns            8
mask | 14 | avx tbb   36831650 ns     39062500 ns            8

data | 15 |          163799575 ns    162109375 ns            8
data | 15 | avx       49567462 ns     48828125 ns            8
data | 15 |     tbb   37757825 ns     37109375 ns            8
data | 15 | avx tbb   36767325 ns     39062500 ns            8
mask | 15 |          797070050 ns    798828125 ns            8
mask | 15 | avx       51018288 ns     50781250 ns            8
mask | 15 |     tbb  129298000 ns    125000000 ns            8
mask | 15 | avx tbb   36911600 ns     37109375 ns            8

data | 16 |          154745350 ns    156250000 ns            8
data | 16 | avx       48612150 ns     48828125 ns            8
data | 16 |     tbb   37829475 ns     35156250 ns            8
data | 16 | avx tbb   37140437 ns     35156250 ns            8
mask | 16 |          786776075 ns    787109375 ns            8
mask | 16 | avx       51247600 ns     52734375 ns            8
mask | 16 |     tbb  131370488 ns    119140625 ns            8
mask | 16 | avx tbb   36777637 ns     35156250 ns            8

data | 17 |          141726612 ns    140625000 ns            8
data | 17 | avx       50859087 ns     50781250 ns            8
data | 17 |     tbb   37616750 ns     39062500 ns            8
data | 17 | avx tbb   37375025 ns     33203125 ns            8
mask | 17 |          801335713 ns    798828125 ns            8
mask | 17 | avx       51312575 ns     50781250 ns            8
mask | 17 |     tbb  130709388 ns    126953125 ns            8
mask | 17 | avx tbb   36869937 ns     35156250 ns            8

data | 18 |          136742687 ns    136718750 ns            8
data | 18 | avx       55348238 ns     54687500 ns            8
data | 18 |     tbb   37858413 ns     37109375 ns            8
data | 18 | avx tbb   36880725 ns     39062500 ns            8
mask | 18 |          784440237 ns    783203125 ns            8
mask | 18 | avx       55686925 ns     54687500 ns            8
mask | 18 |     tbb  129918275 ns    123046875 ns            8
mask | 18 | avx tbb   36860188 ns     39062500 ns            8

data | 19 |          126738425 ns    126953125 ns            8
data | 19 | avx       55429612 ns     56640625 ns            8
data | 19 |     tbb   37813150 ns     37109375 ns            8
data | 19 | avx tbb   36868375 ns     35156250 ns            8
mask | 19 |          819009725 ns    818359375 ns            8
mask | 19 | avx       51169275 ns     50781250 ns            8
mask | 19 |     tbb  131239925 ns    121093750 ns            8
mask | 19 | avx tbb   36841612 ns     39062500 ns            8

data | 20 |          122554262 ns    125000000 ns            8
data | 20 | avx       49364175 ns     50781250 ns            8
data | 20 |     tbb   37974788 ns     37109375 ns            8
data | 20 | avx tbb   36874700 ns     33203125 ns            8
mask | 20 |          803774288 ns    804687500 ns            8
mask | 20 | avx       51079875 ns     52734375 ns            8
mask | 20 |     tbb  130190600 ns    121093750 ns            8
mask | 20 | avx tbb   37351850 ns     37109375 ns            8

data | 21 |          116173000 ns    113281250 ns            8
data | 21 | avx       49959250 ns     50781250 ns            8
data | 21 |     tbb   37658875 ns     37109375 ns            8
data | 21 | avx tbb   36864375 ns     33203125 ns            8
mask | 21 |          798550787 ns    798828125 ns            8
mask | 21 | avx       51250200 ns     50781250 ns            8
mask | 21 |     tbb  130636475 ns    121093750 ns            8
mask | 21 | avx tbb   36896925 ns     39062500 ns            8

data | 22 |          111880587 ns    113281250 ns            8
data | 22 | avx       55211487 ns     54687500 ns            8
data | 22 |     tbb   37491300 ns     37109375 ns            8
data | 22 | avx tbb   36893850 ns     35156250 ns            8
mask | 22 |          810438838 ns    810546875 ns            8
mask | 22 | avx       51042188 ns     48828125 ns            8
mask | 22 |     tbb  130264500 ns    121093750 ns            8
mask | 22 | avx tbb   37227725 ns     35156250 ns            8

data | 23 |          112081112 ns    113281250 ns            8
data | 23 | avx       54858687 ns     56640625 ns            8
data | 23 |     tbb   37528175 ns     35156250 ns            8
data | 23 | avx tbb   36850163 ns     37109375 ns            8
mask | 23 |          828510263 ns    828125000 ns            8
mask | 23 | avx       51226713 ns     48828125 ns            8
mask | 23 |     tbb  129050525 ns    123046875 ns            8
mask | 23 | avx tbb   36916175 ns     39062500 ns            8

data | 24 |          108634950 ns    107421875 ns            8
data | 24 | avx       50988750 ns     48828125 ns            8
data | 24 |     tbb   37452550 ns     31250000 ns            8
data | 24 | avx tbb   36838563 ns     41015625 ns            8
mask | 24 |          824485988 ns    826171875 ns            8
mask | 24 | avx       51257275 ns     48828125 ns            8
mask | 24 |     tbb  130849050 ns    125000000 ns            8
mask | 24 | avx tbb   36833800 ns     37109375 ns            8

data | 25 |          106287875 ns    107421875 ns            8
data | 25 | avx       55356713 ns     56640625 ns            8
data | 25 |     tbb   37576625 ns     33203125 ns            8
data | 25 | avx tbb   37244887 ns     35156250 ns            8
mask | 25 |          786844412 ns    781250000 ns            8
mask | 25 | avx       55498450 ns     58593750 ns            8
mask | 25 |     tbb  129185313 ns    125000000 ns            8
mask | 25 | avx tbb   36859063 ns     37109375 ns            8

data | 26 |           99313575 ns     99609375 ns            8
data | 26 | avx       50702225 ns     48828125 ns            8
data | 26 |     tbb   37931075 ns     37109375 ns            8
data | 26 | avx tbb   36855662 ns     37109375 ns            8
mask | 26 |          779791975 ns    781250000 ns            8
mask | 26 | avx       51439813 ns     52734375 ns            8
mask | 26 |     tbb  130674388 ns    121093750 ns            8
mask | 26 | avx tbb   36876312 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           84938050 ns     85937500 ns            8
data |  1 | avx       84880662 ns     85937500 ns            8
data |  1 |     tbb   73216962 ns     64453125 ns            8
data |  1 | avx tbb   73929550 ns     66406250 ns            8
mask |  1 |           85750563 ns     83984375 ns            8
mask |  1 | avx       85999337 ns     85937500 ns            8
mask |  1 |     tbb   73131350 ns     74218750 ns            8
mask |  1 | avx tbb   73251013 ns     74218750 ns            8

data |  2 |         2298468350 ns   2298828125 ns            8
data |  2 | avx      106289412 ns    105468750 ns            8
data |  2 |     tbb  221026550 ns    207031250 ns            8
data |  2 | avx tbb   73726788 ns     72265625 ns            8
mask |  2 |         1606524012 ns   1605468750 ns            8
mask |  2 | avx      108997063 ns    109375000 ns            8
mask |  2 |     tbb  257729350 ns    238281250 ns            8
mask |  2 | avx tbb   73881725 ns     76171875 ns            8

data |  3 |         1532951612 ns   1533203125 ns            8
data |  3 | avx       98102913 ns     99609375 ns            8
data |  3 |     tbb  145974875 ns    134765625 ns            8
data |  3 | avx tbb   73459000 ns     72265625 ns            8
mask |  3 |         1589841712 ns   1589843750 ns            8
mask |  3 | avx      101112300 ns     99609375 ns            8
mask |  3 |     tbb  262270888 ns    248046875 ns            8
mask |  3 | avx tbb   73592937 ns     72265625 ns            8

data |  4 |         1152141513 ns   1154296875 ns            8
data |  4 | avx       97930550 ns     95703125 ns            8
data |  4 |     tbb  110145988 ns    103515625 ns            8
data |  4 | avx tbb   74188437 ns     70312500 ns            8
mask |  4 |         1578285100 ns   1582031250 ns            8
mask |  4 | avx      101263275 ns    101562500 ns            8
mask |  4 |     tbb  259575863 ns    234375000 ns            8
mask |  4 | avx tbb   73586300 ns     76171875 ns            8

data |  5 |          923622713 ns    921875000 ns            8
data |  5 | avx      103708362 ns    101562500 ns            8
data |  5 |     tbb   91291400 ns     83984375 ns            8
data |  5 | avx tbb   73468400 ns     72265625 ns            8
mask |  5 |         1567771475 ns   1568359375 ns            8
mask |  5 | avx      102524838 ns    109375000 ns            8
mask |  5 |     tbb  260788850 ns    250000000 ns            8
mask |  5 | avx tbb   73728950 ns     72265625 ns            8

data |  6 |          770858400 ns    773437500 ns            8
data |  6 | avx       97248650 ns     93750000 ns            8
data |  6 |     tbb   82025938 ns     70312500 ns            8
data |  6 | avx tbb   73465875 ns     70312500 ns            8
mask |  6 |         1653166812 ns   1652343750 ns            8
mask |  6 | avx      101237000 ns    101562500 ns            8
mask |  6 |     tbb  262865512 ns    234375000 ns            8
mask |  6 | avx tbb   73615250 ns     74218750 ns            8

data |  7 |          665972663 ns    664062500 ns            8
data |  7 | avx       98191313 ns     99609375 ns            8
data |  7 |     tbb   77581600 ns     74218750 ns            8
data |  7 | avx tbb   73418700 ns     72265625 ns            8
mask |  7 |         1628879163 ns   1626953125 ns            8
mask |  7 | avx      102580387 ns    103515625 ns            8
mask |  7 |     tbb  258040913 ns    240234375 ns            8
mask |  7 | avx tbb   73638562 ns     72265625 ns            8

data |  8 |          582347700 ns    585937500 ns            8
data |  8 | avx       98201150 ns     93750000 ns            8
data |  8 |     tbb   76958688 ns     78125000 ns            8
data |  8 | avx tbb   73470175 ns     72265625 ns            8
mask |  8 |         1553663387 ns   1558593750 ns            8
mask |  8 | avx      102348625 ns     99609375 ns            8
mask |  8 |     tbb  260242088 ns    246093750 ns            8
mask |  8 | avx tbb   73513612 ns     70312500 ns            8

data |  9 |          514200212 ns    515625000 ns            8
data |  9 | avx       96916387 ns     93750000 ns            8
data |  9 |     tbb   76211312 ns     74218750 ns            8
data |  9 | avx tbb   73493925 ns     72265625 ns            8
mask |  9 |         1648406000 ns   1648437500 ns            8
mask |  9 | avx      102549638 ns    103515625 ns            8
mask |  9 |     tbb  259659912 ns    242187500 ns            8
mask |  9 | avx tbb   73555938 ns     70312500 ns            8

data | 10 |          466143288 ns    466796875 ns            8
data | 10 | avx       97972212 ns     99609375 ns            8
data | 10 |     tbb   75569325 ns     74218750 ns            8
data | 10 | avx tbb   73412350 ns     74218750 ns            8
mask | 10 |         1624795362 ns   1626953125 ns            8
mask | 10 | avx      108645037 ns    109375000 ns            8
mask | 10 |     tbb  259761138 ns    238281250 ns            8
mask | 10 | avx tbb   73565413 ns     70312500 ns            8

data | 11 |          426710188 ns    425781250 ns            8
data | 11 | avx       98295137 ns     99609375 ns            8
data | 11 |     tbb   75557025 ns     76171875 ns            8
data | 11 | avx tbb   73459300 ns     72265625 ns            8
mask | 11 |         1549671912 ns   1550781250 ns            8
mask | 11 | avx      101301500 ns     99609375 ns            8
mask | 11 |     tbb  260821000 ns    242187500 ns            8
mask | 11 | avx tbb   73505512 ns     66406250 ns            8

data | 12 |          392652975 ns    392578125 ns            8
data | 12 | avx       96912763 ns     93750000 ns            8
data | 12 |     tbb   75557425 ns     74218750 ns            8
data | 12 | avx tbb   73915950 ns     72265625 ns            8
mask | 12 |         1642435188 ns   1646484375 ns            8
mask | 12 | avx      102101463 ns    103515625 ns            8
mask | 12 |     tbb  260922650 ns    240234375 ns            8
mask | 12 | avx tbb   73500562 ns     74218750 ns            8

data | 13 |          366619212 ns    369140625 ns            8
data | 13 | avx       97534437 ns     93750000 ns            8
data | 13 |     tbb   75432937 ns     72265625 ns            8
data | 13 | avx tbb   73469525 ns     72265625 ns            8
mask | 13 |         1599391550 ns   1597656250 ns            8
mask | 13 | avx      101398363 ns    103515625 ns            8
mask | 13 |     tbb  262469575 ns    240234375 ns            8
mask | 13 | avx tbb   73590425 ns     70312500 ns            8

data | 14 |          341568437 ns    341796875 ns            8
data | 14 | avx       97997963 ns     99609375 ns            8
data | 14 |     tbb   76278625 ns     70312500 ns            8
data | 14 | avx tbb   73438525 ns     72265625 ns            8
mask | 14 |         1590969625 ns   1587890625 ns            8
mask | 14 | avx      101331937 ns    101562500 ns            8
mask | 14 |     tbb  259298300 ns    248046875 ns            8
mask | 14 | avx tbb   73595837 ns     70312500 ns            8

data | 15 |          321435138 ns    322265625 ns            8
data | 15 | avx       98344325 ns     95703125 ns            8
data | 15 |     tbb   75501500 ns     76171875 ns            8
data | 15 | avx tbb   73435013 ns     68359375 ns            8
mask | 15 |         1642591212 ns   1642578125 ns            8
mask | 15 | avx      102220488 ns    101562500 ns            8
mask | 15 |     tbb  259972650 ns    248046875 ns            8
mask | 15 | avx tbb   73754362 ns     74218750 ns            8

data | 16 |          301958025 ns    304687500 ns            8
data | 16 | avx       98298400 ns     97656250 ns            8
data | 16 |     tbb   75362475 ns     76171875 ns            8
data | 16 | avx tbb   73477937 ns     72265625 ns            8
mask | 16 |         1589316750 ns   1591796875 ns            8
mask | 16 | avx      101250050 ns    101562500 ns            8
mask | 16 |     tbb  257944275 ns    248046875 ns            8
mask | 16 | avx tbb   73558675 ns     72265625 ns            8

data | 17 |          281977450 ns    281250000 ns            8
data | 17 | avx      100276613 ns     99609375 ns            8
data | 17 |     tbb   75386612 ns     72265625 ns            8
data | 17 | avx tbb   73491987 ns     74218750 ns            8
mask | 17 |         1610977738 ns   1609375000 ns            8
mask | 17 | avx      102695150 ns    101562500 ns            8
mask | 17 |     tbb  260396100 ns    242187500 ns            8
mask | 17 | avx tbb   73670462 ns     76171875 ns            8

data | 18 |          266104575 ns    265625000 ns            8
data | 18 | avx      101693325 ns    101562500 ns            8
data | 18 |     tbb   76151038 ns     72265625 ns            8
data | 18 | avx tbb   73769325 ns     70312500 ns            8
mask | 18 |         1596106663 ns   1595703125 ns            8
mask | 18 | avx      103884087 ns    103515625 ns            8
mask | 18 |     tbb  262434962 ns    242187500 ns            8
mask | 18 | avx tbb   73589938 ns     72265625 ns            8

data | 19 |          258396237 ns    255859375 ns            8
data | 19 | avx      101195938 ns    101562500 ns            8
data | 19 |     tbb   75341037 ns     76171875 ns            8
data | 19 | avx tbb   73687725 ns     74218750 ns            8
mask | 19 |         1599707088 ns   1601562500 ns            8
mask | 19 | avx      107344550 ns    107421875 ns            8
mask | 19 |     tbb  260818800 ns    251953125 ns            8
mask | 19 | avx tbb   73670075 ns     74218750 ns            8

data | 20 |          241843288 ns    242187500 ns            8
data | 20 | avx      101821000 ns    101562500 ns            8
data | 20 |     tbb   75123800 ns     70312500 ns            8
data | 20 | avx tbb   73647013 ns     74218750 ns            8
mask | 20 |         1565879013 ns   1566406250 ns            8
mask | 20 | avx      102594200 ns    103515625 ns            8
mask | 20 |     tbb  262724237 ns    240234375 ns            8
mask | 20 | avx tbb   73740025 ns     72265625 ns            8

data | 21 |          236915975 ns    234375000 ns            8
data | 21 | avx       98857175 ns     97656250 ns            8
data | 21 |     tbb   74954338 ns     74218750 ns            8
data | 21 | avx tbb   74226475 ns     72265625 ns            8
mask | 21 |         1558835675 ns   1554687500 ns            8
mask | 21 | avx      102831662 ns    103515625 ns            8
mask | 21 |     tbb  260424287 ns    248046875 ns            8
mask | 21 | avx tbb   73740350 ns     76171875 ns            8

data | 22 |          223837188 ns    222656250 ns            8
data | 22 | avx      101353950 ns    101562500 ns            8
data | 22 |     tbb   74773863 ns     72265625 ns            8
data | 22 | avx tbb   73528075 ns     72265625 ns            8
mask | 22 |         1618899100 ns   1617187500 ns            8
mask | 22 | avx      102694588 ns    101562500 ns            8
mask | 22 |     tbb  259856150 ns    240234375 ns            8
mask | 22 | avx tbb   74541250 ns     72265625 ns            8

data | 23 |          216649337 ns    218750000 ns            8
data | 23 | avx      101398937 ns     99609375 ns            8
data | 23 |     tbb   75067338 ns     76171875 ns            8
data | 23 | avx tbb   73612713 ns     74218750 ns            8
mask | 23 |         1615002025 ns   1615234375 ns            8
mask | 23 | avx      102483150 ns    103515625 ns            8
mask | 23 |     tbb  257833950 ns    236328125 ns            8
mask | 23 | avx tbb   73664550 ns     70312500 ns            8

data | 24 |          208750175 ns    207031250 ns            8
data | 24 | avx       99610413 ns     97656250 ns            8
data | 24 |     tbb   74935525 ns     70312500 ns            8
data | 24 | avx tbb   73560937 ns     70312500 ns            8
mask | 24 |         1545385575 ns   1546875000 ns            8
mask | 24 | avx      102393975 ns    101562500 ns            8
mask | 24 |     tbb  263778475 ns    248046875 ns            8
mask | 24 | avx tbb   73693975 ns     72265625 ns            8

data | 25 |          204086913 ns    203125000 ns            8
data | 25 | avx       98617950 ns     99609375 ns            8
data | 25 |     tbb   74715225 ns     72265625 ns            8
data | 25 | avx tbb   73621862 ns     70312500 ns            8
mask | 25 |         1613002025 ns   1611328125 ns            8
mask | 25 | avx      102523362 ns    103515625 ns            8
mask | 25 |     tbb  259713188 ns    251953125 ns            8
mask | 25 | avx tbb   73613662 ns     76171875 ns            8

data | 26 |          197076063 ns    197265625 ns            8
data | 26 | avx      100214350 ns    101562500 ns            8
data | 26 |     tbb   74900925 ns     74218750 ns            8
data | 26 | avx tbb   73561812 ns     76171875 ns            8
mask | 26 |         1565489112 ns   1566406250 ns            8
mask | 26 | avx      102338750 ns    109375000 ns            8
mask | 26 |     tbb  258834012 ns    244140625 ns            8
mask | 26 | avx tbb   73571900 ns     74218750 ns            8
```

</details>

