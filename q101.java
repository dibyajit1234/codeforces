import java.util.*;
public class q101{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt();
      int []a= new int[n];
      for(int i=0;i<n;i++)a[i]=sc.nextInt();
      for(int i=0;i<n;i++){
        if(a[i]==-1)a[i]=1;
        if(a[i]==1)break;
      }
      for(int i=n-1;i>=0;i--){
        if(a[i]==-1)a[i]=1;
        if(a[i]==1)break;
      }
      for(int i:a)System.out.print(Math.max(i,0)+" ");
      System.out.println();

    }
  }
}
