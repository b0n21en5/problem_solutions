/* package codechef; // don't place package name! */

import java.util.StringTokenizer;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Arrays;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
    
    public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        
        }
 
        int nextInt() { return Integer.parseInt(next()); }
 
        long nextLong() { return Long.parseLong(next()); }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    
    
	public static void main (String[] args) throws IOException
	{
		FastReader fr = new FastReader();
		
		int t = fr.nextInt();
		
		while(t-->0){
		    
		    int n = fr.nextInt();
		    
		    
		    int[] arr = new int[n];
		    
		    for (int i=0; i<n;i++)
		        arr[i] = fr.nextInt();
		        
		    int k = fr.nextInt();

            int ch = arr[k - 1];
		    
		    Arrays.sort(arr);
		    
		    System.out.println(Arrays.binarySearch(arr, ch) + 1);
		    
		}
	}
}
