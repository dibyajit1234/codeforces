import java.util.*;
public class Ideal_Generator{
    public static void main(String a[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int k = sc.nextInt();
            System.out.println(k%2==0?"No":"Yes");
        }
    }
}
