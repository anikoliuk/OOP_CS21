package Models;

import Contracts.IRotatable;

public class RotRobot extends Models.Robot implements IRotatable {
    private int start_ang;
    private int end_ang;


    public RotRobot(int x, int y, int course, int start_ang, int end_ang) {
        super(x, y, course);
        this.start_ang = start_ang;
        if(end_ang>start_ang)
            this.end_ang = end_ang;
    }


    @Override
    public void DoSomethings() {
        System.out.println("RotRobot do somethings");
    }

    @Override
    public void Move() {
        System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);

        for (int i = 0; Math.abs(start_ang)!=end_ang; i++){
            RotateForward();
        }

        if(Math.abs(start_ang)==end_ang){
            for (int i = 0; Math.abs(start_ang)!=end_ang; i++){
                RotateBackward();
            }
        }

        System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);
        DoSomethings();
    }

    @Override
    public void RotateForward() {
        start_ang += IRotatable.step_angle;
    }

    @Override
    public void RotateBackward() {
        start_ang -= IRotatable.step_angle;
    }
}
