public class Plat 
{
    
    private String mName;
    private float mQuantite;
    private int mNbe;
    private Aliment[] liste;

    public Plat(String name)
    {
        System.out.println("Creation Du du Plat");
        this.setName(name);
        this.mNbe = 0;
        this.liste = new Aliment[10];
    }
    public Plat()
    {
        this.mNbe = 0;
        this.liste = new Aliment[10];
        System.out.println("Creation Du du Plat paaa");
        
    }
    public void setName(String name)
    {
        this.mName = name;
    }
    public float getQuantite()
    {
        return this.mQuantite;
    }
    public String getName()
    {
        return this.mName;
    }
    public void add(Aliment elmt)
    {
        this.liste[this.mNbe++] = elmt;
    }
    public Aliment pop()
    {
        return null;
    }
}
