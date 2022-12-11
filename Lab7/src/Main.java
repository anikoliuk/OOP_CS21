package Models;

public class Main {

    public static void TestRobot(){
        Robot robot = new Robot(4,3,10);
        robot.DoSomethings();
    }

    public static void TestRotRobot(){
        RotRobot rotRobot = new RotRobot(4,3,10,0,90);
        rotRobot.Move();
    }

    public static void TestShiftRobot(){
        ShiftRobot shiftRobot = new ShiftRobot(4,3,90,0,10);
        shiftRobot.Move();
    }

    public static void TestWalkRobot(){
        WalkRobot walkRobot = new WalkRobot(4,3,90,0,90);
        System.out.println("\n");
        walkRobot.view_actionList();
        walkRobot.Move();
    }

    public static void main(String[] args) {
        TestRobot();
        System.out.println("\n\n\n");
        TestRotRobot();
        System.out.println("\n\n\n");
        TestShiftRobot();
        System.out.println("\n\n\n");
        TestWalkRobot();
    }
}
