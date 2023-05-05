import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        try {
            Reflection reflection = new Reflection();
            ArrayList<String> rg = reflection.ghostMethods();
            for (String name : rg) {
                System.out.println(name);
            }
            System.out.println(reflection.sumGhost());
            System.out.println(reflection.letterGhost());
        } catch (Exception e) {
            System.out.println("GAGALLLLLLL");
        }
    }
}
