aime(adam,pommes).
aime(ines,carottes).
aime(karim,oranges).
fruits(pommes).
fruits(oranges).
legumes(carottes).
bonne_sante(X):-aime(X,Y),fruits(Y).