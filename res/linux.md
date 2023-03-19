# Linux
Benchmark results sorted by scanned memory block sizes.

## LLVM (clang)

<details>
<summary>16 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 kb        1078 ns         1085 ns         4096
find avx tbb 06 16 kb        1080 ns         1077 ns         4096
find         06 16 kb        7448 ns         7489 ns         4096
find     tbb 06 16 kb        8456 ns         8501 ns         4096
find avx     12 16 kb        1221 ns         1223 ns         4096
find avx tbb 12 16 kb        1187 ns         1185 ns         4096
find         12 16 kb        4331 ns         4359 ns         4096
find     tbb 12 16 kb        8160 ns         8205 ns         4096
find avx     24 16 kb        1278 ns         1276 ns         4096
find avx tbb 24 16 kb        1279 ns         1268 ns         4096
find         24 16 kb        2692 ns         2719 ns         4096
find     tbb 24 16 kb        7862 ns         7896 ns         4096

scan avx     06 16 kb        1165 ns         1170 ns         4096
scan avx tbb 06 16 kb        1181 ns         1168 ns         4096
scan         06 16 kb        6150 ns         6191 ns         4096
scan     tbb 06 16 kb        7277 ns         7321 ns         4096
scan avx     12 16 kb        1180 ns         1185 ns         4096
scan avx tbb 12 16 kb        1170 ns         1164 ns         4096
scan         12 16 kb        6117 ns         6150 ns         4096
scan     tbb 12 16 kb        7267 ns         7298 ns         4096
scan avx     24 16 kb        1204 ns         1201 ns         4096
scan avx tbb 24 16 kb        1179 ns         1174 ns         4096
scan         24 16 kb        6130 ns         6171 ns         4096
scan     tbb 24 16 kb        7221 ns         7261 ns         4096
```

</details>

<details>
<summary>64 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 kb        2558 ns         2551 ns         4096
find avx tbb 06 64 kb        2533 ns         2541 ns         4096
find         06 64 kb       28927 ns        28984 ns         4096
find     tbb 06 64 kb       11182 ns        11219 ns         4096
find avx     12 64 kb        2457 ns         2466 ns         4096
find avx tbb 12 64 kb        2442 ns         2418 ns         4096
find         12 64 kb       14510 ns        14567 ns         4096
find     tbb 12 64 kb        9403 ns         9448 ns         4096
find avx     24 64 kb        3018 ns         3039 ns         4096
find avx tbb 24 64 kb        2778 ns         2782 ns         4096
find         24 64 kb        8643 ns         8695 ns         4096
find     tbb 24 64 kb        8500 ns         8532 ns         4096

scan avx     06 64 kb        2573 ns         2575 ns         4096
scan avx tbb 06 64 kb        2548 ns         2557 ns         4096
scan         06 64 kb       21165 ns        21215 ns         4096
scan     tbb 06 64 kb       11859 ns        11902 ns         4096
scan avx     12 64 kb        2527 ns         2510 ns         4096
scan avx tbb 12 64 kb        2556 ns         2586 ns         4096
scan         12 64 kb       21294 ns        21337 ns         4096
scan     tbb 12 64 kb       11768 ns        11805 ns         4096
scan avx     24 64 kb        2513 ns         2499 ns         4096
scan avx tbb 24 64 kb        2502 ns         2501 ns         4096
scan         24 64 kb       21339 ns        21387 ns         4096
scan     tbb 24 64 kb       13076 ns        13114 ns         4096
```

</details>

<details>
<summary>256 KiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 kb       8062 ns         8076 ns         2048
find avx tbb 06 256 kb       7836 ns         7785 ns         2048
find         06 256 kb     108723 ns       108796 ns         2048
find     tbb 06 256 kb      20710 ns        20625 ns         2048
find avx     12 256 kb       8050 ns         8049 ns         2048
find avx tbb 12 256 kb       7744 ns         7727 ns         2048
find         12 256 kb      56523 ns        56581 ns         2048
find     tbb 12 256 kb      15765 ns        15680 ns         2048
find avx     24 256 kb       9467 ns         9431 ns         2048
find avx tbb 24 256 kb       8962 ns         8956 ns         2048
find         24 256 kb      31043 ns        31108 ns         2048
find     tbb 24 256 kb      12725 ns        12665 ns         2048

