import java.util.*;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        // Inisiasi Hashmap
        Map<String,Integer> map_tito = new HashMap<String,Integer>();
        Map<String,Integer> map_wiwid = new HashMap<String,Integer>();

        // Melakukan pemrosesan terhadap kata yang disampaikan tito
        for (String word : tito) {
            if (map_tito.containsKey(word)) {
                map_tito.put(word, map_tito.get(word) + 1);
            } else {
                map_tito.put(word, 1);
            }
        }
        
        // Melakukan pemrosesan terhadap kata yang disampaikan wiwid
        for (String word : wiwid) {
            if (map_wiwid.containsKey(word)) {
                map_wiwid.put(word, map_wiwid.get(word) + 1);
            } else {
                map_wiwid.put(word, 1);
            }
        }

        for (Map.Entry<String, Integer> e : map_wiwid.entrySet()) {
            if (map_tito.containsKey(e.getKey())) {
                System.out.println(e.getKey());
            }
        }
    }
}