package frc.robot;

import edu.wpi.first.wpilibj.Jaguar;
import edu.wpi.first.wpilibj.Joystick;
import edu.wpi.first.wpilibj.RobotDrive;
import edu.wpi.first.wpilibj.command.Subsystem;

public class DriveTheRobot extends Subsystem {
    RobotDrive robotDrive2 = RobotMap.DRIVE_TRAIN_ROBOT_DRIVE_2;
    Jaguar rightMotor = RobotMap.DRIVE_TRAIN_RIGHT_MOTOR;
    Jaguar leftMotor = RobotMap.DRIVE_TRAIN_LEFT_MOTOR;


public void initDefaultCommand() {

}

public void takeJoystickInputs(Joystick left, Joystick right) {
    robotDrive2.tankDrive(left, right);
}
public void stop() {
    robotDrive2.drive(0, 0);
}
}