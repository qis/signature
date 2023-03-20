# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4351 ns         4392 ns         4096
data |  1 | avx            906 ns          904 ns         4096
data |  1 |     tbb       6594 ns         6647 ns         4096
data |  1 | avx tbb        990 ns          977 ns         4096
mask |  1 |               4544 ns         4583 ns         4096
mask |  1 | avx            973 ns          961 ns         4096
mask |  1 |     tbb       6655 ns         6700 ns         4096
mask |  1 | avx tbb        991 ns          995 ns         4096

data |  2 |              21486 ns        21547 ns         4096
data |  2 | avx           1286 ns         1278 ns         4096
data |  2 |     tbb      10022 ns        10064 ns         4096
data |  2 | avx tbb       1246 ns         1250 ns         4096
mask |  2 |               6079 ns         6113 ns         4096
mask |  2 | avx           1242 ns         1235 ns         4096
mask |  2 |     tbb       6752 ns         6805 ns         4096
mask |  2 | avx tbb       1229 ns         1213 ns         4096

data |  3 |              14353 ns        14388 ns         4096
data |  3 | avx           1176 ns         1165 ns         4096
data |  3 |     tbb       9351 ns         9396 ns         4096
data |  3 | avx tbb       1187 ns         1184 ns         4096
mask |  3 |               5929 ns         5959 ns         4096
mask |  3 | avx           1168 ns         1159 ns         4096
mask |  3 |     tbb       6782 ns         6820 ns         4096
mask |  3 | avx tbb       1176 ns         1169 ns         4096

data |  4 |              11564 ns        11595 ns         4096
data |  4 | avx           1229 ns         1211 ns         4096
data |  4 |     tbb       8635 ns         8681 ns         4096
data |  4 | avx tbb       1128 ns         1120 ns         4096
mask |  4 |               5740 ns         5773 ns         4096
mask |  4 | avx           1101 ns         1090 ns         4096
mask |  4 |     tbb       6911 ns         6942 ns         4096
mask |  4 | avx tbb       1145 ns         1137 ns         4096

data |  5 |               8944 ns         8978 ns         4096
data |  5 | avx           1218 ns         1207 ns         4096
data |  5 |     tbb       8690 ns         8732 ns         4096
data |  5 | avx tbb       1204 ns         1191 ns         4096
mask |  5 |               5773 ns         5826 ns         4096
mask |  5 | avx           1087 ns         1075 ns         4096
mask |  5 |     tbb       6690 ns         6731 ns         4096
mask |  5 | avx tbb       1161 ns         1152 ns         4096

data |  6 |               7973 ns         8004 ns         4096
data |  6 | avx           1217 ns         1202 ns         4096
data |  6 |     tbb       8353 ns         8397 ns         4096
data |  6 | avx tbb       1168 ns         1156 ns         4096
mask |  6 |               5748 ns         5782 ns         4096
mask |  6 | avx           1116 ns         1096 ns         4096
mask |  6 |     tbb       6864 ns         6902 ns         4096
mask |  6 | avx tbb       1136 ns         1148 ns         4096

data |  7 |               6994 ns         7024 ns         4096
data |  7 | avx           1185 ns         1168 ns         4096
data |  7 |     tbb       8304 ns         8352 ns         4096
data |  7 | avx tbb       1189 ns         1192 ns         4096
mask |  7 |               5812 ns         5838 ns         4096
mask |  7 | avx           1180 ns         1171 ns         4096
mask |  7 |     tbb       6702 ns         6750 ns         4096
mask |  7 | avx tbb       1161 ns         1165 ns         4096

data |  8 |               5846 ns         5884 ns         4096
data |  8 | avx           1104 ns         1093 ns         4096
data |  8 |     tbb       8140 ns         8183 ns         4096
data |  8 | avx tbb       1201 ns         1193 ns         4096
mask |  8 |               5909 ns         5951 ns         4096
mask |  8 | avx           1188 ns         1170 ns         4096
mask |  8 |     tbb       6723 ns         6763 ns         4096
mask |  8 | avx tbb       1196 ns         1181 ns         4096

data |  9 |               5303 ns         5323 ns         4096
data |  9 | avx           1110 ns         1099 ns         4096
data |  9 |     tbb       8167 ns         8219 ns         4096
data |  9 | avx tbb       1229 ns         1231 ns         4096
mask |  9 |               6114 ns         6144 ns         4096
mask |  9 | avx           1200 ns         1196 ns         4096
mask |  9 |     tbb       6736 ns         6767 ns         4096
mask |  9 | avx tbb       1143 ns         1147 ns         4096

data | 10 |               4877 ns         4906 ns         4096
data | 10 | avx           1116 ns         1100 ns         4096
data | 10 |     tbb       8272 ns         8326 ns         4096
data | 10 | avx tbb       1200 ns         1212 ns         4096
mask | 10 |               6095 ns         6143 ns         4096
mask | 10 | avx           1173 ns         1163 ns         4096
mask | 10 |     tbb       6708 ns         6745 ns         4096
mask | 10 | avx tbb       1164 ns         1148 ns         4096

data | 11 |               4528 ns         4555 ns         4096
data | 11 | avx           1219 ns         1210 ns         4096
data | 11 |     tbb       8023 ns         8090 ns         4096
data | 11 | avx tbb       1168 ns         1174 ns         4096
mask | 11 |               5782 ns         5805 ns         4096
mask | 11 | avx           1108 ns         1099 ns         4096
mask | 11 |     tbb       6718 ns         6759 ns         4096
mask | 11 | avx tbb       1135 ns         1126 ns         4096

data | 12 |               4198 ns         4240 ns         4096
data | 12 | avx           1083 ns         1077 ns         4096
data | 12 |     tbb       7948 ns         7998 ns         4096
data | 12 | avx tbb       1116 ns         1112 ns         4096
mask | 12 |               5850 ns         5885 ns         4096
mask | 12 | avx           1094 ns         1100 ns         4096
mask | 12 |     tbb       6848 ns         6893 ns         4096
mask | 12 | avx tbb       1221 ns         1197 ns         4096

data | 13 |               4171 ns         4205 ns         4096
data | 13 | avx           1198 ns         1189 ns         4096
data | 13 |     tbb       7903 ns         7946 ns         4096
data | 13 | avx tbb       1185 ns         1185 ns         4096
mask | 13 |               5792 ns         5838 ns         4096
mask | 13 | avx           1098 ns         1091 ns         4096
mask | 13 |     tbb       6984 ns         7013 ns         4096
mask | 13 | avx tbb       1143 ns         1130 ns         4096

data | 14 |               3855 ns         3870 ns         4096
data | 14 | avx           1173 ns         1176 ns         4096
data | 14 |     tbb       8006 ns         8050 ns         4096
data | 14 | avx tbb       1119 ns         1113 ns         4096
mask | 14 |               5896 ns         5922 ns         4096
mask | 14 | avx           1094 ns         1093 ns         4096
mask | 14 |     tbb       6713 ns         6762 ns         4096
mask | 14 | avx tbb       1183 ns         1177 ns         4096

data | 15 |               3612 ns         3649 ns         4096
data | 15 | avx           1152 ns         1140 ns         4096
data | 15 |     tbb       7871 ns         7913 ns         4096
data | 15 | avx tbb       1170 ns         1167 ns         4096
mask | 15 |               5883 ns         5931 ns         4096
mask | 15 | avx           1104 ns         1087 ns         4096
mask | 15 |     tbb       6713 ns         6756 ns         4096
mask | 15 | avx tbb       1172 ns         1167 ns         4096

data | 16 |               3443 ns         3478 ns         4096
data | 16 | avx           1136 ns         1131 ns         4096
data | 16 |     tbb       7948 ns         7985 ns         4096
data | 16 | avx tbb       1171 ns         1195 ns         4096
mask | 16 |               5855 ns         5868 ns         4096
mask | 16 | avx           1093 ns         1092 ns         4096
mask | 16 |     tbb       6680 ns         6712 ns         4096
mask | 16 | avx tbb       1188 ns         1176 ns         4096

data | 17 |               3257 ns         3289 ns         4096
data | 17 | avx           1170 ns         1174 ns         4096
data | 17 |     tbb       7783 ns         7829 ns         4096
data | 17 | avx tbb       1259 ns         1240 ns         4096
mask | 17 |               5857 ns         5895 ns         4096
mask | 17 | avx           1199 ns         1191 ns         4096
mask | 17 |     tbb       6725 ns         6771 ns         4096
mask | 17 | avx tbb       1276 ns         1263 ns         4096

data | 18 |               3275 ns         3314 ns         4096
data | 18 | avx           1277 ns         1271 ns         4096
data | 18 |     tbb       7853 ns         7897 ns         4096
data | 18 | avx tbb       1324 ns         1299 ns         4096
mask | 18 |               5866 ns         5890 ns         4096
mask | 18 | avx           1240 ns         1236 ns         4096
mask | 18 |     tbb       6671 ns         6715 ns         4096
mask | 18 | avx tbb       1324 ns         1324 ns         4096

data | 19 |               3154 ns         3186 ns         4096
data | 19 | avx           1276 ns         1265 ns         4096
data | 19 |     tbb       7978 ns         8035 ns         4096
data | 19 | avx tbb       1337 ns         1327 ns         4096
mask | 19 |               6114 ns         6155 ns         4096
mask | 19 | avx           1285 ns         1278 ns         4096
mask | 19 |     tbb       6669 ns         6729 ns         4096
mask | 19 | avx tbb       1293 ns         1277 ns         4096

data | 20 |               2892 ns         2908 ns         4096
data | 20 | avx           1199 ns         1209 ns         4096
data | 20 |     tbb       7736 ns         7778 ns         4096
data | 20 | avx tbb       1257 ns         1255 ns         4096
mask | 20 |               5822 ns         5865 ns         4096
mask | 20 | avx           1199 ns         1193 ns         4096
mask | 20 |     tbb       6627 ns         6668 ns         4096
mask | 20 | avx tbb       1242 ns         1250 ns         4096

data | 21 |               2926 ns         2975 ns         4096
data | 21 | avx           1202 ns         1208 ns         4096
data | 21 |     tbb       7806 ns         7849 ns         4096
data | 21 | avx tbb       1344 ns         1340 ns         4096
mask | 21 |               6136 ns         6181 ns         4096
mask | 21 | avx           1290 ns         1281 ns         4096
mask | 21 |     tbb       6686 ns         6727 ns         4096
mask | 21 | avx tbb       1299 ns         1278 ns         4096

data | 22 |               2749 ns         2788 ns         4096
data | 22 | avx           1199 ns         1188 ns         4096
data | 22 |     tbb       7673 ns         7719 ns         4096
data | 22 | avx tbb       1246 ns         1239 ns         4096
mask | 22 |               5753 ns         5781 ns         4096
mask | 22 | avx           1210 ns         1205 ns         4096
mask | 22 |     tbb       6870 ns         6913 ns         4096
mask | 22 | avx tbb       1285 ns         1273 ns         4096

data | 23 |               2808 ns         2841 ns         4096
data | 23 | avx           1281 ns         1268 ns         4096
data | 23 |     tbb       7703 ns         7761 ns         4096
data | 23 | avx tbb       1302 ns         1289 ns         4096
mask | 23 |               5811 ns         5854 ns         4096
mask | 23 | avx           1291 ns         1281 ns         4096
mask | 23 |     tbb       6670 ns         6703 ns         4096
mask | 23 | avx tbb       1270 ns         1262 ns         4096

data | 24 |               2629 ns         2671 ns         4096
data | 24 | avx           1213 ns         1208 ns         4096
data | 24 |     tbb       7766 ns         7807 ns         4096
data | 24 | avx tbb       1298 ns         1286 ns         4096
mask | 24 |               5802 ns         5848 ns         4096
mask | 24 | avx           1296 ns         1285 ns         4096
mask | 24 |     tbb       6783 ns         6818 ns         4096
mask | 24 | avx tbb       1285 ns         1268 ns         4096

data | 25 |               2524 ns         2564 ns         4096
data | 25 | avx           1212 ns         1202 ns         4096
data | 25 |     tbb       7667 ns         7714 ns         4096
data | 25 | avx tbb       1287 ns         1289 ns         4096
mask | 25 |               5758 ns         5795 ns         4096
mask | 25 | avx           1211 ns         1193 ns         4096
mask | 25 |     tbb       6754 ns         6807 ns         4096
mask | 25 | avx tbb       1236 ns         1248 ns         4096

data | 26 |               2470 ns         2500 ns         4096
data | 26 | avx           1204 ns         1198 ns         4096
data | 26 |     tbb       7701 ns         7752 ns         4096
data | 26 | avx tbb       1370 ns         1374 ns         4096
mask | 26 |               5990 ns         6020 ns         4096
mask | 26 | avx           1294 ns         1287 ns         4096
mask | 26 |     tbb       6783 ns         6831 ns         4096
mask | 26 | avx tbb       1285 ns         1277 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              15858 ns        15935 ns         4096
data |  1 | avx           1606 ns         1612 ns         4096
data |  1 |     tbb       9426 ns         9463 ns         4096
data |  1 | avx tbb       1760 ns         1770 ns         4096
mask |  1 |              15182 ns        15238 ns         4096
mask |  1 | avx           1715 ns         1719 ns         4096
mask |  1 |     tbb       9573 ns         9609 ns         4096
mask |  1 | avx tbb       1718 ns         1710 ns         4096

data |  2 |              80756 ns        80825 ns         4096
data |  2 | avx           2731 ns         2732 ns         4096
data |  2 |     tbb      16791 ns        16839 ns         4096
data |  2 | avx tbb       2760 ns         2799 ns         4096
mask |  2 |              21959 ns        22024 ns         4096
mask |  2 | avx           2932 ns         2934 ns         4096
mask |  2 |     tbb       9861 ns         9903 ns         4096
mask |  2 | avx tbb       2862 ns         2834 ns         4096

data |  3 |              54636 ns        54690 ns         4096
data |  3 | avx           2350 ns         2359 ns         4096
data |  3 |     tbb      13898 ns        13969 ns         4096
data |  3 | avx tbb       2649 ns         2643 ns         4096
mask |  3 |              22054 ns        22122 ns         4096
mask |  3 | avx           2437 ns         2442 ns         4096
mask |  3 |     tbb       9661 ns         9701 ns         4096
mask |  3 | avx tbb       2527 ns         2513 ns         4096

data |  4 |              41558 ns        41615 ns         4096
data |  4 | avx           2380 ns         2394 ns         4096
data |  4 |     tbb      12637 ns        12662 ns         4096
data |  4 | avx tbb       2528 ns         2534 ns         4096
mask |  4 |              20690 ns        20782 ns         4096
mask |  4 | avx           2446 ns         2456 ns         4096
mask |  4 |     tbb       9738 ns         9767 ns         4096
mask |  4 | avx tbb       2530 ns         2540 ns         4096

data |  5 |              33786 ns        33842 ns         4096
data |  5 | avx           2370 ns         2379 ns         4096
data |  5 |     tbb      11825 ns        11869 ns         4096
data |  5 | avx tbb       2496 ns         2485 ns         4096
mask |  5 |              22065 ns        22135 ns         4096
mask |  5 | avx           2425 ns         2421 ns         4096
mask |  5 |     tbb       9720 ns         9769 ns         4096
mask |  5 | avx tbb       2524 ns         2512 ns         4096

data |  6 |              28745 ns        28800 ns         4096
data |  6 | avx           2721 ns         2696 ns         4096
data |  6 |     tbb      11148 ns        11200 ns         4096
data |  6 | avx tbb       2508 ns         2522 ns         4096
mask |  6 |              21534 ns        21590 ns         4096
mask |  6 | avx           2596 ns         2601 ns         4096
mask |  6 |     tbb       9801 ns         9839 ns         4096
mask |  6 | avx tbb       2657 ns         2647 ns         4096

data |  7 |              25089 ns        25156 ns         4096
data |  7 | avx           2557 ns         2557 ns         4096
data |  7 |     tbb      10793 ns        10842 ns         4096
data |  7 | avx tbb       2498 ns         2505 ns         4096
mask |  7 |              21796 ns        21860 ns         4096
mask |  7 | avx           2427 ns         2426 ns         4096
mask |  7 |     tbb       9689 ns         9719 ns         4096
mask |  7 | avx tbb       2525 ns         2546 ns         4096

data |  8 |              21666 ns        21712 ns         4096
data |  8 | avx           2438 ns         2445 ns         4096
data |  8 |     tbb      10207 ns        10250 ns         4096
data |  8 | avx tbb       2460 ns         2436 ns         4096
mask |  8 |              21096 ns        21159 ns         4096
mask |  8 | avx           2590 ns         2590 ns         4096
mask |  8 |     tbb       9843 ns         9878 ns         4096
mask |  8 | avx tbb       2521 ns         2510 ns         4096

data |  9 |              19642 ns        19701 ns         4096
data |  9 | avx           2388 ns         2388 ns         4096
data |  9 |     tbb      10096 ns        10142 ns         4096
data |  9 | avx tbb       2466 ns         2487 ns         4096
mask |  9 |              21385 ns        21444 ns         4096
mask |  9 | avx           2613 ns         2622 ns         4096
mask |  9 |     tbb       9987 ns        10034 ns         4096
mask |  9 | avx tbb       2510 ns         2527 ns         4096

data | 10 |              17773 ns        17817 ns         4096
data | 10 | avx           2352 ns         2358 ns         4096
data | 10 |     tbb       9858 ns         9912 ns         4096
data | 10 | avx tbb       2479 ns         2494 ns         4096
mask | 10 |              21520 ns        21581 ns         4096
mask | 10 | avx           2576 ns         2582 ns         4096
mask | 10 |     tbb       9871 ns         9903 ns         4096
mask | 10 | avx tbb       2532 ns         2543 ns         4096

