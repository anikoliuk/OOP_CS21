
package Contracts;

public interface IShiftable extends IMovable {
    static int step_shift = 1;

    void ShiftForward();
    void ShiftBackward();
}
