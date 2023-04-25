
#include <iostream>
#include <vector>

class Min
{
private:
	int min;
public:
	Min()
	{
		min = INT_MAX;
	}

	void operator()(int obj)
	{
		if (obj < min)
		{
			min = obj;
		}
	}
	int getMin() const
	{
		return min;
	}
};
class Max
{
private:
	int max;
public:
	Max()
	{
		max = INT_MAX;
	}

	void operator()(int obj)
	{
		if (obj > max)
		{
			max = obj;
		}
	}
	int getMax() const
	{
		return max;
	}
};
class HtoL
{
private:
public:
	void sort(std::vector<int>& vec)
	{
		int temp = 0;
		for (int i = 0; i < vec.size() - 1; i++)
		{
			for (int j = 0; j < vec.size() - 1 - i; j++)
			{
				if (vec[j] < vec[j + 1])
				{
					temp = vec[j];
					vec[j] = vec[j + 1];
					vec[j + 1] = temp;
				}
			}
		}
	}
};
class LtoH
{
private:
public:
	void sort(std::vector<int>& vec)
	{
		int temp = 0;
		for (int i = 0; i < vec.size() - 1; i++)
		{
			for (int j = 0; j < vec.size() - 1 - i; j++)
			{
				if (vec[j] > vec[j + 1])
				{
					temp = vec[j];
					vec[j] = vec[j + 1];
					vec[j + 1] = temp;
				}
			}
		}
	}
};
class IncCon
{
private:
public:
	void Inc(std::vector<int> &vec, const int con)
	{
		for (auto it : vec)
		{
			it += con;
		}
	}
};
class DecCon
{
private:
public:
	void Dec(std::vector<int>& vec, const int con)
	{
		for (auto it : vec)
		{
			it -= con;
		}
	}
};
class DelIt
{
private:
public:
	void del(std::vector<int> &vec, int delEq)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			std::cout << "0";
			if (vec[i] == delEq)
			{
				vec.erase(vec.begin() + i);
			}
		}
	}
};

int main()
{
	//std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	//DelIt test;
	//std::cout << "here\n";
	//test.del(vec, 1);
	//std::cout << "now\n";
	//for (auto it : vec)
	//{
	//	 std::cout << it << '\n';
	//}
}