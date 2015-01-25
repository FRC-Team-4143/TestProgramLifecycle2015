#include "ExampleSubsystem.h"
#include "../RobotMap.h"

ExampleSubsystem::ExampleSubsystem() : Subsystem("ExampleSubsystem") {
	std::cout << "ExampleSubsystem::ExampleSubsystem()" << std::endl;
}

void ExampleSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	std::cout << "ExampleSubsystem::InitDefaultCommand()" << std::endl;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
