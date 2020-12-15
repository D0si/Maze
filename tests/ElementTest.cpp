#include <gtest/gtest.h>
#include <Maze/Maze.hpp>

using Maze::Element;

class ElementTest : public ::testing::Test {
protected:
	Element test_element;

	void SetUp() override {
		test_element = Element(Maze::Type::Object);
	}
};

TEST_F(ElementTest, Element_Construct_Null) {
	Element el;

	ASSERT_TRUE(el.is_null());
}

TEST_F(ElementTest, Element_Construct_FromAnotherElement) {
	Element el(test_element);

	ASSERT_TRUE(el.is_object());
}