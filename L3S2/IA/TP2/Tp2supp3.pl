pgcd(X,X,X).
pgcd(X,Y,D) :- X < Y, Z is Y-X, pgcd(X,Z,D).
pgcd(X,Y,D) :- Y < X, pgcd(Y,X,D).
ppcm(X,Y,M) :- pgcd(X,Y,D), M is X*Y/D.
