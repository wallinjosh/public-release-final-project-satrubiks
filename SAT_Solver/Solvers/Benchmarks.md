# Benchmarks
## 2x2x2 Rubik's Cube

### CNF File Details
|Run Number|Number of Variables|Number of Clauses|Levels|Start Pattern|Result Files|
|---|---|---|---|---|---|
|0|3564|32254|20|[2x2x2 (1)](sabr_progs/start_patterns.txt)|[Sabr](results/2x2x2/sabr-result1-20.txt), [Cadical](results/2x2x2/cadical-result1-20.txt)|
|1|2484|21634|14|[2x2x2 (1)](sabr_progs/start_patterns.txt)|[Sabr](results/2x2x2/sabr-result1-14.txt), [Cadical](results/2x2x2/cadical-result1-14.txt)|
|2|2484|21633|14|[2x2x2 (2)](sabr_progs/start_patterns.txt)|[Sabr](results/2x2x2/sabr-result2-14.txt), [Cadical](results/2x2x2/cadical-result2-14.txt)|
|3|2484|21634|14|[2x2x2 (3)](sabr_progs/start_patterns.txt)|NA, NA|
|4|2484|21634|14|[2x2x2 (4)](sabr_progs/start_patterns.txt)|[Sabr](results/2x2x2/sabr-result4-14.txt), NA*|
|5|2484|21634|14|[2x2x2 (5)](sabr_progs/start_patterns.txt)|[Sabr](results/2x2x2/sabr-result5-14.txt), [Cadical](results/2x2x2/cadical-result5-14.txt)|


### miniSAT/Sabr
|Run Number|SAT?|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|---|---|
|0|Y|0.01 s|307|114695 (24015/sec)|202109 (42318/sec)|20601439 (4313534/sec)|4016033 (16.40% deleted)|18.83 MB|4.776 s|
|1|Y|0.01 s|1341|634658 (21611/sec)|960897 (32719/sec)|99098245 (3374261/sec)|23500641 (15.89% deleted)|25.42 MB|29.368 s|
|2|N|0.01 s|1532|699568 (24952/sec)|1052775 (37551/sec)|98042603 (3497025/sec)|16981488 (23.72% deleted)|24.79 MB|28.036 s|
|3|Y|0.01 s|2044|944247 (20364/sec)|1422510 (30679/sec)|174229599 (3757540/sec)|35608297 (18.07% deleted)|26.29 MB|46.368 s|
|4|Y|0.01 s|24574|16441484 (13853/sec)|22048963 (18578/sec)|5387545475 (4539388/sec)|601674025 (35.33% deleted)|80.81 MB|1186.84 s|
|5|Y|0.01 s|236|74966 (26659/sec)|125787 (44732/sec)|11302950 (4019541/sec)|2518484 (13.62% deleted)|12.32 MB|2.812 s|


### Cadical
|Run Number|SAT?|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|---|---|
|0|Y|0.01 s|9813|390697 (11103.13/sec)|1701267 (48347.93/sec)|86345393 (2.45 millions/s)|833294 (7.63% deleted)|15.67 MB|35.67 s|
|1|Y|0.01 s|4693|155778 (13438.41/sec)|618798 (53381.47/sec)|33080774 (2.85 millions/s)|290392 (7.35% deleted)|9.10 MB|11.59 s|
|2|N|0.01 s|3167|131378 (16655.43/sec)|455620 (57761.16/sec)|256370000 (3.25 millions/s)|226436 (7.81% deleted)|8.47 MB|7.89 s|
|3|Y|0.01 s|29175|935639 (5824.01/sec)|3444762 (21442.38/sec)|218427335 (1.36 millions/s)|3189611 (11.11% deleted)|21.96 MB|160.65 s|
|4*|Y|0.01 s|NA|NA|NA|NA|NA|NA|> 20000 s|
|5|Y|0.01 s|2172|74221 (18536.71/sec)|297584 (74321.68/sec)|14527239 (3.63 millions/s)|105323 (6.05% deleted)|6.77 MB|4.00 s|


## 3x3x3 Rubik's Cube

### CNF File Details
|Run Number|Number of Variables|Number of Clauses|Levels|Start Pattern|Result Files|
|---|---|---|---|---|---|
|0|3564|32254|20|[2x2x2 (1)](sabr_progs/start_patterns3.txt)|[Sabr](results/3x3x3/sabr-result1-20.txt), [Cadical](results/3x3x3/cadical-result1-20.txt)|


### miniSAT/Sabr
|Run Number|SAT?|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|---|---|
|0|Y|0.01 s|307|114695 (24015/sec)|202109 (42318/sec)|20601439 (4313534/sec)|4016033 (16.40% deleted)|18.83 MB|4.776 s|


### Cadical
|Run Number|SAT?|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|---|---|
|0|Y|0.01 s|9813|390697 (11103.13/sec)|1701267 (48347.93/sec)|86345393 (2.45 millions/s)|833294 (7.63% deleted)|15.67 MB|35.67 s|


*This run was not able to be completed in a reasonable amount of time.
