# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |               4287 ns         4319 ns         4096
data |  1 | avx            914 ns          896 ns         4096
data |  1 |     tbb       6547 ns         6568 ns         4096
data |  1 | avx tbb        959 ns          947 ns         4096
mask |  1 |               4409 ns         4447 ns         4096
mask |  1 | avx            971 ns          966 ns         4096
mask |  1 |     tbb       6595 ns         6642 ns         4096
mask |  1 | avx tbb        959 ns          970 ns         4096

data |  2 |              21088 ns        21137 ns         4096
data |  2 | avx           1298 ns         1294 ns         4096
data |  2 |     tbb      10451 ns        10494 ns         4096
data |  2 | avx tbb       1277 ns         1264 ns         4096
mask |  2 |               5894 ns         5945 ns         4096
mask |  2 | avx           1161 ns         1177 ns         4096
mask |  2 |     tbb       6794 ns         6841 ns         4096
mask |  2 | avx tbb       1117 ns         1100 ns         4096

data |  3 |              14260 ns        14306 ns         4096
data |  3 | avx           1265 ns         1263 ns         4096
data |  3 |     tbb       9229 ns         9271 ns         4096
data |  3 | avx tbb       1276 ns         1279 ns         4096
mask |  3 |               5772 ns         5799 ns         4096
mask |  3 | avx           1096 ns         1072 ns         4096
mask |  3 |     tbb       6788 ns         6842 ns         4096
mask |  3 | avx tbb       1254 ns         1243 ns         4096

data |  4 |              11419 ns        11468 ns         4096
data |  4 | avx           1258 ns         1254 ns         4096
data |  4 |     tbb       8737 ns         8782 ns         4096
data |  4 | avx tbb       1283 ns         1264 ns         4096
mask |  4 |               5896 ns         5952 ns         4096
mask |  4 | avx           1142 ns         1132 ns         4096
mask |  4 |     tbb       6669 ns         6711 ns         4096
mask |  4 | avx tbb       1220 ns         1209 ns         4096

data |  5 |               8845 ns         8893 ns         4096
data |  5 | avx           1189 ns         1184 ns         4096
data |  5 |     tbb       8524 ns         8567 ns         4096
data |  5 | avx tbb       1399 ns         1350 ns         4096
mask |  5 |               6119 ns         6155 ns         4096
mask |  5 | avx           1157 ns         1146 ns         4096
mask |  5 |     tbb       6745 ns         6791 ns         4096
mask |  5 | avx tbb       1274 ns         1268 ns         4096

data |  6 |               7895 ns         7936 ns         4096
data |  6 | avx           1177 ns         1174 ns         4096
data |  6 |     tbb       8419 ns         8469 ns         4096
data |  6 | avx tbb       1368 ns         1353 ns         4096
mask |  6 |               5814 ns         5876 ns         4096
mask |  6 | avx           1111 ns         1095 ns         4096
mask |  6 |     tbb       6832 ns         6873 ns         4096
mask |  6 | avx tbb       1245 ns         1241 ns         4096

data |  7 |               6953 ns         6974 ns         4096
data |  7 | avx           1292 ns         1302 ns         4096
data |  7 |     tbb       8434 ns         8458 ns         4096
data |  7 | avx tbb       1370 ns         1357 ns         4096
mask |  7 |               6093 ns         6142 ns         4096
mask |  7 | avx           1149 ns         1142 ns         4096
mask |  7 |     tbb       6758 ns         6799 ns         4096
mask |  7 | avx tbb       1243 ns         1236 ns         4096

data |  8 |               5904 ns         5933 ns         4096
data |  8 | avx           1190 ns         1175 ns         4096
data |  8 |     tbb       8151 ns         8191 ns         4096
data |  8 | avx tbb       1294 ns         1272 ns         4096
mask |  8 |               6073 ns         6109 ns         4096
mask |  8 | avx           1152 ns         1143 ns         4096
mask |  8 |     tbb       6705 ns         6748 ns         4096
mask |  8 | avx tbb       1243 ns         1234 ns         4096

data |  9 |               5288 ns         5321 ns         4096
data |  9 | avx           1196 ns         1190 ns         4096
data |  9 |     tbb       8258 ns         8299 ns         4096
data |  9 | avx tbb       1353 ns         1361 ns         4096
mask |  9 |               6088 ns         6116 ns         4096
mask |  9 | avx           1155 ns         1145 ns         4096
mask |  9 |     tbb       6814 ns         6857 ns         4096
mask |  9 | avx tbb       1170 ns         1161 ns         4096

data | 10 |               4839 ns         4872 ns         4096
data | 10 | avx           1188 ns         1179 ns         4096
data | 10 |     tbb       7969 ns         8006 ns         4096
data | 10 | avx tbb       1275 ns         1290 ns         4096
mask | 10 |               5772 ns         5817 ns         4096
mask | 10 | avx           1101 ns         1091 ns         4096
mask | 10 |     tbb       6752 ns         6784 ns         4096
mask | 10 | avx tbb       1296 ns         1276 ns         4096

data | 11 |               4799 ns         4830 ns         4096
data | 11 | avx           1273 ns         1269 ns         4096
data | 11 |     tbb       8159 ns         8203 ns         4096
data | 11 | avx tbb       1265 ns         1268 ns         4096
mask | 11 |               5742 ns         5775 ns         4096
mask | 11 | avx           1087 ns         1083 ns         4096
mask | 11 |     tbb       6665 ns         6719 ns         4096
mask | 11 | avx tbb       1261 ns         1252 ns         4096

data | 12 |               4438 ns         4485 ns         4096
data | 12 | avx           1259 ns         1261 ns         4096
data | 12 |     tbb       7999 ns         8042 ns         4096
data | 12 | avx tbb       1275 ns         1271 ns         4096
mask | 12 |               5759 ns         5801 ns         4096
mask | 12 | avx           1176 ns         1162 ns         4096
mask | 12 |     tbb       6909 ns         6946 ns         4096
mask | 12 | avx tbb       1317 ns         1306 ns         4096

data | 13 |               4214 ns         4264 ns         4096
data | 13 | avx           1270 ns         1270 ns         4096
data | 13 |     tbb       8025 ns         8055 ns         4096
data | 13 | avx tbb       1292 ns         1277 ns         4096
mask | 13 |               5835 ns         5871 ns         4096
mask | 13 | avx           1164 ns         1172 ns         4096
mask | 13 |     tbb       6719 ns         6768 ns         4096
mask | 13 | avx tbb       1262 ns         1235 ns         4096

data | 14 |               3744 ns         3779 ns         4096
data | 14 | avx           1206 ns         1189 ns         4096
data | 14 |     tbb       7930 ns         7979 ns         4096
data | 14 | avx tbb       1315 ns         1304 ns         4096
mask | 14 |               6092 ns         6133 ns         4096
mask | 14 | avx           1158 ns         1151 ns         4096
mask | 14 |     tbb       6686 ns         6732 ns         4096
mask | 14 | avx tbb       1223 ns         1198 ns         4096

data | 15 |               3552 ns         3588 ns         4096
data | 15 | avx           1193 ns         1187 ns         4096
data | 15 |     tbb       7853 ns         7895 ns         4096
data | 15 | avx tbb       1363 ns         1348 ns         4096
mask | 15 |               6142 ns         6184 ns         4096
mask | 15 | avx           1162 ns         1167 ns         4096
mask | 15 |     tbb       6780 ns         6830 ns         4096
mask | 15 | avx tbb       1250 ns         1238 ns         4096

data | 16 |               3512 ns         3603 ns         4096
data | 16 | avx           1199 ns         1190 ns         4096
data | 16 |     tbb       8069 ns         8067 ns         4096
data | 16 | avx tbb       1381 ns         1372 ns         4096
mask | 16 |               6181 ns         6222 ns         4096
mask | 16 | avx           1179 ns         1169 ns         4096
mask | 16 |     tbb       6662 ns         6698 ns         4096
mask | 16 | avx tbb       1256 ns         1236 ns         4096

data | 17 |               3333 ns         3374 ns         4096
data | 17 | avx           1254 ns         1244 ns         4096
data | 17 |     tbb       7809 ns         7855 ns         4096
data | 17 | avx tbb       1288 ns         1282 ns         4096
mask | 17 |               5863 ns         5921 ns         4096
mask | 17 | avx           1212 ns         1080 ns         4096
mask | 17 |     tbb       6913 ns         6955 ns         4096
mask | 17 | avx tbb       1237 ns         1232 ns         4096

data | 18 |               3124 ns         3164 ns         4096
data | 18 | avx           1268 ns         1268 ns         4096
data | 18 |     tbb       7773 ns         7810 ns         4096
data | 18 | avx tbb       1392 ns         1393 ns         4096
mask | 18 |               6098 ns         6134 ns         4096
mask | 18 | avx           1166 ns         1154 ns         4096
mask | 18 |     tbb       6653 ns         6699 ns         4096
mask | 18 | avx tbb       1260 ns         1252 ns         4096

data | 19 |               3170 ns         3201 ns         4096
data | 19 | avx           1198 ns         1184 ns         4096
data | 19 |     tbb       9048 ns         9097 ns         4096
data | 19 | avx tbb       1308 ns         1291 ns         4096
mask | 19 |               6064 ns         6097 ns         4096
mask | 19 | avx           1182 ns         1178 ns         4096
mask | 19 |     tbb       6826 ns         6860 ns         4096
mask | 19 | avx tbb       1259 ns         1247 ns         4096

data | 20 |               3098 ns         3144 ns         4096
data | 20 | avx           1273 ns         1267 ns         4096
data | 20 |     tbb       7707 ns         7762 ns         4096
data | 20 | avx tbb       1333 ns         1323 ns         4096
mask | 20 |               6110 ns         6133 ns         4096
mask | 20 | avx           1165 ns         1155 ns         4096
mask | 20 |     tbb       6637 ns         6678 ns         4096
mask | 20 | avx tbb       1260 ns         1249 ns         4096

data | 21 |               2952 ns         2987 ns         4096
data | 21 | avx           1291 ns         1276 ns         4096
data | 21 |     tbb       7936 ns         7982 ns         4096
data | 21 | avx tbb       1347 ns         1317 ns         4096
mask | 21 |               5933 ns         5966 ns         4096
mask | 21 | avx           1173 ns         1173 ns         4096
mask | 21 |     tbb       6674 ns         6721 ns         4096
mask | 21 | avx tbb       1283 ns         1266 ns         4096

data | 22 |               2740 ns         2774 ns         4096
data | 22 | avx           1207 ns         1216 ns         4096
data | 22 |     tbb       7751 ns         7790 ns         4096
data | 22 | avx tbb       1279 ns         1305 ns         4096
mask | 22 |               5897 ns         5942 ns         4096
mask | 22 | avx           1186 ns         1178 ns         4096
mask | 22 |     tbb       6808 ns         6834 ns         4096
mask | 22 | avx tbb       1249 ns         1254 ns         4096

data | 23 |               2715 ns         2768 ns         4096
data | 23 | avx           1205 ns         1194 ns         4096
data | 23 |     tbb       7724 ns         7765 ns         4096
data | 23 | avx tbb       1328 ns         1321 ns         4096
mask | 23 |               6109 ns         6144 ns         4096
mask | 23 | avx           1171 ns         1162 ns         4096
mask | 23 |     tbb       6641 ns         6679 ns         4096
mask | 23 | avx tbb       1253 ns         1249 ns         4096

data | 24 |               2569 ns         2622 ns         4096
data | 24 | avx           1203 ns         1200 ns         4096
data | 24 |     tbb       7720 ns         7764 ns         4096
data | 24 | avx tbb       1341 ns         1338 ns         4096
mask | 24 |               6093 ns         6130 ns         4096
mask | 24 | avx           1179 ns         1166 ns         4096
mask | 24 |     tbb       6797 ns         6847 ns         4096
mask | 24 | avx tbb       1198 ns         1189 ns         4096

data | 25 |               2487 ns         2520 ns         4096
data | 25 | avx           1208 ns         1199 ns         4096
data | 25 |     tbb       7691 ns         7738 ns         4096
data | 25 | avx tbb       1268 ns         1263 ns         4096
mask | 25 |               5735 ns         5794 ns         4096
mask | 25 | avx           1128 ns         1117 ns         4096
mask | 25 |     tbb       6829 ns         6867 ns         4096
mask | 25 | avx tbb       1230 ns         1242 ns         4096

data | 26 |               2479 ns         2514 ns         4096
data | 26 | avx           1196 ns         1193 ns         4096
data | 26 |     tbb       7643 ns         7685 ns         4096
data | 26 | avx tbb       1333 ns         1331 ns         4096
mask | 26 |               6114 ns         6148 ns         4096
mask | 26 | avx           1181 ns         1171 ns         4096
mask | 26 |     tbb       6714 ns         6761 ns         4096
mask | 26 | avx tbb       1236 ns         1223 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              15059 ns        15103 ns         4096
data |  1 | avx           1672 ns         1669 ns         4096
data |  1 |     tbb       9397 ns         9426 ns         4096
data |  1 | avx tbb       1724 ns         1716 ns         4096
mask |  1 |              15437 ns        15507 ns         4096
mask |  1 | avx           1675 ns         1664 ns         4096
mask |  1 |     tbb       9376 ns         9404 ns         4096
mask |  1 | avx tbb       1718 ns         1697 ns         4096

data |  2 |              81072 ns        81125 ns         4096
data |  2 | avx           2770 ns         2759 ns         4096
data |  2 |     tbb      16478 ns        16514 ns         4096
data |  2 | avx tbb       3140 ns         3148 ns         4096
mask |  2 |              21222 ns        21279 ns         4096
mask |  2 | avx           2509 ns         2501 ns         4096
mask |  2 |     tbb       9910 ns         9936 ns         4096
mask |  2 | avx tbb       2465 ns         2462 ns         4096

data |  3 |              54508 ns        54565 ns         4096
data |  3 | avx           2793 ns         2786 ns         4096
data |  3 |     tbb      14116 ns        14157 ns         4096
data |  3 | avx tbb       3255 ns         3256 ns         4096
mask |  3 |              21967 ns        22025 ns         4096
mask |  3 | avx           2512 ns         2506 ns         4096
mask |  3 |     tbb       9721 ns         9747 ns         4096
mask |  3 | avx tbb       2728 ns         2704 ns         4096

data |  4 |              41974 ns        42028 ns         4096
data |  4 | avx           2841 ns         2830 ns         4096
data |  4 |     tbb      12687 ns        12729 ns         4096
data |  4 | avx tbb       3079 ns         3089 ns         4096
mask |  4 |              21485 ns        21547 ns         4096
mask |  4 | avx           2530 ns         2520 ns         4096
mask |  4 |     tbb       9771 ns         9796 ns         4096
mask |  4 | avx tbb       2732 ns         2709 ns         4096

data |  5 |              33728 ns        33771 ns         4096
data |  5 | avx           2812 ns         2810 ns         4096
data |  5 |     tbb      11673 ns        11702 ns         4096
data |  5 | avx tbb       3062 ns         3034 ns         4096
mask |  5 |              20638 ns        20696 ns         4096
mask |  5 | avx           2417 ns         2417 ns         4096
mask |  5 |     tbb       9837 ns         9861 ns         4096
mask |  5 | avx tbb       2683 ns         2672 ns         4096

data |  6 |              28185 ns        28229 ns         4096
data |  6 | avx           2861 ns         2858 ns         4096
data |  6 |     tbb      11064 ns        11097 ns         4096
data |  6 | avx tbb       3093 ns         3056 ns         4096
mask |  6 |              21688 ns        21746 ns         4096
mask |  6 | avx           2385 ns         2381 ns         4096
mask |  6 |     tbb       9674 ns         9705 ns         4096
mask |  6 | avx tbb       2760 ns         2753 ns         4096

data |  7 |              24601 ns        24642 ns         4096
data |  7 | avx           2745 ns         2731 ns         4096
data |  7 |     tbb      10663 ns        10695 ns         4096
data |  7 | avx tbb       3176 ns         3159 ns         4096
mask |  7 |              21587 ns        21664 ns         4096
mask |  7 | avx           2560 ns         2553 ns         4096
mask |  7 |     tbb       9666 ns         9698 ns         4096
mask |  7 | avx tbb       2833 ns         2829 ns         4096

data |  8 |              21897 ns        21940 ns         4096
data |  8 | avx           2936 ns         2923 ns         4096
data |  8 |     tbb      10254 ns        10287 ns         4096
data |  8 | avx tbb       3065 ns         3047 ns         4096
mask |  8 |              21772 ns        21848 ns         4096
mask |  8 | avx           2465 ns         2465 ns         4096
mask |  8 |     tbb       9797 ns         9825 ns         4096
mask |  8 | avx tbb       2652 ns         2644 ns         4096

data |  9 |              19195 ns        19248 ns         4096
data |  9 | avx           2936 ns         2931 ns         4096
data |  9 |     tbb      10058 ns        10093 ns         4096
data |  9 | avx tbb       3101 ns         3082 ns         4096
mask |  9 |              20865 ns        20929 ns         4096
mask |  9 | avx           2559 ns         2567 ns         4096
mask |  9 |     tbb       9779 ns         9815 ns         4096
mask |  9 | avx tbb       2624 ns         2642 ns         4096

data | 10 |              17711 ns        17763 ns         4096
data | 10 | avx           2781 ns         2777 ns         4096
data | 10 |     tbb       9803 ns         9834 ns         4096
data | 10 | avx tbb       3126 ns         3108 ns         4096
mask | 10 |              21225 ns        21285 ns         4096
mask | 10 | avx           2539 ns         2530 ns         4096
mask | 10 |     tbb       9804 ns         9839 ns         4096
mask | 10 | avx tbb       2655 ns         2632 ns         4096

