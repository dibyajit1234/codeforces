import java.util.*;
public class Boss_Fight{
 public static void main(String args[]){
    Scanner sc = new Scanner (System.in);
    int t = sc.nextInt();
    while(t-->0){
      int n = sc.nextInt(),sum=0,maxf=0,value=0;
      int a [] = new int[n];
      Map<Integer,Integer> map = new HashMap<>();
      for(int i=0;i<n;i++){
        int x = sc.nextInt();
        sum+=x;
        int f = map.getOrDefault(x,0)+1;
        map.put(x,f);
        if(f>maxf){
          maxf=f;
          value=x;
        }
      }
      int lost = Math.max(0,2*maxf -n-2);
      System.out.println(sum-lost*value);
    }
  } 
}
