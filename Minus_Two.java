import java.util.*;
public class Minus_Two{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt(),od=0,d4=0,nd4=0,ans=1;
      int[] a= new int[n];
      for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
        if(a[i]%2!=0)od++;
        else if(a[i]%4==0)d4++;
        else if(a[i]%4!=0)nd4++;
      }
      ans =Math.max(d4,nd4);
      ans = Math.max(ans,od);
      System.out.println(ans);
    }
  }
}
