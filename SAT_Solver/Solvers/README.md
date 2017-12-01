# Usage

http://sabrlang.org/rubik/
https://github.com/dbunker/SABR

## Sabr
### Full analysis (Parser-cnf, miniSAT solver, and result parser)
./sabr [num of levels (ex. 20)] [path to source (.tb file)]

### Generate dimacs cnf file only (cnf.txt)
./sabr --cnf [num of levels] [path to source]

### miniSAT solver only (given cnf.txt)
./cnfsat [path to dimacs cnf file]

### Generate result.txt (given vars.txt/output from any SAT solver)
./sabr --result [num of levels] [path to source]

## Cadical
### SAT solver (given .cnf file)
./cadical [path to .cnf file]
