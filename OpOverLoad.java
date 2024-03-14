public class OpOverLoad{
    public void print(int A){
        System.out.println("Integer value of A : "+A);
    }
    public void print(String A){
        System.out.println("String value of A : "+A);
    }
    public void print(double A){
        System.out.println("Double value of A : "+A);
    }
    public static void main(String args[]){
        OpOverLoad obj=new OpOverLoad();
        obj.print("CSE");
        obj.print(15);
        obj.print(9.333);
    }
}