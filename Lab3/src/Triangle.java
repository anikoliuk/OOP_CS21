

import java.lang.Math;

public class Triangle
{
    private final Point x = new Point(0,0);
    private final Point y = new Point(0,2);
    private final Point z = new Point(0,0);

    private final double a = Math.sqrt(Math.pow( y.getX() - x.getX(),2) + Math.pow(y.getY() - x.getY(),2));
    private final double b = Math.sqrt(Math.pow( z.getX() - x.getX(),2) + Math.pow(z.getY() - x.getY(),2));
    private final double c = Math.sqrt(Math.pow( z.getX() - y.getX(),2) + Math.pow(z.getY() - y.getY(),2));


    public double Square(){

        double result = 0;
        double p = (a+b+c)/2;
        result = Math.sqrt(p * (p-a) * (p-b) * (p-c));
        return result;
    }
    public double Per(){
        return a + b + c;
    }
    public double Height(){
        double p = (a+b+c)/2;
        var h = (2 * Math.sqrt(p * (p - a) * (p - b) * (p - c))) / a;
        return h;
    }
    public void Type(){
        if(a==b && b==c)
            System.out.println("Equilateral Triangle");
        else if(((a*a)+(b*b))==(c*c) || ((a*a)+(c*c))==(b*b) || ((c*c)+(b*b))==(a*a))
            System.out.println("Right Triangle");
        else if(a==b || c==a || c==b)
            System.out.println("Isosceles Triangle");
    }
}
