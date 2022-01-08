
#include <iostream>
#include <fstream>
#include <string>
#include <exception>

int check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Bad arguments !" << std::endl;
		return(0);
	}
	if (std::string(argv[1]).empty())
	{
		std::cout << "Error: File is empty !" << std::endl;
		return(0);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "Error: String 1 is empty !" << std::endl;
		return (0);
	}
	if (std::string(argv[3]).empty())
	{
		std::cout << "Error: String 2 is empty !" << std::endl;
		return (0);
	}
	return (1);
}

static void replace(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    size_t l1 = s1.length();
    size_t l2 = s2.length();

    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, l1);
        line.insert(pos,s2);
        pos += l2;
    }
}

int main(int argc, char **argv)
{
    if (check_args(argc, argv) == 0)
    {
        std::cout << "" << std::endl;
        return (-1);
    }

    const std::string file = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    std::ifstream ifile;
    std::ofstream ofile;
    std::string line;

    ifile.open(file.c_str());
    if (ifile.fail())
    {
        std::cout << "Unable to open input file." << std::endl;
        return (-1);
    }

    ofile.open((file + ".replace").c_str(), std::ios::trunc);
    if (ofile.fail())
    {
		std::cout << "Unable to open output file." << std::endl;
		ifile.close();
        return (-1);
    }

    while (true)
    {
        try
        {
            std::getline(ifile, line);
            replace(line, s1, s2);
            ofile << line;
            if (ifile.eof())
                break;
            else
                ofile << std::endl;
        }
        catch (std::exception &e)
        {
			std::cout << "An exception occureed: " << e.what() << std::endl;
            break;
        }
    }

    ifile.close();
    ofile.close();
    return (0);
}