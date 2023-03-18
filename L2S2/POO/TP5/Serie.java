public class Serie extends Video
{
    private int nombreSaisons;
    public Serie(String t,int n)
    {
        super(t);
        nombreSaisons=n;
    }
    
    public int getSaisons()
    {
        return nombreSaisons;
    }
    
    public void setSaisons(int n)
    {
        nombreSaisons=n;
    }
    
    public int comparerA(Serie v)
    {
        if(this.nombreSaisons>v.nombreSaisons)
        return plusgrande;
        else if(this.nombreSaisons<v.nombreSaisons)
        return pluspetite;
        else return egale;
    }
    
    public String toString()
    {
        return "Informations sur " + getTitre() + ": \n" +"\tType: " + getClass().getName() + "\n" +"\tNombre de saisons: " + nombreSaisons + "\n";
    }
}
