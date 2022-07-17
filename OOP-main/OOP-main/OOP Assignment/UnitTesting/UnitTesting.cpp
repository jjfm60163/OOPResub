#include "pch.h"
#include "CppUnitTest.h"

#include "../OOP Assignment/OOP Assignment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			class Holiday {
			private:
				std::string _name;
				int _age;
				std::string _holidayname;
				std::string _holidaychoice;
			public:
				void GetAge(int age) { _age = age; }
				int SetAge() { return _age; }
				void GetName(std::string name) { _name = name; }
				std::string SetName() { return _name; }
			};
		}
	};
}
