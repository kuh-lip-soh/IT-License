add(0,0).
add(N,S):-
    N>0,N1 is N-1,add(N1,S1),S is N+S1.