import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Chef_and_Employment_test {
    
    static class FastReader{

        BufferedReader br;
        StringTokenizer st;

        public FastReader (){
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next(){

            while (st==null || !st.hasMoreElements()){
                try{
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e){
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt(){ return Integer.parseInt(next());}
    }


    public static void main(String[] args) throws IOException {
        FastReader fr = new FastReader();
        int t = fr.nextInt();

        while(t-->0){
            int n = fr.nextInt();
            int k = fr.nextInt();
            int[] arr = new int[n];
            for (int i=0;i<n;i++)
                arr[i] = fr.nextInt();

            Arrays.sort(arr);

            System.out.println(arr[(n+k)/2]);
        }
    }
}
