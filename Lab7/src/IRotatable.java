package Contracts;

public interface IRotatable extends IMovable {
    static int step_angle = 10;

    void RotateForward();
    void RotateBackward();
}