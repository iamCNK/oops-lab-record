import java.io.*;
class Main{
    public static void main(String args[]){
        FileInputStream input;
        FileOutputStream output;
        try{
            input = new FileInputStream("source");
            output = new FileOutputStream("destination");
            while(input.available()>0){
                output.write(input.read());
            }
        }
        catch(FileNotFoundException obj){
            System.out.println("Invalid fine name or file not found");
        }
        catch(IOException i){
            System.out.println("IO error");
        }
    }
}