scan avx     06 256 kb       8324 ns         8306 ns         2048
scan avx tbb 06 256 kb       8283 ns         8265 ns         2048
scan         06 256 kb      80379 ns        80417 ns         2048
scan     tbb 06 256 kb      30546 ns        30473 ns         2048
scan avx     12 256 kb       8284 ns         8325 ns         2048
scan avx tbb 12 256 kb       8147 ns         8147 ns         2048
scan         12 256 kb      82699 ns        82745 ns         2048
scan     tbb 12 256 kb      30236 ns        30159 ns         2048
scan avx     24 256 kb       8461 ns         8403 ns         2048
scan avx tbb 24 256 kb       8439 ns         8423 ns         2048
scan         24 256 kb      85620 ns        85693 ns         2048
scan     tbb 24 256 kb      30168 ns        30091 ns         2048
```

</details>

<details>
<summary>1 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 mb        56573 ns        56583 ns         1024
find avx tbb 06 1 mb        41575 ns        41426 ns         1024
find         06 1 mb       434412 ns       434540 ns         1024
find     tbb 06 1 mb        55415 ns        55295 ns         1024
find avx     12 1 mb        55950 ns        55955 ns         1024
find avx tbb 12 1 mb        41186 ns        41033 ns         1024
find         12 1 mb       221124 ns       221193 ns         1024
find     tbb 12 1 mb        44933 ns        44763 ns         1024
find avx     24 1 mb        76880 ns        76956 ns         1024
find avx tbb 24 1 mb        43189 ns        43040 ns         1024
find         24 1 mb       128548 ns       128624 ns         1024
find     tbb 24 1 mb        42809 ns        42692 ns         1024

scan avx     06 1 mb        57136 ns        57145 ns         1024
scan avx tbb 06 1 mb        44510 ns        44441 ns         1024
scan         06 1 mb       338976 ns       339091 ns         1024
scan     tbb 06 1 mb        98490 ns        98395 ns         1024
scan avx     12 1 mb        57657 ns        57666 ns         1024
scan avx tbb 12 1 mb        41862 ns        41742 ns         1024
scan         12 1 mb       326671 ns       326734 ns         1024
scan     tbb 12 1 mb        97741 ns        97642 ns         1024
scan avx     24 1 mb        58394 ns        58410 ns         1024
scan avx tbb 24 1 mb        41116 ns        40954 ns         1024
scan         24 1 mb       326362 ns       326464 ns         1024
scan     tbb 24 1 mb        97230 ns        97166 ns         1024
```

</details>

<details>
<summary>4 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 4 mb       209565 ns       209454 ns          512
find avx tbb 06 4 mb       218536 ns       216860 ns          512
find         06 4 mb      1704364 ns      1704448 ns          512
find     tbb 06 4 mb       313823 ns       313779 ns          512
find avx     12 4 mb       220102 ns       219946 ns          512
find avx tbb 12 4 mb       222218 ns       222064 ns          512
find         12 4 mb       884653 ns       884688 ns          512
find     tbb 12 4 mb       266216 ns       266085 ns          512
find avx     24 4 mb       233239 ns       233110 ns          512
find avx tbb 24 4 mb       219246 ns       219066 ns          512
find         24 4 mb       491108 ns       491094 ns          512
find     tbb 24 4 mb       255544 ns       255419 ns          512

scan avx     06 4 mb       225574 ns       225430 ns          512
scan avx tbb 06 4 mb       225299 ns       225204 ns          512
scan         06 4 mb      1309146 ns      1309232 ns          512
scan     tbb 06 4 mb       446341 ns       446140 ns          512
scan avx     12 4 mb       217739 ns       217606 ns          512
scan avx tbb 12 4 mb       222455 ns       222399 ns          512
scan         12 4 mb      1309212 ns      1309273 ns          512
scan     tbb 12 4 mb       449076 ns       448943 ns          512
scan avx     24 4 mb       221348 ns       221214 ns          512
scan avx tbb 24 4 mb       221190 ns       221091 ns          512
scan         24 4 mb      1309239 ns      1309315 ns          512
scan     tbb 24 4 mb       447024 ns       446943 ns          512
```

</details>

<details>
<summary>16 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 16 mb      820550 ns       820744 ns           64
find avx tbb 06 16 mb      683131 ns       683073 ns           64
find         06 16 mb     6852505 ns      6852155 ns           64
find     tbb 06 16 mb      860984 ns       860958 ns           64
find avx     12 16 mb      851706 ns       851695 ns           64
find avx tbb 12 16 mb      692973 ns       692913 ns           64
find         12 16 mb     3524373 ns      3524366 ns           64
find     tbb 12 16 mb      743073 ns       743217 ns           64
find avx     24 16 mb      921370 ns       921422 ns           64
find avx tbb 24 16 mb      690852 ns       690831 ns           64
find         24 16 mb     1943323 ns      1943347 ns           64
find     tbb 24 16 mb      725189 ns       725164 ns           64

scan avx     06 16 mb      906289 ns       906242 ns           64
scan avx tbb 06 16 mb      675384 ns       675353 ns           64
scan         06 16 mb     5206992 ns      5206939 ns           64
scan     tbb 06 16 mb     1552375 ns      1553236 ns           64
scan avx     12 16 mb      869473 ns       869495 ns           64
scan avx tbb 12 16 mb      691723 ns       691745 ns           64
scan         12 16 mb     5271533 ns      5271514 ns           64
scan     tbb 12 16 mb     1549081 ns      1548942 ns           64
scan avx     24 16 mb      872413 ns       872392 ns           64
scan avx tbb 24 16 mb      687437 ns       687389 ns           64
scan         24 16 mb     5227936 ns      5228008 ns           64
scan     tbb 24 16 mb     1550197 ns      1550048 ns           64
```

