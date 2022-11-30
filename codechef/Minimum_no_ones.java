

import java.util.StringTokenizer;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;


class Minimum_of_ones
{
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
    
    
	public static void main (String[] args) throws java.lang.Exception
	{
		FastReader fr = new FastReader();
		int t = fr.nextInt();
		
		while(t-->0){
		    int n = fr.nextInt();
		    
		    System.out.println(n/2);
		}
	}
}

