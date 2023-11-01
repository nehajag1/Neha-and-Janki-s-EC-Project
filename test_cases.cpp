#include "human.txt"
#include <sstream>

TEST_CASE("Testing countOccurrences on Human Data", "[weight=5]")
{

	std::string sequence = "CATTCTAT";
    std::string infile = "C:\Users\nejag\OneDrive\Desktop\Extra Credit\human.txt"
    int expected = 21;
    buildSuffixArray(infile);
    int out = countOccurrences(sequence);
    REQUIRE(expected == out);
}


TEST_CASE("Testing findFirstOccurence on Dog Data", "[weight=5]")
{

	std::string sequence = "AGCTAGATACAT";
    std::string infile = "C:\Users\nejag\OneDrive\Desktop\Extra Credit\dog.txt"
    int expected = 7;
    buildSuffixArray(infile);
    int out = findFirstOccurrence(sequence);
    REQUIRE(expected == out);
}

TEST_CASE("Testing findLastOccurrence on Chimpanzee Data", "[weight=5]")
{
	std::string sequence = "TACCCCCATACTCCTGACACTATTTCTCGT";
    std::string infile = "C:\Users\nejag\OneDrive\Desktop\Extra Credit\chimpanzee.txt"
    int expected = 64;
    buildSuffixArray(infile)
    int out = findLastOccurrence(sequence);
    REQUIRE(expected == out);
}