data | 11 |              15272 ns        15317 ns         4096
data | 11 | avx           2751 ns         2747 ns         4096
data | 11 |     tbb      10113 ns        10148 ns         4096
data | 11 | avx tbb       3048 ns         3023 ns         4096
mask | 11 |              21278 ns        21331 ns         4096
mask | 11 | avx           2534 ns         2528 ns         4096
mask | 11 |     tbb       9866 ns         9896 ns         4096
mask | 11 | avx tbb       2636 ns         2619 ns         4096

data | 12 |              14059 ns        14094 ns         4096
data | 12 | avx           2740 ns         2737 ns         4096
data | 12 |     tbb       9468 ns         9505 ns         4096
data | 12 | avx tbb       3153 ns         3149 ns         4096
mask | 12 |              21308 ns        21350 ns         4096
mask | 12 | avx           2538 ns         2521 ns         4096
mask | 12 |     tbb       9683 ns         9713 ns         4096
mask | 12 | avx tbb       2731 ns         2732 ns         4096

data | 13 |              13879 ns        13928 ns         4096
data | 13 | avx           2789 ns         2794 ns         4096
data | 13 |     tbb       9319 ns         9356 ns         4096
data | 13 | avx tbb       3049 ns         3040 ns         4096
mask | 13 |              21406 ns        21465 ns         4096
mask | 13 | avx           2569 ns         2562 ns         4096
mask | 13 |     tbb       9705 ns         9734 ns         4096
mask | 13 | avx tbb       2664 ns         2665 ns         4096

data | 14 |              12448 ns        12475 ns         4096
data | 14 | avx           2769 ns         2754 ns         4096
data | 14 |     tbb       9426 ns         9450 ns         4096
data | 14 | avx tbb       3147 ns         3145 ns         4096
mask | 14 |              21326 ns        21375 ns         4096
mask | 14 | avx           2559 ns         2548 ns         4096
mask | 14 |     tbb       9664 ns         9699 ns         4096
mask | 14 | avx tbb       2704 ns         2715 ns         4096

data | 15 |              12152 ns        12198 ns         4096
data | 15 | avx           2796 ns         2787 ns         4096
data | 15 |     tbb       8950 ns         8983 ns         4096
data | 15 | avx tbb       3175 ns         3181 ns         4096
mask | 15 |              21167 ns        21232 ns         4096
mask | 15 | avx           2555 ns         2552 ns         4096
mask | 15 |     tbb       9722 ns         9753 ns         4096
mask | 15 | avx tbb       2696 ns         2705 ns         4096

data | 16 |              11498 ns        11553 ns         4096
data | 16 | avx           2892 ns         2890 ns         4096
data | 16 |     tbb       9053 ns         9086 ns         4096
data | 16 | avx tbb       3147 ns         3126 ns         4096
mask | 16 |              20904 ns        20983 ns         4096
mask | 16 | avx           2447 ns         2439 ns         4096
mask | 16 |     tbb       9830 ns         9859 ns         4096
mask | 16 | avx tbb       2676 ns         2663 ns         4096

data | 17 |              10846 ns        10883 ns         4096
data | 17 | avx           2629 ns         2613 ns         4096
data | 17 |     tbb       9009 ns         9035 ns         4096
data | 17 | avx tbb       2846 ns         2856 ns         4096
mask | 17 |              21809 ns        21871 ns         4096
mask | 17 | avx           2271 ns         2246 ns         4096
mask | 17 |     tbb       9958 ns        10033 ns         4096
mask | 17 | avx tbb       2675 ns         2684 ns         4096

data | 18 |              10190 ns        10229 ns         4096
data | 18 | avx           2686 ns         2682 ns         4096
data | 18 |     tbb       8881 ns         8911 ns         4096
data | 18 | avx tbb       2823 ns         2804 ns         4096
mask | 18 |              21976 ns        22034 ns         4096
mask | 18 | avx           2419 ns         2417 ns         4096
mask | 18 |     tbb      10170 ns        10224 ns         4096
mask | 18 | avx tbb       2710 ns         2713 ns         4096

data | 19 |               9448 ns         9490 ns         4096
data | 19 | avx           2691 ns         2677 ns         4096
data | 19 |     tbb       8976 ns         9003 ns         4096
data | 19 | avx tbb       2868 ns         2840 ns         4096
mask | 19 |              21760 ns        21817 ns         4096
mask | 19 | avx           2460 ns         2444 ns         4096
mask | 19 |     tbb       9670 ns         9705 ns         4096
mask | 19 | avx tbb       2873 ns         2884 ns         4096

data | 20 |               9112 ns         9175 ns         4096
data | 20 | avx           2720 ns         2715 ns         4096
data | 20 |     tbb       8805 ns         8840 ns         4096
data | 20 | avx tbb       2868 ns         2841 ns         4096
mask | 20 |              21649 ns        21712 ns         4096
mask | 20 | avx           2533 ns         2523 ns         4096
mask | 20 |     tbb       9713 ns         9743 ns         4096
mask | 20 | avx tbb       2689 ns         2681 ns         4096

data | 21 |               8709 ns         8718 ns         4096
data | 21 | avx           2747 ns         2742 ns         4096
data | 21 |     tbb       8768 ns         8783 ns         4096
data | 21 | avx tbb       2883 ns         2869 ns         4096
mask | 21 |              21324 ns        21385 ns         4096
mask | 21 | avx           2613 ns         2601 ns         4096
mask | 21 |     tbb       9775 ns         9810 ns         4096
mask | 21 | avx tbb       2741 ns         2720 ns         4096

data | 22 |               8687 ns         8721 ns         4096
data | 22 | avx           2670 ns         2664 ns         4096
data | 22 |     tbb       8785 ns         8817 ns         4096
data | 22 | avx tbb       2903 ns         2884 ns         4096
mask | 22 |              21988 ns        22058 ns         4096
mask | 22 | avx           2608 ns         2595 ns         4096
mask | 22 |     tbb       9688 ns         9717 ns         4096
mask | 22 | avx tbb       2715 ns         2713 ns         4096

data | 23 |               8346 ns         8382 ns         4096
data | 23 | avx           2691 ns         2680 ns         4096
data | 23 |     tbb       8706 ns         8742 ns         4096
data | 23 | avx tbb       2829 ns         2824 ns         4096
mask | 23 |              21814 ns        21874 ns         4096
mask | 23 | avx           2431 ns         2429 ns         4096
mask | 23 |     tbb       9844 ns         9879 ns         4096
mask | 23 | avx tbb       2655 ns         2657 ns         4096

data | 24 |               7825 ns         7855 ns         4096
data | 24 | avx           2682 ns         2676 ns         4096
data | 24 |     tbb       8585 ns         8609 ns         4096
data | 24 | avx tbb       2786 ns         2803 ns         4096
mask | 24 |              21721 ns        21783 ns         4096
mask | 24 | avx           2443 ns         2429 ns         4096
mask | 24 |     tbb       9775 ns         9808 ns         4096
mask | 24 | avx tbb       2641 ns         2647 ns         4096

data | 25 |               7304 ns         7352 ns         4096
data | 25 | avx           2552 ns         2533 ns         4096
data | 25 |     tbb       8527 ns         8557 ns         4096
data | 25 | avx tbb       2815 ns         2807 ns         4096
mask | 25 |              21352 ns        21406 ns         4096
mask | 25 | avx           2646 ns         2625 ns         4096
mask | 25 |     tbb       9903 ns         9936 ns         4096
mask | 25 | avx tbb       2709 ns         2708 ns         4096

data | 26 |               7544 ns         7570 ns         4096
data | 26 | avx           2713 ns         2709 ns         4096
data | 26 |     tbb       8531 ns         8543 ns         4096
data | 26 | avx tbb       2919 ns         2926 ns         4096
mask | 26 |              21956 ns        22016 ns         4096
mask | 26 | avx           2647 ns         2621 ns         4096
mask | 26 |     tbb      10014 ns        10072 ns         4096
mask | 26 | avx tbb       2708 ns         2699 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |              60163 ns        60231 ns         2048
data |  1 | avx           5033 ns         5010 ns         2048
data |  1 |     tbb      19742 ns        19667 ns         2048
data |  1 | avx tbb       5381 ns         5352 ns         2048
mask |  1 |              59607 ns        59669 ns         2048
mask |  1 | avx           5082 ns         5074 ns         2048
mask |  1 |     tbb      20534 ns        20470 ns         2048
mask |  1 | avx tbb       5286 ns         5293 ns         2048

data |  2 |             317129 ns       317247 ns         2048
data |  2 | avx           9194 ns         9206 ns         2048
data |  2 |     tbb      42789 ns        42712 ns         2048
data |  2 | avx tbb      10549 ns        10583 ns         2048
mask |  2 |              83550 ns        83635 ns         2048
mask |  2 | avx           8085 ns         8080 ns         2048
mask |  2 |     tbb      22452 ns        22368 ns         2048
mask |  2 | avx tbb       8306 ns         8301 ns         2048

data |  3 |             212944 ns       213066 ns         2048
data |  3 | avx           9180 ns         9179 ns         2048
data |  3 |     tbb      31016 ns        30925 ns         2048
data |  3 | avx tbb      10274 ns        10286 ns         2048
mask |  3 |              83067 ns        83135 ns         2048
mask |  3 | avx           8006 ns         8028 ns         2048
mask |  3 |     tbb      22358 ns        22253 ns         2048
mask |  3 | avx tbb       8607 ns         8587 ns         2048

data |  4 |             160796 ns       160851 ns         2048
data |  4 | avx           9110 ns         9115 ns         2048
data |  4 |     tbb      26011 ns        25946 ns         2048
data |  4 | avx tbb      10543 ns        10565 ns         2048
mask |  4 |              80769 ns        80836 ns         2048
mask |  4 | avx           8023 ns         8040 ns         2048
mask |  4 |     tbb      22675 ns        22615 ns         2048
mask |  4 | avx tbb       8881 ns         8907 ns         2048

data |  5 |             131085 ns       131180 ns         2048
data |  5 | avx           9336 ns         9360 ns         2048
data |  5 |     tbb      23379 ns        23298 ns         2048
data |  5 | avx tbb      10366 ns        10389 ns         2048
mask |  5 |              83251 ns        83343 ns         2048
mask |  5 | avx           8000 ns         8002 ns         2048
mask |  5 |     tbb      22857 ns        22765 ns         2048
mask |  5 | avx tbb       9199 ns         9215 ns         2048

data |  6 |             111366 ns       111462 ns         2048
data |  6 | avx           9186 ns         9200 ns         2048
data |  6 |     tbb      21034 ns        20970 ns         2048
data |  6 | avx tbb      11104 ns        11090 ns         2048
mask |  6 |              83605 ns        83676 ns         2048
mask |  6 | avx           8173 ns         8160 ns         2048
mask |  6 |     tbb      22167 ns        22085 ns         2048
mask |  6 | avx tbb       8691 ns         8727 ns         2048

data |  7 |              93289 ns        93365 ns         2048
data |  7 | avx           9842 ns         9891 ns         2048
data |  7 |     tbb      19071 ns        18997 ns         2048
data |  7 | avx tbb      10798 ns        10803 ns         2048
mask |  7 |              82240 ns        82317 ns         2048
mask |  7 | avx           8307 ns         8300 ns         2048
mask |  7 |     tbb      22423 ns        22326 ns         2048
mask |  7 | avx tbb       8611 ns         8618 ns         2048

data |  8 |              81245 ns        81314 ns         2048
data |  8 | avx           9161 ns         9173 ns         2048
data |  8 |     tbb      18147 ns        18061 ns         2048
data |  8 | avx tbb      10329 ns        10326 ns         2048
mask |  8 |              82515 ns        82585 ns         2048
mask |  8 | avx           8106 ns         8109 ns         2048
mask |  8 |     tbb      21992 ns        21915 ns         2048
mask |  8 | avx tbb       8594 ns         8637 ns         2048

data |  9 |              75497 ns        75579 ns         2048
data |  9 | avx           9207 ns         9215 ns         2048
data |  9 |     tbb      17686 ns        17586 ns         2048
data |  9 | avx tbb      10509 ns        10485 ns         2048
mask |  9 |              83629 ns        83696 ns         2048
mask |  9 | avx           8278 ns         8284 ns         2048
mask |  9 |     tbb      22251 ns        22171 ns         2048
mask |  9 | avx tbb       8482 ns         8482 ns         2048

data | 10 |              66589 ns        66652 ns         2048
data | 10 | avx           9072 ns         9087 ns         2048
data | 10 |     tbb      16463 ns        16394 ns         2048
data | 10 | avx tbb      10407 ns        10383 ns         2048
mask | 10 |              83179 ns        83259 ns         2048
mask | 10 | avx           7936 ns         7953 ns         2048
mask | 10 |     tbb      21875 ns        21796 ns         2048
mask | 10 | avx tbb       8607 ns         8625 ns         2048

data | 11 |              60700 ns        60763 ns         2048
data | 11 | avx           9105 ns         9114 ns         2048
data | 11 |     tbb      16408 ns        16323 ns         2048
data | 11 | avx tbb      10567 ns        10557 ns         2048
mask | 11 |              83149 ns        83215 ns         2048
mask | 11 | avx           8290 ns         8251 ns         2048
mask | 11 |     tbb      21920 ns        21851 ns         2048
mask | 11 | avx tbb       8543 ns         8532 ns         2048

data | 12 |              56795 ns        56850 ns         2048
data | 12 | avx           9327 ns         9389 ns         2048
data | 12 |     tbb      15933 ns        15869 ns         2048
data | 12 | avx tbb      10638 ns        10663 ns         2048
mask | 12 |              82689 ns        82762 ns         2048
mask | 12 | avx           8185 ns         8190 ns         2048
mask | 12 |     tbb      23219 ns        23135 ns         2048
mask | 12 | avx tbb       8626 ns         8631 ns         2048

data | 13 |              51233 ns        51307 ns         2048
data | 13 | avx           9193 ns         9205 ns         2048
data | 13 |     tbb      15074 ns        15007 ns         2048
data | 13 | avx tbb      10460 ns        10437 ns         2048
mask | 13 |              83072 ns        83158 ns         2048
mask | 13 | avx           8052 ns         8066 ns         2048
mask | 13 |     tbb      22203 ns        22117 ns         2048
mask | 13 | avx tbb       8745 ns         8766 ns         2048

data | 14 |              48019 ns        48077 ns         2048
data | 14 | avx           9386 ns         9402 ns         2048
data | 14 |     tbb      15135 ns        15050 ns         2048
data | 14 | avx tbb      10225 ns        10241 ns         2048
mask | 14 |              83234 ns        83313 ns         2048
mask | 14 | avx           8081 ns         8116 ns         2048
mask | 14 |     tbb      22152 ns        22055 ns         2048
mask | 14 | avx tbb       8403 ns         8392 ns         2048

data | 15 |              45266 ns        45325 ns         2048
data | 15 | avx           9088 ns         9087 ns         2048
data | 15 |     tbb      14707 ns        14633 ns         2048
data | 15 | avx tbb      10424 ns        10420 ns         2048
mask | 15 |              83200 ns        83267 ns         2048
mask | 15 | avx           7997 ns         8005 ns         2048
mask | 15 |     tbb      22893 ns        22809 ns         2048
mask | 15 | avx tbb       9091 ns         9017 ns         2048

data | 16 |              43289 ns        43355 ns         2048
data | 16 | avx           9289 ns         9283 ns         2048
data | 16 |     tbb      14183 ns        14101 ns         2048
data | 16 | avx tbb      10494 ns        10465 ns         2048
mask | 16 |              83969 ns        84049 ns         2048
mask | 16 | avx           8355 ns         8277 ns         2048
mask | 16 |     tbb      22349 ns        22274 ns         2048
mask | 16 | avx tbb       8836 ns         8861 ns         2048

data | 17 |              40668 ns        40723 ns         2048
data | 17 | avx           7994 ns         7986 ns         2048
data | 17 |     tbb      14252 ns        14174 ns         2048
data | 17 | avx tbb       9391 ns         9434 ns         2048
mask | 17 |              83934 ns        84027 ns         2048
mask | 17 | avx           7482 ns         7485 ns         2048
mask | 17 |     tbb      21967 ns        21882 ns         2048
mask | 17 | avx tbb       8444 ns         8442 ns         2048

data | 18 |              38442 ns        38506 ns         2048
data | 18 | avx           8423 ns         8427 ns         2048
data | 18 |     tbb      14040 ns        13965 ns         2048
data | 18 | avx tbb       9351 ns         9360 ns         2048
mask | 18 |              83126 ns        83202 ns         2048
mask | 18 | avx           8211 ns         8212 ns         2048
mask | 18 |     tbb      22201 ns        22108 ns         2048
mask | 18 | avx tbb       8799 ns         8785 ns         2048

data | 19 |              36316 ns        36376 ns         2048
data | 19 | avx           8398 ns         8426 ns         2048
data | 19 |     tbb      13972 ns        13898 ns         2048
data | 19 | avx tbb       9580 ns         9570 ns         2048
mask | 19 |              83642 ns        83700 ns         2048
mask | 19 | avx           8288 ns         8289 ns         2048
mask | 19 |     tbb      22552 ns        22471 ns         2048
mask | 19 | avx tbb       8583 ns         8632 ns         2048

data | 20 |              34241 ns        34294 ns         2048
data | 20 | avx           8559 ns         8574 ns         2048
data | 20 |     tbb      13752 ns        13631 ns         2048
data | 20 | avx tbb       9173 ns         9178 ns         2048
mask | 20 |              80424 ns        80487 ns         2048
mask | 20 | avx           8154 ns         8140 ns         2048
mask | 20 |     tbb      22702 ns        22638 ns         2048
mask | 20 | avx tbb       8825 ns         8828 ns         2048

data | 21 |              33317 ns        33367 ns         2048
data | 21 | avx           8766 ns         8756 ns         2048
data | 21 |     tbb      13336 ns        13255 ns         2048
data | 21 | avx tbb       9272 ns         9284 ns         2048
mask | 21 |              82124 ns        82211 ns         2048
mask | 21 | avx           8183 ns         8201 ns         2048
mask | 21 |     tbb      21859 ns        21782 ns         2048
mask | 21 | avx tbb       8578 ns         8601 ns         2048

