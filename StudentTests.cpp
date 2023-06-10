#include "gtest/gtest.h"
#include "Student.h"

TEST(StudentTest, CheckName) {
    // Initialize a student object
    Student student("John", "Doe", "123 Street", 1, 12345, "Male");
    
    // Test the setName function
    student.setName("Jane");
    
    // Verify that the name was correctly set
    EXPECT_EQ("Jane", student.getName());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
