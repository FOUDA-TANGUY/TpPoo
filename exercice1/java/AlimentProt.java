public class AlimentProt extends Aliment{

    private String mVitamine;
    private float mFibre;
    private  String mSelMineraux;

    public AlimentProt(){
        
        System.out.println("creation d'un aliment protecteur!");
    }
    public void setProt(String a,float c,String b){

        this.mVitamine = a;
        this.mFibre = c;
        this.mSelMineraux = b;
    }
    public String getVitamine(){

        return this.mVitamine;

    }
    public String getSelMineraux(){

        return this.mSelMineraux;
    }
    public float getFibre(){

        return this.mFibre;
    }
    
}