data | 22 |              31761 ns        31827 ns         2048
data | 22 | avx           8302 ns         8308 ns         2048
data | 22 |     tbb      13608 ns        13532 ns         2048
data | 22 | avx tbb       9598 ns         9582 ns         2048
mask | 22 |              82838 ns        82913 ns         2048
mask | 22 | avx           8348 ns         8355 ns         2048
mask | 22 |     tbb      22051 ns        21959 ns         2048
mask | 22 | avx tbb       9102 ns         9109 ns         2048

data | 23 |              30631 ns        30701 ns         2048
data | 23 | avx           8382 ns         8385 ns         2048
data | 23 |     tbb      12912 ns        12821 ns         2048
data | 23 | avx tbb       9350 ns         9398 ns         2048
mask | 23 |              83174 ns        83248 ns         2048
mask | 23 | avx           8164 ns         8158 ns         2048
mask | 23 |     tbb      22503 ns        22427 ns         2048
mask | 23 | avx tbb       8796 ns         8778 ns         2048

data | 24 |              28854 ns        28916 ns         2048
data | 24 | avx           8742 ns         8755 ns         2048
data | 24 |     tbb      12826 ns        12703 ns         2048
data | 24 | avx tbb       9389 ns         9410 ns         2048
mask | 24 |              83478 ns        83556 ns         2048
mask | 24 | avx           8114 ns         8120 ns         2048
mask | 24 |     tbb      22332 ns        22248 ns         2048
mask | 24 | avx tbb       8986 ns         8989 ns         2048

data | 25 |              28270 ns        28324 ns         2048
data | 25 | avx           8770 ns         8781 ns         2048
data | 25 |     tbb      12661 ns        12580 ns         2048
data | 25 | avx tbb       9394 ns         9433 ns         2048
mask | 25 |              82550 ns        82619 ns         2048
mask | 25 | avx           8181 ns         8171 ns         2048
mask | 25 |     tbb      22082 ns        21997 ns         2048
mask | 25 | avx tbb       8626 ns         8627 ns         2048

data | 26 |              27351 ns        27392 ns         2048
data | 26 | avx           8414 ns         8422 ns         2048
data | 26 |     tbb      12835 ns        12759 ns         2048
data | 26 | avx tbb       9538 ns         9539 ns         2048
mask | 26 |              83216 ns        83274 ns         2048
mask | 26 | avx           8256 ns         8240 ns         2048
mask | 26 |     tbb      21978 ns        21891 ns         2048
mask | 26 | avx tbb       8828 ns         8852 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             237823 ns       237945 ns         1024
data |  1 | avx          47903 ns        47903 ns         1024
data |  1 |     tbb      56817 ns        56727 ns         1024
data |  1 | avx tbb      41472 ns        41318 ns         1024
mask |  1 |             235616 ns       235715 ns         1024
mask |  1 | avx          48158 ns        48165 ns         1024
mask |  1 |     tbb      56772 ns        56690 ns         1024
mask |  1 | avx tbb      40546 ns        40426 ns         1024

data |  2 |            1258477 ns      1258633 ns         1024
data |  2 | avx          59479 ns        59514 ns         1024
data |  2 |     tbb     138943 ns       138889 ns         1024
data |  2 | avx tbb      40760 ns        40588 ns         1024
mask |  2 |             330766 ns       330861 ns         1024
mask |  2 | avx          55127 ns        55135 ns         1024
mask |  2 |     tbb      65331 ns        65221 ns         1024
mask |  2 | avx tbb      40562 ns        40425 ns         1024

data |  3 |             838033 ns       838224 ns         1024
data |  3 | avx          59439 ns        59473 ns         1024
data |  3 |     tbb      95884 ns        95808 ns         1024
data |  3 | avx tbb      41377 ns        41208 ns         1024
mask |  3 |             326372 ns       326484 ns         1024
mask |  3 | avx          56284 ns        56319 ns         1024
mask |  3 |     tbb      66123 ns        66047 ns         1024
mask |  3 | avx tbb      40290 ns        40122 ns         1024

data |  4 |             631550 ns       631722 ns         1024
data |  4 | avx          59675 ns        59668 ns         1024
data |  4 |     tbb      73817 ns        73747 ns         1024
data |  4 | avx tbb      42483 ns        41571 ns         1024
mask |  4 |             330161 ns       330286 ns         1024
mask |  4 | avx          55582 ns        55569 ns         1024
mask |  4 |     tbb      65319 ns        65208 ns         1024
mask |  4 | avx tbb      42838 ns        42738 ns         1024

data |  5 |             510112 ns       510251 ns         1024
data |  5 | avx          59936 ns        59962 ns         1024
data |  5 |     tbb      63658 ns        63569 ns         1024
data |  5 | avx tbb      41857 ns        41706 ns         1024
mask |  5 |             326971 ns       327084 ns         1024
mask |  5 | avx          55447 ns        55475 ns         1024
mask |  5 |     tbb      67270 ns        67154 ns         1024
mask |  5 | avx tbb      41064 ns        40970 ns         1024

data |  6 |             427086 ns       427205 ns         1024
data |  6 | avx          59388 ns        59423 ns         1024
data |  6 |     tbb      54967 ns        54825 ns         1024
data |  6 | avx tbb      41483 ns        41350 ns         1024
mask |  6 |             327752 ns       327847 ns         1024
mask |  6 | avx          55652 ns        55652 ns         1024
mask |  6 |     tbb      67855 ns        67762 ns         1024
mask |  6 | avx tbb      40849 ns        40740 ns         1024

data |  7 |             371411 ns       371546 ns         1024
data |  7 | avx          60184 ns        60217 ns         1024
data |  7 |     tbb      51515 ns        51365 ns         1024
data |  7 | avx tbb      41112 ns        40959 ns         1024
mask |  7 |             326962 ns       327076 ns         1024
mask |  7 | avx          55000 ns        55020 ns         1024
mask |  7 |     tbb      64058 ns        63982 ns         1024
mask |  7 | avx tbb      42352 ns        42227 ns         1024

data |  8 |             321822 ns       321919 ns         1024
data |  8 | avx          60721 ns        60691 ns         1024
data |  8 |     tbb      48958 ns        48853 ns         1024
data |  8 | avx tbb      41818 ns        41655 ns         1024
mask |  8 |             326422 ns       326551 ns         1024
mask |  8 | avx          55822 ns        55834 ns         1024
mask |  8 |     tbb      65285 ns        65195 ns         1024
mask |  8 | avx tbb      40669 ns        40571 ns         1024

data |  9 |             306965 ns       307063 ns         1024
data |  9 | avx          60038 ns        60054 ns         1024
data |  9 |     tbb      48373 ns        48292 ns         1024
data |  9 | avx tbb      40962 ns        40797 ns         1024
mask |  9 |             324846 ns       324926 ns         1024
mask |  9 | avx          55533 ns        55552 ns         1024
mask |  9 |     tbb      65321 ns        65256 ns         1024
mask |  9 | avx tbb      40305 ns        40166 ns         1024

data | 10 |             266353 ns       266459 ns         1024
data | 10 | avx          59451 ns        59478 ns         1024
data | 10 |     tbb      45645 ns        45541 ns         1024
data | 10 | avx tbb      41771 ns        41636 ns         1024
mask | 10 |             324623 ns       324766 ns         1024
mask | 10 | avx          55697 ns        55710 ns         1024
mask | 10 |     tbb      69732 ns        69628 ns         1024
mask | 10 | avx tbb      41364 ns        41246 ns         1024

data | 11 |             242968 ns       243103 ns         1024
data | 11 | avx          59459 ns        59480 ns         1024
data | 11 |     tbb      46128 ns        46011 ns         1024
data | 11 | avx tbb      41040 ns        40880 ns         1024
mask | 11 |             328381 ns       328534 ns         1024
mask | 11 | avx          55415 ns        55439 ns         1024
mask | 11 |     tbb      66689 ns        66598 ns         1024
mask | 11 | avx tbb      40809 ns        40685 ns         1024

data | 12 |             219807 ns       219897 ns         1024
data | 12 | avx          59838 ns        59855 ns         1024
data | 12 |     tbb      43641 ns        43484 ns         1024
data | 12 | avx tbb      42440 ns        42275 ns         1024
mask | 12 |             325888 ns       325987 ns         1024
mask | 12 | avx          55148 ns        55164 ns         1024
mask | 12 |     tbb      66909 ns        66813 ns         1024
mask | 12 | avx tbb      41240 ns        41125 ns         1024

data | 13 |             203257 ns       203324 ns         1024
data | 13 | avx          59782 ns        59806 ns         1024
data | 13 |     tbb      45592 ns        45493 ns         1024
data | 13 | avx tbb      40556 ns        40392 ns         1024
mask | 13 |             325373 ns       325535 ns         1024
mask | 13 | avx          55223 ns        55234 ns         1024
mask | 13 |     tbb      65048 ns        64953 ns         1024
mask | 13 | avx tbb      41373 ns        41271 ns         1024

data | 14 |             188289 ns       188386 ns         1024
data | 14 | avx          59063 ns        59077 ns         1024
data | 14 |     tbb      43979 ns        43844 ns         1024
data | 14 | avx tbb      42364 ns        42168 ns         1024
mask | 14 |             331234 ns       331344 ns         1024
mask | 14 | avx          55165 ns        55181 ns         1024
mask | 14 |     tbb      66057 ns        65973 ns         1024
mask | 14 | avx tbb      40785 ns        40677 ns         1024

data | 15 |             177933 ns       178008 ns         1024
data | 15 | avx          60772 ns        60799 ns         1024
data | 15 |     tbb      43967 ns        43881 ns         1024
data | 15 | avx tbb      40744 ns        40604 ns         1024
mask | 15 |             327018 ns       327131 ns         1024
mask | 15 | avx          55497 ns        55517 ns         1024
mask | 15 |     tbb      64694 ns        64603 ns         1024
mask | 15 | avx tbb      41301 ns        41188 ns         1024

data | 16 |             167707 ns       167794 ns         1024
data | 16 | avx          59156 ns        59148 ns         1024
data | 16 |     tbb      43735 ns        43613 ns         1024
data | 16 | avx tbb      42227 ns        42101 ns         1024
mask | 16 |             325953 ns       326085 ns         1024
mask | 16 | avx          56304 ns        56337 ns         1024
mask | 16 |     tbb      67004 ns        66918 ns         1024
mask | 16 | avx tbb      40852 ns        40735 ns         1024

data | 17 |             159485 ns       159595 ns         1024
data | 17 | avx          55063 ns        55083 ns         1024
data | 17 |     tbb      44639 ns        44513 ns         1024
data | 17 | avx tbb      40422 ns        40274 ns         1024
mask | 17 |             326850 ns       326932 ns         1024
mask | 17 | avx          53592 ns        53590 ns         1024
mask | 17 |     tbb      65417 ns        65351 ns         1024
mask | 17 | avx tbb      41018 ns        40908 ns         1024

data | 18 |             151327 ns       151409 ns         1024
data | 18 | avx          55830 ns        55841 ns         1024
data | 18 |     tbb      45151 ns        45033 ns         1024
data | 18 | avx tbb      41221 ns        41064 ns         1024
mask | 18 |             327082 ns       327215 ns         1024
mask | 18 | avx          56225 ns        56263 ns         1024
mask | 18 |     tbb      67945 ns        67461 ns         1024
mask | 18 | avx tbb      41370 ns        41262 ns         1024

data | 19 |             142782 ns       142846 ns         1024
data | 19 | avx          55671 ns        55680 ns         1024
data | 19 |     tbb      45481 ns        45358 ns         1024
data | 19 | avx tbb      41860 ns        41730 ns         1024
mask | 19 |             334055 ns       334178 ns         1024
mask | 19 | avx          56154 ns        56171 ns         1024
mask | 19 |     tbb      67012 ns        66928 ns         1024
mask | 19 | avx tbb      40852 ns        40737 ns         1024

data | 20 |             136515 ns       136586 ns         1024
data | 20 | avx          55848 ns        55808 ns         1024
data | 20 |     tbb      43398 ns        43278 ns         1024
data | 20 | avx tbb      41112 ns        40949 ns         1024
mask | 20 |             328012 ns       328138 ns         1024
mask | 20 | avx          56578 ns        56591 ns         1024
mask | 20 |     tbb      65143 ns        65044 ns         1024
mask | 20 | avx tbb      41246 ns        41139 ns         1024

data | 21 |             129988 ns       130054 ns         1024
data | 21 | avx          55639 ns        55649 ns         1024
data | 21 |     tbb      43064 ns        42948 ns         1024
data | 21 | avx tbb      42067 ns        41928 ns         1024
mask | 21 |             324792 ns       324794 ns         1024
mask | 21 | avx          56515 ns        56527 ns         1024
mask | 21 |     tbb      65956 ns        65875 ns         1024
mask | 21 | avx tbb      40597 ns        40467 ns         1024

data | 22 |             125738 ns       125828 ns         1024
data | 22 | avx          56778 ns        56783 ns         1024
data | 22 |     tbb      44530 ns        44435 ns         1024
data | 22 | avx tbb      40878 ns        40715 ns         1024
mask | 22 |             325557 ns       325683 ns         1024
mask | 22 | avx          55965 ns        55978 ns         1024
mask | 22 |     tbb      65252 ns        65166 ns         1024
mask | 22 | avx tbb      40874 ns        40764 ns         1024

data | 23 |             120608 ns       120704 ns         1024
data | 23 | avx          56708 ns        56724 ns         1024
data | 23 |     tbb      45139 ns        45029 ns         1024
data | 23 | avx tbb      40833 ns        40670 ns         1024
mask | 23 |             325405 ns       325541 ns         1024
mask | 23 | avx          55923 ns        55948 ns         1024
mask | 23 |     tbb      65720 ns        65630 ns         1024
mask | 23 | avx tbb      40751 ns        40640 ns         1024

data | 24 |             118175 ns       118252 ns         1024
data | 24 | avx          56329 ns        56341 ns         1024
data | 24 |     tbb      44825 ns        44724 ns         1024
data | 24 | avx tbb      40779 ns        40608 ns         1024
mask | 24 |             327956 ns       328088 ns         1024
mask | 24 | avx          55987 ns        55985 ns         1024
mask | 24 |     tbb      65695 ns        65597 ns         1024
mask | 24 | avx tbb      41922 ns        41043 ns         1024

data | 25 |             112766 ns       112839 ns         1024
data | 25 | avx          56048 ns        56065 ns         1024
data | 25 |     tbb      43141 ns        43037 ns         1024
data | 25 | avx tbb      41232 ns        41068 ns         1024
mask | 25 |             327625 ns       327734 ns         1024
mask | 25 | avx          56327 ns        56335 ns         1024
mask | 25 |     tbb      65096 ns        65014 ns         1024
mask | 25 | avx tbb      41618 ns        41516 ns         1024

data | 26 |             108373 ns       108462 ns         1024
data | 26 | avx          55708 ns        55716 ns         1024
data | 26 |     tbb      43582 ns        43483 ns         1024
data | 26 | avx tbb      41205 ns        41064 ns         1024
mask | 26 |             325871 ns       325984 ns         1024
mask | 26 | avx          56401 ns        56413 ns         1024
mask | 26 |     tbb      67217 ns        67092 ns         1024
mask | 26 | avx tbb      40821 ns        40711 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |             935662 ns       935826 ns          512
data |  1 | avx         191471 ns       191346 ns          512
data |  1 |     tbb     310904 ns       310907 ns          512
data |  1 | avx tbb     195592 ns       195534 ns          512
mask |  1 |             948216 ns       948340 ns          512
mask |  1 | avx         192823 ns       192728 ns          512
mask |  1 |     tbb     311491 ns       311495 ns          512
mask |  1 | avx tbb     194780 ns       194696 ns          512

data |  2 |            5044249 ns      5042755 ns          512
data |  2 | avx         242859 ns       242743 ns          512
data |  2 |     tbb     592539 ns       592451 ns          512
data |  2 | avx tbb     195292 ns       195195 ns          512
mask |  2 |            1291341 ns      1291458 ns          512
mask |  2 | avx         222291 ns       222139 ns          512
mask |  2 |     tbb     335360 ns       335326 ns          512
mask |  2 | avx tbb     197374 ns       197301 ns          512

data |  3 |            3359188 ns      3359292 ns          512
data |  3 | avx         242157 ns       242029 ns          512
data |  3 |     tbb     433701 ns       433547 ns          512
data |  3 | avx tbb     195552 ns       195435 ns          512
mask |  3 |            1307264 ns      1307329 ns          512
mask |  3 | avx         223476 ns       223357 ns          512
mask |  3 |     tbb     338061 ns       338026 ns          512
mask |  3 | avx tbb     204740 ns       204691 ns          512

data |  4 |            2519190 ns      2519317 ns          512
data |  4 | avx         240850 ns       240776 ns          512
data |  4 |     tbb     359538 ns       359499 ns          512
data |  4 | avx tbb     196491 ns       196388 ns          512
mask |  4 |            1300000 ns      1300133 ns          512
mask |  4 | avx         220957 ns       220809 ns          512
mask |  4 |     tbb     325647 ns       325631 ns          512
mask |  4 | avx tbb     214058 ns       214015 ns          512

data |  5 |            2034117 ns      2034257 ns          512
data |  5 | avx         240089 ns       239930 ns          512
data |  5 |     tbb     338195 ns       338164 ns          512
data |  5 | avx tbb     202389 ns       202233 ns          512
mask |  5 |            1322129 ns      1322288 ns          512
mask |  5 | avx         222539 ns       222410 ns          512
mask |  5 |     tbb     333238 ns       333183 ns          512
mask |  5 | avx tbb     196985 ns       196920 ns          512

