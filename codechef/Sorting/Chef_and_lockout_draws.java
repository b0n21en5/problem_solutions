import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Chef_and_lockout_draws{

    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int t = Integer.parseInt(st.nextToken());
        while(t-->0){

            String[] str = br.readLine().split(" ");

            System.out.println(str[0]+str[1]==str[2] || str[1]+str[2]==str[0] || str[0]+str[2]==str[1]?"YES":"NO");
        }
    }
}