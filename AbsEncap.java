import java.util.*;
class AccessSpecifierDemo{
    public int pubVar;
    private int priVar;
    protected int proVar;
    public void setVar(int pubVar,int priVar,int proVar){
        this.priVar=priVar;
        this.pubVar=pubVar;
        this.proVar=proVar;
    }
    public void getVar(){
        System.out.println("Private variable :"+priVar);
        System.out.println("Protected variable :"+proVar);
        System.out.println("Public variable :"+pubVar);
    }

    public static void main(String[] args){
        AccessSpecifierDemo obj=new AccessSpecifierDemo();
        obj.setVar(1,2,3);
        obj.getVar();
    }
}