</details>

<details>
<summary>64 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 64 mb     3225812 ns      3225550 ns           32
find avx tbb 06 64 mb     2420131 ns      2419828 ns           32
find         06 64 mb    27160391 ns     27160416 ns           32
find     tbb 06 64 mb     2898231 ns      2898544 ns           32
find avx     12 64 mb     3152769 ns      3152297 ns           32
find avx tbb 12 64 mb     2413484 ns      2413784 ns           32
find         12 64 mb    13841887 ns     13841725 ns           32
find     tbb 12 64 mb     2551169 ns      2551094 ns           32
find avx     24 64 mb     3492525 ns      3492600 ns           32
find avx tbb 24 64 mb     2435831 ns      2435834 ns           32
find         24 64 mb     7620416 ns      7620628 ns           32
find     tbb 24 64 mb     2507000 ns      2484166 ns           32

scan avx     06 64 mb     3267313 ns      3267275 ns           32
scan avx tbb 06 64 mb     2424975 ns      2425028 ns           32
scan         06 64 mb    20590622 ns     20590422 ns           32
scan     tbb 06 64 mb     5676837 ns      5676694 ns           32
scan avx     12 64 mb     3294263 ns      3294250 ns           32
scan avx tbb 12 64 mb     2424159 ns      2371234 ns           32
scan         12 64 mb    20660256 ns     20659537 ns           32
scan     tbb 12 64 mb     5666422 ns      5666087 ns           32
scan avx     24 64 mb     3269906 ns      3269894 ns           32
scan avx tbb 24 64 mb     2430084 ns      2430094 ns           32
scan         24 64 mb    20665684 ns     20653991 ns           32
scan     tbb 24 64 mb     5704663 ns      5704516 ns           32
```

</details>

<details>
<summary>256 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 256 mb   12524144 ns     12523331 ns           16
find avx tbb 06 256 mb    9398837 ns      9398650 ns           16
find         06 256 mb  108441519 ns    108441544 ns           16
find     tbb 06 256 mb   10976881 ns     10941019 ns           16
find avx     12 256 mb   12556844 ns     12556794 ns           16
find avx tbb 12 256 mb    9417069 ns      9416931 ns           16
find         12 256 mb   54893500 ns     54871325 ns           16
find     tbb 12 256 mb    9661419 ns      9661319 ns           16
find avx     24 256 mb   13805081 ns     13805087 ns           16
find avx tbb 24 256 mb    9420637 ns      9420544 ns           16
find         24 256 mb   30156738 ns     30133544 ns           16
find     tbb 24 256 mb    9605931 ns      9605812 ns           16

scan avx     06 256 mb   12900294 ns     12900225 ns           16
scan avx tbb 06 256 mb    9432862 ns      9432781 ns           16
scan         06 256 mb   82168413 ns     82146450 ns           16
scan     tbb 06 256 mb   22049806 ns     21626125 ns           16
scan avx     12 256 mb   12945725 ns     12946363 ns           16
scan avx tbb 12 256 mb    9416750 ns      9416625 ns           16
scan         12 256 mb   82205500 ns     82181669 ns           16
scan     tbb 12 256 mb   22126825 ns     21463794 ns           16
scan avx     24 256 mb   13113888 ns     13113806 ns           16
scan avx tbb 24 256 mb    9422381 ns      9422213 ns           16
scan         24 256 mb   82353256 ns     82331063 ns           16
scan     tbb 24 256 mb   22182450 ns     21956356 ns           16
```

</details>

<details>
<summary>512 MiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 512 mb   25469375 ns     25469138 ns            8
find avx tbb 06 512 mb   18645837 ns     18644150 ns            8
find         06 512 mb  214942187 ns    214899463 ns            8
find     tbb 06 512 mb   22050225 ns     21623825 ns            8
find avx     12 512 mb   25138150 ns     25137962 ns            8
find avx tbb 12 512 mb   18652850 ns     18652725 ns            8
find         12 512 mb  109614213 ns    109614062 ns            8
find     tbb 12 512 mb   19213800 ns     19131363 ns            8
find avx     24 512 mb   27692600 ns     27692412 ns            8
find avx tbb 24 512 mb   18760500 ns     18760400 ns            8
find         24 512 mb   60350500 ns     60302487 ns            8
find     tbb 24 512 mb   19068837 ns     19068887 ns            8

