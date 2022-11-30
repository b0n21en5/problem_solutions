import java.io.BufferedReader;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.io.IOException;
import java.io.InputStreamReader;



public class Chef_and_Eid {

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
            int[] arr = new int[n];
            for (int i=0;i<n;i++)
                arr[i] = fr.nextInt();

            Arrays.sort(arr);
            int min = Math.abs(arr[0] - arr[1]);

            for (int i=1;i<n-1;i++)
                if (Math.abs(arr[i] - arr[i+1])<min) min = Math.abs(arr[i] - arr[i+1]);
            
            System.out.println(min);
        }
    }
}
