import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Gold_mining {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int t = Integer.parseInt(st.nextToken());
		while(t-->0){
		    String[] str = br.readLine().split(" ");
		    int n = (Integer.parseInt(str[0])+1) * Integer.parseInt(str[2]);
		    int x= Integer.parseInt(str[1]);
		    System.out.println(n>=x?"YES":"NO");
		    
		}
    }
}
