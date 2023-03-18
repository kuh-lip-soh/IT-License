public class Film extends Video
{
    private double durée;
    public Film(String t,double d)
    {
        super(t);
        durée=d;
    }
    
    public double getDurée()
    {
        return durée;
    }
    
    public void setDurée(double d)
    {
        durée=d;
    }
    
    public int comparerA(Film v)
    {
        if(this.durée>v.durée)
        return plusgrande;
        else if(this.durée<v.durée)
        return pluspetite;
        else return egale;
    }
    
    public String toString()
    {
        return "Informations sur " + getTitre() + ": \n" +"\tType: " + getClass().getName() + "\n" +"\tDurée: " + durée + "\n";
    }
}