data | 11 |              15336 ns        15384 ns         4096
data | 11 | avx           2455 ns         2459 ns         4096
data | 11 |     tbb       9797 ns         9850 ns         4096
data | 11 | avx tbb       2545 ns         2526 ns         4096
mask | 11 |              21691 ns        21741 ns         4096
mask | 11 | avx           2498 ns         2486 ns         4096
mask | 11 |     tbb       9697 ns         9731 ns         4096
mask | 11 | avx tbb       2467 ns         2458 ns         4096

data | 12 |              14068 ns        14119 ns         4096
data | 12 | avx           2390 ns         2404 ns         4096
data | 12 |     tbb       9447 ns         9495 ns         4096
data | 12 | avx tbb       2497 ns         2502 ns         4096
mask | 12 |              21409 ns        21473 ns         4096
mask | 12 | avx           2571 ns         2582 ns         4096
mask | 12 |     tbb       9668 ns         9709 ns         4096
mask | 12 | avx tbb       2551 ns         2565 ns         4096

data | 13 |              13901 ns        13941 ns         4096
data | 13 | avx           2582 ns         2581 ns         4096
data | 13 |     tbb       9211 ns         9258 ns         4096
data | 13 | avx tbb       2638 ns         2624 ns         4096
mask | 13 |              21400 ns        21472 ns         4096
mask | 13 | avx           2559 ns         2560 ns         4096
mask | 13 |     tbb       9643 ns         9675 ns         4096
mask | 13 | avx tbb       2485 ns         2508 ns         4096

data | 14 |              12255 ns        12292 ns         4096
data | 14 | avx           2345 ns         2364 ns         4096
data | 14 |     tbb       9068 ns         9123 ns         4096
data | 14 | avx tbb       2511 ns         2503 ns         4096
mask | 14 |              21190 ns        21250 ns         4096
mask | 14 | avx           2567 ns         2565 ns         4096
mask | 14 |     tbb       9657 ns         9686 ns         4096
mask | 14 | avx tbb       2560 ns         2554 ns         4096

data | 15 |              12239 ns        12288 ns         4096
data | 15 | avx           2629 ns         2622 ns         4096
data | 15 |     tbb       9087 ns         9149 ns         4096
data | 15 | avx tbb       2567 ns         2550 ns         4096
mask | 15 |              22979 ns        23069 ns         4096
mask | 15 | avx           2576 ns         2588 ns         4096
mask | 15 |     tbb      11790 ns        11837 ns         4096
mask | 15 | avx tbb       2657 ns         2652 ns         4096

data | 16 |              11612 ns        11652 ns         4096
data | 16 | avx           2642 ns         2640 ns         4096
data | 16 |     tbb       9946 ns         9988 ns         4096
data | 16 | avx tbb       2591 ns         2578 ns         4096
mask | 16 |              23483 ns        23542 ns         4096
mask | 16 | avx           2653 ns         2665 ns         4096
mask | 16 |     tbb      10675 ns        10711 ns         4096
mask | 16 | avx tbb       2722 ns         2708 ns         4096

data | 17 |              11141 ns        11181 ns         4096
data | 17 | avx           2767 ns         2764 ns         4096
data | 17 |     tbb      11526 ns        11532 ns         4096
data | 17 | avx tbb       3076 ns         3072 ns         4096
mask | 17 |              21995 ns        22061 ns         4096
mask | 17 | avx           2591 ns         2605 ns         4096
mask | 17 |     tbb      10025 ns        10061 ns         4096
mask | 17 | avx tbb       2697 ns         2703 ns         4096

data | 18 |               9845 ns         9875 ns         4096
data | 18 | avx           2775 ns         2787 ns         4096
data | 18 |     tbb       9000 ns         9037 ns         4096
data | 18 | avx tbb       2885 ns         2905 ns         4096
mask | 18 |              21543 ns        21607 ns         4096
mask | 18 | avx           2765 ns         2758 ns         4096
mask | 18 |     tbb       9973 ns        10003 ns         4096
mask | 18 | avx tbb       2858 ns         2839 ns         4096

data | 19 |               9958 ns         9996 ns         4096
data | 19 | avx           2750 ns         2753 ns         4096
data | 19 |     tbb       9022 ns         9069 ns         4096
data | 19 | avx tbb       3020 ns         2973 ns         4096
mask | 19 |              21341 ns        21404 ns         4096
mask | 19 | avx           2756 ns         2766 ns         4096
mask | 19 |     tbb       9768 ns         9806 ns         4096
mask | 19 | avx tbb       2675 ns         2684 ns         4096

data | 20 |               9482 ns         9525 ns         4096
data | 20 | avx           2742 ns         2744 ns         4096
data | 20 |     tbb       8741 ns         8782 ns         4096
data | 20 | avx tbb       2884 ns         2890 ns         4096
mask | 20 |              20663 ns        20727 ns         4096
mask | 20 | avx           2619 ns         2631 ns         4096
mask | 20 |     tbb       9652 ns         9696 ns         4096
mask | 20 | avx tbb       2694 ns         2674 ns         4096

data | 21 |               8912 ns         8955 ns         4096
data | 21 | avx           2750 ns         2751 ns         4096
data | 21 |     tbb       8796 ns         8837 ns         4096
data | 21 | avx tbb       2854 ns         2878 ns         4096
mask | 21 |              20651 ns        20716 ns         4096
mask | 21 | avx           2584 ns         2588 ns         4096
mask | 21 |     tbb       9680 ns         9710 ns         4096
mask | 21 | avx tbb       2699 ns         2690 ns         4096

data | 22 |               8218 ns         8253 ns         4096
data | 22 | avx           2554 ns         2550 ns         4096
data | 22 |     tbb       8696 ns         8733 ns         4096
data | 22 | avx tbb       2822 ns         2818 ns         4096
mask | 22 |              20747 ns        20810 ns         4096
mask | 22 | avx           2603 ns         2605 ns         4096
mask | 22 |     tbb       9771 ns         9807 ns         4096
mask | 22 | avx tbb       2699 ns         2693 ns         4096

data | 23 |               8407 ns         8453 ns         4096
data | 23 | avx           2735 ns         2739 ns         4096
data | 23 |     tbb       8492 ns         8533 ns         4096
data | 23 | avx tbb       2874 ns         2878 ns         4096
mask | 23 |              21109 ns        21164 ns         4096
mask | 23 | avx           2763 ns         2767 ns         4096
mask | 23 |     tbb       9709 ns         9747 ns         4096
mask | 23 | avx tbb       2732 ns         2705 ns         4096

data | 24 |               7955 ns         7987 ns         4096
data | 24 | avx           2741 ns         2744 ns         4096
data | 24 |     tbb       8681 ns         8725 ns         4096
data | 24 | avx tbb       2897 ns         2914 ns         4096
mask | 24 |              21871 ns        21939 ns         4096
mask | 24 | avx           2611 ns         2599 ns         4096
mask | 24 |     tbb       9763 ns         9810 ns         4096
mask | 24 | avx tbb       2717 ns         2698 ns         4096

data | 25 |               7352 ns         7400 ns         4096
data | 25 | avx           2773 ns         2788 ns         4096
data | 25 |     tbb       8504 ns         8549 ns         4096
data | 25 | avx tbb       2889 ns         2892 ns         4096
mask | 25 |              20657 ns        20716 ns         4096
mask | 25 | avx           2572 ns         2585 ns         4096
mask | 25 |     tbb       9945 ns        10010 ns         4096
mask | 25 | avx tbb       2777 ns         2774 ns         4096

data | 26 |               7617 ns         7660 ns         4096
data | 26 | avx           2753 ns         2756 ns         4096
data | 26 |     tbb       8625 ns         8669 ns         4096
data | 26 | avx tbb       2927 ns         2933 ns         4096
mask | 26 |              21211 ns        21286 ns         4096
mask | 26 | avx           2824 ns         2790 ns         4096
mask | 26 |     tbb       9896 ns         9917 ns         4096
mask | 26 | avx tbb       2731 ns         2744 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              60356 ns        60414 ns         2048
data |  1 | avx           5047 ns         5041 ns         2048
data |  1 |     tbb      19582 ns        19496 ns         2048
data |  1 | avx tbb       5269 ns         5241 ns         2048
mask |  1 |              57724 ns        57779 ns         2048
mask |  1 | avx           5018 ns         4989 ns         2048
mask |  1 |     tbb      20505 ns        20422 ns         2048
mask |  1 | avx tbb       5301 ns         5289 ns         2048

data |  2 |             317062 ns       317168 ns         2048
data |  2 | avx           8636 ns         8598 ns         2048
data |  2 |     tbb      42427 ns        42367 ns         2048
data |  2 | avx tbb       9383 ns         9368 ns         2048
mask |  2 |              80629 ns        80676 ns         2048
mask |  2 | avx           9165 ns         9143 ns         2048
mask |  2 |     tbb      22392 ns        22282 ns         2048
mask |  2 | avx tbb       9905 ns         9870 ns         2048

data |  3 |             212632 ns       212694 ns         2048
data |  3 | avx           7483 ns         7465 ns         2048
data |  3 |     tbb      32090 ns        32013 ns         2048
data |  3 | avx tbb       7969 ns         7907 ns         2048
mask |  3 |              83008 ns        83063 ns         2048
mask |  3 | avx           8002 ns         7988 ns         2048
mask |  3 |     tbb      22153 ns        22063 ns         2048
mask |  3 | avx tbb       8352 ns         8330 ns         2048

data |  4 |             160587 ns       160638 ns         2048
data |  4 | avx           7523 ns         7498 ns         2048
data |  4 |     tbb      26268 ns        26197 ns         2048
data |  4 | avx tbb       7867 ns         7871 ns         2048
mask |  4 |              83133 ns        83182 ns         2048
mask |  4 | avx           8709 ns         8698 ns         2048
mask |  4 |     tbb      22199 ns        22106 ns         2048
mask |  4 | avx tbb       8585 ns         8579 ns         2048

data |  5 |             129275 ns       129343 ns         2048
data |  5 | avx           7519 ns         7494 ns         2048
data |  5 |     tbb      24085 ns        24049 ns         2048
data |  5 | avx tbb       8038 ns         8035 ns         2048
mask |  5 |              83478 ns        83536 ns         2048
mask |  5 | avx           8058 ns         8043 ns         2048
mask |  5 |     tbb      22007 ns        21916 ns         2048
mask |  5 | avx tbb       8358 ns         8351 ns         2048

data |  6 |             108403 ns       108427 ns         2048
data |  6 | avx           7581 ns         7563 ns         2048
data |  6 |     tbb      21459 ns        21389 ns         2048
data |  6 | avx tbb       8003 ns         7975 ns         2048
mask |  6 |              83427 ns        83477 ns         2048
mask |  6 | avx           8151 ns         8134 ns         2048
mask |  6 |     tbb      22106 ns        22012 ns         2048
mask |  6 | avx tbb       8785 ns         8761 ns         2048

data |  7 |              95437 ns        95471 ns         2048
data |  7 | avx           7483 ns         7452 ns         2048
data |  7 |     tbb      19821 ns        19730 ns         2048
data |  7 | avx tbb       7877 ns         7869 ns         2048
mask |  7 |              83169 ns        83232 ns         2048
mask |  7 | avx           7952 ns         7937 ns         2048
mask |  7 |     tbb      22446 ns        22366 ns         2048
mask |  7 | avx tbb       8611 ns         8569 ns         2048

data |  8 |              84072 ns        84126 ns         2048
data |  8 | avx           7538 ns         7508 ns         2048
data |  8 |     tbb      18179 ns        18082 ns         2048
data |  8 | avx tbb       8077 ns         8038 ns         2048
mask |  8 |              85085 ns        85118 ns         2048
mask |  8 | avx           8057 ns         8049 ns         2048
mask |  8 |     tbb      22511 ns        22420 ns         2048
mask |  8 | avx tbb       8432 ns         8408 ns         2048

data |  9 |              70836 ns        70877 ns         2048
data |  9 | avx           7528 ns         7508 ns         2048
data |  9 |     tbb      17187 ns        17100 ns         2048
data |  9 | avx tbb       7877 ns         7849 ns         2048
mask |  9 |              83197 ns        83250 ns         2048
mask |  9 | avx           8122 ns         8111 ns         2048
mask |  9 |     tbb      22567 ns        22485 ns         2048
mask |  9 | avx tbb       8739 ns         8695 ns         2048

data | 10 |              66816 ns        66863 ns         2048
data | 10 | avx           7447 ns         7422 ns         2048
data | 10 |     tbb      16818 ns        16734 ns         2048
data | 10 | avx tbb       7987 ns         7935 ns         2048
mask | 10 |              84743 ns        84814 ns         2048
mask | 10 | avx           7993 ns         7974 ns         2048
mask | 10 |     tbb      22822 ns        22712 ns         2048
mask | 10 | avx tbb       8334 ns         8304 ns         2048

data | 11 |              60083 ns        60101 ns         2048
data | 11 | avx           7791 ns         7793 ns         2048
data | 11 |     tbb      16472 ns        16386 ns         2048
data | 11 | avx tbb       7914 ns         7903 ns         2048
mask | 11 |              83308 ns        83330 ns         2048
mask | 11 | avx           7873 ns         7838 ns         2048
mask | 11 |     tbb      22614 ns        22533 ns         2048
mask | 11 | avx tbb       8279 ns         8251 ns         2048

data | 12 |              55988 ns        56024 ns         2048
data | 12 | avx           7412 ns         7400 ns         2048
data | 12 |     tbb      15495 ns        15438 ns         2048
data | 12 | avx tbb       7843 ns         7804 ns         2048
mask | 12 |              83043 ns        83102 ns         2048
mask | 12 | avx           7958 ns         7928 ns         2048
mask | 12 |     tbb      22097 ns        22016 ns         2048
mask | 12 | avx tbb       8217 ns         8201 ns         2048

data | 13 |              52295 ns        52338 ns         2048
data | 13 | avx           7643 ns         7631 ns         2048
data | 13 |     tbb      15344 ns        15316 ns         2048
data | 13 | avx tbb       8313 ns         8284 ns         2048
mask | 13 |              83281 ns        83316 ns         2048
mask | 13 | avx           7941 ns         7923 ns         2048
mask | 13 |     tbb      21730 ns        21665 ns         2048
mask | 13 | avx tbb       8318 ns         8306 ns         2048

data | 14 |              48844 ns        48883 ns         2048
data | 14 | avx           7497 ns         7463 ns         2048
data | 14 |     tbb      14622 ns        14544 ns         2048
data | 14 | avx tbb       7809 ns         7812 ns         2048
mask | 14 |              83172 ns        83223 ns         2048
mask | 14 | avx           7931 ns         7897 ns         2048
mask | 14 |     tbb      22414 ns        22325 ns         2048
mask | 14 | avx tbb       8453 ns         8431 ns         2048

data | 15 |              45727 ns        45752 ns         2048
data | 15 | avx           7849 ns         7839 ns         2048
data | 15 |     tbb      14500 ns        14416 ns         2048
data | 15 | avx tbb       8258 ns         8209 ns         2048
mask | 15 |              83247 ns        83290 ns         2048
mask | 15 | avx           7966 ns         7940 ns         2048
mask | 15 |     tbb      21746 ns        21649 ns         2048
mask | 15 | avx tbb       8335 ns         8297 ns         2048

data | 16 |              42728 ns        42754 ns         2048
data | 16 | avx           7739 ns         7721 ns         2048
data | 16 |     tbb      14382 ns        14300 ns         2048
data | 16 | avx tbb       8462 ns         8376 ns         2048
mask | 16 |              83078 ns        83113 ns         2048
mask | 16 | avx           7974 ns         7935 ns         2048
mask | 16 |     tbb      22055 ns        21948 ns         2048
mask | 16 | avx tbb       8362 ns         8359 ns         2048

data | 17 |              40331 ns        40348 ns         2048
data | 17 | avx           8152 ns         8127 ns         2048
data | 17 |     tbb      14053 ns        13969 ns         2048
data | 17 | avx tbb       9443 ns         9416 ns         2048
mask | 17 |              83382 ns        83413 ns         2048
mask | 17 | avx           8117 ns         8113 ns         2048
mask | 17 |     tbb      22296 ns        22198 ns         2048
mask | 17 | avx tbb       8595 ns         8642 ns         2048

data | 18 |              37673 ns        37699 ns         2048
data | 18 | avx           8656 ns         8631 ns         2048
data | 18 |     tbb      13610 ns        13518 ns         2048
data | 18 | avx tbb       9354 ns         9303 ns         2048
mask | 18 |              83263 ns        83313 ns         2048
mask | 18 | avx           8258 ns         8256 ns         2048
mask | 18 |     tbb      21951 ns        21873 ns         2048
mask | 18 | avx tbb       8596 ns         8607 ns         2048

data | 19 |              34658 ns        34661 ns         2048
data | 19 | avx           8261 ns         8243 ns         2048
data | 19 |     tbb      13547 ns        13453 ns         2048
data | 19 | avx tbb       9469 ns         9477 ns         2048
mask | 19 |              82073 ns        82139 ns         2048
mask | 19 | avx           8195 ns         8192 ns         2048
mask | 19 |     tbb      22492 ns        22386 ns         2048
mask | 19 | avx tbb       8583 ns         8548 ns         2048

data | 20 |              32914 ns        32931 ns         2048
data | 20 | avx           8248 ns         8224 ns         2048
data | 20 |     tbb      13808 ns        13724 ns         2048
data | 20 | avx tbb       9620 ns         9600 ns         2048
mask | 20 |              83212 ns        83276 ns         2048
mask | 20 | avx           8260 ns         8247 ns         2048
mask | 20 |     tbb      22129 ns        22048 ns         2048
mask | 20 | avx tbb       8753 ns         8706 ns         2048

data | 21 |              33493 ns        33521 ns         2048
data | 21 | avx           8247 ns         8222 ns         2048
data | 21 |     tbb      13081 ns        12991 ns         2048
data | 21 | avx tbb       9540 ns         9491 ns         2048
mask | 21 |              82971 ns        83014 ns         2048
mask | 21 | avx           8268 ns         8255 ns         2048
mask | 21 |     tbb      22203 ns        22117 ns         2048
mask | 21 | avx tbb       8766 ns         8751 ns         2048

