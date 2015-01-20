#include "ExampleCommand.h"

ExampleCommand::ExampleCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	std::cout << "ExampleCommand::ExampleCommand()" << std::endl;
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{
	std::cout << "ExampleCommand::Initialize()" << std::endl;
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{
	std::cout << "ExampleCommand::Execute()" << std::endl;
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	std::cout << "ExampleCommand::IsFinished()" << std::endl;
	return true;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{
	std::cout << "ExampleCommand::End()" << std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{
	std::cout << "ExampleCommand::Interrupted()" << std::endl;
}
