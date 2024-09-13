/**
#include "pch.h"
#include "CppUnitTest.h"
#include "../Solver/Node.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForNode
{
    TEST_CLASS(NodeConstructorTest)
    {
    public:

        TEST_METHOD(Constructor_Initializes_Data_And_Links_Test)
        {
            int testData = 5;
            Node node(testData);
           
            // Проверка инициализации поля data
            Assert::AreEqual(testData, node.data, L"Constructor did not initialize data correctly.");

            // Проверка инициализации указателей prev и next
            Assert::IsNull(node.prev, L"Constructor did not initialize prev to nullptr.");
            Assert::IsNull(node.next, L"Constructor did not initialize next to nullptr.");
        }
    };
}
*/