data | 22 |              31470 ns        31493 ns         2048
data | 22 | avx           8632 ns         8615 ns         2048
data | 22 |     tbb      13497 ns        13414 ns         2048
data | 22 | avx tbb       9419 ns         9460 ns         2048
mask | 22 |              83115 ns        83164 ns         2048
mask | 22 | avx           8235 ns         8223 ns         2048
mask | 22 |     tbb      22555 ns        22474 ns         2048
mask | 22 | avx tbb       8558 ns         8600 ns         2048

data | 23 |              29483 ns        29501 ns         2048
data | 23 | avx           8804 ns         8764 ns         2048
data | 23 |     tbb      12865 ns        12779 ns         2048
data | 23 | avx tbb       9553 ns         9533 ns         2048
mask | 23 |              82668 ns        82712 ns         2048
mask | 23 | avx           8230 ns         8200 ns         2048
mask | 23 |     tbb      22204 ns        22124 ns         2048
mask | 23 | avx tbb       8581 ns         8586 ns         2048

data | 24 |              29541 ns        29553 ns         2048
data | 24 | avx           8152 ns         8138 ns         2048
data | 24 |     tbb      12909 ns        12834 ns         2048
data | 24 | avx tbb       9302 ns         9263 ns         2048
mask | 24 |              83595 ns        83671 ns         2048
mask | 24 | avx           8197 ns         8192 ns         2048
mask | 24 |     tbb      22128 ns        22038 ns         2048
mask | 24 | avx tbb       8775 ns         8762 ns         2048

data | 25 |              27969 ns        27996 ns         2048
data | 25 | avx           8694 ns         8669 ns         2048
data | 25 |     tbb      12617 ns        12527 ns         2048
data | 25 | avx tbb       9335 ns         9327 ns         2048
mask | 25 |              80526 ns        80578 ns         2048
mask | 25 | avx           8228 ns         8217 ns         2048
mask | 25 |     tbb      21752 ns        21666 ns         2048
mask | 25 | avx tbb       8879 ns         8888 ns         2048

data | 26 |              25754 ns        25780 ns         2048
data | 26 | avx           8196 ns         8205 ns         2048
data | 26 |     tbb      12674 ns        12583 ns         2048
data | 26 | avx tbb       9242 ns         9218 ns         2048
mask | 26 |              83173 ns        83224 ns         2048
mask | 26 | avx           8166 ns         8160 ns         2048
mask | 26 |     tbb      23602 ns        23526 ns         2048
mask | 26 | avx tbb       8661 ns         8684 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             237870 ns       237975 ns         1024
data |  1 | avx          48122 ns        48135 ns         1024
data |  1 |     tbb      57684 ns        57581 ns         1024
data |  1 | avx tbb      40544 ns        40405 ns         1024
mask |  1 |             234991 ns       235104 ns         1024
mask |  1 | avx          48260 ns        48274 ns         1024
mask |  1 |     tbb      55896 ns        55784 ns         1024
mask |  1 | avx tbb      39884 ns        39751 ns         1024

data |  2 |            1254592 ns      1254836 ns         1024
data |  2 | avx          57922 ns        57909 ns         1024
data |  2 |     tbb     135584 ns       135500 ns         1024
data |  2 | avx tbb      41008 ns        40880 ns         1024
mask |  2 |             325983 ns       326090 ns         1024
mask |  2 | avx          58385 ns        58402 ns         1024
mask |  2 |     tbb      64694 ns        64582 ns         1024
mask |  2 | avx tbb      42420 ns        42305 ns         1024

data |  3 |             838278 ns       838487 ns         1024
data |  3 | avx          53851 ns        53858 ns         1024
data |  3 |     tbb      99988 ns        99901 ns         1024
data |  3 | avx tbb      40699 ns        40516 ns         1024
mask |  3 |             325370 ns       325485 ns         1024
mask |  3 | avx          55746 ns        55759 ns         1024
mask |  3 |     tbb      64908 ns        64812 ns         1024
mask |  3 | avx tbb      40474 ns        40318 ns         1024

data |  4 |             636605 ns       636793 ns         1024
data |  4 | avx          53818 ns        53811 ns         1024
data |  4 |     tbb      73772 ns        73699 ns         1024
data |  4 | avx tbb      40643 ns        40490 ns         1024
mask |  4 |             327032 ns       327158 ns         1024
mask |  4 | avx          55388 ns        55402 ns         1024
mask |  4 |     tbb      67206 ns        67130 ns         1024
mask |  4 | avx tbb      41065 ns        40928 ns         1024

data |  5 |             507528 ns       507670 ns         1024
data |  5 | avx          53935 ns        53942 ns         1024
data |  5 |     tbb      64452 ns        64355 ns         1024
data |  5 | avx tbb      41517 ns        41385 ns         1024
mask |  5 |             324916 ns       325031 ns         1024
mask |  5 | avx          55100 ns        55117 ns         1024
mask |  5 |     tbb      67655 ns        67551 ns         1024
mask |  5 | avx tbb      40777 ns        40644 ns         1024

data |  6 |             425441 ns       425572 ns         1024
data |  6 | avx          53911 ns        53918 ns         1024
data |  6 |     tbb      54398 ns        54263 ns         1024
data |  6 | avx tbb      40383 ns        40243 ns         1024
mask |  6 |             326131 ns       326263 ns         1024
mask |  6 | avx          55145 ns        55146 ns         1024
mask |  6 |     tbb      67304 ns        67190 ns         1024
mask |  6 | avx tbb      41218 ns        41092 ns         1024

data |  7 |             365819 ns       365939 ns         1024
data |  7 | avx          53838 ns        53835 ns         1024
data |  7 |     tbb      50306 ns        50192 ns         1024
data |  7 | avx tbb      40563 ns        40415 ns         1024
mask |  7 |             324998 ns       325118 ns         1024
mask |  7 | avx          55282 ns        55315 ns         1024
mask |  7 |     tbb      65399 ns        65288 ns         1024
mask |  7 | avx tbb      41836 ns        41724 ns         1024

data |  8 |             324219 ns       324329 ns         1024
data |  8 | avx          54296 ns        54321 ns         1024
data |  8 |     tbb      48602 ns        48459 ns         1024
data |  8 | avx tbb      40472 ns        40338 ns         1024
mask |  8 |             325336 ns       325433 ns         1024
mask |  8 | avx          55227 ns        55241 ns         1024
mask |  8 |     tbb      64646 ns        64546 ns         1024
mask |  8 | avx tbb      40414 ns        40294 ns         1024

data |  9 |             288092 ns       288209 ns         1024
data |  9 | avx          53760 ns        53777 ns         1024
data |  9 |     tbb      46912 ns        46812 ns         1024
data |  9 | avx tbb      43030 ns        42850 ns         1024
mask |  9 |             325887 ns       325986 ns         1024
mask |  9 | avx          55373 ns        55406 ns         1024
mask |  9 |     tbb      65591 ns        65437 ns         1024
mask |  9 | avx tbb      40599 ns        40458 ns         1024

data | 10 |             261585 ns       261713 ns         1024
data | 10 | avx          53798 ns        53826 ns         1024
data | 10 |     tbb      46039 ns        45964 ns         1024
data | 10 | avx tbb      41257 ns        41118 ns         1024
mask | 10 |             325214 ns       325349 ns         1024
mask | 10 | avx          55522 ns        55546 ns         1024
mask | 10 |     tbb      65531 ns        65446 ns         1024
mask | 10 | avx tbb      42122 ns        42002 ns         1024

data | 11 |             236979 ns       237074 ns         1024
data | 11 | avx          53903 ns        53914 ns         1024
data | 11 |     tbb      46592 ns        46483 ns         1024
data | 11 | avx tbb      41903 ns        41735 ns         1024
mask | 11 |             327688 ns       327803 ns         1024
mask | 11 | avx          55781 ns        55816 ns         1024
mask | 11 |     tbb      66305 ns        66212 ns         1024
mask | 11 | avx tbb      40600 ns        40459 ns         1024

data | 12 |             218530 ns       218616 ns         1024
data | 12 | avx          54374 ns        54369 ns         1024
data | 12 |     tbb      45241 ns        45109 ns         1024
data | 12 | avx tbb      40597 ns        40452 ns         1024
mask | 12 |             326853 ns       326987 ns         1024
mask | 12 | avx          55286 ns        55305 ns         1024
mask | 12 |     tbb      67238 ns        67170 ns         1024
mask | 12 | avx tbb      41225 ns        41113 ns         1024

data | 13 |             201801 ns       201889 ns         1024
data | 13 | avx          53860 ns        53874 ns         1024
data | 13 |     tbb      46359 ns        46206 ns         1024
data | 13 | avx tbb      41172 ns        41008 ns         1024
mask | 13 |             327258 ns       327357 ns         1024
mask | 13 | avx          55079 ns        55128 ns         1024
mask | 13 |     tbb      64431 ns        64332 ns         1024
mask | 13 | avx tbb      40701 ns        40566 ns         1024

data | 14 |             188824 ns       188923 ns         1024
data | 14 | avx          53926 ns        53940 ns         1024
data | 14 |     tbb      44222 ns        44117 ns         1024
data | 14 | avx tbb      40991 ns        40841 ns         1024
mask | 14 |             327292 ns       327423 ns         1024
mask | 14 | avx          54991 ns        55014 ns         1024
mask | 14 |     tbb      69676 ns        68726 ns         1024
mask | 14 | avx tbb      40864 ns        40740 ns         1024

data | 15 |             176702 ns       176775 ns         1024
data | 15 | avx          53911 ns        53924 ns         1024
data | 15 |     tbb      46750 ns        46571 ns         1024
data | 15 | avx tbb      41061 ns        40900 ns         1024
mask | 15 |             326036 ns       326145 ns         1024
mask | 15 | avx          54938 ns        54937 ns         1024
mask | 15 |     tbb      65289 ns        65195 ns         1024
mask | 15 | avx tbb      40540 ns        40421 ns         1024

data | 16 |             166919 ns       166989 ns         1024
data | 16 | avx          53660 ns        53670 ns         1024
data | 16 |     tbb      44821 ns        44687 ns         1024
data | 16 | avx tbb      40958 ns        40821 ns         1024
mask | 16 |             325330 ns       325444 ns         1024
mask | 16 | avx          55227 ns        55216 ns         1024
mask | 16 |     tbb      65397 ns        65289 ns         1024
mask | 16 | avx tbb      41023 ns        40884 ns         1024

data | 17 |             158108 ns       158186 ns         1024
data | 17 | avx          54300 ns        54293 ns         1024
data | 17 |     tbb      44073 ns        43976 ns         1024
data | 17 | avx tbb      41581 ns        41392 ns         1024
mask | 17 |             325904 ns       326018 ns         1024
mask | 17 | avx          54402 ns        54408 ns         1024
mask | 17 |     tbb      65446 ns        65352 ns         1024
mask | 17 | avx tbb      40646 ns        40515 ns         1024

data | 18 |             151203 ns       151255 ns         1024
data | 18 | avx          56123 ns        56117 ns         1024
data | 18 |     tbb      43933 ns        43804 ns         1024
data | 18 | avx tbb      40815 ns        40653 ns         1024
mask | 18 |             326208 ns       326314 ns         1024
mask | 18 | avx          56314 ns        56336 ns         1024
mask | 18 |     tbb      64727 ns        64620 ns         1024
mask | 18 | avx tbb      42174 ns        42047 ns         1024

data | 19 |             143488 ns       143558 ns         1024
data | 19 | avx          55658 ns        55676 ns         1024
data | 19 |     tbb      44887 ns        44786 ns         1024
data | 19 | avx tbb      42087 ns        41948 ns         1024
mask | 19 |             326923 ns       327035 ns         1024
mask | 19 | avx          56645 ns        56641 ns         1024
mask | 19 |     tbb      65964 ns        65870 ns         1024
mask | 19 | avx tbb      40517 ns        40400 ns         1024

data | 20 |             136800 ns       136881 ns         1024
data | 20 | avx          55926 ns        55939 ns         1024
data | 20 |     tbb      44410 ns        44289 ns         1024
data | 20 | avx tbb      40609 ns        40476 ns         1024
mask | 20 |             327747 ns       327855 ns         1024
mask | 20 | avx          56148 ns        56153 ns         1024
mask | 20 |     tbb      67682 ns        67540 ns         1024
mask | 20 | avx tbb      41032 ns        40861 ns         1024

data | 21 |             132590 ns       132677 ns         1024
data | 21 | avx          56160 ns        56169 ns         1024
data | 21 |     tbb      44840 ns        44728 ns         1024
data | 21 | avx tbb      40835 ns        40693 ns         1024
mask | 21 |             327918 ns       328013 ns         1024
mask | 21 | avx          56261 ns        56296 ns         1024
mask | 21 |     tbb      65953 ns        65850 ns         1024
mask | 21 | avx tbb      40855 ns        40733 ns         1024

data | 22 |             124863 ns       124931 ns         1024
data | 22 | avx          55984 ns        56002 ns         1024
data | 22 |     tbb      43685 ns        43484 ns         1024
data | 22 | avx tbb      42185 ns        42023 ns         1024
mask | 22 |             325596 ns       325732 ns         1024
mask | 22 | avx          56891 ns        56907 ns         1024
mask | 22 |     tbb      66062 ns        65964 ns         1024
mask | 22 | avx tbb      41177 ns        41041 ns         1024

data | 23 |             118888 ns       118966 ns         1024
data | 23 | avx          56274 ns        56294 ns         1024
data | 23 |     tbb      44524 ns        44382 ns         1024
data | 23 | avx tbb      41320 ns        41173 ns         1024
mask | 23 |             326327 ns       326443 ns         1024
mask | 23 | avx          56372 ns        56389 ns         1024
mask | 23 |     tbb      64976 ns        64877 ns         1024
mask | 23 | avx tbb      42795 ns        41922 ns         1024

data | 24 |             116112 ns       116177 ns         1024
data | 24 | avx          56151 ns        56171 ns         1024
data | 24 |     tbb      43147 ns        43018 ns         1024
data | 24 | avx tbb      41259 ns        41096 ns         1024
mask | 24 |             326209 ns       326342 ns         1024
mask | 24 | avx          56277 ns        56283 ns         1024
mask | 24 |     tbb      68049 ns        67955 ns         1024
mask | 24 | avx tbb      40779 ns        40649 ns         1024

data | 25 |             126287 ns       126355 ns         1024
data | 25 | avx          55878 ns        55903 ns         1024
data | 25 |     tbb      44974 ns        44846 ns         1024
data | 25 | avx tbb      42170 ns        42031 ns         1024
mask | 25 |             327193 ns       327303 ns         1024
mask | 25 | avx          56228 ns        56258 ns         1024
mask | 25 |     tbb      65511 ns        65447 ns         1024
mask | 25 | avx tbb      41109 ns        40948 ns         1024

data | 26 |             110840 ns       110886 ns         1024
data | 26 | avx          57060 ns        57064 ns         1024
data | 26 |     tbb      44748 ns        44640 ns         1024
data | 26 | avx tbb      41123 ns        40977 ns         1024
mask | 26 |             326408 ns       326503 ns         1024
mask | 26 | avx          56350 ns        56359 ns         1024
mask | 26 |     tbb      65914 ns        65790 ns         1024
mask | 26 | avx tbb      41822 ns        41694 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             940763 ns       940941 ns          512
data |  1 | avx         184133 ns       183955 ns          512
data |  1 |     tbb     302059 ns       302017 ns          512
data |  1 | avx tbb     194267 ns       194282 ns          512
mask |  1 |             945672 ns       946142 ns          512
mask |  1 | avx         183501 ns       183382 ns          512
mask |  1 |     tbb     306396 ns       306421 ns          512
mask |  1 | avx tbb     191068 ns       191176 ns          512

data |  2 |            5027501 ns      5026964 ns          512
data |  2 | avx         222822 ns       222711 ns          512
data |  2 |     tbb     592042 ns       592084 ns          512
data |  2 | avx tbb     194611 ns       194604 ns          512
mask |  2 |            1289572 ns      1289761 ns          512
mask |  2 | avx         228551 ns       228509 ns          512
mask |  2 |     tbb     331380 ns       331400 ns          512
mask |  2 | avx tbb     194392 ns       194340 ns          512

data |  3 |            3346183 ns      3346305 ns          512
data |  3 | avx         208814 ns       208602 ns          512
data |  3 |     tbb     438405 ns       438291 ns          512
data |  3 | avx tbb     194168 ns       194168 ns          512
mask |  3 |            1295182 ns      1295411 ns          512
mask |  3 | avx         214585 ns       214444 ns          512
mask |  3 |     tbb     330104 ns       330099 ns          512
mask |  3 | avx tbb     191039 ns       191021 ns          512

data |  4 |            2515172 ns      2515339 ns          512
data |  4 | avx         206934 ns       206852 ns          512
data |  4 |     tbb     364505 ns       363354 ns          512
data |  4 | avx tbb     190746 ns       190743 ns          512
mask |  4 |            1318905 ns      1319077 ns          512
mask |  4 | avx         214374 ns       214290 ns          512
mask |  4 |     tbb     320452 ns       320456 ns          512
mask |  4 | avx tbb     191863 ns       191870 ns          512

data |  5 |            2032240 ns      2032469 ns          512
data |  5 | avx         211749 ns       211610 ns          512
data |  5 |     tbb     326005 ns       325996 ns          512
data |  5 | avx tbb     193546 ns       193473 ns          512
mask |  5 |            1294023 ns      1294236 ns          512
mask |  5 | avx         213495 ns       213427 ns          512
mask |  5 |     tbb     328847 ns       328822 ns          512
mask |  5 | avx tbb     195048 ns       193560 ns          512

