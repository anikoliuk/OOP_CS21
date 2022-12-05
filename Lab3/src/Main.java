
import java.lang.String;



public class Main {

    public static void TestPoint(){
        Point x = new Point();
        Point y = new Point(5,6);

        x.InputPoint();

        x.MoveX(5);
        x.MoveY(5);
        System.out.println(x.DistanceToCenter());
        System.out.println(x.DistanceBtwPoints(y));
        x.OutputPoint();
        y.OutputPoint();
    }
    public static void TestTriangle(){


        Triangle a = new Triangle();
        System.out.println(a.Square());
        System.out.println(a.Per());
        System.out.println(a.Height());
        a.Type();


    }

    public static void main(String[] args) {
        TestPoint();
        TestTriangle();
    }
}
