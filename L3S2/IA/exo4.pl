conge_maladie(X):-grippe(X).
grippe(X):-fievre(X),tousse(X).
fievre(X):-sup38(X).
sup38(mohamed).
sup38(hamid).
tousse(mohamed).
