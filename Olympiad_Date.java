import java.util.*;
public class Olympiad_Date{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt(),ans=0;
      boolean found=false;
      int []a=new int[10];
      for(int i=0;i<n;i++){
        int x = sc.nextInt();
        a[x]++;
        if(a[0]>=3 && a[1]>=1 && a[2]>=2 && a[3]>=1 && a[5]>=1 && found==false){
          System.out.println(i+1);
          found=true;
        }
      }
      if(found==false)System.out.println(0);;
    }
  }
}
