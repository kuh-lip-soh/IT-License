add(0, 0).
add(N, S) :- N>0, N1 is N-1, add(N1, M1), S is M1+N.