data |  6 |            1697622 ns      1697769 ns          512
data |  6 | avx         238094 ns       237981 ns          512
data |  6 |     tbb     316942 ns       316914 ns          512
data |  6 | avx tbb     213140 ns       213075 ns          512
mask |  6 |            1306608 ns      1306746 ns          512
mask |  6 | avx         226583 ns       226429 ns          512
mask |  6 |     tbb     328344 ns       328312 ns          512
mask |  6 | avx tbb     196106 ns       196053 ns          512

data |  7 |            1451913 ns      1451997 ns          512
data |  7 | avx         243573 ns       243538 ns          512
data |  7 |     tbb     294082 ns       294046 ns          512
data |  7 | avx tbb     206436 ns       206343 ns          512
mask |  7 |            1306554 ns      1306686 ns          512
mask |  7 | avx         222397 ns       222275 ns          512
mask |  7 |     tbb     334243 ns       334113 ns          512
mask |  7 | avx tbb     203769 ns       203744 ns          512

data |  8 |            1293146 ns      1293223 ns          512
data |  8 | avx         239676 ns       239511 ns          512
data |  8 |     tbb     293045 ns       292980 ns          512
data |  8 | avx tbb     205483 ns       205353 ns          512
mask |  8 |            1303225 ns      1303426 ns          512
mask |  8 | avx         223668 ns       223546 ns          512
mask |  8 |     tbb     337806 ns       336407 ns          512
mask |  8 | avx tbb     194447 ns       194399 ns          512

data |  9 |            1162009 ns      1162098 ns          512
data |  9 | avx         238060 ns       237973 ns          512
data |  9 |     tbb     289406 ns       289374 ns          512
data |  9 | avx tbb     206852 ns       206771 ns          512
mask |  9 |            1311101 ns      1311235 ns          512
mask |  9 | avx         230697 ns       230631 ns          512
mask |  9 |     tbb     326622 ns       325164 ns          512
mask |  9 | avx tbb     199397 ns       199536 ns          512

data | 10 |            1023905 ns      1024009 ns          512
data | 10 | avx         243886 ns       243787 ns          512
data | 10 |     tbb     284368 ns       284407 ns          512
data | 10 | avx tbb     208769 ns       208657 ns          512
mask | 10 |            1317976 ns      1318135 ns          512
mask | 10 | avx         226907 ns       226780 ns          512
mask | 10 |     tbb     333694 ns       333659 ns          512
mask | 10 | avx tbb     205925 ns       205869 ns          512

data | 11 |             948298 ns       948416 ns          512
data | 11 | avx         240716 ns       240588 ns          512
data | 11 |     tbb     283125 ns       281630 ns          512
data | 11 | avx tbb     205701 ns       205555 ns          512
mask | 11 |            1303964 ns      1304063 ns          512
mask | 11 | avx         220066 ns       219919 ns          512
mask | 11 |     tbb     325487 ns       325463 ns          512
mask | 11 | avx tbb     204102 ns       204127 ns          512

data | 12 |             871910 ns       871987 ns          512
data | 12 | avx         239931 ns       239789 ns          512
data | 12 |     tbb     279966 ns       279956 ns          512
data | 12 | avx tbb     212608 ns       212505 ns          512
mask | 12 |            1313318 ns      1313442 ns          512
mask | 12 | avx         222142 ns       222017 ns          512
mask | 12 |     tbb     331557 ns       331513 ns          512
mask | 12 | avx tbb     204479 ns       204436 ns          512

data | 13 |             808962 ns       809044 ns          512
data | 13 | avx         239735 ns       239628 ns          512
data | 13 |     tbb     270980 ns       270928 ns          512
data | 13 | avx tbb     206421 ns       206329 ns          512
mask | 13 |            1312374 ns      1312552 ns          512
mask | 13 | avx         220206 ns       220065 ns          512
mask | 13 |     tbb     339654 ns       339587 ns          512
mask | 13 | avx tbb     207142 ns       207117 ns          512

data | 14 |             753788 ns       753844 ns          512
data | 14 | avx         240564 ns       240480 ns          512
data | 14 |     tbb     272361 ns       272361 ns          512
data | 14 | avx tbb     207194 ns       207091 ns          512
mask | 14 |            1308326 ns      1308480 ns          512
mask | 14 | avx         220207 ns       220076 ns          512
mask | 14 |     tbb     333794 ns       333746 ns          512
mask | 14 | avx tbb     194598 ns       194540 ns          512

data | 15 |             712115 ns       712133 ns          512
data | 15 | avx         242283 ns       242174 ns          512
data | 15 |     tbb     266778 ns       266772 ns          512
data | 15 | avx tbb     209703 ns       208083 ns          512
mask | 15 |            1309011 ns      1309164 ns          512
mask | 15 | avx         224516 ns       224371 ns          512
mask | 15 |     tbb     332531 ns       332466 ns          512
mask | 15 | avx tbb     205660 ns       205569 ns          512

data | 16 |             663504 ns       663573 ns          512
data | 16 | avx         243593 ns       243444 ns          512
data | 16 |     tbb     267663 ns       267626 ns          512
data | 16 | avx tbb     205270 ns       205149 ns          512
mask | 16 |            1301864 ns      1301974 ns          512
mask | 16 | avx         221083 ns       220941 ns          512
mask | 16 |     tbb     336606 ns       336596 ns          512
mask | 16 | avx tbb     205045 ns       204956 ns          512

data | 17 |             632370 ns       632365 ns          512
data | 17 | avx         219618 ns       219480 ns          512
data | 17 |     tbb     263226 ns       261668 ns          512
data | 17 | avx tbb     206843 ns       206704 ns          512
mask | 17 |            1304581 ns      1304719 ns          512
mask | 17 | avx         212604 ns       212463 ns          512
mask | 17 |     tbb     343657 ns       343686 ns          512
mask | 17 | avx tbb     193679 ns       193641 ns          512

data | 18 |             592434 ns       592458 ns          512
data | 18 | avx         224363 ns       224216 ns          512
data | 18 |     tbb     266227 ns       266240 ns          512
data | 18 | avx tbb     208670 ns       208568 ns          512
mask | 18 |            1303204 ns      1303292 ns          512
mask | 18 | avx         223314 ns       223194 ns          512
mask | 18 |     tbb     341709 ns       341685 ns          512
mask | 18 | avx tbb     202048 ns       202007 ns          512

data | 19 |             569603 ns       569578 ns          512
data | 19 | avx         220810 ns       220704 ns          512
data | 19 |     tbb     262431 ns       262417 ns          512
data | 19 | avx tbb     210532 ns       210444 ns          512
mask | 19 |            1303058 ns      1303204 ns          512
mask | 19 | avx         227219 ns       227096 ns          512
mask | 19 |     tbb     331114 ns       331069 ns          512
mask | 19 | avx tbb     206949 ns       206880 ns          512

data | 20 |             544170 ns       544182 ns          512
data | 20 | avx         225846 ns       225668 ns          512
data | 20 |     tbb     262545 ns       262527 ns          512
data | 20 | avx tbb     213282 ns       213131 ns          512
mask | 20 |            1324738 ns      1324876 ns          512
mask | 20 | avx         223397 ns       223300 ns          512
mask | 20 |     tbb     347897 ns       347699 ns          512
mask | 20 | avx tbb     200759 ns       200672 ns          512

data | 21 |             516664 ns       516627 ns          512
data | 21 | avx         223909 ns       223769 ns          512
data | 21 |     tbb     256962 ns       257010 ns          512
data | 21 | avx tbb     208806 ns       208690 ns          512
mask | 21 |            1304297 ns      1304407 ns          512
mask | 21 | avx         225423 ns       225292 ns          512
mask | 21 |     tbb     336252 ns       336233 ns          512
mask | 21 | avx tbb     196465 ns       196510 ns          512

data | 22 |             500186 ns       500198 ns          512
data | 22 | avx         225844 ns       225716 ns          512
data | 22 |     tbb     255606 ns       255592 ns          512
data | 22 | avx tbb     208138 ns       208047 ns          512
mask | 22 |            1319076 ns      1319192 ns          512
mask | 22 | avx         229119 ns       228999 ns          512
mask | 22 |     tbb     339495 ns       339425 ns          512
mask | 22 | avx tbb     195419 ns       195348 ns          512

data | 23 |             483519 ns       483503 ns          512
data | 23 | avx         225580 ns       225486 ns          512
data | 23 |     tbb     258425 ns       258446 ns          512
data | 23 | avx tbb     206408 ns       206302 ns          512
mask | 23 |            1308753 ns      1308905 ns          512
mask | 23 | avx         223496 ns       223357 ns          512
mask | 23 |     tbb     351833 ns       351763 ns          512
mask | 23 | avx tbb     205803 ns       205760 ns          512

data | 24 |             463711 ns       463653 ns          512
data | 24 | avx         225218 ns       225107 ns          512
data | 24 |     tbb     253879 ns       253857 ns          512
data | 24 | avx tbb     210451 ns       210363 ns          512
mask | 24 |            1299522 ns      1299598 ns          512
mask | 24 | avx         226057 ns       225934 ns          512
mask | 24 |     tbb     332622 ns       332578 ns          512
mask | 24 | avx tbb     202063 ns       202021 ns          512

data | 25 |             442982 ns       442981 ns          512
data | 25 | avx         228668 ns       228549 ns          512
data | 25 |     tbb     244651 ns       244579 ns          512
data | 25 | avx tbb     209327 ns       209202 ns          512
mask | 25 |            1308916 ns      1309002 ns          512
mask | 25 | avx         224146 ns       224038 ns          512
mask | 25 |     tbb     337504 ns       337440 ns          512
mask | 25 | avx tbb     197197 ns       197125 ns          512

data | 26 |             436381 ns       436339 ns          512
data | 26 | avx         221238 ns       221109 ns          512
data | 26 |     tbb     253393 ns       253455 ns          512
data | 26 | avx tbb     208667 ns       208576 ns          512
mask | 26 |            1303109 ns      1303203 ns          512
mask | 26 | avx         224486 ns       224367 ns          512
mask | 26 |     tbb     328421 ns       328418 ns          512
mask | 26 | avx tbb     204267 ns       204238 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |            3828789 ns      3828739 ns           64
data |  1 | avx         732563 ns       732498 ns           64
data |  1 |     tbb     884705 ns       884895 ns           64
data |  1 | avx tbb     664203 ns       664173 ns           64
mask |  1 |            3763831 ns      3763828 ns           64
mask |  1 | avx         727356 ns       727278 ns           64
mask |  1 |     tbb     884231 ns       884261 ns           64
mask |  1 | avx tbb     664303 ns       664286 ns           64

data |  2 |           20079611 ns     20079392 ns           64
data |  2 | avx         949306 ns       949298 ns           64
data |  2 |     tbb    2130164 ns      2130072 ns           64
data |  2 | avx tbb     674837 ns       674806 ns           64
mask |  2 |            5206566 ns      5206516 ns           64
mask |  2 | avx         852248 ns       852181 ns           64
mask |  2 |     tbb    1042191 ns      1042200 ns           64
mask |  2 | avx tbb     681548 ns       681555 ns           64

data |  3 |           13423942 ns     13423794 ns           64
data |  3 | avx         971745 ns       971767 ns           64
data |  3 |     tbb    1477631 ns      1477828 ns           64
data |  3 | avx tbb     680961 ns       680883 ns           64
mask |  3 |            5226881 ns      5226850 ns           64
mask |  3 | avx         852191 ns       852145 ns           64
mask |  3 |     tbb    1033505 ns      1033738 ns           64
mask |  3 | avx tbb     684125 ns       684100 ns           64

data |  4 |           10083175 ns     10083014 ns           64
data |  4 | avx         957194 ns       957170 ns           64
data |  4 |     tbb    1155211 ns      1155802 ns           64
data |  4 | avx tbb     680178 ns       680159 ns           64
mask |  4 |            5190903 ns      5190727 ns           64
mask |  4 | avx         845845 ns       845650 ns           64
mask |  4 |     tbb    1037037 ns      1037052 ns           64
mask |  4 | avx tbb     682325 ns       682336 ns           64

data |  5 |            8155380 ns      8155269 ns           64
data |  5 | avx         961400 ns       961458 ns           64
data |  5 |     tbb     975558 ns       975747 ns           64
data |  5 | avx tbb     681655 ns       681612 ns           64
mask |  5 |            5225750 ns      5225688 ns           64
mask |  5 | avx         848541 ns       848694 ns           64
mask |  5 |     tbb    1035231 ns      1035680 ns           64
mask |  5 | avx tbb     678842 ns       678848 ns           64

data |  6 |            6808805 ns      6808236 ns           64
data |  6 | avx         953017 ns       952989 ns           64
data |  6 |     tbb     854375 ns       854348 ns           64
data |  6 | avx tbb     683828 ns       683773 ns           64
mask |  6 |            5225945 ns      5225938 ns           64
mask |  6 | avx         843472 ns       843419 ns           64
mask |  6 |     tbb    1034780 ns      1034791 ns           64
mask |  6 | avx tbb     677362 ns       677378 ns           64

data |  7 |            5851028 ns      5850983 ns           64
data |  7 | avx         950714 ns       950658 ns           64
data |  7 |     tbb     804258 ns       804259 ns           64
data |  7 | avx tbb     681405 ns       681347 ns           64
mask |  7 |            5202522 ns      5202489 ns           64
mask |  7 | avx         843048 ns       842995 ns           64
mask |  7 |     tbb    1034548 ns      1034481 ns           64
mask |  7 | avx tbb     683758 ns       683905 ns           64

data |  8 |            5210158 ns      5210128 ns           64
data |  8 | avx         963962 ns       963908 ns           64
data |  8 |     tbb     774644 ns       774636 ns           64
data |  8 | avx tbb     679884 ns       679836 ns           64
mask |  8 |            5296686 ns      5296647 ns           64
mask |  8 | avx         845806 ns       845789 ns           64
mask |  8 |     tbb    1039945 ns      1040166 ns           64
mask |  8 | avx tbb     679378 ns       679388 ns           64

data |  9 |            4606286 ns      4606236 ns           64
data |  9 | avx         947164 ns       947133 ns           64
data |  9 |     tbb     767661 ns       767645 ns           64
data |  9 | avx tbb     681952 ns       681856 ns           64
mask |  9 |            5240450 ns      5240225 ns           64
mask |  9 | avx         845844 ns       845833 ns           64
mask |  9 |     tbb    1061189 ns      1061155 ns           64
mask |  9 | avx tbb     680262 ns       680236 ns           64

data | 10 |            4172630 ns      4172445 ns           64
data | 10 | avx         957873 ns       957852 ns           64
data | 10 |     tbb     755672 ns       755511 ns           64
data | 10 | avx tbb     683956 ns       683933 ns           64
mask | 10 |            5197573 ns      5197478 ns           64
mask | 10 | avx         858847 ns       858800 ns           64
mask | 10 |     tbb    1038256 ns      1038455 ns           64
mask | 10 | avx tbb     676820 ns       677050 ns           64

data | 11 |            3794269 ns      3794333 ns           64
data | 11 | avx         948752 ns       948589 ns           64
data | 11 |     tbb     761414 ns       761236 ns           64
data | 11 | avx tbb     681492 ns       681425 ns           64
mask | 11 |            5228633 ns      5229045 ns           64
mask | 11 | avx         845950 ns       845692 ns           64
mask | 11 |     tbb    1057545 ns      1057425 ns           64
mask | 11 | avx tbb     677247 ns       677220 ns           64

data | 12 |            3456394 ns      3456164 ns           64
data | 12 | avx         953195 ns       953156 ns           64
data | 12 |     tbb     749725 ns       749745 ns           64
data | 12 | avx tbb     683212 ns       682948 ns           64
mask | 12 |            5263197 ns      5263305 ns           64
mask | 12 | avx         855855 ns       855808 ns           64
mask | 12 |     tbb    1050113 ns      1050075 ns           64
mask | 12 | avx tbb     674723 ns       674583 ns           64

data | 13 |            3272639 ns      3272561 ns           64
data | 13 | avx         951364 ns       951313 ns           64
data | 13 |     tbb     746814 ns       746852 ns           64
data | 13 | avx tbb     682323 ns       682306 ns           64
mask | 13 |            5207214 ns      5207144 ns           64
mask | 13 | avx         851744 ns       851567 ns           64
mask | 13 |     tbb    1042039 ns      1042231 ns           64
mask | 13 | avx tbb     676589 ns       676555 ns           64

data | 14 |            3035048 ns      3034969 ns           64
data | 14 | avx         970148 ns       970050 ns           64
data | 14 |     tbb     750356 ns       750275 ns           64
data | 14 | avx tbb     684464 ns       684427 ns           64
mask | 14 |            5287153 ns      5287103 ns           64
mask | 14 | avx         843895 ns       843866 ns           64
mask | 14 |     tbb    1035497 ns      1035713 ns           64
mask | 14 | avx tbb     689905 ns       689664 ns           64

data | 15 |            2856216 ns      2856181 ns           64
data | 15 | avx         974255 ns       974183 ns           64
data | 15 |     tbb     744609 ns       744634 ns           64
data | 15 | avx tbb     685742 ns       685683 ns           64
mask | 15 |            5243577 ns      5243439 ns           64
mask | 15 | avx         853227 ns       853175 ns           64
mask | 15 |     tbb    1024769 ns      1025106 ns           64
mask | 15 | avx tbb     682286 ns       682278 ns           64

data | 16 |            2682722 ns      2682666 ns           64
data | 16 | avx         959280 ns       959117 ns           64
data | 16 |     tbb     747817 ns       747828 ns           64
data | 16 | avx tbb     686775 ns       686706 ns           64
mask | 16 |            5233842 ns      5233780 ns           64
mask | 16 | avx         845937 ns       845877 ns           64
mask | 16 |     tbb    1036533 ns      1036347 ns           64
mask | 16 | avx tbb     679984 ns       679963 ns           64

