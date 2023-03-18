poids_ideal(T,S,P):- S == 0, P is T-100-((T-150)/4).
poids_ideal(T,S,P):- S == 1, P is T-100-((T-150)/2.5).

calcule:-
    write("Saisir taille : "),
    read(T),
    write("saisir homme(1) ou femme(0) : "),
    read(S),
    poids_ideal(T,S,P),write(P).
