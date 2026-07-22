import java.util.*;
public class Nikita_and_Books{
  public static void main(String a[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt();
      long [] arr = new long[n];
      for(int i=0;i<n;i++)arr[i]=sc.nextLong();
      long remain=0;
      boolean ans = true;
      for(int i=0;i<n;i++){
        long need = i+1-arr[i];
        if(need<0){
          remain += need*-1;
          continue;
        }
        if(need>remain){
          ans = false;
          break;
        }
        else{
          remain -=need;
        }
      }
      System.out.println(ans?"Yes":"No");
    }
  }

}
