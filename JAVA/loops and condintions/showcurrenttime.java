public class showcurrenttime {
    public static void main(String[] args) {
         long totalMilliseconds = System.currentTimeMillis();
         long totalSeconds = totalMilliseconds/1000;
         int currentSeconds = (int)(totalSeconds % 60);
         long totalMinutes = totalSeconds/60;
         int currentMinute = (int)(totalMinutes % 60);
         long totalHours = totalMinutes/60;
         int currentHour = (int)(totalHours % 24);
         System.out.println("Current time is" + currentHour + ":"+ currentMinute + ":" + currentSeconds + "GMT");
    }
    
}
