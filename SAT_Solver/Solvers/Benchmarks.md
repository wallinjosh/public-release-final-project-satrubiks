### Benchmarks for 2x2x2 Rubik's Cube

## CNF File
|Number of Variables|Number of Clauses|Start Pattern|Result Files|
|---|---|---|---|
|3564|32254|[2x2x2](sabr_progs/start_pattern1.txt)|[Sabr](results/2x2x2/sabr-result1.txt), [Cadical](results/2x2x2/cadical-result1.txt)|

## miniSAT/Sabr
|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|
|0.01 s|307|114695 (24015/sec)|202109 (42318/sec)|20601439 (4313534/sec)|4016033 (16.40% deleted)|18.83 MB|4.776 s|


## Cadicaly
|Parse time|Restarts|Conflicts|Decisions|Propagations|Conflict literals|Memory used|CPU time|
|---|---|---|---|---|---|---|---|
|0.01 s|9813|390697 (11103.13/sec)|1701267 (48347.93/sec)|86345393 (2.45 millions/s)|833294 (7.63% deleted)|15.67 MB|35.67 s|