data |  6 |            1684170 ns      1684343 ns          512
data |  6 | avx         208247 ns       208138 ns          512
data |  6 |     tbb     306739 ns       306667 ns          512
data |  6 | avx tbb     196539 ns       196524 ns          512
mask |  6 |            1306992 ns      1307106 ns          512
mask |  6 | avx         214483 ns       214373 ns          512
mask |  6 |     tbb     328920 ns       327381 ns          512
mask |  6 | avx tbb     193442 ns       193417 ns          512

data |  7 |            1461935 ns      1462087 ns          512
data |  7 | avx         208782 ns       208669 ns          512
data |  7 |     tbb     301577 ns       301583 ns          512
data |  7 | avx tbb     201933 ns       201936 ns          512
mask |  7 |            1303905 ns      1304088 ns          512
mask |  7 | avx         213636 ns       213546 ns          512
mask |  7 |     tbb     336163 ns       334665 ns          512
mask |  7 | avx tbb     191848 ns       191808 ns          512

data |  8 |            1277376 ns      1277531 ns          512
data |  8 | avx         208520 ns       208418 ns          512
data |  8 |     tbb     291409 ns       291399 ns          512
data |  8 | avx tbb     205855 ns       205874 ns          512
mask |  8 |            1313954 ns      1314115 ns          512
mask |  8 | avx         214518 ns       214432 ns          512
mask |  8 |     tbb     327467 ns       327443 ns          512
mask |  8 | avx tbb     207131 ns       205584 ns          512

data |  9 |            1161712 ns      1161844 ns          512
data |  9 | avx         207781 ns       207648 ns          512
data |  9 |     tbb     289358 ns       289352 ns          512
data |  9 | avx tbb     205609 ns       205614 ns          512
mask |  9 |            1302495 ns      1302698 ns          512
mask |  9 | avx         215593 ns       215505 ns          512
mask |  9 |     tbb     326122 ns       326142 ns          512
mask |  9 | avx tbb     191550 ns       191503 ns          512

data | 10 |            1041110 ns      1041248 ns          512
data | 10 | avx         208825 ns       208709 ns          512
data | 10 |     tbb     284804 ns       284827 ns          512
data | 10 | avx tbb     204109 ns       204096 ns          512
mask | 10 |            1304906 ns      1305068 ns          512
mask | 10 | avx         215595 ns       215505 ns          512
mask | 10 |     tbb     326813 ns       326774 ns          512
mask | 10 | avx tbb     192881 ns       192861 ns          512

data | 11 |             934789 ns       934879 ns          512
data | 11 | avx         206587 ns       206489 ns          512
data | 11 |     tbb     271089 ns       271121 ns          512
data | 11 | avx tbb     197832 ns       197838 ns          512
mask | 11 |            1303151 ns      1303362 ns          512
mask | 11 | avx         215207 ns       215159 ns          512
mask | 11 |     tbb     327988 ns       328056 ns          512
mask | 11 | avx tbb     193589 ns       193560 ns          512

data | 12 |             861644 ns       861803 ns          512
data | 12 | avx         208451 ns       208306 ns          512
data | 12 |     tbb     276984 ns       277006 ns          512
data | 12 | avx tbb     199783 ns       199798 ns          512
mask | 12 |            1303800 ns      1304005 ns          512
mask | 12 | avx         212617 ns       212523 ns          512
mask | 12 |     tbb     330082 ns       330133 ns          512
mask | 12 | avx tbb     191475 ns       191509 ns          512

data | 13 |             805554 ns       805565 ns          512
data | 13 | avx         207580 ns       207480 ns          512
data | 13 |     tbb     265867 ns       265857 ns          512
data | 13 | avx tbb     202401 ns       202397 ns          512
mask | 13 |            1305803 ns      1306001 ns          512
mask | 13 | avx         213775 ns       213678 ns          512
mask | 13 |     tbb     333060 ns       333066 ns          512
mask | 13 | avx tbb     190949 ns       190957 ns          512

data | 14 |             755071 ns       755180 ns          512
data | 14 | avx         207306 ns       207228 ns          512
data | 14 |     tbb     271239 ns       271270 ns          512
data | 14 | avx tbb     200752 ns       200746 ns          512
mask | 14 |            1308917 ns      1309114 ns          512
mask | 14 | avx         214571 ns       214496 ns          512
mask | 14 |     tbb     336281 ns       336252 ns          512
mask | 14 | avx tbb     196445 ns       196457 ns          512

data | 15 |             709588 ns       709674 ns          512
data | 15 | avx         208827 ns       208721 ns          512
data | 15 |     tbb     267535 ns       267559 ns          512
data | 15 | avx tbb     200491 ns       200515 ns          512
mask | 15 |            1307190 ns      1307376 ns          512
mask | 15 | avx         214180 ns       214046 ns          512
mask | 15 |     tbb     331306 ns       331372 ns          512
mask | 15 | avx tbb     193659 ns       193662 ns          512

data | 16 |             657875 ns       657925 ns          512
data | 16 | avx         209012 ns       208931 ns          512
data | 16 |     tbb     259887 ns       259941 ns          512
data | 16 | avx tbb     205537 ns       205502 ns          512
mask | 16 |            1304134 ns      1304316 ns          512
mask | 16 | avx         213400 ns       213321 ns          512
mask | 16 |     tbb     333190 ns       333202 ns          512
mask | 16 | avx tbb     202807 ns       202796 ns          512

data | 17 |             633701 ns       633761 ns          512
data | 17 | avx         211949 ns       211814 ns          512
data | 17 |     tbb     268378 ns       268413 ns          512
data | 17 | avx tbb     209144 ns       209168 ns          512
mask | 17 |            1307465 ns      1307601 ns          512
mask | 17 | avx         208961 ns       208932 ns          512
mask | 17 |     tbb     328948 ns       329020 ns          512
mask | 17 | avx tbb     203155 ns       203190 ns          512

data | 18 |             604306 ns       604370 ns          512
data | 18 | avx         217696 ns       217615 ns          512
data | 18 |     tbb     250869 ns       250817 ns          512
data | 18 | avx tbb     203401 ns       203421 ns          512
mask | 18 |            1311895 ns      1312065 ns          512
mask | 18 | avx         219910 ns       219832 ns          512
mask | 18 |     tbb     338098 ns       338101 ns          512
mask | 18 | avx tbb     201859 ns       201849 ns          512

data | 19 |             571476 ns       571524 ns          512
data | 19 | avx         218629 ns       218526 ns          512
data | 19 |     tbb     265967 ns       265967 ns          512
data | 19 | avx tbb     207639 ns       207650 ns          512
mask | 19 |            1303788 ns      1304001 ns          512
mask | 19 | avx         219301 ns       219207 ns          512
mask | 19 |     tbb     341179 ns       341207 ns          512
mask | 19 | avx tbb     193583 ns       193560 ns          512

data | 20 |             539616 ns       539643 ns          512
data | 20 | avx         216331 ns       216233 ns          512
data | 20 |     tbb     262004 ns       262048 ns          512
data | 20 | avx tbb     210515 ns       210570 ns          512
mask | 20 |            1310025 ns      1310170 ns          512
mask | 20 | avx         219620 ns       219514 ns          512
mask | 20 |     tbb     329737 ns       329567 ns          512
mask | 20 | avx tbb     193514 ns       193454 ns          512

data | 21 |             506185 ns       506230 ns          512
data | 21 | avx         217084 ns       216952 ns          512
data | 21 |     tbb     260942 ns       260999 ns          512
data | 21 | avx tbb     206447 ns       206426 ns          512
mask | 21 |            1307083 ns      1307200 ns          512
mask | 21 | avx         217430 ns       217351 ns          512
mask | 21 |     tbb     339853 ns       339848 ns          512
mask | 21 | avx tbb     192244 ns       192239 ns          512

data | 22 |             498353 ns       498360 ns          512
data | 22 | avx         216979 ns       216863 ns          512
data | 22 |     tbb     255306 ns       255294 ns          512
data | 22 | avx tbb     210160 ns       210161 ns          512
mask | 22 |            1298923 ns      1299101 ns          512
mask | 22 | avx         219449 ns       219338 ns          512
mask | 22 |     tbb     337151 ns       337175 ns          512
mask | 22 | avx tbb     192121 ns       192109 ns          512

data | 23 |             470038 ns       470069 ns          512
data | 23 | avx         216726 ns       216634 ns          512
data | 23 |     tbb     258492 ns       258535 ns          512
data | 23 | avx tbb     208195 ns       208196 ns          512
mask | 23 |            1307089 ns      1307248 ns          512
mask | 23 | avx         222405 ns       222280 ns          512
mask | 23 |     tbb     329116 ns       329148 ns          512
mask | 23 | avx tbb     201285 ns       199839 ns          512

data | 24 |             465174 ns       465159 ns          512
data | 24 | avx         215708 ns       215561 ns          512
data | 24 |     tbb     250303 ns       250316 ns          512
data | 24 | avx tbb     208832 ns       208807 ns          512
mask | 24 |            1307914 ns      1308096 ns          512
mask | 24 | avx         218523 ns       218397 ns          512
mask | 24 |     tbb     336699 ns       336700 ns          512
mask | 24 | avx tbb     193123 ns       193131 ns          512

data | 25 |             442121 ns       442118 ns          512
data | 25 | avx         215585 ns       215485 ns          512
data | 25 |     tbb     243438 ns       243512 ns          512
data | 25 | avx tbb     207370 ns       207374 ns          512
mask | 25 |            1303515 ns      1303761 ns          512
mask | 25 | avx         219630 ns       219555 ns          512
mask | 25 |     tbb     338536 ns       338537 ns          512
mask | 25 | avx tbb     196979 ns       196972 ns          512

data | 26 |             429354 ns       429316 ns          512
data | 26 | avx         217096 ns       217000 ns          512
data | 26 |     tbb     242497 ns       242531 ns          512
data | 26 | avx tbb     203417 ns       203418 ns          512
mask | 26 |            1306663 ns      1306862 ns          512
mask | 26 | avx         218700 ns       218609 ns          512
mask | 26 |     tbb     347753 ns       346071 ns          512
mask | 26 | avx tbb     200308 ns       200293 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            3704292 ns      3704306 ns           64
data |  1 | avx         728842 ns       728833 ns           64
data |  1 |     tbb     891719 ns       891789 ns           64
data |  1 | avx tbb     668780 ns       668866 ns           64
mask |  1 |            3886825 ns      3886841 ns           64
mask |  1 | avx         720736 ns       720661 ns           64
mask |  1 |     tbb     883242 ns       883408 ns           64
mask |  1 | avx tbb     667862 ns       667742 ns           64

data |  2 |           20146106 ns     20133125 ns           64
data |  2 | avx         871227 ns       870945 ns           64
data |  2 |     tbb    2112722 ns      2113189 ns           64
data |  2 | avx tbb     677553 ns       677673 ns           64
mask |  2 |            5236727 ns      5236673 ns           64
mask |  2 | avx         900786 ns       900752 ns           64
mask |  2 |     tbb    1023422 ns      1023498 ns           64
mask |  2 | avx tbb     683944 ns       684008 ns           64

data |  3 |           13453636 ns     13453525 ns           64
data |  3 | avx         821544 ns       821433 ns           64
data |  3 |     tbb    1474731 ns      1475248 ns           64
data |  3 | avx tbb     674655 ns       674931 ns           64
mask |  3 |            5220423 ns      5220406 ns           64
mask |  3 | avx         847755 ns       847742 ns           64
mask |  3 |     tbb    1048684 ns      1049191 ns           64
mask |  3 | avx tbb     675102 ns       675178 ns           64

data |  4 |           10130181 ns     10130156 ns           64
data |  4 | avx         824895 ns       824839 ns           64
data |  4 |     tbb    1161262 ns      1161359 ns           64
data |  4 | avx tbb     677520 ns       677559 ns           64
mask |  4 |            5245394 ns      5245345 ns           64
mask |  4 | avx         851592 ns       851562 ns           64
mask |  4 |     tbb    1035855 ns      1036081 ns           64
mask |  4 | avx tbb     676639 ns       676698 ns           64

data |  5 |            8132166 ns      8132136 ns           64
data |  5 | avx         821073 ns       820889 ns           64
data |  5 |     tbb     969595 ns       969705 ns           64
data |  5 | avx tbb     682150 ns       682214 ns           64
mask |  5 |            5202472 ns      5202445 ns           64
mask |  5 | avx         851591 ns       851605 ns           64
mask |  5 |     tbb    1028803 ns      1028795 ns           64
mask |  5 | avx tbb     676564 ns       676630 ns           64

data |  6 |            6818250 ns      6818194 ns           64
data |  6 | avx         825917 ns       825600 ns           64
data |  6 |     tbb     871358 ns       871370 ns           64
data |  6 | avx tbb     674402 ns       674472 ns           64
mask |  6 |            5191417 ns      5191412 ns           64
mask |  6 | avx         842345 ns       842333 ns           64
mask |  6 |     tbb    1039913 ns      1039972 ns           64
mask |  6 | avx tbb     688492 ns       687384 ns           64

data |  7 |            5855278 ns      5855230 ns           64
data |  7 | avx         822195 ns       822023 ns           64
data |  7 |     tbb     794525 ns       794677 ns           64
data |  7 | avx tbb     674991 ns       675050 ns           64
mask |  7 |            5203963 ns      5203928 ns           64
mask |  7 | avx         843966 ns       843931 ns           64
mask |  7 |     tbb    1046931 ns      1046950 ns           64
mask |  7 | avx tbb     683234 ns       683288 ns           64

data |  8 |            5192136 ns      5192098 ns           64
data |  8 | avx         823797 ns       823737 ns           64
data |  8 |     tbb     772472 ns       772539 ns           64
data |  8 | avx tbb     673386 ns       673698 ns           64
mask |  8 |            5184769 ns      5184713 ns           64
mask |  8 | avx         841817 ns       841787 ns           64
mask |  8 |     tbb    1038792 ns      1039044 ns           64
mask |  8 | avx tbb     682333 ns       682389 ns           64

data |  9 |            4623591 ns      4623436 ns           64
data |  9 | avx         823008 ns       822947 ns           64
data |  9 |     tbb     770870 ns       770920 ns           64
data |  9 | avx tbb     680333 ns       680625 ns           64
mask |  9 |            5207164 ns      5207158 ns           64
mask |  9 | avx         843237 ns       843312 ns           64
mask |  9 |     tbb    1044209 ns      1044419 ns           64
mask |  9 | avx tbb     678008 ns       678064 ns           64

data | 10 |            4168225 ns      4168189 ns           64
data | 10 | avx         820500 ns       820373 ns           64
data | 10 |     tbb     758942 ns       759053 ns           64
data | 10 | avx tbb     677741 ns       678548 ns           64
mask | 10 |            5230684 ns      5230655 ns           64
mask | 10 | avx         861897 ns       862017 ns           64
mask | 10 |     tbb    1029392 ns      1029433 ns           64
mask | 10 | avx tbb     679097 ns       679170 ns           64

data | 11 |            3766386 ns      3766344 ns           64
data | 11 | avx         816634 ns       816484 ns           64
data | 11 |     tbb     757877 ns       757952 ns           64
data | 11 | avx tbb     678969 ns       679056 ns           64
mask | 11 |            5217369 ns      5217181 ns           64
mask | 11 | avx         844736 ns       844691 ns           64
mask | 11 |     tbb    1034511 ns      1034523 ns           64
mask | 11 | avx tbb     676980 ns       677028 ns           64

data | 12 |            3511269 ns      3511194 ns           64
data | 12 | avx         821802 ns       821672 ns           64
data | 12 |     tbb     752302 ns       752341 ns           64
data | 12 | avx tbb     676950 ns       677002 ns           64
mask | 12 |            5214483 ns      5214462 ns           64
mask | 12 | avx         841205 ns       841152 ns           64
mask | 12 |     tbb    1046922 ns      1047161 ns           64
mask | 12 | avx tbb     679163 ns       679208 ns           64

data | 13 |            3324347 ns      3324333 ns           64
data | 13 | avx         815625 ns       815944 ns           64
data | 13 |     tbb     753431 ns       753570 ns           64
data | 13 | avx tbb     675434 ns       675497 ns           64
mask | 13 |            5201181 ns      5201100 ns           64
mask | 13 | avx         844452 ns       844422 ns           64
mask | 13 |     tbb    1058959 ns      1058945 ns           64
mask | 13 | avx tbb     683822 ns       683908 ns           64

data | 14 |            3025133 ns      3025081 ns           64
data | 14 | avx         833566 ns       833437 ns           64
data | 14 |     tbb     750195 ns       750250 ns           64
data | 14 | avx tbb     676959 ns       677019 ns           64
mask | 14 |            5213458 ns      5213398 ns           64
mask | 14 | avx         839745 ns       839747 ns           64
mask | 14 |     tbb    1043228 ns      1043278 ns           64
mask | 14 | avx tbb     680308 ns       680367 ns           64

data | 15 |            2840145 ns      2840133 ns           64
data | 15 | avx         825773 ns       825900 ns           64
data | 15 |     tbb     750069 ns       750152 ns           64
data | 15 | avx tbb     676848 ns       676897 ns           64
mask | 15 |            5234034 ns      5234016 ns           64
mask | 15 | avx         843159 ns       843178 ns           64
mask | 15 |     tbb    1037142 ns      1037173 ns           64
mask | 15 | avx tbb     686191 ns       686052 ns           64

data | 16 |            2701372 ns      2701377 ns           64
data | 16 | avx         826600 ns       826481 ns           64
data | 16 |     tbb     748075 ns       748161 ns           64
data | 16 | avx tbb     676252 ns       676320 ns           64
mask | 16 |            5193456 ns      5193400 ns           64
mask | 16 | avx         838558 ns       838492 ns           64
mask | 16 |     tbb    1035509 ns      1035569 ns           64
mask | 16 | avx tbb     686698 ns       686341 ns           64

