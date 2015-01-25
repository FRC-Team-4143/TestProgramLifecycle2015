#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(char const *name) : Command(name) {
	std::cout << "CommandBase::CommandBase(name)" << std::endl;
}

CommandBase::CommandBase() : Command() {
	std::cout << "CommandBase::CommandBase" << std::endl;
}

void CommandBase::init() {
	std::cout << "CommandBase::init" << std::endl;
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	oi = new OI();
}
