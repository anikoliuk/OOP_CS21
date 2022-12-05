
import java.util.Scanner;
import java.lang.Math;


public class Point
{
    private int x;
    private int y;

    public Point()
    {
        x = 0;
        y = 0;
    }

    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    public String ToString()
    {return "x = " + x + " y = " + y + " ";}

    public void setX(int x)
    {
        this.x = x;
    }

    public void setY(int y)
    {
        this.y = y;
    }

    public int getX()
    {
        return x;
    }

    public int getY()
    {
        return y;
    }


    public void InputPoint()
    {
        Scanner inx = new Scanner(System.in);
        System.out.print("Input x: ");
        int x = inx.nextInt();

        Scanner iny = new Scanner(System.in);
        System.out.print("Input y: ");
        int y = iny.nextInt();

        inx.close();
        iny.close();
    }

    public void OutputPoint()
    {
        String temp = this.ToString();
        System.out.printf(temp);
    }

    public void MoveX(int distance)
    {
        x += distance;
    }

    public void MoveY(int distance)
    {
        y += distance;
    }

    public double DistanceToCenter()
    {
        return Math.sqrt((x * x) + (y * y));
    }

    public double DistanceBtwPoints(Point secondPoint)
    {
        return Math.sqrt(Math.pow(secondPoint.x - this.x, 2)  + Math.pow(secondPoint.y - this.y, 2));
    }

    public boolean Comparison(Point secondPoint)
    {
        if ((this.x == secondPoint.x) && (this.y == secondPoint.y))
            return true;
        return false;
    }
}