data | 17 |            2535164 ns      2535117 ns           64
data | 17 | avx         830203 ns       829777 ns           64
data | 17 |     tbb     749878 ns       749967 ns           64
data | 17 | avx tbb     683869 ns       683919 ns           64
mask | 17 |            5230544 ns      5230334 ns           64
mask | 17 | avx         811183 ns       811439 ns           64
mask | 17 |     tbb    1051631 ns      1051822 ns           64
mask | 17 | avx tbb     679567 ns       679645 ns           64

data | 18 |            2440030 ns      2440284 ns           64
data | 18 | avx         846350 ns       846302 ns           64
data | 18 |     tbb     737302 ns       737362 ns           64
data | 18 | avx tbb     689164 ns       689225 ns           64
mask | 18 |            5191442 ns      5191570 ns           64
mask | 18 | avx         860009 ns       859961 ns           64
mask | 18 |     tbb    1044311 ns      1044598 ns           64
mask | 18 | avx tbb     680194 ns       680267 ns           64

data | 19 |            2283059 ns      2283005 ns           64
data | 19 | avx         846398 ns       846405 ns           64
data | 19 |     tbb     740491 ns       740627 ns           64
data | 19 | avx tbb     679783 ns       679825 ns           64
mask | 19 |            5227859 ns      5228237 ns           64
mask | 19 | avx         849909 ns       849880 ns           64
mask | 19 |     tbb    1039181 ns      1039209 ns           64
mask | 19 | avx tbb     678705 ns       679244 ns           64

data | 20 |            2152458 ns      2152441 ns           64
data | 20 | avx         849986 ns       850386 ns           64
data | 20 |     tbb     734170 ns       734264 ns           64
data | 20 | avx tbb     679180 ns       679211 ns           64
mask | 20 |            5230098 ns      5230050 ns           64
mask | 20 | avx         851252 ns       851192 ns           64
mask | 20 |     tbb    1042544 ns      1042355 ns           64
mask | 20 | avx tbb     684172 ns       684214 ns           64

data | 21 |            2095134 ns      2095063 ns           64
data | 21 | avx         849142 ns       849033 ns           64
data | 21 |     tbb     733011 ns       733095 ns           64
data | 21 | avx tbb     682113 ns       682338 ns           64
mask | 21 |            5232594 ns      5232552 ns           64
mask | 21 | avx         858028 ns       858002 ns           64
mask | 21 |     tbb    1046878 ns      1046947 ns           64
mask | 21 | avx tbb     698333 ns       698388 ns           64

data | 22 |            1992613 ns      1992572 ns           64
data | 22 | avx         852145 ns       852056 ns           64
data | 22 |     tbb     737494 ns       737592 ns           64
data | 22 | avx tbb     684777 ns       686206 ns           64
mask | 22 |            5186684 ns      5186637 ns           64
mask | 22 | avx         867589 ns       867566 ns           64
mask | 22 |     tbb    1043639 ns      1043862 ns           64
mask | 22 | avx tbb     679325 ns       679400 ns           64

data | 23 |            1913703 ns      1913677 ns           64
data | 23 | avx         847687 ns       847608 ns           64
data | 23 |     tbb     725103 ns       725198 ns           64
data | 23 | avx tbb     680370 ns       680859 ns           64
mask | 23 |            5251817 ns      5251825 ns           64
mask | 23 | avx         861358 ns       861373 ns           64
mask | 23 |     tbb    1044989 ns      1045209 ns           64
mask | 23 | avx tbb     679733 ns       679792 ns           64

data | 24 |            1842209 ns      1842228 ns           64
data | 24 | avx         848180 ns       848114 ns           64
data | 24 |     tbb     724395 ns       724475 ns           64
data | 24 | avx tbb     677947 ns       678006 ns           64
mask | 24 |            5237206 ns      5237180 ns           64
mask | 24 | avx         853884 ns       854027 ns           64
mask | 24 |     tbb    1041544 ns      1041586 ns           64
mask | 24 | avx tbb     684697 ns       684723 ns           64

data | 25 |            1781139 ns      1780592 ns           64
data | 25 | avx         845597 ns       845527 ns           64
data | 25 |     tbb     725792 ns       725467 ns           64
data | 25 | avx tbb     680119 ns       680208 ns           64
mask | 25 |            5250433 ns      5250414 ns           64
mask | 25 | avx         851370 ns       851356 ns           64
mask | 25 |     tbb    1074516 ns      1074538 ns           64
mask | 25 | avx tbb     684111 ns       684167 ns           64

data | 26 |            1726909 ns      1726894 ns           64
data | 26 | avx         849150 ns       849053 ns           64
data | 26 |     tbb     726802 ns       726909 ns           64
data | 26 | avx tbb     684272 ns       684142 ns           64
mask | 26 |            5240028 ns      5240036 ns           64
mask | 26 | avx         855400 ns       855366 ns           64
mask | 26 |     tbb    1039522 ns      1039556 ns           64
mask | 26 | avx tbb     678153 ns       678217 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           14779744 ns     14779972 ns           32
data |  1 | avx        2725831 ns      2725825 ns           32
data |  1 |     tbb    3047491 ns      3047150 ns           32
data |  1 | avx tbb    2385806 ns      2385869 ns           32
mask |  1 |           14734147 ns     14733819 ns           32
mask |  1 | avx        2749459 ns      2749444 ns           32
mask |  1 |     tbb    3048538 ns      3048463 ns           32
mask |  1 | avx tbb    2390166 ns      2390153 ns           32

data |  2 |           80061247 ns     80050481 ns           32
data |  2 | avx        3340122 ns      3340078 ns           32
data |  2 |     tbb    7903988 ns      7902503 ns           32
data |  2 | avx tbb    2431116 ns      2431147 ns           32
mask |  2 |           20632678 ns     20632856 ns           32
mask |  2 | avx        3436638 ns      3425850 ns           32
mask |  2 |     tbb    3637359 ns      3637334 ns           32
mask |  2 | avx tbb    2444862 ns      2444928 ns           32

data |  3 |           53342044 ns     53331228 ns           32
data |  3 | avx        3120587 ns      3120575 ns           32
data |  3 |     tbb    5325734 ns      5325516 ns           32
data |  3 | avx tbb    2418591 ns      2418784 ns           32
mask |  3 |           20570459 ns     20570553 ns           32
mask |  3 | avx        3227703 ns      3227681 ns           32
mask |  3 |     tbb    3654031 ns      3653959 ns           32
mask |  3 | avx tbb    2420119 ns      2420559 ns           32

data |  4 |           40066675 ns     40054962 ns           32
data |  4 | avx        3127559 ns      3127516 ns           32
data |  4 |     tbb    4049122 ns      4049553 ns           32
data |  4 | avx tbb    2421150 ns      2421228 ns           32
mask |  4 |           20658241 ns     20658172 ns           32
mask |  4 | avx        3212216 ns      3212525 ns           32
mask |  4 |     tbb    3644734 ns      3644297 ns           32
mask |  4 | avx tbb    2423150 ns      2423522 ns           32

data |  5 |           32411800 ns     32411706 ns           32
data |  5 | avx        3146822 ns      3147022 ns           32
data |  5 |     tbb    3410700 ns      3410594 ns           32
data |  5 | avx tbb    2416850 ns      2416428 ns           32
mask |  5 |           20543456 ns     20543694 ns           32
mask |  5 | avx        3230647 ns      3230678 ns           32
mask |  5 |     tbb    3653950 ns      3653909 ns           32
mask |  5 | avx tbb    2425856 ns      2425956 ns           32

data |  6 |           26848613 ns     26848534 ns           32
data |  6 | avx        3149559 ns      3149484 ns           32
data |  6 |     tbb    2893122 ns      2893016 ns           32
data |  6 | avx tbb    2423794 ns      2423581 ns           32
mask |  6 |           20574681 ns     20574609 ns           32
mask |  6 | avx        3233831 ns      3233434 ns           32
mask |  6 |     tbb    3640997 ns      3641828 ns           32
mask |  6 | avx tbb    2424206 ns      2424200 ns           32

data |  7 |           23117650 ns     23117594 ns           32
data |  7 | avx        3116166 ns      3116109 ns           32
data |  7 |     tbb    2681906 ns      2682281 ns           32
data |  7 | avx tbb    2419650 ns      2419881 ns           32
mask |  7 |           20589372 ns     20589128 ns           32
mask |  7 | avx        3223537 ns      3223506 ns           32
mask |  7 |     tbb    3654331 ns      3641394 ns           32
mask |  7 | avx tbb    2421034 ns      2421128 ns           32

data |  8 |           20299006 ns     20298975 ns           32
data |  8 | avx        3122028 ns      3122034 ns           32
data |  8 |     tbb    2647572 ns      2647472 ns           32
data |  8 | avx tbb    2414669 ns      2414734 ns           32
mask |  8 |           20537325 ns     20526531 ns           32
mask |  8 | avx        3229050 ns      3229072 ns           32
mask |  8 |     tbb    3666394 ns      3666297 ns           32
mask |  8 | avx tbb    2419981 ns      2420981 ns           32

data |  9 |           18298453 ns     18298434 ns           32
data |  9 | avx        3174081 ns      3174003 ns           32
data |  9 |     tbb    2596344 ns      2596750 ns           32
data |  9 | avx tbb    2417844 ns      2417884 ns           32
mask |  9 |           20573072 ns     20573009 ns           32
mask |  9 | avx        3222131 ns      3222128 ns           32
mask |  9 |     tbb    3630672 ns      3630625 ns           32
mask |  9 | avx tbb    2429319 ns      2429381 ns           32

data | 10 |           16403281 ns     16403056 ns           32
data | 10 | avx        3135888 ns      3135734 ns           32
data | 10 |     tbb    2573259 ns      2574131 ns           32
data | 10 | avx tbb    2414972 ns      2415459 ns           32
mask | 10 |           20562259 ns     20562116 ns           32
mask | 10 | avx        3223800 ns      3223806 ns           32
mask | 10 |     tbb    3636331 ns      3636266 ns           32
mask | 10 | avx tbb    2428087 ns      2428581 ns           32

data | 11 |           14895462 ns     14895403 ns           32
data | 11 | avx        3175337 ns      3174984 ns           32
data | 11 |     tbb    2561741 ns      2561656 ns           32
data | 11 | avx tbb    2421247 ns      2421384 ns           32
mask | 11 |           20632028 ns     20620466 ns           32
mask | 11 | avx        3213466 ns      3213488 ns           32
mask | 11 |     tbb    3655784 ns      3656119 ns           32
mask | 11 | avx tbb    2423306 ns      2423303 ns           32

data | 12 |           13670941 ns     13670859 ns           32
data | 12 | avx        3159997 ns      3160231 ns           32
data | 12 |     tbb    2555781 ns      2555728 ns           32
data | 12 | avx tbb    2426834 ns      2426931 ns           32
mask | 12 |           20599697 ns     20599684 ns           32
mask | 12 | avx        3215403 ns      3215444 ns           32
mask | 12 |     tbb    3660525 ns      3660456 ns           32
mask | 12 | avx tbb    2427844 ns      2427862 ns           32

data | 13 |           12906725 ns     12906703 ns           32
data | 13 | avx        3110700 ns      3110581 ns           32
data | 13 |     tbb    2553306 ns      2553203 ns           32
data | 13 | avx tbb    2430903 ns      2431369 ns           32
mask | 13 |           20602963 ns     20602975 ns           32
mask | 13 | avx        3217437 ns      3217456 ns           32
mask | 13 |     tbb    3673166 ns      3673091 ns           32
mask | 13 | avx tbb    2428053 ns      2428200 ns           32

data | 14 |           11779122 ns     11779019 ns           32
data | 14 | avx        3128697 ns      3128637 ns           32
data | 14 |     tbb    2559119 ns      2559069 ns           32
data | 14 | avx tbb    2421066 ns      2421606 ns           32
mask | 14 |           20571113 ns     20559887 ns           32
mask | 14 | avx        3229347 ns      3229359 ns           32
mask | 14 |     tbb    3671431 ns      3671353 ns           32
mask | 14 | avx tbb    2429450 ns      2429609 ns           32

data | 15 |           11112169 ns     11112119 ns           32
data | 15 | avx        3107094 ns      3106975 ns           32
data | 15 |     tbb    2552547 ns      2552875 ns           32
data | 15 | avx tbb    2436078 ns      2436178 ns           32
mask | 15 |           20620175 ns     20620175 ns           32
mask | 15 | avx        3222200 ns      3222275 ns           32
mask | 15 |     tbb    3660584 ns      3660484 ns           32
mask | 15 | avx tbb    2425344 ns      2425397 ns           32

data | 16 |           10486906 ns     10475178 ns           32
data | 16 | avx        3102750 ns      3102750 ns           32
data | 16 |     tbb    2555419 ns      2555372 ns           32
data | 16 | avx tbb    2420031 ns      2420088 ns           32
mask | 16 |           20634881 ns     20634816 ns           32
mask | 16 | avx        3225663 ns      3225656 ns           32
mask | 16 |     tbb    3656500 ns      3655178 ns           32
mask | 16 | avx tbb    2432025 ns      2432081 ns           32

data | 17 |           10080663 ns     10080603 ns           32
data | 17 | avx        3172544 ns      3172556 ns           32
data | 17 |     tbb    2558697 ns      2559028 ns           32
data | 17 | avx tbb    2435672 ns      2435731 ns           32
mask | 17 |           20620866 ns     20610066 ns           32
mask | 17 | avx        3106984 ns      3106841 ns           32
mask | 17 |     tbb    3671606 ns      3671578 ns           32
mask | 17 | avx tbb    2423278 ns      2423325 ns           32

data | 18 |            9313919 ns      9313794 ns           32
data | 18 | avx        3256734 ns      3256631 ns           32
data | 18 |     tbb    2539050 ns      2539006 ns           32
data | 18 | avx tbb    2423694 ns      2424197 ns           32
mask | 18 |           20619222 ns     20619122 ns           32
mask | 18 | avx        3266366 ns      3266675 ns           32
mask | 18 |     tbb    3670416 ns      3670341 ns           32
mask | 18 | avx tbb    2437616 ns      2438456 ns           32

data | 19 |            8849809 ns      8838116 ns           32
data | 19 | avx        3198884 ns      3198813 ns           32
data | 19 |     tbb    2527397 ns      2527347 ns           32
data | 19 | avx tbb    2440797 ns      2440878 ns           32
mask | 19 |           20557203 ns     20557150 ns           32
mask | 19 | avx        3254966 ns      3255009 ns           32
mask | 19 |     tbb    3710541 ns      3710487 ns           32
mask | 19 | avx tbb    2438472 ns      2438578 ns           32

data | 20 |            8479628 ns      8479522 ns           32
data | 20 | avx        3236456 ns      3236416 ns           32
data | 20 |     tbb    2532297 ns      2532681 ns           32
data | 20 | avx tbb    2443069 ns      2443109 ns           32
mask | 20 |           20639925 ns     20639872 ns           32
mask | 20 | avx        3262031 ns      3262069 ns           32
mask | 20 |     tbb    3637966 ns      3637612 ns           32
mask | 20 | avx tbb    2439853 ns      2439934 ns           32

data | 21 |            8041891 ns      8041803 ns           32
data | 21 | avx        3217234 ns      3217106 ns           32
data | 21 |     tbb    2540297 ns      2540003 ns           32
data | 21 | avx tbb    2427319 ns      2427681 ns           32
mask | 21 |           20593728 ns     20593653 ns           32
mask | 21 | avx        3255188 ns      3255197 ns           32
mask | 21 |     tbb    3666697 ns      3666588 ns           32
mask | 21 | avx tbb    2435875 ns      2435931 ns           32

data | 22 |            7774047 ns      7763241 ns           32
data | 22 | avx        3263444 ns      3263450 ns           32
data | 22 |     tbb    2518053 ns      2518847 ns           32
data | 22 | avx tbb    2446272 ns      2446378 ns           32
mask | 22 |           20562116 ns     20561953 ns           32
mask | 22 | avx        3269241 ns      3269181 ns           32
mask | 22 |     tbb    3663850 ns      3663719 ns           32
mask | 22 | avx tbb    2428384 ns      2428425 ns           32

data | 23 |            7444159 ns      7444156 ns           32
data | 23 | avx        3221997 ns      3221950 ns           32
data | 23 |     tbb    2521869 ns      2521550 ns           32
data | 23 | avx tbb    2431525 ns      2431550 ns           32
mask | 23 |           20678722 ns     20666691 ns           32
mask | 23 | avx        3263981 ns      3263963 ns           32
mask | 23 |     tbb    3730256 ns      3730209 ns           32
mask | 23 | avx tbb    2426453 ns      2426509 ns           32

data | 24 |            7177756 ns      7177625 ns           32
data | 24 | avx        3236125 ns      3236059 ns           32
data | 24 |     tbb    2525575 ns      2525125 ns           32
data | 24 | avx tbb    2430422 ns      2413016 ns           32
mask | 24 |           20569941 ns     20569900 ns           32
mask | 24 | avx        3257122 ns      3257106 ns           32
mask | 24 |     tbb    3683406 ns      3683312 ns           32
mask | 24 | avx tbb    2438028 ns      2438122 ns           32

data | 25 |            6983256 ns      6972431 ns           32
data | 25 | avx        3224413 ns      3224334 ns           32
data | 25 |     tbb    2514838 ns      2514419 ns           32
data | 25 | avx tbb    2438678 ns      2438703 ns           32
mask | 25 |           20662766 ns     20662753 ns           32
mask | 25 | avx        3262641 ns      3262700 ns           32
mask | 25 |     tbb    3647550 ns      3634531 ns           32
mask | 25 | avx tbb    2431581 ns      2431584 ns           32

