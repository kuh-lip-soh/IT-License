max2(X,Y,X):- X>=Y .
max2(X,Y,Y):- Y>X.


max3(X,Y,Z,S):- max2(X,Y,S1),max2(S1,Z,S).

