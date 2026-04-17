# ============================================================
#  CMP1001 – Lab Grader Makefile
#  Topic : Introduction to Functions & Built-in Functions
#
#  TARGETS
#  -------
#  make grade          – run ALL tests
#  make test-s1        – Section 1 only  (10 pts)
#  make test-s2        – Section 2 only  (20 pts)
#  make test-s3        – Section 3 only  (50 pts)
#  make test-challenge – Section 4 only  (20 pts)
#  make build          – compile without running
#  make clean          – remove compiled binary
# ============================================================

CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wno-unused-variable -Wno-unused-but-set-variable

CATCH_CPP = catch_amalgamated.cpp
TEST_CPP  = grader_tests.cpp
TARGET    = grader

.PHONY: build grade test-s1 test-s2 test-s3 test-challenge clean

build: $(TARGET)

$(TARGET): $(TEST_CPP) $(CATCH_CPP) MainProgram.cpp
	$(CXX) $(CXXFLAGS) $(TEST_CPP) $(CATCH_CPP) -o $(TARGET)

grade: $(TARGET)
	./$(TARGET) [section1]
	./$(TARGET) [section2]
	./$(TARGET) [section3]
	./$(TARGET) [section4]

test-s1: $(TARGET)
	./$(TARGET) [section1]

test-s2: $(TARGET)
	./$(TARGET) [section2]

test-s3: $(TARGET)
	./$(TARGET) [section3]

test-challenge: $(TARGET)
	./$(TARGET) [section4]

clean:
	rm -f $(TARGET)