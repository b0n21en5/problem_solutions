import java.util.Scanner;
import java.util.Random;

class RockPaperScissors{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Random r = new Random();

        int cpu =0, player=0, round=10;
        
        System.out.println("Welcome to Rock, Paper, Scissor Game:");
        System.out.println("Type 's' for scissor\n'r' for rock\n'p' for paper: " );

        while(round-->0){
            String choices = "prs";
            
            char player_choice = sc.next().charAt(0);
            char cpu_choice = choices.charAt(r.nextInt(3));

            if (cpu_choice=='r' && player_choice=='s'){
                cpu++;
                System.out.println("Computer got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }
            else if (cpu_choice=='r' && player_choice=='p'){
                player++;
                System.out.println("Player got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }


            else if (cpu_choice=='s' && player_choice=='p'){
                cpu++;
                System.out.println("Computer got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }
            else if (cpu_choice=='s' && player_choice=='r'){
                player++;
                System.out.println("Player got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }



            else if (cpu_choice=='p' && player_choice=='r'){
                cpu++;
                System.out.println("Computer got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }
            else if (cpu_choice=='p' && player_choice=='s'){
                player++;
                System.out.println("Player got a point");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }

            else{
                System.out.println("both take same choice");
                System.out.println("Computer score: "+cpu+" Player score: "+player);
            }

            System.out.println();
        }

        if (cpu>player){
            System.out.println("You loose!");
            System.out.println("Computer score: "+cpu+" Player score: "+player);
        }
        else if (cpu<player){
            System.out.println("You Win!");
            System.out.println("Computer score: "+cpu+" Player score: "+player);
        }
        else{
            System.out.println("Draw! no winner..");
            System.out.println("Computer score: "+cpu+" Player score: "+player);
        }
    }
}