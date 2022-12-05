package com.company;

public class RightTriangle extends Triangle{

    public RightTriangle() {
        this.a = 10;
        this.b = 20;
        this.angle = 90;
    }

    public RightTriangle(int a, int b) {
        this.a = a;
        this.b = b;
    }

    @Override
    public int getA() {
        return a;
    }

    @Override
    public void setA(int a) {
        this.a = a;
    }

    @Override
    public int getB() {
        return b;
    }

    @Override
    public void setB(int b) {
        this.b = b;
    }

    @Override
    public int getAngle() {
        return angle;
    }

    @Override
    public void GetInfo(){
        System.out.println( "GetInfo from Right ");
        System.out.println("Square: " + GetSqure() + "\tPerimeter: " + GetPer());
    }

    @Override
    public double GetSqure(){
        return a*b/2;

    }

    @Override
    protected double GetPer(){
        return a+b+Math.sqrt(a*a + b*b);
    }
}
