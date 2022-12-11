package Models;

import Contracts.IShiftable;


public class ShiftRobot extends Robot implements IShiftable {
    private int start_pos;
    private final int end_pos;

    public ShiftRobot(int x, int y, int course, int start_pos, int end_pos) {
        super(x, y, course);
        this.start_pos = start_pos;
        this.end_pos = end_pos;
    }

    @Override
    public void DoSomethings() {
        System.out.println("RotRobot do somethings");
    }

    @Override
    public void Move() {
        System.out.println("start_pos =" + start_pos + "end_pos =" + end_pos);
        int temp = start_pos;
        while(start_pos != end_pos){
            ShiftForward();
        }

        while (start_pos!=0){
            ShiftBackward();
        }
        System.out.println("start_pos =" + start_pos + "end_pos =" + end_pos);
        DoSomethings();
    }

    @Override
    public void ShiftForward() {
        start_pos += IShiftable.step_shift;
    }

    @Override
    public void ShiftBackward() {
        start_pos -= IShiftable.step_shift;
    }
}
