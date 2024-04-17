import java.util.Scanner;
abstract class Icecream{
    public  
        void icecreamstyle(){
            System.out.println("milk and cream");
        }
        abstract void brand();
        abstract void cost();
}
class Amul extends Icecream{
    public
        void brand(){
            System.out.println("its amul brand");
        }
        void cost(){
            System.out.println("Above 50$");
        }
}
public class Partial{
    public static void main(String args[]){
        Amul obj=new Amul();
        obj.icecreamstyle();
        obj.brand();
        obj.cost();
    }
}