data | 17 |            2566425 ns      2566566 ns           64
data | 17 | avx         837697 ns       837567 ns           64
data | 17 |     tbb     742091 ns       742064 ns           64
data | 17 | avx tbb     684703 ns       684664 ns           64
mask | 17 |            5200614 ns      5200425 ns           64
mask | 17 | avx         828255 ns       828177 ns           64
mask | 17 |     tbb    1045480 ns      1045444 ns           64
mask | 17 | avx tbb     677805 ns       677641 ns           64

data | 18 |            2408041 ns      2407895 ns           64
data | 18 | avx         844308 ns       844083 ns           64
data | 18 |     tbb     741033 ns       741080 ns           64
data | 18 | avx tbb     685306 ns       685273 ns           64
mask | 18 |            5232142 ns      5232139 ns           64
mask | 18 | avx         863981 ns       863941 ns           64
mask | 18 |     tbb    1048228 ns      1048406 ns           64
mask | 18 | avx tbb     676278 ns       676273 ns           64

data | 19 |            2246002 ns      2245963 ns           64
data | 19 | avx         854991 ns       854963 ns           64
data | 19 |     tbb     734802 ns       734970 ns           64
data | 19 | avx tbb     685895 ns       686056 ns           64
mask | 19 |            5204567 ns      5204453 ns           64
mask | 19 | avx         858980 ns       858909 ns           64
mask | 19 |     tbb    1039336 ns      1039367 ns           64
mask | 19 | avx tbb     682202 ns       682164 ns           64

data | 20 |            2179558 ns      2179478 ns           64
data | 20 | avx         854469 ns       854855 ns           64
data | 20 |     tbb     732198 ns       732228 ns           64
data | 20 | avx tbb     681837 ns       681603 ns           64
mask | 20 |            5192578 ns      5192530 ns           64
mask | 20 | avx         855864 ns       855680 ns           64
mask | 20 |     tbb    1047294 ns      1047277 ns           64
mask | 20 | avx tbb     677855 ns       678033 ns           64

data | 21 |            2066525 ns      2066564 ns           64
data | 21 | avx         858533 ns       858286 ns           64
data | 21 |     tbb     736886 ns       736881 ns           64
data | 21 | avx tbb     680675 ns       680625 ns           64
mask | 21 |            5239014 ns      5238956 ns           64
mask | 21 | avx         869030 ns       868966 ns           64
mask | 21 |     tbb    1040291 ns      1040141 ns           64
mask | 21 | avx tbb     681223 ns       681191 ns           64

data | 22 |            1964105 ns      1964028 ns           64
data | 22 | avx         843737 ns       843497 ns           64
data | 22 |     tbb     742256 ns       742273 ns           64
data | 22 | avx tbb     682439 ns       682366 ns           64
mask | 22 |            5227753 ns      5227739 ns           64
mask | 22 | avx         857369 ns       857325 ns           64
mask | 22 |     tbb    1036642 ns      1036606 ns           64
mask | 22 | avx tbb     674433 ns       674437 ns           64

data | 23 |            1940509 ns      1940444 ns           64
data | 23 | avx         850042 ns       849936 ns           64
data | 23 |     tbb     729859 ns       729836 ns           64
data | 23 | avx tbb     680741 ns       680733 ns           64
mask | 23 |            5239358 ns      5239364 ns           64
mask | 23 | avx         877961 ns       877916 ns           64
mask | 23 |     tbb    1037555 ns      1037506 ns           64
mask | 23 | avx tbb     675130 ns       675105 ns           64

data | 24 |            1875150 ns      1875070 ns           64
data | 24 | avx         852611 ns       852402 ns           64
data | 24 |     tbb     724853 ns       724853 ns           64
data | 24 | avx tbb     681480 ns       681402 ns           64
mask | 24 |            5221720 ns      5221684 ns           64
mask | 24 | avx         859150 ns       859122 ns           64
mask | 24 |     tbb    1048558 ns      1048731 ns           64
mask | 24 | avx tbb     678336 ns       678319 ns           64

data | 25 |            1804491 ns      1804428 ns           64
data | 25 | avx         854617 ns       854553 ns           64
data | 25 |     tbb     723959 ns       724855 ns           64
data | 25 | avx tbb     680586 ns       680378 ns           64
mask | 25 |            5194975 ns      5194911 ns           64
mask | 25 | avx         857434 ns       857381 ns           64
mask | 25 |     tbb    1045027 ns      1045053 ns           64
mask | 25 | avx tbb     689414 ns       689217 ns           64

data | 26 |            1745802 ns      1745592 ns           64
data | 26 | avx         851814 ns       851739 ns           64
data | 26 |     tbb     729777 ns       730119 ns           64
data | 26 | avx tbb     682098 ns       682047 ns           64
mask | 26 |            5201916 ns      5201873 ns           64
mask | 26 | avx         852575 ns       852414 ns           64
mask | 26 |     tbb    1052591 ns      1053173 ns           64
mask | 26 | avx tbb     676720 ns       676730 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           14890722 ns     14890503 ns           32
data |  1 | avx        2721122 ns      2721438 ns           32
data |  1 |     tbb    3031678 ns      3031541 ns           32
data |  1 | avx tbb    2384806 ns      2384847 ns           32
mask |  1 |           14749231 ns     14749259 ns           32
mask |  1 | avx        2744481 ns      2744503 ns           32
mask |  1 |     tbb    3026475 ns      3026359 ns           32
mask |  1 | avx tbb    2385369 ns      2385750 ns           32

data |  2 |           80596947 ns     80581762 ns           32
data |  2 | avx        3769369 ns      3769375 ns           32
data |  2 |     tbb    7866631 ns      7863859 ns           32
data |  2 | avx tbb    2432837 ns      2433269 ns           32
mask |  2 |           20650716 ns     20650463 ns           32
mask |  2 | avx        3302434 ns      3302163 ns           32
mask |  2 |     tbb    3642594 ns      3642488 ns           32
mask |  2 | avx tbb    2414600 ns      2414666 ns           32

data |  3 |           53409903 ns     53409941 ns           32
data |  3 | avx        3726744 ns      3726787 ns           32
data |  3 |     tbb    5298553 ns      5298422 ns           32
data |  3 | avx tbb    2433078 ns      2434300 ns           32
mask |  3 |           20644278 ns     20644000 ns           32
mask |  3 | avx        3304628 ns      3289725 ns           32
mask |  3 |     tbb    3650191 ns      3650306 ns           32
mask |  3 | avx tbb    2435641 ns      2436100 ns           32

data |  4 |           40027656 ns     40012497 ns           32
data |  4 | avx        3685400 ns      3685509 ns           32
data |  4 |     tbb    4066041 ns      4065953 ns           32
data |  4 | avx tbb    2428372 ns      2428362 ns           32
mask |  4 |           20700669 ns     20700216 ns           32
mask |  4 | avx        3281094 ns      3265003 ns           32
mask |  4 |     tbb    3664819 ns      3664678 ns           32
mask |  4 | avx tbb    2420816 ns      2420881 ns           32

data |  5 |           32459291 ns     32459262 ns           32
data |  5 | avx        3675350 ns      3675278 ns           32
data |  5 |     tbb    3333947 ns      3333356 ns           32
data |  5 | avx tbb    2444078 ns      2444469 ns           32
mask |  5 |           20743547 ns     20743356 ns           32
mask |  5 | avx        3272119 ns      3272031 ns           32
mask |  5 |     tbb    3688169 ns      3669887 ns           32
mask |  5 | avx tbb    2429662 ns      2429713 ns           32

data |  6 |           26887328 ns     26887103 ns           32
data |  6 | avx        3748163 ns      3748091 ns           32
data |  6 |     tbb    2905131 ns      2905459 ns           32
data |  6 | avx tbb    2431509 ns      2388259 ns           32
mask |  6 |           20739253 ns     20739234 ns           32
mask |  6 | avx        3249122 ns      3249100 ns           32
mask |  6 |     tbb    3633866 ns      3633819 ns           32
mask |  6 | avx tbb    2430400 ns      2430766 ns           32

data |  7 |           23376966 ns     23362141 ns           32
data |  7 | avx        3711891 ns      3711666 ns           32
data |  7 |     tbb    2667797 ns      2668059 ns           32
data |  7 | avx tbb    2420522 ns      2420816 ns           32
mask |  7 |           20689475 ns     20689294 ns           32
mask |  7 | avx        3236856 ns      3236756 ns           32
mask |  7 |     tbb    3669959 ns      3669837 ns           32
mask |  7 | avx tbb    2431916 ns      2432022 ns           32

data |  8 |           20501794 ns     20501156 ns           32
data |  8 | avx        3696359 ns      3696294 ns           32
data |  8 |     tbb    2630909 ns      2630797 ns           32
data |  8 | avx tbb    2428519 ns      2428037 ns           32
mask |  8 |           20684644 ns     20684425 ns           32
mask |  8 | avx        3229591 ns      3229594 ns           32
mask |  8 |     tbb    3636303 ns      3636175 ns           32
mask |  8 | avx tbb    2420116 ns      2420569 ns           32

data |  9 |           18314922 ns     18314866 ns           32
data |  9 | avx        3717578 ns      3717519 ns           32
data |  9 |     tbb    2578906 ns      2579206 ns           32
data |  9 | avx tbb    2439597 ns      2439894 ns           32
mask |  9 |           20534866 ns     20534594 ns           32
mask |  9 | avx        3248644 ns      3233447 ns           32
mask |  9 |     tbb    3649716 ns      3649916 ns           32
mask |  9 | avx tbb    2419969 ns      2419641 ns           32

data | 10 |           16324472 ns     16324159 ns           32
data | 10 | avx        3726378 ns      3726287 ns           32
data | 10 |     tbb    2576741 ns      2577081 ns           32
data | 10 | avx tbb    2434262 ns      2434634 ns           32
mask | 10 |           20564025 ns     20564009 ns           32
mask | 10 | avx        3233075 ns      3233066 ns           32
mask | 10 |     tbb    3633247 ns      3633203 ns           32
mask | 10 | avx tbb    2421513 ns      2421609 ns           32

data | 11 |           14895312 ns     14880394 ns           32
data | 11 | avx        3717947 ns      3717891 ns           32
data | 11 |     tbb    2570525 ns      2570834 ns           32
data | 11 | avx tbb    2431484 ns      2432747 ns           32
mask | 11 |           20804400 ns     20804450 ns           32
mask | 11 | avx        3248000 ns      3247928 ns           32
mask | 11 |     tbb    3675369 ns      3675144 ns           32
mask | 11 | avx tbb    2418591 ns      2418241 ns           32

data | 12 |           13697853 ns     13697866 ns           32
data | 12 | avx        3746409 ns      3746091 ns           32
data | 12 |     tbb    2546850 ns      2546763 ns           32
data | 12 | avx tbb    2432106 ns      2432150 ns           32
mask | 12 |           20775559 ns     20775547 ns           32
mask | 12 | avx        3287766 ns      3287744 ns           32
mask | 12 |     tbb    3661691 ns      3661634 ns           32
mask | 12 | avx tbb    2411416 ns      2411344 ns           32

data | 13 |           12905169 ns     12890003 ns           32
data | 13 | avx        3715275 ns      3715162 ns           32
data | 13 |     tbb    2555328 ns      2555222 ns           32
data | 13 | avx tbb    2421853 ns      2422287 ns           32
mask | 13 |           20596988 ns     20596916 ns           32
mask | 13 | avx        3249288 ns      3249241 ns           32
mask | 13 |     tbb    3680831 ns      3680684 ns           32
mask | 13 | avx tbb    2426678 ns      2426669 ns           32

data | 14 |           11861728 ns     11861728 ns           32
data | 14 | avx        3756716 ns      3757597 ns           32
data | 14 |     tbb    2560631 ns      2560962 ns           32
data | 14 | avx tbb    2430006 ns      2429884 ns           32
mask | 14 |           20634222 ns     20634075 ns           32
mask | 14 | avx        3224331 ns      3224387 ns           32
mask | 14 |     tbb    3664422 ns      3664613 ns           32
mask | 14 | avx tbb    2427850 ns      2428416 ns           32

data | 15 |           11133056 ns     11118069 ns           32
data | 15 | avx        3707763 ns      3707787 ns           32
data | 15 |     tbb    2545937 ns      2546106 ns           32
data | 15 | avx tbb    2435697 ns      2436172 ns           32
mask | 15 |           20622444 ns     20622400 ns           32
mask | 15 | avx        3238034 ns      3238044 ns           32
mask | 15 |     tbb    3659216 ns      3659084 ns           32
mask | 15 | avx tbb    2418178 ns      2418216 ns           32

data | 16 |           10438159 ns     10438144 ns           32
data | 16 | avx        3681622 ns      3681350 ns           32
data | 16 |     tbb    2538869 ns      2539181 ns           32
data | 16 | avx tbb    2432556 ns      2432737 ns           32
mask | 16 |           20814341 ns     20798081 ns           32
mask | 16 | avx        3273675 ns      3273625 ns           32
mask | 16 |     tbb    3643831 ns      3643725 ns           32
mask | 16 | avx tbb    2433472 ns      2433831 ns           32

data | 17 |           10132344 ns     10132284 ns           32
data | 17 | avx        3193031 ns      3192747 ns           32
data | 17 |     tbb    2532547 ns      2532891 ns           32
data | 17 | avx tbb    2426872 ns      2427234 ns           32
mask | 17 |           20679494 ns     20679519 ns           32
mask | 17 | avx        3123441 ns      3123341 ns           32
mask | 17 |     tbb    3634428 ns      3634319 ns           32
mask | 17 | avx tbb    2440991 ns      2441472 ns           32

data | 18 |            9433466 ns      9433438 ns           32
data | 18 | avx        3270644 ns      3270850 ns           32
data | 18 |     tbb    2546759 ns      2547947 ns           32
data | 18 | avx tbb    2427050 ns      2426981 ns           32
mask | 18 |           20565634 ns     20550678 ns           32
mask | 18 | avx        3292631 ns      3292334 ns           32
mask | 18 |     tbb    3670325 ns      3670603 ns           32
mask | 18 | avx tbb    2422503 ns      2423566 ns           32

data | 19 |            8895903 ns      8895687 ns           32
data | 19 | avx        3232706 ns      3232631 ns           32
data | 19 |     tbb    2523791 ns      2523662 ns           32
data | 19 | avx tbb    2428881 ns      2428887 ns           32
mask | 19 |           20981169 ns     20981188 ns           32
mask | 19 | avx        3278647 ns      3278328 ns           32
mask | 19 |     tbb    3694853 ns      3694069 ns           32
mask | 19 | avx tbb    2431156 ns      2431528 ns           32

data | 20 |            8552575 ns      8536763 ns           32
data | 20 | avx        3250653 ns      3250566 ns           32
data | 20 |     tbb    2529344 ns      2529206 ns           32
data | 20 | avx tbb    2440184 ns      2439759 ns           32
mask | 20 |           20799769 ns     20800141 ns           32
mask | 20 | avx        3292300 ns      3292084 ns           32
mask | 20 |     tbb    3638266 ns      3638175 ns           32
mask | 20 | avx tbb    2423209 ns      2423606 ns           32

data | 21 |            8121306 ns      8121316 ns           32
data | 21 | avx        3287581 ns      3287494 ns           32
data | 21 |     tbb    2534772 ns      2534141 ns           32
data | 21 | avx tbb    2423978 ns      2423969 ns           32
mask | 21 |           20812747 ns     20797100 ns           32
mask | 21 | avx        3320197 ns      3320131 ns           32
mask | 21 |     tbb    3683963 ns      3683922 ns           32
mask | 21 | avx tbb    2424794 ns      2424844 ns           32

data | 22 |            7678803 ns      7678647 ns           32
data | 22 | avx        3254537 ns      3254541 ns           32
data | 22 |     tbb    2521416 ns      2521841 ns           32
data | 22 | avx tbb    2427200 ns      2427616 ns           32
mask | 22 |           20592947 ns     20592750 ns           32
mask | 22 | avx        3329338 ns      3328784 ns           32
mask | 22 |     tbb    3668391 ns      3668222 ns           32
mask | 22 | avx tbb    2431509 ns      2431484 ns           32

data | 23 |            7430853 ns      7430169 ns           32
data | 23 | avx        3283094 ns      3282978 ns           32
data | 23 |     tbb    2522503 ns      2522741 ns           32
data | 23 | avx tbb    2437072 ns      2437416 ns           32
mask | 23 |           20603234 ns     20602997 ns           32
mask | 23 | avx        3273078 ns      3273078 ns           32
mask | 23 |     tbb    3682597 ns      3682522 ns           32
mask | 23 | avx tbb    2436378 ns      2437141 ns           32

data | 24 |            7160347 ns      7160278 ns           32
data | 24 | avx        3335369 ns      3335294 ns           32
data | 24 |     tbb    2515744 ns      2516128 ns           32
data | 24 | avx tbb    2434062 ns      2434016 ns           32
mask | 24 |           20578469 ns     20578266 ns           32
mask | 24 | avx        3263228 ns      3263272 ns           32
mask | 24 |     tbb    3641078 ns      3640959 ns           32
mask | 24 | avx tbb    2429534 ns      2429606 ns           32

data | 25 |            6969225 ns      6969216 ns           32
data | 25 | avx        3269038 ns      3268922 ns           32
data | 25 |     tbb    2507303 ns      2507006 ns           32
data | 25 | avx tbb    2444269 ns      2444200 ns           32
mask | 25 |           20633778 ns     20633491 ns           32
mask | 25 | avx        3283184 ns      3283137 ns           32
mask | 25 |     tbb    3660694 ns      3660597 ns           32
mask | 25 | avx tbb    2435428 ns      2435438 ns           32

