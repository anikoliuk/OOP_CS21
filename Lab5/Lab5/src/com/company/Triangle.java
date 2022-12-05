package com.company;
public abstract class Triangle {

    protected int a;
    protected int b;
    protected int angle;

    public Triangle() {
        this.a = 10;
        this.b = 6;
        this.angle = 45;
    }

    public Triangle(int a, int b, int angle) {
        this.a = a;
        this.b = b;
        this.angle = angle;
    }

    abstract public int getA();

    abstract public void setA(int a);

    abstract public int getB();

    abstract  public void setB(int b);

    abstract public int getAngle();

    abstract protected void GetInfo();

    abstract protected double GetSqure();

    abstract protected double GetPer();
}