data | 26 |            6750159 ns      6750097 ns           32
data | 26 | avx        3223387 ns      3223294 ns           32
data | 26 |     tbb    2517341 ns      2516881 ns           32
data | 26 | avx tbb    2441056 ns      2441097 ns           32
mask | 26 |           20609144 ns     20609131 ns           32
mask | 26 | avx        3274125 ns      3274150 ns           32
mask | 26 |     tbb    3659428 ns      3659319 ns           32
mask | 26 | avx tbb    2439781 ns      2439578 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           58827338 ns     58803975 ns           16
data |  1 | avx       10964962 ns     10964900 ns           16
data |  1 |     tbb   11513588 ns     11492731 ns           16
data |  1 | avx tbb    9341869 ns      9342031 ns           16
mask |  1 |           58836331 ns     58836306 ns           16
mask |  1 | avx       10959631 ns     10959612 ns           16
mask |  1 |     tbb   11446400 ns     11427881 ns           16
mask |  1 | avx tbb    9332112 ns      9332144 ns           16

data |  2 |          320236650 ns    320236119 ns           16
data |  2 | avx       13306969 ns     13306862 ns           16
data |  2 |     tbb   30402481 ns     30272563 ns           16
data |  2 | avx tbb    9418500 ns      9419325 ns           16
mask |  2 |           82167225 ns     82167113 ns           16
mask |  2 | avx       13744025 ns     13744000 ns           16
mask |  2 |     tbb   14097938 ns     14044056 ns           16
mask |  2 | avx tbb    9438319 ns      9438300 ns           16

data |  3 |          213293469 ns    213257375 ns           16
data |  3 | avx       12487125 ns     12487038 ns           16
data |  3 |     tbb   20769487 ns     20701931 ns           16
data |  3 | avx tbb    9371419 ns      9371381 ns           16
mask |  3 |           82127925 ns     82090631 ns           16
mask |  3 | avx       12900569 ns     12900550 ns           16
mask |  3 |     tbb   14055337 ns     13987387 ns           16
mask |  3 | avx tbb    9408831 ns      9408812 ns           16

data |  4 |          160280419 ns    160244025 ns           16
data |  4 | avx       12543537 ns     12543463 ns           16
data |  4 |     tbb   15575394 ns     15534706 ns           16
data |  4 | avx tbb    9402750 ns      9402794 ns           16
mask |  4 |           82214119 ns     82175487 ns           16
mask |  4 | avx       12873419 ns     12873375 ns           16
mask |  4 |     tbb   14028088 ns     13979331 ns           16
mask |  4 | avx tbb    9409987 ns      9410869 ns           16

data |  5 |          129618975 ns    129580375 ns           16
data |  5 | avx       12503156 ns     12503031 ns           16
data |  5 |     tbb   12768106 ns     12693881 ns           16
data |  5 | avx tbb    9402819 ns      9402650 ns           16
mask |  5 |           82240794 ns     82240825 ns           16
mask |  5 | avx       12865919 ns     12865838 ns           16
mask |  5 |     tbb   14104419 ns     14004375 ns           16
mask |  5 | avx tbb    9401219 ns      9402700 ns           16

data |  6 |          107409194 ns    107366337 ns           16
data |  6 | avx       12537594 ns     12537481 ns           16
data |  6 |     tbb   10999350 ns     10951331 ns           16
data |  6 | avx tbb    9391656 ns      9391594 ns           16
mask |  6 |           82394744 ns     82355450 ns           16
mask |  6 | avx       12956769 ns     12956738 ns           16
mask |  6 |     tbb   14091250 ns     14059875 ns           16
mask |  6 | avx tbb    9413562 ns      9413662 ns           16

data |  7 |           92402631 ns     92365981 ns           16
data |  7 | avx       12572994 ns     12572838 ns           16
data |  7 |     tbb   10187444 ns     10159875 ns           16
data |  7 | avx tbb    9379087 ns      9379019 ns           16
mask |  7 |           82200625 ns     82162112 ns           16
mask |  7 | avx       12888500 ns     12888531 ns           16
mask |  7 |     tbb   13995231 ns     13993175 ns           16
mask |  7 | avx tbb    9412769 ns      9413750 ns           16

data |  8 |           81121475 ns     81084206 ns           16
data |  8 | avx       12539944 ns     12539850 ns           16
data |  8 |     tbb    9960000 ns      9952225 ns           16
data |  8 | avx tbb    9371575 ns      9370719 ns           16
mask |  8 |           82242581 ns     82205269 ns           16
mask |  8 | avx       12870094 ns     12870081 ns           16
mask |  8 |     tbb   14211513 ns     14143044 ns           16
mask |  8 | avx tbb    9406125 ns      9406138 ns           16

data |  9 |           73030794 ns     72994419 ns           16
data |  9 | avx       12584719 ns     12584619 ns           16
data |  9 |     tbb    9840681 ns      9819050 ns           16
data |  9 | avx tbb    9378612 ns      9378556 ns           16
mask |  9 |           82934969 ns     82898125 ns           16
mask |  9 | avx       12883812 ns     12883725 ns           16
mask |  9 |     tbb   14050969 ns     14005044 ns           16
mask |  9 | avx tbb    9446231 ns      9446087 ns           16

data | 10 |           65007069 ns     64970237 ns           16
data | 10 | avx       12580012 ns     12579875 ns           16
data | 10 |     tbb    9724956 ns      9725738 ns           16
data | 10 | avx tbb    9390612 ns      9391263 ns           16
mask | 10 |           82481625 ns     82444894 ns           16
mask | 10 | avx       12883887 ns     12883825 ns           16
mask | 10 |     tbb   14097331 ns     13999369 ns           16
mask | 10 | avx tbb    9421244 ns      9421369 ns           16

data | 11 |           59237194 ns     59196119 ns           16
data | 11 | avx       12539281 ns     12539044 ns           16
data | 11 |     tbb    9720794 ns      9720763 ns           16
data | 11 | avx tbb    9391887 ns      9391906 ns           16
mask | 11 |           82236206 ns     82197831 ns           16
mask | 11 | avx       12842625 ns     12842619 ns           16
mask | 11 |     tbb   14058925 ns     14036044 ns           16
mask | 11 | avx tbb    9446350 ns      9445162 ns           16

data | 12 |           54731300 ns     54731200 ns           16
data | 12 | avx       12493150 ns     12492944 ns           16
data | 12 |     tbb    9718962 ns      9718969 ns           16
data | 12 | avx tbb    9405587 ns      9405569 ns           16
mask | 12 |           82308188 ns     82271531 ns           16
mask | 12 | avx       12810550 ns     12810550 ns           16
mask | 12 |     tbb   14070256 ns     13957656 ns           16
mask | 12 | avx tbb    9416644 ns      9416662 ns           16

data | 13 |           51195381 ns     51195244 ns           16
data | 13 | avx       12573700 ns     12536788 ns           16
data | 13 |     tbb    9708844 ns      9706194 ns           16
data | 13 | avx tbb    9396625 ns      9396575 ns           16
mask | 13 |           82360050 ns     82321425 ns           16
mask | 13 | avx       12867700 ns     12867625 ns           16
mask | 13 |     tbb   14059062 ns     13965606 ns           16
mask | 13 | avx tbb    9439269 ns      9439212 ns           16

data | 14 |           47126713 ns     47087937 ns           16
data | 14 | avx       12567400 ns     12567262 ns           16
data | 14 |     tbb    9685763 ns      9685781 ns           16
data | 14 | avx tbb    9389862 ns      9389800 ns           16
mask | 14 |           82205681 ns     82205656 ns           16
mask | 14 | avx       12842006 ns     12805081 ns           16
mask | 14 |     tbb   14196519 ns     14093487 ns           16
mask | 14 | avx tbb    9402538 ns      9402619 ns           16

data | 15 |           44301162 ns     44301131 ns           16
data | 15 | avx       12521556 ns     12521469 ns           16
data | 15 |     tbb    9699162 ns      9699900 ns           16
data | 15 | avx tbb    9388987 ns      9388969 ns           16
mask | 15 |           82203075 ns     82164419 ns           16
mask | 15 | avx       12861681 ns     12861700 ns           16
mask | 15 |     tbb   14126019 ns     14118388 ns           16
mask | 15 | avx tbb    9424737 ns      9424794 ns           16

data | 16 |           41559269 ns     41559256 ns           16
data | 16 | avx       12453594 ns     12453487 ns           16
data | 16 |     tbb    9701175 ns      9702056 ns           16
data | 16 | avx tbb    9398344 ns      9398394 ns           16
mask | 16 |           82242975 ns     82204575 ns           16
mask | 16 | avx       12842356 ns     12842275 ns           16
mask | 16 |     tbb   13954819 ns     13922744 ns           16
mask | 16 | avx tbb    9406594 ns      9406581 ns           16

data | 17 |           39987169 ns     39986962 ns           16
data | 17 | avx       12679681 ns     12679556 ns           16
data | 17 |     tbb    9683762 ns      9685425 ns           16
data | 17 | avx tbb    9428331 ns      9428338 ns           16
mask | 17 |           82253969 ns     82217175 ns           16
mask | 17 | avx       12389012 ns     12389038 ns           16
mask | 17 |     tbb   14151425 ns     14147025 ns           16
mask | 17 | avx tbb    9425538 ns      9425581 ns           16

data | 18 |           37214244 ns     37175431 ns           16
data | 18 | avx       12920625 ns     12920513 ns           16
data | 18 |     tbb    9659950 ns      9659894 ns           16
data | 18 | avx tbb    9442387 ns      9441519 ns           16
mask | 18 |           82280381 ns     82243994 ns           16
mask | 18 | avx       13025837 ns     13025837 ns           16
mask | 18 |     tbb   14047444 ns     13986163 ns           16
mask | 18 | avx tbb    9433481 ns      9433387 ns           16

data | 19 |           35220638 ns     35181744 ns           16
data | 19 | avx       12895888 ns     12896594 ns           16
data | 19 |     tbb    9658044 ns      9658919 ns           16
data | 19 | avx tbb    9441556 ns      9441694 ns           16
mask | 19 |           82127550 ns     82088887 ns           16
mask | 19 | avx       13074344 ns     13074269 ns           16
mask | 19 |     tbb   14072156 ns     14058856 ns           16
mask | 19 | avx tbb    9415169 ns      9415206 ns           16

data | 20 |           33610844 ns     33572150 ns           16
data | 20 | avx       12889425 ns     12889362 ns           16
data | 20 |     tbb    9679219 ns      9679150 ns           16
data | 20 | avx tbb    9421475 ns      9421394 ns           16
mask | 20 |           82206194 ns     82169931 ns           16
mask | 20 | avx       13052894 ns     13051994 ns           16
mask | 20 |     tbb   14154038 ns     14114769 ns           16
mask | 20 | avx tbb    9432994 ns      9433881 ns           16

data | 21 |           32004744 ns     32004681 ns           16
data | 21 | avx       12861988 ns     12861856 ns           16
data | 21 |     tbb    9668587 ns      9668637 ns           16
data | 21 | avx tbb    9444000 ns      9443894 ns           16
mask | 21 |           82211975 ns     82211950 ns           16
mask | 21 | avx       13030869 ns     13030794 ns           16
mask | 21 |     tbb   14111863 ns     14082587 ns           16
mask | 21 | avx tbb    9429475 ns      9429500 ns           16

data | 22 |           30709956 ns     30673663 ns           16
data | 22 | avx       12928500 ns     12928281 ns           16
data | 22 |     tbb    9618713 ns      9619538 ns           16
data | 22 | avx tbb    9424294 ns      9424244 ns           16
mask | 22 |           82276881 ns     82237775 ns           16
mask | 22 | avx       13061969 ns     13061894 ns           16
mask | 22 |     tbb   13991050 ns     13983500 ns           16
mask | 22 | avx tbb    9426875 ns      9426881 ns           16

data | 23 |           29586775 ns     29550219 ns           16
data | 23 | avx       12895419 ns     12896181 ns           16
data | 23 |     tbb    9662500 ns      9662431 ns           16
data | 23 | avx tbb    9424375 ns      9423931 ns           16
mask | 23 |           82293606 ns     82254938 ns           16
mask | 23 | avx       13107800 ns     13107788 ns           16
mask | 23 |     tbb   14023119 ns     14023050 ns           16
mask | 23 | avx tbb    9454063 ns      9454100 ns           16

data | 24 |           28543912 ns     28543800 ns           16
data | 24 | avx       12852175 ns     12851975 ns           16
data | 24 |     tbb    9608931 ns      9608944 ns           16
data | 24 | avx tbb    9445275 ns      9445338 ns           16
mask | 24 |           84247625 ns     84211100 ns           16
mask | 24 | avx       13037031 ns     13036988 ns           16
mask | 24 |     tbb   14092906 ns     14004394 ns           16
mask | 24 | avx tbb    9426275 ns      9425444 ns           16

data | 25 |           27669700 ns     27669519 ns           16
data | 25 | avx       12886412 ns     12886338 ns           16
data | 25 |     tbb    9619256 ns      9619900 ns           16
data | 25 | avx tbb    9431244 ns      9431200 ns           16
mask | 25 |           82168862 ns     82132250 ns           16
mask | 25 | avx       13064531 ns     13064456 ns           16
mask | 25 |     tbb   14204175 ns     14018381 ns           16
mask | 25 | avx tbb    9444906 ns      9445681 ns           16

data | 26 |           27044287 ns     27044213 ns           16
data | 26 | avx       12875681 ns     12875631 ns           16
data | 26 |     tbb    9630988 ns      9630075 ns           16
data | 26 | avx tbb    9436362 ns      9437138 ns           16
mask | 26 |           82148225 ns     82148206 ns           16
mask | 26 | avx       13024450 ns     13024419 ns           16
mask | 26 |     tbb   14134419 ns     14132250 ns           16
mask | 26 | avx tbb    9426862 ns      9426281 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          117522475 ns    117468800 ns            8
data |  1 | avx       21801550 ns     21799950 ns            8
data |  1 |     tbb   22797662 ns     22556062 ns            8
data |  1 | avx tbb   18544800 ns     18543750 ns            8
mask |  1 |          117489300 ns    117489225 ns            8
mask |  1 | avx       21891013 ns     21890900 ns            8
mask |  1 |     tbb   22828200 ns     22714188 ns            8
mask |  1 | avx tbb   18562125 ns     18562213 ns            8

data |  2 |          640385687 ns    640385938 ns            8
data |  2 | avx       26677850 ns     26677588 ns            8
data |  2 |     tbb   62066512 ns     60731663 ns            8
data |  2 | avx tbb   18765588 ns     18725738 ns            8
mask |  2 |          164368863 ns    164292688 ns            8
mask |  2 | avx       27683375 ns     27683300 ns            8
mask |  2 |     tbb   28191612 ns     27783675 ns            8
mask |  2 | avx tbb   18860612 ns     18839050 ns            8

data |  3 |          426889900 ns    426890025 ns            8
data |  3 | avx       25125075 ns     25124850 ns            8
data |  3 |     tbb   40814688 ns     40260487 ns            8
data |  3 | avx tbb   18671175 ns     18655262 ns            8
mask |  3 |          164540913 ns    164464200 ns            8
mask |  3 | avx       25788662 ns     25788625 ns            8
mask |  3 |     tbb   28000600 ns     27861525 ns            8
mask |  3 | avx tbb   18699563 ns     18699738 ns            8

data |  4 |          320284313 ns    320284525 ns            8
data |  4 | avx       25056525 ns     25056238 ns            8
data |  4 |     tbb   30515550 ns     30264087 ns            8
data |  4 | avx tbb   18710438 ns     18633987 ns            8
mask |  4 |          164489162 ns    164489275 ns            8
mask |  4 | avx       25794625 ns     25794462 ns            8
mask |  4 |     tbb   27942825 ns     27369662 ns            8
mask |  4 | avx tbb   18702263 ns     18702500 ns            8

data |  5 |          259321300 ns    259321350 ns            8
data |  5 | avx       24985287 ns     24985050 ns            8
data |  5 |     tbb   24775475 ns     24775650 ns            8
data |  5 | avx tbb   18696887 ns     18696713 ns            8
mask |  5 |          164337412 ns    164337475 ns            8
mask |  5 | avx       25887325 ns     25887212 ns            8
mask |  5 |     tbb   27743600 ns     27320863 ns            8
mask |  5 | avx tbb   18676975 ns     18677013 ns            8

data |  6 |          214378825 ns    214378850 ns            8
data |  6 | avx       25211375 ns     25211162 ns            8
data |  6 |     tbb   21799000 ns     21293625 ns            8
data |  6 | avx tbb   18660500 ns     18660138 ns            8
mask |  6 |          164571250 ns    164571287 ns            8
mask |  6 | avx       25915062 ns     25915150 ns            8
mask |  6 |     tbb   28046863 ns     27601937 ns            8
mask |  6 | avx tbb   18671600 ns     18671662 ns            8

data |  7 |          184817775 ns    184817713 ns            8
data |  7 | avx       24958650 ns     24958412 ns            8
data |  7 |     tbb   20321775 ns     19784875 ns            8
data |  7 | avx tbb   18652087 ns     18634825 ns            8
mask |  7 |          164651000 ns    164651137 ns            8
mask |  7 | avx       25790812 ns     25790537 ns            8
mask |  7 |     tbb   28342487 ns     27702962 ns            8
mask |  7 | avx tbb   18726025 ns     18726113 ns            8

data |  8 |          162231563 ns    162231525 ns            8
data |  8 | avx       25130000 ns     25129750 ns            8
data |  8 |     tbb   19582612 ns     19499163 ns            8
data |  8 | avx tbb   18685600 ns     18685613 ns            8
mask |  8 |          164952250 ns    164879850 ns            8
mask |  8 | avx       25804625 ns     25804437 ns            8
mask |  8 |     tbb   27821963 ns     27353537 ns            8
mask |  8 | avx tbb   18696350 ns     18696475 ns            8