data | 26 |            6778537 ns      6778547 ns           32
data | 26 | avx        3288962 ns      3288916 ns           32
data | 26 |     tbb    2497416 ns      2497791 ns           32
data | 26 | avx tbb    2421438 ns      2421303 ns           32
mask | 26 |           20626250 ns     20625784 ns           32
mask | 26 | avx        3315603 ns      3315587 ns           32
mask | 26 |     tbb    3657200 ns      3637884 ns           32
mask | 26 | avx tbb    2420525 ns      2420897 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |           58956444 ns     58956000 ns           16
data |  1 | avx       10857800 ns     10856600 ns           16
data |  1 |     tbb   11467431 ns     11428725 ns           16
data |  1 | avx tbb    9338337 ns      9338194 ns           16
mask |  1 |           59382681 ns     59335325 ns           16
mask |  1 | avx       10965894 ns     10965769 ns           16
mask |  1 |     tbb   11425969 ns     11425969 ns           16
mask |  1 | avx tbb    9327569 ns      9327431 ns           16

data |  2 |          321626456 ns    321624806 ns           16
data |  2 | avx       14736962 ns     14736894 ns           16
data |  2 |     tbb   31305325 ns     29202206 ns           16
data |  2 | avx tbb    9411619 ns      9294631 ns           16
mask |  2 |           82625056 ns     82623950 ns           16
mask |  2 | avx       12873869 ns     12828756 ns           16
mask |  2 |     tbb   14021281 ns     13876388 ns           16
mask |  2 | avx tbb    9396856 ns      9396781 ns           16

data |  3 |          213484175 ns    213436756 ns           16
data |  3 | avx       14730694 ns     14730713 ns           16
data |  3 |     tbb   20645088 ns     20047900 ns           16
data |  3 | avx tbb    9428513 ns      9428331 ns           16
mask |  3 |           82326238 ns     82326162 ns           16
mask |  3 | avx       13063744 ns     13063637 ns           16
mask |  3 |     tbb   14140631 ns     13889462 ns           16
mask |  3 | avx tbb    9416981 ns      9416913 ns           16

data |  4 |          160499587 ns    160451919 ns           16
data |  4 | avx       14886937 ns     14886775 ns           16
data |  4 |     tbb   15676600 ns     15310175 ns           16
data |  4 | avx tbb    9420731 ns      9420669 ns           16
mask |  4 |           82736162 ns     82688506 ns           16
mask |  4 | avx       12901081 ns     12900988 ns           16
mask |  4 |     tbb   14097044 ns     14003944 ns           16
mask |  4 | avx tbb    9412500 ns      9412338 ns           16

data |  5 |          129719431 ns    129671919 ns           16
data |  5 | avx       14801350 ns     14801038 ns           16
data |  5 |     tbb   12749919 ns     12664656 ns           16
data |  5 | avx tbb    9416894 ns      9416744 ns           16
mask |  5 |           82529600 ns     82484019 ns           16
mask |  5 | avx       12828962 ns     12828900 ns           16
mask |  5 |     tbb   14164750 ns     14017625 ns           16
mask |  5 | avx tbb    9405275 ns      9405288 ns           16

data |  6 |          107741081 ns    107693831 ns           16
data |  6 | avx       14889794 ns     14889706 ns           16
data |  6 |     tbb   11026238 ns     10928556 ns           16
data |  6 | avx tbb    9419319 ns      9419269 ns           16
mask |  6 |           82525262 ns     82477519 ns           16
mask |  6 | avx       13095119 ns     13094725 ns           16
mask |  6 |     tbb   14033156 ns     13913588 ns           16
mask |  6 | avx tbb    9431762 ns      9430956 ns           16

data |  7 |           92348062 ns     92347381 ns           16
data |  7 | avx       14904919 ns     14904669 ns           16
data |  7 |     tbb   10246381 ns     10118344 ns           16
data |  7 | avx tbb    9415519 ns      9415469 ns           16
mask |  7 |           82556925 ns     82511575 ns           16
mask |  7 | avx       13021806 ns     13021687 ns           16
mask |  7 |     tbb   14074225 ns     13988012 ns           16
mask |  7 | avx tbb    9404719 ns      9404600 ns           16

data |  8 |           81315869 ns     81267556 ns           16
data |  8 | avx       14755644 ns     14755225 ns           16
data |  8 |     tbb    9957387 ns      9914675 ns           16
data |  8 | avx tbb    9412363 ns      9412287 ns           16
mask |  8 |           82371744 ns     82371412 ns           16
mask |  8 | avx       12878500 ns     12878769 ns           16
mask |  8 |     tbb   14080462 ns     14041975 ns           16
mask |  8 | avx tbb    9413763 ns      9413638 ns           16

data |  9 |           73230969 ns     73185762 ns           16
data |  9 | avx       14887213 ns     14887075 ns           16
data |  9 |     tbb    9860344 ns      9841125 ns           16
data |  9 | avx tbb    9451588 ns      9451481 ns           16
mask |  9 |           82151506 ns     82104131 ns           16
mask |  9 | avx       12865944 ns     12865600 ns           16
mask |  9 |     tbb   14066162 ns     14039738 ns           16
mask |  9 | avx tbb    9408887 ns      9408006 ns           16

data | 10 |           64936444 ns     64935663 ns           16
data | 10 | avx       14830844 ns     14784162 ns           16
data | 10 |     tbb    9677000 ns      9668331 ns           16
data | 10 | avx tbb    9415225 ns      9415125 ns           16
mask | 10 |           83191362 ns     83147388 ns           16
mask | 10 | avx       13153813 ns     13153706 ns           16
mask | 10 |     tbb   14043619 ns     13941081 ns           16
mask | 10 | avx tbb    9436838 ns      9436694 ns           16

data | 11 |           59282350 ns     59235037 ns           16
data | 11 | avx       14774775 ns     14774381 ns           16
data | 11 |     tbb    9741281 ns      9734063 ns           16
data | 11 | avx tbb    9424462 ns      9424375 ns           16
mask | 11 |           82398213 ns     82397538 ns           16
mask | 11 | avx       13039650 ns     13039575 ns           16
mask | 11 |     tbb   14005094 ns     13884900 ns           16
mask | 11 | avx tbb    9418244 ns      9418075 ns           16

data | 12 |           54735525 ns     54688681 ns           16
data | 12 | avx       14866825 ns     14866656 ns           16
data | 12 |     tbb    9692788 ns      9684388 ns           16
data | 12 | avx tbb    9448906 ns      9450700 ns           16
mask | 12 |           82308256 ns     82263263 ns           16
mask | 12 | avx       12875975 ns     12875962 ns           16
mask | 12 |     tbb   14050881 ns     13973094 ns           16
mask | 12 | avx tbb    9401031 ns      9400981 ns           16

data | 13 |           51217075 ns     51217019 ns           16
data | 13 | avx       14759831 ns     14759056 ns           16
data | 13 |     tbb    9716125 ns      9706400 ns           16
data | 13 | avx tbb    9429319 ns      9429175 ns           16
mask | 13 |           82139425 ns     82094519 ns           16
mask | 13 | avx       12992212 ns     12991606 ns           16
mask | 13 |     tbb   14144719 ns     13976681 ns           16
mask | 13 | avx tbb    9393619 ns      9394306 ns           16

data | 14 |           47213163 ns     47165794 ns           16
data | 14 | avx       14799069 ns     14798937 ns           16
data | 14 |     tbb    9698262 ns      9691012 ns           16
data | 14 | avx tbb    9423431 ns      9423319 ns           16
mask | 14 |           82541906 ns     82496731 ns           16
mask | 14 | avx       12976219 ns     12975825 ns           16
mask | 14 |     tbb   14107812 ns     13975044 ns           16
mask | 14 | avx tbb    9421519 ns      9421556 ns           16

data | 15 |           44119362 ns     44071019 ns           16
data | 15 | avx       14915456 ns     14915350 ns           16
data | 15 |     tbb    9708794 ns      9708125 ns           16
data | 15 | avx tbb    9420319 ns      9421031 ns           16
mask | 15 |           82199419 ns     82152706 ns           16
mask | 15 | avx       13041156 ns     13040775 ns           16
mask | 15 |     tbb   14117662 ns     14092037 ns           16
mask | 15 | avx tbb    9431413 ns      9432100 ns           16

data | 16 |           41916325 ns     41871300 ns           16
data | 16 | avx       14897263 ns     14897188 ns           16
data | 16 |     tbb    9721850 ns      9721137 ns           16
data | 16 | avx tbb    9439881 ns      9439087 ns           16
mask | 16 |           82410613 ns     82363213 ns           16
mask | 16 | avx       13062431 ns     13062344 ns           16
mask | 16 |     tbb   14190556 ns     14071563 ns           16
mask | 16 | avx tbb    9425044 ns      9424887 ns           16

data | 17 |           40724944 ns     40677263 ns           16
data | 17 | avx       12842862 ns     12842388 ns           16
data | 17 |     tbb    9645956 ns      9645925 ns           16
data | 17 | avx tbb    9436131 ns      9436031 ns           16
mask | 17 |           82106600 ns     82058875 ns           16
mask | 17 | avx       12401594 ns     12401606 ns           16
mask | 17 |     tbb   14190688 ns     14117306 ns           16
mask | 17 | avx tbb    9392556 ns      9392475 ns           16

data | 18 |           37218275 ns     37218469 ns           16
data | 18 | avx       12911381 ns     12911319 ns           16
data | 18 |     tbb    9670537 ns      9670481 ns           16
data | 18 | avx tbb    9456837 ns      9456775 ns           16
mask | 18 |           82272513 ns     82271963 ns           16
mask | 18 | avx       12969506 ns     12969425 ns           16
mask | 18 |     tbb   14087669 ns     14034788 ns           16
mask | 18 | avx tbb    9465944 ns      9465844 ns           16

data | 19 |           35194769 ns     35147225 ns           16
data | 19 | avx       12932281 ns     12932756 ns           16
data | 19 |     tbb    9696456 ns      9695944 ns           16
data | 19 | avx tbb    9435587 ns      9435450 ns           16
mask | 19 |           82744644 ns     82744306 ns           16
mask | 19 | avx       13207588 ns     13207456 ns           16
mask | 19 |     tbb   14083413 ns     14017300 ns           16
mask | 19 | avx tbb    9431031 ns      9430319 ns           16

data | 20 |           33651094 ns     33606162 ns           16
data | 20 | avx       12951094 ns     12951581 ns           16
data | 20 |     tbb    9679819 ns      9680531 ns           16
data | 20 | avx tbb    9448906 ns      9448044 ns           16
mask | 20 |           82838506 ns     82791106 ns           16
mask | 20 | avx       13194544 ns     13194106 ns           16
mask | 20 |     tbb   14097812 ns     13962431 ns           16
mask | 20 | avx tbb    9422425 ns      9423294 ns           16

data | 21 |           31955700 ns     31955731 ns           16
data | 21 | avx       13036769 ns     13036612 ns           16
data | 21 |     tbb    9608000 ns      9607944 ns           16
data | 21 | avx tbb    9428050 ns      9427906 ns           16
mask | 21 |           82458544 ns     82458094 ns           16
mask | 21 | avx       13071819 ns     13071744 ns           16
mask | 21 |     tbb   14173425 ns     14043094 ns           16
mask | 21 | avx tbb    9433662 ns      9433656 ns           16

data | 22 |           30741725 ns     30692662 ns           16
data | 22 | avx       13018581 ns     13018063 ns           16
data | 22 |     tbb    9629338 ns      9629256 ns           16
data | 22 | avx tbb    9416138 ns      9415288 ns           16
mask | 22 |           82181994 ns     82181131 ns           16
mask | 22 | avx       13184925 ns     13184856 ns           16
mask | 22 |     tbb   14161744 ns     14097869 ns           16
mask | 22 | avx tbb    9421150 ns      9421012 ns           16

data | 23 |           29657306 ns     29612644 ns           16
data | 23 | avx       12977312 ns     12977213 ns           16
data | 23 |     tbb    9602931 ns      9603669 ns           16
data | 23 | avx tbb    9419900 ns      9419887 ns           16
mask | 23 |           82096737 ns     82096431 ns           16
mask | 23 | avx       13054069 ns     13053956 ns           16
mask | 23 |     tbb   14200712 ns     14095112 ns           16
mask | 23 | avx tbb    9407037 ns      9406875 ns           16

data | 24 |           28701381 ns     28701263 ns           16
data | 24 | avx       12974362 ns     12974231 ns           16
data | 24 |     tbb    9632644 ns      9632844 ns           16
data | 24 | avx tbb    9439206 ns      9439038 ns           16
mask | 24 |           82561587 ns     82560556 ns           16
mask | 24 | avx       13370231 ns     13369738 ns           16
mask | 24 |     tbb   14056675 ns     14023994 ns           16
mask | 24 | avx tbb    9440762 ns      9440756 ns           16

data | 25 |           27650175 ns     27603150 ns           16
data | 25 | avx       13099750 ns     13099612 ns           16
data | 25 |     tbb    9618275 ns      9618600 ns           16
data | 25 | avx tbb    9428550 ns      9428444 ns           16
mask | 25 |           82395056 ns     82394425 ns           16
mask | 25 | avx       13160531 ns     13160350 ns           16
mask | 25 |     tbb   14068325 ns     13925962 ns           16
mask | 25 | avx tbb    9416587 ns      9417300 ns           16

data | 26 |           26851562 ns     26851025 ns           16
data | 26 | avx       12930156 ns     12930087 ns           16
data | 26 |     tbb    9620375 ns      9620250 ns           16
data | 26 | avx tbb    9406675 ns      9407394 ns           16
mask | 26 |           82190844 ns     82145812 ns           16
mask | 26 | avx       13072669 ns     13072250 ns           16
mask | 26 |     tbb   14109406 ns     13946681 ns           16
mask | 26 | avx tbb    9441869 ns      9441719 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          117646150 ns    117645487 ns            8
data |  1 | avx       22046463 ns     22046125 ns            8
data |  1 |     tbb   22780175 ns     22177062 ns            8
data |  1 | avx tbb   18552075 ns     18552050 ns            8
mask |  1 |          117718563 ns    117717775 ns            8
mask |  1 | avx       21807013 ns     21806887 ns            8
mask |  1 |     tbb   22914362 ns     22737613 ns            8
mask |  1 | avx tbb   18585563 ns     18583825 ns            8

data |  2 |          642872675 ns    642868700 ns            8
data |  2 | avx       29854875 ns     29854850 ns            8
data |  2 |     tbb   62387537 ns     59598700 ns            8
data |  2 | avx tbb   18724100 ns     18689350 ns            8
mask |  2 |          165413712 ns    165412637 ns            8
mask |  2 | avx       25993425 ns     25993225 ns            8
mask |  2 |     tbb   27953138 ns     27586975 ns            8
mask |  2 | avx tbb   18701938 ns     18679275 ns            8

data |  3 |          427725700 ns    427634063 ns            8
data |  3 | avx       29591888 ns     29590863 ns            8
data |  3 |     tbb   41283900 ns     39280312 ns            8
data |  3 | avx tbb   18726363 ns     18616250 ns            8
mask |  3 |          164869075 ns    164868463 ns            8
mask |  3 | avx       25888712 ns     25888613 ns            8
mask |  3 |     tbb   28034988 ns     27384263 ns            8
mask |  3 | avx tbb   18761613 ns     18761637 ns            8

data |  4 |          321064775 ns    320974850 ns            8
data |  4 | avx       29792825 ns     29792662 ns            8
data |  4 |     tbb   31450250 ns     29425800 ns            8
data |  4 | avx tbb   18709925 ns     18688087 ns            8
mask |  4 |          164194075 ns    164193237 ns            8
mask |  4 | avx       25803200 ns     25802275 ns            8
mask |  4 |     tbb   28234763 ns     27350275 ns            8
mask |  4 | avx tbb   18801925 ns     18801975 ns            8

data |  5 |          259624863 ns    259623650 ns            8
data |  5 | avx       29723613 ns     29722550 ns            8
data |  5 |     tbb   25233925 ns     24287450 ns            8
data |  5 | avx tbb   18713150 ns     18710588 ns            8
mask |  5 |          165654225 ns    165651575 ns            8
mask |  5 | avx       25824925 ns     25824738 ns            8
mask |  5 |     tbb   28049412 ns     27538275 ns            8
mask |  5 | avx tbb   18719362 ns     18718075 ns            8

data |  6 |          214556100 ns    214466550 ns            8
data |  6 | avx       29892012 ns     29890975 ns            8
data |  6 |     tbb   21527388 ns     20952175 ns            8
data |  6 | avx tbb   18740050 ns     18739888 ns            8
mask |  6 |          165662212 ns    165660875 ns            8
mask |  6 | avx       25832450 ns     25832313 ns            8
mask |  6 |     tbb   27980250 ns     27711900 ns            8
mask |  6 | avx tbb   18691550 ns     18690250 ns            8

data |  7 |          184847200 ns    184846550 ns            8
data |  7 | avx       29652400 ns     29651613 ns            8
data |  7 |     tbb   20152063 ns     19842288 ns            8
data |  7 | avx tbb   18712700 ns     18712813 ns            8
mask |  7 |          164928187 ns    164927537 ns            8
mask |  7 | avx       25749975 ns     25749887 ns            8
mask |  7 |     tbb   27826125 ns     27054263 ns            8
mask |  7 | avx tbb   18741475 ns     18741587 ns            8

data |  8 |          162284887 ns    162283913 ns            8
data |  8 | avx       29702512 ns     29702225 ns            8
data |  8 |     tbb   19564337 ns     18951175 ns            8
data |  8 | avx tbb   18744300 ns     18744150 ns            8
mask |  8 |          165041600 ns    165041050 ns            8
mask |  8 | avx       26347338 ns     26346575 ns            8
mask |  8 |     tbb   28049912 ns     27561388 ns            8
mask |  8 | avx tbb   18716375 ns     18716462 ns            8

