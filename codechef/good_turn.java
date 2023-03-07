import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class good_turn
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    System.out.println(x+y>6?"YES":"NO");
		}
	}
}