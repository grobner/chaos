unset key
set xrange [-8:8]
set yrange [-8:8]
set size square
set term gif animate
set output "attractor.gif"

n0 = 0
n1  = 360
dn = 1

load "roop.plt"
