import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Find_direction {
    
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int t = Integer.parseInt(st.nextToken());
		while(t-->0){
		    int x = Integer.parseInt(br.readLine());
		    x %= 4;
		    if (x==0)
		        System.out.println("North");
		    else if (x==1)
		        System.out.println("East");
		    else if(x==2)
		        System.out.println("South");
		    else
		        System.out.println("West");
		}
    }
}
