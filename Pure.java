import java.util.Scanner;
interface Polygon{
    float area(float a,float b);
    float perimeter(float a,float b,float c);
}
class Rectangle implements Polygon{
        public float area(float a,float b){
            return a*b;
        }
        public float perimeter(float a,float b,float c)
        {
            System.out.println(2*(a+b));
            return 2*(a+b);
        }
}
class Triangle implements Polygon{
        public float area(float a,float b){
            System.out.println((0.5f)*(a*b));
            return 0.5f*(a*b);
        }
        public float perimeter(float a,float b,float c)
        {
           System.out.println(a+b+c);
           return a+b+c;
        }
}
public class Pure{
    public static void main(String args[]){
        Rectangle rec=new Rectangle();
        Triangle tri=new Triangle();
        rec.perimeter(1,2,0);
        tri.perimeter(9,7,6);
        float result1,result2;
        result1=rec.area(2,5);
        result2=tri.area(8,8);
        System.out.println("the area of rectangle ="+result1);
        System.out.println("the area of triangle ="+result2);
    }
}
