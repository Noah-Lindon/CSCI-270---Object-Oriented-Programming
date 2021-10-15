// This program demonstrates an iterator with a map.
// Noah Lindon
// CSCI 270
// 11/21/19
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string courseNum;

	// Create a map containing course numbers and the room numbers.
	map<string, int> roomNums =
	{ { "CS101", 3004 }, { "CS102", 4501 },
	{ "CS103", 6755 }, { "NT110", 1244 }, { "CM241", 1411 } };

	// Create an iterator.
	map<string, int>::iterator iterRoomNums;

	// Use the iterRoomNumsator to display each element in the map.
	for (iterRoomNums = roomNums.begin(); iterRoomNums != roomNums.end(); iterRoomNums++)
	{
		cout << "Course Number: " << iterRoomNums->first
			<< "\tRoom Number: " << iterRoomNums->second << endl;
	}


	// Create a map containing course numbers and the names of the instructors.
	map<string, string> instructors =
	{ { "CS101", "Haynes" }, { "CS102", "Alvarado" },
	{ "CS103", "Rich" }, { "NT110", "Burke" }, { "CM241", "Lee" }  };

	// Create an iterator.
	map<string, string>::iterator iterInstructors;

	// Use the iterator to display each element in the map.
	for (iterInstructors = instructors.begin(); iterInstructors != instructors.end(); iterInstructors++)
	{
		cout << "Course Number: " << iterInstructors->first
			<< "\tInstructor: " << iterInstructors->second << endl;
	}



	// Create a map containing course numbers and the meeting times.
	map<string, string> meetingTimes =
	{ { "CS101", "8:00 a.m." }, { "CS102", "9:00 a.m." },
	{ "CS103", "10:00 a.m." }, { "NT110", "11:00 a.m." }, { "CM241", "1:00 p.m." } };

	// Create an iterator.
	map<string, string>::iterator iterMeetingTimes;

	// Use the iterator to display each element in the map.
	for (iterMeetingTimes = meetingTimes.begin(); iterMeetingTimes != meetingTimes.end(); iterMeetingTimes++)
	{
		cout << "Course Number: " << iterMeetingTimes->first
			<< "\tMeeting Times: " << iterMeetingTimes->second << endl;
	}
	

	cout << "Enter a course number to search: ";
	cin >> courseNum;

	// Retrieve a value from the map.
	if (roomNums.count(courseNum))
	{
		cout << "Room Number: " << roomNums.at(courseNum) << endl;
		cout << "Instructor: " << instructors.at(courseNum) << endl;
		cout << "Meeting Times: " << meetingTimes.at(courseNum) << endl;
	}
	else
		cout << "Course Number not found. \n";

	// Delete the room number, instructor, and meeting time from their respective maps
	cout << "Enter a course number to delete the class: ";
	cin >> courseNum;
	roomNums.erase(courseNum);
	instructors.erase(courseNum);
	meetingTimes.erase(courseNum);

	// Add the new room number, instructor, and meeting time to their respective maps
	roomNums.emplace("CSCI270", 104);
	instructors.emplace("CSCI270", "Ogle");
	meetingTimes.emplace("CSCI270", "2:00 p.m.");

	// Use the iterator to display each element in the map.
	for (iterMeetingTimes = meetingTimes.begin(); iterMeetingTimes != meetingTimes.end(); iterMeetingTimes++)
	{
		cout << "Course Number: " << iterMeetingTimes->first
			<< "\tMeeting Times: " << iterMeetingTimes->second << endl;
	}

	system("pause");
	return 0;
}
