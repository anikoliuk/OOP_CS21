package Models;

import Contracts.IRotatable;
import Contracts.IShiftable;


public class WalkRobot extends Models.Robot implements IRotatable, IShiftable {

    private int start_ang;
    private final int end_ang;

    private final Action[] action = {
            new Action(ActionType.RotF,10),
            new Action(ActionType.DoSome,10),
            new Action(ActionType.RotB,10),
            new Action(ActionType.ShiftB,10),
            new Action(ActionType.DoSome,10),
            new Action(ActionType.ShiftF,10),
            new Action(ActionType.RotF,10),
            new Action(ActionType.RotB,10),
            new Action(ActionType.DoSome,10),
            new Action(ActionType.ShiftB,10)
    };

    public WalkRobot(int x, int y, int course, int start_ang, int end_ang) {
        super(x, y, course);
        this.start_ang = start_ang;
        this.end_ang = end_ang;
    }


    @Override
    public void DoSomethings() {
        System.out.println("RotRobot do somethings");
    }

    @Override
    public void Move() {
        for (Action a:action){
            if (a.action() == ActionType.DoSome) {
                DoSomethings();
            }else if(a.action() == ActionType.RotF){

                System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);

                for(int i = 0; i<a.step_count(); i++){
                    RotateForward();
                }

                System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);

            }else if(a.action() == ActionType.RotB){

                System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);

                for(int i = 0; i<a.step_count(); i++){
                    RotateBackward();
                }

                System.out.println("start_angle =" + start_ang + "end_angle =" + end_ang);

            }else if(a.action() == ActionType.ShiftF){
                System.out.println("x = " + x + "y =" + y);

                for(int i = 0; i<a.step_count(); i++){
                    ShiftForward();
                }

                System.out.println("x = " + x + "y =" + y);

            }else if(a.action() == ActionType.ShiftB){

                System.out.println("x = " + x + "y =" + y);

                for(int i = 0; i<a.step_count(); i++){
                    ShiftBackward();
                }

                System.out.println("x = " + x + "y =" + y);
            }
        }
    }

    public void view_actionList(){
        for (int i = 0; i<10;i++){
            System.out.print(action[i]);
        }
    }

    @Override
    public void RotateForward() {
        start_ang += IRotatable.step_angle;
    }

    @Override
    public void RotateBackward() {
        start_ang -= IRotatable.step_angle;
    }

    @Override
    public void ShiftForward() {
        if (course>0)
            x += step_shift;
        else {
            y = step_shift;
        }
    }

    @Override
    public void ShiftBackward() {
        if (course>0)
            x -= step_shift;
        else {
            y = step_shift;
        }
    }
}
