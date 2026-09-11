import java.util.*;
public class  Team_Training{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt(),x=sc.nextInt();
      int a[]=new int[n];
      for(int i=0;i<n;i++)a[i]=sc.nextInt();
      Arrays.sort(a);
      reverse(a);
      int ans=0;
      for(int i=0,cnt=1;i<n;i++,cnt++){
        if(a[i]*cnt>=x){
          ans++;
          cnt=0;
        }
      }
      System.out.println(ans);
    }
  }
  private static int[] reverse(int []a){
    int i=0,j=a.length-1;
    while(i<=j){
      int temp = a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
    }
    return a;
  }
}
