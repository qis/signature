# Windows
Benchmark results sorted by scanned memory block sizes.

## MSVC (cl)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1189 ns         3815 ns         4096
data |  1 | avx            721 ns        0.000 ns         4096
data |  1 |     tbb       5465 ns         7629 ns         4096
data |  1 | avx tbb        722 ns        0.000 ns         4096
mask |  1 |                719 ns        0.000 ns         4096
mask |  1 | avx            735 ns        0.000 ns         4096
mask |  1 |     tbb       5455 ns         7629 ns         4096
mask |  1 | avx tbb        773 ns        0.000 ns         4096

data |  2 |              20489 ns        22888 ns         4096
data |  2 | avx           1042 ns        0.000 ns         4096
data |  2 |     tbb      11080 ns         7629 ns         4096
data |  2 | avx tbb       1113 ns         3815 ns         4096
mask |  2 |              13910 ns        15259 ns         4096
mask |  2 | avx           1074 ns         3815 ns         4096
mask |  2 |     tbb       8323 ns        11444 ns         4096
mask |  2 | avx tbb       1031 ns        0.000 ns         4096

data |  3 |              14109 ns        15259 ns         4096
data |  3 | avx           1036 ns        0.000 ns         4096
data |  3 |     tbb      10057 ns        11444 ns         4096
data |  3 | avx tbb       1145 ns         3815 ns         4096
mask |  3 |              14395 ns        11444 ns         4096
mask |  3 | avx           1067 ns        0.000 ns         4096
mask |  3 |     tbb       8218 ns         3815 ns         4096
mask |  3 | avx tbb       1077 ns        0.000 ns         4096

data |  4 |              10717 ns        11444 ns         4096
data |  4 | avx           1035 ns        0.000 ns         4096
data |  4 |     tbb       9717 ns        11444 ns         4096
data |  4 | avx tbb       1057 ns        0.000 ns         4096
mask |  4 |              11577 ns        11444 ns         4096
mask |  4 | avx           1013 ns        0.000 ns         4096
mask |  4 |     tbb       8400 ns        11444 ns         4096
mask |  4 | avx tbb       1069 ns        0.000 ns         4096

data |  5 |               9162 ns         7629 ns         4096
data |  5 | avx           1082 ns        0.000 ns         4096
data |  5 |     tbb       9369 ns        11444 ns         4096
data |  5 | avx tbb       1024 ns        0.000 ns         4096
mask |  5 |              11443 ns        11444 ns         4096
mask |  5 | avx           1012 ns        0.000 ns         4096
mask |  5 |     tbb       8243 ns         7629 ns         4096
mask |  5 | avx tbb       1019 ns        0.000 ns         4096

data |  6 |               7326 ns         7629 ns         4096
data |  6 | avx           1025 ns        0.000 ns         4096
data |  6 |     tbb       9203 ns        11444 ns         4096
data |  6 | avx tbb       1096 ns        0.000 ns         4096
mask |  6 |              11682 ns        11444 ns         4096
mask |  6 | avx           1030 ns        0.000 ns         4096
mask |  6 |     tbb       8293 ns         7629 ns         4096
mask |  6 | avx tbb       1099 ns         3815 ns         4096

data |  7 |               6873 ns         7629 ns         4096
data |  7 | avx           1093 ns        0.000 ns         4096
data |  7 |     tbb       9244 ns         7629 ns         4096
data |  7 | avx tbb       1082 ns        0.000 ns         4096
mask |  7 |              11449 ns        15259 ns         4096
mask |  7 | avx           1019 ns        0.000 ns         4096
mask |  7 |     tbb       8240 ns         7629 ns         4096
mask |  7 | avx tbb       1080 ns         3815 ns         4096

data |  8 |               6162 ns         7629 ns         4096
data |  8 | avx           1075 ns         3815 ns         4096
data |  8 |     tbb       8987 ns        11444 ns         4096
data |  8 | avx tbb       1067 ns         3815 ns         4096
mask |  8 |              11481 ns        11444 ns         4096
mask |  8 | avx           1091 ns        0.000 ns         4096
mask |  8 |     tbb       8327 ns         7629 ns         4096
mask |  8 | avx tbb       1101 ns         3815 ns         4096

data |  9 |               5436 ns         7629 ns         4096
data |  9 | avx           1024 ns        0.000 ns         4096
data |  9 |     tbb       9025 ns         7629 ns         4096
data |  9 | avx tbb       1074 ns        0.000 ns         4096
mask |  9 |              11946 ns         7629 ns         4096
mask |  9 | avx           1095 ns        0.000 ns         4096
mask |  9 |     tbb       8242 ns         7629 ns         4096
mask |  9 | avx tbb       1052 ns        0.000 ns         4096

data | 10 |               4711 ns         3815 ns         4096
data | 10 | avx           1023 ns        0.000 ns         4096
data | 10 |     tbb       8853 ns        11444 ns         4096
data | 10 | avx tbb       1078 ns        0.000 ns         4096
mask | 10 |              11595 ns         7629 ns         4096
mask | 10 | avx           1025 ns        0.000 ns         4096
mask | 10 |     tbb       8243 ns        11444 ns         4096
mask | 10 | avx tbb       1122 ns        0.000 ns         4096

data | 11 |               4810 ns         3815 ns         4096
data | 11 | avx           1098 ns        0.000 ns         4096
data | 11 |     tbb       8907 ns        11444 ns         4096
data | 11 | avx tbb       1128 ns         3815 ns         4096
mask | 11 |              12099 ns        15259 ns         4096
mask | 11 | avx           1109 ns        0.000 ns         4096
mask | 11 |     tbb       8329 ns         3815 ns         4096
mask | 11 | avx tbb       1099 ns        0.000 ns         4096

data | 12 |               4322 ns         3815 ns         4096
data | 12 | avx           1085 ns        0.000 ns         4096
data | 12 |     tbb       8778 ns        11444 ns         4096
data | 12 | avx tbb       1039 ns        0.000 ns         4096
mask | 12 |              11469 ns        11444 ns         4096
mask | 12 | avx           1033 ns        0.000 ns         4096
mask | 12 |     tbb       8258 ns        11444 ns         4096
mask | 12 | avx tbb       1039 ns         3815 ns         4096

data | 13 |               3816 ns         3815 ns         4096
data | 13 | avx           1017 ns        0.000 ns         4096
data | 13 |     tbb       8737 ns         7629 ns         4096
data | 13 | avx tbb       1070 ns         3815 ns         4096
mask | 13 |              11674 ns        11444 ns         4096
mask | 13 | avx           1033 ns        0.000 ns         4096
mask | 13 |     tbb       8295 ns         7629 ns         4096
mask | 13 | avx tbb       1097 ns         3815 ns         4096

data | 14 |               3831 ns         3815 ns         4096
data | 14 | avx           1076 ns        0.000 ns         4096
data | 14 |     tbb       8712 ns         7629 ns         4096
data | 14 | avx tbb       1106 ns        0.000 ns         4096
mask | 14 |              12207 ns        11444 ns         4096
mask | 14 | avx           1094 ns        0.000 ns         4096
mask | 14 |     tbb       8248 ns         7629 ns         4096
mask | 14 | avx tbb       1137 ns        0.000 ns         4096

data | 15 |               3774 ns         3815 ns         4096
data | 15 | avx           1120 ns         3815 ns         4096
data | 15 |     tbb       8619 ns         7629 ns         4096
data | 15 | avx tbb       1119 ns        0.000 ns         4096
mask | 15 |              12086 ns        11444 ns         4096
mask | 15 | avx           1102 ns         3815 ns         4096
mask | 15 |     tbb       8262 ns         7629 ns         4096
mask | 15 | avx tbb       1097 ns        0.000 ns         4096

data | 16 |               3472 ns         3815 ns         4096
data | 16 | avx           1073 ns        0.000 ns         4096
data | 16 |     tbb       8788 ns        11444 ns         4096
data | 16 | avx tbb       1067 ns        0.000 ns         4096
mask | 16 |              11428 ns        11444 ns         4096
mask | 16 | avx           1109 ns        0.000 ns         4096
mask | 16 |     tbb       8261 ns        11444 ns         4096
mask | 16 | avx tbb       1105 ns        0.000 ns         4096

data | 17 |               3314 ns         3815 ns         4096
data | 17 | avx           1044 ns         3815 ns         4096
data | 17 |     tbb       8582 ns         7629 ns         4096
data | 17 | avx tbb       1023 ns        0.000 ns         4096
mask | 17 |              11845 ns        11444 ns         4096
mask | 17 | avx           1117 ns         3815 ns         4096
mask | 17 |     tbb       8238 ns         7629 ns         4096
mask | 17 | avx tbb       1158 ns        0.000 ns         4096

data | 18 |               3315 ns         3815 ns         4096
data | 18 | avx           1122 ns        0.000 ns         4096
data | 18 |     tbb       8583 ns        11444 ns         4096
data | 18 | avx tbb       1079 ns        0.000 ns         4096
mask | 18 |              12242 ns        11444 ns         4096
mask | 18 | avx           1102 ns         3815 ns         4096
mask | 18 |     tbb       8308 ns        11444 ns         4096
mask | 18 | avx tbb       1147 ns         3815 ns         4096

data | 19 |               3207 ns        0.000 ns         4096
data | 19 | avx           1124 ns         3815 ns         4096
data | 19 |     tbb       8541 ns        11444 ns         4096
data | 19 | avx tbb       1095 ns        0.000 ns         4096
mask | 19 |              12168 ns        11444 ns         4096
mask | 19 | avx           1117 ns        0.000 ns         4096
mask | 19 |     tbb       8276 ns        11444 ns         4096
mask | 19 | avx tbb       1108 ns         3815 ns         4096

data | 20 |               2956 ns         3815 ns         4096
data | 20 | avx           1076 ns         3815 ns         4096
data | 20 |     tbb       8566 ns        11444 ns         4096
data | 20 | avx tbb       1076 ns        0.000 ns         4096
mask | 20 |              12198 ns         7629 ns         4096
mask | 20 | avx           1106 ns        0.000 ns         4096
mask | 20 |     tbb       8524 ns        11444 ns         4096
mask | 20 | avx tbb       1117 ns        0.000 ns         4096

data | 21 |               2872 ns        0.000 ns         4096
data | 21 | avx           1088 ns        0.000 ns         4096
data | 21 |     tbb       8619 ns        11444 ns         4096
data | 21 | avx tbb       1092 ns         3815 ns         4096
mask | 21 |              12247 ns        11444 ns         4096
mask | 21 | avx           1114 ns        0.000 ns         4096
mask | 21 |     tbb       8255 ns        11444 ns         4096
mask | 21 | avx tbb       1159 ns         3815 ns         4096

data | 22 |               2854 ns         3815 ns         4096
data | 22 | avx           1129 ns        0.000 ns         4096
data | 22 |     tbb       8456 ns        11444 ns         4096
data | 22 | avx tbb       1079 ns        0.000 ns         4096
mask | 22 |              11798 ns        11444 ns         4096
mask | 22 | avx           1116 ns        0.000 ns         4096
mask | 22 |     tbb       8267 ns        11444 ns         4096
mask | 22 | avx tbb       1133 ns         3815 ns         4096

data | 23 |               2655 ns         3815 ns         4096
data | 23 | avx           1068 ns        0.000 ns         4096
data | 23 |     tbb       8558 ns         7629 ns         4096
data | 23 | avx tbb       1078 ns        0.000 ns         4096
mask | 23 |              11359 ns        11444 ns         4096
mask | 23 | avx           1055 ns        0.000 ns         4096
mask | 23 |     tbb       8281 ns        11444 ns         4096
mask | 23 | avx tbb       1042 ns        0.000 ns         4096

data | 24 |               2463 ns         3815 ns         4096
data | 24 | avx           1012 ns         3815 ns         4096
data | 24 |     tbb       8442 ns        11444 ns         4096
data | 24 | avx tbb       1028 ns        0.000 ns         4096
mask | 24 |              11101 ns        11444 ns         4096
mask | 24 | avx           1055 ns        0.000 ns         4096
mask | 24 |     tbb       8247 ns         7629 ns         4096
mask | 24 | avx tbb       1042 ns        0.000 ns         4096

data | 25 |               2398 ns         3815 ns         4096
data | 25 | avx           1007 ns         3815 ns         4096
data | 25 |     tbb       8383 ns         7629 ns         4096
data | 25 | avx tbb       1024 ns         3815 ns         4096
mask | 25 |              11158 ns        11444 ns         4096
mask | 25 | avx           1071 ns        0.000 ns         4096
mask | 25 |     tbb       8307 ns        11444 ns         4096
mask | 25 | avx tbb       1070 ns         3815 ns         4096

data | 26 |               2327 ns        0.000 ns         4096
data | 26 | avx           1013 ns        0.000 ns         4096
data | 26 |     tbb       8511 ns         7629 ns         4096
data | 26 | avx tbb       1032 ns        0.000 ns         4096
mask | 26 |              11094 ns        15259 ns         4096
mask | 26 | avx           1053 ns        0.000 ns         4096
mask | 26 |     tbb       8272 ns         3815 ns         4096
mask | 26 | avx tbb       1086 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1352 ns        0.000 ns         4096
data |  1 | avx           1361 ns         3815 ns         4096
data |  1 |     tbb       5830 ns         7629 ns         4096
data |  1 | avx tbb       1419 ns         3815 ns         4096
mask |  1 |               1454 ns         3815 ns         4096
mask |  1 | avx           1460 ns         3815 ns         4096
mask |  1 |     tbb       5851 ns         3815 ns         4096
mask |  1 | avx tbb       1445 ns        0.000 ns         4096

data |  2 |              81462 ns        83923 ns         4096
data |  2 | avx           2170 ns        0.000 ns         4096
data |  2 |     tbb      17328 ns        19073 ns         4096
data |  2 | avx tbb       2303 ns         3815 ns         4096
mask |  2 |              50196 ns        49591 ns         4096
mask |  2 | avx           2347 ns         3815 ns         4096
mask |  2 |     tbb      15001 ns        19073 ns         4096
mask |  2 | avx tbb       2430 ns         3815 ns         4096

data |  3 |              54792 ns        57220 ns         4096
data |  3 | avx           2150 ns        0.000 ns         4096
data |  3 |     tbb      14879 ns        15259 ns         4096
data |  3 | avx tbb       2261 ns        0.000 ns         4096
mask |  3 |              52268 ns        53406 ns         4096
mask |  3 | avx           2406 ns         3815 ns         4096
mask |  3 |     tbb      14870 ns        15259 ns         4096
mask |  3 | avx tbb       2603 ns         3815 ns         4096

data |  4 |              42242 ns        41962 ns         4096
data |  4 | avx           2171 ns         3815 ns         4096
data |  4 |     tbb      13327 ns        11444 ns         4096
data |  4 | avx tbb       2260 ns         3815 ns         4096
mask |  4 |              45950 ns        41962 ns         4096
mask |  4 | avx           2368 ns         3815 ns         4096
mask |  4 |     tbb      14883 ns        19073 ns         4096
mask |  4 | avx tbb       2499 ns        0.000 ns         4096

data |  5 |              33778 ns        38147 ns         4096
data |  5 | avx           2175 ns         3815 ns         4096
data |  5 |     tbb      12326 ns        11444 ns         4096
data |  5 | avx tbb       2243 ns         3815 ns         4096
mask |  5 |              47512 ns        49591 ns         4096
mask |  5 | avx           2353 ns        0.000 ns         4096
mask |  5 |     tbb      14854 ns        15259 ns         4096
mask |  5 | avx tbb       2506 ns         3815 ns         4096

data |  6 |              28709 ns        30518 ns         4096
data |  6 | avx           2251 ns         3815 ns         4096
data |  6 |     tbb      11733 ns        15259 ns         4096
data |  6 | avx tbb       2263 ns        0.000 ns         4096
mask |  6 |              44434 ns        41962 ns         4096
mask |  6 | avx           2467 ns         3815 ns         4096
mask |  6 |     tbb      14983 ns        15259 ns         4096
mask |  6 | avx tbb       2456 ns        0.000 ns         4096

data |  7 |              23225 ns        26703 ns         4096
data |  7 | avx           2152 ns         3815 ns         4096
data |  7 |     tbb      11272 ns        11444 ns         4096
data |  7 | avx tbb       2260 ns         3815 ns         4096
mask |  7 |              44696 ns        45776 ns         4096
mask |  7 | avx           2370 ns        0.000 ns         4096
mask |  7 |     tbb      14967 ns        11444 ns         4096
mask |  7 | avx tbb       2488 ns         3815 ns         4096

data |  8 |              21060 ns        22888 ns         4096
data |  8 | avx           2277 ns         3815 ns         4096
data |  8 |     tbb      10940 ns        11444 ns         4096
data |  8 | avx tbb       2280 ns         3815 ns         4096
mask |  8 |              44615 ns        45776 ns         4096
mask |  8 | avx           2366 ns         3815 ns         4096
mask |  8 |     tbb      14956 ns        19073 ns         4096
mask |  8 | avx tbb       2503 ns         3815 ns         4096

data |  9 |              19076 ns        22888 ns         4096
data |  9 | avx           2274 ns         3815 ns         4096
data |  9 |     tbb      10760 ns        11444 ns         4096
data |  9 | avx tbb       2247 ns         3815 ns         4096
mask |  9 |              44542 ns        45776 ns         4096
mask |  9 | avx           2355 ns         3815 ns         4096
mask |  9 |     tbb      14896 ns        15259 ns         4096
mask |  9 | avx tbb       2522 ns         3815 ns         4096

data | 10 |              17485 ns        15259 ns         4096
data | 10 | avx           2252 ns         3815 ns         4096
data | 10 |     tbb      10596 ns         7629 ns         4096
data | 10 | avx tbb       2231 ns         3815 ns         4096
mask | 10 |              44482 ns        45776 ns         4096
mask | 10 | avx           2364 ns        0.000 ns         4096
mask | 10 |     tbb      14866 ns        15259 ns         4096
mask | 10 | avx tbb       2494 ns         7629 ns         4096

data | 11 |              15865 ns        11444 ns         4096
data | 11 | avx           2274 ns        0.000 ns         4096
data | 11 |     tbb      10441 ns         7629 ns         4096
data | 11 | avx tbb       2251 ns         3815 ns         4096
mask | 11 |              44638 ns        45776 ns         4096
mask | 11 | avx           2376 ns         3815 ns         4096
mask | 11 |     tbb      14834 ns        15259 ns         4096
mask | 11 | avx tbb       2465 ns        0.000 ns         4096

data | 12 |              14546 ns        15259 ns         4096
data | 12 | avx           2290 ns        0.000 ns         4096
data | 12 |     tbb      10167 ns        11444 ns         4096
data | 12 | avx tbb       2252 ns         3815 ns         4096
mask | 12 |              44592 ns        45776 ns         4096
mask | 12 | avx           2376 ns         3815 ns         4096
mask | 12 |     tbb      14868 ns        19073 ns         4096
mask | 12 | avx tbb       2497 ns         3815 ns         4096

data | 13 |              13285 ns        11444 ns         4096
data | 13 | avx           2299 ns         3815 ns         4096
data | 13 |     tbb      10047 ns        15259 ns         4096
data | 13 | avx tbb       2303 ns        0.000 ns         4096
mask | 13 |              44959 ns        41962 ns         4096
mask | 13 | avx           2534 ns        0.000 ns         4096
mask | 13 |     tbb      14869 ns        15259 ns         4096
mask | 13 | avx tbb       2497 ns         3815 ns         4096

data | 14 |              12614 ns        15259 ns         4096
data | 14 | avx           2269 ns         3815 ns         4096
data | 14 |     tbb       9794 ns        15259 ns         4096
data | 14 | avx tbb       2327 ns         3815 ns         4096
mask | 14 |              43255 ns        41962 ns         4096
mask | 14 | avx           2385 ns         3815 ns         4096
mask | 14 |     tbb      14891 ns        15259 ns         4096
mask | 14 | avx tbb       2513 ns         3815 ns         4096

data | 15 |              11593 ns        11444 ns         4096
data | 15 | avx           2143 ns         3815 ns         4096
data | 15 |     tbb       9706 ns        11444 ns         4096
data | 15 | avx tbb       2284 ns        0.000 ns         4096
mask | 15 |              43395 ns        41962 ns         4096
mask | 15 | avx           2396 ns         3815 ns         4096
mask | 15 |     tbb      14911 ns        15259 ns         4096
mask | 15 | avx tbb       2524 ns         3815 ns         4096

data | 16 |              10865 ns        11444 ns         4096
data | 16 | avx           2174 ns         3815 ns         4096
data | 16 |     tbb       9569 ns        11444 ns         4096
data | 16 | avx tbb       2262 ns         3815 ns         4096
mask | 16 |              45013 ns        41962 ns         4096
mask | 16 | avx           2386 ns         3815 ns         4096
mask | 16 |     tbb      15038 ns        11444 ns         4096
mask | 16 | avx tbb       2515 ns        0.000 ns         4096

data | 17 |              10570 ns         7629 ns         4096
data | 17 | avx           2314 ns         3815 ns         4096
data | 17 |     tbb       9564 ns         7629 ns         4096
data | 17 | avx tbb       2206 ns         3815 ns         4096
mask | 17 |              43141 ns        41962 ns         4096
mask | 17 | avx           2383 ns         3815 ns         4096
mask | 17 |     tbb      14994 ns        15259 ns         4096
mask | 17 | avx tbb       2547 ns         3815 ns         4096

data | 18 |              10075 ns        11444 ns         4096
data | 18 | avx           2138 ns        0.000 ns         4096
data | 18 |     tbb       9493 ns         7629 ns         4096
data | 18 | avx tbb       2304 ns         3815 ns         4096
mask | 18 |              43351 ns        45776 ns         4096
mask | 18 | avx           2397 ns        0.000 ns         4096
mask | 18 |     tbb      15391 ns        19073 ns         4096
mask | 18 | avx tbb       2503 ns        0.000 ns         4096

data | 19 |               9517 ns         3815 ns         4096
data | 19 | avx           2163 ns        0.000 ns         4096
data | 19 |     tbb       9430 ns        15259 ns         4096
data | 19 | avx tbb       2386 ns         3815 ns         4096
mask | 19 |              45080 ns        45776 ns         4096
mask | 19 | avx           2374 ns         3815 ns         4096
mask | 19 |     tbb      15344 ns        19073 ns         4096
mask | 19 | avx tbb       2499 ns         3815 ns         4096

data | 20 |               9438 ns        11444 ns         4096
data | 20 | avx           2296 ns        0.000 ns         4096
data | 20 |     tbb       9428 ns        11444 ns         4096
data | 20 | avx tbb       2159 ns         3815 ns         4096
mask | 20 |              42831 ns        41962 ns         4096
mask | 20 | avx           2386 ns         3815 ns         4096
mask | 20 |     tbb      14840 ns        15259 ns         4096
mask | 20 | avx tbb       2547 ns         3815 ns         4096

data | 21 |               8673 ns         7629 ns         4096
data | 21 | avx           2146 ns         3815 ns         4096
data | 21 |     tbb       9358 ns        11444 ns         4096
data | 21 | avx tbb       2271 ns        0.000 ns         4096
mask | 21 |              43205 ns        34332 ns         4096
mask | 21 | avx           2378 ns         3815 ns         4096
mask | 21 |     tbb      14878 ns        15259 ns         4096
mask | 21 | avx tbb       2507 ns         3815 ns         4096

data | 22 |               8621 ns        11444 ns         4096
data | 22 | avx           2278 ns         3815 ns         4096
data | 22 |     tbb       9418 ns        11444 ns         4096
data | 22 | avx tbb       2156 ns        0.000 ns         4096
mask | 22 |              42861 ns        45776 ns         4096
mask | 22 | avx           2378 ns        0.000 ns         4096
mask | 22 |     tbb      15011 ns        19073 ns         4096
mask | 22 | avx tbb       2505 ns         3815 ns         4096

data | 23 |               7998 ns         7629 ns         4096
data | 23 | avx           2137 ns        0.000 ns         4096
data | 23 |     tbb       9186 ns        11444 ns         4096
data | 23 | avx tbb       2291 ns        0.000 ns         4096
mask | 23 |              43124 ns        45776 ns         4096
mask | 23 | avx           2384 ns         3815 ns         4096
mask | 23 |     tbb      14860 ns        11444 ns         4096
mask | 23 | avx tbb       2470 ns         3815 ns         4096

data | 24 |               7679 ns         3815 ns         4096
data | 24 | avx           2159 ns         3815 ns         4096
data | 24 |     tbb       9101 ns         3815 ns         4096
data | 24 | avx tbb       2173 ns         3815 ns         4096
mask | 24 |              43338 ns        45776 ns         4096
mask | 24 | avx           2555 ns         3815 ns         4096
mask | 24 |     tbb      15111 ns        15259 ns         4096
mask | 24 | avx tbb       2494 ns         3815 ns         4096

data | 25 |               7600 ns         7629 ns         4096
data | 25 | avx           2159 ns         3815 ns         4096
data | 25 |     tbb       9057 ns        11444 ns         4096
data | 25 | avx tbb       2340 ns         3815 ns         4096
mask | 25 |              44807 ns        49591 ns         4096
mask | 25 | avx           2425 ns         3815 ns         4096
mask | 25 |     tbb      15237 ns        15259 ns         4096
mask | 25 | avx tbb       2528 ns        0.000 ns         4096

data | 26 |               7156 ns         7629 ns         4096
data | 26 | avx           2157 ns         3815 ns         4096
data | 26 |     tbb       9045 ns        11444 ns         4096
data | 26 | avx tbb       2225 ns        0.000 ns         4096
mask | 26 |              44513 ns        41962 ns         4096
mask | 26 | avx           2380 ns         3815 ns         4096
mask | 26 |     tbb      15170 ns        19073 ns         4096
mask | 26 | avx tbb       2544 ns         3815 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               5002 ns        0.000 ns         2048
data |  1 | avx           5067 ns         7629 ns         2048
data |  1 |     tbb       9509 ns        15259 ns         2048
data |  1 | avx tbb       5649 ns         7629 ns         2048
mask |  1 |               5489 ns        15259 ns         2048
mask |  1 | avx           5361 ns        15259 ns         2048
mask |  1 |     tbb       9586 ns        15259 ns         2048
mask |  1 | avx tbb       4964 ns        0.000 ns         2048

data |  2 |             315391 ns       312805 ns         2048
data |  2 | avx           7293 ns         7629 ns         2048
data |  2 |     tbb      44585 ns        61035 ns         2048
data |  2 | avx tbb       7928 ns        15259 ns         2048
mask |  2 |             194841 ns       198364 ns         2048
mask |  2 | avx           7906 ns         7629 ns         2048
mask |  2 |     tbb      42383 ns        38147 ns         2048
mask |  2 | avx tbb       8262 ns        0.000 ns         2048

data |  3 |             212403 ns       213623 ns         2048
data |  3 | avx           7340 ns        15259 ns         2048
data |  3 |     tbb      33345 ns        45776 ns         2048
data |  3 | avx tbb       7754 ns        0.000 ns         2048
mask |  3 |             192538 ns       198364 ns         2048
mask |  3 | avx           7884 ns        15259 ns         2048
mask |  3 |     tbb      42130 ns        15259 ns         2048
mask |  3 | avx tbb       8306 ns         7629 ns         2048

data |  4 |             160543 ns       152588 ns         2048
data |  4 | avx           7316 ns        15259 ns         2048
data |  4 |     tbb      27961 ns        30518 ns         2048
data |  4 | avx tbb       7712 ns        15259 ns         2048
mask |  4 |             195743 ns       175476 ns         2048
mask |  4 | avx           7920 ns        0.000 ns         2048
mask |  4 |     tbb      42053 ns        22888 ns         2048
mask |  4 | avx tbb       8307 ns        15259 ns         2048

data |  5 |             130392 ns       122070 ns         2048
data |  5 | avx           7390 ns         7629 ns         2048
data |  5 |     tbb      24668 ns        22888 ns         2048
data |  5 | avx tbb       7715 ns         7629 ns         2048
mask |  5 |             195545 ns       190735 ns         2048
mask |  5 | avx           7889 ns         7629 ns         2048
mask |  5 |     tbb      42098 ns        45776 ns         2048
mask |  5 | avx tbb       8286 ns        0.000 ns         2048

data |  6 |             109295 ns       122070 ns         2048
data |  6 | avx           7360 ns         7629 ns         2048
data |  6 |     tbb      22555 ns        22888 ns         2048
data |  6 | avx tbb       7807 ns         7629 ns         2048
mask |  6 |             176977 ns       183105 ns         2048
mask |  6 | avx           7871 ns        15259 ns         2048
mask |  6 |     tbb      42106 ns        53406 ns         2048
mask |  6 | avx tbb       8339 ns        15259 ns         2048

data |  7 |              93628 ns        91553 ns         2048
data |  7 | avx           7352 ns        15259 ns         2048
data |  7 |     tbb      21199 ns        0.000 ns         2048
data |  7 | avx tbb       7580 ns        0.000 ns         2048
mask |  7 |             180312 ns       183105 ns         2048
mask |  7 | avx           7863 ns        0.000 ns         2048
mask |  7 |     tbb      42403 ns        38147 ns         2048
mask |  7 | avx tbb       8384 ns        15259 ns         2048

data |  8 |              82667 ns        68665 ns         2048
data |  8 | avx           7322 ns         7629 ns         2048
data |  8 |     tbb      20230 ns        30518 ns         2048
data |  8 | avx tbb       7599 ns        15259 ns         2048
mask |  8 |             184199 ns       190735 ns         2048
mask |  8 | avx           7869 ns         7629 ns         2048
mask |  8 |     tbb      42992 ns        45776 ns         2048
mask |  8 | avx tbb       8506 ns         7629 ns         2048

data |  9 |              71703 ns        76294 ns         2048
data |  9 | avx           7287 ns        15259 ns         2048
data |  9 |     tbb      18934 ns        22888 ns         2048
data |  9 | avx tbb       7579 ns         7629 ns         2048
mask |  9 |             176866 ns       175476 ns         2048
mask |  9 | avx           7836 ns        0.000 ns         2048
mask |  9 |     tbb      41981 ns        45776 ns         2048
mask |  9 | avx tbb       8172 ns        15259 ns         2048

data | 10 |              66881 ns        68665 ns         2048
data | 10 | avx           7173 ns        0.000 ns         2048
data | 10 |     tbb      18211 ns        15259 ns         2048
data | 10 | avx tbb       7669 ns        15259 ns         2048
mask | 10 |             179872 ns       190735 ns         2048
mask | 10 | avx           7939 ns         7629 ns         2048
mask | 10 |     tbb      42136 ns        30518 ns         2048
mask | 10 | avx tbb       8262 ns        15259 ns         2048

data | 11 |              61063 ns        68665 ns         2048
data | 11 | avx           7346 ns         7629 ns         2048
data | 11 |     tbb      17606 ns        22888 ns         2048
data | 11 | avx tbb       7567 ns        0.000 ns         2048
mask | 11 |             178253 ns       175476 ns         2048
mask | 11 | avx           7843 ns         7629 ns         2048
mask | 11 |     tbb      42695 ns        45776 ns         2048
mask | 11 | avx tbb       8838 ns         7629 ns         2048

data | 12 |              54401 ns        68665 ns         2048
data | 12 | avx           7415 ns        15259 ns         2048
data | 12 |     tbb      17076 ns        15259 ns         2048
data | 12 | avx tbb       7667 ns        0.000 ns         2048
mask | 12 |             177704 ns       175476 ns         2048
mask | 12 | avx           7851 ns        15259 ns         2048
mask | 12 |     tbb      42047 ns        38147 ns         2048
mask | 12 | avx tbb       8288 ns        15259 ns         2048

data | 13 |              52177 ns        61035 ns         2048
data | 13 | avx           7469 ns        15259 ns         2048
data | 13 |     tbb      17094 ns        30518 ns         2048
data | 13 | avx tbb       7501 ns        0.000 ns         2048
mask | 13 |             175942 ns       175476 ns         2048
mask | 13 | avx           7845 ns        0.000 ns         2048
mask | 13 |     tbb      42581 ns        53406 ns         2048
mask | 13 | avx tbb       8235 ns         7629 ns         2048

data | 14 |              46477 ns        53406 ns         2048
data | 14 | avx           7324 ns         7629 ns         2048
data | 14 |     tbb      16226 ns        15259 ns         2048
data | 14 | avx tbb       7699 ns        0.000 ns         2048
mask | 14 |             176482 ns       160217 ns         2048
mask | 14 | avx           7874 ns         7629 ns         2048
mask | 14 |     tbb      42376 ns        53406 ns         2048
mask | 14 | avx tbb       8446 ns        15259 ns         2048

data | 15 |              43550 ns        45776 ns         2048
data | 15 | avx           7276 ns        0.000 ns         2048
data | 15 |     tbb      16245 ns        30518 ns         2048
data | 15 | avx tbb       7581 ns        0.000 ns         2048
mask | 15 |             176408 ns       183105 ns         2048
mask | 15 | avx           7900 ns         7629 ns         2048
mask | 15 |     tbb      42219 ns        53406 ns         2048
mask | 15 | avx tbb       8366 ns         7629 ns         2048

data | 16 |              42195 ns        45776 ns         2048
data | 16 | avx           7832 ns        0.000 ns         2048
data | 16 |     tbb      15658 ns        30518 ns         2048
data | 16 | avx tbb       7650 ns        0.000 ns         2048
mask | 16 |             175783 ns       183105 ns         2048
mask | 16 | avx           7862 ns         7629 ns         2048
mask | 16 |     tbb      42203 ns        38147 ns         2048
mask | 16 | avx tbb       8429 ns         7629 ns         2048

data | 17 |              41010 ns        45776 ns         2048
data | 17 | avx           7697 ns         7629 ns         2048
data | 17 |     tbb      15506 ns        15259 ns         2048
data | 17 | avx tbb       7776 ns         7629 ns         2048
mask | 17 |             176707 ns       183105 ns         2048
mask | 17 | avx           7919 ns        15259 ns         2048
mask | 17 |     tbb      42177 ns        38147 ns         2048
mask | 17 | avx tbb       8350 ns        15259 ns         2048

data | 18 |              38627 ns        30518 ns         2048
data | 18 | avx           7425 ns         7629 ns         2048
data | 18 |     tbb      15877 ns        15259 ns         2048
data | 18 | avx tbb       7706 ns         7629 ns         2048
mask | 18 |             176498 ns       175476 ns         2048
mask | 18 | avx           7828 ns        0.000 ns         2048
mask | 18 |     tbb      42349 ns        38147 ns         2048
mask | 18 | avx tbb       8283 ns        15259 ns         2048

data | 19 |              36586 ns        45776 ns         2048
data | 19 | avx           7312 ns        0.000 ns         2048
data | 19 |     tbb      15037 ns        22888 ns         2048
data | 19 | avx tbb       7662 ns         7629 ns         2048
mask | 19 |             176827 ns       175476 ns         2048
mask | 19 | avx           7864 ns         7629 ns         2048
mask | 19 |     tbb      43326 ns        45776 ns         2048
mask | 19 | avx tbb       8262 ns        15259 ns         2048

data | 20 |              32865 ns        38147 ns         2048
data | 20 | avx           7209 ns        15259 ns         2048
data | 20 |     tbb      14840 ns        22888 ns         2048
data | 20 | avx tbb       7531 ns        15259 ns         2048
mask | 20 |             175916 ns       167847 ns         2048
mask | 20 | avx           7832 ns         7629 ns         2048
mask | 20 |     tbb      42160 ns        30518 ns         2048
mask | 20 | avx tbb       8275 ns         7629 ns         2048

data | 21 |              33376 ns        38147 ns         2048
data | 21 | avx           7487 ns        0.000 ns         2048
data | 21 |     tbb      14676 ns         7629 ns         2048
data | 21 | avx tbb       7523 ns        0.000 ns         2048
mask | 21 |             172909 ns       160217 ns         2048
mask | 21 | avx           7833 ns        0.000 ns         2048
mask | 21 |     tbb      42106 ns        30518 ns         2048
mask | 21 | avx tbb       8208 ns         7629 ns         2048

data | 22 |              31365 ns        22888 ns         2048
data | 22 | avx           7670 ns        0.000 ns         2048
data | 22 |     tbb      14480 ns         7629 ns         2048
data | 22 | avx tbb       7523 ns         7629 ns         2048
mask | 22 |             175646 ns       160217 ns         2048
mask | 22 | avx           7801 ns         7629 ns         2048
mask | 22 |     tbb      42121 ns        45776 ns         2048
mask | 22 | avx tbb       8377 ns         7629 ns         2048

data | 23 |              29877 ns        30518 ns         2048
data | 23 | avx           7827 ns         7629 ns         2048
data | 23 |     tbb      14488 ns        15259 ns         2048
data | 23 | avx tbb       7676 ns        0.000 ns         2048
mask | 23 |             176003 ns       175476 ns         2048
mask | 23 | avx           7977 ns         7629 ns         2048
mask | 23 |     tbb      42399 ns        45776 ns         2048
mask | 23 | avx tbb       8411 ns         7629 ns         2048

data | 24 |              28690 ns        30518 ns         2048
data | 24 | avx           7784 ns        15259 ns         2048
data | 24 |     tbb      14271 ns        15259 ns         2048
data | 24 | avx tbb       7585 ns        15259 ns         2048
mask | 24 |             174198 ns       183105 ns         2048
mask | 24 | avx           7941 ns         7629 ns         2048
mask | 24 |     tbb      42144 ns        53406 ns         2048
mask | 24 | avx tbb       8412 ns        15259 ns         2048

data | 25 |              27279 ns        22888 ns         2048
data | 25 | avx           7792 ns        0.000 ns         2048
data | 25 |     tbb      14196 ns        22888 ns         2048
data | 25 | avx tbb       7686 ns        0.000 ns         2048
mask | 25 |             176308 ns       175476 ns         2048
mask | 25 | avx           7942 ns         7629 ns         2048
mask | 25 |     tbb      42243 ns        53406 ns         2048
mask | 25 | avx tbb       8298 ns        0.000 ns         2048

data | 26 |              26196 ns        22888 ns         2048
data | 26 | avx           7769 ns         7629 ns         2048
data | 26 |     tbb      14194 ns        15259 ns         2048
data | 26 | avx tbb       7616 ns        15259 ns         2048
mask | 26 |             176417 ns       183105 ns         2048
mask | 26 | avx           7867 ns         7629 ns         2048
mask | 26 |     tbb      42648 ns        53406 ns         2048
mask | 26 | avx tbb       8445 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              19091 ns        15259 ns         1024
data |  1 | avx          19954 ns        0.000 ns         1024
data |  1 |     tbb      17749 ns        30518 ns         1024
data |  1 | avx tbb      16421 ns        0.000 ns         1024
mask |  1 |              20675 ns        30518 ns         1024
mask |  1 | avx          19318 ns        15259 ns         1024
mask |  1 |     tbb      17196 ns        15259 ns         1024
mask |  1 | avx tbb      16675 ns        15259 ns         1024

data |  2 |            1259008 ns      1266479 ns         1024
data |  2 | avx          26362 ns        45776 ns         1024
data |  2 |     tbb     139547 ns       152588 ns         1024
data |  2 | avx tbb      17638 ns        0.000 ns         1024
mask |  2 |             800249 ns       808716 ns         1024
mask |  2 | avx          29204 ns        30518 ns         1024
mask |  2 |     tbb     140449 ns       137329 ns         1024
mask |  2 | avx tbb      17301 ns        15259 ns         1024

data |  3 |             840748 ns       823975 ns         1024
data |  3 | avx          26238 ns        30518 ns         1024
data |  3 |     tbb      96550 ns       106812 ns         1024
data |  3 | avx tbb      17871 ns        0.000 ns         1024
mask |  3 |             760089 ns       793457 ns         1024
mask |  3 | avx          29209 ns        30518 ns         1024
mask |  3 |     tbb     140233 ns        91553 ns         1024
mask |  3 | avx tbb      17484 ns        45776 ns         1024

data |  4 |             632972 ns       640869 ns         1024
data |  4 | avx          26356 ns        15259 ns         1024
data |  4 |     tbb      76601 ns        91553 ns         1024
data |  4 | avx tbb      18166 ns        15259 ns         1024
mask |  4 |             781651 ns       793457 ns         1024
mask |  4 | avx          29145 ns        30518 ns         1024
mask |  4 |     tbb     141591 ns       137329 ns         1024
mask |  4 | avx tbb      17499 ns        15259 ns         1024

data |  5 |             509622 ns       534058 ns         1024
data |  5 | avx          26306 ns        45776 ns         1024
data |  5 |     tbb      63084 ns        76294 ns         1024
data |  5 | avx tbb      17728 ns        15259 ns         1024
mask |  5 |             774355 ns       762939 ns         1024
mask |  5 | avx          29274 ns        30518 ns         1024
mask |  5 |     tbb     139883 ns       152588 ns         1024
mask |  5 | avx tbb      17748 ns        30518 ns         1024

data |  6 |             426301 ns       411987 ns         1024
data |  6 | avx          26709 ns        30518 ns         1024
data |  6 |     tbb      56501 ns        45776 ns         1024
data |  6 | avx tbb      17776 ns        30518 ns         1024
mask |  6 |             747986 ns       717163 ns         1024
mask |  6 | avx          29169 ns        15259 ns         1024
mask |  6 |     tbb     139133 ns       183105 ns         1024
mask |  6 | avx tbb      17736 ns        30518 ns         1024

data |  7 |             365639 ns       366211 ns         1024
data |  7 | avx          26169 ns        15259 ns         1024
data |  7 |     tbb      49233 ns        45776 ns         1024
data |  7 | avx tbb      17211 ns        30518 ns         1024
mask |  7 |             768701 ns       778198 ns         1024
mask |  7 | avx          29046 ns        30518 ns         1024
mask |  7 |     tbb     141023 ns       152588 ns         1024
mask |  7 | avx tbb      17425 ns        15259 ns         1024

data |  8 |             321486 ns       320435 ns         1024
data |  8 | avx          26277 ns        45776 ns         1024
data |  8 |     tbb      43884 ns        45776 ns         1024
data |  8 | avx tbb      17817 ns        30518 ns         1024
mask |  8 |             751471 ns       732422 ns         1024
mask |  8 | avx          29094 ns        15259 ns         1024
mask |  8 |     tbb     139637 ns       167847 ns         1024
mask |  8 | avx tbb      17345 ns        15259 ns         1024

data |  9 |             284945 ns       320435 ns         1024
data |  9 | avx          26573 ns        0.000 ns         1024
data |  9 |     tbb      40748 ns        61035 ns         1024
data |  9 | avx tbb      17756 ns        15259 ns         1024
mask |  9 |             727279 ns       686646 ns         1024
mask |  9 | avx          29140 ns        30518 ns         1024
mask |  9 |     tbb     141956 ns       137329 ns         1024
mask |  9 | avx tbb      17762 ns        15259 ns         1024

data | 10 |             256211 ns       244141 ns         1024
data | 10 | avx          26317 ns        0.000 ns         1024
data | 10 |     tbb      39081 ns        61035 ns         1024
data | 10 | avx tbb      17939 ns        0.000 ns         1024
mask | 10 |             739930 ns       747681 ns         1024
mask | 10 | avx          29227 ns        30518 ns         1024
mask | 10 |     tbb     141049 ns       183105 ns         1024
mask | 10 | avx tbb      17331 ns        45776 ns         1024

data | 11 |             235135 ns       259399 ns         1024
data | 11 | avx          26804 ns        30518 ns         1024
data | 11 |     tbb      35832 ns        45776 ns         1024
data | 11 | avx tbb      17702 ns        15259 ns         1024
mask | 11 |             737585 ns       747681 ns         1024
mask | 11 | avx          29174 ns        30518 ns         1024
mask | 11 |     tbb     140570 ns       152588 ns         1024
mask | 11 | avx tbb      17237 ns        30518 ns         1024

data | 12 |             215640 ns       213623 ns         1024
data | 12 | avx          26327 ns        30518 ns         1024
data | 12 |     tbb      33565 ns        30518 ns         1024
data | 12 | avx tbb      17729 ns        15259 ns         1024
mask | 12 |             756820 ns       732422 ns         1024
mask | 12 | avx          29195 ns        61035 ns         1024
mask | 12 |     tbb     140359 ns       152588 ns         1024
mask | 12 | avx tbb      17436 ns        15259 ns         1024

data | 13 |             199900 ns       213623 ns         1024
data | 13 | avx          26535 ns        61035 ns         1024
data | 13 |     tbb      31898 ns        30518 ns         1024
data | 13 | avx tbb      17708 ns        30518 ns         1024
mask | 13 |             749224 ns       762939 ns         1024
mask | 13 | avx          29018 ns        30518 ns         1024
mask | 13 |     tbb     140549 ns       152588 ns         1024
mask | 13 | avx tbb      17484 ns        15259 ns         1024

data | 14 |             185011 ns       198364 ns         1024
data | 14 | avx          26354 ns        30518 ns         1024
data | 14 |     tbb      30640 ns        15259 ns         1024
data | 14 | avx tbb      17855 ns        15259 ns         1024
mask | 14 |             733012 ns       717163 ns         1024
mask | 14 | avx          29244 ns        45776 ns         1024
mask | 14 |     tbb     140553 ns       183105 ns         1024
mask | 14 | avx tbb      17500 ns        30518 ns         1024

data | 15 |             175122 ns       167847 ns         1024
data | 15 | avx          26151 ns        0.000 ns         1024
data | 15 |     tbb      29548 ns        0.000 ns         1024
data | 15 | avx tbb      17526 ns        45776 ns         1024
mask | 15 |             746589 ns       778198 ns         1024
mask | 15 | avx          28932 ns        30518 ns         1024
mask | 15 |     tbb     141743 ns       167847 ns         1024
mask | 15 | avx tbb      17388 ns        30518 ns         1024

data | 16 |             162167 ns        91553 ns         1024
data | 16 | avx          26314 ns        45776 ns         1024
data | 16 |     tbb      29167 ns        45776 ns         1024
data | 16 | avx tbb      17633 ns        30518 ns         1024
mask | 16 |             744151 ns       778198 ns         1024
mask | 16 | avx          28962 ns        61035 ns         1024
mask | 16 |     tbb     141262 ns        91553 ns         1024
mask | 16 | avx tbb      17318 ns        15259 ns         1024

data | 17 |             154522 ns       137329 ns         1024
data | 17 | avx          26298 ns        45776 ns         1024
data | 17 |     tbb      28910 ns        45776 ns         1024
data | 17 | avx tbb      17656 ns        15259 ns         1024
mask | 17 |             741961 ns       762939 ns         1024
mask | 17 | avx          29142 ns        61035 ns         1024
mask | 17 |     tbb     141226 ns       106812 ns         1024
mask | 17 | avx tbb      17357 ns        15259 ns         1024

data | 18 |             147111 ns       106812 ns         1024
data | 18 | avx          27297 ns        30518 ns         1024
data | 18 |     tbb      28050 ns        0.000 ns         1024
data | 18 | avx tbb      17678 ns        30518 ns         1024
mask | 18 |             739183 ns       747681 ns         1024
mask | 18 | avx          29079 ns        15259 ns         1024
mask | 18 |     tbb     143054 ns       137329 ns         1024
mask | 18 | avx tbb      17642 ns        0.000 ns         1024

data | 19 |             138863 ns       122070 ns         1024
data | 19 | avx          26487 ns        45776 ns         1024
data | 19 |     tbb      26986 ns        30518 ns         1024
data | 19 | avx tbb      17388 ns        30518 ns         1024
mask | 19 |             735213 ns       747681 ns         1024
mask | 19 | avx          29211 ns        30518 ns         1024
mask | 19 |     tbb     141550 ns       183105 ns         1024
mask | 19 | avx tbb      17193 ns        15259 ns         1024

data | 20 |             132982 ns       137329 ns         1024
data | 20 | avx          26275 ns        15259 ns         1024
data | 20 |     tbb      25573 ns        15259 ns         1024
data | 20 | avx tbb      17321 ns        0.000 ns         1024
mask | 20 |             737384 ns       732422 ns         1024
mask | 20 | avx          29073 ns        30518 ns         1024
mask | 20 |     tbb     140848 ns       106812 ns         1024
mask | 20 | avx tbb      17318 ns        0.000 ns         1024

data | 21 |             125600 ns       137329 ns         1024
data | 21 | avx          26274 ns        30518 ns         1024
data | 21 |     tbb      25818 ns        30518 ns         1024
data | 21 | avx tbb      17704 ns        30518 ns         1024
mask | 21 |             754167 ns       778198 ns         1024
mask | 21 | avx          29001 ns        15259 ns         1024
mask | 21 |     tbb     140845 ns       167847 ns         1024
mask | 21 | avx tbb      17230 ns        45776 ns         1024

data | 22 |             121358 ns        91553 ns         1024
data | 22 | avx          26252 ns        45776 ns         1024
data | 22 |     tbb      24429 ns        0.000 ns         1024
data | 22 | avx tbb      17691 ns        15259 ns         1024
mask | 22 |             729185 ns       717163 ns         1024
mask | 22 | avx          29068 ns        30518 ns         1024
mask | 22 |     tbb     141344 ns       122070 ns         1024
mask | 22 | avx tbb      17191 ns        30518 ns         1024

data | 23 |             116182 ns       122070 ns         1024
data | 23 | avx          26276 ns        30518 ns         1024
data | 23 |     tbb      24643 ns        0.000 ns         1024
data | 23 | avx tbb      17522 ns        15259 ns         1024
mask | 23 |             753494 ns       762939 ns         1024
mask | 23 | avx          29210 ns        30518 ns         1024
mask | 23 |     tbb     140641 ns       152588 ns         1024
mask | 23 | avx tbb      17391 ns        15259 ns         1024

data | 24 |             111363 ns       106812 ns         1024
data | 24 | avx          26922 ns        15259 ns         1024
data | 24 |     tbb      24609 ns        0.000 ns         1024
data | 24 | avx tbb      17441 ns        30518 ns         1024
mask | 24 |             745771 ns       747681 ns         1024
mask | 24 | avx          29073 ns        0.000 ns         1024
mask | 24 |     tbb     141866 ns       152588 ns         1024
mask | 24 | avx tbb      17734 ns        15259 ns         1024

data | 25 |             106805 ns        91553 ns         1024
data | 25 | avx          26632 ns        30518 ns         1024
data | 25 |     tbb      23711 ns        61035 ns         1024
data | 25 | avx tbb      17991 ns        0.000 ns         1024
mask | 25 |             741756 ns       762939 ns         1024
mask | 25 | avx          29084 ns        0.000 ns         1024
mask | 25 |     tbb     142086 ns       167847 ns         1024
mask | 25 | avx tbb      17449 ns        15259 ns         1024

data | 26 |             102781 ns       106812 ns         1024
data | 26 | avx          26071 ns        30518 ns         1024
data | 26 |     tbb      23865 ns        15259 ns         1024
data | 26 | avx tbb      17342 ns        15259 ns         1024
mask | 26 |             750070 ns       747681 ns         1024
mask | 26 | avx          28856 ns        30518 ns         1024
mask | 26 |     tbb     141240 ns       152588 ns         1024
mask | 26 | avx tbb      17423 ns        30518 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             166898 ns       152588 ns          512
data |  1 | avx         165595 ns       122070 ns          512
data |  1 |     tbb     166359 ns       183105 ns          512
data |  1 | avx tbb     154467 ns       122070 ns          512
mask |  1 |             166806 ns       183105 ns          512
mask |  1 | avx         164993 ns       122070 ns          512
mask |  1 |     tbb     170763 ns       244141 ns          512
mask |  1 | avx tbb     154990 ns       183105 ns          512

data |  2 |            5017956 ns      4974365 ns          512
data |  2 | avx         194647 ns       152588 ns          512
data |  2 |     tbb     560243 ns       549316 ns          512
data |  2 | avx tbb     158654 ns       213623 ns          512
mask |  2 |            3222444 ns      3234863 ns          512
mask |  2 | avx         199155 ns       244141 ns          512
mask |  2 |     tbb     568805 ns       701904 ns          512
mask |  2 | avx tbb     157835 ns       122070 ns          512

data |  3 |            3351523 ns      3204346 ns          512
data |  3 | avx         194191 ns       213623 ns          512
data |  3 |     tbb     394633 ns       274658 ns          512
data |  3 | avx tbb     158264 ns       152588 ns          512
mask |  3 |            3254238 ns      3234863 ns          512
mask |  3 | avx         197254 ns       213623 ns          512
mask |  3 |     tbb     568091 ns       610352 ns          512
mask |  3 | avx tbb     157157 ns       152588 ns          512

data |  4 |            2526724 ns      2532959 ns          512
data |  4 | avx         194493 ns       183105 ns          512
data |  4 |     tbb     313261 ns       244141 ns          512
data |  4 | avx tbb     158051 ns       152588 ns          512
mask |  4 |            3384610 ns      3387451 ns          512
mask |  4 | avx         194209 ns       213623 ns          512
mask |  4 |     tbb     565405 ns       488281 ns          512
mask |  4 | avx tbb     157513 ns       122070 ns          512

data |  5 |            2044168 ns      2014160 ns          512
data |  5 | avx         196087 ns       213623 ns          512
data |  5 |     tbb     268715 ns       335693 ns          512
data |  5 | avx tbb     159292 ns       122070 ns          512
mask |  5 |            3224219 ns      3295898 ns          512
mask |  5 | avx         196110 ns       122070 ns          512
mask |  5 |     tbb     572220 ns       579834 ns          512
mask |  5 | avx tbb     157288 ns       152588 ns          512

data |  6 |            1694286 ns      1617432 ns          512
data |  6 | avx         193815 ns       213623 ns          512
data |  6 |     tbb     238018 ns       244141 ns          512
data |  6 | avx tbb     157716 ns       122070 ns          512
mask |  6 |            3235332 ns      3173828 ns          512
mask |  6 | avx         195290 ns       213623 ns          512
mask |  6 |     tbb     570630 ns       549316 ns          512
mask |  6 | avx tbb     157116 ns       274658 ns          512

data |  7 |            1461421 ns      1434326 ns          512
data |  7 | avx         195856 ns       183105 ns          512
data |  7 |     tbb     222406 ns       274658 ns          512
data |  7 | avx tbb     160135 ns       152588 ns          512
mask |  7 |            3229336 ns      3143311 ns          512
mask |  7 | avx         194876 ns       122070 ns          512
mask |  7 |     tbb     566598 ns       640869 ns          512
mask |  7 | avx tbb     156519 ns       183105 ns          512

data |  8 |            1284742 ns      1312256 ns          512
data |  8 | avx         193974 ns       152588 ns          512
data |  8 |     tbb     206798 ns       183105 ns          512
data |  8 | avx tbb     159047 ns       213623 ns          512
mask |  8 |            3243111 ns      3295898 ns          512
mask |  8 | avx         193833 ns       152588 ns          512
mask |  8 |     tbb     566113 ns       579834 ns          512
mask |  8 | avx tbb     157609 ns       183105 ns          512

data |  9 |            1152138 ns      1129150 ns          512
data |  9 | avx         194602 ns       213623 ns          512
data |  9 |     tbb     207941 ns       152588 ns          512
data |  9 | avx tbb     159192 ns       183105 ns          512
mask |  9 |            3174223 ns      3204346 ns          512
mask |  9 | avx         197301 ns       335693 ns          512
mask |  9 |     tbb     565133 ns       640869 ns          512
mask |  9 | avx tbb     157636 ns       152588 ns          512

data | 10 |            1028022 ns      1098633 ns          512
data | 10 | avx         195347 ns       183105 ns          512
data | 10 |     tbb     204468 ns       244141 ns          512
data | 10 | avx tbb     159189 ns       213623 ns          512
mask | 10 |            3144227 ns      3082275 ns          512
mask | 10 | avx         198358 ns       274658 ns          512
mask | 10 |     tbb     567340 ns       518799 ns          512
mask | 10 | avx tbb     157229 ns       244141 ns          512

data | 11 |             936835 ns       976562 ns          512
data | 11 | avx         197406 ns       152588 ns          512
data | 11 |     tbb     199276 ns       152588 ns          512
data | 11 | avx tbb     158031 ns       213623 ns          512
mask | 11 |            3205365 ns      3234863 ns          512
mask | 11 | avx         197423 ns       274658 ns          512
mask | 11 |     tbb     567071 ns       610352 ns          512
mask | 11 | avx tbb     157674 ns       152588 ns          512

data | 12 |             865301 ns       885010 ns          512
data | 12 | avx         191858 ns       213623 ns          512
data | 12 |     tbb     200752 ns       213623 ns          512
data | 12 | avx tbb     157967 ns       122070 ns          512
mask | 12 |            3174450 ns      3204346 ns          512
mask | 12 | avx         196146 ns       274658 ns          512
mask | 12 |     tbb     566053 ns       579834 ns          512
mask | 12 | avx tbb     158052 ns       122070 ns          512

data | 13 |             810441 ns       823975 ns          512
data | 13 | avx         196285 ns       213623 ns          512
data | 13 |     tbb     205062 ns       213623 ns          512
data | 13 | avx tbb     160023 ns        91553 ns          512
mask | 13 |            3164297 ns      3112793 ns          512
mask | 13 | avx         198272 ns       244141 ns          512
mask | 13 |     tbb     566115 ns       640869 ns          512
mask | 13 | avx tbb     157196 ns       122070 ns          512

data | 14 |             747751 ns       762939 ns          512
data | 14 | avx         193234 ns       183105 ns          512
data | 14 |     tbb     200095 ns       183105 ns          512
data | 14 | avx tbb     158624 ns       183105 ns          512
mask | 14 |            3212331 ns      3204346 ns          512
mask | 14 | avx         197305 ns       244141 ns          512
mask | 14 |     tbb     565680 ns       518799 ns          512
mask | 14 | avx tbb     158922 ns       244141 ns          512

data | 15 |             739631 ns       762939 ns          512
data | 15 | avx         218251 ns       244141 ns          512
data | 15 |     tbb     205658 ns        91553 ns          512
data | 15 | avx tbb     166861 ns       183105 ns          512
mask | 15 |            3248119 ns      3295898 ns          512
mask | 15 | avx         197875 ns       213623 ns          512
mask | 15 |     tbb     568488 ns       457764 ns          512
mask | 15 | avx tbb     157638 ns       213623 ns          512

data | 16 |             661037 ns       671387 ns          512
data | 16 | avx         196459 ns       183105 ns          512
data | 16 |     tbb     200122 ns       274658 ns          512
data | 16 | avx tbb     158432 ns       183105 ns          512
mask | 16 |            3139767 ns      3082275 ns          512
mask | 16 | avx         196480 ns       274658 ns          512
mask | 16 |     tbb     566557 ns       488281 ns          512
mask | 16 | avx tbb     157145 ns       152588 ns          512

data | 17 |             630813 ns       579834 ns          512
data | 17 | avx         192805 ns       152588 ns          512
data | 17 |     tbb     197919 ns       244141 ns          512
data | 17 | avx tbb     159073 ns       122070 ns          512
mask | 17 |            3204843 ns      3173828 ns          512
mask | 17 | avx         197197 ns       122070 ns          512
mask | 17 |     tbb     568433 ns       549316 ns          512
mask | 17 | avx tbb     157696 ns       183105 ns          512

data | 18 |             595716 ns       640869 ns          512
data | 18 | avx         192918 ns       213623 ns          512
data | 18 |     tbb     194330 ns       152588 ns          512
data | 18 | avx tbb     158284 ns       213623 ns          512
mask | 18 |            3225169 ns      3295898 ns          512
mask | 18 | avx         195829 ns       183105 ns          512
mask | 18 |     tbb     567056 ns       488281 ns          512
mask | 18 | avx tbb     159118 ns       122070 ns          512

data | 19 |             563801 ns       549316 ns          512
data | 19 | avx         194233 ns       213623 ns          512
data | 19 |     tbb     197404 ns       213623 ns          512
data | 19 | avx tbb     159696 ns       122070 ns          512
mask | 19 |            3209450 ns      3265381 ns          512
mask | 19 | avx         197408 ns       274658 ns          512
mask | 19 |     tbb     569387 ns       701904 ns          512
mask | 19 | avx tbb     157073 ns       213623 ns          512

data | 20 |             534574 ns       518799 ns          512
data | 20 | avx         194977 ns       183105 ns          512
data | 20 |     tbb     190379 ns       122070 ns          512
data | 20 | avx tbb     159069 ns       122070 ns          512
mask | 20 |            3238416 ns      3265381 ns          512
mask | 20 | avx         197121 ns       183105 ns          512
mask | 20 |     tbb     566250 ns       671387 ns          512
mask | 20 | avx tbb     159060 ns       274658 ns          512

data | 21 |             519068 ns       427246 ns          512
data | 21 | avx         196580 ns       244141 ns          512
data | 21 |     tbb     192321 ns       183105 ns          512
data | 21 | avx tbb     158291 ns       152588 ns          512
mask | 21 |            3223164 ns      3234863 ns          512
mask | 21 | avx         200090 ns       152588 ns          512
mask | 21 |     tbb     569140 ns       488281 ns          512
mask | 21 | avx tbb     157332 ns       213623 ns          512

data | 22 |             490314 ns       488281 ns          512
data | 22 | avx         196888 ns       183105 ns          512
data | 22 |     tbb     197343 ns       244141 ns          512
data | 22 | avx tbb     158764 ns       122070 ns          512
mask | 22 |            3184976 ns      3112793 ns          512
mask | 22 | avx         197147 ns       213623 ns          512
mask | 22 |     tbb     568429 ns       579834 ns          512
mask | 22 | avx tbb     157146 ns       152588 ns          512

data | 23 |             471517 ns       579834 ns          512
data | 23 | avx         196123 ns       122070 ns          512
data | 23 |     tbb     190963 ns       122070 ns          512
data | 23 | avx tbb     158704 ns        91553 ns          512
mask | 23 |            3150629 ns      3204346 ns          512
mask | 23 | avx         196619 ns       183105 ns          512
mask | 23 |     tbb     569639 ns       701904 ns          512
mask | 23 | avx tbb     159008 ns       183105 ns          512

data | 24 |             452810 ns       396729 ns          512
data | 24 | avx         194541 ns       213623 ns          512
data | 24 |     tbb     188615 ns       244141 ns          512
data | 24 | avx tbb     158749 ns        61035 ns          512
mask | 24 |            3235296 ns      3295898 ns          512
mask | 24 | avx         196955 ns       213623 ns          512
mask | 24 |     tbb     567828 ns       579834 ns          512
mask | 24 | avx tbb     158144 ns       152588 ns          512

data | 25 |             438679 ns       488281 ns          512
data | 25 | avx         193117 ns       244141 ns          512
data | 25 |     tbb     192484 ns       122070 ns          512
data | 25 | avx tbb     159110 ns       152588 ns          512
mask | 25 |            3233221 ns      3173828 ns          512
mask | 25 | avx         195934 ns        91553 ns          512
mask | 25 |     tbb     570281 ns       457764 ns          512
mask | 25 | avx tbb     157983 ns       183105 ns          512

data | 26 |             428311 ns       427246 ns          512
data | 26 | avx         194572 ns       183105 ns          512
data | 26 |     tbb     195261 ns       152588 ns          512
data | 26 | avx tbb     159188 ns       183105 ns          512
mask | 26 |            3157717 ns      3021240 ns          512
mask | 26 | avx         197513 ns       183105 ns          512
mask | 26 |     tbb     567780 ns       579834 ns          512
mask | 26 | avx tbb     158168 ns        61035 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             672166 ns       976562 ns           64
data |  1 | avx         661059 ns       488281 ns           64
data |  1 |     tbb     620377 ns       244141 ns           64
data |  1 | avx tbb     614767 ns       488281 ns           64
mask |  1 |             674162 ns       732422 ns           64
mask |  1 | avx         668025 ns       244141 ns           64
mask |  1 |     tbb     623850 ns       488281 ns           64
mask |  1 | avx tbb     617134 ns       244141 ns           64

data |  2 |           20063417 ns     20019531 ns           64
data |  2 | avx         795931 ns       488281 ns           64
data |  2 |     tbb    2093833 ns      2685547 ns           64
data |  2 | avx tbb     613691 ns       488281 ns           64
mask |  2 |           13435189 ns     13183594 ns           64
mask |  2 | avx         787528 ns      1220703 ns           64
mask |  2 |     tbb    2120956 ns      2685547 ns           64
mask |  2 | avx tbb     601880 ns       732422 ns           64

data |  3 |           13502397 ns     12207031 ns           64
data |  3 | avx         776964 ns      1220703 ns           64
data |  3 |     tbb    1446503 ns       732422 ns           64
data |  3 | avx tbb     625427 ns       732422 ns           64
mask |  3 |           13106641 ns     12451172 ns           64
mask |  3 | avx         794033 ns       976562 ns           64
mask |  3 |     tbb    2120569 ns      2441406 ns           64
mask |  3 | avx tbb     612775 ns       488281 ns           64

data |  4 |           10120547 ns     10253906 ns           64
data |  4 | avx         794967 ns       244141 ns           64
data |  4 |     tbb    1123077 ns       244141 ns           64
data |  4 | avx tbb     630366 ns       976562 ns           64
mask |  4 |           13234677 ns     13427734 ns           64
mask |  4 | avx         791242 ns       732422 ns           64
mask |  4 |     tbb    2124517 ns      1220703 ns           64
mask |  4 | avx tbb     607198 ns       732422 ns           64

data |  5 |            8262122 ns      8300781 ns           64
data |  5 | avx         792181 ns       732422 ns           64
data |  5 |     tbb     945153 ns      1220703 ns           64
data |  5 | avx tbb     630256 ns       976562 ns           64
mask |  5 |           12936802 ns     12939453 ns           64
mask |  5 | avx         795970 ns       976562 ns           64
mask |  5 |     tbb    2134905 ns      2197266 ns           64
mask |  5 | avx tbb     606688 ns       976562 ns           64

data |  6 |            6872798 ns      6835938 ns           64
data |  6 | avx         790114 ns      1220703 ns           64
data |  6 |     tbb     815964 ns       732422 ns           64
data |  6 | avx tbb     630700 ns       488281 ns           64
mask |  6 |           12826358 ns     12695312 ns           64
mask |  6 | avx         801317 ns      1708984 ns           64
mask |  6 |     tbb    2149281 ns      2197266 ns           64
mask |  6 | avx tbb     593123 ns       488281 ns           64

data |  7 |            5788664 ns      6347656 ns           64
data |  7 | avx         784645 ns      1220703 ns           64
data |  7 |     tbb     749534 ns       976562 ns           64
data |  7 | avx tbb     643728 ns      1220703 ns           64
mask |  7 |           13027719 ns     13183594 ns           64
mask |  7 | avx         799317 ns       732422 ns           64
mask |  7 |     tbb    2117973 ns      1953125 ns           64
mask |  7 | avx tbb     593195 ns       732422 ns           64

data |  8 |            5179797 ns      4638672 ns           64
data |  8 | avx         782117 ns       244141 ns           64
data |  8 |     tbb     725534 ns       488281 ns           64
data |  8 | avx tbb     627827 ns       976562 ns           64
mask |  8 |           13203328 ns     13183594 ns           64
mask |  8 | avx         789702 ns       732422 ns           64
mask |  8 |     tbb    2123717 ns      1708984 ns           64
mask |  8 | avx tbb     619692 ns       732422 ns           64

data |  9 |            4665431 ns      4394531 ns           64
data |  9 | avx         795080 ns       488281 ns           64
data |  9 |     tbb     715400 ns       732422 ns           64
data |  9 | avx tbb     629231 ns       488281 ns           64
mask |  9 |           13513225 ns     13427734 ns           64
mask |  9 | avx         814184 ns      1220703 ns           64
mask |  9 |     tbb    2117706 ns      2685547 ns           64
mask |  9 | avx tbb     606330 ns       244141 ns           64

data | 10 |            4210697 ns      5126953 ns           64
data | 10 | avx         794512 ns       732422 ns           64
data | 10 |     tbb     698839 ns       976562 ns           64
data | 10 | avx tbb     631158 ns       488281 ns           64
mask | 10 |           12938230 ns     12207031 ns           64
mask | 10 | avx         794113 ns       732422 ns           64
mask | 10 |     tbb    2117406 ns      2197266 ns           64
mask | 10 | avx tbb     618623 ns       244141 ns           64

data | 11 |            3829619 ns      3417969 ns           64
data | 11 | avx         781111 ns       732422 ns           64
data | 11 |     tbb     701520 ns       244141 ns           64
data | 11 | avx tbb     630819 ns       732422 ns           64
mask | 11 |           13414141 ns     13427734 ns           64
mask | 11 | avx         799942 ns       732422 ns           64
mask | 11 |     tbb    2116342 ns      1220703 ns           64
mask | 11 | avx tbb     607062 ns       488281 ns           64

data | 12 |            3521241 ns      3173828 ns           64
data | 12 | avx         782059 ns       976562 ns           64
data | 12 |     tbb     701977 ns       244141 ns           64
data | 12 | avx tbb     632131 ns       732422 ns           64
mask | 12 |           13052075 ns     13183594 ns           64
mask | 12 | avx         793384 ns       732422 ns           64
mask | 12 |     tbb    2133273 ns      1220703 ns           64
mask | 12 | avx tbb     624648 ns       488281 ns           64

data | 13 |            3266275 ns      3173828 ns           64
data | 13 | avx         798000 ns       488281 ns           64
data | 13 |     tbb     687434 ns        0.000 ns           64
data | 13 | avx tbb     632861 ns       732422 ns           64
mask | 13 |           13007417 ns     13183594 ns           64
mask | 13 | avx         801947 ns      1464844 ns           64
mask | 13 |     tbb    2119344 ns      1464844 ns           64
mask | 13 | avx tbb     613136 ns       732422 ns           64

data | 14 |            3028856 ns      2685547 ns           64
data | 14 | avx         778502 ns       976562 ns           64
data | 14 |     tbb     689859 ns       732422 ns           64
data | 14 | avx tbb     631325 ns       732422 ns           64
mask | 14 |           13302803 ns     12939453 ns           64
mask | 14 | avx         787289 ns       732422 ns           64
mask | 14 |     tbb    2125873 ns      1708984 ns           64
mask | 14 | avx tbb     607089 ns       732422 ns           64

data | 15 |            2852347 ns      3173828 ns           64
data | 15 | avx         789813 ns       732422 ns           64
data | 15 |     tbb     691380 ns       976562 ns           64
data | 15 | avx tbb     630341 ns       732422 ns           64
mask | 15 |           13020900 ns     12939453 ns           64
mask | 15 | avx         797222 ns       488281 ns           64
mask | 15 |     tbb    2124716 ns      2197266 ns           64
mask | 15 | avx tbb     608266 ns       732422 ns           64

data | 16 |            2681817 ns      2685547 ns           64
data | 16 | avx         782650 ns      1220703 ns           64
data | 16 |     tbb     694262 ns      1220703 ns           64
data | 16 | avx tbb     632073 ns       976562 ns           64
mask | 16 |           13095175 ns     13671875 ns           64
mask | 16 | avx         794213 ns       732422 ns           64
mask | 16 |     tbb    2126683 ns      1953125 ns           64
mask | 16 | avx tbb     602605 ns       488281 ns           64

data | 17 |            2550322 ns      2441406 ns           64
data | 17 | avx         780292 ns      1220703 ns           64
data | 17 |     tbb     687116 ns       976562 ns           64
data | 17 | avx tbb     631136 ns       732422 ns           64
mask | 17 |           13070303 ns     12939453 ns           64
mask | 17 | avx         792395 ns       732422 ns           64
mask | 17 |     tbb    2130172 ns      2441406 ns           64
mask | 17 | avx tbb     601780 ns       732422 ns           64

data | 18 |            2363405 ns      2685547 ns           64
data | 18 | avx         784056 ns       488281 ns           64
data | 18 |     tbb     683200 ns       488281 ns           64
data | 18 | avx tbb     631309 ns       244141 ns           64
mask | 18 |           13254273 ns     13427734 ns           64
mask | 18 | avx         800737 ns       488281 ns           64
mask | 18 |     tbb    2124280 ns      2441406 ns           64
mask | 18 | avx tbb     603198 ns       488281 ns           64

data | 19 |            2302834 ns      2685547 ns           64
data | 19 | avx         778684 ns       732422 ns           64
data | 19 |     tbb     682503 ns       488281 ns           64
data | 19 | avx tbb     630742 ns       488281 ns           64
mask | 19 |           13117600 ns     13183594 ns           64
mask | 19 | avx         792350 ns       732422 ns           64
mask | 19 |     tbb    2132678 ns      2197266 ns           64
mask | 19 | avx tbb     604727 ns       976562 ns           64

data | 20 |            2179600 ns      1708984 ns           64
data | 20 | avx         800697 ns      1220703 ns           64
data | 20 |     tbb     686358 ns       732422 ns           64
data | 20 | avx tbb     629980 ns       732422 ns           64
mask | 20 |           12969489 ns     12451172 ns           64
mask | 20 | avx         814322 ns       244141 ns           64
mask | 20 |     tbb    2135603 ns      1464844 ns           64
mask | 20 | avx tbb     608322 ns       976562 ns           64

data | 21 |            2110300 ns      1708984 ns           64
data | 21 | avx         783272 ns       976562 ns           64
data | 21 |     tbb     669530 ns       488281 ns           64
data | 21 | avx tbb     629766 ns       488281 ns           64
mask | 21 |           13373431 ns     12695312 ns           64
mask | 21 | avx         788186 ns       976562 ns           64
mask | 21 |     tbb    2113003 ns      1708984 ns           64
mask | 21 | avx tbb     619977 ns       488281 ns           64

data | 22 |            2043642 ns      2197266 ns           64
data | 22 | avx         784861 ns       976562 ns           64
data | 22 |     tbb     667741 ns       976562 ns           64
data | 22 | avx tbb     630913 ns       488281 ns           64
mask | 22 |           12997097 ns     12695312 ns           64
mask | 22 | avx         797925 ns       244141 ns           64
mask | 22 |     tbb    2132559 ns      1708984 ns           64
mask | 22 | avx tbb     614992 ns       488281 ns           64

data | 23 |            1918095 ns      1953125 ns           64
data | 23 | avx         794453 ns       488281 ns           64
data | 23 |     tbb     674677 ns       732422 ns           64
data | 23 | avx tbb     630536 ns       732422 ns           64
mask | 23 |           13154889 ns     12207031 ns           64
mask | 23 | avx         789333 ns       732422 ns           64
mask | 23 |     tbb    2138755 ns      1953125 ns           64
mask | 23 | avx tbb     614853 ns       488281 ns           64

data | 24 |            1861453 ns      1953125 ns           64
data | 24 | avx         788772 ns      1464844 ns           64
data | 24 |     tbb     663956 ns       732422 ns           64
data | 24 | avx tbb     630967 ns      1220703 ns           64
mask | 24 |           13164939 ns     13183594 ns           64
mask | 24 | avx         799798 ns      1220703 ns           64
mask | 24 |     tbb    2157084 ns      1953125 ns           64
mask | 24 | avx tbb     607078 ns       732422 ns           64

data | 25 |            1849153 ns      1708984 ns           64
data | 25 | avx         798298 ns       244141 ns           64
data | 25 |     tbb     667719 ns       976562 ns           64
data | 25 | avx tbb     634320 ns       732422 ns           64
mask | 25 |           13138637 ns     13427734 ns           64
mask | 25 | avx         797172 ns       732422 ns           64
mask | 25 |     tbb    2127616 ns      2685547 ns           64
mask | 25 | avx tbb     594152 ns       488281 ns           64

data | 26 |            1726822 ns      1220703 ns           64
data | 26 | avx         779528 ns      1220703 ns           64
data | 26 |     tbb     666141 ns       976562 ns           64
data | 26 | avx tbb     630217 ns       488281 ns           64
mask | 26 |           13516192 ns     12939453 ns           64
mask | 26 | avx         785769 ns       488281 ns           64
mask | 26 |     tbb    2124720 ns      2685547 ns           64
mask | 26 | avx tbb     592497 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2760931 ns      4394531 ns           32
data |  1 | avx        2640647 ns      3417969 ns           32
data |  1 |     tbb    2337522 ns      2441406 ns           32
data |  1 | avx tbb    2343303 ns      2441406 ns           32
mask |  1 |            2686288 ns      2929688 ns           32
mask |  1 | avx        2670444 ns      1953125 ns           32
mask |  1 |     tbb    2350584 ns      2441406 ns           32
mask |  1 | avx tbb    2347669 ns      2929688 ns           32

data |  2 |           80487466 ns     80078125 ns           32
data |  2 | avx        3236966 ns      2441406 ns           32
data |  2 |     tbb    8005891 ns      7812500 ns           32
data |  2 | avx tbb    2351375 ns      1464844 ns           32
mask |  2 |           52998038 ns     52246094 ns           32
mask |  2 | avx        3229406 ns      2929688 ns           32
mask |  2 |     tbb    8287059 ns      8300781 ns           32
mask |  2 | avx tbb    2366425 ns      2441406 ns           32

data |  3 |           53542150 ns     53710938 ns           32
data |  3 | avx        3133388 ns      3906250 ns           32
data |  3 |     tbb    5452341 ns      6835938 ns           32
data |  3 | avx tbb    2361838 ns      2929688 ns           32
mask |  3 |           51781209 ns     52246094 ns           32
mask |  3 | avx        3150116 ns      3906250 ns           32
mask |  3 |     tbb    8272381 ns      8789062 ns           32
mask |  3 | avx tbb    2369697 ns      2441406 ns           32

data |  4 |           40440459 ns     41503906 ns           32
data |  4 | avx        3138706 ns      1953125 ns           32
data |  4 |     tbb    4118859 ns      3906250 ns           32
data |  4 | avx tbb    2367856 ns      1953125 ns           32
mask |  4 |           52556481 ns     53222656 ns           32
mask |  4 | avx        3269391 ns      2929688 ns           32
mask |  4 |     tbb    8277828 ns      8300781 ns           32
mask |  4 | avx tbb    2365238 ns      2441406 ns           32

data |  5 |           32327819 ns     32714844 ns           32
data |  5 | avx        3192725 ns      3417969 ns           32
data |  5 |     tbb    3356578 ns      3417969 ns           32
data |  5 | avx tbb    2371828 ns      1953125 ns           32
mask |  5 |           52249700 ns     53222656 ns           32
mask |  5 | avx        3145353 ns      3906250 ns           32
mask |  5 |     tbb    8268206 ns      8300781 ns           32
mask |  5 | avx tbb    2370450 ns      1953125 ns           32

data |  6 |           27053378 ns     26367188 ns           32
data |  6 | avx        3206556 ns      2929688 ns           32
data |  6 |     tbb    2891666 ns        0.000 ns           32
data |  6 | avx tbb    2371344 ns      2929688 ns           32
mask |  6 |           51742575 ns     51757812 ns           32
mask |  6 | avx        3204837 ns      2929688 ns           32
mask |  6 |     tbb    8234062 ns      9765625 ns           32
mask |  6 | avx tbb    2354794 ns      1953125 ns           32

data |  7 |           23307997 ns     23925781 ns           32
data |  7 | avx        3106113 ns        0.000 ns           32
data |  7 |     tbb    2669050 ns      2929688 ns           32
data |  7 | avx tbb    2368684 ns      1953125 ns           32
mask |  7 |           52554147 ns     52246094 ns           32
mask |  7 | avx        3165009 ns      2441406 ns           32
mask |  7 |     tbb    8211553 ns      8300781 ns           32
mask |  7 | avx tbb    2416703 ns      2929688 ns           32

data |  8 |           20393522 ns     19531250 ns           32
data |  8 | avx        3112806 ns        0.000 ns           32
data |  8 |     tbb    2571763 ns      2929688 ns           32
data |  8 | avx tbb    2373459 ns      3417969 ns           32
mask |  8 |           52120878 ns     51269531 ns           32
mask |  8 | avx        3180816 ns      3417969 ns           32
mask |  8 |     tbb    8302222 ns      6835938 ns           32
mask |  8 | avx tbb    2360559 ns      2929688 ns           32

data |  9 |           18176247 ns     16601562 ns           32
data |  9 | avx        3135847 ns      1953125 ns           32
data |  9 |     tbb    2515975 ns      2929688 ns           32
data |  9 | avx tbb    2369381 ns      1464844 ns           32
mask |  9 |           51737634 ns     51269531 ns           32
mask |  9 | avx        3153734 ns      4882812 ns           32
mask |  9 |     tbb    8232369 ns      8300781 ns           32
mask |  9 | avx tbb    2357925 ns      1953125 ns           32

data | 10 |           16205169 ns     15625000 ns           32
data | 10 | avx        3153906 ns      6347656 ns           32
data | 10 |     tbb    2515356 ns      2929688 ns           32
data | 10 | avx tbb    2369762 ns      2929688 ns           32
mask | 10 |           52808809 ns     53222656 ns           32
mask | 10 | avx        3221459 ns      2441406 ns           32
mask | 10 |     tbb    8218469 ns      7812500 ns           32
mask | 10 | avx tbb    2360753 ns      2929688 ns           32

data | 11 |           15136216 ns     14648438 ns           32
data | 11 | avx        3125384 ns      4882812 ns           32
data | 11 |     tbb    2497187 ns      2441406 ns           32
data | 11 | avx tbb    2372666 ns      2441406 ns           32
mask | 11 |           53046169 ns     52246094 ns           32
mask | 11 | avx        3182494 ns      1953125 ns           32
mask | 11 |     tbb    8238269 ns      7324219 ns           32
mask | 11 | avx tbb    2355438 ns      2929688 ns           32

data | 12 |           13786619 ns     13183594 ns           32
data | 12 | avx        3153753 ns      4394531 ns           32
data | 12 |     tbb    2488522 ns      2929688 ns           32
data | 12 | avx tbb    2361247 ns      2441406 ns           32
mask | 12 |           52092866 ns     51269531 ns           32
mask | 12 | avx        3151306 ns      2441406 ns           32
mask | 12 |     tbb    8212484 ns      8789062 ns           32
mask | 12 | avx tbb    2353112 ns      2929688 ns           32

data | 13 |           12823291 ns     13183594 ns           32
data | 13 | avx        3338578 ns      6835938 ns           32
data | 13 |     tbb    2481803 ns      3417969 ns           32
data | 13 | avx tbb    2373338 ns      2929688 ns           32
mask | 13 |           52497025 ns     52246094 ns           32
mask | 13 | avx        3173466 ns      3906250 ns           32
mask | 13 |     tbb    8168444 ns      8789062 ns           32
mask | 13 | avx tbb    2369172 ns      1464844 ns           32

data | 14 |           11956884 ns     10253906 ns           32
data | 14 | avx        3137113 ns      2929688 ns           32
data | 14 |     tbb    2477753 ns      2929688 ns           32
data | 14 | avx tbb    2365866 ns      2441406 ns           32
mask | 14 |           51748738 ns     52246094 ns           32
mask | 14 | avx        3213581 ns      3906250 ns           32
mask | 14 |     tbb    8288469 ns      8300781 ns           32
mask | 14 | avx tbb    2349641 ns      1953125 ns           32

data | 15 |           11298675 ns     15625000 ns           32
data | 15 | avx        3125612 ns      4882812 ns           32
data | 15 |     tbb    2477219 ns      3417969 ns           32
data | 15 | avx tbb    2372553 ns      2441406 ns           32
mask | 15 |           51844813 ns     52734375 ns           32
mask | 15 | avx        3191244 ns      1953125 ns           32
mask | 15 |     tbb    8265347 ns      9277344 ns           32
mask | 15 | avx tbb    2364916 ns      1953125 ns           32

data | 16 |           10581713 ns      9277344 ns           32
data | 16 | avx        3131359 ns      3906250 ns           32
data | 16 |     tbb    2475166 ns      3417969 ns           32
data | 16 | avx tbb    2352575 ns      2929688 ns           32
mask | 16 |           53178369 ns     52734375 ns           32
mask | 16 | avx        3133722 ns      5371094 ns           32
mask | 16 |     tbb    8224322 ns      8789062 ns           32
mask | 16 | avx tbb    2354637 ns      1953125 ns           32

data | 17 |            9918059 ns      8789062 ns           32
data | 17 | avx        3321559 ns      6347656 ns           32
data | 17 |     tbb    2472256 ns      2929688 ns           32
data | 17 | avx tbb    2373844 ns      2441406 ns           32
mask | 17 |           51837006 ns     53222656 ns           32
mask | 17 | avx        3151959 ns      6347656 ns           32
mask | 17 |     tbb    8203400 ns      7812500 ns           32
mask | 17 | avx tbb    2361625 ns      1953125 ns           32

data | 18 |            9509634 ns     11718750 ns           32
data | 18 | avx        3144556 ns       976562 ns           32
data | 18 |     tbb    2464528 ns      1464844 ns           32
data | 18 | avx tbb    2370716 ns      2441406 ns           32
mask | 18 |           52303800 ns     51269531 ns           32
mask | 18 | avx        3145791 ns      3417969 ns           32
mask | 18 |     tbb    8220344 ns      9277344 ns           32
mask | 18 | avx tbb    2355003 ns      2441406 ns           32

data | 19 |            8961059 ns      9765625 ns           32
data | 19 | avx        3130950 ns       976562 ns           32
data | 19 |     tbb    2462069 ns      2929688 ns           32
data | 19 | avx tbb    2377266 ns      1953125 ns           32
mask | 19 |           51538141 ns     49804688 ns           32
mask | 19 | avx        3216453 ns      3906250 ns           32
mask | 19 |     tbb    8268641 ns      8300781 ns           32
mask | 19 | avx tbb    2349119 ns      3417969 ns           32

data | 20 |            8597941 ns      8300781 ns           32
data | 20 | avx        3114128 ns      2441406 ns           32
data | 20 |     tbb    2459934 ns      2929688 ns           32
data | 20 | avx tbb    2372369 ns      2441406 ns           32
mask | 20 |           52617203 ns     52246094 ns           32
mask | 20 | avx        3188294 ns      1953125 ns           32
mask | 20 |     tbb    8223222 ns      7324219 ns           32
mask | 20 | avx tbb    2401591 ns       976562 ns           32

data | 21 |            8142059 ns      8300781 ns           32
data | 21 | avx        3136216 ns        0.000 ns           32
data | 21 |     tbb    2548100 ns      1953125 ns           32
data | 21 | avx tbb    2372469 ns      1464844 ns           32
mask | 21 |           51081100 ns     50781250 ns           32
mask | 21 | avx        3175675 ns       488281 ns           32
mask | 21 |     tbb    8189244 ns      7812500 ns           32
mask | 21 | avx tbb    2357159 ns      1464844 ns           32

data | 22 |            7669631 ns      7324219 ns           32
data | 22 | avx        3114844 ns      4882812 ns           32
data | 22 |     tbb    2466831 ns      1464844 ns           32
data | 22 | avx tbb    2365594 ns      2441406 ns           32
mask | 22 |           52467616 ns     52246094 ns           32
mask | 22 | avx        3195191 ns        0.000 ns           32
mask | 22 |     tbb    8279025 ns      9765625 ns           32
mask | 22 | avx tbb    2356331 ns      1953125 ns           32

data | 23 |            7438694 ns      7812500 ns           32
data | 23 | avx        3134613 ns        0.000 ns           32
data | 23 |     tbb    2454275 ns      2929688 ns           32
data | 23 | avx tbb    2377234 ns      1953125 ns           32
mask | 23 |           52173203 ns     53222656 ns           32
mask | 23 | avx        3154197 ns      1464844 ns           32
mask | 23 |     tbb    8303978 ns      6347656 ns           32
mask | 23 | avx tbb    2372487 ns      1464844 ns           32

data | 24 |            7142066 ns      7812500 ns           32
data | 24 | avx        3143719 ns      4882812 ns           32
data | 24 |     tbb    2439872 ns      1953125 ns           32
data | 24 | avx tbb    2382800 ns      2929688 ns           32
mask | 24 |           52444169 ns     53222656 ns           32
mask | 24 | avx        3187337 ns      3417969 ns           32
mask | 24 |     tbb    8236472 ns      7324219 ns           32
mask | 24 | avx tbb    2354103 ns      1953125 ns           32

data | 25 |            6944450 ns      7812500 ns           32
data | 25 | avx        3132997 ns        0.000 ns           32
data | 25 |     tbb    2481056 ns      1953125 ns           32
data | 25 | avx tbb    2358078 ns      1953125 ns           32
mask | 25 |           52830766 ns     53222656 ns           32
mask | 25 | avx        3214488 ns      4394531 ns           32
mask | 25 |     tbb    8234272 ns      7812500 ns           32
mask | 25 | avx tbb    2350900 ns      1464844 ns           32

data | 26 |            6808684 ns      5859375 ns           32
data | 26 | avx        3103691 ns      1464844 ns           32
data | 26 |     tbb    2434484 ns      2929688 ns           32
data | 26 | avx tbb    2365531 ns      2441406 ns           32
mask | 26 |           52002087 ns     51757812 ns           32
mask | 26 | avx        3128009 ns      2441406 ns           32
mask | 26 |     tbb    8237122 ns      8300781 ns           32
mask | 26 | avx tbb    2357087 ns      1953125 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10575581 ns      8789062 ns           16
data |  1 | avx       10661125 ns     11718750 ns           16
data |  1 |     tbb    9219031 ns     11718750 ns           16
data |  1 | avx tbb    9202088 ns      8789062 ns           16
mask |  1 |           10668500 ns     13671875 ns           16
mask |  1 | avx       11204775 ns      7812500 ns           16
mask |  1 |     tbb    9209156 ns      8789062 ns           16
mask |  1 | avx tbb    9219644 ns     10742188 ns           16

data |  2 |          320748987 ns    319335938 ns           16
data |  2 | avx       12666756 ns     13671875 ns           16
data |  2 |     tbb   31706394 ns     31250000 ns           16
data |  2 | avx tbb    9282944 ns      8789062 ns           16
mask |  2 |          208200481 ns    208007812 ns           16
mask |  2 | avx       12616925 ns     12695312 ns           16
mask |  2 |     tbb   32305487 ns     31250000 ns           16
mask |  2 | avx tbb    9287000 ns      8789062 ns           16

data |  3 |          214939206 ns    215820312 ns           16
data |  3 | avx       12587206 ns     13671875 ns           16
data |  3 |     tbb   21158537 ns     21484375 ns           16
data |  3 | avx tbb    9263237 ns      9765625 ns           16
mask |  3 |          211145831 ns    209960938 ns           16
mask |  3 | avx       12730638 ns     13671875 ns           16
mask |  3 |     tbb   32491475 ns     32226562 ns           16
mask |  3 | avx tbb    9341375 ns      7812500 ns           16

data |  4 |          160946144 ns    160156250 ns           16
data |  4 | avx       13157319 ns     11718750 ns           16
data |  4 |     tbb   15704331 ns     15625000 ns           16
data |  4 | avx tbb    9782219 ns     11718750 ns           16
mask |  4 |          205462369 ns    205078125 ns           16
mask |  4 | avx       12731369 ns     11718750 ns           16
mask |  4 |     tbb   32563406 ns     29296875 ns           16
mask |  4 | avx tbb    9269481 ns      7812500 ns           16

data |  5 |          128805425 ns    127929688 ns           16
data |  5 | avx       12475856 ns     11718750 ns           16
data |  5 |     tbb   12935087 ns     12695312 ns           16
data |  5 | avx tbb    9288669 ns      7812500 ns           16
mask |  5 |          205650213 ns    205078125 ns           16
mask |  5 | avx       13216750 ns     11718750 ns           16
mask |  5 |     tbb   32435525 ns     31250000 ns           16
mask |  5 | avx tbb    9276925 ns      7812500 ns           16

data |  6 |          108324762 ns    108398438 ns           16
data |  6 | avx       12829156 ns     12695312 ns           16
data |  6 |     tbb   11017056 ns      1953125 ns           16
data |  6 | avx tbb    9280238 ns      7812500 ns           16
mask |  6 |          209428006 ns    211914062 ns           16
mask |  6 | avx       13188881 ns     14648438 ns           16
mask |  6 |     tbb   32552087 ns     30273438 ns           16
mask |  6 | avx tbb    9289200 ns      9765625 ns           16

data |  7 |           92895800 ns     91796875 ns           16
data |  7 | avx       12697188 ns     13671875 ns           16
data |  7 |     tbb   10045587 ns     10742188 ns           16
data |  7 | avx tbb    9283869 ns      9765625 ns           16
mask |  7 |          207418638 ns    207031250 ns           16
mask |  7 | avx       12751731 ns     11718750 ns           16
mask |  7 |     tbb   32607462 ns     32226562 ns           16
mask |  7 | avx tbb    9333775 ns      9765625 ns           16

data |  8 |           81433781 ns     83007812 ns           16
data |  8 | avx       12632562 ns     11718750 ns           16
data |  8 |     tbb    9811950 ns      8789062 ns           16
data |  8 | avx tbb    9280756 ns      9765625 ns           16
mask |  8 |          208605125 ns    208984375 ns           16
mask |  8 | avx       12681312 ns     13671875 ns           16
mask |  8 |     tbb   32539094 ns     31250000 ns           16
mask |  8 | avx tbb    9294931 ns      9765625 ns           16

data |  9 |           72954631 ns     73242188 ns           16
data |  9 | avx       13009788 ns     10742188 ns           16
data |  9 |     tbb    9585063 ns      8789062 ns           16
data |  9 | avx tbb    9283256 ns      9765625 ns           16
mask |  9 |          212060919 ns    208984375 ns           16
mask |  9 | avx       12630669 ns     12695312 ns           16
mask |  9 |     tbb   32926506 ns     31250000 ns           16
mask |  9 | avx tbb    9285219 ns      9765625 ns           16

data | 10 |           65652969 ns     66406250 ns           16
data | 10 | avx       12560544 ns     13671875 ns           16
data | 10 |     tbb    9621431 ns     11718750 ns           16
data | 10 | avx tbb    9287237 ns      9765625 ns           16
mask | 10 |          208179856 ns    208007812 ns           16
mask | 10 | avx       13283006 ns     14648438 ns           16
mask | 10 |     tbb   32666406 ns     31250000 ns           16
mask | 10 | avx tbb    9283256 ns      9765625 ns           16

data | 11 |           60084787 ns     61523438 ns           16
data | 11 | avx       12468981 ns     11718750 ns           16
data | 11 |     tbb    9558906 ns      9765625 ns           16
data | 11 | avx tbb    9284406 ns      9765625 ns           16
mask | 11 |          209329675 ns    208007812 ns           16
mask | 11 | avx       12777831 ns     10742188 ns           16
mask | 11 |     tbb   32411894 ns     32226562 ns           16
mask | 11 | avx tbb    9267444 ns      8789062 ns           16

data | 12 |           55676462 ns     56640625 ns           16
data | 12 | avx       12617919 ns     13671875 ns           16
data | 12 |     tbb    9545356 ns     11718750 ns           16
data | 12 | avx tbb    9282387 ns      8789062 ns           16
mask | 12 |          210367019 ns    209960938 ns           16
mask | 12 | avx       12658900 ns      9765625 ns           16
mask | 12 |     tbb   32495675 ns     34179688 ns           16
mask | 12 | avx tbb    9284163 ns      9765625 ns           16

data | 13 |           51757550 ns     52734375 ns           16
data | 13 | avx       12600881 ns     12695312 ns           16
data | 13 |     tbb    9611906 ns     12695312 ns           16
data | 13 | avx tbb    9273050 ns      9765625 ns           16
mask | 13 |          208496719 ns    209960938 ns           16
mask | 13 | avx       12822581 ns     10742188 ns           16
mask | 13 |     tbb   32381825 ns     30273438 ns           16
mask | 13 | avx tbb    9309356 ns      7812500 ns           16

data | 14 |           47981375 ns     47851562 ns           16
data | 14 | avx       12835181 ns     12695312 ns           16
data | 14 |     tbb    9470581 ns      5859375 ns           16
data | 14 | avx tbb    9270637 ns      9765625 ns           16
mask | 14 |          209720831 ns    207031250 ns           16
mask | 14 | avx       12703075 ns     13671875 ns           16
mask | 14 |     tbb   32621500 ns     29296875 ns           16
mask | 14 | avx tbb    9286125 ns      7812500 ns           16

data | 15 |           44790881 ns     45898438 ns           16
data | 15 | avx       12665550 ns     10742188 ns           16
data | 15 |     tbb    9569675 ns     10742188 ns           16
data | 15 | avx tbb    9286700 ns      7812500 ns           16
mask | 15 |          206749456 ns    205078125 ns           16
mask | 15 | avx       13135269 ns     12695312 ns           16
mask | 15 |     tbb   32444450 ns     30273438 ns           16
mask | 15 | avx tbb    9285569 ns      8789062 ns           16

data | 16 |           41927094 ns     40039062 ns           16
data | 16 | avx       12718319 ns     12695312 ns           16
data | 16 |     tbb    9577556 ns      7812500 ns           16
data | 16 | avx tbb    9287919 ns      9765625 ns           16
mask | 16 |          210101338 ns    208984375 ns           16
mask | 16 | avx       12660706 ns     12695312 ns           16
mask | 16 |     tbb   32628906 ns     31250000 ns           16
mask | 16 | avx tbb    9292400 ns      8789062 ns           16

data | 17 |           40662300 ns     41015625 ns           16
data | 17 | avx       12660138 ns     12695312 ns           16
data | 17 |     tbb    9578619 ns      7812500 ns           16
data | 17 | avx tbb    9307394 ns     10742188 ns           16
mask | 17 |          208191875 ns    209960938 ns           16
mask | 17 | avx       12776850 ns     11718750 ns           16
mask | 17 |     tbb   32534231 ns     32226562 ns           16
mask | 17 | avx tbb    9307125 ns      8789062 ns           16

data | 18 |           38478737 ns     37109375 ns           16
data | 18 | avx       13287056 ns     13671875 ns           16
data | 18 |     tbb    9592069 ns     11718750 ns           16
data | 18 | avx tbb    9273737 ns      7812500 ns           16
mask | 18 |          207922806 ns    206054688 ns           16
mask | 18 | avx       12776644 ns     12695312 ns           16
mask | 18 |     tbb   32411800 ns     32226562 ns           16
mask | 18 | avx tbb    9607194 ns      6835938 ns           16

data | 19 |           35814350 ns     35156250 ns           16
data | 19 | avx       13187994 ns     12695312 ns           16
data | 19 |     tbb    9546925 ns     10742188 ns           16
data | 19 | avx tbb    9286762 ns      7812500 ns           16
mask | 19 |          211542075 ns    210937500 ns           16
mask | 19 | avx       12604212 ns     11718750 ns           16
mask | 19 |     tbb   32558319 ns     32226562 ns           16
mask | 19 | avx tbb    9325325 ns      8789062 ns           16

data | 20 |           34220488 ns     36132812 ns           16
data | 20 | avx       12580275 ns     13671875 ns           16
data | 20 |     tbb   10138206 ns      8789062 ns           16
data | 20 | avx tbb    9277687 ns      8789062 ns           16
mask | 20 |          208596656 ns    208007812 ns           16
mask | 20 | avx       12740456 ns     11718750 ns           16
mask | 20 |     tbb   32478225 ns     31250000 ns           16
mask | 20 | avx tbb    9316694 ns      8789062 ns           16

data | 21 |           32147113 ns     31250000 ns           16
data | 21 | avx       12624744 ns     13671875 ns           16
data | 21 |     tbb    9486138 ns      6835938 ns           16
data | 21 | avx tbb    9283681 ns      7812500 ns           16
mask | 21 |          206604938 ns    206054688 ns           16
mask | 21 | avx       13349112 ns     14648438 ns           16
mask | 21 |     tbb   32472844 ns     32226562 ns           16
mask | 21 | avx tbb    9294063 ns      9765625 ns           16

data | 22 |           31414075 ns     32226562 ns           16
data | 22 | avx       13317444 ns     13671875 ns           16
data | 22 |     tbb    9512419 ns     11718750 ns           16
data | 22 | avx tbb    9299800 ns     10742188 ns           16
mask | 22 |          207493750 ns    208984375 ns           16
mask | 22 | avx       12694931 ns     12695312 ns           16
mask | 22 |     tbb   32686200 ns     30273438 ns           16
mask | 22 | avx tbb    9607713 ns      7812500 ns           16

data | 23 |           30156669 ns     29296875 ns           16
data | 23 | avx       12522550 ns     13671875 ns           16
data | 23 |     tbb    9483825 ns      8789062 ns           16
data | 23 | avx tbb    9785119 ns      8789062 ns           16
mask | 23 |          210847344 ns    211914062 ns           16
mask | 23 | avx       12705162 ns     13671875 ns           16
mask | 23 |     tbb   32668206 ns     32226562 ns           16
mask | 23 | avx tbb    9286338 ns      8789062 ns           16

data | 24 |           28550244 ns     28320312 ns           16
data | 24 | avx       12509375 ns     13671875 ns           16
data | 24 |     tbb    9499156 ns      8789062 ns           16
data | 24 | avx tbb    9294075 ns      9765625 ns           16
mask | 24 |          206856238 ns    205078125 ns           16
mask | 24 | avx       13229362 ns      9765625 ns           16
mask | 24 |     tbb   32414981 ns     32226562 ns           16
mask | 24 | avx tbb    9284531 ns      8789062 ns           16

data | 25 |           28674306 ns     27343750 ns           16
data | 25 | avx       12611356 ns     12695312 ns           16
data | 25 |     tbb    9501325 ns      8789062 ns           16
data | 25 | avx tbb    9323006 ns     10742188 ns           16
mask | 25 |          206856894 ns    205078125 ns           16
mask | 25 | avx       12665544 ns     12695312 ns           16
mask | 25 |     tbb   32599356 ns     31250000 ns           16
mask | 25 | avx tbb    9288444 ns     10742188 ns           16

data | 26 |           26852081 ns     21484375 ns           16
data | 26 | avx       12671725 ns     12695312 ns           16
data | 26 |     tbb    9532544 ns     12695312 ns           16
data | 26 | avx tbb    9278181 ns      7812500 ns           16
mask | 26 |          210008894 ns    208984375 ns           16
mask | 26 | avx       12751969 ns     13671875 ns           16
mask | 26 |     tbb   32411038 ns     30273438 ns           16
mask | 26 | avx tbb    9310338 ns      7812500 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           21298363 ns     15625000 ns            8
data |  1 | avx       21149200 ns     23437500 ns            8
data |  1 |     tbb   18343387 ns     17578125 ns            8
data |  1 | avx tbb   18363775 ns     17578125 ns            8
mask |  1 |           22896337 ns     17578125 ns            8
mask |  1 | avx       21292363 ns     21484375 ns            8
mask |  1 |     tbb   18328963 ns     17578125 ns            8
mask |  1 | avx tbb   18487713 ns     19531250 ns            8

data |  2 |          641818312 ns    638671875 ns            8
data |  2 | avx       25452888 ns     23437500 ns            8
data |  2 |     tbb   62767737 ns     58593750 ns            8
data |  2 | avx tbb   18457875 ns     15625000 ns            8
mask |  2 |          415374187 ns    414062500 ns            8
mask |  2 | avx       25398562 ns     23437500 ns            8
mask |  2 |     tbb   64985713 ns     60546875 ns            8
mask |  2 | avx tbb   18471875 ns     19531250 ns            8

data |  3 |          429342825 ns    423828125 ns            8
data |  3 | avx       25117525 ns     25390625 ns            8
data |  3 |     tbb   42191487 ns     37109375 ns            8
data |  3 | avx tbb   18463975 ns     17578125 ns            8
mask |  3 |          412709525 ns    412109375 ns            8
mask |  3 | avx       25305312 ns     25390625 ns            8
mask |  3 |     tbb   65393912 ns     62500000 ns            8
mask |  3 | avx tbb   18476525 ns     19531250 ns            8

data |  4 |          321248788 ns    320312500 ns            8
data |  4 | avx       25288900 ns     25390625 ns            8
data |  4 |     tbb   31906613 ns     31250000 ns            8
data |  4 | avx tbb   18474400 ns     15625000 ns            8
mask |  4 |          418502650 ns    419921875 ns            8
mask |  4 | avx       25589763 ns     23437500 ns            8
mask |  4 |     tbb   64594487 ns     60546875 ns            8
mask |  4 | avx tbb   18664037 ns     17578125 ns            8

data |  5 |          258049612 ns    263671875 ns            8
data |  5 | avx       25219575 ns     21484375 ns            8
data |  5 |     tbb   25946138 ns     23437500 ns            8
data |  5 | avx tbb   18462538 ns     17578125 ns            8
mask |  5 |          417695663 ns    419921875 ns            8
mask |  5 | avx       27895238 ns     27343750 ns            8
mask |  5 |     tbb   64875212 ns     62500000 ns            8
mask |  5 | avx tbb   18477600 ns     19531250 ns            8

data |  6 |          216665325 ns    216796875 ns            8
data |  6 | avx       25330650 ns     27343750 ns            8
data |  6 |     tbb   22112437 ns     25390625 ns            8
data |  6 | avx tbb   18486800 ns     17578125 ns            8
mask |  6 |          417607213 ns    416015625 ns            8
mask |  6 | avx       27547575 ns     27343750 ns            8
mask |  6 |     tbb   65526462 ns     60546875 ns            8
mask |  6 | avx tbb   18479500 ns     19531250 ns            8

data |  7 |          185343025 ns    183593750 ns            8
data |  7 | avx       25465538 ns     25390625 ns            8
data |  7 |     tbb   19889675 ns     19531250 ns            8
data |  7 | avx tbb   18482900 ns     17578125 ns            8
mask |  7 |          419798750 ns    421875000 ns            8
mask |  7 | avx       25479475 ns     27343750 ns            8
mask |  7 |     tbb   65133863 ns     60546875 ns            8
mask |  7 | avx tbb   18481487 ns     19531250 ns            8

data |  8 |          165804275 ns    167968750 ns            8
data |  8 | avx       25039612 ns     27343750 ns            8
data |  8 |     tbb   19456038 ns     19531250 ns            8
data |  8 | avx tbb   18463250 ns     17578125 ns            8
mask |  8 |          421354050 ns    417968750 ns            8
mask |  8 | avx       25275662 ns     27343750 ns            8
mask |  8 |     tbb   65405637 ns     62500000 ns            8
mask |  8 | avx tbb   18718350 ns     17578125 ns            8

data |  9 |          147890687 ns    152343750 ns            8
data |  9 | avx       25126263 ns     25390625 ns            8
data |  9 |     tbb   19236013 ns     19531250 ns            8
data |  9 | avx tbb   18512312 ns     17578125 ns            8
mask |  9 |          418128925 ns    417968750 ns            8
mask |  9 | avx       25418625 ns     23437500 ns            8
mask |  9 |     tbb   66522900 ns     62500000 ns            8
mask |  9 | avx tbb   18669162 ns     19531250 ns            8

data | 10 |          131656963 ns    128906250 ns            8
data | 10 | avx       25460575 ns     23437500 ns            8
data | 10 |     tbb   19173400 ns     19531250 ns            8
data | 10 | avx tbb   18643700 ns     17578125 ns            8
mask | 10 |          418255337 ns    414062500 ns            8
mask | 10 | avx       25236337 ns     25390625 ns            8
mask | 10 |     tbb   65398275 ns     62500000 ns            8
mask | 10 | avx tbb   18456450 ns     17578125 ns            8

data | 11 |          123237825 ns    123046875 ns            8
data | 11 | avx       25103988 ns     21484375 ns            8
data | 11 |     tbb   19086663 ns     19531250 ns            8
data | 11 | avx tbb   18468237 ns     17578125 ns            8
mask | 11 |          413071425 ns    412109375 ns            8
mask | 11 | avx       25459600 ns     25390625 ns            8
mask | 11 |     tbb   64922050 ns     60546875 ns            8
mask | 11 | avx tbb   18516463 ns     19531250 ns            8

data | 12 |          112820288 ns    115234375 ns            8
data | 12 | avx       25339738 ns     25390625 ns            8
data | 12 |     tbb   18782987 ns     17578125 ns            8
data | 12 | avx tbb   18477650 ns     19531250 ns            8
mask | 12 |          422495887 ns    421875000 ns            8
mask | 12 | avx       25312925 ns     23437500 ns            8
mask | 12 |     tbb   64566750 ns     62500000 ns            8
mask | 12 | avx tbb   18491713 ns     19531250 ns            8

data | 13 |          105249912 ns     99609375 ns            8
data | 13 | avx       25447937 ns     23437500 ns            8
data | 13 |     tbb   19299113 ns     21484375 ns            8
data | 13 | avx tbb   18638938 ns     19531250 ns            8
mask | 13 |          419581012 ns    421875000 ns            8
mask | 13 | avx       25443488 ns     25390625 ns            8
mask | 13 |     tbb   65172675 ns     60546875 ns            8
mask | 13 | avx tbb   18494025 ns     15625000 ns            8

data | 14 |           94273550 ns     93750000 ns            8
data | 14 | avx       25074663 ns     23437500 ns            8
data | 14 |     tbb   18920200 ns     19531250 ns            8
data | 14 | avx tbb   18477925 ns     17578125 ns            8
mask | 14 |          421617113 ns    423828125 ns            8
mask | 14 | avx       25300488 ns     23437500 ns            8
mask | 14 |     tbb   65622913 ns     60546875 ns            8
mask | 14 | avx tbb   18504012 ns     19531250 ns            8

data | 15 |           88920300 ns     89843750 ns            8
data | 15 | avx       25231762 ns     21484375 ns            8
data | 15 |     tbb   18838788 ns     17578125 ns            8
data | 15 | avx tbb   18467113 ns     17578125 ns            8
mask | 15 |          410809275 ns    410156250 ns            8
mask | 15 | avx       25483375 ns     25390625 ns            8
mask | 15 |     tbb   64554225 ns     58593750 ns            8
mask | 15 | avx tbb   18515312 ns     17578125 ns            8

data | 16 |           84975138 ns     85937500 ns            8
data | 16 | avx       27792112 ns     31250000 ns            8
data | 16 |     tbb   19017637 ns     21484375 ns            8
data | 16 | avx tbb   18444762 ns     17578125 ns            8
mask | 16 |          408826513 ns    414062500 ns            8
mask | 16 | avx       25285337 ns     25390625 ns            8
mask | 16 |     tbb   65175538 ns     62500000 ns            8
mask | 16 | avx tbb   18498950 ns     17578125 ns            8

data | 17 |           80058975 ns     78125000 ns            8
data | 17 | avx       25392963 ns     25390625 ns            8
data | 17 |     tbb   19397075 ns     23437500 ns            8
data | 17 | avx tbb   18481162 ns     17578125 ns            8
mask | 17 |          417954300 ns    416015625 ns            8
mask | 17 | avx       27719525 ns     27343750 ns            8
mask | 17 |     tbb   65002337 ns     68359375 ns            8
mask | 17 | avx tbb   18473400 ns     17578125 ns            8

data | 18 |           84043975 ns     82031250 ns            8
data | 18 | avx       25091812 ns     23437500 ns            8
data | 18 |     tbb   18890688 ns     19531250 ns            8
data | 18 | avx tbb   18466700 ns     19531250 ns            8
mask | 18 |          414574287 ns    412109375 ns            8
mask | 18 | avx       25396875 ns     23437500 ns            8
mask | 18 |     tbb   65087513 ns     58593750 ns            8
mask | 18 | avx tbb   18599063 ns     19531250 ns            8

data | 19 |           71025138 ns     70312500 ns            8
data | 19 | avx       27598962 ns     23437500 ns            8
data | 19 |     tbb   18883075 ns     19531250 ns            8
data | 19 | avx tbb   18508825 ns     19531250 ns            8
mask | 19 |          415502800 ns    416015625 ns            8
mask | 19 | avx       25653325 ns     25390625 ns            8
mask | 19 |     tbb   65073813 ns     60546875 ns            8
mask | 19 | avx tbb   18616925 ns     17578125 ns            8

data | 20 |           72351300 ns     78125000 ns            8
data | 20 | avx       25141025 ns     23437500 ns            8
data | 20 |     tbb   18928775 ns     19531250 ns            8
data | 20 | avx tbb   18477162 ns     19531250 ns            8
mask | 20 |          417093137 ns    416015625 ns            8
mask | 20 | avx       25609500 ns     25390625 ns            8
mask | 20 |     tbb   65507338 ns     58593750 ns            8
mask | 20 | avx tbb   18467938 ns     17578125 ns            8

data | 21 |           64953900 ns     62500000 ns            8
data | 21 | avx       25306750 ns     23437500 ns            8
data | 21 |     tbb   19157163 ns     19531250 ns            8
data | 21 | avx tbb   18502738 ns     19531250 ns            8
mask | 21 |          416690613 ns    412109375 ns            8
mask | 21 | avx       25251587 ns     27343750 ns            8
mask | 21 |     tbb   65460488 ns     60546875 ns            8
mask | 21 | avx tbb   18474500 ns     17578125 ns            8

data | 22 |           63631363 ns     60546875 ns            8
data | 22 | avx       25342700 ns     25390625 ns            8
data | 22 |     tbb   18921400 ns     19531250 ns            8
data | 22 | avx tbb   20105025 ns     19531250 ns            8
mask | 22 |          416816987 ns    416015625 ns            8
mask | 22 | avx       25545013 ns     27343750 ns            8
mask | 22 |     tbb   65609850 ns     60546875 ns            8
mask | 22 | avx tbb   18504575 ns     17578125 ns            8

data | 23 |           59154362 ns     60546875 ns            8
data | 23 | avx       25317425 ns     25390625 ns            8
data | 23 |     tbb   19238913 ns     17578125 ns            8
data | 23 | avx tbb   18479588 ns     19531250 ns            8
mask | 23 |          417474150 ns    419921875 ns            8
mask | 23 | avx       25165625 ns     23437500 ns            8
mask | 23 |     tbb   65341600 ns     64453125 ns            8
mask | 23 | avx tbb   18469625 ns     17578125 ns            8

data | 24 |           59013525 ns     58593750 ns            8
data | 24 | avx       27646987 ns     27343750 ns            8
data | 24 |     tbb   18854813 ns     17578125 ns            8
data | 24 | avx tbb   18477050 ns     15625000 ns            8
mask | 24 |          417885162 ns    416015625 ns            8
mask | 24 | avx       27460837 ns     29296875 ns            8
mask | 24 |     tbb   64500288 ns     64453125 ns            8
mask | 24 | avx tbb   18486400 ns     19531250 ns            8

data | 25 |           57152613 ns     54687500 ns            8
data | 25 | avx       25119300 ns     25390625 ns            8
data | 25 |     tbb   19092525 ns     17578125 ns            8
data | 25 | avx tbb   18701975 ns     15625000 ns            8
mask | 25 |          413998950 ns    414062500 ns            8
mask | 25 | avx       25333025 ns     27343750 ns            8
mask | 25 |     tbb   64462113 ns     58593750 ns            8
mask | 25 | avx tbb   18504662 ns     19531250 ns            8

data | 26 |           55713062 ns     48828125 ns            8
data | 26 | avx       25296238 ns     19531250 ns            8
data | 26 |     tbb   18829100 ns     19531250 ns            8
data | 26 | avx tbb   18623662 ns     17578125 ns            8
mask | 26 |          415863312 ns    414062500 ns            8
mask | 26 | avx       26318887 ns     27343750 ns            8
mask | 26 |     tbb   64495850 ns     62500000 ns            8
mask | 26 | avx tbb   18510313 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           42354250 ns     39062500 ns            8
data |  1 | avx       42337163 ns     41015625 ns            8
data |  1 |     tbb   36594175 ns     33203125 ns            8
data |  1 | avx tbb   36616275 ns     37109375 ns            8
mask |  1 |           42991450 ns     42968750 ns            8
mask |  1 | avx       42614338 ns     39062500 ns            8
mask |  1 |     tbb   36600062 ns     35156250 ns            8
mask |  1 | avx tbb   36912025 ns     35156250 ns            8

data |  2 |         1282208975 ns   1283203125 ns            8
data |  2 | avx       50929963 ns     50781250 ns            8
data |  2 |     tbb  126398687 ns    117187500 ns            8
data |  2 | avx tbb   36848650 ns     37109375 ns            8
mask |  2 |          844458762 ns    841796875 ns            8
mask |  2 | avx       50534563 ns     48828125 ns            8
mask |  2 |     tbb  132052200 ns    121093750 ns            8
mask |  2 | avx tbb   36848787 ns     37109375 ns            8

data |  3 |          853466375 ns    855468750 ns            8
data |  3 | avx       50858450 ns     48828125 ns            8
data |  3 |     tbb   84514575 ns     78125000 ns            8
data |  3 | avx tbb   37120800 ns     37109375 ns            8
mask |  3 |          851518550 ns    847656250 ns            8
mask |  3 | avx       55324925 ns     58593750 ns            8
mask |  3 |     tbb  129074850 ns    119140625 ns            8
mask |  3 | avx tbb   36790425 ns     35156250 ns            8

data |  4 |          643636700 ns    642578125 ns            8
data |  4 | avx       50279187 ns     52734375 ns            8
data |  4 |     tbb   63571575 ns     60546875 ns            8
data |  4 | avx tbb   36954738 ns     37109375 ns            8
mask |  4 |          829805100 ns    832031250 ns            8
mask |  4 | avx       55563038 ns     56640625 ns            8
mask |  4 |     tbb  130990700 ns    123046875 ns            8
mask |  4 | avx tbb   36861563 ns     37109375 ns            8

data |  5 |          517737250 ns    513671875 ns            8
data |  5 | avx       50307287 ns     50781250 ns            8
data |  5 |     tbb   50749875 ns     46875000 ns            8
data |  5 | avx tbb   36914813 ns     35156250 ns            8
mask |  5 |          842529938 ns    843750000 ns            8
mask |  5 | avx       55407200 ns     56640625 ns            8
mask |  5 |     tbb  129990675 ns    121093750 ns            8
mask |  5 | avx tbb   36815113 ns     35156250 ns            8

data |  6 |          428404225 ns    427734375 ns            8
data |  6 | avx       55081100 ns     56640625 ns            8
data |  6 |     tbb   43350237 ns     37109375 ns            8
data |  6 | avx tbb   37178012 ns     35156250 ns            8
mask |  6 |          827531913 ns    828125000 ns            8
mask |  6 | avx       51259775 ns     52734375 ns            8
mask |  6 |     tbb  130613112 ns    119140625 ns            8
mask |  6 | avx tbb   37184488 ns     37109375 ns            8

data |  7 |          370883688 ns    371093750 ns            8
data |  7 | avx       50312750 ns     48828125 ns            8
data |  7 |     tbb   39662750 ns     37109375 ns            8
data |  7 | avx tbb   36838487 ns     35156250 ns            8
mask |  7 |          840539638 ns    837890625 ns            8
mask |  7 | avx       55186038 ns     54687500 ns            8
mask |  7 |     tbb  130025600 ns    119140625 ns            8
mask |  7 | avx tbb   36826087 ns     37109375 ns            8

data |  8 |          328445375 ns    330078125 ns            8
data |  8 | avx       50109475 ns     48828125 ns            8
data |  8 |     tbb   38696013 ns     33203125 ns            8
data |  8 | avx tbb   36818000 ns     35156250 ns            8
mask |  8 |          833613450 ns    833984375 ns            8
mask |  8 | avx       57034638 ns     56640625 ns            8
mask |  8 |     tbb  130933988 ns    121093750 ns            8
mask |  8 | avx tbb   36858100 ns     37109375 ns            8

data |  9 |          293083075 ns    291015625 ns            8
data |  9 | avx       51242237 ns     48828125 ns            8
data |  9 |     tbb   40353387 ns     39062500 ns            8
data |  9 | avx tbb   36841050 ns     37109375 ns            8
mask |  9 |          830845088 ns    828125000 ns            8
mask |  9 | avx       51374225 ns     50781250 ns            8
mask |  9 |     tbb  129003525 ns    123046875 ns            8
mask |  9 | avx tbb   36836937 ns     37109375 ns            8

data | 10 |          260396963 ns    259765625 ns            8
data | 10 | avx       50990025 ns     48828125 ns            8
data | 10 |     tbb   37725838 ns     35156250 ns            8
data | 10 | avx tbb   36840875 ns     35156250 ns            8
mask | 10 |          831323675 ns    833984375 ns            8
mask | 10 | avx       51371800 ns     46875000 ns            8
mask | 10 |     tbb  129973688 ns    123046875 ns            8
mask | 10 | avx tbb   36805550 ns     37109375 ns            8

data | 11 |          237580700 ns    236328125 ns            8
data | 11 | avx       52830525 ns     50781250 ns            8
data | 11 |     tbb   37742650 ns     35156250 ns            8
data | 11 | avx tbb   36847913 ns     35156250 ns            8
mask | 11 |          837464200 ns    837890625 ns            8
mask | 11 | avx       55344312 ns     54687500 ns            8
mask | 11 |     tbb  131553188 ns    121093750 ns            8
mask | 11 | avx tbb   36878512 ns     39062500 ns            8

data | 12 |          223283212 ns    224609375 ns            8
data | 12 | avx       51019675 ns     50781250 ns            8
data | 12 |     tbb   38284300 ns     37109375 ns            8
data | 12 | avx tbb   36834300 ns     39062500 ns            8
mask | 12 |          830429662 ns    830078125 ns            8
mask | 12 | avx       55194313 ns     56640625 ns            8
mask | 12 |     tbb  129948250 ns    119140625 ns            8
mask | 12 | avx tbb   36813838 ns     37109375 ns            8

data | 13 |          208647763 ns    208984375 ns            8
data | 13 | avx       50208812 ns     46875000 ns            8
data | 13 |     tbb   38495025 ns     35156250 ns            8
data | 13 | avx tbb   36859800 ns     39062500 ns            8
mask | 13 |          836100762 ns    833984375 ns            8
mask | 13 | avx       55310688 ns     52734375 ns            8
mask | 13 |     tbb  129213638 ns    123046875 ns            8
mask | 13 | avx tbb   36816288 ns     37109375 ns            8

data | 14 |          189442238 ns    191406250 ns            8
data | 14 | avx       50992775 ns     52734375 ns            8
data | 14 |     tbb   38203388 ns     37109375 ns            8
data | 14 | avx tbb   36890388 ns     35156250 ns            8
mask | 14 |          825201962 ns    824218750 ns            8
mask | 14 | avx       55471100 ns     58593750 ns            8
mask | 14 |     tbb  129489038 ns    125000000 ns            8
mask | 14 | avx tbb   36830950 ns     37109375 ns            8

data | 15 |          177905000 ns    177734375 ns            8
data | 15 | avx       50888575 ns     48828125 ns            8
data | 15 |     tbb   37527825 ns     35156250 ns            8
data | 15 | avx tbb   37120925 ns     39062500 ns            8
mask | 15 |          831214138 ns    830078125 ns            8
mask | 15 | avx       50814625 ns     52734375 ns            8
mask | 15 |     tbb  130894175 ns    125000000 ns            8
mask | 15 | avx tbb   36768225 ns     33203125 ns            8

data | 16 |          167100875 ns    167968750 ns            8
data | 16 | avx       51613050 ns     48828125 ns            8
data | 16 |     tbb   38215600 ns     35156250 ns            8
data | 16 | avx tbb   36815200 ns     35156250 ns            8
mask | 16 |          827241362 ns    826171875 ns            8
mask | 16 | avx       51065175 ns     48828125 ns            8
mask | 16 |     tbb  129024600 ns    121093750 ns            8
mask | 16 | avx tbb   36836962 ns     37109375 ns            8

data | 17 |          162592437 ns    164062500 ns            8
data | 17 | avx       54841963 ns     56640625 ns            8
data | 17 |     tbb   37787787 ns     37109375 ns            8
data | 17 | avx tbb   37227400 ns     41015625 ns            8
mask | 17 |          830320925 ns    832031250 ns            8
mask | 17 | avx       51043338 ns     52734375 ns            8
mask | 17 |     tbb  129484700 ns    119140625 ns            8
mask | 17 | avx tbb   37390300 ns     35156250 ns            8

data | 18 |          150252238 ns    152343750 ns            8
data | 18 | avx       50650050 ns     50781250 ns            8
data | 18 |     tbb   37847925 ns     35156250 ns            8
data | 18 | avx tbb   37151125 ns     37109375 ns            8
mask | 18 |          814156663 ns    816406250 ns            8
mask | 18 | avx       51428588 ns     50781250 ns            8
mask | 18 |     tbb  129545113 ns    121093750 ns            8
mask | 18 | avx tbb   36812300 ns     35156250 ns            8

data | 19 |          141743125 ns    142578125 ns            8
data | 19 | avx       50741450 ns     50781250 ns            8
data | 19 |     tbb   37754063 ns     37109375 ns            8
data | 19 | avx tbb   36859325 ns     39062500 ns            8
mask | 19 |          832951687 ns    833984375 ns            8
mask | 19 | avx       50818163 ns     50781250 ns            8
mask | 19 |     tbb  129501063 ns    119140625 ns            8
mask | 19 | avx tbb   36878450 ns     35156250 ns            8

data | 20 |          134453838 ns    130859375 ns            8
data | 20 | avx       50586100 ns     50781250 ns            8
data | 20 |     tbb   37754587 ns     39062500 ns            8
data | 20 | avx tbb   36898312 ns     37109375 ns            8
mask | 20 |          824539238 ns    822265625 ns            8
mask | 20 | avx       55692425 ns     54687500 ns            8
mask | 20 |     tbb  129914625 ns    125000000 ns            8
mask | 20 | avx tbb   36858975 ns     37109375 ns            8

data | 21 |          132845138 ns    134765625 ns            8
data | 21 | avx       51338475 ns     52734375 ns            8
data | 21 |     tbb   38347725 ns     33203125 ns            8
data | 21 | avx tbb   36837225 ns     39062500 ns            8
mask | 21 |          826567988 ns    822265625 ns            8
mask | 21 | avx       51118387 ns     52734375 ns            8
mask | 21 |     tbb  128901725 ns    126953125 ns            8
mask | 21 | avx tbb   37207675 ns     37109375 ns            8

data | 22 |          127009813 ns    128906250 ns            8
data | 22 | avx       55064100 ns     52734375 ns            8
data | 22 |     tbb   37600163 ns     35156250 ns            8
data | 22 | avx tbb   36850688 ns     39062500 ns            8
mask | 22 |          843274338 ns    841796875 ns            8
mask | 22 | avx       55382888 ns     56640625 ns            8
mask | 22 |     tbb  130185500 ns    121093750 ns            8
mask | 22 | avx tbb   37070263 ns     37109375 ns            8

data | 23 |          121986325 ns    123046875 ns            8
data | 23 | avx       50225938 ns     52734375 ns            8
data | 23 |     tbb   37664038 ns     37109375 ns            8
data | 23 | avx tbb   36837775 ns     39062500 ns            8
mask | 23 |          838615550 ns    839843750 ns            8
mask | 23 | avx       51338325 ns     50781250 ns            8
mask | 23 |     tbb  129508800 ns    125000000 ns            8
mask | 23 | avx tbb   37165400 ns     39062500 ns            8

data | 24 |          118568288 ns    117187500 ns            8
data | 24 | avx       55677437 ns     58593750 ns            8
data | 24 |     tbb   37715525 ns     37109375 ns            8
data | 24 | avx tbb   36978675 ns     37109375 ns            8
mask | 24 |          827296613 ns    828125000 ns            8
mask | 24 | avx       51043887 ns     48828125 ns            8
mask | 24 |     tbb  129857875 ns    119140625 ns            8
mask | 24 | avx tbb   36824437 ns     37109375 ns            8

data | 25 |          114686525 ns    115234375 ns            8
data | 25 | avx       50771512 ns     52734375 ns            8
data | 25 |     tbb   37542775 ns     37109375 ns            8
data | 25 | avx tbb   36888138 ns     35156250 ns            8
mask | 25 |          830014425 ns    832031250 ns            8
mask | 25 | avx       50674675 ns     48828125 ns            8
mask | 25 |     tbb  129432300 ns    123046875 ns            8
mask | 25 | avx tbb   36831612 ns     37109375 ns            8

data | 26 |          108316137 ns    109375000 ns            8
data | 26 | avx       54945175 ns     54687500 ns            8
data | 26 |     tbb   37455137 ns     37109375 ns            8
data | 26 | avx tbb   37382125 ns     39062500 ns            8
mask | 26 |          827447175 ns    826171875 ns            8
mask | 26 | avx       50955175 ns     50781250 ns            8
mask | 26 |     tbb  130970000 ns    123046875 ns            8
mask | 26 | avx tbb   37181663 ns     37109375 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           85349163 ns     85937500 ns            8
data |  1 | avx       85484863 ns     85937500 ns            8
data |  1 |     tbb   73097338 ns     72265625 ns            8
data |  1 | avx tbb   73128800 ns     70312500 ns            8
mask |  1 |           85419400 ns     82031250 ns            8
mask |  1 | avx       85436587 ns     83984375 ns            8
mask |  1 |     tbb   73148950 ns     76171875 ns            8
mask |  1 | avx tbb   73123338 ns     74218750 ns            8

data |  2 |         2573779075 ns   2572265625 ns            8
data |  2 | avx      100370575 ns    101562500 ns            8
data |  2 |     tbb  255262200 ns    232421875 ns            8
data |  2 | avx tbb   73726400 ns     68359375 ns            8
mask |  2 |         1660325638 ns   1660156250 ns            8
mask |  2 | avx      102233500 ns    103515625 ns            8
mask |  2 |     tbb  259127238 ns    240234375 ns            8
mask |  2 | avx tbb   73561400 ns     72265625 ns            8

data |  3 |         1713406863 ns   1714843750 ns            8
data |  3 | avx      101624138 ns    101562500 ns            8
data |  3 |     tbb  165187687 ns    154296875 ns            8
data |  3 | avx tbb   73589350 ns     72265625 ns            8
mask |  3 |         1672813088 ns   1669921875 ns            8
mask |  3 | avx      102325762 ns     99609375 ns            8
mask |  3 |     tbb  260205200 ns    240234375 ns            8
mask |  3 | avx tbb   73576050 ns     72265625 ns            8

data |  4 |         1290193212 ns   1292968750 ns            8
data |  4 | avx      100333462 ns    101562500 ns            8
data |  4 |     tbb  125643625 ns    117187500 ns            8
data |  4 | avx tbb   73644225 ns     70312500 ns            8
mask |  4 |         1659682575 ns   1660156250 ns            8
mask |  4 | avx      102694600 ns     99609375 ns            8
mask |  4 |     tbb  258037425 ns    240234375 ns            8
mask |  4 | avx tbb   73610325 ns     72265625 ns            8

data |  5 |         1036332325 ns   1039062500 ns            8
data |  5 | avx      100623762 ns     99609375 ns            8
data |  5 |     tbb  103335188 ns     93750000 ns            8
data |  5 | avx tbb   73623912 ns     74218750 ns            8
mask |  5 |         1660284112 ns   1660156250 ns            8
mask |  5 | avx      102146087 ns    103515625 ns            8
mask |  5 |     tbb  262693138 ns    244140625 ns            8
mask |  5 | avx tbb   73656087 ns     78125000 ns            8

data |  6 |          859592450 ns    859375000 ns            8
data |  6 | avx      102189988 ns    101562500 ns            8
data |  6 |     tbb   86978062 ns     85937500 ns            8
data |  6 | avx tbb   73644137 ns     72265625 ns            8
mask |  6 |         1676200463 ns   1677734375 ns            8
mask |  6 | avx      103038437 ns    101562500 ns            8
mask |  6 |     tbb  257755512 ns    238281250 ns            8
mask |  6 | avx tbb   73633637 ns     72265625 ns            8

data |  7 |          738437075 ns    736328125 ns            8
data |  7 | avx      101122138 ns     99609375 ns            8
data |  7 |     tbb   79713200 ns     76171875 ns            8
data |  7 | avx tbb   73736625 ns     72265625 ns            8
mask |  7 |         1678646612 ns   1677734375 ns            8
mask |  7 | avx      101555625 ns    101562500 ns            8
mask |  7 |     tbb  258766575 ns    244140625 ns            8
mask |  7 | avx tbb   73684588 ns     76171875 ns            8

data |  8 |          648414613 ns    648437500 ns            8
data |  8 | avx      100452775 ns    101562500 ns            8
data |  8 |     tbb   76732537 ns     72265625 ns            8
data |  8 | avx tbb   73553425 ns     70312500 ns            8
mask |  8 |         1660183250 ns   1658203125 ns            8
mask |  8 | avx      103361788 ns    107421875 ns            8
mask |  8 |     tbb  261199925 ns    248046875 ns            8
mask |  8 | avx tbb   73518862 ns     74218750 ns            8

data |  9 |          580779437 ns    582031250 ns            8
data |  9 | avx      100675888 ns    101562500 ns            8
data |  9 |     tbb   76279500 ns     70312500 ns            8
data |  9 | avx tbb   73598925 ns     72265625 ns            8
mask |  9 |         1656666638 ns   1656250000 ns            8
mask |  9 | avx      102865875 ns    103515625 ns            8
mask |  9 |     tbb  259539450 ns    238281250 ns            8
mask |  9 | avx tbb   73662337 ns     72265625 ns            8

data | 10 |          522522950 ns    519531250 ns            8
data | 10 | avx      100794762 ns    103515625 ns            8
data | 10 |     tbb   77748613 ns     72265625 ns            8
data | 10 | avx tbb   73529550 ns     72265625 ns            8
mask | 10 |         1654518563 ns   1654296875 ns            8
mask | 10 | avx      102099663 ns    101562500 ns            8
mask | 10 |     tbb  259886875 ns    238281250 ns            8
mask | 10 | avx tbb   73576475 ns     72265625 ns            8

data | 11 |          475700913 ns    474609375 ns            8
data | 11 | avx      100356912 ns     99609375 ns            8
data | 11 |     tbb   75585125 ns     76171875 ns            8
data | 11 | avx tbb   73685325 ns     76171875 ns            8
mask | 11 |         1649210712 ns   1646484375 ns            8
mask | 11 | avx      102025638 ns    103515625 ns            8
mask | 11 |     tbb  259472763 ns    242187500 ns            8
mask | 11 | avx tbb   73613625 ns     68359375 ns            8

data | 12 |          438254912 ns    439453125 ns            8
data | 12 | avx      101943013 ns    101562500 ns            8
data | 12 |     tbb   74788875 ns     72265625 ns            8
data | 12 | avx tbb   73644500 ns     72265625 ns            8
mask | 12 |         1656519963 ns   1658203125 ns            8
mask | 12 | avx      102841150 ns    109375000 ns            8
mask | 12 |     tbb  259420213 ns    238281250 ns            8
mask | 12 | avx tbb   73622400 ns     74218750 ns            8

data | 13 |          410927150 ns    410156250 ns            8
data | 13 | avx      102199412 ns    103515625 ns            8
data | 13 |     tbb   74810737 ns     70312500 ns            8
data | 13 | avx tbb   73707925 ns     78125000 ns            8
mask | 13 |         1652722163 ns   1648437500 ns            8
mask | 13 | avx      101838063 ns    101562500 ns            8
mask | 13 |     tbb  261062275 ns    250000000 ns            8
mask | 13 | avx tbb   73723812 ns     74218750 ns            8

data | 14 |          379295813 ns    380859375 ns            8
data | 14 | avx      107816600 ns    107421875 ns            8
data | 14 |     tbb   75125925 ns     70312500 ns            8
data | 14 | avx tbb   73569575 ns     70312500 ns            8
mask | 14 |         1694593887 ns   1697265625 ns            8
mask | 14 | avx      101836150 ns    101562500 ns            8
mask | 14 |     tbb  261245013 ns    244140625 ns            8
mask | 14 | avx tbb   73604800 ns     74218750 ns            8

data | 15 |          354948913 ns    359375000 ns            8
data | 15 | avx      100716150 ns     99609375 ns            8
data | 15 |     tbb   74907738 ns     76171875 ns            8
data | 15 | avx tbb   73632138 ns     74218750 ns            8
mask | 15 |         1679839875 ns   1683593750 ns            8
mask | 15 | avx      101065500 ns    101562500 ns            8
mask | 15 |     tbb  265664625 ns    248046875 ns            8
mask | 15 | avx tbb   73623150 ns     70312500 ns            8

data | 16 |          334724237 ns    333984375 ns            8
data | 16 | avx      101449975 ns     99609375 ns            8
data | 16 |     tbb   75746337 ns     72265625 ns            8
data | 16 | avx tbb   73651325 ns     72265625 ns            8
mask | 16 |         1694213612 ns   1691406250 ns            8
mask | 16 | avx      101237713 ns    101562500 ns            8
mask | 16 |     tbb  258128013 ns    242187500 ns            8
mask | 16 | avx tbb   73637825 ns     72265625 ns            8

data | 17 |          319583350 ns    320312500 ns            8
data | 17 | avx      102129500 ns     99609375 ns            8
data | 17 |     tbb   75373950 ns     72265625 ns            8
data | 17 | avx tbb   74297400 ns     76171875 ns            8
mask | 17 |         1664724650 ns   1662109375 ns            8
mask | 17 | avx      101589325 ns    103515625 ns            8
mask | 17 |     tbb  259132475 ns    242187500 ns            8
mask | 17 | avx tbb   73602713 ns     70312500 ns            8

data | 18 |          299330288 ns    300781250 ns            8
data | 18 | avx      102050325 ns    103515625 ns            8
data | 18 |     tbb   75136138 ns     76171875 ns            8
data | 18 | avx tbb   73595775 ns     72265625 ns            8
mask | 18 |         1666580175 ns   1669921875 ns            8
mask | 18 | avx      108372675 ns    111328125 ns            8
mask | 18 |     tbb  259391425 ns    242187500 ns            8
mask | 18 | avx tbb   73577637 ns     74218750 ns            8

data | 19 |          282678925 ns    283203125 ns            8
data | 19 | avx      102393537 ns    103515625 ns            8
data | 19 |     tbb   75223213 ns     72265625 ns            8
data | 19 | avx tbb   73747763 ns     74218750 ns            8
mask | 19 |         1674348225 ns   1671875000 ns            8
mask | 19 | avx      102013575 ns    101562500 ns            8
mask | 19 |     tbb  260897675 ns    248046875 ns            8
mask | 19 | avx tbb   73809562 ns     74218750 ns            8

data | 20 |          269125725 ns    269531250 ns            8
data | 20 | avx      100547413 ns     99609375 ns            8
data | 20 |     tbb   75512638 ns     76171875 ns            8
data | 20 | avx tbb   73683988 ns     74218750 ns            8
mask | 20 |         1680575700 ns   1677734375 ns            8
mask | 20 | avx      101589488 ns     97656250 ns            8
mask | 20 |     tbb  263912863 ns    242187500 ns            8
mask | 20 | avx tbb   74245162 ns     70312500 ns            8

data | 21 |          256717913 ns    255859375 ns            8
data | 21 | avx      100218975 ns    101562500 ns            8
data | 21 |     tbb   75330838 ns     72265625 ns            8
data | 21 | avx tbb   73627287 ns     70312500 ns            8
mask | 21 |         1662724800 ns   1662109375 ns            8
mask | 21 | avx      101846350 ns    101562500 ns            8
mask | 21 |     tbb  261257162 ns    238281250 ns            8
mask | 21 | avx tbb   73629950 ns     72265625 ns            8

data | 22 |          246061175 ns    234375000 ns            8
data | 22 | avx      102242188 ns     99609375 ns            8
data | 22 |     tbb   75241500 ns     72265625 ns            8
data | 22 | avx tbb   73555788 ns     74218750 ns            8
mask | 22 |         1669034575 ns   1671875000 ns            8
mask | 22 | avx      108361513 ns    107421875 ns            8
mask | 22 |     tbb  261315050 ns    246093750 ns            8
mask | 22 | avx tbb   73607575 ns     68359375 ns            8

data | 23 |          236735625 ns    238281250 ns            8
data | 23 | avx      100574475 ns    101562500 ns            8
data | 23 |     tbb   75192313 ns     74218750 ns            8
data | 23 | avx tbb   73630212 ns     72265625 ns            8
mask | 23 |         1669746600 ns   1669921875 ns            8
mask | 23 | avx      102161038 ns    101562500 ns            8
mask | 23 |     tbb  261006962 ns    242187500 ns            8
mask | 23 | avx tbb   73654925 ns     68359375 ns            8

data | 24 |          229010950 ns    230468750 ns            8
data | 24 | avx      106887437 ns    109375000 ns            8
data | 24 |     tbb   74826113 ns     74218750 ns            8
data | 24 | avx tbb   73644338 ns     78125000 ns            8
mask | 24 |         1672474562 ns   1675781250 ns            8
mask | 24 | avx      102711687 ns    101562500 ns            8
mask | 24 |     tbb  258026487 ns    242187500 ns            8
mask | 24 | avx tbb   73602137 ns     72265625 ns            8

data | 25 |          221785050 ns    220703125 ns            8
data | 25 | avx      101534913 ns    101562500 ns            8
data | 25 |     tbb   74827187 ns     70312500 ns            8
data | 25 | avx tbb   73641150 ns     72265625 ns            8
mask | 25 |         1661953900 ns   1666015625 ns            8
mask | 25 | avx      101311913 ns    101562500 ns            8
mask | 25 |     tbb  262367775 ns    244140625 ns            8
mask | 25 | avx tbb   73600712 ns     74218750 ns            8

data | 26 |          214281125 ns    214843750 ns            8
data | 26 | avx      100702825 ns     99609375 ns            8
data | 26 |     tbb   74878650 ns     74218750 ns            8
data | 26 | avx tbb   73586713 ns     74218750 ns            8
mask | 26 |         1685418725 ns   1683593750 ns            8
mask | 26 | avx      101560738 ns     97656250 ns            8
mask | 26 |     tbb  259852350 ns    246093750 ns            8
mask | 26 | avx tbb   73640112 ns     70312500 ns            8
```

</details>


## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1249 ns         3815 ns         4096
data |  1 | avx            757 ns        0.000 ns         4096
data |  1 |     tbb       5511 ns         7629 ns         4096
data |  1 | avx tbb        761 ns        0.000 ns         4096
mask |  1 |                756 ns        0.000 ns         4096
mask |  1 | avx            756 ns        0.000 ns         4096
mask |  1 |     tbb       5478 ns         3815 ns         4096
mask |  1 | avx tbb        748 ns        0.000 ns         4096

data |  2 |              18450 ns        15259 ns         4096
data |  2 | avx           1038 ns        0.000 ns         4096
data |  2 |     tbb      10644 ns        11444 ns         4096
data |  2 | avx tbb       1095 ns        0.000 ns         4096
mask |  2 |               9665 ns        11444 ns         4096
mask |  2 | avx            907 ns         3815 ns         4096
mask |  2 |     tbb       7675 ns         7629 ns         4096
mask |  2 | avx tbb        900 ns        0.000 ns         4096

data |  3 |              12614 ns        11444 ns         4096
data |  3 | avx           1038 ns        0.000 ns         4096
data |  3 |     tbb       9931 ns        11444 ns         4096
data |  3 | avx tbb       1041 ns        0.000 ns         4096
mask |  3 |               9366 ns        11444 ns         4096
mask |  3 | avx            897 ns         3815 ns         4096
mask |  3 |     tbb       7660 ns        0.000 ns         4096
mask |  3 | avx tbb        903 ns        0.000 ns         4096

data |  4 |               9559 ns        11444 ns         4096
data |  4 | avx           1040 ns        0.000 ns         4096
data |  4 |     tbb       9434 ns        11444 ns         4096
data |  4 | avx tbb       1081 ns         3815 ns         4096
mask |  4 |               9999 ns        11444 ns         4096
mask |  4 | avx            945 ns        0.000 ns         4096
mask |  4 |     tbb       7600 ns         7629 ns         4096
mask |  4 | avx tbb        959 ns        0.000 ns         4096

data |  5 |               7894 ns        11444 ns         4096
data |  5 | avx           1028 ns        0.000 ns         4096
data |  5 |     tbb       9319 ns         7629 ns         4096
data |  5 | avx tbb       1058 ns        0.000 ns         4096
mask |  5 |               9793 ns         3815 ns         4096
mask |  5 | avx            904 ns        0.000 ns         4096
mask |  5 |     tbb       7654 ns        11444 ns         4096
mask |  5 | avx tbb        960 ns        0.000 ns         4096

data |  6 |               7054 ns         7629 ns         4096
data |  6 | avx           1097 ns         3815 ns         4096
data |  6 |     tbb       9052 ns        11444 ns         4096
data |  6 | avx tbb       1090 ns         3815 ns         4096
mask |  6 |               9714 ns         7629 ns         4096
mask |  6 | avx            906 ns        0.000 ns         4096
mask |  6 |     tbb       7604 ns         7629 ns         4096
mask |  6 | avx tbb        995 ns        0.000 ns         4096

data |  7 |               6391 ns         7629 ns         4096
data |  7 | avx           1095 ns         3815 ns         4096
data |  7 |     tbb       8903 ns        11444 ns         4096
data |  7 | avx tbb       1138 ns         3815 ns         4096
mask |  7 |              10246 ns        11444 ns         4096
mask |  7 | avx            970 ns        0.000 ns         4096
mask |  7 |     tbb       7725 ns        11444 ns         4096
mask |  7 | avx tbb        974 ns        0.000 ns         4096

data |  8 |               5508 ns         3815 ns         4096
data |  8 | avx           1094 ns        0.000 ns         4096
data |  8 |     tbb       8837 ns        11444 ns         4096
data |  8 | avx tbb       1153 ns        0.000 ns         4096
mask |  8 |              10252 ns        11444 ns         4096
mask |  8 | avx            974 ns        0.000 ns         4096
mask |  8 |     tbb       7646 ns         7629 ns         4096
mask |  8 | avx tbb        968 ns        0.000 ns         4096

data |  9 |               4879 ns         3815 ns         4096
data |  9 | avx           1034 ns        0.000 ns         4096
data |  9 |     tbb       8796 ns        11444 ns         4096
data |  9 | avx tbb       1059 ns         3815 ns         4096
mask |  9 |               9582 ns        11444 ns         4096
mask |  9 | avx            928 ns        0.000 ns         4096
mask |  9 |     tbb       7632 ns         7629 ns         4096
mask |  9 | avx tbb        962 ns         3815 ns         4096

data | 10 |               4508 ns         7629 ns         4096
data | 10 | avx           1071 ns        0.000 ns         4096
data | 10 |     tbb       8689 ns         3815 ns         4096
data | 10 | avx tbb       1050 ns        0.000 ns         4096
mask | 10 |              10271 ns        11444 ns         4096
mask | 10 | avx            970 ns        0.000 ns         4096
mask | 10 |     tbb       7652 ns         7629 ns         4096
mask | 10 | avx tbb        982 ns         3815 ns         4096

data | 11 |               4235 ns         3815 ns         4096
data | 11 | avx           1105 ns        0.000 ns         4096
data | 11 |     tbb       8674 ns         7629 ns         4096
data | 11 | avx tbb       1130 ns        0.000 ns         4096
mask | 11 |              10171 ns        11444 ns         4096
mask | 11 | avx            987 ns        0.000 ns         4096
mask | 11 |     tbb       7620 ns        11444 ns         4096
mask | 11 | avx tbb        970 ns        0.000 ns         4096

data | 12 |               3950 ns        0.000 ns         4096
data | 12 | avx           1080 ns        0.000 ns         4096
data | 12 |     tbb       8605 ns         7629 ns         4096
data | 12 | avx tbb       1103 ns        0.000 ns         4096
mask | 12 |              10154 ns         7629 ns         4096
mask | 12 | avx            985 ns        0.000 ns         4096
mask | 12 |     tbb       7707 ns         3815 ns         4096
mask | 12 | avx tbb       1018 ns         3815 ns         4096

data | 13 |               3847 ns         7629 ns         4096
data | 13 | avx           1126 ns        0.000 ns         4096
data | 13 |     tbb       8557 ns         7629 ns         4096
data | 13 | avx tbb       1121 ns        0.000 ns         4096
mask | 13 |              10204 ns         7629 ns         4096
mask | 13 | avx            980 ns        0.000 ns         4096
mask | 13 |     tbb       7631 ns        11444 ns         4096
mask | 13 | avx tbb        980 ns         3815 ns         4096

data | 14 |               3508 ns         3815 ns         4096
data | 14 | avx           1081 ns         3815 ns         4096
data | 14 |     tbb       8533 ns        11444 ns         4096
data | 14 | avx tbb       1092 ns         3815 ns         4096
mask | 14 |               9958 ns        11444 ns         4096
mask | 14 | avx            980 ns         3815 ns         4096
mask | 14 |     tbb       7690 ns         3815 ns         4096
mask | 14 | avx tbb       1033 ns        0.000 ns         4096

data | 15 |               3445 ns        0.000 ns         4096
data | 15 | avx           1125 ns        0.000 ns         4096
data | 15 |     tbb       8604 ns         7629 ns         4096
data | 15 | avx tbb       1103 ns        0.000 ns         4096
mask | 15 |              10225 ns        11444 ns         4096
mask | 15 | avx            987 ns        0.000 ns         4096
mask | 15 |     tbb       7634 ns         7629 ns         4096
mask | 15 | avx tbb       1025 ns         3815 ns         4096

data | 16 |               3284 ns         3815 ns         4096
data | 16 | avx           1131 ns        0.000 ns         4096
data | 16 |     tbb       8463 ns         7629 ns         4096
data | 16 | avx tbb       1083 ns         3815 ns         4096
mask | 16 |              10202 ns        11444 ns         4096
mask | 16 | avx            977 ns         3815 ns         4096
mask | 16 |     tbb       7615 ns         7629 ns         4096
mask | 16 | avx tbb       1015 ns        0.000 ns         4096

data | 17 |               3145 ns         3815 ns         4096
data | 17 | avx           1134 ns        0.000 ns         4096
data | 17 |     tbb       8454 ns         7629 ns         4096
data | 17 | avx tbb       1114 ns        0.000 ns         4096
mask | 17 |              10176 ns        11444 ns         4096
mask | 17 | avx            988 ns        0.000 ns         4096
mask | 17 |     tbb       7653 ns        11444 ns         4096
mask | 17 | avx tbb        999 ns        0.000 ns         4096

data | 18 |               2925 ns         3815 ns         4096
data | 18 | avx           1106 ns         3815 ns         4096
data | 18 |     tbb       8456 ns         7629 ns         4096
data | 18 | avx tbb       1086 ns        0.000 ns         4096
mask | 18 |               9977 ns         7629 ns         4096
mask | 18 | avx            982 ns        0.000 ns         4096
mask | 18 |     tbb       7559 ns         7629 ns         4096
mask | 18 | avx tbb       1004 ns        0.000 ns         4096

data | 19 |               2824 ns         3815 ns         4096
data | 19 | avx           1105 ns        0.000 ns         4096
data | 19 |     tbb       8349 ns         7629 ns         4096
data | 19 | avx tbb       1095 ns        0.000 ns         4096
mask | 19 |               9906 ns        11444 ns         4096
mask | 19 | avx            992 ns        0.000 ns         4096
mask | 19 |     tbb       7623 ns         7629 ns         4096
mask | 19 | avx tbb        993 ns        0.000 ns         4096

data | 20 |               2736 ns         3815 ns         4096
data | 20 | avx           1107 ns         3815 ns         4096
data | 20 |     tbb       8412 ns        11444 ns         4096
data | 20 | avx tbb       1090 ns         3815 ns         4096
mask | 20 |              10183 ns        11444 ns         4096
mask | 20 | avx            994 ns         3815 ns         4096
mask | 20 |     tbb       7580 ns         7629 ns         4096
mask | 20 | avx tbb        998 ns        0.000 ns         4096

data | 21 |               2630 ns         3815 ns         4096
data | 21 | avx           1094 ns        0.000 ns         4096
data | 21 |     tbb       8400 ns         7629 ns         4096
data | 21 | avx tbb       1092 ns         3815 ns         4096
mask | 21 |               9960 ns        11444 ns         4096
mask | 21 | avx            993 ns         3815 ns         4096
mask | 21 |     tbb       7600 ns         3815 ns         4096
mask | 21 | avx tbb        996 ns        0.000 ns         4096

data | 22 |               2552 ns         3815 ns         4096
data | 22 | avx           1093 ns        0.000 ns         4096
data | 22 |     tbb       8319 ns        11444 ns         4096
data | 22 | avx tbb       1048 ns         3815 ns         4096
mask | 22 |               9432 ns         7629 ns         4096
mask | 22 | avx            942 ns        0.000 ns         4096
mask | 22 |     tbb       7608 ns         7629 ns         4096
mask | 22 | avx tbb        964 ns        0.000 ns         4096

data | 23 |               2403 ns         3815 ns         4096
data | 23 | avx           1067 ns        0.000 ns         4096
data | 23 |     tbb       8365 ns        11444 ns         4096
data | 23 | avx tbb       1081 ns         3815 ns         4096
mask | 23 |               9621 ns         7629 ns         4096
mask | 23 | avx            940 ns        0.000 ns         4096
mask | 23 |     tbb       7610 ns         7629 ns         4096
mask | 23 | avx tbb       1010 ns        0.000 ns         4096

data | 24 |               2415 ns         3815 ns         4096
data | 24 | avx           1094 ns         3815 ns         4096
data | 24 |     tbb       8211 ns        11444 ns         4096
data | 24 | avx tbb       1127 ns        0.000 ns         4096
mask | 24 |              10149 ns        11444 ns         4096
mask | 24 | avx            999 ns        0.000 ns         4096
mask | 24 |     tbb       7599 ns         7629 ns         4096
mask | 24 | avx tbb        990 ns         3815 ns         4096

data | 25 |               2350 ns        0.000 ns         4096
data | 25 | avx           1084 ns         3815 ns         4096
data | 25 |     tbb       8373 ns         7629 ns         4096
data | 25 | avx tbb       1021 ns        0.000 ns         4096
mask | 25 |               9331 ns         7629 ns         4096
mask | 25 | avx            927 ns        0.000 ns         4096
mask | 25 |     tbb       7666 ns        11444 ns         4096
mask | 25 | avx tbb        978 ns        0.000 ns         4096

data | 26 |               2234 ns         3815 ns         4096
data | 26 | avx           1058 ns        0.000 ns         4096
data | 26 |     tbb       8215 ns         7629 ns         4096
data | 26 | avx tbb       1082 ns        0.000 ns         4096
mask | 26 |               9979 ns        11444 ns         4096
mask | 26 | avx            993 ns        0.000 ns         4096
mask | 26 |     tbb       7627 ns        11444 ns         4096
mask | 26 | avx tbb       1006 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1532 ns         3815 ns         4096
data |  1 | avx           1529 ns         3815 ns         4096
data |  1 |     tbb       5861 ns         7629 ns         4096
data |  1 | avx tbb       1541 ns        0.000 ns         4096
mask |  1 |               1588 ns        0.000 ns         4096
mask |  1 | avx           1552 ns         3815 ns         4096
mask |  1 |     tbb       5836 ns         3815 ns         4096
mask |  1 | avx tbb       1555 ns         3815 ns         4096

data |  2 |              73688 ns        72479 ns         4096
data |  2 | avx           2133 ns         3815 ns         4096
data |  2 |     tbb      16748 ns        22888 ns         4096
data |  2 | avx tbb       2237 ns        0.000 ns         4096
mask |  2 |              37681 ns        41962 ns         4096
mask |  2 | avx           2208 ns         3815 ns         4096
mask |  2 |     tbb      13128 ns        15259 ns         4096
mask |  2 | avx tbb       2161 ns         3815 ns         4096

data |  3 |              49228 ns        53406 ns         4096
data |  3 | avx           2117 ns         3815 ns         4096
data |  3 |     tbb      14234 ns        15259 ns         4096
data |  3 | avx tbb       2271 ns         3815 ns         4096
mask |  3 |              37366 ns        41962 ns         4096
mask |  3 | avx           2066 ns         3815 ns         4096
mask |  3 |     tbb      13094 ns        11444 ns         4096
mask |  3 | avx tbb       2172 ns         3815 ns         4096

data |  4 |              37577 ns        34332 ns         4096
data |  4 | avx           2132 ns         3815 ns         4096
data |  4 |     tbb      12999 ns        11444 ns         4096
data |  4 | avx tbb       2240 ns         3815 ns         4096
mask |  4 |              37073 ns        38147 ns         4096
mask |  4 | avx           2176 ns         3815 ns         4096
mask |  4 |     tbb      13062 ns         7629 ns         4096
mask |  4 | avx tbb       2206 ns         3815 ns         4096

data |  5 |              29616 ns        34332 ns         4096
data |  5 | avx           2248 ns        0.000 ns         4096
data |  5 |     tbb      12125 ns        11444 ns         4096
data |  5 | avx tbb       2279 ns        0.000 ns         4096
mask |  5 |              37382 ns        34332 ns         4096
mask |  5 | avx           2111 ns         3815 ns         4096
mask |  5 |     tbb      13071 ns        15259 ns         4096
mask |  5 | avx tbb       2246 ns         3815 ns         4096

data |  6 |              24891 ns        26703 ns         4096
data |  6 | avx           2249 ns         3815 ns         4096
data |  6 |     tbb      11275 ns        11444 ns         4096
data |  6 | avx tbb       2259 ns        0.000 ns         4096
mask |  6 |              37495 ns        38147 ns         4096
mask |  6 | avx           2108 ns        0.000 ns         4096
mask |  6 |     tbb      13057 ns        11444 ns         4096
mask |  6 | avx tbb       2176 ns         3815 ns         4096

data |  7 |              21038 ns        15259 ns         4096
data |  7 | avx           2123 ns         3815 ns         4096
data |  7 |     tbb      11005 ns        15259 ns         4096
data |  7 | avx tbb       2200 ns        0.000 ns         4096
mask |  7 |              37010 ns        38147 ns         4096
mask |  7 | avx           2264 ns         3815 ns         4096
mask |  7 |     tbb      13271 ns        11444 ns         4096
mask |  7 | avx tbb       2235 ns        0.000 ns         4096

data |  8 |              18784 ns         7629 ns         4096
data |  8 | avx           2110 ns        0.000 ns         4096
data |  8 |     tbb      10573 ns        11444 ns         4096
data |  8 | avx tbb       2360 ns         3815 ns         4096
mask |  8 |              37460 ns        38147 ns         4096
mask |  8 | avx           2096 ns        0.000 ns         4096
mask |  8 |     tbb      13182 ns        11444 ns         4096
mask |  8 | avx tbb       2235 ns         3815 ns         4096

data |  9 |              17328 ns        19073 ns         4096
data |  9 | avx           2257 ns         3815 ns         4096
data |  9 |     tbb      10359 ns        11444 ns         4096
data |  9 | avx tbb       2256 ns        0.000 ns         4096
mask |  9 |              37447 ns        34332 ns         4096
mask |  9 | avx           2119 ns        0.000 ns         4096
mask |  9 |     tbb      13402 ns        11444 ns         4096
mask |  9 | avx tbb       2238 ns        0.000 ns         4096

data | 10 |              15280 ns        15259 ns         4096
data | 10 | avx           2260 ns         3815 ns         4096
data | 10 |     tbb      10134 ns         7629 ns         4096
data | 10 | avx tbb       2354 ns         3815 ns         4096
mask | 10 |              36816 ns        38147 ns         4096
mask | 10 | avx           2271 ns         3815 ns         4096
mask | 10 |     tbb      13074 ns        11444 ns         4096
mask | 10 | avx tbb       2247 ns         3815 ns         4096

data | 11 |              14503 ns        15259 ns         4096
data | 11 | avx           2255 ns         3815 ns         4096
data | 11 |     tbb      10089 ns         7629 ns         4096
data | 11 | avx tbb       2242 ns        0.000 ns         4096
mask | 11 |              37459 ns        38147 ns         4096
mask | 11 | avx           2121 ns        0.000 ns         4096
mask | 11 |     tbb      13099 ns        15259 ns         4096
mask | 11 | avx tbb       2253 ns         3815 ns         4096

data | 12 |              12759 ns        11444 ns         4096
data | 12 | avx           2223 ns         3815 ns         4096
data | 12 |     tbb      10076 ns         7629 ns         4096
data | 12 | avx tbb       2376 ns         3815 ns         4096
mask | 12 |              37345 ns        38147 ns         4096
mask | 12 | avx           2122 ns         3815 ns         4096
mask | 12 |     tbb      13081 ns         7629 ns         4096
mask | 12 | avx tbb       2236 ns         3815 ns         4096

data | 13 |              12270 ns        15259 ns         4096
data | 13 | avx           2259 ns        0.000 ns         4096
data | 13 |     tbb       9711 ns        11444 ns         4096
data | 13 | avx tbb       2252 ns        0.000 ns         4096
mask | 13 |              37263 ns        30518 ns         4096
mask | 13 | avx           2141 ns         3815 ns         4096
mask | 13 |     tbb      13097 ns        15259 ns         4096
mask | 13 | avx tbb       2235 ns         3815 ns         4096

data | 14 |              11053 ns         7629 ns         4096
data | 14 | avx           2107 ns        0.000 ns         4096
data | 14 |     tbb       9610 ns        11444 ns         4096
data | 14 | avx tbb       2270 ns         3815 ns         4096
mask | 14 |              36141 ns        34332 ns         4096
mask | 14 | avx           2131 ns         3815 ns         4096
mask | 14 |     tbb      13306 ns        19073 ns         4096
mask | 14 | avx tbb       2239 ns        0.000 ns         4096

data | 15 |              10704 ns        15259 ns         4096
data | 15 | avx           2205 ns        0.000 ns         4096
data | 15 |     tbb       9509 ns        11444 ns         4096
data | 15 | avx tbb       2341 ns         3815 ns         4096
mask | 15 |              37356 ns        38147 ns         4096
mask | 15 | avx           2120 ns         3815 ns         4096
mask | 15 |     tbb      13400 ns        11444 ns         4096
mask | 15 | avx tbb       2234 ns         3815 ns         4096

data | 16 |              10097 ns        11444 ns         4096
data | 16 | avx           2257 ns         3815 ns         4096
data | 16 |     tbb       9406 ns        11444 ns         4096
data | 16 | avx tbb       2198 ns        0.000 ns         4096
mask | 16 |              37072 ns        38147 ns         4096
mask | 16 | avx           2258 ns         3815 ns         4096
mask | 16 |     tbb      13130 ns        19073 ns         4096
mask | 16 | avx tbb       2282 ns        0.000 ns         4096

data | 17 |               9409 ns        11444 ns         4096
data | 17 | avx           2152 ns         3815 ns         4096
data | 17 |     tbb       9387 ns         7629 ns         4096
data | 17 | avx tbb       2277 ns        0.000 ns         4096
mask | 17 |              36338 ns        34332 ns         4096
mask | 17 | avx           2143 ns         3815 ns         4096
mask | 17 |     tbb      13087 ns        11444 ns         4096
mask | 17 | avx tbb       2207 ns         3815 ns         4096

data | 18 |               8856 ns        11444 ns         4096
data | 18 | avx           2118 ns        0.000 ns         4096
data | 18 |     tbb       9283 ns        11444 ns         4096
data | 18 | avx tbb       2272 ns         3815 ns         4096
mask | 18 |              36289 ns        38147 ns         4096
mask | 18 | avx           2136 ns         3815 ns         4096
mask | 18 |     tbb      13087 ns        15259 ns         4096
mask | 18 | avx tbb       2226 ns        0.000 ns         4096

data | 19 |               8390 ns         7629 ns         4096
data | 19 | avx           2164 ns         3815 ns         4096
data | 19 |     tbb       9196 ns         7629 ns         4096
data | 19 | avx tbb       2275 ns         3815 ns         4096
mask | 19 |              36424 ns        38147 ns         4096
mask | 19 | avx           2141 ns         3815 ns         4096
mask | 19 |     tbb      13246 ns        19073 ns         4096
mask | 19 | avx tbb       2256 ns         3815 ns         4096

data | 20 |               8270 ns         7629 ns         4096
data | 20 | avx           2283 ns         3815 ns         4096
data | 20 |     tbb       9109 ns         3815 ns         4096
data | 20 | avx tbb       2218 ns         3815 ns         4096
mask | 20 |              35987 ns        38147 ns         4096
mask | 20 | avx           2144 ns        0.000 ns         4096
mask | 20 |     tbb      13336 ns        11444 ns         4096
mask | 20 | avx tbb       2222 ns         3815 ns         4096

data | 21 |               7859 ns         7629 ns         4096
data | 21 | avx           2095 ns        0.000 ns         4096
data | 21 |     tbb       9116 ns        11444 ns         4096
data | 21 | avx tbb       2250 ns        0.000 ns         4096
mask | 21 |              37237 ns        38147 ns         4096
mask | 21 | avx           2173 ns        0.000 ns         4096
mask | 21 |     tbb      13120 ns        11444 ns         4096
mask | 21 | avx tbb       2237 ns         3815 ns         4096

data | 22 |               7448 ns        11444 ns         4096
data | 22 | avx           2120 ns        0.000 ns         4096
data | 22 |     tbb       9087 ns         7629 ns         4096
data | 22 | avx tbb       2273 ns         3815 ns         4096
mask | 22 |              37808 ns        38147 ns         4096
mask | 22 | avx           2137 ns         3815 ns         4096
mask | 22 |     tbb      13128 ns        11444 ns         4096
mask | 22 | avx tbb       2224 ns         3815 ns         4096

data | 23 |               7150 ns         3815 ns         4096
data | 23 | avx           2124 ns         3815 ns         4096
data | 23 |     tbb       8975 ns         7629 ns         4096
data | 23 | avx tbb       2281 ns        0.000 ns         4096
mask | 23 |              37714 ns        34332 ns         4096
mask | 23 | avx           2142 ns         3815 ns         4096
mask | 23 |     tbb      13112 ns        15259 ns         4096
mask | 23 | avx tbb       2293 ns        0.000 ns         4096

data | 24 |               6915 ns         7629 ns         4096
data | 24 | avx           2131 ns         3815 ns         4096
data | 24 |     tbb       8923 ns         7629 ns         4096
data | 24 | avx tbb       2275 ns        0.000 ns         4096
mask | 24 |              36029 ns        38147 ns         4096
mask | 24 | avx           2153 ns         3815 ns         4096
mask | 24 |     tbb      13314 ns        15259 ns         4096
mask | 24 | avx tbb       2292 ns         3815 ns         4096

data | 25 |               6647 ns         7629 ns         4096
data | 25 | avx           2130 ns         3815 ns         4096
data | 25 |     tbb       8926 ns        15259 ns         4096
data | 25 | avx tbb       2260 ns         3815 ns         4096
mask | 25 |              35831 ns        38147 ns         4096
mask | 25 | avx           2153 ns        0.000 ns         4096
mask | 25 |     tbb      13111 ns        15259 ns         4096
mask | 25 | avx tbb       2221 ns         3815 ns         4096

data | 26 |               6483 ns         7629 ns         4096
data | 26 | avx           2168 ns        0.000 ns         4096
data | 26 |     tbb       8978 ns        11444 ns         4096
data | 26 | avx tbb       2241 ns        0.000 ns         4096
mask | 26 |              35955 ns        38147 ns         4096
mask | 26 | avx           2137 ns        0.000 ns         4096
mask | 26 |     tbb      13053 ns        15259 ns         4096
mask | 26 | avx tbb       2249 ns         3815 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4945 ns        0.000 ns         2048
data |  1 | avx           4863 ns         7629 ns         2048
data |  1 |     tbb       9440 ns        15259 ns         2048
data |  1 | avx tbb       5508 ns         7629 ns         2048
mask |  1 |               5194 ns         7629 ns         2048
mask |  1 | avx           5140 ns         7629 ns         2048
mask |  1 |     tbb       9390 ns        15259 ns         2048
mask |  1 | avx tbb       5431 ns        0.000 ns         2048

data |  2 |             284806 ns       289917 ns         2048
data |  2 | avx           7356 ns        0.000 ns         2048
data |  2 |     tbb      40329 ns        30518 ns         2048
data |  2 | avx tbb       7747 ns         7629 ns         2048
mask |  2 |             144582 ns       144958 ns         2048
mask |  2 | avx           7477 ns         7629 ns         2048
mask |  2 |     tbb      35988 ns        38147 ns         2048
mask |  2 | avx tbb       7809 ns        15259 ns         2048

data |  3 |             191607 ns       198364 ns         2048
data |  3 | avx           7334 ns         7629 ns         2048
data |  3 |     tbb      31099 ns        22888 ns         2048
data |  3 | avx tbb       7627 ns        15259 ns         2048
mask |  3 |             141700 ns       144958 ns         2048
mask |  3 | avx           7462 ns        15259 ns         2048
mask |  3 |     tbb      36577 ns        30518 ns         2048
mask |  3 | avx tbb       7861 ns         7629 ns         2048

data |  4 |             144443 ns       137329 ns         2048
data |  4 | avx           7220 ns        15259 ns         2048
data |  4 |     tbb      26400 ns        30518 ns         2048
data |  4 | avx tbb       7522 ns         7629 ns         2048
mask |  4 |             145041 ns       152588 ns         2048
mask |  4 | avx           7393 ns         7629 ns         2048
mask |  4 |     tbb      35964 ns        38147 ns         2048
mask |  4 | avx tbb       7693 ns        0.000 ns         2048

data |  5 |             116458 ns       122070 ns         2048
data |  5 | avx           7272 ns        15259 ns         2048
data |  5 |     tbb      23941 ns        30518 ns         2048
data |  5 | avx tbb       7612 ns         7629 ns         2048
mask |  5 |             144200 ns       152588 ns         2048
mask |  5 | avx           7520 ns        15259 ns         2048
mask |  5 |     tbb      36483 ns        30518 ns         2048
mask |  5 | avx tbb       8035 ns         7629 ns         2048

data |  6 |              95311 ns        91553 ns         2048
data |  6 | avx           7238 ns        15259 ns         2048
data |  6 |     tbb      21645 ns        22888 ns         2048
data |  6 | avx tbb       7701 ns         7629 ns         2048
mask |  6 |             144739 ns       152588 ns         2048
mask |  6 | avx           7525 ns         7629 ns         2048
mask |  6 |     tbb      36272 ns        45776 ns         2048
mask |  6 | avx tbb       7949 ns         7629 ns         2048

data |  7 |              84529 ns        91553 ns         2048
data |  7 | avx           7357 ns        0.000 ns         2048
data |  7 |     tbb      20371 ns        15259 ns         2048
data |  7 | avx tbb       7706 ns         7629 ns         2048
mask |  7 |             144517 ns       152588 ns         2048
mask |  7 | avx           7588 ns        15259 ns         2048
mask |  7 |     tbb      36444 ns        45776 ns         2048
mask |  7 | avx tbb       7793 ns        0.000 ns         2048

data |  8 |              74160 ns        76294 ns         2048
data |  8 | avx           7220 ns         7629 ns         2048
data |  8 |     tbb      19271 ns        30518 ns         2048
data |  8 | avx tbb       7652 ns         7629 ns         2048
mask |  8 |             144804 ns       137329 ns         2048
mask |  8 | avx           7410 ns         7629 ns         2048
mask |  8 |     tbb      36550 ns        38147 ns         2048
mask |  8 | avx tbb       7813 ns        15259 ns         2048

data |  9 |              66299 ns        61035 ns         2048
data |  9 | avx           7189 ns        0.000 ns         2048
data |  9 |     tbb      18369 ns         7629 ns         2048
data |  9 | avx tbb       7446 ns        15259 ns         2048
mask |  9 |             144131 ns       137329 ns         2048
mask |  9 | avx           7468 ns        0.000 ns         2048
mask |  9 |     tbb      36147 ns        45776 ns         2048
mask |  9 | avx tbb       7835 ns        15259 ns         2048

data | 10 |              59609 ns        61035 ns         2048
data | 10 | avx           7411 ns         7629 ns         2048
data | 10 |     tbb      17718 ns        22888 ns         2048
data | 10 | avx tbb       7484 ns         7629 ns         2048
mask | 10 |             144131 ns       137329 ns         2048
mask | 10 | avx           7463 ns         7629 ns         2048
mask | 10 |     tbb      35962 ns        45776 ns         2048
mask | 10 | avx tbb       7781 ns        15259 ns         2048

data | 11 |              53584 ns        53406 ns         2048
data | 11 | avx           7667 ns         7629 ns         2048
data | 11 |     tbb      17205 ns         7629 ns         2048
data | 11 | avx tbb       7452 ns         7629 ns         2048
mask | 11 |             144375 ns       137329 ns         2048
mask | 11 | avx           7396 ns        15259 ns         2048
mask | 11 |     tbb      36326 ns        30518 ns         2048
mask | 11 | avx tbb       8273 ns         7629 ns         2048

data | 12 |              48604 ns        30518 ns         2048
data | 12 | avx           7377 ns         7629 ns         2048
data | 12 |     tbb      16738 ns        0.000 ns         2048
data | 12 | avx tbb       7615 ns        0.000 ns         2048
mask | 12 |             144464 ns       144958 ns         2048
mask | 12 | avx           7425 ns        15259 ns         2048
mask | 12 |     tbb      36007 ns        38147 ns         2048
mask | 12 | avx tbb       7932 ns        0.000 ns         2048

data | 13 |              45455 ns        45776 ns         2048
data | 13 | avx           7850 ns        0.000 ns         2048
data | 13 |     tbb      16446 ns        15259 ns         2048
data | 13 | avx tbb       7617 ns        15259 ns         2048
mask | 13 |             144430 ns       152588 ns         2048
mask | 13 | avx           7601 ns         7629 ns         2048
mask | 13 |     tbb      36582 ns        45776 ns         2048
mask | 13 | avx tbb       8339 ns         7629 ns         2048

data | 14 |              43621 ns        30518 ns         2048
data | 14 | avx           7610 ns         7629 ns         2048
data | 14 |     tbb      15972 ns        22888 ns         2048
data | 14 | avx tbb       7666 ns        0.000 ns         2048
mask | 14 |             144400 ns       152588 ns         2048
mask | 14 | avx           7506 ns        0.000 ns         2048
mask | 14 |     tbb      35945 ns        30518 ns         2048
mask | 14 | avx tbb       7753 ns        15259 ns         2048

data | 15 |              39310 ns        38147 ns         2048
data | 15 | avx           7676 ns         7629 ns         2048
data | 15 |     tbb      15731 ns         7629 ns         2048
data | 15 | avx tbb       7715 ns         7629 ns         2048
mask | 15 |             144186 ns       152588 ns         2048
mask | 15 | avx           7521 ns         7629 ns         2048
mask | 15 |     tbb      36340 ns        30518 ns         2048
mask | 15 | avx tbb       7959 ns         7629 ns         2048

data | 16 |              37485 ns        38147 ns         2048
data | 16 | avx           7609 ns         7629 ns         2048
data | 16 |     tbb      15400 ns        15259 ns         2048
data | 16 | avx tbb       7584 ns        15259 ns         2048
mask | 16 |             144557 ns       152588 ns         2048
mask | 16 | avx           7546 ns        0.000 ns         2048
mask | 16 |     tbb      36674 ns        38147 ns         2048
mask | 16 | avx tbb       8017 ns         7629 ns         2048

data | 17 |              36535 ns        30518 ns         2048
data | 17 | avx           7684 ns         7629 ns         2048
data | 17 |     tbb      15207 ns        22888 ns         2048
data | 17 | avx tbb       7555 ns        0.000 ns         2048
mask | 17 |             145000 ns       144958 ns         2048
mask | 17 | avx           7505 ns        15259 ns         2048
mask | 17 |     tbb      35920 ns        53406 ns         2048
mask | 17 | avx tbb       7839 ns        15259 ns         2048

data | 18 |              34472 ns        45776 ns         2048
data | 18 | avx           7544 ns        15259 ns         2048
data | 18 |     tbb      15291 ns        15259 ns         2048
data | 18 | avx tbb       7676 ns         7629 ns         2048
mask | 18 |             144754 ns       152588 ns         2048
mask | 18 | avx           7607 ns         7629 ns         2048
mask | 18 |     tbb      35999 ns        38147 ns         2048
mask | 18 | avx tbb       8109 ns         7629 ns         2048

data | 19 |              30921 ns        15259 ns         2048
data | 19 | avx           7375 ns         7629 ns         2048
data | 19 |     tbb      14916 ns        22888 ns         2048
data | 19 | avx tbb       7549 ns         7629 ns         2048
mask | 19 |             144613 ns       152588 ns         2048
mask | 19 | avx           7370 ns         7629 ns         2048
mask | 19 |     tbb      36495 ns        38147 ns         2048
mask | 19 | avx tbb       8046 ns         7629 ns         2048

data | 20 |              29828 ns        38147 ns         2048
data | 20 | avx           7189 ns         7629 ns         2048
data | 20 |     tbb      14497 ns        15259 ns         2048
data | 20 | avx tbb       7596 ns         7629 ns         2048
mask | 20 |             144754 ns       152588 ns         2048
mask | 20 | avx           7411 ns         7629 ns         2048
mask | 20 |     tbb      36012 ns        38147 ns         2048
mask | 20 | avx tbb       7915 ns        15259 ns         2048

data | 21 |              28161 ns        15259 ns         2048
data | 21 | avx           7591 ns        0.000 ns         2048
data | 21 |     tbb      14945 ns        15259 ns         2048
data | 21 | avx tbb       7262 ns        0.000 ns         2048
mask | 21 |             141120 ns       144958 ns         2048
mask | 21 | avx           7399 ns        0.000 ns         2048
mask | 21 |     tbb      35912 ns        38147 ns         2048
mask | 21 | avx tbb       7809 ns        0.000 ns         2048

data | 22 |              26886 ns        22888 ns         2048
data | 22 | avx           7416 ns         7629 ns         2048
data | 22 |     tbb      14288 ns        22888 ns         2048
data | 22 | avx tbb       7611 ns        15259 ns         2048
mask | 22 |             141783 ns       144958 ns         2048
mask | 22 | avx           7530 ns         7629 ns         2048
mask | 22 |     tbb      36502 ns        53406 ns         2048
mask | 22 | avx tbb       8019 ns        0.000 ns         2048

data | 23 |              26122 ns        22888 ns         2048
data | 23 | avx           7145 ns         7629 ns         2048
data | 23 |     tbb      14023 ns         7629 ns         2048
data | 23 | avx tbb       7459 ns        15259 ns         2048
mask | 23 |             145160 ns       144958 ns         2048
mask | 23 | avx           7451 ns         7629 ns         2048
mask | 23 |     tbb      35954 ns        30518 ns         2048
mask | 23 | avx tbb       7884 ns         7629 ns         2048

data | 24 |              26312 ns        22888 ns         2048
data | 24 | avx           7664 ns         7629 ns         2048
data | 24 |     tbb      13889 ns         7629 ns         2048
data | 24 | avx tbb       7499 ns         7629 ns         2048
mask | 24 |             143841 ns       137329 ns         2048
mask | 24 | avx           7486 ns         7629 ns         2048
mask | 24 |     tbb      36042 ns        38147 ns         2048
mask | 24 | avx tbb       7812 ns        15259 ns         2048

data | 25 |              25251 ns        30518 ns         2048
data | 25 | avx           7640 ns        0.000 ns         2048
data | 25 |     tbb      13903 ns        15259 ns         2048
data | 25 | avx tbb       7161 ns         7629 ns         2048
mask | 25 |             141249 ns       137329 ns         2048
mask | 25 | avx           7398 ns        0.000 ns         2048
mask | 25 |     tbb      36421 ns        30518 ns         2048
mask | 25 | avx tbb       7987 ns        0.000 ns         2048

data | 26 |              23590 ns        22888 ns         2048
data | 26 | avx           7137 ns         7629 ns         2048
data | 26 |     tbb      13654 ns        22888 ns         2048
data | 26 | avx tbb       7512 ns        15259 ns         2048
mask | 26 |             144817 ns       144958 ns         2048
mask | 26 | avx           7470 ns        0.000 ns         2048
mask | 26 |     tbb      36039 ns        15259 ns         2048
mask | 26 | avx tbb       7953 ns        15259 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              16519 ns        0.000 ns         1024
data |  1 | avx          17005 ns        30518 ns         1024
data |  1 |     tbb      16924 ns        0.000 ns         1024
data |  1 | avx tbb      16545 ns        30518 ns         1024
mask |  1 |              18349 ns        15259 ns         1024
mask |  1 | avx          17180 ns        0.000 ns         1024
mask |  1 |     tbb      17213 ns        0.000 ns         1024
mask |  1 | avx tbb      16292 ns        15259 ns         1024

data |  2 |            1127628 ns      1129150 ns         1024
data |  2 | avx          26217 ns        30518 ns         1024
data |  2 |     tbb     124935 ns       167847 ns         1024
data |  2 | avx tbb      17498 ns        15259 ns         1024
mask |  2 |             567197 ns       579834 ns         1024
mask |  2 | avx          27271 ns        0.000 ns         1024
mask |  2 |     tbb     118114 ns       122070 ns         1024
mask |  2 | avx tbb      17264 ns        15259 ns         1024

data |  3 |             752495 ns       778198 ns         1024
data |  3 | avx          25921 ns        15259 ns         1024
data |  3 |     tbb      88368 ns       106812 ns         1024
data |  3 | avx tbb      17474 ns        15259 ns         1024
mask |  3 |             568409 ns       595093 ns         1024
mask |  3 | avx          27912 ns        45776 ns         1024
mask |  3 |     tbb     118104 ns       106812 ns         1024
mask |  3 | avx tbb      17162 ns        15259 ns         1024

data |  4 |             565064 ns       579834 ns         1024
data |  4 | avx          26136 ns        30518 ns         1024
data |  4 |     tbb      68294 ns        45776 ns         1024
data |  4 | avx tbb      18288 ns        30518 ns         1024
mask |  4 |             581055 ns       549316 ns         1024
mask |  4 | avx          27417 ns        30518 ns         1024
mask |  4 |     tbb     117666 ns       106812 ns         1024
mask |  4 | avx tbb      17141 ns        30518 ns         1024

data |  5 |             454584 ns       473022 ns         1024
data |  5 | avx          26594 ns        61035 ns         1024
data |  5 |     tbb      58561 ns        61035 ns         1024
data |  5 | avx tbb      17539 ns        15259 ns         1024
mask |  5 |             571900 ns       595093 ns         1024
mask |  5 | avx          27578 ns        30518 ns         1024
mask |  5 |     tbb     117477 ns       122070 ns         1024
mask |  5 | avx tbb      17577 ns        30518 ns         1024

data |  6 |             377567 ns       396729 ns         1024
data |  6 | avx          26139 ns        45776 ns         1024
data |  6 |     tbb      50774 ns        76294 ns         1024
data |  6 | avx tbb      17453 ns        0.000 ns         1024
mask |  6 |             570465 ns       534058 ns         1024
mask |  6 | avx          27201 ns        45776 ns         1024
mask |  6 |     tbb     117595 ns       152588 ns         1024
mask |  6 | avx tbb      17118 ns        0.000 ns         1024

data |  7 |             324594 ns       335693 ns         1024
data |  7 | avx          26419 ns        15259 ns         1024
data |  7 |     tbb      44953 ns        61035 ns         1024
data |  7 | avx tbb      17615 ns        15259 ns         1024
mask |  7 |             573071 ns       579834 ns         1024
mask |  7 | avx          27661 ns        15259 ns         1024
mask |  7 |     tbb     118896 ns       122070 ns         1024
mask |  7 | avx tbb      17308 ns        45776 ns         1024

data |  8 |             285546 ns       274658 ns         1024
data |  8 | avx          26227 ns        30518 ns         1024
data |  8 |     tbb      42609 ns        30518 ns         1024
data |  8 | avx tbb      17514 ns        15259 ns         1024
mask |  8 |             567075 ns       564575 ns         1024
mask |  8 | avx          27413 ns        30518 ns         1024
mask |  8 |     tbb     117804 ns       122070 ns         1024
mask |  8 | avx tbb      17379 ns        61035 ns         1024

data |  9 |             254947 ns       274658 ns         1024
data |  9 | avx          26471 ns        15259 ns         1024
data |  9 |     tbb      38659 ns        15259 ns         1024
data |  9 | avx tbb      17605 ns        30518 ns         1024
mask |  9 |             569477 ns       579834 ns         1024
mask |  9 | avx          27202 ns        15259 ns         1024
mask |  9 |     tbb     117265 ns        91553 ns         1024
mask |  9 | avx tbb      17364 ns        15259 ns         1024

data | 10 |             230666 ns       244141 ns         1024
data | 10 | avx          26228 ns        15259 ns         1024
data | 10 |     tbb      35798 ns        61035 ns         1024
data | 10 | avx tbb      17793 ns        0.000 ns         1024
mask | 10 |             580009 ns       564575 ns         1024
mask | 10 | avx          27222 ns        30518 ns         1024
mask | 10 |     tbb     116458 ns        61035 ns         1024
mask | 10 | avx tbb      18079 ns        15259 ns         1024

data | 11 |             209743 ns       228882 ns         1024
data | 11 | avx          26076 ns        30518 ns         1024
data | 11 |     tbb      33280 ns        15259 ns         1024
data | 11 | avx tbb      18037 ns        15259 ns         1024
mask | 11 |             571778 ns       610352 ns         1024
mask | 11 | avx          27451 ns        15259 ns         1024
mask | 11 |     tbb     117407 ns       137329 ns         1024
mask | 11 | avx tbb      17029 ns        30518 ns         1024

data | 12 |             193510 ns       198364 ns         1024
data | 12 | avx          26005 ns        30518 ns         1024
data | 12 |     tbb      31503 ns        76294 ns         1024
data | 12 | avx tbb      17660 ns        30518 ns         1024
mask | 12 |             568741 ns       579834 ns         1024
mask | 12 | avx          27814 ns        30518 ns         1024
mask | 12 |     tbb     118511 ns       137329 ns         1024
mask | 12 | avx tbb      17210 ns        30518 ns         1024

data | 13 |             178711 ns       152588 ns         1024
data | 13 | avx          26371 ns        45776 ns         1024
data | 13 |     tbb      30195 ns        45776 ns         1024
data | 13 | avx tbb      17505 ns        15259 ns         1024
mask | 13 |             582443 ns       579834 ns         1024
mask | 13 | avx          27537 ns        15259 ns         1024
mask | 13 |     tbb     118396 ns       137329 ns         1024
mask | 13 | avx tbb      17124 ns        15259 ns         1024

data | 14 |             164031 ns       183105 ns         1024
data | 14 | avx          26095 ns        15259 ns         1024
data | 14 |     tbb      30364 ns        30518 ns         1024
data | 14 | avx tbb      17792 ns        0.000 ns         1024
mask | 14 |             570024 ns       549316 ns         1024
mask | 14 | avx          27427 ns        45776 ns         1024
mask | 14 |     tbb     116672 ns       183105 ns         1024
mask | 14 | avx tbb      17951 ns        0.000 ns         1024

data | 15 |             153818 ns       137329 ns         1024
data | 15 | avx          26125 ns        15259 ns         1024
data | 15 |     tbb      28174 ns        45776 ns         1024
data | 15 | avx tbb      17630 ns        15259 ns         1024
mask | 15 |             568450 ns       579834 ns         1024
mask | 15 | avx          27512 ns        45776 ns         1024
mask | 15 |     tbb     116517 ns       122070 ns         1024
mask | 15 | avx tbb      17389 ns        0.000 ns         1024

data | 16 |             145550 ns       152588 ns         1024
data | 16 | avx          26228 ns        30518 ns         1024
data | 16 |     tbb      27161 ns        76294 ns         1024
data | 16 | avx tbb      17648 ns        15259 ns         1024
mask | 16 |             569254 ns       579834 ns         1024
mask | 16 | avx          27871 ns        15259 ns         1024
mask | 16 |     tbb     119568 ns        91553 ns         1024
mask | 16 | avx tbb      17006 ns        15259 ns         1024

data | 17 |             136655 ns       152588 ns         1024
data | 17 | avx          26366 ns        15259 ns         1024
data | 17 |     tbb      27131 ns        45776 ns         1024
data | 17 | avx tbb      17507 ns        15259 ns         1024
mask | 17 |             580426 ns       595093 ns         1024
mask | 17 | avx          27729 ns        45776 ns         1024
mask | 17 |     tbb     116893 ns       152588 ns         1024
mask | 17 | avx tbb      17754 ns        0.000 ns         1024

data | 18 |             130212 ns       122070 ns         1024
data | 18 | avx          25947 ns        45776 ns         1024
data | 18 |     tbb      25688 ns        15259 ns         1024
data | 18 | avx tbb      17358 ns        15259 ns         1024
mask | 18 |             573035 ns       610352 ns         1024
mask | 18 | avx          27912 ns        30518 ns         1024
mask | 18 |     tbb     116887 ns       167847 ns         1024
mask | 18 | avx tbb      16965 ns        30518 ns         1024

data | 19 |             122395 ns       106812 ns         1024
data | 19 | avx          26251 ns        30518 ns         1024
data | 19 |     tbb      25186 ns        15259 ns         1024
data | 19 | avx tbb      17586 ns        0.000 ns         1024
mask | 19 |             571747 ns       534058 ns         1024
mask | 19 | avx          27425 ns        0.000 ns         1024
mask | 19 |     tbb     118339 ns       152588 ns         1024
mask | 19 | avx tbb      17245 ns        15259 ns         1024

data | 20 |             116065 ns        61035 ns         1024
data | 20 | avx          26021 ns        15259 ns         1024
data | 20 |     tbb      25290 ns        30518 ns         1024
data | 20 | avx tbb      17766 ns        0.000 ns         1024
mask | 20 |             567679 ns       564575 ns         1024
mask | 20 | avx          27490 ns        30518 ns         1024
mask | 20 |     tbb     117070 ns       122070 ns         1024
mask | 20 | avx tbb      17084 ns        30518 ns         1024

data | 21 |             112107 ns        91553 ns         1024
data | 21 | avx          25954 ns        15259 ns         1024
data | 21 |     tbb      23745 ns        15259 ns         1024
data | 21 | avx tbb      17667 ns        30518 ns         1024
mask | 21 |             570429 ns       549316 ns         1024
mask | 21 | avx          27433 ns        30518 ns         1024
mask | 21 |     tbb     117155 ns        91553 ns         1024
mask | 21 | avx tbb      16996 ns        15259 ns         1024

data | 22 |             107739 ns       137329 ns         1024
data | 22 | avx          25856 ns        30518 ns         1024
data | 22 |     tbb      24088 ns        45776 ns         1024
data | 22 | avx tbb      18173 ns        30518 ns         1024
mask | 22 |             583501 ns       595093 ns         1024
mask | 22 | avx          27363 ns        15259 ns         1024
mask | 22 |     tbb     117124 ns       122070 ns         1024
mask | 22 | avx tbb      17909 ns        15259 ns         1024

data | 23 |             102775 ns       106812 ns         1024
data | 23 | avx          26425 ns        45776 ns         1024
data | 23 |     tbb      23337 ns        15259 ns         1024
data | 23 | avx tbb      17668 ns        15259 ns         1024
mask | 23 |             568817 ns       549316 ns         1024
mask | 23 | avx          27436 ns        45776 ns         1024
mask | 23 |     tbb     116862 ns        76294 ns         1024
mask | 23 | avx tbb      17338 ns        0.000 ns         1024

data | 24 |              98867 ns       106812 ns         1024
data | 24 | avx          26080 ns        0.000 ns         1024
data | 24 |     tbb      22866 ns        30518 ns         1024
data | 24 | avx tbb      17532 ns        15259 ns         1024
mask | 24 |             568429 ns       549316 ns         1024
mask | 24 | avx          27142 ns        30518 ns         1024
mask | 24 |     tbb     117842 ns       137329 ns         1024
mask | 24 | avx tbb      17485 ns        30518 ns         1024

data | 25 |              95689 ns        76294 ns         1024
data | 25 | avx          26660 ns        0.000 ns         1024
data | 25 |     tbb      22403 ns        30518 ns         1024
data | 25 | avx tbb      17783 ns        15259 ns         1024
mask | 25 |             570912 ns       564575 ns         1024
mask | 25 | avx          27543 ns        15259 ns         1024
mask | 25 |     tbb     116955 ns       137329 ns         1024
mask | 25 | avx tbb      17137 ns        0.000 ns         1024

data | 26 |              90398 ns       106812 ns         1024
data | 26 | avx          26290 ns        15259 ns         1024
data | 26 |     tbb      22789 ns        30518 ns         1024
data | 26 | avx tbb      17712 ns        30518 ns         1024
mask | 26 |             567705 ns       534058 ns         1024
mask | 26 | avx          27937 ns        30518 ns         1024
mask | 26 |     tbb     118670 ns       137329 ns         1024
mask | 26 | avx tbb      17256 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             167560 ns       183105 ns          512
data |  1 | avx         166085 ns       152588 ns          512
data |  1 |     tbb     169716 ns       122070 ns          512
data |  1 | avx tbb     154123 ns        91553 ns          512
mask |  1 |             167548 ns       122070 ns          512
mask |  1 | avx         167117 ns       213623 ns          512
mask |  1 |     tbb     172491 ns       183105 ns          512
mask |  1 | avx tbb     153629 ns       183105 ns          512

data |  2 |            4498380 ns      4516602 ns          512
data |  2 | avx         195708 ns       122070 ns          512
data |  2 |     tbb     496790 ns       488281 ns          512
data |  2 | avx tbb     157657 ns       213623 ns          512
mask |  2 |            2273202 ns      2227783 ns          512
mask |  2 | avx         194413 ns       213623 ns          512
mask |  2 |     tbb     477262 ns       488281 ns          512
mask |  2 | avx tbb     158021 ns       183105 ns          512

data |  3 |            3005198 ns      3051758 ns          512
data |  3 | avx         198986 ns       183105 ns          512
data |  3 |     tbb     349395 ns       366211 ns          512
data |  3 | avx tbb     158920 ns       152588 ns          512
mask |  3 |            2271412 ns      2105713 ns          512
mask |  3 | avx         196159 ns       213623 ns          512
mask |  3 |     tbb     477911 ns       518799 ns          512
mask |  3 | avx tbb     157971 ns        91553 ns          512

data |  4 |            2254871 ns      2136230 ns          512
data |  4 | avx         196597 ns       183105 ns          512
data |  4 |     tbb     286250 ns       305176 ns          512
data |  4 | avx tbb     157249 ns       122070 ns          512
mask |  4 |            2268581 ns      2227783 ns          512
mask |  4 | avx         196944 ns       183105 ns          512
mask |  4 |     tbb     478989 ns       427246 ns          512
mask |  4 | avx tbb     157294 ns       183105 ns          512

data |  5 |            1815166 ns      1831055 ns          512
data |  5 | avx         195025 ns       244141 ns          512
data |  5 |     tbb     243317 ns       274658 ns          512
data |  5 | avx tbb     158707 ns       152588 ns          512
mask |  5 |            2268280 ns      2136230 ns          512
mask |  5 | avx         198027 ns       183105 ns          512
mask |  5 |     tbb     479980 ns       427246 ns          512
mask |  5 | avx tbb     159744 ns       152588 ns          512

data |  6 |            1517263 ns      1495361 ns          512
data |  6 | avx         198222 ns       213623 ns          512
data |  6 |     tbb     220669 ns       183105 ns          512
data |  6 | avx tbb     158808 ns        91553 ns          512
mask |  6 |            2273526 ns      2166748 ns          512
mask |  6 | avx         195474 ns       152588 ns          512
mask |  6 |     tbb     477928 ns       518799 ns          512
mask |  6 | avx tbb     157478 ns       183105 ns          512

data |  7 |            1314402 ns      1251221 ns          512
data |  7 | avx         194949 ns       152588 ns          512
data |  7 |     tbb     210116 ns        61035 ns          512
data |  7 | avx tbb     158580 ns       213623 ns          512
mask |  7 |            2262815 ns      2136230 ns          512
mask |  7 | avx         196361 ns       213623 ns          512
mask |  7 |     tbb     477726 ns       427246 ns          512
mask |  7 | avx tbb     157206 ns        91553 ns          512

data |  8 |            1148485 ns      1159668 ns          512
data |  8 | avx         195120 ns       183105 ns          512
data |  8 |     tbb     203691 ns       183105 ns          512
data |  8 | avx tbb     159065 ns       244141 ns          512
mask |  8 |            2275770 ns      2319336 ns          512
mask |  8 | avx         195216 ns       213623 ns          512
mask |  8 |     tbb     477791 ns       549316 ns          512
mask |  8 | avx tbb     156883 ns       122070 ns          512

data |  9 |            1016397 ns      1068115 ns          512
data |  9 | avx         194806 ns       244141 ns          512
data |  9 |     tbb     199890 ns       244141 ns          512
data |  9 | avx tbb     157680 ns       152588 ns          512
mask |  9 |            2269445 ns      2349854 ns          512
mask |  9 | avx         197219 ns       274658 ns          512
mask |  9 |     tbb     477043 ns       488281 ns          512
mask |  9 | avx tbb     158150 ns       183105 ns          512

data | 10 |             926045 ns       854492 ns          512
data | 10 | avx         195985 ns       183105 ns          512
data | 10 |     tbb     202564 ns       152588 ns          512
data | 10 | avx tbb     158396 ns       152588 ns          512
mask | 10 |            2270469 ns      2319336 ns          512
mask | 10 | avx         198240 ns       244141 ns          512
mask | 10 |     tbb     480061 ns       396729 ns          512
mask | 10 | avx tbb     157646 ns       122070 ns          512

data | 11 |             846759 ns       946045 ns          512
data | 11 | avx         194276 ns       122070 ns          512
data | 11 |     tbb     198413 ns       274658 ns          512
data | 11 | avx tbb     158695 ns       183105 ns          512
mask | 11 |            2274562 ns      2288818 ns          512
mask | 11 | avx         197745 ns       183105 ns          512
mask | 11 |     tbb     479437 ns       488281 ns          512
mask | 11 | avx tbb     158246 ns       152588 ns          512

data | 12 |             778908 ns       762939 ns          512
data | 12 | avx         194694 ns       183105 ns          512
data | 12 |     tbb     200916 ns        91553 ns          512
data | 12 | avx tbb     159374 ns       152588 ns          512
mask | 12 |            2262774 ns      2319336 ns          512
mask | 12 | avx         195981 ns       213623 ns          512
mask | 12 |     tbb     477795 ns       488281 ns          512
mask | 12 | avx tbb     157953 ns       122070 ns          512

data | 13 |             723251 ns       762939 ns          512
data | 13 | avx         194527 ns       305176 ns          512
data | 13 |     tbb     198681 ns       213623 ns          512
data | 13 | avx tbb     159196 ns       122070 ns          512
mask | 13 |            2273767 ns      2258301 ns          512
mask | 13 | avx         197489 ns       183105 ns          512
mask | 13 |     tbb     481322 ns       457764 ns          512
mask | 13 | avx tbb     157759 ns       122070 ns          512

data | 14 |             685101 ns       640869 ns          512
data | 14 | avx         197469 ns       213623 ns          512
data | 14 |     tbb     196074 ns       122070 ns          512
data | 14 | avx tbb     159949 ns       213623 ns          512
mask | 14 |            2267219 ns      2197266 ns          512
mask | 14 | avx         197653 ns       152588 ns          512
mask | 14 |     tbb     476224 ns       427246 ns          512
mask | 14 | avx tbb     157454 ns       152588 ns          512

data | 15 |             633890 ns       518799 ns          512
data | 15 | avx         195787 ns       213623 ns          512
data | 15 |     tbb     195310 ns       244141 ns          512
data | 15 | avx tbb     158274 ns        91553 ns          512
mask | 15 |            2267525 ns      2227783 ns          512
mask | 15 | avx         199445 ns       213623 ns          512
mask | 15 |     tbb     481123 ns       488281 ns          512
mask | 15 | avx tbb     158715 ns       152588 ns          512

data | 16 |             603459 ns       701904 ns          512
data | 16 | avx         194192 ns       152588 ns          512
data | 16 |     tbb     197993 ns       274658 ns          512
data | 16 | avx tbb     159496 ns       152588 ns          512
mask | 16 |            2272707 ns      2197266 ns          512
mask | 16 | avx         196927 ns       213623 ns          512
mask | 16 |     tbb     477314 ns       488281 ns          512
mask | 16 | avx tbb     157783 ns       183105 ns          512

data | 17 |             566533 ns       549316 ns          512
data | 17 | avx         193356 ns       152588 ns          512
data | 17 |     tbb     201487 ns       213623 ns          512
data | 17 | avx tbb     158783 ns       122070 ns          512
mask | 17 |            2274803 ns      2319336 ns          512
mask | 17 | avx         199186 ns       213623 ns          512
mask | 17 |     tbb     477005 ns       335693 ns          512
mask | 17 | avx tbb     158435 ns       213623 ns          512

data | 18 |             529841 ns       488281 ns          512
data | 18 | avx         197682 ns       244141 ns          512
data | 18 |     tbb     200723 ns       152588 ns          512
data | 18 | avx tbb     159417 ns       183105 ns          512
mask | 18 |            2274210 ns      2319336 ns          512
mask | 18 | avx         195781 ns       152588 ns          512
mask | 18 |     tbb     478318 ns       427246 ns          512
mask | 18 | avx tbb     157510 ns       152588 ns          512

data | 19 |             502809 ns       488281 ns          512
data | 19 | avx         194266 ns       274658 ns          512
data | 19 |     tbb     199853 ns       152588 ns          512
data | 19 | avx tbb     158804 ns       152588 ns          512
mask | 19 |            2263773 ns      2227783 ns          512
mask | 19 | avx         197982 ns       152588 ns          512
mask | 19 |     tbb     482630 ns       457764 ns          512
mask | 19 | avx tbb     157117 ns       183105 ns          512

data | 20 |             481091 ns       579834 ns          512
data | 20 | avx         193573 ns       152588 ns          512
data | 20 |     tbb     193031 ns       183105 ns          512
data | 20 | avx tbb     158589 ns        91553 ns          512
mask | 20 |            2271064 ns      2258301 ns          512
mask | 20 | avx         198142 ns       213623 ns          512
mask | 20 |     tbb     479671 ns       549316 ns          512
mask | 20 | avx tbb     159369 ns       122070 ns          512

data | 21 |             457774 ns       457764 ns          512
data | 21 | avx         195165 ns       122070 ns          512
data | 21 |     tbb     190270 ns       152588 ns          512
data | 21 | avx tbb     158250 ns       122070 ns          512
mask | 21 |            2261572 ns      2166748 ns          512
mask | 21 | avx         195783 ns       244141 ns          512
mask | 21 |     tbb     479804 ns       396729 ns          512
mask | 21 | avx tbb     157311 ns       122070 ns          512

data | 22 |             444332 ns       427246 ns          512
data | 22 | avx         195426 ns       122070 ns          512
data | 22 |     tbb     187880 ns       244141 ns          512
data | 22 | avx tbb     158673 ns       183105 ns          512
mask | 22 |            2267381 ns      2319336 ns          512
mask | 22 | avx         197880 ns       305176 ns          512
mask | 22 |     tbb     481140 ns       518799 ns          512
mask | 22 | avx tbb     158171 ns       152588 ns          512

data | 23 |             428806 ns       427246 ns          512
data | 23 | avx         195413 ns       244141 ns          512
data | 23 |     tbb     189170 ns       244141 ns          512
data | 23 | avx tbb     158949 ns       183105 ns          512
mask | 23 |            2268534 ns      2227783 ns          512
mask | 23 | avx         198599 ns       183105 ns          512
mask | 23 |     tbb     478307 ns       518799 ns          512
mask | 23 | avx tbb     159068 ns       244141 ns          512

data | 24 |             413563 ns       396729 ns          512
data | 24 | avx         197651 ns       183105 ns          512
data | 24 |     tbb     189233 ns        91553 ns          512
data | 24 | avx tbb     158040 ns       122070 ns          512
mask | 24 |            2267455 ns      2319336 ns          512
mask | 24 | avx         197242 ns       244141 ns          512
mask | 24 |     tbb     480264 ns       488281 ns          512
mask | 24 | avx tbb     158033 ns       152588 ns          512

data | 25 |             401790 ns       396729 ns          512
data | 25 | avx         193562 ns       213623 ns          512
data | 25 |     tbb     190380 ns       274658 ns          512
data | 25 | avx tbb     159867 ns       152588 ns          512
mask | 25 |            2270109 ns      2227783 ns          512
mask | 25 | avx         196851 ns       183105 ns          512
mask | 25 |     tbb     479734 ns       396729 ns          512
mask | 25 | avx tbb     157803 ns       152588 ns          512

data | 26 |             391655 ns       457764 ns          512
data | 26 | avx         195262 ns       244141 ns          512
data | 26 |     tbb     189995 ns       274658 ns          512
data | 26 | avx tbb     159497 ns       122070 ns          512
mask | 26 |            2268654 ns      2349854 ns          512
mask | 26 | avx         196716 ns       183105 ns          512
mask | 26 |     tbb     480761 ns       457764 ns          512
mask | 26 | avx tbb     156710 ns       122070 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             679102 ns       244141 ns           64
data |  1 | avx         668838 ns       732422 ns           64
data |  1 |     tbb     621641 ns       976562 ns           64
data |  1 | avx tbb     613281 ns       488281 ns           64
mask |  1 |             682189 ns       976562 ns           64
mask |  1 | avx         701570 ns       976562 ns           64
mask |  1 |     tbb     627133 ns       732422 ns           64
mask |  1 | avx tbb     614983 ns      1220703 ns           64

data |  2 |           18053784 ns     18310547 ns           64
data |  2 | avx         787528 ns       976562 ns           64
data |  2 |     tbb    1871725 ns      2197266 ns           64
data |  2 | avx tbb     629923 ns       732422 ns           64
mask |  2 |            9154883 ns      9765625 ns           64
mask |  2 | avx         783772 ns       488281 ns           64
mask |  2 |     tbb    1816723 ns      1708984 ns           64
mask |  2 | avx tbb     624453 ns       976562 ns           64

data |  3 |           12071762 ns     11474609 ns           64
data |  3 | avx         779695 ns       976562 ns           64
data |  3 |     tbb    1303952 ns      1464844 ns           64
data |  3 | avx tbb     627061 ns       488281 ns           64
mask |  3 |            9151719 ns      9033203 ns           64
mask |  3 | avx         787964 ns       488281 ns           64
mask |  3 |     tbb    1806664 ns      1708984 ns           64
mask |  3 | avx tbb     617722 ns       976562 ns           64

data |  4 |            9108139 ns      9521484 ns           64
data |  4 | avx         789166 ns       976562 ns           64
data |  4 |     tbb    1002561 ns       732422 ns           64
data |  4 | avx tbb     635678 ns       488281 ns           64
mask |  4 |            9177053 ns      9521484 ns           64
mask |  4 | avx         792641 ns       488281 ns           64
mask |  4 |     tbb    1823153 ns      2197266 ns           64
mask |  4 | avx tbb     626866 ns      1220703 ns           64

data |  5 |            7341519 ns      7080078 ns           64
data |  5 | avx         787289 ns       732422 ns           64
data |  5 |     tbb     843167 ns       488281 ns           64
data |  5 | avx tbb     629941 ns       976562 ns           64
mask |  5 |            9133322 ns      9277344 ns           64
mask |  5 | avx         786164 ns      1220703 ns           64
mask |  5 |     tbb    1827572 ns      1464844 ns           64
mask |  5 | avx tbb     622013 ns       976562 ns           64

data |  6 |            6112505 ns      6591797 ns           64
data |  6 | avx         788019 ns       976562 ns           64
data |  6 |     tbb     759381 ns       976562 ns           64
data |  6 | avx tbb     646134 ns       976562 ns           64
mask |  6 |            9149727 ns      9765625 ns           64
mask |  6 | avx         791708 ns       488281 ns           64
mask |  6 |     tbb    1810638 ns      1953125 ns           64
mask |  6 | avx tbb     629611 ns       976562 ns           64

data |  7 |            5308866 ns      4638672 ns           64
data |  7 | avx         789703 ns       732422 ns           64
data |  7 |     tbb     722122 ns       488281 ns           64
data |  7 | avx tbb     630192 ns       488281 ns           64
mask |  7 |            9163242 ns      8789062 ns           64
mask |  7 | avx         786628 ns       976562 ns           64
mask |  7 |     tbb    1795653 ns      1464844 ns           64
mask |  7 | avx tbb     622267 ns       488281 ns           64

data |  8 |            4653163 ns      3906250 ns           64
data |  8 | avx         790738 ns      1220703 ns           64
data |  8 |     tbb     710173 ns       976562 ns           64
data |  8 | avx tbb     633506 ns       976562 ns           64
mask |  8 |            9093042 ns      9521484 ns           64
mask |  8 | avx         792600 ns       732422 ns           64
mask |  8 |     tbb    1809831 ns      1708984 ns           64
mask |  8 | avx tbb     621066 ns       488281 ns           64

data |  9 |            4103977 ns      4638672 ns           64
data |  9 | avx         786759 ns       732422 ns           64
data |  9 |     tbb     700844 ns      1220703 ns           64
data |  9 | avx tbb     630467 ns       488281 ns           64
mask |  9 |            9160022 ns      9033203 ns           64
mask |  9 | avx         794417 ns      1220703 ns           64
mask |  9 |     tbb    1801186 ns      1953125 ns           64
mask |  9 | avx tbb     620105 ns       732422 ns           64

data | 10 |            3783845 ns      3173828 ns           64
data | 10 | avx         782259 ns       732422 ns           64
data | 10 |     tbb     701409 ns       488281 ns           64
data | 10 | avx tbb     632914 ns      1220703 ns           64
mask | 10 |            9175497 ns      9033203 ns           64
mask | 10 | avx         786387 ns       732422 ns           64
mask | 10 |     tbb    1810992 ns      1953125 ns           64
mask | 10 | avx tbb     621808 ns       488281 ns           64

data | 11 |            3429306 ns      3173828 ns           64
data | 11 | avx         789230 ns       732422 ns           64
data | 11 |     tbb     686589 ns       976562 ns           64
data | 11 | avx tbb     629458 ns       244141 ns           64
mask | 11 |            9087037 ns      8544922 ns           64
mask | 11 | avx         803725 ns       488281 ns           64
mask | 11 |     tbb    1806559 ns      1708984 ns           64
mask | 11 | avx tbb     617420 ns       488281 ns           64

data | 12 |            3176169 ns      3417969 ns           64
data | 12 | avx         800606 ns      1220703 ns           64
data | 12 |     tbb     686539 ns      1220703 ns           64
data | 12 | avx tbb     630197 ns       488281 ns           64
mask | 12 |            9119433 ns      9521484 ns           64
mask | 12 | avx         815544 ns      1220703 ns           64
mask | 12 |     tbb    1817295 ns      1953125 ns           64
mask | 12 | avx tbb     618892 ns       488281 ns           64

data | 13 |            2937403 ns      3906250 ns           64
data | 13 | avx         774481 ns       976562 ns           64
data | 13 |     tbb     693506 ns       732422 ns           64
data | 13 | avx tbb     634734 ns       976562 ns           64
mask | 13 |            9176442 ns      9033203 ns           64
mask | 13 | avx         789061 ns       976562 ns           64
mask | 13 |     tbb    1802694 ns      2441406 ns           64
mask | 13 | avx tbb     623439 ns       488281 ns           64

data | 14 |            2761733 ns      2929688 ns           64
data | 14 | avx         776356 ns       976562 ns           64
data | 14 |     tbb     695544 ns       488281 ns           64
data | 14 | avx tbb     632242 ns       488281 ns           64
mask | 14 |            9151248 ns      8789062 ns           64
mask | 14 | avx         792752 ns       488281 ns           64
mask | 14 |     tbb    1851244 ns      1220703 ns           64
mask | 14 | avx tbb     620806 ns       976562 ns           64

data | 15 |            2577502 ns      2685547 ns           64
data | 15 | avx         794580 ns       976562 ns           64
data | 15 |     tbb     684405 ns       976562 ns           64
data | 15 | avx tbb     627330 ns       732422 ns           64
mask | 15 |            9117955 ns      9277344 ns           64
mask | 15 | avx         823275 ns      1464844 ns           64
mask | 15 |     tbb    1835717 ns      1708984 ns           64
mask | 15 | avx tbb     624238 ns       732422 ns           64

data | 16 |            2421966 ns      2197266 ns           64
data | 16 | avx         780119 ns      1220703 ns           64
data | 16 |     tbb     692398 ns       732422 ns           64
data | 16 | avx tbb     631495 ns       732422 ns           64
mask | 16 |            9093863 ns      9277344 ns           64
mask | 16 | avx         793945 ns      1220703 ns           64
mask | 16 |     tbb    1823439 ns      1953125 ns           64
mask | 16 | avx tbb     621959 ns       488281 ns           64

data | 17 |            2330303 ns      1953125 ns           64
data | 17 | avx         790514 ns       976562 ns           64
data | 17 |     tbb     680670 ns       732422 ns           64
data | 17 | avx tbb     633030 ns       976562 ns           64
mask | 17 |            9087292 ns      9033203 ns           64
mask | 17 | avx         796280 ns      1220703 ns           64
mask | 17 |     tbb    1805064 ns      1953125 ns           64
mask | 17 | avx tbb     624827 ns      1220703 ns           64

data | 18 |            2185158 ns      1708984 ns           64
data | 18 | avx         800245 ns       244141 ns           64
data | 18 |     tbb     690383 ns       244141 ns           64
data | 18 | avx tbb     631197 ns       732422 ns           64
mask | 18 |            9101888 ns      9521484 ns           64
mask | 18 | avx         805700 ns      1220703 ns           64
mask | 18 |     tbb    1841964 ns      1708984 ns           64
mask | 18 | avx tbb     623597 ns       488281 ns           64

data | 19 |            2076173 ns      1708984 ns           64
data | 19 | avx         780328 ns       732422 ns           64
data | 19 |     tbb     678591 ns       732422 ns           64
data | 19 | avx tbb     630033 ns       732422 ns           64
mask | 19 |            9097247 ns      9033203 ns           64
mask | 19 | avx         789042 ns       732422 ns           64
mask | 19 |     tbb    1822502 ns      2441406 ns           64
mask | 19 | avx tbb     624742 ns       732422 ns           64

data | 20 |            1991052 ns      1953125 ns           64
data | 20 | avx         777887 ns       732422 ns           64
data | 20 |     tbb     664127 ns       488281 ns           64
data | 20 | avx tbb     629073 ns       488281 ns           64
mask | 20 |            9146855 ns      9277344 ns           64
mask | 20 | avx         805500 ns       976562 ns           64
mask | 20 |     tbb    1793061 ns      1708984 ns           64
mask | 20 | avx tbb     616038 ns       732422 ns           64

data | 21 |            1946072 ns      2441406 ns           64
data | 21 | avx         789728 ns      1220703 ns           64
data | 21 |     tbb     674766 ns       732422 ns           64
data | 21 | avx tbb     632422 ns       732422 ns           64
mask | 21 |            9119123 ns      9033203 ns           64
mask | 21 | avx         794211 ns      1708984 ns           64
mask | 21 |     tbb    1824908 ns      2197266 ns           64
mask | 21 | avx tbb     622158 ns       976562 ns           64

data | 22 |            1845841 ns      1464844 ns           64
data | 22 | avx         794588 ns       732422 ns           64
data | 22 |     tbb     675130 ns       732422 ns           64
data | 22 | avx tbb     642227 ns       976562 ns           64
mask | 22 |            9132333 ns      9277344 ns           64
mask | 22 | avx         789036 ns       488281 ns           64
mask | 22 |     tbb    1822658 ns      1464844 ns           64
mask | 22 | avx tbb     621128 ns       732422 ns           64

data | 23 |            1748405 ns      1953125 ns           64
data | 23 | avx         771241 ns       732422 ns           64
data | 23 |     tbb     672747 ns       732422 ns           64
data | 23 | avx tbb     636811 ns       976562 ns           64
mask | 23 |            9100862 ns      8789062 ns           64
mask | 23 | avx         795889 ns       732422 ns           64
mask | 23 |     tbb    1808912 ns      1708984 ns           64
mask | 23 | avx tbb     609770 ns       244141 ns           64

data | 24 |            1736961 ns      1953125 ns           64
data | 24 | avx         783375 ns       488281 ns           64
data | 24 |     tbb     666983 ns       488281 ns           64
data | 24 | avx tbb     633698 ns       732422 ns           64
mask | 24 |            9124506 ns      9765625 ns           64
mask | 24 | avx         792406 ns       732422 ns           64
mask | 24 |     tbb    1827873 ns      1464844 ns           64
mask | 24 | avx tbb     626870 ns       976562 ns           64

data | 25 |            1643350 ns      1708984 ns           64
data | 25 | avx         781691 ns       976562 ns           64
data | 25 |     tbb     677745 ns       732422 ns           64
data | 25 | avx tbb     634316 ns       488281 ns           64
mask | 25 |            9141689 ns      8789062 ns           64
mask | 25 | avx         787625 ns       732422 ns           64
mask | 25 |     tbb    1810197 ns      2197266 ns           64
mask | 25 | avx tbb     625637 ns       488281 ns           64

data | 26 |            1617641 ns      1220703 ns           64
data | 26 | avx         799327 ns       976562 ns           64
data | 26 |     tbb     666059 ns       732422 ns           64
data | 26 | avx tbb     630813 ns       732422 ns           64
mask | 26 |            9103375 ns      9521484 ns           64
mask | 26 | avx         794011 ns       732422 ns           64
mask | 26 |     tbb    1820669 ns      2197266 ns           64
mask | 26 | avx tbb     628528 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2727772 ns      2929688 ns           32
data |  1 | avx        2631616 ns      1464844 ns           32
data |  1 |     tbb    2352509 ns      3417969 ns           32
data |  1 | avx tbb    2341203 ns      2929688 ns           32
mask |  1 |            2774437 ns      2441406 ns           32
mask |  1 | avx        2648359 ns      2929688 ns           32
mask |  1 |     tbb    2352887 ns      1464844 ns           32
mask |  1 | avx tbb    2344859 ns      1953125 ns           32

data |  2 |           71815378 ns     71777344 ns           32
data |  2 | avx        3086844 ns       976562 ns           32
data |  2 |     tbb    7061722 ns      6347656 ns           32
data |  2 | avx tbb    2358509 ns      1953125 ns           32
mask |  2 |           36184637 ns     36621094 ns           32
mask |  2 | avx        3228600 ns      1953125 ns           32
mask |  2 |     tbb    6890775 ns      6347656 ns           32
mask |  2 | avx tbb    2357834 ns      2929688 ns           32

data |  3 |           48131100 ns     47851562 ns           32
data |  3 | avx        3078981 ns        0.000 ns           32
data |  3 |     tbb    4747656 ns      4394531 ns           32
data |  3 | avx tbb    2351094 ns      2929688 ns           32
mask |  3 |           36160419 ns     36621094 ns           32
mask |  3 | avx        3178094 ns      5859375 ns           32
mask |  3 |     tbb    6855425 ns      5859375 ns           32
mask |  3 | avx tbb    2355984 ns      2929688 ns           32

data |  4 |           36287463 ns     36621094 ns           32
data |  4 | avx        3075347 ns        0.000 ns           32
data |  4 |     tbb    3620969 ns      3906250 ns           32
data |  4 | avx tbb    2367478 ns      1953125 ns           32
mask |  4 |           36185753 ns     36132812 ns           32
mask |  4 | avx        3129672 ns       488281 ns           32
mask |  4 |     tbb    6884706 ns      6347656 ns           32
mask |  4 | avx tbb    2434497 ns      2441406 ns           32

data |  5 |           28960128 ns     28808594 ns           32
data |  5 | avx        3065672 ns        0.000 ns           32
data |  5 |     tbb    2979034 ns        0.000 ns           32
data |  5 | avx tbb    2380575 ns      2929688 ns           32
mask |  5 |           36133800 ns     36621094 ns           32
mask |  5 | avx        3166306 ns      3906250 ns           32
mask |  5 |     tbb    6864709 ns      5371094 ns           32
mask |  5 | avx tbb    2359319 ns      2441406 ns           32

data |  6 |           24168197 ns     24414062 ns           32
data |  6 | avx        3091200 ns      3906250 ns           32
data |  6 |     tbb    2685606 ns      2441406 ns           32
data |  6 | avx tbb    2365075 ns      2441406 ns           32
mask |  6 |           36047984 ns     36621094 ns           32
mask |  6 | avx        3146347 ns      6347656 ns           32
mask |  6 |     tbb    6879134 ns      8300781 ns           32
mask |  6 | avx tbb    2357494 ns      2441406 ns           32

data |  7 |           20947084 ns     20507812 ns           32
data |  7 | avx        3076913 ns      2441406 ns           32
data |  7 |     tbb    2542900 ns      2441406 ns           32
data |  7 | avx tbb    2369216 ns      1953125 ns           32
mask |  7 |           36345659 ns     36621094 ns           32
mask |  7 | avx        3182228 ns       976562 ns           32
mask |  7 |     tbb    6909325 ns      7324219 ns           32
mask |  7 | avx tbb    2355684 ns      1953125 ns           32

data |  8 |           18353228 ns     20019531 ns           32
data |  8 | avx        3109434 ns      4394531 ns           32
data |  8 |     tbb    2517931 ns      2929688 ns           32
data |  8 | avx tbb    2376331 ns      2929688 ns           32
mask |  8 |           36130766 ns     36132812 ns           32
mask |  8 | avx        3139162 ns       976562 ns           32
mask |  8 |     tbb    6881037 ns      7324219 ns           32
mask |  8 | avx tbb    2358509 ns      2441406 ns           32

data |  9 |           16173856 ns     16601562 ns           32
data |  9 | avx        3063287 ns      3417969 ns           32
data |  9 |     tbb    2499853 ns      2441406 ns           32
data |  9 | avx tbb    2364994 ns      2929688 ns           32
mask |  9 |           36116619 ns     36621094 ns           32
mask |  9 | avx        3192797 ns      3906250 ns           32
mask |  9 |     tbb    6869216 ns      6835938 ns           32
mask |  9 | avx tbb    2361744 ns      2929688 ns           32

data | 10 |           14562259 ns     13671875 ns           32
data | 10 | avx        3415506 ns      3906250 ns           32
data | 10 |     tbb    2476219 ns      3417969 ns           32
data | 10 | avx tbb    2371075 ns      2441406 ns           32
mask | 10 |           36386613 ns     36132812 ns           32
mask | 10 | avx        3149681 ns      3906250 ns           32
mask | 10 |     tbb    6910991 ns      7812500 ns           32
mask | 10 | avx tbb    2352728 ns      2441406 ns           32

data | 11 |           13487638 ns     13183594 ns           32
data | 11 | avx        3063447 ns      7324219 ns           32
data | 11 |     tbb    2486469 ns      2441406 ns           32
data | 11 | avx tbb    2368594 ns      2441406 ns           32
mask | 11 |           36226953 ns     36621094 ns           32
mask | 11 | avx        3263362 ns      5371094 ns           32
mask | 11 |     tbb    6901972 ns      7812500 ns           32
mask | 11 | avx tbb    2350688 ns      3417969 ns           32

data | 12 |           12500428 ns     11718750 ns           32
data | 12 | avx        3110584 ns        0.000 ns           32
data | 12 |     tbb    2477641 ns      1953125 ns           32
data | 12 | avx tbb    2373131 ns      1953125 ns           32
mask | 12 |           36193894 ns     35156250 ns           32
mask | 12 | avx        3165991 ns      3417969 ns           32
mask | 12 |     tbb    6859147 ns      7324219 ns           32
mask | 12 | avx tbb    2356337 ns      1953125 ns           32

data | 13 |           11550150 ns     12695312 ns           32
data | 13 | avx        3132384 ns      3417969 ns           32
data | 13 |     tbb    2476959 ns      2441406 ns           32
data | 13 | avx tbb    2372631 ns      1953125 ns           32
mask | 13 |           36120503 ns     35644531 ns           32
mask | 13 | avx        3187197 ns      3906250 ns           32
mask | 13 |     tbb    6895187 ns      5371094 ns           32
mask | 13 | avx tbb    2361022 ns      2441406 ns           32

data | 14 |           10667213 ns       488281 ns           32
data | 14 | avx        3151059 ns       976562 ns           32
data | 14 |     tbb    2470463 ns      2441406 ns           32
data | 14 | avx tbb    2373194 ns      1953125 ns           32
mask | 14 |           36163041 ns     36132812 ns           32
mask | 14 | avx        3178997 ns      1953125 ns           32
mask | 14 |     tbb    6857769 ns      4882812 ns           32
mask | 14 | avx tbb    2360644 ns      2441406 ns           32

data | 15 |           10015319 ns     11718750 ns           32
data | 15 | avx        3050666 ns      7812500 ns           32
data | 15 |     tbb    2475744 ns      1953125 ns           32
data | 15 | avx tbb    2383594 ns      2441406 ns           32
mask | 15 |           36285428 ns     36621094 ns           32
mask | 15 | avx        3143456 ns      4882812 ns           32
mask | 15 |     tbb    6899400 ns      8300781 ns           32
mask | 15 | avx tbb    2357750 ns      2929688 ns           32

data | 16 |            9368487 ns      8300781 ns           32
data | 16 | avx        3082888 ns      5371094 ns           32
data | 16 |     tbb    2471475 ns      2929688 ns           32
data | 16 | avx tbb    2364459 ns      2441406 ns           32
mask | 16 |           36156109 ns     37109375 ns           32
mask | 16 | avx        3181153 ns       488281 ns           32
mask | 16 |     tbb    6870775 ns      5371094 ns           32
mask | 16 | avx tbb    2360759 ns      1953125 ns           32

data | 17 |            8911222 ns      9277344 ns           32
data | 17 | avx        3095184 ns       488281 ns           32
data | 17 |     tbb    2460347 ns      1953125 ns           32
data | 17 | avx tbb    2365619 ns      1953125 ns           32
mask | 17 |           36187931 ns     36132812 ns           32
mask | 17 | avx        3201822 ns      2929688 ns           32
mask | 17 |     tbb    6862941 ns      7812500 ns           32
mask | 17 | avx tbb    2352528 ns      1953125 ns           32

data | 18 |            8488897 ns      7324219 ns           32
data | 18 | avx        3075238 ns        0.000 ns           32
data | 18 |     tbb    2462931 ns      2441406 ns           32
data | 18 | avx tbb    2376559 ns      1953125 ns           32
mask | 18 |           36216469 ns     36621094 ns           32
mask | 18 | avx        3130084 ns      7324219 ns           32
mask | 18 |     tbb    6895619 ns      7324219 ns           32
mask | 18 | avx tbb    2365216 ns      2441406 ns           32

data | 19 |            7902931 ns      7812500 ns           32
data | 19 | avx        3122178 ns       488281 ns           32
data | 19 |     tbb    2449263 ns      2441406 ns           32
data | 19 | avx tbb    2379266 ns      1953125 ns           32
mask | 19 |           36178834 ns     36621094 ns           32
mask | 19 | avx        3237594 ns      2441406 ns           32
mask | 19 |     tbb    6909534 ns      6347656 ns           32
mask | 19 | avx tbb    2357731 ns      2441406 ns           32

data | 20 |            7716909 ns      8300781 ns           32
data | 20 | avx        3104525 ns       976562 ns           32
data | 20 |     tbb    2444613 ns      2441406 ns           32
data | 20 | avx tbb    2364103 ns      2441406 ns           32
mask | 20 |           36131209 ns     36132812 ns           32
mask | 20 | avx        3195050 ns      4882812 ns           32
mask | 20 |     tbb    6879400 ns      7324219 ns           32
mask | 20 | avx tbb    2365372 ns      1464844 ns           32

data | 21 |            7315606 ns      6835938 ns           32
data | 21 | avx        3269619 ns      5371094 ns           32
data | 21 |     tbb    2452022 ns      2929688 ns           32
data | 21 | avx tbb    2373462 ns      2929688 ns           32
mask | 21 |           36198916 ns     36621094 ns           32
mask | 21 | avx        3196609 ns      3906250 ns           32
mask | 21 |     tbb    6900337 ns      7812500 ns           32
mask | 21 | avx tbb    2357034 ns      3417969 ns           32

data | 22 |            6989981 ns      7324219 ns           32
data | 22 | avx        3099034 ns      2929688 ns           32
data | 22 |     tbb    2451181 ns      1953125 ns           32
data | 22 | avx tbb    2374053 ns      2441406 ns           32
mask | 22 |           36126994 ns     36621094 ns           32
mask | 22 | avx        3173675 ns      3417969 ns           32
mask | 22 |     tbb    6947034 ns      7812500 ns           32
mask | 22 | avx tbb    2356500 ns      1953125 ns           32

data | 23 |            6731616 ns      7324219 ns           32
data | 23 | avx        3081809 ns       976562 ns           32
data | 23 |     tbb    2443116 ns      1464844 ns           32
data | 23 | avx tbb    2375822 ns      1953125 ns           32
mask | 23 |           36199978 ns     36621094 ns           32
mask | 23 | avx        3141647 ns      1464844 ns           32
mask | 23 |     tbb    6931172 ns      7812500 ns           32
mask | 23 | avx tbb    2361409 ns      1953125 ns           32

data | 24 |            6833719 ns      6347656 ns           32
data | 24 | avx        3101434 ns      2441406 ns           32
data | 24 |     tbb    2440369 ns      2929688 ns           32
data | 24 | avx tbb    2453575 ns      2441406 ns           32
mask | 24 |           36071122 ns     35644531 ns           32
mask | 24 | avx        3158847 ns      3906250 ns           32
mask | 24 |     tbb    6936197 ns      7324219 ns           32
mask | 24 | avx tbb    2361147 ns      1464844 ns           32

data | 25 |            6364462 ns      5859375 ns           32
data | 25 | avx        3336822 ns      4394531 ns           32
data | 25 |     tbb    2434316 ns      2441406 ns           32
data | 25 | avx tbb    2360484 ns      1953125 ns           32
mask | 25 |           36118366 ns     36132812 ns           32
mask | 25 | avx        3154513 ns       976562 ns           32
mask | 25 |     tbb    6881534 ns      7324219 ns           32
mask | 25 | avx tbb    2367228 ns      1953125 ns           32

data | 26 |            6205453 ns      6835938 ns           32
data | 26 | avx        3114997 ns      1464844 ns           32
data | 26 |     tbb    2441972 ns      1953125 ns           32
data | 26 | avx tbb    2377653 ns      2441406 ns           32
mask | 26 |           36073475 ns     36621094 ns           32
mask | 26 | avx        3177966 ns      2441406 ns           32
mask | 26 |     tbb    6924694 ns      7812500 ns           32
mask | 26 | avx tbb    2354969 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10621944 ns      7812500 ns           16
data |  1 | avx       10636944 ns     10742188 ns           16
data |  1 |     tbb    9213613 ns      6835938 ns           16
data |  1 | avx tbb    9208569 ns      9765625 ns           16
mask |  1 |           11066231 ns     10742188 ns           16
mask |  1 | avx       10649019 ns     14648438 ns           16
mask |  1 |     tbb    9236056 ns      9765625 ns           16
mask |  1 | avx tbb    9215113 ns      9765625 ns           16

data |  2 |          287382750 ns    287109375 ns           16
data |  2 | avx       12425500 ns     11718750 ns           16
data |  2 |     tbb   27712238 ns     25390625 ns           16
data |  2 | avx tbb    9276231 ns      9765625 ns           16
mask |  2 |          144868412 ns    145507812 ns           16
mask |  2 | avx       12642981 ns     12695312 ns           16
mask |  2 |     tbb   27292731 ns     26367188 ns           16
mask |  2 | avx tbb    9274331 ns     10742188 ns           16

data |  3 |          191997500 ns    191406250 ns           16
data |  3 | avx       12460581 ns     10742188 ns           16
data |  3 |     tbb   18514969 ns     20507812 ns           16
data |  3 | avx tbb    9283231 ns      8789062 ns           16
mask |  3 |          144735550 ns    141601562 ns           16
mask |  3 | avx       12699469 ns     10742188 ns           16
mask |  3 |     tbb   27293806 ns     26367188 ns           16
mask |  3 | avx tbb    9285944 ns      7812500 ns           16

data |  4 |          144113869 ns    140625000 ns           16
data |  4 | avx       12373494 ns     10742188 ns           16
data |  4 |     tbb   13941331 ns     15625000 ns           16
data |  4 | avx tbb    9291000 ns      5859375 ns           16
mask |  4 |          144706394 ns    145507812 ns           16
mask |  4 | avx       12575725 ns     10742188 ns           16
mask |  4 |     tbb   27139775 ns     31250000 ns           16
mask |  4 | avx tbb    9284269 ns     10742188 ns           16

data |  5 |          115574538 ns    114257812 ns           16
data |  5 | avx       12395406 ns     12695312 ns           16
data |  5 |     tbb   11484750 ns      3906250 ns           16
data |  5 | avx tbb    9295369 ns      6835938 ns           16
mask |  5 |          144656000 ns    146484375 ns           16
mask |  5 | avx       12587188 ns     12695312 ns           16
mask |  5 |     tbb   27285469 ns     24414062 ns           16
mask |  5 | avx tbb    9285031 ns      7812500 ns           16

data |  6 |           96358775 ns     96679688 ns           16
data |  6 | avx       12317163 ns     13671875 ns           16
data |  6 |     tbb   10324325 ns      3906250 ns           16
data |  6 | avx tbb    9277969 ns      9765625 ns           16
mask |  6 |          144704962 ns    143554688 ns           16
mask |  6 | avx       12630456 ns     11718750 ns           16
mask |  6 |     tbb   27011081 ns     27343750 ns           16
mask |  6 | avx tbb    9291831 ns      9765625 ns           16

data |  7 |           83895319 ns     83007812 ns           16
data |  7 | avx       13028756 ns     13671875 ns           16
data |  7 |     tbb    9782431 ns      8789062 ns           16
data |  7 | avx tbb    9333388 ns      8789062 ns           16
mask |  7 |          144278969 ns    147460938 ns           16
mask |  7 | avx       12674544 ns     12695312 ns           16
mask |  7 |     tbb   27204563 ns     22460938 ns           16
mask |  7 | avx tbb    9277831 ns      9765625 ns           16

data |  8 |           72881113 ns     73242188 ns           16
data |  8 | avx       12982081 ns     16601562 ns           16
data |  8 |     tbb    9808888 ns     11718750 ns           16
data |  8 | avx tbb    9298269 ns     11718750 ns           16
mask |  8 |          144522550 ns    143554688 ns           16
mask |  8 | avx       12677938 ns     13671875 ns           16
mask |  8 |     tbb   27115700 ns     25390625 ns           16
mask |  8 | avx tbb    9262312 ns      9765625 ns           16

data |  9 |           64603081 ns     63476562 ns           16
data |  9 | avx       12255850 ns     15625000 ns           16
data |  9 |     tbb    9641819 ns      8789062 ns           16
data |  9 | avx tbb    9325075 ns     10742188 ns           16
mask |  9 |          144769088 ns    145507812 ns           16
mask |  9 | avx       12654062 ns     11718750 ns           16
mask |  9 |     tbb   27142725 ns     27343750 ns           16
mask |  9 | avx tbb    9406138 ns      8789062 ns           16

data | 10 |           58213144 ns     53710938 ns           16
data | 10 | avx       12856763 ns      9765625 ns           16
data | 10 |     tbb    9537181 ns      8789062 ns           16
data | 10 | avx tbb    9323794 ns      8789062 ns           16
mask | 10 |          144730025 ns    145507812 ns           16
mask | 10 | avx       12724525 ns     11718750 ns           16
mask | 10 |     tbb   27160631 ns     26367188 ns           16
mask | 10 | avx tbb    9285312 ns      9765625 ns           16

data | 11 |           53889831 ns     53710938 ns           16
data | 11 | avx       12991706 ns     10742188 ns           16
data | 11 |     tbb    9542431 ns      7812500 ns           16
data | 11 | avx tbb    9819338 ns      9765625 ns           16
mask | 11 |          144704800 ns    144531250 ns           16
mask | 11 | avx       12621787 ns     13671875 ns           16
mask | 11 |     tbb   27261650 ns     27343750 ns           16
mask | 11 | avx tbb    9276800 ns      8789062 ns           16

data | 12 |           49499238 ns     50781250 ns           16
data | 12 | avx       12331669 ns     11718750 ns           16
data | 12 |     tbb    9533581 ns      8789062 ns           16
data | 12 | avx tbb    9479469 ns      9765625 ns           16
mask | 12 |          144371031 ns    144531250 ns           16
mask | 12 | avx       12740819 ns     11718750 ns           16
mask | 12 |     tbb   27123113 ns     30273438 ns           16
mask | 12 | avx tbb    9284206 ns      8789062 ns           16

data | 13 |           45808513 ns     45898438 ns           16
data | 13 | avx       12418144 ns     13671875 ns           16
data | 13 |     tbb    9638475 ns      7812500 ns           16
data | 13 | avx tbb    9282731 ns      9765625 ns           16
mask | 13 |          144584406 ns    145507812 ns           16
mask | 13 | avx       12708944 ns     10742188 ns           16
mask | 13 |     tbb   27169819 ns     28320312 ns           16
mask | 13 | avx tbb    9275500 ns      8789062 ns           16

data | 14 |           43642038 ns     33203125 ns           16
data | 14 | avx       12388144 ns     11718750 ns           16
data | 14 |     tbb    9605381 ns      8789062 ns           16
data | 14 | avx tbb    9308231 ns      9765625 ns           16
mask | 14 |          144691931 ns    147460938 ns           16
mask | 14 | avx       12838987 ns     11718750 ns           16
mask | 14 |     tbb   27061363 ns     26367188 ns           16
mask | 14 | avx tbb    9290169 ns      9765625 ns           16

data | 15 |           40053388 ns     41992188 ns           16
data | 15 | avx       12372750 ns     11718750 ns           16
data | 15 |     tbb    9532725 ns      9765625 ns           16
data | 15 | avx tbb    9362031 ns      7812500 ns           16
mask | 15 |          144692344 ns    144531250 ns           16
mask | 15 | avx       12665406 ns     12695312 ns           16
mask | 15 |     tbb   27374275 ns     26367188 ns           16
mask | 15 | avx tbb    9283475 ns      7812500 ns           16

data | 16 |           38308688 ns     39062500 ns           16
data | 16 | avx       12609725 ns     11718750 ns           16
data | 16 |     tbb    9533700 ns     12695312 ns           16
data | 16 | avx tbb    9286263 ns     10742188 ns           16
mask | 16 |          144309075 ns    144531250 ns           16
mask | 16 | avx       12844213 ns      9765625 ns           16
mask | 16 |     tbb   27095281 ns     28320312 ns           16
mask | 16 | avx tbb    9294744 ns     10742188 ns           16

data | 17 |           36181881 ns     36132812 ns           16
data | 17 | avx       12867031 ns     13671875 ns           16
data | 17 |     tbb    9571012 ns      9765625 ns           16
data | 17 | avx tbb    9301619 ns      8789062 ns           16
mask | 17 |          144997794 ns    143554688 ns           16
mask | 17 | avx       12735894 ns     10742188 ns           16
mask | 17 |     tbb   27280287 ns     22460938 ns           16
mask | 17 | avx tbb    9298200 ns      7812500 ns           16

data | 18 |           33698838 ns     33203125 ns           16
data | 18 | avx       12654513 ns     12695312 ns           16
data | 18 |     tbb    9494181 ns     12695312 ns           16
data | 18 | avx tbb    9282506 ns      9765625 ns           16
mask | 18 |          145052619 ns    146484375 ns           16
mask | 18 | avx       12781425 ns     13671875 ns           16
mask | 18 |     tbb   27299581 ns     25390625 ns           16
mask | 18 | avx tbb    9283806 ns      7812500 ns           16

data | 19 |           31703569 ns     31250000 ns           16
data | 19 | avx       12358187 ns     12695312 ns           16
data | 19 |     tbb    9514263 ns      5859375 ns           16
data | 19 | avx tbb    9287581 ns     10742188 ns           16
mask | 19 |          144570850 ns    145507812 ns           16
mask | 19 | avx       12653050 ns     10742188 ns           16
mask | 19 |     tbb   27028019 ns     26367188 ns           16
mask | 19 | avx tbb    9288900 ns      8789062 ns           16

data | 20 |           30720669 ns     31250000 ns           16
data | 20 | avx       12412031 ns     12695312 ns           16
data | 20 |     tbb    9505631 ns     10742188 ns           16
data | 20 | avx tbb    9297619 ns     10742188 ns           16
mask | 20 |          144448150 ns    143554688 ns           16
mask | 20 | avx       12711881 ns     13671875 ns           16
mask | 20 |     tbb   27233881 ns     27343750 ns           16
mask | 20 | avx tbb    9732631 ns      8789062 ns           16

data | 21 |           28978469 ns     29296875 ns           16
data | 21 | avx       12314619 ns     12695312 ns           16
data | 21 |     tbb    9482400 ns     11718750 ns           16
data | 21 | avx tbb    9292406 ns      9765625 ns           16
mask | 21 |          144667325 ns    146484375 ns           16
mask | 21 | avx       12675488 ns     13671875 ns           16
mask | 21 |     tbb   26996650 ns     24414062 ns           16
mask | 21 | avx tbb    9301719 ns      8789062 ns           16

data | 22 |           28328631 ns     23437500 ns           16
data | 22 | avx       12683806 ns     12695312 ns           16
data | 22 |     tbb    9457056 ns      9765625 ns           16
data | 22 | avx tbb    9326900 ns      7812500 ns           16
mask | 22 |          144375600 ns    146484375 ns           16
mask | 22 | avx       12697750 ns     13671875 ns           16
mask | 22 |     tbb   27202388 ns     27343750 ns           16
mask | 22 | avx tbb    9290413 ns     10742188 ns           16

data | 23 |           29109425 ns     32226562 ns           16
data | 23 | avx       12434069 ns     12695312 ns           16
data | 23 |     tbb    9462288 ns     10742188 ns           16
data | 23 | avx tbb    9287956 ns      9765625 ns           16
mask | 23 |          144618813 ns    144531250 ns           16
mask | 23 | avx       12647538 ns     13671875 ns           16
mask | 23 |     tbb   26996581 ns     27343750 ns           16
mask | 23 | avx tbb    9329963 ns      8789062 ns           16

data | 24 |           26708056 ns     30273438 ns           16
data | 24 | avx       12437163 ns     11718750 ns           16
data | 24 |     tbb    9439888 ns      7812500 ns           16
data | 24 | avx tbb    9328062 ns      9765625 ns           16
mask | 24 |          144265288 ns    148437500 ns           16
mask | 24 | avx       12676975 ns     13671875 ns           16
mask | 24 |     tbb   27191744 ns     29296875 ns           16
mask | 24 | avx tbb    9286131 ns      8789062 ns           16

data | 25 |           26357406 ns     27343750 ns           16
data | 25 | avx       12248231 ns      5859375 ns           16
data | 25 |     tbb    9441912 ns     10742188 ns           16
data | 25 | avx tbb    9312506 ns      9765625 ns           16
mask | 25 |          144261400 ns    144531250 ns           16
mask | 25 | avx       12583669 ns     11718750 ns           16
mask | 25 |     tbb   27020538 ns     31250000 ns           16
mask | 25 | avx tbb    9290894 ns     11718750 ns           16

data | 26 |           25222481 ns     26367188 ns           16
data | 26 | avx       12345469 ns     11718750 ns           16
data | 26 |     tbb    9479931 ns      7812500 ns           16
data | 26 | avx tbb    9303256 ns      8789062 ns           16
mask | 26 |          144904719 ns    142578125 ns           16
mask | 26 | avx       12821338 ns     13671875 ns           16
mask | 26 |     tbb   27373725 ns     28320312 ns           16
mask | 26 | avx tbb    9285450 ns      9765625 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           22274575 ns     17578125 ns            8
data |  1 | avx       21137512 ns     23437500 ns            8
data |  1 |     tbb   18354800 ns     19531250 ns            8
data |  1 | avx tbb   18562075 ns     21484375 ns            8
mask |  1 |           21301150 ns     17578125 ns            8
mask |  1 | avx       21375875 ns     17578125 ns            8
mask |  1 |     tbb   18346837 ns     17578125 ns            8
mask |  1 | avx tbb   18348225 ns     15625000 ns            8

data |  2 |          574340100 ns    574218750 ns            8
data |  2 | avx       24862900 ns     23437500 ns            8
data |  2 |     tbb   55397112 ns     50781250 ns            8
data |  2 | avx tbb   18473362 ns     19531250 ns            8
mask |  2 |          288226550 ns    289062500 ns            8
mask |  2 | avx       25486550 ns     25390625 ns            8
mask |  2 |     tbb   53909388 ns     46875000 ns            8
mask |  2 | avx tbb   18460588 ns     19531250 ns            8

data |  3 |          383140613 ns    380859375 ns            8
data |  3 | avx       24609762 ns     25390625 ns            8
data |  3 |     tbb   37045650 ns     31250000 ns            8
data |  3 | avx tbb   18479788 ns     15625000 ns            8
mask |  3 |          288693387 ns    287109375 ns            8
mask |  3 | avx       25449212 ns     23437500 ns            8
mask |  3 |     tbb   54701825 ns     50781250 ns            8
mask |  3 | avx tbb   18489512 ns     17578125 ns            8

data |  4 |          288387425 ns    296875000 ns            8
data |  4 | avx       24592563 ns     25390625 ns            8
data |  4 |     tbb   28067738 ns     29296875 ns            8
data |  4 | avx tbb   18491250 ns     19531250 ns            8
mask |  4 |          289517625 ns    294921875 ns            8
mask |  4 | avx       26565987 ns     29296875 ns            8
mask |  4 |     tbb   54142050 ns     52734375 ns            8
mask |  4 | avx tbb   18487612 ns     17578125 ns            8

data |  5 |          230656987 ns    228515625 ns            8
data |  5 | avx       25043350 ns     25390625 ns            8
data |  5 |     tbb   22887887 ns     25390625 ns            8
data |  5 | avx tbb   18466137 ns     17578125 ns            8
mask |  5 |          289739575 ns    292968750 ns            8
mask |  5 | avx       27527587 ns     25390625 ns            8
mask |  5 |     tbb   54171800 ns     50781250 ns            8
mask |  5 | avx tbb   18488913 ns     19531250 ns            8

data |  6 |          193758663 ns    193359375 ns            8
data |  6 | avx       27230525 ns     27343750 ns            8
data |  6 |     tbb   20979313 ns     15625000 ns            8
data |  6 | avx tbb   18479388 ns     17578125 ns            8
mask |  6 |          289621525 ns    289062500 ns            8
mask |  6 | avx       25397112 ns     27343750 ns            8
mask |  6 |     tbb   53873937 ns     52734375 ns            8
mask |  6 | avx tbb   18505800 ns     17578125 ns            8

data |  7 |          167955737 ns    167968750 ns            8
data |  7 | avx       24901400 ns     27343750 ns            8
data |  7 |     tbb   22082575 ns     19531250 ns            8
data |  7 | avx tbb   18479887 ns     17578125 ns            8
mask |  7 |          289527462 ns    289062500 ns            8
mask |  7 | avx       25346450 ns     23437500 ns            8
mask |  7 |     tbb   54297975 ns     52734375 ns            8
mask |  7 | avx tbb   18492700 ns     19531250 ns            8

data |  8 |          146837637 ns    146484375 ns            8
data |  8 | avx       24797675 ns     25390625 ns            8
data |  8 |     tbb   19199200 ns     17578125 ns            8
data |  8 | avx tbb   18559175 ns     17578125 ns            8
mask |  8 |          289174325 ns    281250000 ns            8
mask |  8 | avx       25259437 ns     23437500 ns            8
mask |  8 |     tbb   54209775 ns     48828125 ns            8
mask |  8 | avx tbb   18462725 ns     17578125 ns            8

data |  9 |          130002363 ns    126953125 ns            8
data |  9 | avx       27537550 ns     27343750 ns            8
data |  9 |     tbb   19170713 ns     17578125 ns            8
data |  9 | avx tbb   18613713 ns     19531250 ns            8
mask |  9 |          289862725 ns    285156250 ns            8
mask |  9 | avx       25238637 ns     21484375 ns            8
mask |  9 |     tbb   54172113 ns     46875000 ns            8
mask |  9 | avx tbb   18720675 ns     19531250 ns            8

data | 10 |          117055087 ns    121093750 ns            8
data | 10 | avx       24575200 ns     23437500 ns            8
data | 10 |     tbb   19673525 ns     19531250 ns            8
data | 10 | avx tbb   18459750 ns     17578125 ns            8
mask | 10 |          289018238 ns    285156250 ns            8
mask | 10 | avx       25289488 ns     23437500 ns            8
mask | 10 |     tbb   54232513 ns     52734375 ns            8
mask | 10 | avx tbb   20554400 ns     19531250 ns            8

data | 11 |          108309825 ns    107421875 ns            8
data | 11 | avx       24865587 ns     23437500 ns            8
data | 11 |     tbb   18922400 ns     19531250 ns            8
data | 11 | avx tbb   18489637 ns     15625000 ns            8
mask | 11 |          288592537 ns    281250000 ns            8
mask | 11 | avx       25870775 ns     25390625 ns            8
mask | 11 |     tbb   53900675 ns     50781250 ns            8
mask | 11 | avx tbb   18499087 ns     17578125 ns            8

data | 12 |           98068712 ns     97656250 ns            8
data | 12 | avx       26005775 ns     25390625 ns            8
data | 12 |     tbb   18991500 ns     19531250 ns            8
data | 12 | avx tbb   18463125 ns     17578125 ns            8
mask | 12 |          289257513 ns    289062500 ns            8
mask | 12 | avx       25252088 ns     25390625 ns            8
mask | 12 |     tbb   54517350 ns     50781250 ns            8
mask | 12 | avx tbb   18472325 ns     19531250 ns            8

data | 13 |           93052062 ns     93750000 ns            8
data | 13 | avx       24994313 ns     25390625 ns            8
data | 13 |     tbb   19034237 ns     19531250 ns            8
data | 13 | avx tbb   18466087 ns     19531250 ns            8
mask | 13 |          288637950 ns    281250000 ns            8
mask | 13 | avx       25224038 ns     27343750 ns            8
mask | 13 |     tbb   54473613 ns     50781250 ns            8
mask | 13 | avx tbb   19536950 ns     21484375 ns            8

data | 14 |           85282275 ns     91796875 ns            8
data | 14 | avx       24613200 ns     27343750 ns            8
data | 14 |     tbb   19000000 ns     17578125 ns            8
data | 14 | avx tbb   20471575 ns     19531250 ns            8
mask | 14 |          289706875 ns    296875000 ns            8
mask | 14 | avx       27779625 ns     25390625 ns            8
mask | 14 |     tbb   53852362 ns     50781250 ns            8
mask | 14 | avx tbb   18492187 ns     19531250 ns            8

data | 15 |           80121875 ns     80078125 ns            8
data | 15 | avx       24582300 ns     21484375 ns            8
data | 15 |     tbb   19144300 ns     17578125 ns            8
data | 15 | avx tbb   18461037 ns     17578125 ns            8
mask | 15 |          288862063 ns    289062500 ns            8
mask | 15 | avx       25393162 ns     25390625 ns            8
mask | 15 |     tbb   54189387 ns     52734375 ns            8
mask | 15 | avx tbb   18798388 ns     17578125 ns            8

data | 16 |           77002588 ns     74218750 ns            8
data | 16 | avx       26946375 ns     29296875 ns            8
data | 16 |     tbb   18953887 ns     19531250 ns            8
data | 16 | avx tbb   18496600 ns     19531250 ns            8
mask | 16 |          289404100 ns    296875000 ns            8
mask | 16 | avx       25312625 ns     23437500 ns            8
mask | 16 |     tbb   53917162 ns     50781250 ns            8
mask | 16 | avx tbb   18500650 ns     17578125 ns            8

data | 17 |           70766000 ns     70312500 ns            8
data | 17 | avx       24884625 ns     23437500 ns            8
data | 17 |     tbb   18928487 ns     21484375 ns            8
data | 17 | avx tbb   18476250 ns     19531250 ns            8
mask | 17 |          288676950 ns    291015625 ns            8
mask | 17 | avx       25416775 ns     23437500 ns            8
mask | 17 |     tbb   54266750 ns     50781250 ns            8
mask | 17 | avx tbb   18505787 ns     17578125 ns            8

data | 18 |           68326287 ns     66406250 ns            8
data | 18 | avx       24896000 ns     23437500 ns            8
data | 18 |     tbb   18946275 ns     19531250 ns            8
data | 18 | avx tbb   18486812 ns     19531250 ns            8
mask | 18 |          288469500 ns    283203125 ns            8
mask | 18 | avx       25244787 ns     23437500 ns            8
mask | 18 |     tbb   54703988 ns     50781250 ns            8
mask | 18 | avx tbb   18458388 ns     15625000 ns            8

data | 19 |           63331438 ns     62500000 ns            8
data | 19 | avx       24890613 ns     23437500 ns            8
data | 19 |     tbb   18853675 ns     19531250 ns            8
data | 19 | avx tbb   18460737 ns     19531250 ns            8
mask | 19 |          288890113 ns    285156250 ns            8
mask | 19 | avx       25387200 ns     27343750 ns            8
mask | 19 |     tbb   53846350 ns     50781250 ns            8
mask | 19 | avx tbb   18499575 ns     19531250 ns            8

data | 20 |           60425287 ns     60546875 ns            8
data | 20 | avx       24869162 ns     25390625 ns            8
data | 20 |     tbb   18918150 ns     19531250 ns            8
data | 20 | avx tbb   18486362 ns     19531250 ns            8
mask | 20 |          288445387 ns    296875000 ns            8
mask | 20 | avx       25266437 ns     27343750 ns            8
mask | 20 |     tbb   54017787 ns     48828125 ns            8
mask | 20 | avx tbb   18554175 ns     17578125 ns            8

data | 21 |           59844650 ns     60546875 ns            8
data | 21 | avx       24613125 ns     23437500 ns            8
data | 21 |     tbb   18906850 ns     19531250 ns            8
data | 21 | avx tbb   18484450 ns     17578125 ns            8
mask | 21 |          289101850 ns    291015625 ns            8
mask | 21 | avx       25265763 ns     25390625 ns            8
mask | 21 |     tbb   54164375 ns     46875000 ns            8
mask | 21 | avx tbb   18456912 ns     19531250 ns            8

data | 22 |           57754125 ns     60546875 ns            8
data | 22 | avx       24911425 ns     27343750 ns            8
data | 22 |     tbb   18816562 ns     15625000 ns            8
data | 22 | avx tbb   18487363 ns     17578125 ns            8
mask | 22 |          289107562 ns    287109375 ns            8
mask | 22 | avx       27297275 ns     29296875 ns            8
mask | 22 |     tbb   55182925 ns     52734375 ns            8
mask | 22 | avx tbb   18493613 ns     15625000 ns            8

data | 23 |           54005475 ns     60546875 ns            8
data | 23 | avx       27179725 ns     27343750 ns            8
data | 23 |     tbb   18876050 ns     21484375 ns            8
data | 23 | avx tbb   18532888 ns     17578125 ns            8
mask | 23 |          288468987 ns    294921875 ns            8
mask | 23 | avx       25221825 ns     25390625 ns            8
mask | 23 |     tbb   54361738 ns     52734375 ns            8
mask | 23 | avx tbb   18498912 ns     17578125 ns            8

data | 24 |           54414613 ns     58593750 ns            8
data | 24 | avx       24756975 ns     23437500 ns            8
data | 24 |     tbb   18784063 ns     17578125 ns            8
data | 24 | avx tbb   18699975 ns     17578125 ns            8
mask | 24 |          288468150 ns    296875000 ns            8
mask | 24 | avx       25411325 ns     25390625 ns            8
mask | 24 |     tbb   54235800 ns     50781250 ns            8
mask | 24 | avx tbb   18563225 ns     21484375 ns            8

data | 25 |           52266487 ns     54687500 ns            8
data | 25 | avx       24955200 ns     21484375 ns            8
data | 25 |     tbb   18812838 ns     19531250 ns            8
data | 25 | avx tbb   18488700 ns     19531250 ns            8
mask | 25 |          288221088 ns    296875000 ns            8
mask | 25 | avx       25350625 ns     27343750 ns            8
mask | 25 |     tbb   54164687 ns     52734375 ns            8
mask | 25 | avx tbb   18482962 ns     17578125 ns            8

data | 26 |           51225188 ns     52734375 ns            8
data | 26 | avx       27285525 ns     23437500 ns            8
data | 26 |     tbb   18823725 ns     19531250 ns            8
data | 26 | avx tbb   18524850 ns     17578125 ns            8
mask | 26 |          289161825 ns    296875000 ns            8
mask | 26 | avx       25212375 ns     25390625 ns            8
mask | 26 |     tbb   54483962 ns     48828125 ns            8
mask | 26 | avx tbb   18482638 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           42518713 ns     42968750 ns            8
data |  1 | avx       42575275 ns     44921875 ns            8
data |  1 |     tbb   36616813 ns     35156250 ns            8
data |  1 | avx tbb   36839850 ns     35156250 ns            8
mask |  1 |           42693488 ns     42968750 ns            8
mask |  1 | avx       42609825 ns     42968750 ns            8
mask |  1 |     tbb   36647900 ns     35156250 ns            8
mask |  1 | avx tbb   36637125 ns     39062500 ns            8

data |  2 |         1148750900 ns   1150390625 ns            8
data |  2 | avx       49341288 ns     52734375 ns            8
data |  2 |     tbb  111814663 ns     99609375 ns            8
data |  2 | avx tbb   36925700 ns     39062500 ns            8
mask |  2 |          577960750 ns    578125000 ns            8
mask |  2 | avx       50733100 ns     50781250 ns            8
mask |  2 |     tbb  109500937 ns    101562500 ns            8
mask |  2 | avx tbb   37155625 ns     35156250 ns            8

data |  3 |          768686662 ns    769531250 ns            8
data |  3 | avx       54697637 ns     56640625 ns            8
data |  3 |     tbb   73121200 ns     68359375 ns            8
data |  3 | avx tbb   36837987 ns     37109375 ns            8
mask |  3 |          576896775 ns    578125000 ns            8
mask |  3 | avx       51073463 ns     50781250 ns            8
mask |  3 |     tbb  107697300 ns    101562500 ns            8
mask |  3 | avx tbb   36804575 ns     37109375 ns            8

data |  4 |          575359187 ns    572265625 ns            8
data |  4 | avx       49784150 ns     50781250 ns            8
data |  4 |     tbb   54628475 ns     52734375 ns            8
data |  4 | avx tbb   36816513 ns     41015625 ns            8
mask |  4 |          578917013 ns    578125000 ns            8
mask |  4 | avx       50736875 ns     52734375 ns            8
mask |  4 |     tbb  108155888 ns     97656250 ns            8
mask |  4 | avx tbb   36835075 ns     35156250 ns            8

data |  5 |          463464738 ns    462890625 ns            8
data |  5 | avx       50044900 ns     50781250 ns            8
data |  5 |     tbb   45198862 ns     44921875 ns            8
data |  5 | avx tbb   36823388 ns     37109375 ns            8
mask |  5 |          578294137 ns    580078125 ns            8
mask |  5 | avx       55143275 ns     54687500 ns            8
mask |  5 |     tbb  109988125 ns    101562500 ns            8
mask |  5 | avx tbb   37197388 ns     37109375 ns            8

data |  6 |          385755625 ns    382812500 ns            8
data |  6 | avx       54445700 ns     54687500 ns            8
data |  6 |     tbb   39850000 ns     39062500 ns            8
data |  6 | avx tbb   36842937 ns     35156250 ns            8
mask |  6 |          577501713 ns    578125000 ns            8
mask |  6 | avx       50888212 ns     52734375 ns            8
mask |  6 |     tbb  108183788 ns     99609375 ns            8
mask |  6 | avx tbb   36843937 ns     35156250 ns            8

data |  7 |          334485775 ns    333984375 ns            8
data |  7 | avx       49855937 ns     50781250 ns            8
data |  7 |     tbb   38562738 ns     37109375 ns            8
data |  7 | avx tbb   36874063 ns     37109375 ns            8
mask |  7 |          576904088 ns    574218750 ns            8
mask |  7 | avx       50679787 ns     52734375 ns            8
mask |  7 |     tbb  108952625 ns    101562500 ns            8
mask |  7 | avx tbb   36844812 ns     41015625 ns            8

data |  8 |          294002462 ns    291015625 ns            8
data |  8 | avx       49933362 ns     48828125 ns            8
data |  8 |     tbb   38479725 ns     37109375 ns            8
data |  8 | avx tbb   36846012 ns     35156250 ns            8
mask |  8 |          578866063 ns    580078125 ns            8
mask |  8 | avx       50922225 ns     52734375 ns            8
mask |  8 |     tbb  108341738 ns    101562500 ns            8
mask |  8 | avx tbb   37241113 ns     37109375 ns            8

data |  9 |          257284163 ns    257812500 ns            8
data |  9 | avx       49691075 ns     50781250 ns            8
data |  9 |     tbb   38382337 ns     37109375 ns            8
data |  9 | avx tbb   36836350 ns     35156250 ns            8
mask |  9 |          577946137 ns    580078125 ns            8
mask |  9 | avx       50748112 ns     50781250 ns            8
mask |  9 |     tbb  108269375 ns     93750000 ns            8
mask |  9 | avx tbb   36848825 ns     35156250 ns            8

data | 10 |          233812112 ns    234375000 ns            8
data | 10 | avx       54383075 ns     52734375 ns            8
data | 10 |     tbb   37647750 ns     35156250 ns            8
data | 10 | avx tbb   36836950 ns     37109375 ns            8
mask | 10 |          578277925 ns    578125000 ns            8
mask | 10 | avx       50808675 ns     52734375 ns            8
mask | 10 |     tbb  108817450 ns     95703125 ns            8
mask | 10 | avx tbb   36868988 ns     37109375 ns            8

data | 11 |          216667337 ns    216796875 ns            8
data | 11 | avx       49816375 ns     48828125 ns            8
data | 11 |     tbb   37631050 ns     33203125 ns            8
data | 11 | avx tbb   36879200 ns     37109375 ns            8
mask | 11 |          578022637 ns    578125000 ns            8
mask | 11 | avx       50809750 ns     52734375 ns            8
mask | 11 |     tbb  108197387 ns     99609375 ns            8
mask | 11 | avx tbb   37429775 ns     39062500 ns            8

data | 12 |          196517725 ns    197265625 ns            8
data | 12 | avx       50004675 ns     50781250 ns            8
data | 12 |     tbb   38146387 ns     35156250 ns            8
data | 12 | avx tbb   36840513 ns     37109375 ns            8
mask | 12 |          578433625 ns    578125000 ns            8
mask | 12 | avx       50959488 ns     50781250 ns            8
mask | 12 |     tbb  108245925 ns     99609375 ns            8
mask | 12 | avx tbb   36989087 ns     33203125 ns            8

data | 13 |          183178025 ns    183593750 ns            8
data | 13 | avx       49948300 ns     48828125 ns            8
data | 13 |     tbb   38101250 ns     39062500 ns            8
data | 13 | avx tbb   36866325 ns     37109375 ns            8
mask | 13 |          577169412 ns    578125000 ns            8
mask | 13 | avx       55376200 ns     54687500 ns            8
mask | 13 |     tbb  108857000 ns     99609375 ns            8
mask | 13 | avx tbb   36843050 ns     35156250 ns            8

data | 14 |          170750137 ns    171875000 ns            8
data | 14 | avx       49967037 ns     48828125 ns            8
data | 14 |     tbb   38067362 ns     41015625 ns            8
data | 14 | avx tbb   36837438 ns     37109375 ns            8
mask | 14 |          577892950 ns    578125000 ns            8
mask | 14 | avx       55479963 ns     56640625 ns            8
mask | 14 |     tbb  108325850 ns    105468750 ns            8
mask | 14 | avx tbb   36895075 ns     39062500 ns            8

data | 15 |          164042588 ns    164062500 ns            8
data | 15 | avx       53494450 ns     50781250 ns            8
data | 15 |     tbb   37760787 ns     37109375 ns            8
data | 15 | avx tbb   37118637 ns     37109375 ns            8
mask | 15 |          577593987 ns    580078125 ns            8
mask | 15 | avx       50911488 ns     50781250 ns            8
mask | 15 |     tbb  107641100 ns     99609375 ns            8
mask | 15 | avx tbb   36890362 ns     37109375 ns            8

data | 16 |          154264212 ns    152343750 ns            8
data | 16 | avx       51023325 ns     52734375 ns            8
data | 16 |     tbb   37867213 ns     35156250 ns            8
data | 16 | avx tbb   37432662 ns     39062500 ns            8
mask | 16 |          577210413 ns    578125000 ns            8
mask | 16 | avx       50554913 ns     52734375 ns            8
mask | 16 |     tbb  109439263 ns     97656250 ns            8
mask | 16 | avx tbb   36831963 ns     39062500 ns            8

data | 17 |          141151213 ns    140625000 ns            8
data | 17 | avx       49856075 ns     52734375 ns            8
data | 17 |     tbb   37829550 ns     37109375 ns            8
data | 17 | avx tbb   36859787 ns     37109375 ns            8
mask | 17 |          578707737 ns    578125000 ns            8
mask | 17 | avx       51120212 ns     50781250 ns            8
mask | 17 |     tbb  108447387 ns     99609375 ns            8
mask | 17 | avx tbb   36925675 ns     39062500 ns            8

data | 18 |          133145000 ns    132812500 ns            8
data | 18 | avx       54150763 ns     52734375 ns            8
data | 18 |     tbb   37732438 ns     37109375 ns            8
data | 18 | avx tbb   37374687 ns     39062500 ns            8
mask | 18 |          577807288 ns    576171875 ns            8
mask | 18 | avx       50754613 ns     48828125 ns            8
mask | 18 |     tbb  108362350 ns    101562500 ns            8
mask | 18 | avx tbb   36888900 ns     33203125 ns            8

data | 19 |          130349188 ns    130859375 ns            8
data | 19 | avx       49862588 ns     50781250 ns            8
data | 19 |     tbb   37600187 ns     37109375 ns            8
data | 19 | avx tbb   37435875 ns     39062500 ns            8
mask | 19 |          579018663 ns    580078125 ns            8
mask | 19 | avx       50890500 ns     52734375 ns            8
mask | 19 |     tbb  108302188 ns     99609375 ns            8
mask | 19 | avx tbb   36840537 ns     37109375 ns            8

data | 20 |          124897588 ns    125000000 ns            8
data | 20 | avx       49436425 ns     50781250 ns            8
data | 20 |     tbb   37724962 ns     37109375 ns            8
data | 20 | avx tbb   36844525 ns     37109375 ns            8
mask | 20 |          578130650 ns    578125000 ns            8
mask | 20 | avx       55340662 ns     52734375 ns            8
mask | 20 |     tbb  108173850 ns    103515625 ns            8
mask | 20 | avx tbb   37208963 ns     37109375 ns            8

data | 21 |          115906400 ns    117187500 ns            8
data | 21 | avx       54247562 ns     54687500 ns            8
data | 21 |     tbb   37543187 ns     37109375 ns            8
data | 21 | avx tbb   36850262 ns     37109375 ns            8
mask | 21 |          578907675 ns    578125000 ns            8
mask | 21 | avx       55412175 ns     56640625 ns            8
mask | 21 |     tbb  108364887 ns    101562500 ns            8
mask | 21 | avx tbb   36890900 ns     37109375 ns            8

data | 22 |          115882450 ns    115234375 ns            8
data | 22 | avx       54421450 ns     52734375 ns            8
data | 22 |     tbb   37516287 ns     37109375 ns            8
data | 22 | avx tbb   36812700 ns     37109375 ns            8
mask | 22 |          578654712 ns    578125000 ns            8
mask | 22 | avx       52623887 ns     52734375 ns            8
mask | 22 |     tbb  108307438 ns    103515625 ns            8
mask | 22 | avx tbb   36821575 ns     37109375 ns            8

data | 23 |          108345250 ns    107421875 ns            8
data | 23 | avx       54405550 ns     50781250 ns            8
data | 23 |     tbb   37496988 ns     35156250 ns            8
data | 23 | avx tbb   36833287 ns     33203125 ns            8
mask | 23 |          577692587 ns    576171875 ns            8
mask | 23 | avx       55433425 ns     56640625 ns            8
mask | 23 |     tbb  107711750 ns    101562500 ns            8
mask | 23 | avx tbb   36892262 ns     37109375 ns            8

data | 24 |          108568763 ns    109375000 ns            8
data | 24 | avx       49905488 ns     52734375 ns            8
data | 24 |     tbb   37883738 ns     33203125 ns            8
data | 24 | avx tbb   36869788 ns     33203125 ns            8
mask | 24 |          577378575 ns    578125000 ns            8
mask | 24 | avx       55451925 ns     56640625 ns            8
mask | 24 |     tbb  108986088 ns    101562500 ns            8
mask | 24 | avx tbb   37222400 ns     37109375 ns            8

data | 25 |          101619500 ns    101562500 ns            8
data | 25 | avx       54202800 ns     54687500 ns            8
data | 25 |     tbb   37495025 ns     39062500 ns            8
data | 25 | avx tbb   36930612 ns     33203125 ns            8
mask | 25 |          578744650 ns    580078125 ns            8
mask | 25 | avx       50681812 ns     46875000 ns            8
mask | 25 |     tbb  107587900 ns    105468750 ns            8
mask | 25 | avx tbb   36895338 ns     37109375 ns            8

data | 26 |           98496062 ns     97656250 ns            8
data | 26 | avx       49675512 ns     48828125 ns            8
data | 26 |     tbb   37437588 ns     35156250 ns            8
data | 26 | avx tbb   36855712 ns     35156250 ns            8
mask | 26 |          578002512 ns    578125000 ns            8
mask | 26 | avx       51053275 ns     50781250 ns            8
mask | 26 |     tbb  108382037 ns    103515625 ns            8
mask | 26 | avx tbb   36902775 ns     39062500 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           85497962 ns     83984375 ns            8
data |  1 | avx       85588050 ns     89843750 ns            8
data |  1 |     tbb   73165812 ns     74218750 ns            8
data |  1 | avx tbb   73603738 ns     68359375 ns            8
mask |  1 |           85368200 ns     85937500 ns            8
mask |  1 | avx       85323738 ns     85937500 ns            8
mask |  1 |     tbb   73779275 ns     72265625 ns            8
mask |  1 | avx tbb   73117362 ns     76171875 ns            8

data |  2 |         2297411038 ns   2296875000 ns            8
data |  2 | avx       99574450 ns     99609375 ns            8
data |  2 |     tbb  221027837 ns    201171875 ns            8
data |  2 | avx tbb   73669363 ns     70312500 ns            8
mask |  2 |         1156846088 ns   1154296875 ns            8
mask |  2 | avx      100886637 ns    101562500 ns            8
mask |  2 |     tbb  218406475 ns    197265625 ns            8
mask |  2 | avx tbb   73541200 ns     74218750 ns            8

data |  3 |         1534054538 ns   1531250000 ns            8
data |  3 | avx       98897962 ns    101562500 ns            8
data |  3 |     tbb  147384362 ns    134765625 ns            8
data |  3 | avx tbb   73597775 ns     72265625 ns            8
mask |  3 |         1156649625 ns   1158203125 ns            8
mask |  3 | avx      102363175 ns    101562500 ns            8
mask |  3 |     tbb  217977037 ns    203125000 ns            8
mask |  3 | avx tbb   73726812 ns     70312500 ns            8

data |  4 |         1151465175 ns   1148437500 ns            8
data |  4 | avx       99675275 ns    101562500 ns            8
data |  4 |     tbb  108940675 ns     99609375 ns            8
data |  4 | avx tbb   73684925 ns     74218750 ns            8
mask |  4 |         1154710712 ns   1154296875 ns            8
mask |  4 | avx      102096450 ns    103515625 ns            8
mask |  4 |     tbb  215744100 ns    203125000 ns            8
mask |  4 | avx tbb   73753025 ns     74218750 ns            8

data |  5 |          923163787 ns    923828125 ns            8
data |  5 | avx       99057837 ns    101562500 ns            8
data |  5 |     tbb   90280075 ns     80078125 ns            8
data |  5 | avx tbb   73620813 ns     72265625 ns            8
mask |  5 |         1156648725 ns   1154296875 ns            8
mask |  5 | avx      101696450 ns    101562500 ns            8
mask |  5 |     tbb  215054638 ns    199218750 ns            8
mask |  5 | avx tbb   73583138 ns     72265625 ns            8

data |  6 |          771857375 ns    771484375 ns            8
data |  6 | avx      106222162 ns    105468750 ns            8
data |  6 |     tbb   80458000 ns     76171875 ns            8
data |  6 | avx tbb   73566987 ns     68359375 ns            8
mask |  6 |         1154126862 ns   1156250000 ns            8
mask |  6 | avx      101576900 ns    101562500 ns            8
mask |  6 |     tbb  217386738 ns    197265625 ns            8
mask |  6 | avx tbb   73634050 ns     68359375 ns            8

data |  7 |          666621375 ns    660156250 ns            8
data |  7 | avx       99767913 ns     99609375 ns            8
data |  7 |     tbb   76763838 ns     70312500 ns            8
data |  7 | avx tbb   73595788 ns     68359375 ns            8
mask |  7 |         1158645988 ns   1160156250 ns            8
mask |  7 | avx      101797662 ns     99609375 ns            8
mask |  7 |     tbb  216385950 ns    203125000 ns            8
mask |  7 | avx tbb   73718350 ns     72265625 ns            8

data |  8 |          582722263 ns    580078125 ns            8
data |  8 | avx      100005988 ns     99609375 ns            8
data |  8 |     tbb   77308413 ns     74218750 ns            8
data |  8 | avx tbb   73617450 ns     72265625 ns            8
mask |  8 |         1157925275 ns   1156250000 ns            8
mask |  8 | avx      101991300 ns    101562500 ns            8
mask |  8 |     tbb  215388550 ns    199218750 ns            8
mask |  8 | avx tbb   73590588 ns     70312500 ns            8

data |  9 |          513835788 ns    513671875 ns            8
data |  9 | avx       99522187 ns     99609375 ns            8
data |  9 |     tbb   75275437 ns     74218750 ns            8
data |  9 | avx tbb   73553300 ns     74218750 ns            8
mask |  9 |         1157760175 ns   1158203125 ns            8
mask |  9 | avx      101825163 ns    103515625 ns            8
mask |  9 |     tbb  215287150 ns    205078125 ns            8
mask |  9 | avx tbb   73600713 ns     68359375 ns            8

data | 10 |          465948087 ns    468750000 ns            8
data | 10 | avx      103100425 ns    101562500 ns            8
data | 10 |     tbb   76087925 ns     74218750 ns            8
data | 10 | avx tbb   73624662 ns     68359375 ns            8
mask | 10 |         1156091300 ns   1154296875 ns            8
mask | 10 | avx      101569587 ns    101562500 ns            8
mask | 10 |     tbb  218590350 ns    199218750 ns            8
mask | 10 | avx tbb   73651800 ns     74218750 ns            8

data | 11 |          426603662 ns    427734375 ns            8
data | 11 | avx       98907000 ns     99609375 ns            8
data | 11 |     tbb   74884163 ns     74218750 ns            8
data | 11 | avx tbb   73610350 ns     72265625 ns            8
mask | 11 |         1157814813 ns   1156250000 ns            8
mask | 11 | avx      101612838 ns     99609375 ns            8
mask | 11 |     tbb  215166088 ns    201171875 ns            8
mask | 11 | avx tbb   73574937 ns     72265625 ns            8

data | 12 |          392456562 ns    390625000 ns            8
data | 12 | avx       99355575 ns     97656250 ns            8
data | 12 |     tbb   75152275 ns     72265625 ns            8
data | 12 | avx tbb   73600962 ns     72265625 ns            8
mask | 12 |         1157340513 ns   1156250000 ns            8
mask | 12 | avx      101732587 ns    101562500 ns            8
mask | 12 |     tbb  218602213 ns    207031250 ns            8
mask | 12 | avx tbb   73748825 ns     74218750 ns            8

data | 13 |          366423075 ns    367187500 ns            8
data | 13 | avx       99928650 ns     99609375 ns            8
data | 13 |     tbb   75247200 ns     70312500 ns            8
data | 13 | avx tbb   73593125 ns     72265625 ns            8
mask | 13 |         1154700212 ns   1156250000 ns            8
mask | 13 | avx      101692075 ns    101562500 ns            8
mask | 13 |     tbb  217482050 ns    207031250 ns            8
mask | 13 | avx tbb   73671138 ns     74218750 ns            8

data | 14 |          341222325 ns    339843750 ns            8
data | 14 | avx       99596938 ns     97656250 ns            8
data | 14 |     tbb   75578012 ns     74218750 ns            8
data | 14 | avx tbb   73653462 ns     76171875 ns            8
mask | 14 |         1154587162 ns   1156250000 ns            8
mask | 14 | avx      102368838 ns     99609375 ns            8
mask | 14 |     tbb  215200600 ns    199218750 ns            8
mask | 14 | avx tbb   73692175 ns     72265625 ns            8

data | 15 |          319881650 ns    322265625 ns            8
data | 15 | avx       99829475 ns     97656250 ns            8
data | 15 |     tbb   75297737 ns     72265625 ns            8
data | 15 | avx tbb   73602600 ns     72265625 ns            8
mask | 15 |         1155878925 ns   1156250000 ns            8
mask | 15 | avx      101996162 ns    105468750 ns            8
mask | 15 |     tbb  216321925 ns    207031250 ns            8
mask | 15 | avx tbb   73621475 ns     72265625 ns            8

data | 16 |          301465612 ns    300781250 ns            8
data | 16 | avx       99729337 ns     99609375 ns            8
data | 16 |     tbb   75255913 ns     74218750 ns            8
data | 16 | avx tbb   73628962 ns     70312500 ns            8
mask | 16 |         1157271950 ns   1160156250 ns            8
mask | 16 | avx      102263700 ns    103515625 ns            8
mask | 16 |     tbb  216201337 ns    199218750 ns            8
mask | 16 | avx tbb   73693125 ns     72265625 ns            8

data | 17 |          282421538 ns    281250000 ns            8
data | 17 | avx       99681987 ns     97656250 ns            8
data | 17 |     tbb   75442325 ns     72265625 ns            8
data | 17 | avx tbb   74920688 ns     74218750 ns            8
mask | 17 |         1154845513 ns   1154296875 ns            8
mask | 17 | avx      101259713 ns     99609375 ns            8
mask | 17 |     tbb  216351700 ns    201171875 ns            8
mask | 17 | avx tbb   73706237 ns     74218750 ns            8

data | 18 |          267429650 ns    265625000 ns            8
data | 18 | avx       99544388 ns     99609375 ns            8
data | 18 |     tbb   75384425 ns     70312500 ns            8
data | 18 | avx tbb   73576900 ns     74218750 ns            8
mask | 18 |         1155355812 ns   1154296875 ns            8
mask | 18 | avx      101894263 ns     99609375 ns            8
mask | 18 |     tbb  215415663 ns    203125000 ns            8
mask | 18 | avx tbb   73681713 ns     70312500 ns            8

data | 19 |          253253700 ns    250000000 ns            8
data | 19 | avx       98601125 ns     99609375 ns            8
data | 19 |     tbb   75069663 ns     72265625 ns            8
data | 19 | avx tbb   73790400 ns     74218750 ns            8
mask | 19 |         1156900512 ns   1158203125 ns            8
mask | 19 | avx      101129413 ns    101562500 ns            8
mask | 19 |     tbb  217341362 ns    207031250 ns            8
mask | 19 | avx tbb   73643987 ns     70312500 ns            8

data | 20 |          241603062 ns    240234375 ns            8
data | 20 | avx       99347713 ns     97656250 ns            8
data | 20 |     tbb   75026550 ns     74218750 ns            8
data | 20 | avx tbb   74372175 ns     74218750 ns            8
mask | 20 |         1157387100 ns   1158203125 ns            8
mask | 20 | avx      101917312 ns    103515625 ns            8
mask | 20 |     tbb  216277300 ns    197265625 ns            8
mask | 20 | avx tbb   73633563 ns     76171875 ns            8

data | 21 |          234164288 ns    234375000 ns            8
data | 21 | avx       99683225 ns     99609375 ns            8
data | 21 |     tbb   74927800 ns     76171875 ns            8
data | 21 | avx tbb   73598075 ns     74218750 ns            8
mask | 21 |         1154889813 ns   1154296875 ns            8
mask | 21 | avx      101487275 ns     99609375 ns            8
mask | 21 |     tbb  215111363 ns    203125000 ns            8
mask | 21 | avx tbb   73743650 ns     76171875 ns            8

data | 22 |          223891375 ns    224609375 ns            8
data | 22 | avx       99639000 ns     99609375 ns            8
data | 22 |     tbb   75225375 ns     76171875 ns            8
data | 22 | avx tbb   73566038 ns     70312500 ns            8
mask | 22 |         1153815325 ns   1158203125 ns            8
mask | 22 | avx      102030813 ns    103515625 ns            8
mask | 22 |     tbb  216483362 ns    199218750 ns            8
mask | 22 | avx tbb   73597350 ns     70312500 ns            8

data | 23 |          216474812 ns    214843750 ns            8
data | 23 | avx       99718100 ns     97656250 ns            8
data | 23 |     tbb   75434075 ns     72265625 ns            8
data | 23 | avx tbb   73690262 ns     72265625 ns            8
mask | 23 |         1157432437 ns   1156250000 ns            8
mask | 23 | avx      102610950 ns     99609375 ns            8
mask | 23 |     tbb  215422862 ns    207031250 ns            8
mask | 23 | avx tbb   73650487 ns     70312500 ns            8

data | 24 |          209871325 ns    208984375 ns            8
data | 24 | avx       99744562 ns    101562500 ns            8
data | 24 |     tbb   74974488 ns     72265625 ns            8
data | 24 | avx tbb   73593912 ns     70312500 ns            8
mask | 24 |         1157786025 ns   1156250000 ns            8
mask | 24 | avx      101664662 ns    101562500 ns            8
mask | 24 |     tbb  215265862 ns    201171875 ns            8
mask | 24 | avx tbb   73691313 ns     70312500 ns            8

data | 25 |          202545675 ns    201171875 ns            8
data | 25 | avx       99471513 ns     99609375 ns            8
data | 25 |     tbb   76605600 ns     76171875 ns            8
data | 25 | avx tbb   73684175 ns     74218750 ns            8
mask | 25 |         1155545462 ns   1154296875 ns            8
mask | 25 | avx      101253663 ns    101562500 ns            8
mask | 25 |     tbb  215180950 ns    201171875 ns            8
mask | 25 | avx tbb   73712462 ns     78125000 ns            8

data | 26 |          197171662 ns    195312500 ns            8
data | 26 | avx       99589525 ns     99609375 ns            8
data | 26 |     tbb   74699313 ns     74218750 ns            8
data | 26 | avx tbb   73828200 ns     74218750 ns            8
mask | 26 |         1155922412 ns   1154296875 ns            8
mask | 26 | avx      102039350 ns    101562500 ns            8
mask | 26 |     tbb  215312088 ns    201171875 ns            8
mask | 26 | avx tbb   73698687 ns     72265625 ns            8
```

</details>


## LLVM (clang-cl)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1283 ns        0.000 ns         4096
data |  1 | avx            762 ns        0.000 ns         4096
data |  1 |     tbb       5597 ns         7629 ns         4096
data |  1 | avx tbb        758 ns        0.000 ns         4096
mask |  1 |                758 ns        0.000 ns         4096
mask |  1 | avx            765 ns        0.000 ns         4096
mask |  1 |     tbb       5555 ns         7629 ns         4096
mask |  1 | avx tbb        755 ns        0.000 ns         4096

data |  2 |              18429 ns        19073 ns         4096
data |  2 | avx           1059 ns         3815 ns         4096
data |  2 |     tbb      10699 ns        11444 ns         4096
data |  2 | avx tbb       1147 ns         3815 ns         4096
mask |  2 |              11866 ns        11444 ns         4096
mask |  2 | avx            919 ns        0.000 ns         4096
mask |  2 |     tbb       8340 ns         3815 ns         4096
mask |  2 | avx tbb        994 ns        0.000 ns         4096

data |  3 |              13306 ns        15259 ns         4096
data |  3 | avx           1035 ns         3815 ns         4096
data |  3 |     tbb      10050 ns        11444 ns         4096
data |  3 | avx tbb       1143 ns         3815 ns         4096
mask |  3 |              11702 ns        15259 ns         4096
mask |  3 | avx            932 ns        0.000 ns         4096
mask |  3 |     tbb       8330 ns         7629 ns         4096
mask |  3 | avx tbb        972 ns        0.000 ns         4096

data |  4 |               9666 ns        11444 ns         4096
data |  4 | avx           1052 ns         3815 ns         4096
data |  4 |     tbb       9541 ns         7629 ns         4096
data |  4 | avx tbb       1123 ns         3815 ns         4096
mask |  4 |              12847 ns        11444 ns         4096
mask |  4 | avx            978 ns        0.000 ns         4096
mask |  4 |     tbb       8364 ns         7629 ns         4096
mask |  4 | avx tbb       1015 ns        0.000 ns         4096

data |  5 |               8181 ns         7629 ns         4096
data |  5 | avx           1094 ns        0.000 ns         4096
data |  5 |     tbb       9302 ns         7629 ns         4096
data |  5 | avx tbb       1114 ns        0.000 ns         4096
mask |  5 |              12099 ns        11444 ns         4096
mask |  5 | avx            928 ns         3815 ns         4096
mask |  5 |     tbb       8331 ns        11444 ns         4096
mask |  5 | avx tbb        949 ns        0.000 ns         4096

data |  6 |               6616 ns         3815 ns         4096
data |  6 | avx           1044 ns        0.000 ns         4096
data |  6 |     tbb       9156 ns         7629 ns         4096
data |  6 | avx tbb       1139 ns        0.000 ns         4096
mask |  6 |              12319 ns        11444 ns         4096
mask |  6 | avx            951 ns        0.000 ns         4096
mask |  6 |     tbb       8357 ns         7629 ns         4096
mask |  6 | avx tbb       1008 ns        0.000 ns         4096

data |  7 |               6165 ns         3815 ns         4096
data |  7 | avx           1060 ns        0.000 ns         4096
data |  7 |     tbb       9038 ns        11444 ns         4096
data |  7 | avx tbb       1156 ns        0.000 ns         4096
mask |  7 |              12306 ns        15259 ns         4096
mask |  7 | avx           1015 ns         3815 ns         4096
mask |  7 |     tbb       8432 ns        11444 ns         4096
mask |  7 | avx tbb        975 ns         3815 ns         4096

data |  8 |               5224 ns         3815 ns         4096
data |  8 | avx           1044 ns        0.000 ns         4096
data |  8 |     tbb       8893 ns         7629 ns         4096
data |  8 | avx tbb       1082 ns        0.000 ns         4096
mask |  8 |              11397 ns        15259 ns         4096
mask |  8 | avx            951 ns        0.000 ns         4096
mask |  8 |     tbb       8357 ns         7629 ns         4096
mask |  8 | avx tbb        954 ns        0.000 ns         4096

data |  9 |               4825 ns         7629 ns         4096
data |  9 | avx           1051 ns        0.000 ns         4096
data |  9 |     tbb       8835 ns         7629 ns         4096
data |  9 | avx tbb       1116 ns        0.000 ns         4096
mask |  9 |              12781 ns        11444 ns         4096
mask |  9 | avx            947 ns         3815 ns         4096
mask |  9 |     tbb       8492 ns        11444 ns         4096
mask |  9 | avx tbb       1001 ns         3815 ns         4096

data | 10 |               4552 ns         3815 ns         4096
data | 10 | avx           1098 ns        0.000 ns         4096
data | 10 |     tbb       8881 ns         7629 ns         4096
data | 10 | avx tbb       1154 ns         3815 ns         4096
mask | 10 |              12036 ns        11444 ns         4096
mask | 10 | avx           1007 ns        0.000 ns         4096
mask | 10 |     tbb       8355 ns         7629 ns         4096
mask | 10 | avx tbb       1021 ns        0.000 ns         4096

data | 11 |               4123 ns         3815 ns         4096
data | 11 | avx           1027 ns        0.000 ns         4096
data | 11 |     tbb       8716 ns         7629 ns         4096
data | 11 | avx tbb       1097 ns        0.000 ns         4096
mask | 11 |              13203 ns        15259 ns         4096
mask | 11 | avx            950 ns         3815 ns         4096
mask | 11 |     tbb       8331 ns        11444 ns         4096
mask | 11 | avx tbb        984 ns        0.000 ns         4096

data | 12 |               3908 ns         3815 ns         4096
data | 12 | avx           1095 ns         3815 ns         4096
data | 12 |     tbb       8761 ns        11444 ns         4096
data | 12 | avx tbb       1164 ns         3815 ns         4096
mask | 12 |              12187 ns        11444 ns         4096
mask | 12 | avx           1013 ns        0.000 ns         4096
mask | 12 |     tbb       8342 ns         7629 ns         4096
mask | 12 | avx tbb       1005 ns         3815 ns         4096

data | 13 |               3706 ns         3815 ns         4096
data | 13 | avx           1086 ns        0.000 ns         4096
data | 13 |     tbb       8608 ns        11444 ns         4096
data | 13 | avx tbb       1095 ns         3815 ns         4096
mask | 13 |              11988 ns        15259 ns         4096
mask | 13 | avx            952 ns        0.000 ns         4096
mask | 13 |     tbb       8382 ns         7629 ns         4096
mask | 13 | avx tbb       1019 ns         3815 ns         4096

data | 14 |               3527 ns         3815 ns         4096
data | 14 | avx           1097 ns        0.000 ns         4096
data | 14 |     tbb       8650 ns         7629 ns         4096
data | 14 | avx tbb       1097 ns        0.000 ns         4096
mask | 14 |              14028 ns        15259 ns         4096
mask | 14 | avx           1021 ns        0.000 ns         4096
mask | 14 |     tbb       8365 ns         7629 ns         4096
mask | 14 | avx tbb       1019 ns        0.000 ns         4096

data | 15 |               3186 ns         3815 ns         4096
data | 15 | avx           1021 ns        0.000 ns         4096
data | 15 |     tbb       8574 ns         7629 ns         4096
data | 15 | avx tbb       1088 ns        0.000 ns         4096
mask | 15 |              11087 ns        11444 ns         4096
mask | 15 | avx            961 ns        0.000 ns         4096
mask | 15 |     tbb       8362 ns         3815 ns         4096
mask | 15 | avx tbb        977 ns        0.000 ns         4096

data | 16 |               3007 ns         7629 ns         4096
data | 16 | avx           1053 ns        0.000 ns         4096
data | 16 |     tbb       8527 ns         7629 ns         4096
data | 16 | avx tbb       1085 ns        0.000 ns         4096
mask | 16 |              11527 ns        11444 ns         4096
mask | 16 | avx            966 ns        0.000 ns         4096
mask | 16 |     tbb       8487 ns        0.000 ns         4096
mask | 16 | avx tbb       1007 ns        0.000 ns         4096

data | 17 |               3033 ns        0.000 ns         4096
data | 17 | avx           1083 ns        0.000 ns         4096
data | 17 |     tbb       8512 ns         3815 ns         4096
data | 17 | avx tbb       1131 ns         3815 ns         4096
mask | 17 |              12066 ns        11444 ns         4096
mask | 17 | avx           1016 ns        0.000 ns         4096
mask | 17 |     tbb       8298 ns         7629 ns         4096
mask | 17 | avx tbb       1011 ns        0.000 ns         4096

data | 18 |               2912 ns        0.000 ns         4096
data | 18 | avx           1083 ns        0.000 ns         4096
data | 18 |     tbb       8497 ns         7629 ns         4096
data | 18 | avx tbb       1090 ns        0.000 ns         4096
mask | 18 |              11648 ns        15259 ns         4096
mask | 18 | avx            958 ns        0.000 ns         4096
mask | 18 |     tbb       8319 ns         7629 ns         4096
mask | 18 | avx tbb        997 ns         3815 ns         4096

data | 19 |               2757 ns         3815 ns         4096
data | 19 | avx           1074 ns        0.000 ns         4096
data | 19 |     tbb       8783 ns        11444 ns         4096
data | 19 | avx tbb       1146 ns        0.000 ns         4096
mask | 19 |              12358 ns        15259 ns         4096
mask | 19 | avx           1013 ns        0.000 ns         4096
mask | 19 |     tbb       8438 ns         7629 ns         4096
mask | 19 | avx tbb       1059 ns        0.000 ns         4096

data | 20 |               2805 ns        0.000 ns         4096
data | 20 | avx           1126 ns        0.000 ns         4096
data | 20 |     tbb       8410 ns         7629 ns         4096
data | 20 | avx tbb       1126 ns         3815 ns         4096
mask | 20 |              12152 ns        11444 ns         4096
mask | 20 | avx           1014 ns        0.000 ns         4096
mask | 20 |     tbb       8356 ns         7629 ns         4096
mask | 20 | avx tbb       1030 ns        0.000 ns         4096

data | 21 |               2629 ns         3815 ns         4096
data | 21 | avx           1100 ns        0.000 ns         4096
data | 21 |     tbb       8427 ns        11444 ns         4096
data | 21 | avx tbb       1129 ns         3815 ns         4096
mask | 21 |              11813 ns         7629 ns         4096
mask | 21 | avx           1015 ns        0.000 ns         4096
mask | 21 |     tbb       8355 ns         7629 ns         4096
mask | 21 | avx tbb        976 ns        0.000 ns         4096

data | 22 |               2389 ns        0.000 ns         4096
data | 22 | avx           1024 ns        0.000 ns         4096
data | 22 |     tbb       8372 ns         7629 ns         4096
data | 22 | avx tbb       1059 ns        0.000 ns         4096
mask | 22 |              11079 ns        11444 ns         4096
mask | 22 | avx            955 ns         3815 ns         4096
mask | 22 |     tbb       8366 ns         7629 ns         4096
mask | 22 | avx tbb        976 ns        0.000 ns         4096

data | 23 |               2339 ns         3815 ns         4096
data | 23 | avx           1042 ns        0.000 ns         4096
data | 23 |     tbb       8345 ns        11444 ns         4096
data | 23 | avx tbb       1106 ns        0.000 ns         4096
mask | 23 |              11243 ns        11444 ns         4096
mask | 23 | avx            976 ns        0.000 ns         4096
mask | 23 |     tbb       8312 ns        11444 ns         4096
mask | 23 | avx tbb        981 ns        0.000 ns         4096

data | 24 |               2366 ns         3815 ns         4096
data | 24 | avx           1074 ns        0.000 ns         4096
data | 24 |     tbb       8417 ns         7629 ns         4096
data | 24 | avx tbb       1089 ns        0.000 ns         4096
mask | 24 |              11278 ns        15259 ns         4096
mask | 24 | avx            970 ns        0.000 ns         4096
mask | 24 |     tbb       8427 ns         7629 ns         4096
mask | 24 | avx tbb       1005 ns         3815 ns         4096

data | 25 |               2321 ns         3815 ns         4096
data | 25 | avx           1107 ns        0.000 ns         4096
data | 25 |     tbb       8435 ns         7629 ns         4096
data | 25 | avx tbb       1191 ns         3815 ns         4096
mask | 25 |              12088 ns        11444 ns         4096
mask | 25 | avx           1025 ns        0.000 ns         4096
mask | 25 |     tbb       8354 ns        0.000 ns         4096
mask | 25 | avx tbb       1033 ns        0.000 ns         4096

data | 26 |               2288 ns         3815 ns         4096
data | 26 | avx           1088 ns         3815 ns         4096
data | 26 |     tbb       8302 ns        11444 ns         4096
data | 26 | avx tbb       1109 ns        0.000 ns         4096
mask | 26 |              11409 ns        11444 ns         4096
mask | 26 | avx            986 ns         3815 ns         4096
mask | 26 |     tbb       8345 ns        11444 ns         4096
mask | 26 | avx tbb       1017 ns        0.000 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               1498 ns        0.000 ns         4096
data |  1 | avx           1532 ns         3815 ns         4096
data |  1 |     tbb       6032 ns         3815 ns         4096
data |  1 | avx tbb       1517 ns        0.000 ns         4096
mask |  1 |               1577 ns        0.000 ns         4096
mask |  1 | avx           1569 ns         3815 ns         4096
mask |  1 |     tbb       5981 ns         3815 ns         4096
mask |  1 | avx tbb       1584 ns         3815 ns         4096

data |  2 |              73108 ns        76294 ns         4096
data |  2 | avx           2462 ns         3815 ns         4096
data |  2 |     tbb      16950 ns        19073 ns         4096
data |  2 | avx tbb       2553 ns         3815 ns         4096
mask |  2 |              50243 ns        49591 ns         4096
mask |  2 | avx           2202 ns         3815 ns         4096
mask |  2 |     tbb      14933 ns        15259 ns         4096
mask |  2 | avx tbb       2326 ns         3815 ns         4096

data |  3 |              49326 ns        45776 ns         4096
data |  3 | avx           2431 ns         3815 ns         4096
data |  3 |     tbb      14314 ns        11444 ns         4096
data |  3 | avx tbb       2467 ns        0.000 ns         4096
mask |  3 |              46020 ns        49591 ns         4096
mask |  3 | avx           2213 ns        0.000 ns         4096
mask |  3 |     tbb      15011 ns        19073 ns         4096
mask |  3 | avx tbb       2329 ns        0.000 ns         4096

data |  4 |              37843 ns        38147 ns         4096
data |  4 | avx           2591 ns        0.000 ns         4096
data |  4 |     tbb      12966 ns        15259 ns         4096
data |  4 | avx tbb       2492 ns        0.000 ns         4096
mask |  4 |              46537 ns        45776 ns         4096
mask |  4 | avx           2208 ns         3815 ns         4096
mask |  4 |     tbb      15018 ns        15259 ns         4096
mask |  4 | avx tbb       2326 ns         3815 ns         4096

data |  5 |              29818 ns        26703 ns         4096
data |  5 | avx           2581 ns        0.000 ns         4096
data |  5 |     tbb      12156 ns         7629 ns         4096
data |  5 | avx tbb       2439 ns         3815 ns         4096
mask |  5 |              48161 ns        45776 ns         4096
mask |  5 | avx           2204 ns         3815 ns         4096
mask |  5 |     tbb      14928 ns        15259 ns         4096
mask |  5 | avx tbb       2306 ns         3815 ns         4096

data |  6 |              24442 ns        26703 ns         4096
data |  6 | avx           2416 ns        0.000 ns         4096
data |  6 |     tbb      11353 ns         7629 ns         4096
data |  6 | avx tbb       2451 ns         3815 ns         4096
mask |  6 |              44636 ns        45776 ns         4096
mask |  6 | avx           2202 ns         3815 ns         4096
mask |  6 |     tbb      14876 ns        15259 ns         4096
mask |  6 | avx tbb       2309 ns         3815 ns         4096

data |  7 |              21412 ns        22888 ns         4096
data |  7 | avx           2565 ns         7629 ns         4096
data |  7 |     tbb      11059 ns        15259 ns         4096
data |  7 | avx tbb       2470 ns        0.000 ns         4096
mask |  7 |              47603 ns        49591 ns         4096
mask |  7 | avx           2211 ns        0.000 ns         4096
mask |  7 |     tbb      14897 ns         7629 ns         4096
mask |  7 | avx tbb       2300 ns         3815 ns         4096

data |  8 |              19240 ns        22888 ns         4096
data |  8 | avx           2563 ns         3815 ns         4096
data |  8 |     tbb      10617 ns         7629 ns         4096
data |  8 | avx tbb       2425 ns         3815 ns         4096
mask |  8 |              46643 ns        41962 ns         4096
mask |  8 | avx           2193 ns        0.000 ns         4096
mask |  8 |     tbb      14972 ns        19073 ns         4096
mask |  8 | avx tbb       2351 ns        0.000 ns         4096

data |  9 |              17452 ns        15259 ns         4096
data |  9 | avx           2578 ns         3815 ns         4096
data |  9 |     tbb      10368 ns        11444 ns         4096
data |  9 | avx tbb       2446 ns         3815 ns         4096
mask |  9 |              44840 ns        45776 ns         4096
mask |  9 | avx           2202 ns        0.000 ns         4096
mask |  9 |     tbb      15023 ns        19073 ns         4096
mask |  9 | avx tbb       2323 ns        0.000 ns         4096

data | 10 |              15876 ns        15259 ns         4096
data | 10 | avx           2572 ns         3815 ns         4096
data | 10 |     tbb      10173 ns         7629 ns         4096
data | 10 | avx tbb       2415 ns         3815 ns         4096
mask | 10 |              47599 ns        49591 ns         4096
mask | 10 | avx           2207 ns        0.000 ns         4096
mask | 10 |     tbb      15214 ns        15259 ns         4096
mask | 10 | avx tbb       2327 ns        0.000 ns         4096

data | 11 |              14476 ns        15259 ns         4096
data | 11 | avx           2565 ns         3815 ns         4096
data | 11 |     tbb      10016 ns         7629 ns         4096
data | 11 | avx tbb       2473 ns         3815 ns         4096
mask | 11 |              45565 ns        49591 ns         4096
mask | 11 | avx           2219 ns        0.000 ns         4096
mask | 11 |     tbb      15038 ns        15259 ns         4096
mask | 11 | avx tbb       2344 ns        0.000 ns         4096

data | 12 |              13378 ns        15259 ns         4096
data | 12 | avx           2559 ns        0.000 ns         4096
data | 12 |     tbb       9883 ns        15259 ns         4096
data | 12 | avx tbb       2465 ns        0.000 ns         4096
mask | 12 |              47313 ns        45776 ns         4096
mask | 12 | avx           2261 ns         3815 ns         4096
mask | 12 |     tbb      15313 ns        11444 ns         4096
mask | 12 | avx tbb       2333 ns         3815 ns         4096

data | 13 |              12294 ns         7629 ns         4096
data | 13 | avx           2573 ns         3815 ns         4096
data | 13 |     tbb       9725 ns        11444 ns         4096
data | 13 | avx tbb       2440 ns         3815 ns         4096
mask | 13 |              44690 ns        41962 ns         4096
mask | 13 | avx           2218 ns         3815 ns         4096
mask | 13 |     tbb      15233 ns        15259 ns         4096
mask | 13 | avx tbb       2317 ns         3815 ns         4096

data | 14 |              11425 ns        11444 ns         4096
data | 14 | avx           2570 ns         3815 ns         4096
data | 14 |     tbb       9616 ns        11444 ns         4096
data | 14 | avx tbb       2448 ns        0.000 ns         4096
mask | 14 |              46396 ns        49591 ns         4096
mask | 14 | avx           2228 ns         3815 ns         4096
mask | 14 |     tbb      14968 ns        15259 ns         4096
mask | 14 | avx tbb       2315 ns        0.000 ns         4096

data | 15 |              10447 ns         3815 ns         4096
data | 15 | avx           2547 ns         3815 ns         4096
data | 15 |     tbb       9663 ns        11444 ns         4096
data | 15 | avx tbb       2551 ns         3815 ns         4096
mask | 15 |              46301 ns        45776 ns         4096
mask | 15 | avx           2222 ns         3815 ns         4096
mask | 15 |     tbb      15037 ns        15259 ns         4096
mask | 15 | avx tbb       2358 ns         3815 ns         4096

data | 16 |               9943 ns        11444 ns         4096
data | 16 | avx           2426 ns         3815 ns         4096
data | 16 |     tbb       9535 ns        15259 ns         4096
data | 16 | avx tbb       2492 ns         3815 ns         4096
mask | 16 |              43649 ns        41962 ns         4096
mask | 16 | avx           2206 ns        0.000 ns         4096
mask | 16 |     tbb      14887 ns        15259 ns         4096
mask | 16 | avx tbb       2334 ns        0.000 ns         4096

data | 17 |               9694 ns        11444 ns         4096
data | 17 | avx           2584 ns         3815 ns         4096
data | 17 |     tbb       9621 ns        11444 ns         4096
data | 17 | avx tbb       2414 ns         3815 ns         4096
mask | 17 |              44066 ns        41962 ns         4096
mask | 17 | avx           2225 ns        0.000 ns         4096
mask | 17 |     tbb      14937 ns        11444 ns         4096
mask | 17 | avx tbb       2379 ns         3815 ns         4096

data | 18 |               8867 ns        11444 ns         4096
data | 18 | avx           2529 ns        0.000 ns         4096
data | 18 |     tbb       9299 ns        11444 ns         4096
data | 18 | avx tbb       2501 ns         3815 ns         4096
mask | 18 |              45344 ns        41962 ns         4096
mask | 18 | avx           2276 ns        0.000 ns         4096
mask | 18 |     tbb      14972 ns        15259 ns         4096
mask | 18 | avx tbb       2315 ns         3815 ns         4096

data | 19 |               8467 ns        11444 ns         4096
data | 19 | avx           2424 ns         3815 ns         4096
data | 19 |     tbb       9199 ns        11444 ns         4096
data | 19 | avx tbb       2500 ns         3815 ns         4096
mask | 19 |              43419 ns        45776 ns         4096
mask | 19 | avx           2225 ns         3815 ns         4096
mask | 19 |     tbb      15078 ns        19073 ns         4096
mask | 19 | avx tbb       2349 ns        0.000 ns         4096

data | 20 |               8230 ns         7629 ns         4096
data | 20 | avx           2592 ns         3815 ns         4096
data | 20 |     tbb       9167 ns        11444 ns         4096
data | 20 | avx tbb       2414 ns         3815 ns         4096
mask | 20 |              46948 ns        41962 ns         4096
mask | 20 | avx           2228 ns        0.000 ns         4096
mask | 20 |     tbb      15096 ns        19073 ns         4096
mask | 20 | avx tbb       2369 ns         3815 ns         4096

data | 21 |               7811 ns         7629 ns         4096
data | 21 | avx           2410 ns         3815 ns         4096
data | 21 |     tbb       9156 ns         3815 ns         4096
data | 21 | avx tbb       2505 ns         3815 ns         4096
mask | 21 |              43255 ns        45776 ns         4096
mask | 21 | avx           2241 ns        0.000 ns         4096
mask | 21 |     tbb      15548 ns        19073 ns         4096
mask | 21 | avx tbb       2395 ns        0.000 ns         4096

data | 22 |               7829 ns         7629 ns         4096
data | 22 | avx           2565 ns         3815 ns         4096
data | 22 |     tbb       9106 ns         7629 ns         4096
data | 22 | avx tbb       2504 ns         3815 ns         4096
mask | 22 |              45200 ns        45776 ns         4096
mask | 22 | avx           2239 ns         3815 ns         4096
mask | 22 |     tbb      14946 ns        19073 ns         4096
mask | 22 | avx tbb       2407 ns         3815 ns         4096

data | 23 |               7174 ns        11444 ns         4096
data | 23 | avx           2504 ns        0.000 ns         4096
data | 23 |     tbb       9215 ns        11444 ns         4096
data | 23 | avx tbb       2522 ns         3815 ns         4096
mask | 23 |              44510 ns        41962 ns         4096
mask | 23 | avx           2372 ns         3815 ns         4096
mask | 23 |     tbb      14952 ns        15259 ns         4096
mask | 23 | avx tbb       2374 ns        0.000 ns         4096

data | 24 |               6926 ns         7629 ns         4096
data | 24 | avx           2418 ns        0.000 ns         4096
data | 24 |     tbb       9096 ns        11444 ns         4096
data | 24 | avx tbb       2505 ns         3815 ns         4096
mask | 24 |              43551 ns        41962 ns         4096
mask | 24 | avx           2239 ns        0.000 ns         4096
mask | 24 |     tbb      15003 ns        19073 ns         4096
mask | 24 | avx tbb       2358 ns         3815 ns         4096

data | 25 |               6665 ns         7629 ns         4096
data | 25 | avx           2519 ns         3815 ns         4096
data | 25 |     tbb       8942 ns         7629 ns         4096
data | 25 | avx tbb       2608 ns         3815 ns         4096
mask | 25 |              44534 ns        45776 ns         4096
mask | 25 | avx           2249 ns         3815 ns         4096
mask | 25 |     tbb      14942 ns        19073 ns         4096
mask | 25 | avx tbb       2351 ns         3815 ns         4096

data | 26 |               6467 ns         3815 ns         4096
data | 26 | avx           2422 ns         3815 ns         4096
data | 26 |     tbb       8967 ns         3815 ns         4096
data | 26 | avx tbb       2504 ns        0.000 ns         4096
mask | 26 |              47225 ns        49591 ns         4096
mask | 26 | avx           2225 ns         3815 ns         4096
mask | 26 |     tbb      14961 ns        19073 ns         4096
mask | 26 | avx tbb       2344 ns        0.000 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4677 ns         7629 ns         2048
data |  1 | avx           4757 ns        0.000 ns         2048
data |  1 |     tbb       9658 ns         7629 ns         2048
data |  1 | avx tbb       4749 ns         7629 ns         2048
mask |  1 |               4540 ns        0.000 ns         2048
mask |  1 | avx           4468 ns        15259 ns         2048
mask |  1 |     tbb       9611 ns         7629 ns         2048
mask |  1 | avx tbb       4716 ns         7629 ns         2048

data |  2 |             284882 ns       282288 ns         2048
data |  2 | avx           8305 ns        15259 ns         2048
data |  2 |     tbb      40869 ns        45776 ns         2048
data |  2 | avx tbb       8035 ns         7629 ns         2048
mask |  2 |             186604 ns       190735 ns         2048
mask |  2 | avx           7688 ns         7629 ns         2048
mask |  2 |     tbb      42090 ns        38147 ns         2048
mask |  2 | avx tbb       8043 ns        15259 ns         2048

data |  3 |             191303 ns       198364 ns         2048
data |  3 | avx           8334 ns         7629 ns         2048
data |  3 |     tbb      31242 ns        30518 ns         2048
data |  3 | avx tbb       7959 ns        0.000 ns         2048
mask |  3 |             182854 ns       183105 ns         2048
mask |  3 | avx           7725 ns         7629 ns         2048
mask |  3 |     tbb      42007 ns        38147 ns         2048
mask |  3 | avx tbb       8126 ns        15259 ns         2048

data |  4 |             144899 ns       152588 ns         2048
data |  4 | avx           8373 ns         7629 ns         2048
data |  4 |     tbb      26614 ns        22888 ns         2048
data |  4 | avx tbb       8119 ns         7629 ns         2048
mask |  4 |             188008 ns       183105 ns         2048
mask |  4 | avx           7780 ns         7629 ns         2048
mask |  4 |     tbb      42111 ns        38147 ns         2048
mask |  4 | avx tbb       8077 ns         7629 ns         2048

data |  5 |             116293 ns       122070 ns         2048
data |  5 | avx           8362 ns        0.000 ns         2048
data |  5 |     tbb      23754 ns        30518 ns         2048
data |  5 | avx tbb       8199 ns        15259 ns         2048
mask |  5 |             185467 ns       190735 ns         2048
mask |  5 | avx           7766 ns         7629 ns         2048
mask |  5 |     tbb      42056 ns        38147 ns         2048
mask |  5 | avx tbb       8165 ns         7629 ns         2048

data |  6 |              97899 ns        91553 ns         2048
data |  6 | avx           8441 ns        15259 ns         2048
data |  6 |     tbb      21962 ns        15259 ns         2048
data |  6 | avx tbb       8030 ns        15259 ns         2048
mask |  6 |             193803 ns       198364 ns         2048
mask |  6 | avx           7772 ns        0.000 ns         2048
mask |  6 |     tbb      42600 ns        45776 ns         2048
mask |  6 | avx tbb       8114 ns        15259 ns         2048

data |  7 |              84163 ns        83923 ns         2048
data |  7 | avx           8354 ns         7629 ns         2048
data |  7 |     tbb      20723 ns        22888 ns         2048
data |  7 | avx tbb       8093 ns        15259 ns         2048
mask |  7 |             181414 ns       183105 ns         2048
mask |  7 | avx           7790 ns        0.000 ns         2048
mask |  7 |     tbb      42579 ns        53406 ns         2048
mask |  7 | avx tbb       8488 ns        0.000 ns         2048

data |  8 |              74196 ns        68665 ns         2048
data |  8 | avx           8317 ns         7629 ns         2048
data |  8 |     tbb      19230 ns        22888 ns         2048
data |  8 | avx tbb       8066 ns        0.000 ns         2048
mask |  8 |             185678 ns       190735 ns         2048
mask |  8 | avx           7722 ns        0.000 ns         2048
mask |  8 |     tbb      42057 ns        45776 ns         2048
mask |  8 | avx tbb       8020 ns         7629 ns         2048

data |  9 |              66423 ns        76294 ns         2048
data |  9 | avx           8250 ns        15259 ns         2048
data |  9 |     tbb      18509 ns        22888 ns         2048
data |  9 | avx tbb       8077 ns        0.000 ns         2048
mask |  9 |             177732 ns       183105 ns         2048
mask |  9 | avx           7793 ns        0.000 ns         2048
mask |  9 |     tbb      42255 ns        45776 ns         2048
mask |  9 | avx tbb       8141 ns         7629 ns         2048

data | 10 |              60144 ns        61035 ns         2048
data | 10 | avx           8470 ns         7629 ns         2048
data | 10 |     tbb      18248 ns        15259 ns         2048
data | 10 | avx tbb       8077 ns         7629 ns         2048
mask | 10 |             190547 ns       183105 ns         2048
mask | 10 | avx           7814 ns         7629 ns         2048
mask | 10 |     tbb      42654 ns        45776 ns         2048
mask | 10 | avx tbb       8667 ns        0.000 ns         2048

data | 11 |              54091 ns        53406 ns         2048
data | 11 | avx           8789 ns         7629 ns         2048
data | 11 |     tbb      17832 ns        22888 ns         2048
data | 11 | avx tbb       7985 ns        0.000 ns         2048
mask | 11 |             176712 ns       175476 ns         2048
mask | 11 | avx           7659 ns         7629 ns         2048
mask | 11 |     tbb      42091 ns        45776 ns         2048
mask | 11 | avx tbb       8203 ns         7629 ns         2048

data | 12 |              50721 ns        61035 ns         2048
data | 12 | avx           8348 ns         7629 ns         2048
data | 12 |     tbb      16904 ns        15259 ns         2048
data | 12 | avx tbb       8228 ns         7629 ns         2048
mask | 12 |             180449 ns       167847 ns         2048
mask | 12 | avx           7891 ns        0.000 ns         2048
mask | 12 |     tbb      42100 ns        45776 ns         2048
mask | 12 | avx tbb       8238 ns        15259 ns         2048

data | 13 |              45817 ns        45776 ns         2048
data | 13 | avx           8870 ns         7629 ns         2048
data | 13 |     tbb      16391 ns         7629 ns         2048
data | 13 | avx tbb       8066 ns         7629 ns         2048
mask | 13 |             178740 ns       175476 ns         2048
mask | 13 | avx           7754 ns        15259 ns         2048
mask | 13 |     tbb      42592 ns        45776 ns         2048
mask | 13 | avx tbb       8208 ns        15259 ns         2048

data | 14 |              43956 ns        45776 ns         2048
data | 14 | avx           8631 ns        15259 ns         2048
data | 14 |     tbb      16066 ns        15259 ns         2048
data | 14 | avx tbb       7950 ns         7629 ns         2048
mask | 14 |             174859 ns       167847 ns         2048
mask | 14 | avx           7888 ns         7629 ns         2048
mask | 14 |     tbb      42033 ns        53406 ns         2048
mask | 14 | avx tbb       8292 ns         7629 ns         2048

data | 15 |              38838 ns        45776 ns         2048
data | 15 | avx           8352 ns         7629 ns         2048
data | 15 |     tbb      15861 ns        22888 ns         2048
data | 15 | avx tbb       8193 ns        0.000 ns         2048
mask | 15 |             172300 ns       175476 ns         2048
mask | 15 | avx           7846 ns         7629 ns         2048
mask | 15 |     tbb      42995 ns        53406 ns         2048
mask | 15 | avx tbb       8535 ns         7629 ns         2048

data | 16 |              36535 ns        38147 ns         2048
data | 16 | avx           8450 ns        15259 ns         2048
data | 16 |     tbb      15402 ns        15259 ns         2048
data | 16 | avx tbb       8098 ns        0.000 ns         2048
mask | 16 |             175213 ns       175476 ns         2048
mask | 16 | avx           7783 ns         7629 ns         2048
mask | 16 |     tbb      42145 ns        53406 ns         2048
mask | 16 | avx tbb       8131 ns         7629 ns         2048

data | 17 |              34427 ns        45776 ns         2048
data | 17 | avx           8885 ns         7629 ns         2048
data | 17 |     tbb      15494 ns        30518 ns         2048
data | 17 | avx tbb       8207 ns        15259 ns         2048
mask | 17 |             184098 ns       198364 ns         2048
mask | 17 | avx           7876 ns         7629 ns         2048
mask | 17 |     tbb      43032 ns        45776 ns         2048
mask | 17 | avx tbb       8455 ns         7629 ns         2048

data | 18 |              34050 ns        38147 ns         2048
data | 18 | avx           8889 ns        0.000 ns         2048
data | 18 |     tbb      15034 ns        15259 ns         2048
data | 18 | avx tbb       7923 ns         7629 ns         2048
mask | 18 |             173139 ns       175476 ns         2048
mask | 18 | avx           7768 ns        15259 ns         2048
mask | 18 |     tbb      42122 ns        38147 ns         2048
mask | 18 | avx tbb       8175 ns        15259 ns         2048

data | 19 |              31408 ns        22888 ns         2048
data | 19 | avx           8891 ns        15259 ns         2048
data | 19 |     tbb      15178 ns        22888 ns         2048
data | 19 | avx tbb       8304 ns         7629 ns         2048
mask | 19 |             179175 ns       175476 ns         2048
mask | 19 | avx           7870 ns        15259 ns         2048
mask | 19 |     tbb      42972 ns        53406 ns         2048
mask | 19 | avx tbb       8415 ns        0.000 ns         2048

data | 20 |              29311 ns        30518 ns         2048
data | 20 | avx           8418 ns         7629 ns         2048
data | 20 |     tbb      14628 ns        22888 ns         2048
data | 20 | avx tbb       8098 ns        0.000 ns         2048
mask | 20 |             175377 ns       183105 ns         2048
mask | 20 | avx           7814 ns        0.000 ns         2048
mask | 20 |     tbb      42041 ns        45776 ns         2048
mask | 20 | avx tbb       8300 ns        0.000 ns         2048

data | 21 |              28807 ns        38147 ns         2048
data | 21 | avx           9001 ns         7629 ns         2048
data | 21 |     tbb      14586 ns         7629 ns         2048
data | 21 | avx tbb       8122 ns        0.000 ns         2048
mask | 21 |             190612 ns       198364 ns         2048
mask | 21 | avx           7917 ns        0.000 ns         2048
mask | 21 |     tbb      42764 ns        53406 ns         2048
mask | 21 | avx tbb       8610 ns        15259 ns         2048

data | 22 |              28650 ns        30518 ns         2048
data | 22 | avx           8855 ns        15259 ns         2048
data | 22 |     tbb      14506 ns        22888 ns         2048
data | 22 | avx tbb       8238 ns        15259 ns         2048
mask | 22 |             172032 ns       183105 ns         2048
mask | 22 | avx           7860 ns        15259 ns         2048
mask | 22 |     tbb      42094 ns        30518 ns         2048
mask | 22 | avx tbb       8151 ns         7629 ns         2048

data | 23 |              26809 ns        38147 ns         2048
data | 23 | avx           8952 ns        15259 ns         2048
data | 23 |     tbb      15055 ns        30518 ns         2048
data | 23 | avx tbb       8270 ns         7629 ns         2048
mask | 23 |             183996 ns       175476 ns         2048
mask | 23 | avx           7918 ns        15259 ns         2048
mask | 23 |     tbb      42615 ns        61035 ns         2048
mask | 23 | avx tbb       8562 ns         7629 ns         2048

data | 24 |              24868 ns        22888 ns         2048
data | 24 | avx           8430 ns         7629 ns         2048
data | 24 |     tbb      14074 ns        22888 ns         2048
data | 24 | avx tbb       7742 ns        15259 ns         2048
mask | 24 |             172232 ns       175476 ns         2048
mask | 24 | avx           7818 ns        15259 ns         2048
mask | 24 |     tbb      42591 ns        22888 ns         2048
mask | 24 | avx tbb       8388 ns        15259 ns         2048

data | 25 |              24547 ns        22888 ns         2048
data | 25 | avx           8982 ns        0.000 ns         2048
data | 25 |     tbb      13969 ns        30518 ns         2048
data | 25 | avx tbb       8250 ns         7629 ns         2048
mask | 25 |             181936 ns       190735 ns         2048
mask | 25 | avx           7885 ns         7629 ns         2048
mask | 25 |     tbb      42746 ns        38147 ns         2048
mask | 25 | avx tbb       8620 ns        15259 ns         2048

data | 26 |              24505 ns         7629 ns         2048
data | 26 | avx           8979 ns        0.000 ns         2048
data | 26 |     tbb      13824 ns        15259 ns         2048
data | 26 | avx tbb       8211 ns         7629 ns         2048
mask | 26 |             176563 ns       167847 ns         2048
mask | 26 | avx           7871 ns         7629 ns         2048
mask | 26 |     tbb      42749 ns        38147 ns         2048
mask | 26 | avx tbb       8118 ns         7629 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              17388 ns        15259 ns         1024
data |  1 | avx          17939 ns        15259 ns         1024
data |  1 |     tbb      17266 ns        45776 ns         1024
data |  1 | avx tbb      16774 ns        30518 ns         1024
mask |  1 |              20946 ns        15259 ns         1024
mask |  1 | avx          21024 ns        15259 ns         1024
mask |  1 |     tbb      17298 ns        0.000 ns         1024
mask |  1 | avx tbb      19679 ns        0.000 ns         1024

data |  2 |            1143806 ns      1144409 ns         1024
data |  2 | avx          30697 ns        45776 ns         1024
data |  2 |     tbb     122805 ns        91553 ns         1024
data |  2 | avx tbb      17566 ns        45776 ns         1024
mask |  2 |             772113 ns       762939 ns         1024
mask |  2 | avx          28349 ns        15259 ns         1024
mask |  2 |     tbb     139082 ns       137329 ns         1024
mask |  2 | avx tbb      17403 ns        0.000 ns         1024

data |  3 |             760456 ns       747681 ns         1024
data |  3 | avx          30593 ns        15259 ns         1024
data |  3 |     tbb      86944 ns        76294 ns         1024
data |  3 | avx tbb      17524 ns        15259 ns         1024
mask |  3 |             770502 ns       778198 ns         1024
mask |  3 | avx          28860 ns        30518 ns         1024
mask |  3 |     tbb     140370 ns       167847 ns         1024
mask |  3 | avx tbb      17204 ns        15259 ns         1024

data |  4 |             565791 ns       564575 ns         1024
data |  4 | avx          30983 ns        15259 ns         1024
data |  4 |     tbb      70315 ns        91553 ns         1024
data |  4 | avx tbb      17577 ns        15259 ns         1024
mask |  4 |             749318 ns       701904 ns         1024
mask |  4 | avx          28885 ns        15259 ns         1024
mask |  4 |     tbb     140885 ns       152588 ns         1024
mask |  4 | avx tbb      17245 ns        15259 ns         1024

data |  5 |             455764 ns       488281 ns         1024
data |  5 | avx          30845 ns        30518 ns         1024
data |  5 |     tbb      57366 ns        45776 ns         1024
data |  5 | avx tbb      17460 ns        15259 ns         1024
mask |  5 |             795721 ns       808716 ns         1024
mask |  5 | avx          29041 ns        61035 ns         1024
mask |  5 |     tbb     140543 ns       167847 ns         1024
mask |  5 | avx tbb      17562 ns        45776 ns         1024

data |  6 |             379107 ns       396729 ns         1024
data |  6 | avx          31398 ns        15259 ns         1024
data |  6 |     tbb      50009 ns        30518 ns         1024
data |  6 | avx tbb      17475 ns        15259 ns         1024
mask |  6 |             788994 ns       823975 ns         1024
mask |  6 | avx          29045 ns        15259 ns         1024
mask |  6 |     tbb     139275 ns       152588 ns         1024
mask |  6 | avx tbb      17450 ns        15259 ns         1024

data |  7 |             326998 ns       335693 ns         1024
data |  7 | avx          30904 ns        30518 ns         1024
data |  7 |     tbb      46064 ns        61035 ns         1024
data |  7 | avx tbb      17489 ns        30518 ns         1024
mask |  7 |             773913 ns       778198 ns         1024
mask |  7 | avx          28776 ns        30518 ns         1024
mask |  7 |     tbb     142053 ns       183105 ns         1024
mask |  7 | avx tbb      17214 ns        15259 ns         1024

data |  8 |             287018 ns       305176 ns         1024
data |  8 | avx          31341 ns        30518 ns         1024
data |  8 |     tbb      40950 ns        61035 ns         1024
data |  8 | avx tbb      17517 ns        0.000 ns         1024
mask |  8 |             781629 ns       808716 ns         1024
mask |  8 | avx          28774 ns        30518 ns         1024
mask |  8 |     tbb     139038 ns       183105 ns         1024
mask |  8 | avx tbb      17476 ns        15259 ns         1024

data |  9 |             254121 ns       259399 ns         1024
data |  9 | avx          31377 ns        30518 ns         1024
data |  9 |     tbb      37953 ns        30518 ns         1024
data |  9 | avx tbb      17551 ns        15259 ns         1024
mask |  9 |             767263 ns       762939 ns         1024
mask |  9 | avx          28964 ns        45776 ns         1024
mask |  9 |     tbb     140855 ns       106812 ns         1024
mask |  9 | avx tbb      17247 ns        0.000 ns         1024

data | 10 |             229734 ns       244141 ns         1024
data | 10 | avx          31412 ns        30518 ns         1024
data | 10 |     tbb      37395 ns        15259 ns         1024
data | 10 | avx tbb      17229 ns        0.000 ns         1024
mask | 10 |             761849 ns       732422 ns         1024
mask | 10 | avx          28698 ns        30518 ns         1024
mask | 10 |     tbb     142484 ns       106812 ns         1024
mask | 10 | avx tbb      17280 ns        15259 ns         1024

data | 11 |             209734 ns       213623 ns         1024
data | 11 | avx          31381 ns        45776 ns         1024
data | 11 |     tbb      33104 ns        45776 ns         1024
data | 11 | avx tbb      17513 ns        45776 ns         1024
mask | 11 |             772260 ns       793457 ns         1024
mask | 11 | avx          28926 ns        30518 ns         1024
mask | 11 |     tbb     139039 ns       152588 ns         1024
mask | 11 | avx tbb      17116 ns        30518 ns         1024

data | 12 |             192753 ns       183105 ns         1024
data | 12 | avx          31233 ns        30518 ns         1024
data | 12 |     tbb      31129 ns        0.000 ns         1024
data | 12 | avx tbb      17992 ns        30518 ns         1024
mask | 12 |             733402 ns       732422 ns         1024
mask | 12 | avx          28871 ns        0.000 ns         1024
mask | 12 |     tbb     138847 ns       167847 ns         1024
mask | 12 | avx tbb      17437 ns        15259 ns         1024

data | 13 |             181747 ns       198364 ns         1024
data | 13 | avx          33982 ns        61035 ns         1024
data | 13 |     tbb      36076 ns        45776 ns         1024
data | 13 | avx tbb      18789 ns        45776 ns         1024
mask | 13 |             823391 ns       808716 ns         1024
mask | 13 | avx          29356 ns        15259 ns         1024
mask | 13 |     tbb     141138 ns       106812 ns         1024
mask | 13 | avx tbb      17403 ns        30518 ns         1024

data | 14 |             174856 ns       167847 ns         1024
data | 14 | avx          32243 ns        30518 ns         1024
data | 14 |     tbb      31616 ns        61035 ns         1024
data | 14 | avx tbb      17659 ns        30518 ns         1024
mask | 14 |             765321 ns       732422 ns         1024
mask | 14 | avx          29014 ns        45776 ns         1024
mask | 14 |     tbb     142708 ns       152588 ns         1024
mask | 14 | avx tbb      17098 ns        30518 ns         1024

data | 15 |             155550 ns       152588 ns         1024
data | 15 | avx          30816 ns        45776 ns         1024
data | 15 |     tbb      31867 ns        45776 ns         1024
data | 15 | avx tbb      17733 ns        30518 ns         1024
mask | 15 |             841956 ns       839233 ns         1024
mask | 15 | avx          30648 ns        30518 ns         1024
mask | 15 |     tbb     164245 ns       137329 ns         1024
mask | 15 | avx tbb      19153 ns        0.000 ns         1024

data | 16 |             160622 ns       198364 ns         1024
data | 16 | avx          38481 ns        76294 ns         1024
data | 16 |     tbb      39206 ns        15259 ns         1024
data | 16 | avx tbb      21364 ns        15259 ns         1024
mask | 16 |             821778 ns       823975 ns         1024
mask | 16 | avx          30480 ns        15259 ns         1024
mask | 16 |     tbb     156218 ns       167847 ns         1024
mask | 16 | avx tbb      18450 ns        15259 ns         1024

data | 17 |             140681 ns       137329 ns         1024
data | 17 | avx          32868 ns        15259 ns         1024
data | 17 |     tbb      35044 ns        45776 ns         1024
data | 17 | avx tbb      21457 ns        61035 ns         1024
mask | 17 |             788099 ns       778198 ns         1024
mask | 17 | avx          29018 ns        15259 ns         1024
mask | 17 |     tbb     140640 ns       183105 ns         1024
mask | 17 | avx tbb      17277 ns        30518 ns         1024

data | 18 |             134064 ns       167847 ns         1024
data | 18 | avx          33017 ns        45776 ns         1024
data | 18 |     tbb      25935 ns        15259 ns         1024
data | 18 | avx tbb      17506 ns        15259 ns         1024
mask | 18 |             787736 ns       808716 ns         1024
mask | 18 | avx          28816 ns        15259 ns         1024
mask | 18 |     tbb     146426 ns       122070 ns         1024
mask | 18 | avx tbb      17303 ns        30518 ns         1024

data | 19 |             124220 ns       137329 ns         1024
data | 19 | avx          30799 ns        0.000 ns         1024
data | 19 |     tbb      24729 ns        45776 ns         1024
data | 19 | avx tbb      18151 ns        0.000 ns         1024
mask | 19 |             756945 ns       778198 ns         1024
mask | 19 | avx          29501 ns        61035 ns         1024
mask | 19 |     tbb     140711 ns       122070 ns         1024
mask | 19 | avx tbb      17184 ns        0.000 ns         1024

data | 20 |             116537 ns       122070 ns         1024
data | 20 | avx          31422 ns        45776 ns         1024
data | 20 |     tbb      24402 ns        30518 ns         1024
data | 20 | avx tbb      18006 ns        0.000 ns         1024
mask | 20 |             739752 ns       732422 ns         1024
mask | 20 | avx          28823 ns        15259 ns         1024
mask | 20 |     tbb     140700 ns       106812 ns         1024
mask | 20 | avx tbb      17427 ns        15259 ns         1024

data | 21 |             111837 ns       122070 ns         1024
data | 21 | avx          31352 ns        30518 ns         1024
data | 21 |     tbb      23906 ns        45776 ns         1024
data | 21 | avx tbb      18103 ns        0.000 ns         1024
mask | 21 |             764369 ns       778198 ns         1024
mask | 21 | avx          29096 ns        45776 ns         1024
mask | 21 |     tbb     140943 ns       137329 ns         1024
mask | 21 | avx tbb      16924 ns        0.000 ns         1024

data | 22 |             106928 ns       106812 ns         1024
data | 22 | avx          30687 ns        30518 ns         1024
data | 22 |     tbb      23425 ns        15259 ns         1024
data | 22 | avx tbb      17490 ns        0.000 ns         1024
mask | 22 |             765482 ns       778198 ns         1024
mask | 22 | avx          29081 ns        61035 ns         1024
mask | 22 |     tbb     141140 ns       106812 ns         1024
mask | 22 | avx tbb      17350 ns        15259 ns         1024

data | 23 |             103667 ns        91553 ns         1024
data | 23 | avx          30675 ns        30518 ns         1024
data | 23 |     tbb      24479 ns        0.000 ns         1024
data | 23 | avx tbb      17633 ns        45776 ns         1024
mask | 23 |             756311 ns       747681 ns         1024
mask | 23 | avx          36032 ns        45776 ns         1024
mask | 23 |     tbb     143212 ns       167847 ns         1024
mask | 23 | avx tbb      17045 ns        15259 ns         1024

data | 24 |              98688 ns       137329 ns         1024
data | 24 | avx          30741 ns        30518 ns         1024
data | 24 |     tbb      22818 ns        15259 ns         1024
data | 24 | avx tbb      17561 ns        15259 ns         1024
mask | 24 |             733760 ns       747681 ns         1024
mask | 24 | avx          28713 ns        15259 ns         1024
mask | 24 |     tbb     141863 ns       106812 ns         1024
mask | 24 | avx tbb      17129 ns        0.000 ns         1024

data | 25 |              94009 ns        91553 ns         1024
data | 25 | avx          30719 ns        30518 ns         1024
data | 25 |     tbb      22365 ns        15259 ns         1024
data | 25 | avx tbb      17702 ns        30518 ns         1024
mask | 25 |             742615 ns       762939 ns         1024
mask | 25 | avx          28902 ns        30518 ns         1024
mask | 25 |     tbb     140221 ns       167847 ns         1024
mask | 25 | avx tbb      17149 ns        61035 ns         1024

data | 26 |              91834 ns        91553 ns         1024
data | 26 | avx          30937 ns        30518 ns         1024
data | 26 |     tbb      22361 ns        15259 ns         1024
data | 26 | avx tbb      17315 ns        15259 ns         1024
mask | 26 |             735592 ns       717163 ns         1024
mask | 26 | avx          28531 ns        30518 ns         1024
mask | 26 |     tbb     139646 ns       152588 ns         1024
mask | 26 | avx tbb      17361 ns        15259 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             167386 ns       244141 ns          512
data |  1 | avx         166214 ns       183105 ns          512
data |  1 |     tbb     171475 ns       152588 ns          512
data |  1 | avx tbb     154530 ns        61035 ns          512
mask |  1 |             166732 ns       213623 ns          512
mask |  1 | avx         166068 ns        61035 ns          512
mask |  1 |     tbb     174415 ns       152588 ns          512
mask |  1 | avx tbb     154087 ns       122070 ns          512

data |  2 |            4507873 ns      4516602 ns          512
data |  2 | avx         207097 ns       183105 ns          512
data |  2 |     tbb     493575 ns       366211 ns          512
data |  2 | avx tbb     157881 ns       122070 ns          512
mask |  2 |            3081023 ns      3082275 ns          512
mask |  2 | avx         197828 ns       183105 ns          512
mask |  2 |     tbb     562533 ns       610352 ns          512
mask |  2 | avx tbb     157448 ns       213623 ns          512

data |  3 |            3008497 ns      3051758 ns          512
data |  3 | avx         209238 ns       183105 ns          512
data |  3 |     tbb     351603 ns       274658 ns          512
data |  3 | avx tbb     158603 ns       183105 ns          512
mask |  3 |            3198285 ns      3265381 ns          512
mask |  3 | avx         201783 ns       213623 ns          512
mask |  3 |     tbb     567356 ns       457764 ns          512
mask |  3 | avx tbb     157688 ns       152588 ns          512

data |  4 |            2280916 ns      2258301 ns          512
data |  4 | avx         209539 ns       244141 ns          512
data |  4 |     tbb     288106 ns       305176 ns          512
data |  4 | avx tbb     158210 ns       152588 ns          512
mask |  4 |            3078314 ns      3082275 ns          512
mask |  4 | avx         202973 ns       274658 ns          512
mask |  4 |     tbb     566860 ns       640869 ns          512
mask |  4 | avx tbb     158462 ns       183105 ns          512

data |  5 |            1812740 ns      1892090 ns          512
data |  5 | avx         208447 ns       183105 ns          512
data |  5 |     tbb     242828 ns       152588 ns          512
data |  5 | avx tbb     158138 ns       152588 ns          512
mask |  5 |            3126524 ns      3173828 ns          512
mask |  5 | avx         199052 ns       213623 ns          512
mask |  5 |     tbb     566986 ns       518799 ns          512
mask |  5 | avx tbb     157675 ns       274658 ns          512

data |  6 |            1518553 ns      1556396 ns          512
data |  6 | avx         207569 ns       122070 ns          512
data |  6 |     tbb     224387 ns       244141 ns          512
data |  6 | avx tbb     158502 ns       305176 ns          512
mask |  6 |            3099223 ns      3082275 ns          512
mask |  6 | avx         196146 ns       213623 ns          512
mask |  6 |     tbb     567918 ns       549316 ns          512
mask |  6 | avx tbb     156827 ns        91553 ns          512

data |  7 |            1314254 ns      1342773 ns          512
data |  7 | avx         209425 ns        61035 ns          512
data |  7 |     tbb     209210 ns       213623 ns          512
data |  7 | avx tbb     158801 ns       183105 ns          512
mask |  7 |            3076442 ns      3082275 ns          512
mask |  7 | avx         200740 ns       244141 ns          512
mask |  7 |     tbb     565706 ns       610352 ns          512
mask |  7 | avx tbb     157292 ns       122070 ns          512

data |  8 |            1153316 ns      1190186 ns          512
data |  8 | avx         214596 ns       122070 ns          512
data |  8 |     tbb     207226 ns       213623 ns          512
data |  8 | avx tbb     159547 ns       152588 ns          512
mask |  8 |            3092645 ns      3204346 ns          512
mask |  8 | avx         196880 ns       183105 ns          512
mask |  8 |     tbb     569105 ns       610352 ns          512
mask |  8 | avx tbb     156841 ns       122070 ns          512

data |  9 |            1017384 ns       976562 ns          512
data |  9 | avx         208764 ns       152588 ns          512
data |  9 |     tbb     204526 ns       274658 ns          512
data |  9 | avx tbb     158350 ns       152588 ns          512
mask |  9 |            3095592 ns      3112793 ns          512
mask |  9 | avx         197471 ns       274658 ns          512
mask |  9 |     tbb     565706 ns       640869 ns          512
mask |  9 | avx tbb     157112 ns       152588 ns          512

data | 10 |             936065 ns       915527 ns          512
data | 10 | avx         206189 ns       213623 ns          512
data | 10 |     tbb     200166 ns       213623 ns          512
data | 10 | avx tbb     157674 ns        91553 ns          512
mask | 10 |            3089067 ns      3082275 ns          512
mask | 10 | avx         199110 ns       183105 ns          512
mask | 10 |     tbb     574712 ns       457764 ns          512
mask | 10 | avx tbb     157883 ns       122070 ns          512

data | 11 |             844213 ns       885010 ns          512
data | 11 | avx         209347 ns       183105 ns          512
data | 11 |     tbb     203604 ns       183105 ns          512
data | 11 | avx tbb     162873 ns       122070 ns          512
mask | 11 |            3208193 ns      3204346 ns          512
mask | 11 | avx         201482 ns       335693 ns          512
mask | 11 |     tbb     565135 ns       518799 ns          512
mask | 11 | avx tbb     156853 ns       183105 ns          512

data | 12 |             776820 ns       732422 ns          512
data | 12 | avx         205280 ns       183105 ns          512
data | 12 |     tbb     194433 ns       244141 ns          512
data | 12 | avx tbb     158924 ns        91553 ns          512
mask | 12 |            3238498 ns      3173828 ns          512
mask | 12 | avx         200922 ns       274658 ns          512
mask | 12 |     tbb     565067 ns       579834 ns          512
mask | 12 | avx tbb     158113 ns       152588 ns          512

data | 13 |             722262 ns       762939 ns          512
data | 13 | avx         206237 ns       183105 ns          512
data | 13 |     tbb     196098 ns       244141 ns          512
data | 13 | avx tbb     159666 ns        91553 ns          512
mask | 13 |            3077861 ns      3051758 ns          512
mask | 13 | avx         197797 ns       213623 ns          512
mask | 13 |     tbb     569950 ns       610352 ns          512
mask | 13 | avx tbb     157207 ns       213623 ns          512

data | 14 |             673901 ns       579834 ns          512
data | 14 | avx         206432 ns       152588 ns          512
data | 14 |     tbb     195906 ns       183105 ns          512
data | 14 | avx tbb     157620 ns       122070 ns          512
mask | 14 |            3097130 ns      3021240 ns          512
mask | 14 | avx         200036 ns       213623 ns          512
mask | 14 |     tbb     564711 ns       610352 ns          512
mask | 14 | avx tbb     157236 ns       122070 ns          512

data | 15 |             633511 ns       640869 ns          512
data | 15 | avx         207472 ns       213623 ns          512
data | 15 |     tbb     195398 ns       274658 ns          512
data | 15 | avx tbb     158696 ns       122070 ns          512
mask | 15 |            3065765 ns      3051758 ns          512
mask | 15 | avx         197288 ns       213623 ns          512
mask | 15 |     tbb     565807 ns       610352 ns          512
mask | 15 | avx tbb     157249 ns       183105 ns          512

data | 16 |             597311 ns       701904 ns          512
data | 16 | avx         207759 ns       213623 ns          512
data | 16 |     tbb     196225 ns       183105 ns          512
data | 16 | avx tbb     158671 ns       122070 ns          512
mask | 16 |            3224197 ns      3204346 ns          512
mask | 16 | avx         202049 ns       152588 ns          512
mask | 16 |     tbb     567169 ns       610352 ns          512
mask | 16 | avx tbb     157025 ns       152588 ns          512

data | 17 |             579691 ns       488281 ns          512
data | 17 | avx         210496 ns       183105 ns          512
data | 17 |     tbb     194779 ns       213623 ns          512
data | 17 | avx tbb     157341 ns       213623 ns          512
mask | 17 |            3088883 ns      3173828 ns          512
mask | 17 | avx         196836 ns       152588 ns          512
mask | 17 |     tbb     564435 ns       549316 ns          512
mask | 17 | avx tbb     157623 ns       122070 ns          512

data | 18 |             533180 ns       610352 ns          512
data | 18 | avx         206073 ns       274658 ns          512
data | 18 |     tbb     190027 ns       213623 ns          512
data | 18 | avx tbb     159507 ns        61035 ns          512
mask | 18 |            3070673 ns      3173828 ns          512
mask | 18 | avx         199731 ns       213623 ns          512
mask | 18 |     tbb     567663 ns       549316 ns          512
mask | 18 | avx tbb     157228 ns        61035 ns          512

data | 19 |             504108 ns       457764 ns          512
data | 19 | avx         205412 ns       213623 ns          512
data | 19 |     tbb     191137 ns       152588 ns          512
data | 19 | avx tbb     160226 ns       152588 ns          512
mask | 19 |            3091127 ns      3051758 ns          512
mask | 19 | avx         198487 ns       213623 ns          512
mask | 19 |     tbb     568751 ns       518799 ns          512
mask | 19 | avx tbb     157546 ns       122070 ns          512

data | 20 |             482012 ns       549316 ns          512
data | 20 | avx         209720 ns       244141 ns          512
data | 20 |     tbb     194707 ns       183105 ns          512
data | 20 | avx tbb     158717 ns       183105 ns          512
mask | 20 |            3076221 ns      3173828 ns          512
mask | 20 | avx         200034 ns       244141 ns          512
mask | 20 |     tbb     572203 ns       671387 ns          512
mask | 20 | avx tbb     157842 ns       244141 ns          512

data | 21 |             459640 ns       457764 ns          512
data | 21 | avx         206276 ns       152588 ns          512
data | 21 |     tbb     193344 ns       122070 ns          512
data | 21 | avx tbb     158335 ns       122070 ns          512
mask | 21 |            3197365 ns      3234863 ns          512
mask | 21 | avx         202797 ns       183105 ns          512
mask | 21 |     tbb     566606 ns       671387 ns          512
mask | 21 | avx tbb     157552 ns       152588 ns          512

data | 22 |             441466 ns       427246 ns          512
data | 22 | avx         207346 ns       213623 ns          512
data | 22 |     tbb     189555 ns       152588 ns          512
data | 22 | avx tbb     159054 ns       152588 ns          512
mask | 22 |            3092815 ns      2990723 ns          512
mask | 22 | avx         196397 ns       274658 ns          512
mask | 22 |     tbb     571545 ns       610352 ns          512
mask | 22 | avx tbb     157754 ns       122070 ns          512

data | 23 |             427694 ns       427246 ns          512
data | 23 | avx         206423 ns       213623 ns          512
data | 23 |     tbb     192515 ns       152588 ns          512
data | 23 | avx tbb     159371 ns       152588 ns          512
mask | 23 |            3085011 ns      3082275 ns          512
mask | 23 | avx         198471 ns       152588 ns          512
mask | 23 |     tbb     567615 ns       488281 ns          512
mask | 23 | avx tbb     157640 ns       183105 ns          512

data | 24 |             414475 ns       396729 ns          512
data | 24 | avx         204384 ns       213623 ns          512
data | 24 |     tbb     188058 ns       152588 ns          512
data | 24 | avx tbb     160845 ns       122070 ns          512
mask | 24 |            3068444 ns      3051758 ns          512
mask | 24 | avx         199712 ns       213623 ns          512
mask | 24 |     tbb     568927 ns       579834 ns          512
mask | 24 | avx tbb     157422 ns       183105 ns          512

data | 25 |             406807 ns       457764 ns          512
data | 25 | avx         208693 ns       244141 ns          512
data | 25 |     tbb     188181 ns       152588 ns          512
data | 25 | avx tbb     158437 ns        91553 ns          512
mask | 25 |            3081655 ns      3051758 ns          512
mask | 25 | avx         197534 ns       183105 ns          512
mask | 25 |     tbb     568539 ns       488281 ns          512
mask | 25 | avx tbb     157682 ns       183105 ns          512

data | 26 |             390129 ns       518799 ns          512
data | 26 | avx         205743 ns       213623 ns          512
data | 26 |     tbb     190648 ns       183105 ns          512
data | 26 | avx tbb     159533 ns       213623 ns          512
mask | 26 |            3087038 ns      3143311 ns          512
mask | 26 | avx         197394 ns       183105 ns          512
mask | 26 |     tbb     565309 ns       640869 ns          512
mask | 26 | avx tbb     158173 ns       152588 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             676014 ns      1220703 ns           64
data |  1 | avx         668089 ns       976562 ns           64
data |  1 |     tbb     626322 ns       976562 ns           64
data |  1 | avx tbb     614967 ns       488281 ns           64
mask |  1 |             696586 ns       732422 ns           64
mask |  1 | avx         662502 ns      1220703 ns           64
mask |  1 |     tbb     633284 ns      1220703 ns           64
mask |  1 | avx tbb     613591 ns       732422 ns           64

data |  2 |           18116766 ns     17822266 ns           64
data |  2 | avx         854919 ns       976562 ns           64
data |  2 |     tbb    1866645 ns      1464844 ns           64
data |  2 | avx tbb     628833 ns      1220703 ns           64
mask |  2 |           12859284 ns     12939453 ns           64
mask |  2 | avx         811888 ns      1464844 ns           64
mask |  2 |     tbb    2130995 ns      1708984 ns           64
mask |  2 | avx tbb     604005 ns        0.000 ns           64

data |  3 |           12133445 ns     12207031 ns           64
data |  3 | avx         838250 ns       732422 ns           64
data |  3 |     tbb    1279266 ns       976562 ns           64
data |  3 | avx tbb     626747 ns        0.000 ns           64
mask |  3 |           12413187 ns     12207031 ns           64
mask |  3 | avx         807622 ns      1220703 ns           64
mask |  3 |     tbb    2125522 ns      2685547 ns           64
mask |  3 | avx tbb     609239 ns       976562 ns           64

data |  4 |            9125733 ns      8300781 ns           64
data |  4 | avx         865847 ns       488281 ns           64
data |  4 |     tbb    1012047 ns       732422 ns           64
data |  4 | avx tbb     627845 ns       976562 ns           64
mask |  4 |           12470603 ns     13183594 ns           64
mask |  4 | avx         799678 ns       732422 ns           64
mask |  4 |     tbb    2111203 ns      1220703 ns           64
mask |  4 | avx tbb     608778 ns       488281 ns           64

data |  5 |            7325620 ns      7080078 ns           64
data |  5 | avx         838503 ns       976562 ns           64
data |  5 |     tbb     827544 ns       732422 ns           64
data |  5 | avx tbb     627325 ns       488281 ns           64
mask |  5 |           12685014 ns     13183594 ns           64
mask |  5 | avx         798903 ns       732422 ns           64
mask |  5 |     tbb    2130950 ns      2685547 ns           64
mask |  5 | avx tbb     593072 ns       488281 ns           64

data |  6 |            6051536 ns      6591797 ns           64
data |  6 | avx         841083 ns       244141 ns           64
data |  6 |     tbb     757083 ns       488281 ns           64
data |  6 | avx tbb     635858 ns       488281 ns           64
mask |  6 |           12261870 ns     12451172 ns           64
mask |  6 | avx         816397 ns       732422 ns           64
mask |  6 |     tbb    2121225 ns      1953125 ns           64
mask |  6 | avx tbb     592694 ns       732422 ns           64

data |  7 |            5219372 ns      4638672 ns           64
data |  7 | avx         857511 ns       976562 ns           64
data |  7 |     tbb     723516 ns       732422 ns           64
data |  7 | avx tbb     629969 ns       732422 ns           64
mask |  7 |           12540097 ns     12451172 ns           64
mask |  7 | avx         801000 ns       244141 ns           64
mask |  7 |     tbb    2149167 ns      1220703 ns           64
mask |  7 | avx tbb     602195 ns       732422 ns           64

data |  8 |            4659445 ns      4394531 ns           64
data |  8 | avx         838447 ns      1220703 ns           64
data |  8 |     tbb     707545 ns       976562 ns           64
data |  8 | avx tbb     631900 ns       488281 ns           64
mask |  8 |           12672869 ns     12695312 ns           64
mask |  8 | avx         799456 ns      1464844 ns           64
mask |  8 |     tbb    2125798 ns      2685547 ns           64
mask |  8 | avx tbb     593464 ns       732422 ns           64

data |  9 |            4125695 ns      3173828 ns           64
data |  9 | avx         848037 ns       976562 ns           64
data |  9 |     tbb     699870 ns       732422 ns           64
data |  9 | avx tbb     630389 ns       732422 ns           64
mask |  9 |           12532897 ns     12451172 ns           64
mask |  9 | avx         803156 ns      1220703 ns           64
mask |  9 |     tbb    2128766 ns      2441406 ns           64
mask |  9 | avx tbb     603155 ns       488281 ns           64

data | 10 |            3679731 ns      3662109 ns           64
data | 10 | avx         837736 ns       976562 ns           64
data | 10 |     tbb     693898 ns       488281 ns           64
data | 10 | avx tbb     633117 ns       488281 ns           64
mask | 10 |           12602583 ns     12695312 ns           64
mask | 10 | avx         796520 ns       976562 ns           64
mask | 10 |     tbb    2129773 ns      1464844 ns           64
mask | 10 | avx tbb     607425 ns        0.000 ns           64

data | 11 |            3444208 ns      3662109 ns           64
data | 11 | avx         852080 ns       244141 ns           64
data | 11 |     tbb     682094 ns       732422 ns           64
data | 11 | avx tbb     628230 ns       976562 ns           64
mask | 11 |           12356047 ns     12207031 ns           64
mask | 11 | avx         801669 ns       488281 ns           64
mask | 11 |     tbb    2141386 ns      2197266 ns           64
mask | 11 | avx tbb     602441 ns       732422 ns           64

data | 12 |            3150261 ns      2685547 ns           64
data | 12 | avx         841909 ns       976562 ns           64
data | 12 |     tbb     688005 ns       976562 ns           64
data | 12 | avx tbb     632152 ns       732422 ns           64
mask | 12 |           12898978 ns     12451172 ns           64
mask | 12 | avx         799163 ns       976562 ns           64
mask | 12 |     tbb    2121708 ns      2441406 ns           64
mask | 12 | avx tbb     603161 ns       488281 ns           64

data | 13 |            2932947 ns      2929688 ns           64
data | 13 | avx         851258 ns       976562 ns           64
data | 13 |     tbb     691956 ns       732422 ns           64
data | 13 | avx tbb     637447 ns       732422 ns           64
mask | 13 |           12578334 ns     12695312 ns           64
mask | 13 | avx         797367 ns       488281 ns           64
mask | 13 |     tbb    2135838 ns      2441406 ns           64
mask | 13 | avx tbb     608388 ns       488281 ns           64

data | 14 |            2723780 ns      1953125 ns           64
data | 14 | avx         844509 ns       732422 ns           64
data | 14 |     tbb     687698 ns       732422 ns           64
data | 14 | avx tbb     641345 ns       976562 ns           64
mask | 14 |           12592727 ns     13183594 ns           64
mask | 14 | avx         816894 ns       244141 ns           64
mask | 14 |     tbb    2121992 ns      2197266 ns           64
mask | 14 | avx tbb     592222 ns       732422 ns           64

data | 15 |            2536709 ns      2197266 ns           64
data | 15 | avx         844841 ns       976562 ns           64
data | 15 |     tbb     676414 ns       732422 ns           64
data | 15 | avx tbb     639016 ns       244141 ns           64
mask | 15 |           12464138 ns     12695312 ns           64
mask | 15 | avx         815755 ns       244141 ns           64
mask | 15 |     tbb    2118600 ns      1953125 ns           64
mask | 15 | avx tbb     594181 ns       732422 ns           64

data | 16 |            2370402 ns      2197266 ns           64
data | 16 | avx         865297 ns       732422 ns           64
data | 16 |     tbb     688353 ns       732422 ns           64
data | 16 | avx tbb     632839 ns       244141 ns           64
mask | 16 |           12328116 ns     12207031 ns           64
mask | 16 | avx         806255 ns       732422 ns           64
mask | 16 |     tbb    2119084 ns      2441406 ns           64
mask | 16 | avx tbb     593689 ns       244141 ns           64

data | 17 |            2206884 ns      2197266 ns           64
data | 17 | avx         857861 ns       732422 ns           64
data | 17 |     tbb     673698 ns       488281 ns           64
data | 17 | avx tbb     629484 ns       732422 ns           64
mask | 17 |           12571369 ns     12939453 ns           64
mask | 17 | avx         792092 ns      1220703 ns           64
mask | 17 |     tbb    2124039 ns      2685547 ns           64
mask | 17 | avx tbb     624155 ns      1220703 ns           64

data | 18 |            2153783 ns      2197266 ns           64
data | 18 | avx         846794 ns       976562 ns           64
data | 18 |     tbb     688773 ns       732422 ns           64
data | 18 | avx tbb     628253 ns       488281 ns           64
mask | 18 |           12535114 ns     12939453 ns           64
mask | 18 | avx         809831 ns       488281 ns           64
mask | 18 |     tbb    2128941 ns      2441406 ns           64
mask | 18 | avx tbb     596389 ns       488281 ns           64

data | 19 |            1997816 ns      1708984 ns           64
data | 19 | avx         841419 ns       732422 ns           64
data | 19 |     tbb     685694 ns       244141 ns           64
data | 19 | avx tbb     630573 ns       244141 ns           64
mask | 19 |           12936923 ns     11962891 ns           64
mask | 19 | avx         798922 ns       732422 ns           64
mask | 19 |     tbb    2131309 ns      1220703 ns           64
mask | 19 | avx tbb     605914 ns       732422 ns           64

data | 20 |            1966947 ns      2441406 ns           64
data | 20 | avx         839767 ns      1220703 ns           64
data | 20 |     tbb     669942 ns       488281 ns           64
data | 20 | avx tbb     634792 ns      1220703 ns           64
mask | 20 |           12561017 ns     12451172 ns           64
mask | 20 | avx         797261 ns       732422 ns           64
mask | 20 |     tbb    2129994 ns      2929688 ns           64
mask | 20 | avx tbb     616125 ns       976562 ns           64

data | 21 |            1875023 ns      2197266 ns           64
data | 21 | avx         839927 ns      1220703 ns           64
data | 21 |     tbb     677861 ns       732422 ns           64
data | 21 | avx tbb     631623 ns       976562 ns           64
mask | 21 |           12598591 ns     13183594 ns           64
mask | 21 | avx         800225 ns       732422 ns           64
mask | 21 |     tbb    2109634 ns      1708984 ns           64
mask | 21 | avx tbb     612603 ns       732422 ns           64

data | 22 |            1788155 ns      2197266 ns           64
data | 22 | avx         880178 ns       976562 ns           64
data | 22 |     tbb     672642 ns       488281 ns           64
data | 22 | avx tbb     632862 ns       244141 ns           64
mask | 22 |           12491028 ns     12451172 ns           64
mask | 22 | avx         806781 ns       976562 ns           64
mask | 22 |     tbb    2123939 ns      2441406 ns           64
mask | 22 | avx tbb     607755 ns       488281 ns           64

data | 23 |            1795198 ns      1464844 ns           64
data | 23 | avx         833073 ns       244141 ns           64
data | 23 |     tbb     660380 ns       244141 ns           64
data | 23 | avx tbb     628800 ns       244141 ns           64
mask | 23 |           12798425 ns     13671875 ns           64
mask | 23 | avx         792692 ns      1220703 ns           64
mask | 23 |     tbb    2123705 ns      2197266 ns           64
mask | 23 | avx tbb     594177 ns       488281 ns           64

data | 24 |            1676284 ns      2197266 ns           64
data | 24 | avx         836213 ns       488281 ns           64
data | 24 |     tbb     674969 ns       244141 ns           64
data | 24 | avx tbb     632017 ns       732422 ns           64
mask | 24 |           12443019 ns     12451172 ns           64
mask | 24 | avx         797228 ns       732422 ns           64
mask | 24 |     tbb    2126917 ns      1953125 ns           64
mask | 24 | avx tbb     611008 ns       732422 ns           64

data | 25 |            1644423 ns      1220703 ns           64
data | 25 | avx         852606 ns       488281 ns           64
data | 25 |     tbb     677702 ns       732422 ns           64
data | 25 | avx tbb     632939 ns       488281 ns           64
mask | 25 |           12476925 ns     11962891 ns           64
mask | 25 | avx         805844 ns       488281 ns           64
mask | 25 |     tbb    2136517 ns      1953125 ns           64
mask | 25 | avx tbb     624352 ns       488281 ns           64

data | 26 |            1595430 ns      1953125 ns           64
data | 26 | avx         843920 ns       488281 ns           64
data | 26 |     tbb     673320 ns       732422 ns           64
data | 26 | avx tbb     629711 ns       976562 ns           64
mask | 26 |           12515659 ns     11718750 ns           64
mask | 26 | avx         795517 ns       976562 ns           64
mask | 26 |     tbb    2146308 ns      1464844 ns           64
mask | 26 | avx tbb     604513 ns       732422 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            2647269 ns      1953125 ns           32
data |  1 | avx        2638853 ns      4882812 ns           32
data |  1 |     tbb    2345509 ns      2929688 ns           32
data |  1 | avx tbb    2342250 ns      1953125 ns           32
mask |  1 |            2670053 ns      1953125 ns           32
mask |  1 | avx        2825178 ns      3906250 ns           32
mask |  1 |     tbb    2343231 ns      2441406 ns           32
mask |  1 | avx tbb    2354253 ns      1953125 ns           32

data |  2 |           71821647 ns     72265625 ns           32
data |  2 | avx        3369188 ns      2929688 ns           32
data |  2 |     tbb    7026428 ns      6347656 ns           32
data |  2 | avx tbb    2352031 ns      1464844 ns           32
mask |  2 |           49754231 ns     51269531 ns           32
mask |  2 | avx        3149606 ns      6347656 ns           32
mask |  2 |     tbb    8233062 ns      8300781 ns           32
mask |  2 | avx tbb    2425809 ns      2929688 ns           32

data |  3 |           47973316 ns     48828125 ns           32
data |  3 | avx        3433525 ns      5371094 ns           32
data |  3 |     tbb    4719931 ns      5371094 ns           32
data |  3 | avx tbb    2382472 ns      2929688 ns           32
mask |  3 |           49798597 ns     49316406 ns           32
mask |  3 | avx        3169037 ns      4394531 ns           32
mask |  3 |     tbb    8189216 ns      9277344 ns           32
mask |  3 | avx tbb    2361856 ns      1464844 ns           32

data |  4 |           36123700 ns     35644531 ns           32
data |  4 | avx        3437497 ns      4882812 ns           32
data |  4 |     tbb    3618469 ns      3417969 ns           32
data |  4 | avx tbb    2374172 ns      1464844 ns           32
mask |  4 |           49744209 ns     48828125 ns           32
mask |  4 | avx        3152122 ns        0.000 ns           32
mask |  4 |     tbb    8293566 ns      7812500 ns           32
mask |  4 | avx tbb    2353666 ns      1953125 ns           32

data |  5 |           28916397 ns     28320312 ns           32
data |  5 | avx        3354237 ns      2929688 ns           32
data |  5 |     tbb    2975803 ns      6347656 ns           32
data |  5 | avx tbb    2367484 ns      3417969 ns           32
mask |  5 |           48747403 ns     49316406 ns           32
mask |  5 | avx        3225653 ns      4394531 ns           32
mask |  5 |     tbb    8188838 ns      7812500 ns           32
mask |  5 | avx tbb    2361788 ns      1953125 ns           32

data |  6 |           24267619 ns     23437500 ns           32
data |  6 | avx        3414063 ns      3417969 ns           32
data |  6 |     tbb    2677109 ns      2929688 ns           32
data |  6 | avx tbb    2373541 ns      3417969 ns           32
mask |  6 |           51966006 ns     50781250 ns           32
mask |  6 | avx        3297000 ns      4882812 ns           32
mask |  6 |     tbb    8368956 ns      7324219 ns           32
mask |  6 | avx tbb    2360669 ns      2441406 ns           32

data |  7 |           21094409 ns     21484375 ns           32
data |  7 | avx        3319175 ns      4882812 ns           32
data |  7 |     tbb    2563588 ns      3417969 ns           32
data |  7 | avx tbb    2358688 ns      1953125 ns           32
mask |  7 |           50832406 ns     51757812 ns           32
mask |  7 | avx        3190822 ns       488281 ns           32
mask |  7 |     tbb    8164931 ns      8300781 ns           32
mask |  7 | avx tbb    2359672 ns      1953125 ns           32

data |  8 |           18283741 ns     19042969 ns           32
data |  8 | avx        3315003 ns      3906250 ns           32
data |  8 |     tbb    2523888 ns      1953125 ns           32
data |  8 | avx tbb    2362147 ns      2441406 ns           32
mask |  8 |           49200488 ns     49316406 ns           32
mask |  8 | avx        3251475 ns      2441406 ns           32
mask |  8 |     tbb    8224472 ns      8789062 ns           32
mask |  8 | avx tbb    2360025 ns      2441406 ns           32

data |  9 |           16196978 ns     16601562 ns           32
data |  9 | avx        3411994 ns      3417969 ns           32
data |  9 |     tbb    2593475 ns      2441406 ns           32
data |  9 | avx tbb    2363081 ns      2441406 ns           32
mask |  9 |           48757591 ns     49804688 ns           32
mask |  9 | avx        3192300 ns      2929688 ns           32
mask |  9 |     tbb    8235087 ns      8300781 ns           32
mask |  9 | avx tbb    2359503 ns      2929688 ns           32

data | 10 |           14653094 ns     14648438 ns           32
data | 10 | avx        3495359 ns      3417969 ns           32
data | 10 |     tbb    2493163 ns      2441406 ns           32
data | 10 | avx tbb    2362222 ns      1953125 ns           32
mask | 10 |           52136856 ns     52734375 ns           32
mask | 10 | avx        3223100 ns      4394531 ns           32
mask | 10 |     tbb    8233341 ns      8789062 ns           32
mask | 10 | avx tbb    2362175 ns      2441406 ns           32

data | 11 |           13481866 ns     13183594 ns           32
data | 11 | avx        3312644 ns      3417969 ns           32
data | 11 |     tbb    2471722 ns      3417969 ns           32
data | 11 | avx tbb    2372494 ns      2929688 ns           32
mask | 11 |           49573472 ns     51757812 ns           32
mask | 11 | avx        3194341 ns      1464844 ns           32
mask | 11 |     tbb    8348684 ns      7324219 ns           32
mask | 11 | avx tbb    2356247 ns      2929688 ns           32

data | 12 |           12308537 ns     12207031 ns           32
data | 12 | avx        3339022 ns      3906250 ns           32
data | 12 |     tbb    2471362 ns      1953125 ns           32
data | 12 | avx tbb    2403463 ns      2929688 ns           32
mask | 12 |           48575619 ns     48828125 ns           32
mask | 12 | avx        3197225 ns      5371094 ns           32
mask | 12 |     tbb    8311772 ns      8300781 ns           32
mask | 12 | avx tbb    2356584 ns      2929688 ns           32

data | 13 |           12069097 ns     12207031 ns           32
data | 13 | avx        3338503 ns      2441406 ns           32
data | 13 |     tbb    2461369 ns      2441406 ns           32
data | 13 | avx tbb    2368062 ns      2441406 ns           32
mask | 13 |           49731103 ns     51757812 ns           32
mask | 13 | avx        3141559 ns      4394531 ns           32
mask | 13 |     tbb    8178603 ns      8300781 ns           32
mask | 13 | avx tbb    2366572 ns      2441406 ns           32

data | 14 |           10667116 ns      6347656 ns           32
data | 14 | avx        3328588 ns      4882812 ns           32
data | 14 |     tbb    2469813 ns      2441406 ns           32
data | 14 | avx tbb    2368381 ns       976562 ns           32
mask | 14 |           48987006 ns     48828125 ns           32
mask | 14 | avx        3210387 ns      2929688 ns           32
mask | 14 |     tbb    8182797 ns      8300781 ns           32
mask | 14 | avx tbb    2361725 ns      2441406 ns           32

data | 15 |           10048409 ns     10742188 ns           32
data | 15 | avx        3419984 ns      3417969 ns           32
data | 15 |     tbb    2487912 ns      3417969 ns           32
data | 15 | avx tbb    2364031 ns      1953125 ns           32
mask | 15 |           49643256 ns     50781250 ns           32
mask | 15 | avx        3174000 ns      3417969 ns           32
mask | 15 |     tbb    8268962 ns      7812500 ns           32
mask | 15 | avx tbb    2355206 ns      1464844 ns           32

data | 16 |            9415569 ns     10742188 ns           32
data | 16 | avx        3500875 ns      3906250 ns           32
data | 16 |     tbb    2475041 ns      2929688 ns           32
data | 16 | avx tbb    2365450 ns      1464844 ns           32
mask | 16 |           49304362 ns     48339844 ns           32
mask | 16 | avx        3186316 ns      1464844 ns           32
mask | 16 |     tbb    8213759 ns      7812500 ns           32
mask | 16 | avx tbb    2356831 ns      1464844 ns           32

data | 17 |            8810013 ns      8789062 ns           32
data | 17 | avx        3433163 ns      3417969 ns           32
data | 17 |     tbb    2466866 ns      3906250 ns           32
data | 17 | avx tbb    2379400 ns      2441406 ns           32
mask | 17 |           48616091 ns     48339844 ns           32
mask | 17 | avx        3193969 ns      4394531 ns           32
mask | 17 |     tbb    8242872 ns      8300781 ns           32
mask | 17 | avx tbb    2361550 ns      1464844 ns           32

data | 18 |            8489669 ns      9277344 ns           32
data | 18 | avx        3333919 ns      2441406 ns           32
data | 18 |     tbb    2459350 ns      1953125 ns           32
data | 18 | avx tbb    2378769 ns      1953125 ns           32
mask | 18 |           49420997 ns     49316406 ns           32
mask | 18 | avx        3196016 ns      2929688 ns           32
mask | 18 |     tbb    8199019 ns      7812500 ns           32
mask | 18 | avx tbb    2362681 ns      1464844 ns           32

data | 19 |            8152900 ns      7812500 ns           32
data | 19 | avx        3338628 ns      2441406 ns           32
data | 19 |     tbb    2463834 ns      1953125 ns           32
data | 19 | avx tbb    2367397 ns      2929688 ns           32
mask | 19 |           50288078 ns     52246094 ns           32
mask | 19 | avx        3165006 ns      1953125 ns           32
mask | 19 |     tbb    8249922 ns      8300781 ns           32
mask | 19 | avx tbb    2355937 ns      1953125 ns           32

data | 20 |            7798919 ns      9277344 ns           32
data | 20 | avx        3450181 ns      2929688 ns           32
data | 20 |     tbb    2450303 ns      2441406 ns           32
data | 20 | avx tbb    2355053 ns      2929688 ns           32
mask | 20 |           49518112 ns     51269531 ns           32
mask | 20 | avx        3179850 ns      3906250 ns           32
mask | 20 |     tbb    8239972 ns      7812500 ns           32
mask | 20 | avx tbb    2358934 ns      1953125 ns           32

data | 21 |            7551456 ns      6835938 ns           32
data | 21 | avx        3415350 ns      3906250 ns           32
data | 21 |     tbb    2449253 ns      2441406 ns           32
data | 21 | avx tbb    2373231 ns      2441406 ns           32
mask | 21 |           48629541 ns     49316406 ns           32
mask | 21 | avx        3242234 ns      3906250 ns           32
mask | 21 |     tbb    8300538 ns      7324219 ns           32
mask | 21 | avx tbb    2355522 ns      2441406 ns           32

data | 22 |            7161366 ns      5371094 ns           32
data | 22 | avx        3409419 ns      2929688 ns           32
data | 22 |     tbb    2439256 ns      1953125 ns           32
data | 22 | avx tbb    2376356 ns      2441406 ns           32
mask | 22 |           51977419 ns     52246094 ns           32
mask | 22 | avx        3248569 ns       976562 ns           32
mask | 22 |     tbb    8258141 ns      7812500 ns           32
mask | 22 | avx tbb    2359503 ns      2441406 ns           32

data | 23 |            6957369 ns      6835938 ns           32
data | 23 | avx        3351797 ns      3417969 ns           32
data | 23 |     tbb    2442316 ns      1953125 ns           32
data | 23 | avx tbb    2368678 ns      2929688 ns           32
mask | 23 |           48455413 ns     49316406 ns           32
mask | 23 | avx        3196775 ns      1953125 ns           32
mask | 23 |     tbb    8259466 ns      8300781 ns           32
mask | 23 | avx tbb    2356513 ns      2441406 ns           32

data | 24 |            6714938 ns      6347656 ns           32
data | 24 | avx        3401644 ns      2929688 ns           32
data | 24 |     tbb    2431788 ns      1464844 ns           32
data | 24 | avx tbb    2368712 ns      2441406 ns           32
mask | 24 |           49476181 ns     47363281 ns           32
mask | 24 | avx        3172012 ns      1464844 ns           32
mask | 24 |     tbb    8276181 ns      9277344 ns           32
mask | 24 | avx tbb    2363019 ns      2441406 ns           32

data | 25 |            6574247 ns      5859375 ns           32
data | 25 | avx        3384922 ns      3906250 ns           32
data | 25 |     tbb    2426344 ns      2441406 ns           32
data | 25 | avx tbb    2360600 ns      2441406 ns           32
mask | 25 |           49636547 ns     48339844 ns           32
mask | 25 | avx        3189994 ns      5371094 ns           32
mask | 25 |     tbb    8269928 ns      8789062 ns           32
mask | 25 | avx tbb    2361612 ns      1953125 ns           32

data | 26 |            6145875 ns      5859375 ns           32
data | 26 | avx        3334372 ns      3906250 ns           32
data | 26 |     tbb    2436981 ns      2441406 ns           32
data | 26 | avx tbb    2436734 ns      1464844 ns           32
mask | 26 |           50125037 ns     49316406 ns           32
mask | 26 | avx        3153653 ns      5371094 ns           32
mask | 26 |     tbb    8226372 ns      7812500 ns           32
mask | 26 | avx tbb    2367897 ns      2929688 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           10696556 ns     12695312 ns           16
data |  1 | avx       10691631 ns      4882812 ns           16
data |  1 |     tbb    9199806 ns      8789062 ns           16
data |  1 | avx tbb    9248025 ns      9765625 ns           16
mask |  1 |           10581381 ns      4882812 ns           16
mask |  1 | avx       11496650 ns     14648438 ns           16
mask |  1 |     tbb    9219194 ns      9765625 ns           16
mask |  1 | avx tbb    9241537 ns      9765625 ns           16

data |  2 |          287779481 ns    287109375 ns           16
data |  2 | avx       13755269 ns     13671875 ns           16
data |  2 |     tbb   27934769 ns     27343750 ns           16
data |  2 | avx tbb    9269894 ns      9765625 ns           16
mask |  2 |          198497937 ns    202148438 ns           16
mask |  2 | avx       13076487 ns     10742188 ns           16
mask |  2 |     tbb   32691775 ns     33203125 ns           16
mask |  2 | avx tbb    9286469 ns      7812500 ns           16

data |  3 |          192051175 ns    192382812 ns           16
data |  3 | avx       13786150 ns     14648438 ns           16
data |  3 |     tbb   18643731 ns     20507812 ns           16
data |  3 | avx tbb    9287612 ns      8789062 ns           16
mask |  3 |          199983113 ns    200195312 ns           16
mask |  3 | avx       12821419 ns     11718750 ns           16
mask |  3 |     tbb   32725988 ns     33203125 ns           16
mask |  3 | avx tbb    9322256 ns      9765625 ns           16

data |  4 |          144281787 ns    141601562 ns           16
data |  4 | avx       13299306 ns     13671875 ns           16
data |  4 |     tbb   14118325 ns     13671875 ns           16
data |  4 | avx tbb    9280862 ns      8789062 ns           16
mask |  4 |          195878281 ns    194335938 ns           16
mask |  4 | avx       12828588 ns     14648438 ns           16
mask |  4 |     tbb   32465881 ns     32226562 ns           16
mask |  4 | avx tbb    9285950 ns      9765625 ns           16

data |  5 |          115988712 ns    118164062 ns           16
data |  5 | avx       13647050 ns     12695312 ns           16
data |  5 |     tbb   11393494 ns      9765625 ns           16
data |  5 | avx tbb    9284912 ns      8789062 ns           16
mask |  5 |          207099144 ns    205078125 ns           16
mask |  5 | avx       12796431 ns     14648438 ns           16
mask |  5 |     tbb   32720281 ns     33203125 ns           16
mask |  5 | avx tbb    9286144 ns      8789062 ns           16

data |  6 |           96839925 ns     96679688 ns           16
data |  6 | avx       13578975 ns     13671875 ns           16
data |  6 |     tbb   10155769 ns      9765625 ns           16
data |  6 | avx tbb    9280100 ns      8789062 ns           16
mask |  6 |          194199869 ns    192382812 ns           16
mask |  6 | avx       12787625 ns     13671875 ns           16
mask |  6 |     tbb   32566863 ns     31250000 ns           16
mask |  6 | avx tbb    9319100 ns     10742188 ns           16

data |  7 |           83615044 ns     83984375 ns           16
data |  7 | avx       13420450 ns     14648438 ns           16
data |  7 |     tbb   10423056 ns      7812500 ns           16
data |  7 | avx tbb    9284344 ns      8789062 ns           16
mask |  7 |          201759869 ns    200195312 ns           16
mask |  7 | avx       12847494 ns     14648438 ns           16
mask |  7 |     tbb   32450319 ns     30273438 ns           16
mask |  7 | avx tbb    9286000 ns      9765625 ns           16

data |  8 |           73427300 ns     73242188 ns           16
data |  8 | avx       13702356 ns     13671875 ns           16
data |  8 |     tbb    9668762 ns     10742188 ns           16
data |  8 | avx tbb    9302537 ns      8789062 ns           16
mask |  8 |          199558000 ns    200195312 ns           16
mask |  8 | avx       12756087 ns     12695312 ns           16
mask |  8 |     tbb   32383594 ns     32226562 ns           16
mask |  8 | avx tbb    9286281 ns     11718750 ns           16

data |  9 |           64730513 ns     65429688 ns           16
data |  9 | avx       13710581 ns     13671875 ns           16
data |  9 |     tbb    9518250 ns     10742188 ns           16
data |  9 | avx tbb    9340806 ns      5859375 ns           16
mask |  9 |          193538112 ns    192382812 ns           16
mask |  9 | avx       12818094 ns     12695312 ns           16
mask |  9 |     tbb   32684019 ns     31250000 ns           16
mask |  9 | avx tbb    9279744 ns     12695312 ns           16

data | 10 |           58578038 ns     61523438 ns           16
data | 10 | avx       13376425 ns     11718750 ns           16
data | 10 |     tbb    9542500 ns      8789062 ns           16
data | 10 | avx tbb    9291450 ns      8789062 ns           16
mask | 10 |          196827444 ns    197265625 ns           16
mask | 10 | avx       12790663 ns     11718750 ns           16
mask | 10 |     tbb   32397950 ns     32226562 ns           16
mask | 10 | avx tbb    9301037 ns     10742188 ns           16

data | 11 |           53785169 ns     52734375 ns           16
data | 11 | avx       13345737 ns     13671875 ns           16
data | 11 |     tbb    9606087 ns      8789062 ns           16
data | 11 | avx tbb    9844750 ns      6835938 ns           16
mask | 11 |          201091869 ns    201171875 ns           16
mask | 11 | avx       12665744 ns     12695312 ns           16
mask | 11 |     tbb   32670075 ns     32226562 ns           16
mask | 11 | avx tbb    9295025 ns      9765625 ns           16

data | 12 |           49546650 ns     48828125 ns           16
data | 12 | avx       13718338 ns     15625000 ns           16
data | 12 |     tbb    9588919 ns     10742188 ns           16
data | 12 | avx tbb    9274356 ns      7812500 ns           16
mask | 12 |          205602331 ns    203125000 ns           16
mask | 12 | avx       12763569 ns     13671875 ns           16
mask | 12 |     tbb   32438862 ns     31250000 ns           16
mask | 12 | avx tbb    9288113 ns      8789062 ns           16

data | 13 |           46152737 ns     46875000 ns           16
data | 13 | avx       13779356 ns     12695312 ns           16
data | 13 |     tbb    9657875 ns      8789062 ns           16
data | 13 | avx tbb    9293844 ns     10742188 ns           16
mask | 13 |          199182894 ns    202148438 ns           16
mask | 13 | avx       12616944 ns     12695312 ns           16
mask | 13 |     tbb   32573944 ns     32226562 ns           16
mask | 13 | avx tbb    9297144 ns      9765625 ns           16

data | 14 |           43512638 ns     40039062 ns           16
data | 14 | avx       13734556 ns     13671875 ns           16
data | 14 |     tbb    9580531 ns     10742188 ns           16
data | 14 | avx tbb    9296738 ns      9765625 ns           16
mask | 14 |          193377656 ns    193359375 ns           16
mask | 14 | avx       12801700 ns     11718750 ns           16
mask | 14 |     tbb   32679869 ns     32226562 ns           16
mask | 14 | avx tbb    9285381 ns      8789062 ns           16

data | 15 |           40609469 ns     41015625 ns           16
data | 15 | avx       14344238 ns     15625000 ns           16
data | 15 |     tbb    9522087 ns      8789062 ns           16
data | 15 | avx tbb    9290113 ns     10742188 ns           16
mask | 15 |          208963975 ns    208007812 ns           16
mask | 15 | avx       12839281 ns     13671875 ns           16
mask | 15 |     tbb   32701325 ns     30273438 ns           16
mask | 15 | avx tbb    9279050 ns      7812500 ns           16

data | 16 |           37869606 ns     37109375 ns           16
data | 16 | avx       13593869 ns     13671875 ns           16
data | 16 |     tbb    9488269 ns      9765625 ns           16
data | 16 | avx tbb    9286550 ns      9765625 ns           16
mask | 16 |          206754975 ns    205078125 ns           16
mask | 16 | avx       12822288 ns     14648438 ns           16
mask | 16 |     tbb   32734662 ns     30273438 ns           16
mask | 16 | avx tbb    9293381 ns      7812500 ns           16

data | 17 |           35173288 ns     34179688 ns           16
data | 17 | avx       13521412 ns     12695312 ns           16
data | 17 |     tbb    9539581 ns     11718750 ns           16
data | 17 | avx tbb    9285481 ns      8789062 ns           16
mask | 17 |          198077694 ns    195312500 ns           16
mask | 17 | avx       12825637 ns     10742188 ns           16
mask | 17 |     tbb   32513238 ns     28320312 ns           16
mask | 17 | avx tbb    9291650 ns      8789062 ns           16

data | 18 |           34672169 ns     34179688 ns           16
data | 18 | avx       13719313 ns     13671875 ns           16
data | 18 |     tbb    9525194 ns      9765625 ns           16
data | 18 | avx tbb    9281363 ns      9765625 ns           16
mask | 18 |          207753081 ns    207031250 ns           16
mask | 18 | avx       13394450 ns     14648438 ns           16
mask | 18 |     tbb   32468481 ns     31250000 ns           16
mask | 18 | avx tbb    9291794 ns      7812500 ns           16

data | 19 |           31708944 ns     31250000 ns           16
data | 19 | avx       13779331 ns     13671875 ns           16
data | 19 |     tbb    9506969 ns      9765625 ns           16
data | 19 | avx tbb    9316206 ns      8789062 ns           16
mask | 19 |          194105619 ns    193359375 ns           16
mask | 19 | avx       12815781 ns     11718750 ns           16
mask | 19 |     tbb   32455838 ns     30273438 ns           16
mask | 19 | avx tbb    9301225 ns      7812500 ns           16

data | 20 |           30344681 ns     30273438 ns           16
data | 20 | avx       13744431 ns     14648438 ns           16
data | 20 |     tbb    9454294 ns     11718750 ns           16
data | 20 | avx tbb    9282188 ns      9765625 ns           16
mask | 20 |          206208050 ns    205078125 ns           16
mask | 20 | avx       13277419 ns     14648438 ns           16
mask | 20 |     tbb   32901600 ns     32226562 ns           16
mask | 20 | avx tbb    9280087 ns      9765625 ns           16

data | 21 |           29055706 ns     30273438 ns           16
data | 21 | avx       13746275 ns     14648438 ns           16
data | 21 |     tbb    9485538 ns      7812500 ns           16
data | 21 | avx tbb    9819388 ns      7812500 ns           16
mask | 21 |          194713231 ns    196289062 ns           16
mask | 21 | avx       12834644 ns     12695312 ns           16
mask | 21 |     tbb   32417087 ns     31250000 ns           16
mask | 21 | avx tbb    9293450 ns      6835938 ns           16

data | 22 |           27859019 ns     28320312 ns           16
data | 22 | avx       13312500 ns     12695312 ns           16
data | 22 |     tbb    9540850 ns      7812500 ns           16
data | 22 | avx tbb    9280488 ns      9765625 ns           16
mask | 22 |          194442544 ns    195312500 ns           16
mask | 22 | avx       13395294 ns     14648438 ns           16
mask | 22 |     tbb   32704294 ns     32226562 ns           16
mask | 22 | avx tbb    9277475 ns      8789062 ns           16

data | 23 |           28237369 ns     25390625 ns           16
data | 23 | avx       13656725 ns     12695312 ns           16
data | 23 |     tbb    9450306 ns      9765625 ns           16
data | 23 | avx tbb    9372931 ns      9765625 ns           16
mask | 23 |          199631075 ns    196289062 ns           16
mask | 23 | avx       12699000 ns     12695312 ns           16
mask | 23 |     tbb   32623875 ns     31250000 ns           16
mask | 23 | avx tbb    9308313 ns      9765625 ns           16

data | 24 |           26237956 ns     25390625 ns           16
data | 24 | avx       13459112 ns     13671875 ns           16
data | 24 |     tbb    9500744 ns     12695312 ns           16
data | 24 | avx tbb    9291081 ns      8789062 ns           16
mask | 24 |          203638531 ns    207031250 ns           16
mask | 24 | avx       12879381 ns     11718750 ns           16
mask | 24 |     tbb   32424450 ns     29296875 ns           16
mask | 24 | avx tbb    9289219 ns      7812500 ns           16

data | 25 |           26555750 ns     26367188 ns           16
data | 25 | avx       14273962 ns     14648438 ns           16
data | 25 |     tbb    9447956 ns      6835938 ns           16
data | 25 | avx tbb    9302469 ns      8789062 ns           16
mask | 25 |          197865256 ns    196289062 ns           16
mask | 25 | avx       12766675 ns     12695312 ns           16
mask | 25 |     tbb   32552756 ns     31250000 ns           16
mask | 25 | avx tbb    9291775 ns      6835938 ns           16

data | 26 |           24627837 ns     25390625 ns           16
data | 26 | avx       13639862 ns     13671875 ns           16
data | 26 |     tbb    9554375 ns      9765625 ns           16
data | 26 | avx tbb    9256981 ns      7812500 ns           16
mask | 26 |          200336431 ns    203125000 ns           16
mask | 26 | avx       12825606 ns     13671875 ns           16
mask | 26 |     tbb   32385787 ns     31250000 ns           16
mask | 26 | avx tbb    9305862 ns     10742188 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           21814513 ns     19531250 ns            8
data |  1 | avx       21504112 ns     23437500 ns            8
data |  1 |     tbb   18322650 ns     19531250 ns            8
data |  1 | avx tbb   18365388 ns     19531250 ns            8
mask |  1 |           21217150 ns     27343750 ns            8
mask |  1 | avx       25115413 ns     19531250 ns            8
mask |  1 |     tbb   18362787 ns     17578125 ns            8
mask |  1 | avx tbb   18325775 ns     19531250 ns            8

data |  2 |          574660713 ns    576171875 ns            8
data |  2 | avx       27509175 ns     29296875 ns            8
data |  2 |     tbb   54816312 ns     52734375 ns            8
data |  2 | avx tbb   18462438 ns     19531250 ns            8
mask |  2 |          413643913 ns    412109375 ns            8
mask |  2 | avx       25706350 ns     25390625 ns            8
mask |  2 |     tbb   64797425 ns     62500000 ns            8
mask |  2 | avx tbb   19499462 ns     17578125 ns            8

data |  3 |          383957725 ns    382812500 ns            8
data |  3 | avx       26997275 ns     27343750 ns            8
data |  3 |     tbb   37472275 ns     33203125 ns            8
data |  3 | avx tbb   18463437 ns     21484375 ns            8
mask |  3 |          417532550 ns    417968750 ns            8
mask |  3 | avx       25686262 ns     25390625 ns            8
mask |  3 |     tbb   65697275 ns     64453125 ns            8
mask |  3 | avx tbb   18452237 ns     15625000 ns            8

data |  4 |          287634662 ns    287109375 ns            8
data |  4 | avx       26928400 ns     25390625 ns            8
data |  4 |     tbb   27974750 ns     27343750 ns            8
data |  4 | avx tbb   18722100 ns     17578125 ns            8
mask |  4 |          387410625 ns    386718750 ns            8
mask |  4 | avx       25763850 ns     25390625 ns            8
mask |  4 |     tbb   65016837 ns     60546875 ns            8
mask |  4 | avx tbb   18653937 ns     19531250 ns            8

data |  5 |          231525288 ns    234375000 ns            8
data |  5 | avx       27099063 ns     23437500 ns            8
data |  5 |     tbb   24102438 ns     23437500 ns            8
data |  5 | avx tbb   18470587 ns     15625000 ns            8
mask |  5 |          386886300 ns    384765625 ns            8
mask |  5 | avx       28025925 ns     29296875 ns            8
mask |  5 |     tbb   64549213 ns     64453125 ns            8
mask |  5 | avx tbb   18478100 ns     17578125 ns            8

data |  6 |          193878925 ns    189453125 ns            8
data |  6 | avx       27565125 ns     27343750 ns            8
data |  6 |     tbb   20098900 ns     19531250 ns            8
data |  6 | avx tbb   18634188 ns     19531250 ns            8
mask |  6 |          410445088 ns    412109375 ns            8
mask |  6 | avx       25736275 ns     25390625 ns            8
mask |  6 |     tbb   65247200 ns     60546875 ns            8
mask |  6 | avx tbb   18480938 ns     17578125 ns            8

data |  7 |          166700537 ns    167968750 ns            8
data |  7 | avx       27571037 ns     27343750 ns            8
data |  7 |     tbb   19539900 ns     21484375 ns            8
data |  7 | avx tbb   18440563 ns     19531250 ns            8
mask |  7 |          392882213 ns    394531250 ns            8
mask |  7 | avx       27988387 ns     27343750 ns            8
mask |  7 |     tbb   64985900 ns     60546875 ns            8
mask |  7 | avx tbb   18768087 ns     15625000 ns            8

data |  8 |          146907750 ns    142578125 ns            8
data |  8 | avx       26858275 ns     27343750 ns            8
data |  8 |     tbb   19154612 ns     19531250 ns            8
data |  8 | avx tbb   18479038 ns     17578125 ns            8
mask |  8 |          417697338 ns    419921875 ns            8
mask |  8 | avx       25726025 ns     25390625 ns            8
mask |  8 |     tbb   65830875 ns     58593750 ns            8
mask |  8 | avx tbb   18486063 ns     17578125 ns            8

data |  9 |          129009387 ns    130859375 ns            8
data |  9 | avx       27412450 ns     29296875 ns            8
data |  9 |     tbb   18866175 ns     19531250 ns            8
data |  9 | avx tbb   18439462 ns     17578125 ns            8
mask |  9 |          389812763 ns    388671875 ns            8
mask |  9 | avx       25760425 ns     27343750 ns            8
mask |  9 |     tbb   64616887 ns     62500000 ns            8
mask |  9 | avx tbb   18480825 ns     19531250 ns            8

data | 10 |          117885250 ns    117187500 ns            8
data | 10 | avx       26925113 ns     25390625 ns            8
data | 10 |     tbb   18796275 ns     17578125 ns            8
data | 10 | avx tbb   18488587 ns     15625000 ns            8
mask | 10 |          387675525 ns    386718750 ns            8
mask | 10 | avx       25697575 ns     27343750 ns            8
mask | 10 |     tbb   64623738 ns     60546875 ns            8
mask | 10 | avx tbb   18495850 ns     15625000 ns            8

data | 11 |          108237025 ns    107421875 ns            8
data | 11 | avx       26915587 ns     29296875 ns            8
data | 11 |     tbb   18809250 ns     17578125 ns            8
data | 11 | avx tbb   18468625 ns     17578125 ns            8
mask | 11 |          391514600 ns    392578125 ns            8
mask | 11 | avx       25796013 ns     23437500 ns            8
mask | 11 |     tbb   65044438 ns     60546875 ns            8
mask | 11 | avx tbb   18490637 ns     19531250 ns            8

data | 12 |           99977112 ns     99609375 ns            8
data | 12 | avx       29718350 ns     29296875 ns            8
data | 12 |     tbb   18981900 ns     19531250 ns            8
data | 12 | avx tbb   18471037 ns     19531250 ns            8
mask | 12 |          412341463 ns    412109375 ns            8
mask | 12 | avx       28047638 ns     27343750 ns            8
mask | 12 |     tbb   64585937 ns     62500000 ns            8
mask | 12 | avx tbb   18463425 ns     17578125 ns            8

data | 13 |           93155163 ns     91796875 ns            8
data | 13 | avx       27525812 ns     29296875 ns            8
data | 13 |     tbb   19024837 ns     17578125 ns            8
data | 13 | avx tbb   18459850 ns     13671875 ns            8
mask | 13 |          399553862 ns    398437500 ns            8
mask | 13 | avx       27661475 ns     29296875 ns            8
mask | 13 |     tbb   65004313 ns     60546875 ns            8
mask | 13 | avx tbb   18472588 ns     19531250 ns            8

data | 14 |           85266150 ns     93750000 ns            8
data | 14 | avx       27520888 ns     25390625 ns            8
data | 14 |     tbb   18887100 ns     17578125 ns            8
data | 14 | avx tbb   18504662 ns     17578125 ns            8
mask | 14 |          399010550 ns    400390625 ns            8
mask | 14 | avx       25634250 ns     27343750 ns            8
mask | 14 |     tbb   64610388 ns     60546875 ns            8
mask | 14 | avx tbb   18470287 ns     17578125 ns            8

data | 15 |           82167113 ns     83984375 ns            8
data | 15 | avx       27448787 ns     27343750 ns            8
data | 15 |     tbb   21234438 ns     17578125 ns            8
data | 15 | avx tbb   18438575 ns     19531250 ns            8
mask | 15 |          387836075 ns    386718750 ns            8
mask | 15 | avx       26669200 ns     29296875 ns            8
mask | 15 |     tbb   64706025 ns     62500000 ns            8
mask | 15 | avx tbb   18468237 ns     19531250 ns            8

data | 16 |           75271962 ns     76171875 ns            8
data | 16 | avx       26888825 ns     25390625 ns            8
data | 16 |     tbb   19242587 ns     19531250 ns            8
data | 16 | avx tbb   18661300 ns     19531250 ns            8
mask | 16 |          401695100 ns    400390625 ns            8
mask | 16 | avx       25589450 ns     25390625 ns            8
mask | 16 |     tbb   64489512 ns     58593750 ns            8
mask | 16 | avx tbb   18464638 ns     17578125 ns            8

data | 17 |           70431963 ns     74218750 ns            8
data | 17 | avx       29835075 ns     29296875 ns            8
data | 17 |     tbb   18936500 ns     19531250 ns            8
data | 17 | avx tbb   18463600 ns     17578125 ns            8
mask | 17 |          396687625 ns    402343750 ns            8
mask | 17 | avx       25261737 ns     23437500 ns            8
mask | 17 |     tbb   64729575 ns     64453125 ns            8
mask | 17 | avx tbb   18490037 ns     19531250 ns            8

data | 18 |           66492363 ns     64453125 ns            8
data | 18 | avx       26941312 ns     27343750 ns            8
data | 18 |     tbb   19178512 ns     17578125 ns            8
data | 18 | avx tbb   18583363 ns     17578125 ns            8
mask | 18 |          386888950 ns    386718750 ns            8
mask | 18 | avx       25749775 ns     27343750 ns            8
mask | 18 |     tbb   65414550 ns     60546875 ns            8
mask | 18 | avx tbb   18492212 ns     15625000 ns            8

data | 19 |           64148887 ns     68359375 ns            8
data | 19 | avx       29131862 ns     31250000 ns            8
data | 19 |     tbb   18911025 ns     19531250 ns            8
data | 19 | avx tbb   18439938 ns     17578125 ns            8
mask | 19 |          400512812 ns    400390625 ns            8
mask | 19 | avx       25907025 ns     27343750 ns            8
mask | 19 |     tbb   64590200 ns     60546875 ns            8
mask | 19 | avx tbb   18499075 ns     17578125 ns            8

data | 20 |           61054688 ns     62500000 ns            8
data | 20 | avx       27535837 ns     31250000 ns            8
data | 20 |     tbb   18962825 ns     17578125 ns            8
data | 20 | avx tbb   18470188 ns     19531250 ns            8
mask | 20 |          391049750 ns    390625000 ns            8
mask | 20 | avx       25719987 ns     27343750 ns            8
mask | 20 |     tbb   65312025 ns     58593750 ns            8
mask | 20 | avx tbb   19242112 ns     19531250 ns            8

data | 21 |           59845950 ns     60546875 ns            8
data | 21 | avx       26865700 ns     27343750 ns            8
data | 21 |     tbb   19788988 ns     17578125 ns            8
data | 21 | avx tbb   18487050 ns     17578125 ns            8
mask | 21 |          400371713 ns    404296875 ns            8
mask | 21 | avx       25387462 ns     25390625 ns            8
mask | 21 |     tbb   64997900 ns     62500000 ns            8
mask | 21 | avx tbb   18476412 ns     19531250 ns            8

data | 22 |           57690325 ns     54687500 ns            8
data | 22 | avx       26722287 ns     25390625 ns            8
data | 22 |     tbb   18815237 ns     17578125 ns            8
data | 22 | avx tbb   18496288 ns     19531250 ns            8
mask | 22 |          386341025 ns    386718750 ns            8
mask | 22 | avx       25727662 ns     25390625 ns            8
mask | 22 |     tbb   65267450 ns     58593750 ns            8
mask | 22 | avx tbb   18464275 ns     19531250 ns            8

data | 23 |           56172725 ns     48828125 ns            8
data | 23 | avx       28283012 ns     27343750 ns            8
data | 23 |     tbb   18878350 ns     19531250 ns            8
data | 23 | avx tbb   18469987 ns     19531250 ns            8
mask | 23 |          399706563 ns    398437500 ns            8
mask | 23 | avx       25913025 ns     27343750 ns            8
mask | 23 |     tbb   65706313 ns     60546875 ns            8
mask | 23 | avx tbb   18470375 ns     19531250 ns            8

data | 24 |           54283213 ns     48828125 ns            8
data | 24 | avx       26961775 ns     27343750 ns            8
data | 24 |     tbb   19028913 ns     17578125 ns            8
data | 24 | avx tbb   18579262 ns     17578125 ns            8
mask | 24 |          409119750 ns    410156250 ns            8
mask | 24 | avx       25732413 ns     25390625 ns            8
mask | 24 |     tbb   65094287 ns     62500000 ns            8
mask | 24 | avx tbb   18507963 ns     19531250 ns            8

data | 25 |           51153538 ns     48828125 ns            8
data | 25 | avx       26939163 ns     27343750 ns            8
data | 25 |     tbb   18758025 ns     19531250 ns            8
data | 25 | avx tbb   18471625 ns     19531250 ns            8
mask | 25 |          414526863 ns    416015625 ns            8
mask | 25 | avx       25757988 ns     25390625 ns            8
mask | 25 |     tbb   65384263 ns     60546875 ns            8
mask | 25 | avx tbb   18495013 ns     19531250 ns            8

data | 26 |           50219625 ns     50781250 ns            8
data | 26 | avx       27255450 ns     27343750 ns            8
data | 26 |     tbb   18782950 ns     17578125 ns            8
data | 26 | avx tbb   18485525 ns     19531250 ns            8
mask | 26 |          415022737 ns    417968750 ns            8
mask | 26 | avx       25657350 ns     23437500 ns            8
mask | 26 |     tbb   65066500 ns     66406250 ns            8
mask | 26 | avx tbb   18473025 ns     19531250 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           42874725 ns     44921875 ns            8
data |  1 | avx       42861700 ns     42968750 ns            8
data |  1 |     tbb   36625637 ns     37109375 ns            8
data |  1 | avx tbb   36593550 ns     39062500 ns            8
mask |  1 |           42651100 ns     42968750 ns            8
mask |  1 | avx       43055213 ns     46875000 ns            8
mask |  1 |     tbb   36758000 ns     39062500 ns            8
mask |  1 | avx tbb   36606825 ns     29296875 ns            8

data |  2 |         1148685950 ns   1152343750 ns            8
data |  2 | avx       55152000 ns     54687500 ns            8
data |  2 |     tbb  109478362 ns     99609375 ns            8
data |  2 | avx tbb   37437800 ns     33203125 ns            8
mask |  2 |          775749962 ns    775390625 ns            8
mask |  2 | avx       55790500 ns     52734375 ns            8
mask |  2 |     tbb  129053662 ns    121093750 ns            8
mask |  2 | avx tbb   36864275 ns     35156250 ns            8

data |  3 |          767162700 ns    765625000 ns            8
data |  3 | avx       55257775 ns     56640625 ns            8
data |  3 |     tbb   72288500 ns     72265625 ns            8
data |  3 | avx tbb   36821700 ns     35156250 ns            8
mask |  3 |          776867612 ns    779296875 ns            8
mask |  3 | avx       55971637 ns     56640625 ns            8
mask |  3 |     tbb  129801062 ns    125000000 ns            8
mask |  3 | avx tbb   36832175 ns     35156250 ns            8

data |  4 |          576548900 ns    578125000 ns            8
data |  4 | avx       59607863 ns     62500000 ns            8
data |  4 |     tbb   55668000 ns     50781250 ns            8
data |  4 | avx tbb   36836725 ns     37109375 ns            8
mask |  4 |          812210112 ns    812500000 ns            8
mask |  4 | avx       51389188 ns     46875000 ns            8
mask |  4 |     tbb  129895725 ns    125000000 ns            8
mask |  4 | avx tbb   36834175 ns     39062500 ns            8

data |  5 |          462149562 ns    462890625 ns            8
data |  5 | avx       54874700 ns     52734375 ns            8
data |  5 |     tbb   45102838 ns     44921875 ns            8
data |  5 | avx tbb   36848788 ns     37109375 ns            8
mask |  5 |          797961262 ns    792968750 ns            8
mask |  5 | avx       50960338 ns     54687500 ns            8
mask |  5 |     tbb  131006400 ns    115234375 ns            8
mask |  5 | avx tbb   36868237 ns     39062500 ns            8

data |  6 |          385917400 ns    382812500 ns            8
data |  6 | avx       55037363 ns     54687500 ns            8
data |  6 |     tbb   39998050 ns     37109375 ns            8
data |  6 | avx tbb   36801250 ns     39062500 ns            8
mask |  6 |          825653462 ns    826171875 ns            8
mask |  6 | avx       51455425 ns     50781250 ns            8
mask |  6 |     tbb  129190262 ns    121093750 ns            8
mask |  6 | avx tbb   36822375 ns     37109375 ns            8

data |  7 |          333163362 ns    330078125 ns            8
data |  7 | avx       54806213 ns     52734375 ns            8
data |  7 |     tbb   38473350 ns     37109375 ns            8
data |  7 | avx tbb   36857900 ns     37109375 ns            8
mask |  7 |          789875362 ns    791015625 ns            8
mask |  7 | avx       51598725 ns     52734375 ns            8
mask |  7 |     tbb  129212862 ns    121093750 ns            8
mask |  7 | avx tbb   37578925 ns     35156250 ns            8

data |  8 |          292039575 ns    291015625 ns            8
data |  8 | avx       58562200 ns     58593750 ns            8
data |  8 |     tbb   38049462 ns     39062500 ns            8
data |  8 | avx tbb   36823225 ns     39062500 ns            8
mask |  8 |          798381462 ns    798828125 ns            8
mask |  8 | avx       51652188 ns     50781250 ns            8
mask |  8 |     tbb  130108088 ns    119140625 ns            8
mask |  8 | avx tbb   36895275 ns     35156250 ns            8

data |  9 |          260907475 ns    261718750 ns            8
data |  9 | avx       55013150 ns     56640625 ns            8
data |  9 |     tbb   37741038 ns     35156250 ns            8
data |  9 | avx tbb   37001050 ns     37109375 ns            8
mask |  9 |          794887588 ns    792968750 ns            8
mask |  9 | avx       52619587 ns     52734375 ns            8
mask |  9 |     tbb  131948250 ns    123046875 ns            8
mask |  9 | avx tbb   36834213 ns     37109375 ns            8

data | 10 |          237102150 ns    236328125 ns            8
data | 10 | avx       55307512 ns     58593750 ns            8
data | 10 |     tbb   37807988 ns     35156250 ns            8
data | 10 | avx tbb   36850175 ns     35156250 ns            8
mask | 10 |          776493575 ns    777343750 ns            8
mask | 10 | avx       51371500 ns     50781250 ns            8
mask | 10 |     tbb  131548738 ns    121093750 ns            8
mask | 10 | avx tbb   36881537 ns     35156250 ns            8

data | 11 |          213888187 ns    212890625 ns            8
data | 11 | avx       55467438 ns     56640625 ns            8
data | 11 |     tbb   37851738 ns     37109375 ns            8
data | 11 | avx tbb   37168713 ns     39062500 ns            8
mask | 11 |          820108375 ns    814453125 ns            8
mask | 11 | avx       55846312 ns     56640625 ns            8
mask | 11 |     tbb  129974000 ns    121093750 ns            8
mask | 11 | avx tbb   36811225 ns     39062500 ns            8

data | 12 |          196923375 ns    197265625 ns            8
data | 12 | avx       54802050 ns     54687500 ns            8
data | 12 |     tbb   37981262 ns     37109375 ns            8
data | 12 | avx tbb   36782688 ns     35156250 ns            8
mask | 12 |          831174087 ns    832031250 ns            8
mask | 12 | avx       51289113 ns     50781250 ns            8
mask | 12 |     tbb  129240288 ns    119140625 ns            8
mask | 12 | avx tbb   36866500 ns     35156250 ns            8

data | 13 |          189750475 ns    189453125 ns            8
data | 13 | avx       59607375 ns     58593750 ns            8
data | 13 |     tbb   37709375 ns     35156250 ns            8
data | 13 | avx tbb   36819363 ns     35156250 ns            8
mask | 13 |          799682125 ns    800781250 ns            8
mask | 13 | avx       50884975 ns     52734375 ns            8
mask | 13 |     tbb  129811400 ns    123046875 ns            8
mask | 13 | avx tbb   36904500 ns     37109375 ns            8

data | 14 |          171218025 ns    171875000 ns            8
data | 14 | avx       58283488 ns     56640625 ns            8
data | 14 |     tbb   37612800 ns     39062500 ns            8
data | 14 | avx tbb   36827638 ns     39062500 ns            8
mask | 14 |          834273763 ns    832031250 ns            8
mask | 14 | avx       51446562 ns     50781250 ns            8
mask | 14 |     tbb  129994950 ns    123046875 ns            8
mask | 14 | avx tbb   37448775 ns     37109375 ns            8

data | 15 |          163991637 ns    164062500 ns            8
data | 15 | avx       59546662 ns     58593750 ns            8
data | 15 |     tbb   37911762 ns     35156250 ns            8
data | 15 | avx tbb   36954525 ns     39062500 ns            8
mask | 15 |          790850812 ns    792968750 ns            8
mask | 15 | avx       51539000 ns     54687500 ns            8
mask | 15 |     tbb  129683225 ns    121093750 ns            8
mask | 15 | avx tbb   36883713 ns     39062500 ns            8

data | 16 |          150881587 ns    152343750 ns            8
data | 16 | avx       53895363 ns     52734375 ns            8
data | 16 |     tbb   38276625 ns     37109375 ns            8
data | 16 | avx tbb   36836950 ns     31250000 ns            8
mask | 16 |          795447738 ns    796875000 ns            8
mask | 16 | avx       50874375 ns     50781250 ns            8
mask | 16 |     tbb  129809975 ns    121093750 ns            8
mask | 16 | avx tbb   36920550 ns     39062500 ns            8

data | 17 |          140784562 ns    140625000 ns            8
data | 17 | avx       53891900 ns     54687500 ns            8
data | 17 |     tbb   37976275 ns     31250000 ns            8
data | 17 | avx tbb   36788613 ns     33203125 ns            8
mask | 17 |          817170487 ns    816406250 ns            8
mask | 17 | avx       56629000 ns     56640625 ns            8
mask | 17 |     tbb  130241375 ns    121093750 ns            8
mask | 17 | avx tbb   37130538 ns     35156250 ns            8

data | 18 |          132952712 ns    132812500 ns            8
data | 18 | avx       53955250 ns     52734375 ns            8
data | 18 |     tbb   37982675 ns     37109375 ns            8
data | 18 | avx tbb   36833288 ns     39062500 ns            8
mask | 18 |          835593063 ns    837890625 ns            8
mask | 18 | avx       52531563 ns     52734375 ns            8
mask | 18 |     tbb  129730988 ns    123046875 ns            8
mask | 18 | avx tbb   36927463 ns     37109375 ns            8

data | 19 |          126787475 ns    130859375 ns            8
data | 19 | avx       54172537 ns     56640625 ns            8
data | 19 |     tbb   37638562 ns     37109375 ns            8
data | 19 | avx tbb   36849338 ns     35156250 ns            8
mask | 19 |          779273500 ns    779296875 ns            8
mask | 19 | avx       51884988 ns     52734375 ns            8
mask | 19 |     tbb  130929150 ns    123046875 ns            8
mask | 19 | avx tbb   37146912 ns     39062500 ns            8

data | 20 |          120925250 ns    119140625 ns            8
data | 20 | avx       53842350 ns     52734375 ns            8
data | 20 |     tbb   37504737 ns     37109375 ns            8
data | 20 | avx tbb   36804750 ns     39062500 ns            8
mask | 20 |          831301075 ns    828125000 ns            8
mask | 20 | avx       51538213 ns     52734375 ns            8
mask | 20 |     tbb  130130150 ns    121093750 ns            8
mask | 20 | avx tbb   36881088 ns     33203125 ns            8

data | 21 |          115786088 ns    115234375 ns            8
data | 21 | avx       54200175 ns     54687500 ns            8
data | 21 |     tbb   40875700 ns     41015625 ns            8
data | 21 | avx tbb   36917187 ns     39062500 ns            8
mask | 21 |          827035687 ns    830078125 ns            8
mask | 21 | avx       51468250 ns     50781250 ns            8
mask | 21 |     tbb  129436488 ns    123046875 ns            8
mask | 21 | avx tbb   36866225 ns     37109375 ns            8

data | 22 |          116066013 ns    117187500 ns            8
data | 22 | avx       55315975 ns     56640625 ns            8
data | 22 |     tbb   37579312 ns     35156250 ns            8
data | 22 | avx tbb   36856025 ns     35156250 ns            8
mask | 22 |          796839538 ns    796875000 ns            8
mask | 22 | avx       56048950 ns     56640625 ns            8
mask | 22 |     tbb  129451750 ns    121093750 ns            8
mask | 22 | avx tbb   36820338 ns     37109375 ns            8

data | 23 |          108479513 ns    109375000 ns            8
data | 23 | avx       55286437 ns     54687500 ns            8
data | 23 |     tbb   37493063 ns     35156250 ns            8
data | 23 | avx tbb   36846312 ns     37109375 ns            8
mask | 23 |          796083450 ns    794921875 ns            8
mask | 23 | avx       50850362 ns     50781250 ns            8
mask | 23 |     tbb  129595863 ns    125000000 ns            8
mask | 23 | avx tbb   37337625 ns     37109375 ns            8

data | 24 |          108869300 ns    111328125 ns            8
data | 24 | avx       54945462 ns     56640625 ns            8
data | 24 |     tbb   37617150 ns     35156250 ns            8
data | 24 | avx tbb   36827712 ns     35156250 ns            8
mask | 24 |          778786075 ns    779296875 ns            8
mask | 24 | avx       55227113 ns     54687500 ns            8
mask | 24 |     tbb  130468713 ns    121093750 ns            8
mask | 24 | avx tbb   36889787 ns     37109375 ns            8

data | 25 |          102156275 ns     99609375 ns            8
data | 25 | avx       54734450 ns     52734375 ns            8
data | 25 |     tbb   37509662 ns     35156250 ns            8
data | 25 | avx tbb   36981150 ns     33203125 ns            8
mask | 25 |          794403663 ns    796875000 ns            8
mask | 25 | avx       50814088 ns     50781250 ns            8
mask | 25 |     tbb  129198325 ns    119140625 ns            8
mask | 25 | avx tbb   36891650 ns     37109375 ns            8

data | 26 |           99475288 ns    101562500 ns            8
data | 26 | avx       55119375 ns     54687500 ns            8
data | 26 |     tbb   37477987 ns     37109375 ns            8
data | 26 | avx tbb   36833412 ns     39062500 ns            8
mask | 26 |          793831588 ns    791015625 ns            8
mask | 26 | avx       50871550 ns     48828125 ns            8
mask | 26 |     tbb  130658838 ns    123046875 ns            8
mask | 26 | avx tbb   37251425 ns     35156250 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           90262000 ns     91796875 ns            8
data |  1 | avx       85226112 ns     85937500 ns            8
data |  1 |     tbb   73270850 ns     74218750 ns            8
data |  1 | avx tbb   73165037 ns     72265625 ns            8
mask |  1 |           85172150 ns     85937500 ns            8
mask |  1 | avx       85883162 ns     87890625 ns            8
mask |  1 |     tbb   73057888 ns     72265625 ns            8
mask |  1 | avx tbb   73637337 ns     72265625 ns            8

data |  2 |         2299911475 ns   2302734375 ns            8
data |  2 | avx      110248475 ns    111328125 ns            8
data |  2 |     tbb  220806325 ns    207031250 ns            8
data |  2 | avx tbb   73668162 ns     72265625 ns            8
mask |  2 |         1609680412 ns   1609375000 ns            8
mask |  2 | avx      103860412 ns    103515625 ns            8
mask |  2 |     tbb  259310612 ns    244140625 ns            8
mask |  2 | avx tbb   73571762 ns     78125000 ns            8

data |  3 |         1534542962 ns   1537109375 ns            8
data |  3 | avx      110290275 ns    109375000 ns            8
data |  3 |     tbb  145907038 ns    134765625 ns            8
data |  3 | avx tbb   73683888 ns     74218750 ns            8
mask |  3 |         1623246775 ns   1626953125 ns            8
mask |  3 | avx      101875963 ns    101562500 ns            8
mask |  3 |     tbb  260120138 ns    240234375 ns            8
mask |  3 | avx tbb   73554200 ns     72265625 ns            8

data |  4 |         1151380350 ns   1156250000 ns            8
data |  4 | avx      108247737 ns    107421875 ns            8
data |  4 |     tbb  111188988 ns    105468750 ns            8
data |  4 | avx tbb   73621075 ns     74218750 ns            8
mask |  4 |         1573337213 ns   1572265625 ns            8
mask |  4 | avx      103102175 ns    101562500 ns            8
mask |  4 |     tbb  262757738 ns    238281250 ns            8
mask |  4 | avx tbb   73672425 ns     64453125 ns            8

data |  5 |          923159800 ns    921875000 ns            8
data |  5 | avx      110276975 ns    107421875 ns            8
data |  5 |     tbb   91962525 ns     87890625 ns            8
data |  5 | avx tbb   73649512 ns     72265625 ns            8
mask |  5 |         1666126775 ns   1667968750 ns            8
mask |  5 | avx      102902463 ns    103515625 ns            8
mask |  5 |     tbb  263207387 ns    250000000 ns            8
mask |  5 | avx tbb   73585625 ns     72265625 ns            8

data |  6 |          772175388 ns    771484375 ns            8
data |  6 | avx      110611900 ns    109375000 ns            8
data |  6 |     tbb   81300050 ns     74218750 ns            8
data |  6 | avx tbb   73652375 ns     74218750 ns            8
mask |  6 |         1556855200 ns   1556640625 ns            8
mask |  6 | avx      103243775 ns    105468750 ns            8
mask |  6 |     tbb  262841637 ns    242187500 ns            8
mask |  6 | avx tbb   73663612 ns     74218750 ns            8

data |  7 |          666528137 ns    660156250 ns            8
data |  7 | avx      107659662 ns    109375000 ns            8
data |  7 |     tbb   77368213 ns     68359375 ns            8
data |  7 | avx tbb   74210813 ns     70312500 ns            8
mask |  7 |         1595192775 ns   1599609375 ns            8
mask |  7 | avx      101878238 ns    103515625 ns            8
mask |  7 |     tbb  261924888 ns    251953125 ns            8
mask |  7 | avx tbb   73670463 ns     74218750 ns            8

data |  8 |          583138950 ns    583984375 ns            8
data |  8 | avx      110773912 ns    111328125 ns            8
data |  8 |     tbb   76420950 ns     76171875 ns            8
data |  8 | avx tbb   73708025 ns     76171875 ns            8
mask |  8 |         1562581175 ns   1558593750 ns            8
mask |  8 | avx      103148825 ns     99609375 ns            8
mask |  8 |     tbb  260027075 ns    253906250 ns            8
mask |  8 | avx tbb   73514200 ns     72265625 ns            8

data |  9 |          514490687 ns    515625000 ns            8
data |  9 | avx      110232213 ns    111328125 ns            8
data |  9 |     tbb   76248800 ns     68359375 ns            8
data |  9 | avx tbb   73649112 ns     72265625 ns            8
mask |  9 |         1560854600 ns   1556640625 ns            8
mask |  9 | avx      102758375 ns     99609375 ns            8
mask |  9 |     tbb  259556788 ns    238281250 ns            8
mask |  9 | avx tbb   73629587 ns     72265625 ns            8

data | 10 |          466158500 ns    464843750 ns            8
data | 10 | avx      110336200 ns    111328125 ns            8
data | 10 |     tbb   76183438 ns     74218750 ns            8
data | 10 | avx tbb   73691725 ns     76171875 ns            8
mask | 10 |         1626480975 ns   1626953125 ns            8
mask | 10 | avx      108541413 ns    113281250 ns            8
mask | 10 |     tbb  259703975 ns    242187500 ns            8
mask | 10 | avx tbb   73659725 ns     74218750 ns            8

data | 11 |          426728300 ns    425781250 ns            8
data | 11 | avx      110203100 ns    109375000 ns            8
data | 11 |     tbb   77126063 ns     74218750 ns            8
data | 11 | avx tbb   73679225 ns     78125000 ns            8
mask | 11 |         1666981225 ns   1666015625 ns            8
mask | 11 | avx      103170163 ns    103515625 ns            8
mask | 11 |     tbb  261274500 ns    246093750 ns            8
mask | 11 | avx tbb   73687012 ns     74218750 ns            8

data | 12 |          392096750 ns    390625000 ns            8
data | 12 | avx      110243987 ns    109375000 ns            8
data | 12 |     tbb   74874850 ns     78125000 ns            8
data | 12 | avx tbb   73590763 ns     72265625 ns            8
mask | 12 |         1559538762 ns   1562500000 ns            8
mask | 12 | avx      102978200 ns    109375000 ns            8
mask | 12 |     tbb  259779575 ns    240234375 ns            8
mask | 12 | avx tbb   73613512 ns     74218750 ns            8

data | 13 |          366513275 ns    363281250 ns            8
data | 13 | avx      110037213 ns    111328125 ns            8
data | 13 |     tbb   75671250 ns     70312500 ns            8
data | 13 | avx tbb   73667563 ns     70312500 ns            8
mask | 13 |         1631744788 ns   1634765625 ns            8
mask | 13 | avx      102934337 ns    103515625 ns            8
mask | 13 |     tbb  257655475 ns    250000000 ns            8
mask | 13 | avx tbb   73848887 ns     76171875 ns            8

data | 14 |          341267013 ns    339843750 ns            8
data | 14 | avx      108114263 ns    109375000 ns            8
data | 14 |     tbb   75477663 ns     76171875 ns            8
data | 14 | avx tbb   73597463 ns     70312500 ns            8
mask | 14 |         1626777213 ns   1630859375 ns            8
mask | 14 | avx      103288525 ns     95703125 ns            8
mask | 14 |     tbb  258217250 ns    244140625 ns            8
mask | 14 | avx tbb   73612362 ns     72265625 ns            8

data | 15 |          321133487 ns    324218750 ns            8
data | 15 | avx      110117750 ns    109375000 ns            8
data | 15 |     tbb   75336175 ns     70312500 ns            8
data | 15 | avx tbb   73629913 ns     68359375 ns            8
mask | 15 |         1576018125 ns   1574218750 ns            8
mask | 15 | avx      103128725 ns    101562500 ns            8
mask | 15 |     tbb  259435100 ns    236328125 ns            8
mask | 15 | avx tbb   73540212 ns     72265625 ns            8

data | 16 |          299669813 ns    298828125 ns            8
data | 16 | avx      110137975 ns    111328125 ns            8
data | 16 |     tbb   75092500 ns     74218750 ns            8
data | 16 | avx tbb   73610850 ns     70312500 ns            8
mask | 16 |         1568944300 ns   1572265625 ns            8
mask | 16 | avx      102732713 ns    103515625 ns            8
mask | 16 |     tbb  259753063 ns    250000000 ns            8
mask | 16 | avx tbb   73672462 ns     74218750 ns            8

data | 17 |          281355312 ns    281250000 ns            8
data | 17 | avx      108710738 ns    111328125 ns            8
data | 17 |     tbb   75358913 ns     70312500 ns            8
data | 17 | avx tbb   73640587 ns     78125000 ns            8
mask | 17 |         1641191337 ns   1638671875 ns            8
mask | 17 | avx      101556963 ns    101562500 ns            8
mask | 17 |     tbb  259806650 ns    234375000 ns            8
mask | 17 | avx tbb   73592163 ns     74218750 ns            8

data | 18 |          265923737 ns    267578125 ns            8
data | 18 | avx      110256600 ns    109375000 ns            8
data | 18 |     tbb   75255513 ns     72265625 ns            8
data | 18 | avx tbb   73641950 ns     74218750 ns            8
mask | 18 |         1646841413 ns   1644531250 ns            8
mask | 18 | avx      107913450 ns    105468750 ns            8
mask | 18 |     tbb  257947800 ns    238281250 ns            8
mask | 18 | avx tbb   73685150 ns     72265625 ns            8

data | 19 |          253318775 ns    251953125 ns            8
data | 19 | avx      107862125 ns    107421875 ns            8
data | 19 |     tbb   74927750 ns     74218750 ns            8
data | 19 | avx tbb   73630863 ns     74218750 ns            8
mask | 19 |         1586619438 ns   1583984375 ns            8
mask | 19 | avx      103440175 ns    101562500 ns            8
mask | 19 |     tbb  258591513 ns    234375000 ns            8
mask | 19 | avx tbb   73693363 ns     70312500 ns            8

data | 20 |          241615313 ns    242187500 ns            8
data | 20 | avx      108638488 ns    109375000 ns            8
data | 20 |     tbb   75590725 ns     72265625 ns            8
data | 20 | avx tbb   73575188 ns     72265625 ns            8
mask | 20 |         1645580125 ns   1646484375 ns            8
mask | 20 | avx      102922075 ns    103515625 ns            8
mask | 20 |     tbb  259415463 ns    240234375 ns            8
mask | 20 | avx tbb   73607087 ns     74218750 ns            8

data | 21 |          231853662 ns    226562500 ns            8
data | 21 | avx      113920362 ns    113281250 ns            8
data | 21 |     tbb   78244538 ns     76171875 ns            8
data | 21 | avx tbb   73613837 ns     70312500 ns            8
mask | 21 |         1593954887 ns   1593750000 ns            8
mask | 21 | avx      103231538 ns    103515625 ns            8
mask | 21 |     tbb  259451162 ns    242187500 ns            8
mask | 21 | avx tbb   73760025 ns     72265625 ns            8

data | 22 |          224420825 ns    224609375 ns            8
data | 22 | avx      110633913 ns    111328125 ns            8
data | 22 |     tbb   75004438 ns     74218750 ns            8
data | 22 | avx tbb   73646738 ns     64453125 ns            8
mask | 22 |         1584656825 ns   1582031250 ns            8
mask | 22 | avx      101766725 ns    101562500 ns            8
mask | 22 |     tbb  257868900 ns    250000000 ns            8
mask | 22 | avx tbb   73658650 ns     76171875 ns            8

data | 23 |          215797713 ns    216796875 ns            8
data | 23 | avx      107840075 ns    107421875 ns            8
data | 23 |     tbb   75695413 ns     64453125 ns            8
data | 23 | avx tbb   73724088 ns     74218750 ns            8
mask | 23 |         1631840150 ns   1632812500 ns            8
mask | 23 | avx      102843462 ns     95703125 ns            8
mask | 23 |     tbb  257807875 ns    246093750 ns            8
mask | 23 | avx tbb   73678313 ns     68359375 ns            8

data | 24 |          210657262 ns    210937500 ns            8
data | 24 | avx      110156400 ns    109375000 ns            8
data | 24 |     tbb   74880762 ns     66406250 ns            8
data | 24 | avx tbb   73658150 ns     70312500 ns            8
mask | 24 |         1654772788 ns   1652343750 ns            8
mask | 24 | avx      103015312 ns    103515625 ns            8
mask | 24 |     tbb  258200563 ns    248046875 ns            8
mask | 24 | avx tbb   73639650 ns     74218750 ns            8

data | 25 |          203108125 ns    203125000 ns            8
data | 25 | avx      110368488 ns    109375000 ns            8
data | 25 |     tbb   74909375 ns     72265625 ns            8
data | 25 | avx tbb   73593000 ns     70312500 ns            8
mask | 25 |         1575096988 ns   1574218750 ns            8
mask | 25 | avx      103161050 ns    103515625 ns            8
mask | 25 |     tbb  260480250 ns    244140625 ns            8
mask | 25 | avx tbb   73696537 ns     70312500 ns            8

data | 26 |          197474188 ns    199218750 ns            8
data | 26 | avx      110370588 ns    109375000 ns            8
data | 26 |     tbb   74805363 ns     74218750 ns            8
data | 26 | avx tbb   73686875 ns     76171875 ns            8
mask | 26 |         1562669937 ns   1560546875 ns            8
mask | 26 | avx      103018913 ns    103515625 ns            8
mask | 26 |     tbb  259340500 ns    251953125 ns            8
mask | 26 | avx tbb   73735312 ns     72265625 ns            8
```

</details>

