class parent{
    public void add(int a,int b){
        System.out.println("This is parent class method");
        System.out.println("Additon of two numbers : "+(a+b));
    }
}
class child extends parent{
    public void add(double a,double b){
        System.out.println("This is child class method");
        System.out.println("Additon of two numbers : "+(a+b));
    }
}
public class MtOverLoad extends child{
    public static void main(String[] args) {
        MtOverLoad obj = new MtOverLoad();
        obj.add(12.2,13);
    }
}