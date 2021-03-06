#include <iostream> 

struct Action 
{
	string type;
	int value;
}


public class Robot 
{
	public void moveForward(int speed) {}
	public void moveBack(int speed) {}
	public void turnLeft(int angle) {}
	public void turnRight(int angle) {}

	private std::vector<std::string> split(const std::string& input, const std::string& regex) 
	{
		std::regex re(regex);
		std::sregex_token_iterator
		first{ input.begin(), input.end(), re, -1 },
		last;
		return { first, last };
	}

	public Action receiveAction(string inputString)
	{
		std::vector<std::string> vect(2);
		vect = split(inputString, "=");

		Action action;
		action.type = vect[0];
		action.value = vect[1];

		
		if (action.type == "Speed") 
		{
			if (action.value > 0) 
			{
				moveForward(action.value);
			}

			else 
			{
				moveBack(action.value);
			}
		}

		else if (action.type == "Angle")
		{
			if (action.value > -90 and def.value < 90) 
			{
				turnRight(action.value);
			}

			else if (action.value > 90 and def.value < 270) 
			{
				turnLeft(action.value);
			}
		}
	}
}

int main() 
{
	Robot robot;
	while (true)
	{
		std::string command;
		robot.receiveAction(command);
	}
}


 


