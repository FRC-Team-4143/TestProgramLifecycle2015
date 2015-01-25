#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "CommandBase.h"

class Robot: public IterativeRobot {
private:
	Command *autonomousCommand;
	LiveWindow *lw;

	void RobotInit() {
		std::cout << "Robot::RobotInit" << std::endl;
		CommandBase::init();
		autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
	}
	
	void DisabledPeriodic() {
		//std::cout << "Robot::DisabledPeriodic" << std::endl;
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit() {
		std::cout << "Robot::AutonomousInit" << std::endl;
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic() {
		//std::cout << "Robot::AutonomousPeriodic" << std::endl;
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit() {
		std::cout << "Robot::TeleopInit" << std::endl;
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
	}

	void TeleopPeriodic() {
		//std::cout << "Robot::TeleopPeriodic" << std::endl;
		Scheduler::GetInstance()->Run();
	}

	void TestInit() {
		//std::cout << "Robot::TestInit" << std::endl;
	}

	void TestPeriodic() {
		//std::cout << "Robot::TestPeriodic" << std::endl;
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);
