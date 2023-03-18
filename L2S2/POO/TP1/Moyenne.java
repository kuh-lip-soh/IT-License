public class Moyenne
{
    double sommeNotes;
    int nombreDeNotes;
    void ajouterNote(double sn)
    {
     sommeNotes+=sommeNotes;
     nombreDeNotes+=1;
    }
    
    double calculMoyenne(double note)
    {
        return note/nombreDeNotes;
    }
}