data |  9 |          145875487 ns    145875500 ns            8
data |  9 | avx       25102988 ns     25102725 ns            8
data |  9 |     tbb   19483150 ns     19378750 ns            8
data |  9 | avx tbb   18673537 ns     18672550 ns            8
mask |  9 |          164534863 ns    164534788 ns            8
mask |  9 | avx       25815400 ns     25815450 ns            8
mask |  9 |     tbb   27811550 ns     27508638 ns            8
mask |  9 | avx tbb   18676775 ns     18676800 ns            8

data | 10 |          129701787 ns    129701888 ns            8
data | 10 | avx       25285650 ns     25285438 ns            8
data | 10 |     tbb   19455250 ns     19323375 ns            8
data | 10 | avx tbb   18662863 ns     18662563 ns            8
mask | 10 |          164456350 ns    164456175 ns            8
mask | 10 | avx       25715462 ns     25715375 ns            8
mask | 10 |     tbb   27836762 ns     27652337 ns            8
mask | 10 | avx tbb   18707863 ns     18706537 ns            8

data | 11 |          118362788 ns    118362887 ns            8
data | 11 | avx       25023150 ns     25022975 ns            8
data | 11 |     tbb   19266863 ns     19231438 ns            8
data | 11 | avx tbb   18665987 ns     18665900 ns            8
mask | 11 |          164429088 ns    164429038 ns            8
mask | 11 | avx       25643975 ns     25643838 ns            8
mask | 11 |     tbb   28129963 ns     27758212 ns            8
mask | 11 | avx tbb   18732513 ns     18694700 ns            8

data | 12 |          109468362 ns    109468250 ns            8
data | 12 | avx       25059012 ns     25058887 ns            8
data | 12 |     tbb   19278400 ns     19194613 ns            8
data | 12 | avx tbb   18645725 ns     18645700 ns            8
mask | 12 |          164331700 ns    164331700 ns            8
mask | 12 | avx       25703225 ns     25703075 ns            8
mask | 12 |     tbb   27788775 ns     27548775 ns            8
mask | 12 | avx tbb   18682687 ns     18682787 ns            8

data | 13 |          102432538 ns    102432600 ns            8
data | 13 | avx       25095175 ns     25094813 ns            8
data | 13 |     tbb   19179800 ns     19182150 ns            8
data | 13 | avx tbb   18660025 ns     18660025 ns            8
mask | 13 |          164226063 ns    164225663 ns            8
mask | 13 | avx       25890888 ns     25890750 ns            8
mask | 13 |     tbb   28338512 ns     28194625 ns            8
mask | 13 | avx tbb   18698888 ns     18700462 ns            8

data | 14 |           94364813 ns     94364925 ns            8
data | 14 | avx       25130263 ns     25130038 ns            8
data | 14 |     tbb   19240712 ns     19230912 ns            8
data | 14 | avx tbb   18641875 ns     18641863 ns            8
mask | 14 |          164454350 ns    164454525 ns            8
mask | 14 | avx       25885850 ns     25885675 ns            8
mask | 14 |     tbb   27914750 ns     27525700 ns            8
mask | 14 | avx tbb   18687225 ns     18687288 ns            8

data | 15 |           88063225 ns     88062837 ns            8
data | 15 | avx       25379175 ns     25378850 ns            8
data | 15 |     tbb   19301950 ns     19294425 ns            8
data | 15 | avx tbb   18737987 ns     18736300 ns            8
mask | 15 |          164274225 ns    164274288 ns            8
mask | 15 | avx       25716188 ns     25716000 ns            8
mask | 15 |     tbb   27941725 ns     27666012 ns            8
mask | 15 | avx tbb   18719538 ns     18719662 ns            8

data | 16 |           83174650 ns     83174363 ns            8
data | 16 | avx       25206063 ns     25205737 ns            8
data | 16 |     tbb   19233587 ns     19208075 ns            8
data | 16 | avx tbb   18669912 ns     18669850 ns            8
mask | 16 |          164532937 ns    164532950 ns            8
mask | 16 | avx       25753963 ns     25753875 ns            8
mask | 16 |     tbb   27994475 ns     27665037 ns            8
mask | 16 | avx tbb   18699312 ns     18699450 ns            8

data | 17 |           79869063 ns     79869825 ns            8
data | 17 | avx       25436963 ns     25436863 ns            8
data | 17 |     tbb   19206350 ns     19173212 ns            8
data | 17 | avx tbb   18784775 ns     18784775 ns            8
mask | 17 |          164437537 ns    164437587 ns            8
mask | 17 | avx       24837987 ns     24837950 ns            8
mask | 17 |     tbb   27881575 ns     27477375 ns            8
mask | 17 | avx tbb   18760850 ns     18760937 ns            8

data | 18 |           74467400 ns     74467238 ns            8
data | 18 | avx       25766013 ns     25765937 ns            8
data | 18 |     tbb   19369537 ns     19362462 ns            8
data | 18 | avx tbb   18743850 ns     18743925 ns            8
mask | 18 |          164359888 ns    164359950 ns            8
mask | 18 | avx       26169000 ns     26168775 ns            8
mask | 18 |     tbb   28547250 ns     28251550 ns            8
mask | 18 | avx tbb   18732688 ns     18731663 ns            8

data | 19 |           70404450 ns     70404262 ns            8
data | 19 | avx       25766663 ns     25766363 ns            8
data | 19 |     tbb   19236937 ns     19233075 ns            8
data | 19 | avx tbb   18762262 ns     18762212 ns            8
mask | 19 |          164648975 ns    164649012 ns            8
mask | 19 | avx       26126388 ns     26126175 ns            8
mask | 19 |     tbb   28218062 ns     27770325 ns            8
mask | 19 | avx tbb   18797562 ns     18794050 ns            8

data | 20 |           67140837 ns     67140512 ns            8
data | 20 | avx       25911337 ns     25911250 ns            8
data | 20 |     tbb   19112100 ns     19112225 ns            8
data | 20 | avx tbb   18698650 ns     18698725 ns            8
mask | 20 |          164370075 ns    164369575 ns            8
mask | 20 | avx       26077050 ns     26076900 ns            8
mask | 20 |     tbb   28085163 ns     27564875 ns            8
mask | 20 | avx tbb   18763187 ns     18763425 ns            8

data | 21 |           64525162 ns     64524788 ns            8
data | 21 | avx       25751988 ns     25751850 ns            8
data | 21 |     tbb   19224575 ns     19224763 ns            8
data | 21 | avx tbb   18757825 ns     18757825 ns            8
mask | 21 |          164260587 ns    164260613 ns            8
mask | 21 | avx       26134475 ns     26133200 ns            8
mask | 21 |     tbb   27973125 ns     27722162 ns            8
mask | 21 | avx tbb   18728187 ns     18728313 ns            8

data | 22 |           61468575 ns     61468550 ns            8
data | 22 | avx       25823850 ns     25823637 ns            8
data | 22 |     tbb   19122088 ns     19122262 ns            8
data | 22 | avx tbb   18766213 ns     18766300 ns            8
mask | 22 |          164342700 ns    164342788 ns            8
mask | 22 | avx       26152037 ns     26151988 ns            8
mask | 22 |     tbb   27944187 ns     27802850 ns            8
mask | 22 | avx tbb   18720150 ns     18720462 ns            8

data | 23 |           59097275 ns     59097175 ns            8
data | 23 | avx       25925538 ns     25925375 ns            8
data | 23 |     tbb   19099875 ns     19061975 ns            8
data | 23 | avx tbb   18731625 ns     18731550 ns            8
mask | 23 |          164189837 ns    164189838 ns            8
mask | 23 | avx       26109850 ns     26108463 ns            8
mask | 23 |     tbb   28257288 ns     27923425 ns            8
mask | 23 | avx tbb   18727263 ns     18727313 ns            8

data | 24 |           57158600 ns     57158513 ns            8
data | 24 | avx       25822475 ns     25822175 ns            8
data | 24 |     tbb   19036663 ns     19036938 ns            8
data | 24 | avx tbb   18720312 ns     18720475 ns            8
mask | 24 |          164380475 ns    164380600 ns            8
mask | 24 | avx       26152650 ns     26152400 ns            8
mask | 24 |     tbb   27780362 ns     27772775 ns            8
mask | 24 | avx tbb   18738637 ns     18738737 ns            8

data | 25 |           55223313 ns     55223125 ns            8
data | 25 | avx       25851937 ns     25851600 ns            8
data | 25 |     tbb   19171712 ns     19171975 ns            8
data | 25 | avx tbb   18782113 ns     18782112 ns            8
mask | 25 |          164275275 ns    164275362 ns            8
mask | 25 | avx       26024000 ns     26023937 ns            8
mask | 25 |     tbb   28130375 ns     27833450 ns            8
mask | 25 | avx tbb   18742237 ns     18742300 ns            8

data | 26 |           53758063 ns     53757925 ns            8
data | 26 | avx       25786713 ns     25786637 ns            8
data | 26 |     tbb   19069837 ns     19069925 ns            8
data | 26 | avx tbb   18723187 ns     18723250 ns            8
mask | 26 |          164261700 ns    164261750 ns            8
mask | 26 | avx       26032050 ns     26031925 ns            8
mask | 26 |     tbb   27895375 ns     27735912 ns            8
mask | 26 | avx tbb   18774425 ns     18774550 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          235559700 ns    235558662 ns            8
data |  1 | avx       43869887 ns     43869875 ns            8
data |  1 |     tbb   45389538 ns     45127538 ns            8
data |  1 | avx tbb   37040175 ns     37040350 ns            8
mask |  1 |          235170975 ns    235100375 ns            8
mask |  1 | avx       43767075 ns     43766950 ns            8
mask |  1 |     tbb   45091525 ns     44460762 ns            8
mask |  1 | avx tbb   37218975 ns     37076938 ns            8

data |  2 |         1280859938 ns   1280859988 ns            8
data |  2 | avx       54017500 ns     54017325 ns            8
data |  2 |     tbb  121237950 ns    120608175 ns            8
data |  2 | avx tbb   37389788 ns     37224613 ns            8
mask |  2 |          328927025 ns    328728350 ns            8
mask |  2 | avx       55074550 ns     55074275 ns            8
mask |  2 |     tbb   56191025 ns     54819662 ns            8
mask |  2 | avx tbb   37534475 ns     37298975 ns            8

data |  3 |          853323975 ns    853324150 ns            8
data |  3 | avx       50554800 ns     50554562 ns            8
data |  3 |     tbb   81751750 ns     79239425 ns            8
data |  3 | avx tbb   37215563 ns     37097112 ns            8
mask |  3 |          328802625 ns    328781638 ns            8
mask |  3 | avx       51735913 ns     51735050 ns            8
mask |  3 |     tbb   55870250 ns     53579538 ns            8
mask |  3 | avx tbb   37280738 ns     37279763 ns            8

data |  4 |          640562900 ns    640449675 ns            8
data |  4 | avx       50204225 ns     50203487 ns            8
data |  4 |     tbb   63509013 ns     60504537 ns            8
data |  4 | avx tbb   37246463 ns     37000738 ns            8
mask |  4 |          328461612 ns    328386412 ns            8
mask |  4 | avx       52098500 ns     52097175 ns            8
mask |  4 |     tbb   56496950 ns     54520125 ns            8
mask |  4 | avx tbb   37352637 ns     37181700 ns            8

data |  5 |          518371187 ns    518295237 ns            8
data |  5 | avx       50145463 ns     50144600 ns            8
data |  5 |     tbb   49900700 ns     48118788 ns            8
data |  5 | avx tbb   37195550 ns     37193938 ns            8
mask |  5 |          328707988 ns    328629888 ns            8
mask |  5 | avx       52221813 ns     52221638 ns            8
mask |  5 |     tbb   56266212 ns     53222387 ns            8
mask |  5 | avx tbb   37347288 ns     37346575 ns            8

data |  6 |          429312212 ns    429214300 ns            8
data |  6 | avx       50183713 ns     50183262 ns            8
data |  6 |     tbb   43154838 ns     41790662 ns            8
data |  6 | avx tbb   37248300 ns     37248500 ns            8
mask |  6 |          329367212 ns    329317412 ns            8
mask |  6 | avx       51823650 ns     51823675 ns            8
mask |  6 |     tbb   56206200 ns     54169387 ns            8
mask |  6 | avx tbb   37304812 ns     37127462 ns            8

data |  7 |          369480162 ns    369470663 ns            8
data |  7 | avx       50419338 ns     50419062 ns            8
data |  7 |     tbb   40063650 ns     38827375 ns            8
data |  7 | avx tbb   37224988 ns     36980287 ns            8
mask |  7 |          329073625 ns    329028362 ns            8
mask |  7 | avx       51710625 ns     51710250 ns            8
mask |  7 |     tbb   55988413 ns     53216988 ns            8
mask |  7 | avx tbb   37340400 ns     37313075 ns            8

data |  8 |          324497187 ns    324454075 ns            8
data |  8 | avx       50370375 ns     50370037 ns            8
data |  8 |     tbb   39177300 ns     38345813 ns            8
data |  8 | avx tbb   37287075 ns     37010837 ns            8
mask |  8 |          329099700 ns    329056450 ns            8
mask |  8 | avx       52117863 ns     52117662 ns            8
mask |  8 |     tbb   55542000 ns     54127612 ns            8
mask |  8 | avx tbb   37309837 ns     37294813 ns            8

data |  9 |          292138375 ns    292136950 ns            8
data |  9 | avx       50238462 ns     50238175 ns            8
data |  9 |     tbb   38463350 ns     37488087 ns            8
data |  9 | avx tbb   37257662 ns     37242913 ns            8
mask |  9 |          328647950 ns    328603413 ns            8
mask |  9 | avx       51752400 ns     51752137 ns            8
mask |  9 |     tbb   55802637 ns     54513262 ns            8
mask |  9 | avx tbb   37293700 ns     36789813 ns            8

data | 10 |          259722787 ns    259680112 ns            8
data | 10 | avx       50136300 ns     50135488 ns            8
data | 10 |     tbb   38505200 ns     37957900 ns            8
data | 10 | avx tbb   37273300 ns     37094950 ns            8
mask | 10 |          328912812 ns    328870912 ns            8
mask | 10 | avx       51536788 ns     51536038 ns            8
mask | 10 |     tbb   56713387 ns     52855012 ns            8
mask | 10 | avx tbb   37240050 ns     37071600 ns            8

data | 11 |          237352800 ns    237307163 ns            8
data | 11 | avx       50132100 ns     50131125 ns            8
data | 11 |     tbb   38501075 ns     38056275 ns            8
data | 11 | avx tbb   37257213 ns     37216475 ns            8
mask | 11 |          328807513 ns    328765375 ns            8
mask | 11 | avx       51336275 ns     51335662 ns            8
mask | 11 |     tbb   55510525 ns     54920900 ns            8
mask | 11 | avx tbb   37267312 ns     37250425 ns            8

data | 12 |          219029963 ns    218987563 ns            8
data | 12 | avx       50163150 ns     50162600 ns            8
data | 12 |     tbb   38134000 ns     37989837 ns            8
data | 12 | avx tbb   37269925 ns     37267138 ns            8
mask | 12 |          328742862 ns    328697188 ns            8
mask | 12 | avx       51532975 ns     51532725 ns            8
mask | 12 |     tbb   55657937 ns     54616700 ns            8
mask | 12 | avx tbb   37282637 ns     36988763 ns            8

data | 13 |          204550900 ns    204507875 ns            8
data | 13 | avx       50186225 ns     50185912 ns            8
data | 13 |     tbb   38140100 ns     37926587 ns            8
data | 13 | avx tbb   37245125 ns     37245250 ns            8
mask | 13 |          328895700 ns    328851838 ns            8
mask | 13 | avx       52523338 ns     52523137 ns            8
mask | 13 |     tbb   55581562 ns     54822300 ns            8
mask | 13 | avx tbb   37348912 ns     37320975 ns            8

data | 14 |          196352800 ns    196311500 ns            8
data | 14 | avx       50220800 ns     50220513 ns            8
data | 14 |     tbb   38326987 ns     38105738 ns            8
data | 14 | avx tbb   37288737 ns     37287050 ns            8
mask | 14 |          328556212 ns    328511550 ns            8
mask | 14 | avx       51488075 ns     51487850 ns            8
mask | 14 |     tbb   56872825 ns     54814787 ns            8
mask | 14 | avx tbb   37404587 ns     37291400 ns            8

data | 15 |          176321312 ns    176280100 ns            8
data | 15 | avx       50034950 ns     50034075 ns            8
data | 15 |     tbb   38556337 ns     37827000 ns            8
data | 15 | avx tbb   37234137 ns     36889037 ns            8
mask | 15 |          328885250 ns    328884275 ns            8
mask | 15 | avx       51565012 ns     51564575 ns            8
mask | 15 |     tbb   55665825 ns     53520362 ns            8
mask | 15 | avx tbb   37321837 ns     37322325 ns            8

data | 16 |          166380012 ns    166379987 ns            8
data | 16 | avx       50134500 ns     50133525 ns            8
data | 16 |     tbb   38298087 ns     38183888 ns            8
data | 16 | avx tbb   37210025 ns     37086763 ns            8
mask | 16 |          328688425 ns    328646200 ns            8
mask | 16 | avx       51569687 ns     51568875 ns            8
mask | 16 |     tbb   55747637 ns     54944500 ns            8
mask | 16 | avx tbb   37323575 ns     37267450 ns            8

data | 17 |          159881488 ns    159880800 ns            8
data | 17 | avx       51019237 ns     51018825 ns            8
data | 17 |     tbb   38416762 ns     38123700 ns            8
data | 17 | avx tbb   37366337 ns     37298488 ns            8
mask | 17 |          328759250 ns    328716425 ns            8
mask | 17 | avx       49823437 ns     49823225 ns            8
mask | 17 |     tbb   55709162 ns     54116838 ns            8
mask | 17 | avx tbb   37374750 ns     37089763 ns            8