data |  9 |          151556137 ns    151466450 ns            8
data |  9 | avx       29955662 ns     29953275 ns            8
data |  9 |     tbb   19490162 ns     19080250 ns            8
data |  9 | avx tbb   18745762 ns     18699850 ns            8
mask |  9 |          165225312 ns    165223900 ns            8
mask |  9 | avx       25890437 ns     25890225 ns            8
mask |  9 |     tbb   27975887 ns     26921400 ns            8
mask |  9 | avx tbb   18720788 ns     18679175 ns            8

data | 10 |          130498713 ns    130498688 ns            8
data | 10 | avx       29646525 ns     29646163 ns            8
data | 10 |     tbb   19230188 ns     18964025 ns            8
data | 10 | avx tbb   18740037 ns     18660275 ns            8
mask | 10 |          165274150 ns    165272913 ns            8
mask | 10 | avx       26043525 ns     26043363 ns            8
mask | 10 |     tbb   27981363 ns     27330075 ns            8
mask | 10 | avx tbb   18714462 ns     18714675 ns            8

data | 11 |          118313163 ns    118309738 ns            8
data | 11 | avx       29682513 ns     29682325 ns            8
data | 11 |     tbb   19073300 ns     19073500 ns            8
data | 11 | avx tbb   18764638 ns     18673350 ns            8
mask | 11 |          165128175 ns    165127438 ns            8
mask | 11 | avx       26338587 ns     26338462 ns            8
mask | 11 |     tbb   27959700 ns     27175625 ns            8
mask | 11 | avx tbb   18746900 ns     18690963 ns            8

data | 12 |          109512925 ns    109511300 ns            8
data | 12 | avx       29479538 ns     29479287 ns            8
data | 12 |     tbb   19361637 ns     19199962 ns            8
data | 12 | avx tbb   18746138 ns     18746212 ns            8
mask | 12 |          165028513 ns    165027937 ns            8
mask | 12 | avx       26104375 ns     26104113 ns            8
mask | 12 |     tbb   27812625 ns     27307975 ns            8
mask | 12 | avx tbb   18766538 ns     18766587 ns            8

data | 13 |          105607500 ns    105606850 ns            8
data | 13 | avx       29472612 ns     29472388 ns            8
data | 13 |     tbb   19302588 ns     19233038 ns            8
data | 13 | avx tbb   18760912 ns     18760775 ns            8
mask | 13 |          164178337 ns    164177800 ns            8
mask | 13 | avx       25762925 ns     25762663 ns            8
mask | 13 |     tbb   27967850 ns     27307587 ns            8
mask | 13 | avx tbb   18744750 ns     18714062 ns            8

data | 14 |           94160600 ns     94159863 ns            8
data | 14 | avx       29854063 ns     29853812 ns            8
data | 14 |     tbb   19237900 ns     19063262 ns            8
data | 14 | avx tbb   18765275 ns     18757538 ns            8
mask | 14 |          164339325 ns    164338662 ns            8
mask | 14 | avx       25615312 ns     25615175 ns            8
mask | 14 |     tbb   27922963 ns     27607437 ns            8
mask | 14 | avx tbb   18721975 ns     18721963 ns            8

data | 15 |           88247063 ns     88246125 ns            8
data | 15 | avx       29647000 ns     29646850 ns            8
data | 15 |     tbb   19208963 ns     19085387 ns            8
data | 15 | avx tbb   18729825 ns     18692438 ns            8
mask | 15 |          164762350 ns    164761650 ns            8
mask | 15 | avx       26327000 ns     26326800 ns            8
mask | 15 |     tbb   28141200 ns     27353487 ns            8
mask | 15 | avx tbb   18707525 ns     18707450 ns            8

data | 16 |           83131562 ns     83131525 ns            8
data | 16 | avx       30112025 ns     30111762 ns            8
data | 16 |     tbb   19169413 ns     19112175 ns            8
data | 16 | avx tbb   18726687 ns     18698912 ns            8
mask | 16 |          165167100 ns    165166537 ns            8
mask | 16 | avx       26179400 ns     26179112 ns            8
mask | 16 |     tbb   27919288 ns     27276475 ns            8
mask | 16 | avx tbb   18730775 ns     18730375 ns            8

data | 17 |           81119188 ns     81118325 ns            8
data | 17 | avx       25846325 ns     25845250 ns            8
data | 17 |     tbb   19245213 ns     19087700 ns            8
data | 17 | avx tbb   18736788 ns     18736638 ns            8
mask | 17 |          165787075 ns    165785900 ns            8
mask | 17 | avx       25044812 ns     25044600 ns            8
mask | 17 |     tbb   28012075 ns     27226050 ns            8
mask | 17 | avx tbb   18742387 ns     18722212 ns            8

data | 18 |           75119137 ns     75118513 ns            8
data | 18 | avx       25872638 ns     25872362 ns            8
data | 18 |     tbb   19276713 ns     19276812 ns            8
data | 18 | avx tbb   18792588 ns     18763188 ns            8
mask | 18 |          164148488 ns    164146750 ns            8
mask | 18 | avx       26103050 ns     26102900 ns            8
mask | 18 |     tbb   28071913 ns     27609063 ns            8
mask | 18 | avx tbb   18760200 ns     18732987 ns            8

data | 19 |           70354563 ns     70354400 ns            8
data | 19 | avx       26194838 ns     26194550 ns            8
data | 19 |     tbb   19239425 ns     19193987 ns            8
data | 19 | avx tbb   18733750 ns     18647838 ns            8
mask | 19 |          165372700 ns    165371562 ns            8
mask | 19 | avx       26322150 ns     26321975 ns            8
mask | 19 |     tbb   27923850 ns     27300650 ns            8
mask | 19 | avx tbb   18759375 ns     18713250 ns            8

data | 20 |           67270362 ns     67269350 ns            8
data | 20 | avx       26048463 ns     26048287 ns            8
data | 20 |     tbb   19176625 ns     19140138 ns            8
data | 20 | avx tbb   18736450 ns     18724550 ns            8
mask | 20 |          164950162 ns    164949563 ns            8
mask | 20 | avx       26410400 ns     26410300 ns            8
mask | 20 |     tbb   27955287 ns     27544725 ns            8
mask | 20 | avx tbb   18713537 ns     18713350 ns            8

data | 21 |           63897938 ns     63897787 ns            8
data | 21 | avx       26230538 ns     26229512 ns            8
data | 21 |     tbb   19146763 ns     19148625 ns            8
data | 21 | avx tbb   18727312 ns     18727250 ns            8
mask | 21 |          165128662 ns    165128037 ns            8
mask | 21 | avx       26170550 ns     26168637 ns            8
mask | 21 |     tbb   27743063 ns     27701325 ns            8
mask | 21 | avx tbb   18704587 ns     18690037 ns            8

data | 22 |           61248537 ns     61247687 ns            8
data | 22 | avx       26070575 ns     26069687 ns            8
data | 22 |     tbb   19172850 ns     19035175 ns            8
data | 22 | avx tbb   18739175 ns     18687125 ns            8
mask | 22 |          164930925 ns    164929712 ns            8
mask | 22 | avx       26002562 ns     26001225 ns            8
mask | 22 |     tbb   28408137 ns     27157875 ns            8
mask | 22 | avx tbb   18702450 ns     18702400 ns            8

data | 23 |           59031587 ns     59031450 ns            8
data | 23 | avx       25849875 ns     25849650 ns            8
data | 23 |     tbb   19097462 ns     19096362 ns            8
data | 23 | avx tbb   18741100 ns     18741050 ns            8
mask | 23 |          164396438 ns    164395800 ns            8
mask | 23 | avx       26089362 ns     26089125 ns            8
mask | 23 |     tbb   28169125 ns     27446175 ns            8
mask | 23 | avx tbb   18727425 ns     18647175 ns            8

data | 24 |           57258900 ns     57258650 ns            8
data | 24 | avx       25891188 ns     25891088 ns            8
data | 24 |     tbb   19113912 ns     19114100 ns            8
data | 24 | avx tbb   18723700 ns     18715463 ns            8
mask | 24 |          165205525 ns    165204387 ns            8
mask | 24 | avx       26188150 ns     26187900 ns            8
mask | 24 |     tbb   28485175 ns     27430638 ns            8
mask | 24 | avx tbb   18681963 ns     18682450 ns            8

data | 25 |           55336950 ns     55336288 ns            8
data | 25 | avx       26164663 ns     26164338 ns            8
data | 25 |     tbb   19140975 ns     19073838 ns            8
data | 25 | avx tbb   18736913 ns     18737050 ns            8
mask | 25 |          165244512 ns    165243912 ns            8
mask | 25 | avx       26689450 ns     26689250 ns            8
mask | 25 |     tbb   28069175 ns     27362337 ns            8
mask | 25 | avx tbb   18733875 ns     18733850 ns            8

data | 26 |           53593263 ns     53592688 ns            8
data | 26 | avx       25820925 ns     25820688 ns            8
data | 26 |     tbb   19068562 ns     19068588 ns            8
data | 26 | avx tbb   18844137 ns     18844163 ns            8
mask | 26 |          166390938 ns    166389500 ns            8
mask | 26 | avx       26151537 ns     26151412 ns            8
mask | 26 |     tbb   27864463 ns     27492738 ns            8
mask | 26 | avx tbb   18724463 ns     18719512 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          236594263 ns    236592100 ns            8
data |  1 | avx       44001925 ns     44001688 ns            8
data |  1 |     tbb   45368538 ns     42436300 ns            8
data |  1 | avx tbb   37055438 ns     36674025 ns            8
mask |  1 |          234939475 ns    234849363 ns            8
mask |  1 | avx       43713488 ns     43713238 ns            8
mask |  1 |     tbb   46579937 ns     43172412 ns            8
mask |  1 | avx tbb   37082413 ns     36702875 ns            8

data |  2 |         1281963437 ns   1281957275 ns            8
data |  2 | avx       60574075 ns     60573875 ns            8
data |  2 |     tbb  123637700 ns    115201350 ns            8
data |  2 | avx tbb   37381025 ns     37011550 ns            8
mask |  2 |          331237150 ns    331148637 ns            8
mask |  2 | avx       51737638 ns     51737325 ns            8
mask |  2 |     tbb   56268863 ns     54974837 ns            8
mask |  2 | avx tbb   37375188 ns     37318913 ns            8

data |  3 |          856897375 ns    856897262 ns            8
data |  3 | avx       59576325 ns     59576000 ns            8
data |  3 |     tbb   83450488 ns     77917600 ns            8
data |  3 | avx tbb   37380512 ns     37177888 ns            8
mask |  3 |          329307575 ns    329221475 ns            8
mask |  3 | avx       51437312 ns     51436888 ns            8
mask |  3 |     tbb   55856075 ns     54111413 ns            8
mask |  3 | avx tbb   37352387 ns     37133787 ns            8

data |  4 |          642353813 ns    642353988 ns            8
data |  4 | avx       59659838 ns     59659775 ns            8
data |  4 |     tbb   60900350 ns     60900525 ns            8
data |  4 | avx tbb   37466450 ns     37279925 ns            8
mask |  4 |          328958000 ns    328866250 ns            8
mask |  4 | avx       51769025 ns     51768825 ns            8
mask |  4 |     tbb   56308025 ns     54700375 ns            8
mask |  4 | avx tbb   37359437 ns     37357500 ns            8

data |  5 |          522009187 ns    522009413 ns            8
data |  5 | avx       59792762 ns     59792350 ns            8
data |  5 |     tbb   50117238 ns     48695275 ns            8
data |  5 | avx tbb   37404025 ns     37045225 ns            8
mask |  5 |          330493587 ns    330407438 ns            8
mask |  5 | avx       51759962 ns     51759675 ns            8
mask |  5 |     tbb   55417975 ns     54158200 ns            8
mask |  5 | avx tbb   37345075 ns     37337550 ns            8

data |  6 |          431165075 ns    431078238 ns            8
data |  6 | avx       59848275 ns     59847788 ns            8
data |  6 |     tbb   43330800 ns     41029775 ns            8
data |  6 | avx tbb   37464713 ns     37361250 ns            8
mask |  6 |          328585162 ns    328493300 ns            8
mask |  6 | avx       51958738 ns     51958612 ns            8
mask |  6 |     tbb   56126800 ns     54808650 ns            8
mask |  6 | avx tbb   37314300 ns     37314400 ns            8

data |  7 |          369895300 ns    369807900 ns            8
data |  7 | avx       59773137 ns     59772812 ns            8
data |  7 |     tbb   39794487 ns     39451400 ns            8
data |  7 | avx tbb   37318700 ns     37318800 ns            8
mask |  7 |          329314100 ns    329314037 ns            8
mask |  7 | avx       52657675 ns     52657675 ns            8
mask |  7 |     tbb   56161550 ns     53874850 ns            8
mask |  7 | avx tbb   37374500 ns     37342062 ns            8

data |  8 |          327683825 ns    327595413 ns            8
data |  8 | avx       59688875 ns     59688412 ns            8
data |  8 |     tbb   39315850 ns     38006125 ns            8
data |  8 | avx tbb   37397800 ns     37070763 ns            8
mask |  8 |          329138450 ns    329051538 ns            8
mask |  8 | avx       52109087 ns     52109025 ns            8
mask |  8 |     tbb   56166263 ns     53837600 ns            8
mask |  8 | avx tbb   37350425 ns     37337700 ns            8

data |  9 |          292942600 ns    292942650 ns            8
data |  9 | avx       59827975 ns     59827688 ns            8
data |  9 |     tbb   38985250 ns     37666950 ns            8
data |  9 | avx tbb   37366887 ns     37100625 ns            8
mask |  9 |          329616525 ns    329525412 ns            8
mask |  9 | avx       51955863 ns     51955800 ns            8
mask |  9 |     tbb   55681825 ns     55083150 ns            8
mask |  9 | avx tbb   37345975 ns     37181737 ns            8

data | 10 |          260855737 ns    260767450 ns            8
data | 10 | avx       59524100 ns     59523850 ns            8
data | 10 |     tbb   38983425 ns     37999750 ns            8
data | 10 | avx tbb   37364500 ns     36843950 ns            8
mask | 10 |          330447113 ns    330360562 ns            8
mask | 10 | avx       51995825 ns     51995575 ns            8
mask | 10 |     tbb   55908325 ns     54742388 ns            8
mask | 10 | avx tbb   37356925 ns     37357000 ns            8

data | 11 |          237044775 ns    236940838 ns            8
data | 11 | avx       59624525 ns     59624250 ns            8
data | 11 |     tbb   38358613 ns     38206812 ns            8
data | 11 | avx tbb   37459937 ns     37388200 ns            8
mask | 11 |          330730125 ns    330638725 ns            8
mask | 11 | avx       51920525 ns     51920412 ns            8
mask | 11 |     tbb   55959412 ns     54590612 ns            8
mask | 11 | avx tbb   37394063 ns     37203325 ns            8

data | 12 |          219610450 ns    219516988 ns            8
data | 12 | avx       59327487 ns     59327162 ns            8
data | 12 |     tbb   38071375 ns     37855338 ns            8
data | 12 | avx tbb   37389413 ns     37208250 ns            8
mask | 12 |          330121275 ns    330029550 ns            8
mask | 12 | avx       52075063 ns     52074838 ns            8
mask | 12 |     tbb   55694412 ns     54950550 ns            8
mask | 12 | avx tbb   37314088 ns     37008600 ns            8

data | 13 |          205233188 ns    205144788 ns            8
data | 13 | avx       60515675 ns     60515337 ns            8
data | 13 |     tbb   38531313 ns     37895663 ns            8
data | 13 | avx tbb   37330025 ns     37330287 ns            8
mask | 13 |          331142250 ns    331054663 ns            8
mask | 13 | avx       52220550 ns     52220312 ns            8
mask | 13 |     tbb   55938450 ns     55276137 ns            8
mask | 13 | avx tbb   37340275 ns     37294137 ns            8

data | 14 |          189484675 ns    189484625 ns            8
data | 14 | avx       59895850 ns     59895650 ns            8
data | 14 |     tbb   38071700 ns     37317275 ns            8
data | 14 | avx tbb   37365700 ns     37297863 ns            8
mask | 14 |          328831887 ns    328732225 ns            8
mask | 14 | avx       51373800 ns     51373475 ns            8
mask | 14 |     tbb   56100113 ns     55148537 ns            8
mask | 14 | avx tbb   37328462 ns     37328437 ns            8

data | 15 |          176378537 ns    176287188 ns            8
data | 15 | avx       60068462 ns     60068125 ns            8
data | 15 |     tbb   38501913 ns     37580662 ns            8
data | 15 | avx tbb   37364750 ns     37365150 ns            8
mask | 15 |          330030712 ns    329937938 ns            8
mask | 15 | avx       51941438 ns     51941175 ns            8
mask | 15 |     tbb   56552638 ns     54762825 ns            8
mask | 15 | avx tbb   37348562 ns     37158400 ns            8

data | 16 |          167913175 ns    167913200 ns            8
data | 16 | avx       59502438 ns     59502138 ns            8
data | 16 |     tbb   38299200 ns     37864425 ns            8
data | 16 | avx tbb   37371850 ns     37189087 ns            8
mask | 16 |          328923575 ns    328833750 ns            8
mask | 16 | avx       51756237 ns     51754862 ns            8
mask | 16 |     tbb   55438162 ns     54227413 ns            8
mask | 16 | avx tbb   37312000 ns     37230825 ns            8

data | 17 |          160488612 ns    160488313 ns            8
data | 17 | avx       51082513 ns     51082225 ns            8
data | 17 |     tbb   38391638 ns     37755600 ns            8
data | 17 | avx tbb   37357175 ns     37325900 ns            8
mask | 17 |          330010637 ns    329914800 ns            8
mask | 17 | avx       50183800 ns     50183525 ns            8
mask | 17 |     tbb   55772363 ns     54053938 ns            8
mask | 17 | avx tbb   37351238 ns     37300675 ns            8

