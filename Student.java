import java.util.*;
public class Student
{
    int a=10;
    void add(int a,int b)
    {
        System.out.println(a+b);
    }
    Student()
    {
        String fullName="Nithin";
        int rollNum= 34;
        double semPerentage = 95.9;
        String collegeName = "MVGR";
        int collegeCode = 33;
        System.out.println("Name :"+fullName+"\n"+"Roll no :"+rollNum+"\n"+"Sem percentage : "+semPerentage+"\n"+"College name : "+collegeName+"\n"+"College code : "+collegeCode);
    }
    public static void main(String args[])
    {
        Student n = new Student();
        System.out.println(n.a);
        n.add(12,13);
    }
}