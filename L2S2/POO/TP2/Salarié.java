public class Salarié extends Personne
{
    double salaire;
    static int AF=300;
    Salarié(String n, int ne, int s)
    {
        super(n,ne);
        this.salaire=s;
    }
    int primeAF()
    {
        return nbEnfants*AF;
    }
    public String toString()
    {
     return super.toString() + " " +primeAF();
    }
}
