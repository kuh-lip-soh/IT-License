public class Personne
{
    String nom;
    int nbEnfants;
    Personne(String nom,int n)
    {
        this.nom=nom;
        this.nbEnfants=n;
    }
    
    public String toString()
    {
        return nom;
    }
}