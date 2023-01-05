public class MainAp
{
    public static void main(String argc[])
    {
        //Alimentcons a;
        Aliment a = new AlimentEner();
        AlimentEner b;
        AlimentProt e ;
        Plat p = new Plat("atieker");
        p.add(new Aliment("okok","cereale",5));
        System.out.println("hello world!!\n");
    }
}