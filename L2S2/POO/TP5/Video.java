class Video implements Comparable
{
    final int pluspetite = 1;
    final int plusgrande = -1;
    final int egale = 0;
    private String titre;
    
    public Video(String t)
    {
        titre=t;
    }
    
    public int comparerA(Video v)
    {
        return egale;
    }
    
    public String getTitre()
    {
        return titre;
    }
    
    public void setTitre(String t)
    {
        titre=t;
    }
    
    public String toString()
    {
        return "Informations sur " + titre + ": \n" +"\tType: " + getClass().getName() + "\n";
    }
}
