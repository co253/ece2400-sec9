# Gnuplot script for ECE2400 Sec7
# Written by Chris OBrian

set key outside
set autoscale fix
set datafile separator ","
set xlabel "Input Size (# Elements)"
set ylabel "Execution Time (sec)"
set terminal png size 1000,500 enhanced

set title "Time Performance for Static vs. Dynamic Polymorphism"
set output "data.png"
plot "spoly.csv" using 1:2 with linespoints title "Static Poly", \ 
     "dpoly.csv" using 1:2 with linespoints title "Dynamic Poly", \ 
     "int.csv" using 1:2 with linespoints title "Int" 

