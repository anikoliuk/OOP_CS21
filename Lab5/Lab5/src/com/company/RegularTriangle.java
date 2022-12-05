package com.company;

public class RegularTriangle extends Triangle {
    public RegularTriangle() {
        this.a = 10;
    }

    public RegularTriangle(int a) {
        this.a = a;
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
        return a*a * Math.sqrt(3)/4;
    }

    @Override
    protected double GetPer(){
        return 3*a;
    }
}