data | 18 |          149391350 ns    149304725 ns            8
data | 18 | avx       52213313 ns     52212937 ns            8
data | 18 |     tbb   38341400 ns     37709413 ns            8
data | 18 | avx tbb   37365213 ns     37306363 ns            8
mask | 18 |          330714687 ns    330627737 ns            8
mask | 18 | avx       52648900 ns     52648762 ns            8
mask | 18 |     tbb   55947400 ns     55110412 ns            8
mask | 18 | avx tbb   37340812 ns     36870975 ns            8

data | 19 |          140929363 ns    140841350 ns            8
data | 19 | avx       51505437 ns     51505400 ns            8
data | 19 |     tbb   38179850 ns     37728925 ns            8
data | 19 | avx tbb   37331312 ns     37325538 ns            8
mask | 19 |          331565500 ns    331473875 ns            8
mask | 19 | avx       52247338 ns     52247013 ns            8
mask | 19 |     tbb   56038887 ns     54503875 ns            8
mask | 19 | avx tbb   37304762 ns     37280112 ns            8

data | 20 |          134379887 ns    134283788 ns            8
data | 20 | avx       52087900 ns     52087750 ns            8
data | 20 |     tbb   38151475 ns     38151675 ns            8
data | 20 | avx tbb   37425612 ns     36986462 ns            8
mask | 20 |          329788263 ns    329693087 ns            8
mask | 20 | avx       52438037 ns     52437900 ns            8
mask | 20 |     tbb   55892587 ns     55199438 ns            8
mask | 20 | avx tbb   37325812 ns     37300100 ns            8

data | 21 |          129089825 ns    128997113 ns            8
data | 21 | avx       51868562 ns     51868225 ns            8
data | 21 |     tbb   38025550 ns     37624275 ns            8
data | 21 | avx tbb   37374488 ns     36965213 ns            8
mask | 21 |          329396837 ns    329396800 ns            8
mask | 21 | avx       52158237 ns     52157912 ns            8
mask | 21 |     tbb   56216725 ns     54458538 ns            8
mask | 21 | avx tbb   37368287 ns     37181412 ns            8

data | 22 |          124011113 ns    123919362 ns            8
data | 22 | avx       51463200 ns     51462950 ns            8
data | 22 |     tbb   38099163 ns     38100637 ns            8
data | 22 | avx tbb   37310612 ns     37104325 ns            8
mask | 22 |          329912038 ns    329819725 ns            8
mask | 22 | avx       52174625 ns     52174537 ns            8
mask | 22 |     tbb   55957450 ns     54586738 ns            8
mask | 22 | avx tbb   37391612 ns     37160837 ns            8

data | 23 |          118173638 ns    118173600 ns            8
data | 23 | avx       52145112 ns     52144613 ns            8
data | 23 |     tbb   38186513 ns     37420875 ns            8
data | 23 | avx tbb   37392062 ns     37391963 ns            8
mask | 23 |          328869663 ns    328778650 ns            8
mask | 23 | avx       52931313 ns     52931300 ns            8
mask | 23 |     tbb   56288463 ns     54573463 ns            8
mask | 23 | avx tbb   37357750 ns     37357812 ns            8

data | 24 |          114477837 ns    114382825 ns            8
data | 24 | avx       51779800 ns     51779500 ns            8
data | 24 |     tbb   38023125 ns     37862975 ns            8
data | 24 | avx tbb   37351000 ns     37338775 ns            8
mask | 24 |          329850588 ns    329763637 ns            8
mask | 24 | avx       52625750 ns     52625312 ns            8
mask | 24 |     tbb   55761313 ns     54256175 ns            8
mask | 24 | avx tbb   37311688 ns     36949200 ns            8

data | 25 |          112134725 ns    112134563 ns            8
data | 25 | avx       51844825 ns     51844512 ns            8
data | 25 |     tbb   37951200 ns     37543587 ns            8
data | 25 | avx tbb   37344737 ns     37148425 ns            8
mask | 25 |          328958675 ns    328870838 ns            8
mask | 25 | avx       52277862 ns     52277700 ns            8
mask | 25 |     tbb   56290288 ns     55003325 ns            8
mask | 25 | avx tbb   37320300 ns     37277925 ns            8

data | 26 |          107846363 ns    107758175 ns            8
data | 26 | avx       52124688 ns     52124425 ns            8
data | 26 |     tbb   37996862 ns     37457500 ns            8
data | 26 | avx tbb   37382813 ns     37356563 ns            8
mask | 26 |          330104487 ns    330016988 ns            8
mask | 26 | avx       52101213 ns     52100950 ns            8
mask | 26 |     tbb   55517875 ns     54482087 ns            8
mask | 26 | avx tbb   37348037 ns     37334712 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
--------------------------------------------------------------
Benchmark                    Time             CPU   Iterations
--------------------------------------------------------------
data |  1 |          470180862 ns    470180375 ns            8
data |  1 | avx       87791275 ns     87706425 ns            8
data |  1 |     tbb   91024513 ns     86511300 ns            8
data |  1 | avx tbb   74022050 ns     71575588 ns            8
mask |  1 |          469880800 ns    469880800 ns            8
mask |  1 | avx       87734938 ns     87734700 ns            8
mask |  1 |     tbb   91656850 ns     88450300 ns            8
mask |  1 | avx tbb   74013100 ns     72761750 ns            8

data |  2 |         2566281050 ns   2566280600 ns            8
data |  2 | avx      120706538 ns    120705637 ns            8
data |  2 |     tbb  244521725 ns    226711513 ns            8
data |  2 | avx tbb   74738962 ns     74276750 ns            8
mask |  2 |          658140038 ns    658034012 ns            8
mask |  2 | avx      104986488 ns    104901075 ns            8
mask |  2 |     tbb  112276425 ns    105867300 ns            8
mask |  2 | avx tbb   74471938 ns     73315450 ns            8

data |  3 |         1709143937 ns   1709143850 ns            8
data |  3 | avx      120018837 ns    119928425 ns            8
data |  3 |     tbb  163526887 ns    155344287 ns            8
data |  3 | avx tbb   74729112 ns     73588863 ns            8
mask |  3 |          656842762 ns    656753425 ns            8
mask |  3 | avx      104226050 ns    104141375 ns            8
mask |  3 |     tbb  112086325 ns    107462425 ns            8
mask |  3 | avx tbb   74677463 ns     73778688 ns            8

data |  4 |         1281486737 ns   1281401800 ns            8
data |  4 | avx      118922338 ns    118837800 ns            8
data |  4 |     tbb  122981788 ns    115537225 ns            8
data |  4 | avx tbb   74612838 ns     74476113 ns            8
mask |  4 |          661832275 ns    661743400 ns            8
mask |  4 | avx      103675175 ns    103675088 ns            8
mask |  4 |     tbb  111450263 ns    109097137 ns            8
mask |  4 | avx tbb   74533425 ns     73017675 ns            8

data |  5 |         1040382850 ns   1040297725 ns            8
data |  5 | avx      119516712 ns    119516438 ns            8
data |  5 |     tbb   99328125 ns     93502838 ns            8
data |  5 | avx tbb   74751925 ns     73335863 ns            8
mask |  5 |          661248600 ns    661159612 ns            8
mask |  5 | avx      103681488 ns    103681287 ns            8
mask |  5 |     tbb  112682163 ns    108737750 ns            8
mask |  5 | avx tbb   74598200 ns     72875375 ns            8

data |  6 |          862233700 ns    862143637 ns            8
data |  6 | avx      120228450 ns    120139575 ns            8
data |  6 |     tbb   85235350 ns     84421150 ns            8
data |  6 | avx tbb   74729612 ns     72758937 ns            8
mask |  6 |          658792287 ns    658706350 ns            8
mask |  6 | avx      104693350 ns    104693150 ns            8
mask |  6 |     tbb  110929863 ns    109153812 ns            8
mask |  6 | avx tbb   74689925 ns     73093538 ns            8

data |  7 |          739256187 ns    739256400 ns            8
data |  7 | avx      120785675 ns    120691887 ns            8
data |  7 |     tbb   80034475 ns     76498650 ns            8
data |  7 | avx tbb   74677225 ns     72000500 ns            8
mask |  7 |          661398338 ns    661398337 ns            8
mask |  7 | avx      104736087 ns    104651575 ns            8
mask |  7 |     tbb  112080600 ns    111299750 ns            8
mask |  7 | avx tbb   75022112 ns     73014513 ns            8

data |  8 |          650432463 ns    650346625 ns            8
data |  8 | avx      120121362 ns    120001288 ns            8
data |  8 |     tbb   77606763 ns     76322900 ns            8
data |  8 | avx tbb   74797000 ns     73706537 ns            8
mask |  8 |          661514825 ns    661457487 ns            8
mask |  8 | avx      105512600 ns    105457050 ns            8
mask |  8 |     tbb  112453088 ns    107769775 ns            8
mask |  8 | avx tbb   74843800 ns     74489813 ns            8

data |  9 |          586571725 ns    586514637 ns            8
data |  9 | avx      120308775 ns    120308400 ns            8
data |  9 |     tbb   77354038 ns     74965512 ns            8
data |  9 | avx tbb   74581912 ns     72471550 ns            8
mask |  9 |          659059038 ns    659000937 ns            8
mask |  9 | avx      104793250 ns    104729675 ns            8
mask |  9 |     tbb  111482800 ns    109802988 ns            8
mask |  9 | avx tbb   74480350 ns     73422862 ns            8

data | 10 |          521179437 ns    521125237 ns            8
data | 10 | avx      119088375 ns    119029688 ns            8
data | 10 |     tbb   77117463 ns     74362887 ns            8
data | 10 | avx tbb   74616500 ns     73213313 ns            8
mask | 10 |          659790788 ns    659735087 ns            8
mask | 10 | avx      104322275 ns    104322625 ns            8
mask | 10 |     tbb  111122525 ns    108270150 ns            8
mask | 10 | avx tbb   74557013 ns     72588737 ns            8

data | 11 |          475339163 ns    475284450 ns            8
data | 11 | avx      119061100 ns    119060975 ns            8
data | 11 |     tbb   77015350 ns     73290875 ns            8
data | 11 | avx tbb   74815388 ns     73470100 ns            8
mask | 11 |          658806525 ns    658752413 ns            8
mask | 11 | avx      103728787 ns    103728425 ns            8
mask | 11 |     tbb  111724438 ns    108378200 ns            8
mask | 11 | avx tbb   74611888 ns     73938950 ns            8

data | 12 |          438487962 ns    438487750 ns            8
data | 12 | avx      119400525 ns    119400175 ns            8
data | 12 |     tbb   76665850 ns     74208962 ns            8
data | 12 | avx tbb   74633338 ns     72806275 ns            8
mask | 12 |          659250337 ns    659194512 ns            8
mask | 12 | avx      104960600 ns    104884113 ns            8
mask | 12 |     tbb  110949550 ns    108788400 ns            8
mask | 12 | avx tbb   74628187 ns     73079312 ns            8

data | 13 |          410792275 ns    410737650 ns            8
data | 13 | avx      119895787 ns    119895313 ns            8
data | 13 |     tbb   76836925 ns     73853962 ns            8
data | 13 | avx tbb   74572887 ns     74104450 ns            8
mask | 13 |          660464038 ns    660407063 ns            8
mask | 13 | avx      104584637 ns    104581275 ns            8
mask | 13 |     tbb  112285650 ns    109488037 ns            8
mask | 13 | avx tbb   74556562 ns     73572037 ns            8

data | 14 |          379240125 ns    379183425 ns            8
data | 14 | avx      120389588 ns    120326138 ns            8
data | 14 |     tbb   76345687 ns     75168425 ns            8
data | 14 | avx tbb   74597362 ns     74552925 ns            8
mask | 14 |          659596375 ns    659542250 ns            8
mask | 14 | avx      104412525 ns    104358038 ns            8
mask | 14 |     tbb  111526338 ns    108597875 ns            8
mask | 14 | avx tbb   74636600 ns     73403700 ns            8

data | 15 |          354907975 ns    354851200 ns            8
data | 15 | avx      120139963 ns    120083675 ns            8
data | 15 |     tbb   76162587 ns     76043162 ns            8
data | 15 | avx tbb   74559575 ns     71861225 ns            8
mask | 15 |          659958500 ns    659902913 ns            8
mask | 15 | avx      104190763 ns    104190400 ns            8
mask | 15 |     tbb  112283150 ns    106280125 ns            8
mask | 15 | avx tbb   74679238 ns     74345238 ns            8

data | 16 |          333711287 ns    333653487 ns            8
data | 16 | avx      119893163 ns    119892813 ns            8
data | 16 |     tbb   76483425 ns     73419863 ns            8
data | 16 | avx tbb   74664825 ns     74237137 ns            8
mask | 16 |          660269813 ns    660211950 ns            8
mask | 16 | avx      104287000 ns    104287125 ns            8
mask | 16 |     tbb  112505163 ns    110691937 ns            8
mask | 16 | avx tbb   74553125 ns     73864050 ns            8

data | 17 |          320588113 ns    320532950 ns            8
data | 17 | avx      104145225 ns    104145163 ns            8
data | 17 |     tbb   76566562 ns     75578100 ns            8
data | 17 | avx tbb   74672362 ns     74357075 ns            8
mask | 17 |          665598000 ns    665538425 ns            8
mask | 17 | avx      100855875 ns    100801637 ns            8
mask | 17 |     tbb  112158350 ns    109852913 ns            8
mask | 17 | avx tbb   74676987 ns     73696400 ns            8

data | 18 |          297830513 ns    297830537 ns            8
data | 18 | avx      104611950 ns    104611375 ns            8
data | 18 |     tbb   76834387 ns     74292912 ns            8
data | 18 | avx tbb   74808950 ns     74544062 ns            8
mask | 18 |          659867300 ns    659811825 ns            8
mask | 18 | avx      105552975 ns    105495200 ns            8
mask | 18 |     tbb  111815813 ns    107159850 ns            8
mask | 18 | avx tbb   74577925 ns     73979638 ns            8

data | 19 |          282460138 ns    282459825 ns            8
data | 19 | avx      104635600 ns    104636800 ns            8
data | 19 |     tbb   76681525 ns     74484125 ns            8
data | 19 | avx tbb   74640975 ns     73413463 ns            8
mask | 19 |          660560613 ns    660506575 ns            8
mask | 19 | avx      107233925 ns    107179562 ns            8
mask | 19 |     tbb  110975700 ns    107834287 ns            8
mask | 19 | avx tbb   74554925 ns     73703700 ns            8

data | 20 |          270569288 ns    270568988 ns            8
data | 20 | avx      104260162 ns    104259738 ns            8
data | 20 |     tbb   76039837 ns     75017150 ns            8
data | 20 | avx tbb   74660050 ns     74327713 ns            8
mask | 20 |          659015437 ns    658960125 ns            8
mask | 20 | avx      104574425 ns    104573987 ns            8
mask | 20 |     tbb  112458300 ns    110200850 ns            8
mask | 20 | avx tbb   74688462 ns     74206325 ns            8

data | 21 |          256696212 ns    256640700 ns            8
data | 21 | avx      104850150 ns    104849762 ns            8
data | 21 |     tbb   76141000 ns     74879338 ns            8
data | 21 | avx tbb   74756012 ns     73982587 ns            8
mask | 21 |          660550325 ns    660490963 ns            8
mask | 21 | avx      106073563 ns    106015175 ns            8
mask | 21 |     tbb  111022137 ns    109039887 ns            8
mask | 21 | avx tbb   74664837 ns     73884675 ns            8

data | 22 |          247120925 ns    247046987 ns            8
data | 22 | avx      104652288 ns    104651850 ns            8
data | 22 |     tbb   76059625 ns     75449775 ns            8
data | 22 | avx tbb   74654337 ns     73967412 ns            8
mask | 22 |          657111675 ns    657054937 ns            8
mask | 22 | avx      105570900 ns    105569100 ns            8
mask | 22 |     tbb  111481037 ns    107766837 ns            8
mask | 22 | avx tbb   74761425 ns     74285988 ns            8

data | 23 |          236902612 ns    236844700 ns            8
data | 23 | avx      103499150 ns    103498163 ns            8
data | 23 |     tbb   76139338 ns     75443762 ns            8
data | 23 | avx tbb   74680025 ns     73452413 ns            8
mask | 23 |          659887975 ns    659833713 ns            8
mask | 23 | avx      104536425 ns    104535950 ns            8
mask | 23 |     tbb  112839313 ns    105942663 ns            8
mask | 23 | avx tbb   74565038 ns     73874150 ns            8

data | 24 |          231373175 ns    231319013 ns            8
data | 24 | avx      105122113 ns    105121612 ns            8
data | 24 |     tbb   75879663 ns     74205863 ns            8
data | 24 | avx tbb   74696475 ns     73537700 ns            8
mask | 24 |          660406213 ns    660351812 ns            8
mask | 24 | avx      104999575 ns    104944850 ns            8
mask | 24 |     tbb  111006837 ns    108795862 ns            8
mask | 24 | avx tbb   74454125 ns     72975450 ns            8

data | 25 |          221531163 ns    221531050 ns            8
data | 25 | avx      105253763 ns    105253525 ns            8
data | 25 |     tbb   76009525 ns     74382787 ns            8
data | 25 | avx tbb   74641638 ns     73349338 ns            8
mask | 25 |          660688325 ns    660633700 ns            8
mask | 25 | avx      105982737 ns    105923762 ns            8
mask | 25 |     tbb  112060725 ns    109874838 ns            8
mask | 25 | avx tbb   74573750 ns     73736575 ns            8

data | 26 |          216398150 ns    216398137 ns            8
data | 26 | avx      104150488 ns    104150275 ns            8
data | 26 |     tbb   76130388 ns     73635712 ns            8
data | 26 | avx tbb   74755550 ns     72839625 ns            8
mask | 26 |          659486013 ns    659432000 ns            8
mask | 26 | avx      105042500 ns    105042487 ns            8
mask | 26 |     tbb  110970313 ns    108491025 ns            8
mask | 26 | avx tbb   74670025 ns     72966750 ns            8
```

</details>

