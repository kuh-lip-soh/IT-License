sorcier(ron).
avoirBaguette(harry).
joueurQuidditch(harry).
sorcier(X):- avoirBalai(X), avoirBaguette(X).
avoirBalai(X):- joueurQuidditch(X).
