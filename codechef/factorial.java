import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class factorial{

    public static void main(String[] args) throws IOException {
        
        BufferedReader br  = new BufferedReader( new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int t = Integer.parseInt(st.nextToken());
        while(t-->0){
            int n = Integer.parseInt(br.readLine());

            int fact=0;

            for (int i=5;n/i>=1;i*=5)
                fact += n/i;

            System.out.println(fact);
        }
    }
}