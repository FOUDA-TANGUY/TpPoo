public class Aliment
{

    protected String mNom;
    protected String mCategorie;
    protected float mMasse;

    public Aliment()
    {

        System.out.println("creation d'un Aliment!");
    }
    public Aliment(String nom,String categorie,float masse)
    {

        this.mNom = nom;
        this.mCategorie = categorie;
        this.mMasse = masse;
    }
    public void setAliment(String a, String b,float c){

        this.mNom = a;
        this.mCategorie = b;
        this.mMasse = c;
    }
    public String getNom(){
        
        return this.mNom;
    }
    public String getCategorie(){

        return this.mCategorie;
    }
    public float getMasse()
    {

        return this.mMasse;
    }
}