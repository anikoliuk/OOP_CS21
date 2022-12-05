package com.company;

public class Main {
    public static void main(String args[]) {

        Triangle [] mas = new Triangle[4];
        for (int i = 0; i < 4; i++){
            if(i % 2 == 0)
                mas[i] = new RightTriangle(5,9);
            else
                mas[i] = new RegularTriangle(5);
        }
        for (int i = 0; i < 4; i++)
        {
            mas[i].GetInfo();
        }
    }
}
