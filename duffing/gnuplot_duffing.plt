if(exist("n")==0 || n<0) n = n0

plot "duffing2.dat" every :::n::n

n = n+dn
if(n < n1) reread
undefine n
