class ThreadClassJava extends Thread{
    int a,b;
    ThreadClassJava(int a,int b){
        this.a=a;
        this.b=b;
    }
    void add(){
        System.out.println("The sum of two numbers is : "+(a+b));    
    }
    public void run(){
        System.out.println("Thread has been created using THREAD CLASS");
        add();
    }
    public static void main(String args[]){
        ThreadClassJava obj = new ThreadClassJava(10,11);
        obj.start();
    }
}