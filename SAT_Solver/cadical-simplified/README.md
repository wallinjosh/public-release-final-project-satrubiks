# CaDiCaL
Radically Simplified Conflict Driven Clause Learning (CDCL) SAT Solver

The goal of CaDiCal is to have a minimalistic CDCL solver,
which is easy to understand and change, while at the same
time not too much slower than state of the art CDCL solvers
if pre-processing is disabled.

Run './configure.sh' and then 'make' to compile 'cadical'.

You might want to check out options of './configure.sh -h', such as

  ./configure -p # to measure/profile time spent in functions

  ./configure -l # to really see what the solver is doing

  ./configure -a # both above and in addition '-g' for debugging.

The lastest version of CaDiCal can be found on 'github'

  http://github.com/arminbiere/cadical

which also contains a test suite (use './run-regression.sh').

A plain stable source release can eventually be found at

  http://fmv.jku.at/cadical

Armin Biere
Mo 5. Sep 21:03:06 CEST 2016
