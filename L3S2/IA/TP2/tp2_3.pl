ecrit(0).
ecrit(1):- write('bonjour').
ecrit(N):- write('bonjour'),nl,N1 is N-1,ecrit(N1).