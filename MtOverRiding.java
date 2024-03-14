class parent{
    public void add(int a,int b){
        System.out.println("This is parent class method");
        System.out.println("Additon of two numbers : "+(a+b));
    }
}
class child extends parent{
    public void add(int a,int b){
        System.out.println("This is child class method");
        System.out.println("Additon of two numbers : "+(a+b));
    }
}
public class MtOverRiding {
    public static void main(String[] args) {
        child obj = new child();
        obj.add(12,13);
    }
}