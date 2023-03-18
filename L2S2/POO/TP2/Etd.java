public class Etd
{
    static String dept;
    String nom;
    int mat;
    static int i=1;
    
    Etd(String nom)
    {
        this.nom=nom;
        this.mat=getMat();
    }
    public int getMat()
    {
        return i++;
    }       
    public void setDept()
    {
        dept="Departement d'informatique";
    }
    public void show()
    {
        System.out.println(nom + ", " + mat + ", "+ dept);
    }
}