scan avx     06 512 mb   25796363 ns     25796112 ns            8
scan avx tbb 06 512 mb   18710837 ns     18674112 ns            8
scan         06 512 mb  164281350 ns    164238437 ns            8
scan     tbb 06 512 mb   43882550 ns     43104250 ns            8
scan avx     12 512 mb   26141688 ns     26141500 ns            8
scan avx tbb 12 512 mb   18747713 ns     18648975 ns            8
scan         12 512 mb  164282813 ns    164282800 ns            8
scan     tbb 12 512 mb   44226512 ns     42678138 ns            8
scan avx     24 512 mb   26300262 ns     26300150 ns            8
scan avx tbb 24 512 mb   18713125 ns     18713038 ns            8
scan         24 512 mb  164562225 ns    164508125 ns            8
scan     tbb 24 512 mb   43965587 ns     43317988 ns            8
```

</details>

<details>
<summary>1 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 1 gb     50254713 ns     50251625 ns            8
find avx tbb 06 1 gb     37288612 ns     37254913 ns            8
find         06 1 gb    430194163 ns    430150687 ns            8
find     tbb 06 1 gb     42739812 ns     41427900 ns            8
find avx     12 1 gb     50162813 ns     50162650 ns            8
find avx tbb 12 1 gb     37230475 ns     37227075 ns            8
find         12 1 gb    219626075 ns    219583350 ns            8
find     tbb 12 1 gb     37982188 ns     37558375 ns            8
find avx     24 1 gb     55356588 ns     55312488 ns            8
find avx tbb 24 1 gb     37426088 ns     37426175 ns            8
find         24 1 gb    121319888 ns    121319750 ns            8
find     tbb 24 1 gb     37945787 ns     37946050 ns            8

scan avx     06 1 gb     51831075 ns     51830750 ns            8
scan avx tbb 06 1 gb     37339987 ns     37311963 ns            8
scan         06 1 gb    328738937 ns    328697875 ns            8
scan     tbb 06 1 gb     88297575 ns     87495575 ns            8
scan avx     12 1 gb     51775363 ns     51722350 ns            8
scan avx tbb 12 1 gb     37256787 ns     37231175 ns            8
scan         12 1 gb    328591225 ns    328591325 ns            8
scan     tbb 12 1 gb     88332313 ns     86726313 ns            8
scan avx     24 1 gb     52550538 ns     52550325 ns            8
scan avx tbb 24 1 gb     37318287 ns     37318437 ns            8
scan         24 1 gb    328740962 ns    328697513 ns            8
scan     tbb 24 1 gb     87884363 ns     84908900 ns            8
```

</details>

<details>
<summary>2 GiB</summary>

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     06 2 gb    101058000 ns    101056575 ns            8
find avx tbb 06 2 gb     74493825 ns     73140925 ns            8
find         06 2 gb    860234763 ns    860194700 ns            8
find     tbb 06 2 gb     85159825 ns     83470150 ns            8
find avx     12 2 gb    100976712 ns    100975563 ns            8
find avx tbb 12 2 gb     74455050 ns     73879150 ns            8
find         12 2 gb    439897362 ns    439897175 ns            8
find     tbb 12 2 gb     76097425 ns     76010825 ns            8
find avx     24 2 gb    110846750 ns    110846337 ns            8
find avx tbb 24 2 gb     74580750 ns     71332300 ns            8
find         24 2 gb    242186437 ns    242172350 ns            8
find     tbb 24 2 gb     76121563 ns     75415025 ns            8

scan avx     06 2 gb    103072263 ns    103071837 ns            8
scan avx tbb 06 2 gb     74479888 ns     74299388 ns            8
scan         06 2 gb    657747675 ns    657697175 ns            8
scan     tbb 06 2 gb    175372000 ns    173220663 ns            8
scan avx     12 2 gb    102875975 ns    102875550 ns            8
scan avx tbb 12 2 gb     74499100 ns     73003787 ns            8
scan         12 2 gb    657166888 ns    657126162 ns            8
scan     tbb 12 2 gb    176446712 ns    171567600 ns            8
scan avx     24 2 gb    104984925 ns    104945475 ns            8
scan avx tbb 24 2 gb     74528925 ns     73906900 ns            8
scan         24 2 gb    656854063 ns    656814650 ns            8
scan     tbb 24 2 gb    175397525 ns    171149175 ns            8
```

</details>

