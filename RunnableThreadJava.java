class RunnableThreadJava implements Runnable{
    public
    int a,b;
    void add(){
        System.out.println("The sum of two numbers is : "+(a+b));
    }
    RunnableThreadJava(int a,int b){
        
        this.a=a;
        this.b=b;
    }
    public void run(){
        System.out.println("Thread has been created using RUNNABLE INTERFACE ");
        add();
    }
    public static void main(String args[]){
        RunnableThreadJava obj = new RunnableThreadJava(2,3);
        obj.run();
    }
}
