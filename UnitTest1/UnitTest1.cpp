#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "Header.h"
	};


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(RockPaperScissors_T01_Draw)
		{
			const char* expected = "Draw";

			const char* actual = RockPaperScissors("Rock", "Rock");

			Assert::AreEqual(expected, actual);
		}

	};
}
