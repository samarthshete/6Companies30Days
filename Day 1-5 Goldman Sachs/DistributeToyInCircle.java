public class DistributeToyInCircle{
	 public int solve(int A, int B, int C) {
          return (A+C-1)%B;
    }
    public static void main(String arg[]){
        int n = 5;
        int m = 8;
        int k = 2;
        System.out.print(lastPosition(n, m, k));
    }
}