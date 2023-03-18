ecrit(0).
ecrit(N):-
    N>0,write('bonjour'),nl,N1 is N-1,ecrit(N1).