data | 18 |          149096987 ns    149055525 ns            8
data | 18 | avx       51545975 ns     51545800 ns            8
data | 18 |     tbb   38285538 ns     38040988 ns            8
data | 18 | avx tbb   37336563 ns     37068138 ns            8
mask | 18 |          329088038 ns    329042987 ns            8
mask | 18 | avx       52248687 ns     52248425 ns            8
mask | 18 |     tbb   56242813 ns     55590687 ns            8
mask | 18 | avx tbb   37373762 ns     37104413 ns            8

data | 19 |          140796225 ns    140753563 ns            8
data | 19 | avx       51720587 ns     51720175 ns            8
data | 19 |     tbb   38077488 ns     37887425 ns            8
data | 19 | avx tbb   37490850 ns     37365100 ns            8
mask | 19 |          328730663 ns    328688725 ns            8
mask | 19 | avx       52629388 ns     52629162 ns            8
mask | 19 |     tbb   55501512 ns     53749025 ns            8
mask | 19 | avx tbb   37350525 ns     37342150 ns            8

data | 20 |          134315387 ns    134272000 ns            8
data | 20 | avx       51776037 ns     51775650 ns            8
data | 20 |     tbb   38392087 ns     38346575 ns            8
data | 20 | avx tbb   37313725 ns     37068400 ns            8
mask | 20 |          328760587 ns    328717963 ns            8
mask | 20 | avx       52265800 ns     52265600 ns            8
mask | 20 |     tbb   56406538 ns     54315900 ns            8
mask | 20 | avx tbb   37337537 ns     37213050 ns            8

data | 21 |          128244000 ns    128202888 ns            8
data | 21 | avx       51627138 ns     51626825 ns            8
data | 21 |     tbb   38129600 ns     37839775 ns            8
data | 21 | avx tbb   37440700 ns     37441112 ns            8
mask | 21 |          329579875 ns    329537475 ns            8
mask | 21 | avx       52306737 ns     52306413 ns            8
mask | 21 |     tbb   56152975 ns     54579275 ns            8
mask | 21 | avx tbb   37343862 ns     37174425 ns            8

data | 22 |          122806700 ns    122755100 ns            8
data | 22 | avx       51522487 ns     51521988 ns            8
data | 22 |     tbb   37987775 ns     37545262 ns            8
data | 22 | avx tbb   37451300 ns     37389713 ns            8
mask | 22 |          328823125 ns    328770363 ns            8
mask | 22 | avx       52294600 ns     52294325 ns            8
mask | 22 |     tbb   55857400 ns     54847150 ns            8
mask | 22 | avx tbb   37298513 ns     37122088 ns            8

data | 23 |          118336100 ns    118290375 ns            8
data | 23 | avx       51775838 ns     51775500 ns            8
data | 23 |     tbb   38116837 ns     37646312 ns            8
data | 23 | avx tbb   37346050 ns     37312213 ns            8
mask | 23 |          328770563 ns    328728825 ns            8
mask | 23 | avx       52198238 ns     52197837 ns            8
mask | 23 |     tbb   55733888 ns     53836225 ns            8
mask | 23 | avx tbb   37407112 ns     37406125 ns            8

data | 24 |          114428375 ns    114385325 ns            8
data | 24 | avx       51840238 ns     51839525 ns            8
data | 24 |     tbb   37924263 ns     37924525 ns            8
data | 24 | avx tbb   37467662 ns     37370325 ns            8
mask | 24 |          328929587 ns    328887725 ns            8
mask | 24 | avx       52411475 ns     52411088 ns            8
mask | 24 |     tbb   55254737 ns     54451325 ns            8
mask | 24 | avx tbb   37300963 ns     37301350 ns            8

data | 25 |          110632437 ns    110631800 ns            8
data | 25 | avx       51829200 ns     51828487 ns            8
data | 25 |     tbb   37945962 ns     37947113 ns            8
data | 25 | avx tbb   37326025 ns     37275712 ns            8
mask | 25 |          328227625 ns    328220463 ns            8
mask | 25 | avx       52433363 ns     52432662 ns            8
mask | 25 |     tbb   55645100 ns     55264987 ns            8
mask | 25 | avx tbb   37387263 ns     37373350 ns            8

data | 26 |          107596413 ns    107555075 ns            8
data | 26 | avx       52084200 ns     52084025 ns            8
data | 26 |     tbb   37951663 ns     37766925 ns            8
data | 26 | avx tbb   37401500 ns     37248362 ns            8
mask | 26 |          328975600 ns    328929188 ns            8
mask | 26 | avx       52414337 ns     52414150 ns            8
mask | 26 |     tbb   56459625 ns     53650912 ns            8
mask | 26 | avx tbb   37348775 ns     37349087 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          469670225 ns    469667925 ns            8
data |  1 | avx       87950438 ns     87950287 ns            8
data |  1 |     tbb   91187575 ns     87516763 ns            8
data |  1 | avx tbb   73935588 ns     73107250 ns            8
mask |  1 |          470001113 ns    469961313 ns            8
mask |  1 | avx       87929525 ns     87928625 ns            8
mask |  1 |     tbb   91803950 ns     86984737 ns            8
mask |  1 | avx tbb   74006025 ns     73178787 ns            8

data |  2 |         2561540250 ns   2561495938 ns            8
data |  2 | avx      107265425 ns    107264037 ns            8
data |  2 |     tbb  252258425 ns    229171250 ns            8
data |  2 | avx tbb   74630875 ns     73890762 ns            8
mask |  2 |          657041837 ns    656996238 ns            8
mask |  2 | avx      110670275 ns    110630012 ns            8
mask |  2 |     tbb  112198712 ns    106922212 ns            8
mask |  2 | avx tbb   74898063 ns     74137413 ns            8

data |  3 |         1709086325 ns   1709078363 ns            8
data |  3 | avx      101011075 ns    101011900 ns            8
data |  3 |     tbb  163191438 ns    154609400 ns            8
data |  3 | avx tbb   74389175 ns     74159312 ns            8
mask |  3 |          658126375 ns    658081525 ns            8
mask |  3 | avx      103457675 ns    103417388 ns            8
mask |  3 |     tbb  111350338 ns    107406913 ns            8
mask |  3 | avx tbb   74573475 ns     73745950 ns            8

data |  4 |         1281080838 ns   1281022163 ns            8
data |  4 | avx      100418612 ns    100418338 ns            8
data |  4 |     tbb  121740062 ns    117792412 ns            8
data |  4 | avx tbb   74366562 ns     73737862 ns            8
mask |  4 |          657532875 ns    657489650 ns            8
mask |  4 | avx      103195675 ns    103194600 ns            8
mask |  4 |     tbb  111878125 ns    107463075 ns            8
mask |  4 | avx tbb   74637012 ns     74398663 ns            8

data |  5 |         1037129775 ns   1037035812 ns            8
data |  5 | avx      100781638 ns    100781125 ns            8
data |  5 |     tbb  100528137 ns     96647962 ns            8
data |  5 | avx tbb   74424963 ns     73881300 ns            8
mask |  5 |          657379950 ns    657339950 ns            8
mask |  5 | avx      103502375 ns    103461888 ns            8
mask |  5 |     tbb  111630413 ns    109257650 ns            8
mask |  5 | avx tbb   74590113 ns     73719362 ns            8

data |  6 |          858487825 ns    858449012 ns            8
data |  6 | avx      101106150 ns    101105888 ns            8
data |  6 |     tbb   86226337 ns     83633513 ns            8
data |  6 | avx tbb   74524037 ns     74465662 ns            8
mask |  6 |          657828562 ns    657788525 ns            8
mask |  6 | avx      103580013 ns    103579650 ns            8
mask |  6 |     tbb  110687563 ns    108084200 ns            8
mask |  6 | avx tbb   74507275 ns     73960937 ns            8

data |  7 |          738697437 ns    738697350 ns            8
data |  7 | avx      100694712 ns    100694513 ns            8
data |  7 |     tbb   79335350 ns     78698725 ns            8
data |  7 | avx tbb   74439525 ns     72803475 ns            8
mask |  7 |          657213488 ns    657174638 ns            8
mask |  7 | avx      104571800 ns    104571938 ns            8
mask |  7 |     tbb  111244437 ns    108133725 ns            8
mask |  7 | avx tbb   74512475 ns     73501763 ns            8

data |  8 |          649190563 ns    649150362 ns            8
data |  8 | avx      102108463 ns    102105975 ns            8
data |  8 |     tbb   77788250 ns     76261438 ns            8
data |  8 | avx tbb   74488400 ns     73598975 ns            8
mask |  8 |          656997838 ns    656958212 ns            8
mask |  8 | avx      103639688 ns    103639350 ns            8
mask |  8 |     tbb  111386550 ns    108925388 ns            8
mask |  8 | avx tbb   74549287 ns     73916400 ns            8

data |  9 |          583984925 ns    583915500 ns            8
data |  9 | avx      100830362 ns    100829975 ns            8
data |  9 |     tbb   78005287 ns     75177738 ns            8
data |  9 | avx tbb   74382375 ns     73692250 ns            8
mask |  9 |          657735438 ns    657661838 ns            8
mask |  9 | avx      103575313 ns    103575000 ns            8
mask |  9 |     tbb  111965450 ns    107006163 ns            8
mask |  9 | avx tbb   74615863 ns     73847963 ns            8

data | 10 |          519827800 ns    519757937 ns            8
data | 10 | avx      101654250 ns    101653800 ns            8
data | 10 |     tbb   75744238 ns     75131525 ns            8
data | 10 | avx tbb   74441000 ns     73878800 ns            8
mask | 10 |          657531238 ns    657456450 ns            8
mask | 10 | avx      103611912 ns    103611737 ns            8
mask | 10 |     tbb  111995900 ns    109382288 ns            8
mask | 10 | avx tbb   74474412 ns     73827325 ns            8

data | 11 |          474107800 ns    474034462 ns            8
data | 11 | avx      100473400 ns    100472950 ns            8
data | 11 |     tbb   76105100 ns     75511812 ns            8
data | 11 | avx tbb   74495550 ns     73446475 ns            8
mask | 11 |          657586425 ns    657516513 ns            8
mask | 11 | avx      103491700 ns    103422738 ns            8
mask | 11 |     tbb  110797850 ns    109054850 ns            8
mask | 11 | avx tbb   74511600 ns     73713325 ns            8

data | 12 |          437715300 ns    437713875 ns            8
data | 12 | avx      100966088 ns    100965688 ns            8
data | 12 |     tbb   76475113 ns     75098125 ns            8
data | 12 | avx tbb   74369950 ns     74030875 ns            8
mask | 12 |          659318187 ns    659241950 ns            8
mask | 12 | avx      103235575 ns    103235175 ns            8
mask | 12 |     tbb  111285050 ns    107587638 ns            8
mask | 12 | avx tbb   74474850 ns     73882500 ns            8

data | 13 |          409249725 ns    409175138 ns            8
data | 13 | avx      100500825 ns    100499900 ns            8
data | 13 |     tbb   76353313 ns     75269537 ns            8
data | 13 | avx tbb   74435062 ns     73741375 ns            8
mask | 13 |          657346675 ns    657277837 ns            8
mask | 13 | avx      103578750 ns    103578050 ns            8
mask | 13 |     tbb  111645562 ns    109585513 ns            8
mask | 13 | avx tbb   74526750 ns     73295087 ns            8

data | 14 |          376917813 ns    376843675 ns            8
data | 14 | avx      100919250 ns    100919100 ns            8
data | 14 |     tbb   76645025 ns     75965638 ns            8
data | 14 | avx tbb   74312575 ns     74123300 ns            8
mask | 14 |          657226987 ns    657158875 ns            8
mask | 14 | avx      103426875 ns    103426900 ns            8
mask | 14 |     tbb  111154362 ns    108364350 ns            8
mask | 14 | avx tbb   74623975 ns     74401975 ns            8

data | 15 |          352528900 ns    352455300 ns            8
data | 15 | avx      100794950 ns    100794550 ns            8
data | 15 |     tbb   76552938 ns     75739025 ns            8
data | 15 | avx tbb   74446212 ns     73706913 ns            8
mask | 15 |          657848800 ns    657774512 ns            8
mask | 15 | avx      103272175 ns    103272087 ns            8
mask | 15 |     tbb  111686225 ns    109034237 ns            8
mask | 15 | avx tbb   74410500 ns     73673787 ns            8

data | 16 |          333189537 ns    333115612 ns            8
data | 16 | avx      100728275 ns    100727813 ns            8
data | 16 |     tbb   76106450 ns     75029113 ns            8
data | 16 | avx tbb   74392787 ns     73620700 ns            8
mask | 16 |          657458013 ns    657389075 ns            8
mask | 16 | avx      103283813 ns    103283588 ns            8
mask | 16 |     tbb  111978800 ns    109913113 ns            8
mask | 16 | avx tbb   74628500 ns     74366250 ns            8

data | 17 |          319354425 ns    319280188 ns            8
data | 17 | avx      102574550 ns    102574163 ns            8
data | 17 |     tbb   76511462 ns     75371588 ns            8
data | 17 | avx tbb   74614400 ns     74355475 ns            8
mask | 17 |          657430287 ns    657360787 ns            8
mask | 17 | avx       99906888 ns     99906150 ns            8
mask | 17 |     tbb  111204350 ns    108923662 ns            8
mask | 17 | avx tbb   74617788 ns     74183475 ns            8

data | 18 |          297719112 ns    297719000 ns            8
data | 18 | avx      104349012 ns    104348712 ns            8
data | 18 |     tbb   76048050 ns     75459762 ns            8
data | 18 | avx tbb   74726988 ns     73677400 ns            8
mask | 18 |          657332600 ns    657262463 ns            8
mask | 18 | avx      105034163 ns    104960700 ns            8
mask | 18 |     tbb  112900687 ns    109778150 ns            8
mask | 18 | avx tbb   74658250 ns     73975462 ns            8

data | 19 |          281665050 ns    281664900 ns            8
data | 19 | avx      104000463 ns    103999988 ns            8
data | 19 |     tbb   76036513 ns     74944012 ns            8
data | 19 | avx tbb   74661588 ns     73999262 ns            8
mask | 19 |          656873887 ns    656803213 ns            8
mask | 19 | avx      104795425 ns    104795050 ns            8
mask | 19 |     tbb  111986675 ns    108325900 ns            8
mask | 19 | avx tbb   74655225 ns     74302475 ns            8

data | 20 |          268381438 ns    268310863 ns            8
data | 20 | avx      103902287 ns    103828400 ns            8
data | 20 |     tbb   76261212 ns     76041712 ns            8
data | 20 | avx tbb   74667013 ns     74165475 ns            8
mask | 20 |          657280500 ns    657203075 ns            8
mask | 20 | avx      104974200 ns    104974150 ns            8
mask | 20 |     tbb  111191462 ns    108294400 ns            8
mask | 20 | avx tbb   74658862 ns     73843425 ns            8

data | 21 |          256473825 ns    256404325 ns            8
data | 21 | avx      103400100 ns    103399663 ns            8
data | 21 |     tbb   76104137 ns     75446037 ns            8
data | 21 | avx tbb   74721600 ns     74005775 ns            8
mask | 21 |          657206788 ns    657138425 ns            8
mask | 21 | avx      104685687 ns    104685288 ns            8
mask | 21 |     tbb  110702450 ns    109363987 ns            8
mask | 21 | avx tbb   74628450 ns     74296713 ns            8

data | 22 |          245493188 ns    245422887 ns            8
data | 22 | avx      103774650 ns    103774337 ns            8
data | 22 |     tbb   75879150 ns     75691725 ns            8
data | 22 | avx tbb   74713050 ns     74584688 ns            8
mask | 22 |          657736050 ns    657667362 ns            8
mask | 22 | avx      104978813 ns    104978800 ns            8
mask | 22 |     tbb  111494512 ns    110043400 ns            8
mask | 22 | avx tbb   74558675 ns     74103025 ns            8

data | 23 |          236767775 ns    236698387 ns            8
data | 23 | avx      103379262 ns    103378800 ns            8
data | 23 |     tbb   76104750 ns     75277650 ns            8
data | 23 | avx tbb   74744400 ns     73403175 ns            8
mask | 23 |          657621363 ns    657548287 ns            8
mask | 23 | avx      105205975 ns    105205675 ns            8
mask | 23 |     tbb  110916687 ns    109131638 ns            8
mask | 23 | avx tbb   74663350 ns     73996963 ns            8

data | 24 |          228576250 ns    228507250 ns            8
data | 24 | avx      103594700 ns    103594413 ns            8
data | 24 |     tbb   75993037 ns     75143550 ns            8
data | 24 | avx tbb   74588938 ns     73763212 ns            8
mask | 24 |          657265487 ns    657191987 ns            8
mask | 24 | avx      105143137 ns    105143100 ns            8
mask | 24 |     tbb  110912650 ns    107703337 ns            8
mask | 24 | avx tbb   74537175 ns     74178812 ns            8

data | 25 |          221305087 ns    221231913 ns            8
data | 25 | avx      104472687 ns    104398688 ns            8
data | 25 |     tbb   75836925 ns     75538713 ns            8
data | 25 | avx tbb   74622838 ns     74176050 ns            8
mask | 25 |          657226300 ns    657152525 ns            8
mask | 25 | avx      105034863 ns    105034863 ns            8
mask | 25 |     tbb  112888213 ns    110290987 ns            8
mask | 25 | avx tbb   74554913 ns     73933388 ns            8

data | 26 |          214942938 ns    214868500 ns            8
data | 26 | avx      104141088 ns    104140563 ns            8
data | 26 |     tbb   76006525 ns     74568963 ns            8
data | 26 | avx tbb   74659688 ns     73863725 ns            8
mask | 26 |          656957925 ns    656884725 ns            8
mask | 26 | avx      104979700 ns    104979375 ns            8
mask | 26 |     tbb  111033550 ns    109353188 ns            8
mask | 26 | avx tbb   74720437 ns     74435200 ns            8
```

</details>

