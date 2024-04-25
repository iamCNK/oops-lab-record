class Table{
    synchronized void printTable(int n){
        for(int i=1;i<=12;i++){
            System.out.println(n+" * "+i+" = "+n*i);
        }
    }
}
class Thread1 extends Thread{
    Table obj = new Table();
    int n;
    Thread1(Table obj,int n){
        this.n=n;
        this.obj=obj;
    }
    public void run(){
        obj.printTable(n);
    }
}
class Thread2 extends Thread{
    Table obj = new Table();
    int n;
    Thread2(Table obj,int n){
        this.n=n;
        this.obj=obj;
    }
    public void run(){
        obj.printTable(n);
    }
}
class ThreadSyncJava{
    public static void main(String args[]){
        Table obj = new Table();
        Thread1 obj1 = new Thread1(obj,2);
        Thread2 obj2 = new Thread2(obj,3);
        obj1.start();
        obj2.start();
    }
}