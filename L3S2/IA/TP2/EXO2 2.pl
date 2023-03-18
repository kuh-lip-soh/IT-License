max(X,Y):-
    X>Y , write(X);
    X<Y , write(Y);
    X = Y , write(X).

maxi(X,Y,Z):-

    Z>max(X,Y),write(Z);
    Z<max(X,Y),max(X,Y).


max2(X,Y,X):-
    X>=Y.
max2(X,Y,Y):-
    X<Y.

max3(X,Y,Z,M):-
    max2(X,Y,R),max2(Z,R,M).
