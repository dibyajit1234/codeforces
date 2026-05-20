import java.util.*;
import java.io.*;
public class Snowfall{
  public static void main(String arr[])throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while(t-->0){
      StringTokenizer st = new StringTokenizer(br.readLine());
      int n = Integer.parseInt(st.nextToken());
      st = new StringTokenizer(br.readLine());
      int[] a = new int[n];
      for(int i=0;i<n;i++) a[i] = Integer.parseInt(st.nextToken());
      int i=0,j=0;
      while(i<n && j<n){
        if(a[j]%6==0){
        int temp = a[j];
          a[j]=a[i];
          a[i]=temp;
          i++;
        }
        j++;
      }
      j=i;
      while(i<n && j<n){
        if(a[j]%2==0){
        int temp = a[j];
          a[j]=a[i];
          a[i]=temp;
          i++;
        }
        j++;
      }
      j=i;
      while(i<n && j<n){
        if(a[j]%6!=0 && a[j]%2!=0 && a[j]%3!=0){
        int temp = a[j];
          a[j]=a[i];
          a[i]=temp;
          i++;
        }
        j++;
      }


      for(int x:a){
        System.out.print(x+" ");
      }
      System.out.println();
    }
  }
}
