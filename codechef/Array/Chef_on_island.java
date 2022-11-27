import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.Buffer;
import java.util.StringTokenizer;

class Chef_on_island{

    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int t = Integer.parseInt(st.nextToken());

        while(t-->0){
            
            String[] str = br.readLine().split(" ");

            double x= Integer.parseInt(str[0])/Integer.parseInt(str[2]);
            double y= Integer.parseInt(str[1])/Integer.parseInt(str[3]);

            System.out.println(Math.min(x,y)<Integer.parseInt(str[4])?"NO":"YES");
        }
    }
}