package Models;

import java.util.Objects;

public final class Action {
    private final ActionType action;
    private final int step_count;

    public Action(ActionType action, int step_count) {
        this.action = action;
        this.step_count = step_count;
    }

    public ActionType action() {
        return action;
    }

    public int step_count() {
        return step_count;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (Action) obj;
        return Objects.equals(this.action, that.action) &&
                this.step_count == that.step_count;
    }

    @Override
    public int hashCode() {
        return Objects.hash(action, step_count);
    }

    @Override
    public String toString() {
        return "Action[" +
                "action=" + action + ", " +
                "step_count=" + step_count + ']';
    }

}
