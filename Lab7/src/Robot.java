package Models;

public class Robot {
    protected int x;
    protected int y;
   protected int course;

    public Robot(int x, int y, int course) {
        this.x = x;
        this.y = y;
        this.course = course;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getCourse() {
        return course;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setCourse(int course) {
        this.course = course;
    }

    public void DoSomethings(){
        System.out.println("Robot do somethings");
    }
}
