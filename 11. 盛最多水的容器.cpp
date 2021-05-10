#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height) 
{
#pragma region 超出时间限制
	//vector<int> newH;
	//int len = height.size();
	//for (int i = 0; i < len; i++)
	//{
	//	for (int j = i + 1; j < len; j++)
	//	{
	//		int min = 0;
	//		if (height[j] > height[i])
	//		{
	//			min = height[i];
	//		}
	//		else
	//		{
	//			min = height[j];
	//		}
	//		int max = min * (j - i);
	//		newH.push_back(max);
	//	}
	//}
	//sort(newH.begin(), newH.end());
	///*for (int i = 0; i < newH.size(); i++)
	//{
	//	cout << newH[i] << " ";
	//}
	//cout << endl;*/
	//return newH[newH.size() - 1];
#pragma endregion
	
#pragma region 双指针while循环
	/*int first = 0, finally = height.size() - 1;
	int maxarea = 0;
	while (first<finally)
	{
		int tempMax = min(height[first], height[finally]) * (finally - first);
		maxarea = max(maxarea, tempMax);
		if (height[first]<=height[finally])
		{
			++first;
		}
		else
		{
			--finally;
		}
	}
	return maxarea;*/
#pragma endregion
#pragma region 双指针for循环
	int maxarea = 0;
	for (int first = 0,finally= height.size() - 1; first < finally;)
	{
		int tempMax = min(height[first], height[finally]) * (finally - first);
		maxarea = max(maxarea, tempMax);
		if (height[first] <= height[finally])
		{
			++first;
		}
		else
		{
			--finally;
		}
	}
	return maxarea;
#pragma endregion
}

int main()
{
	vector<int> newH = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
	cout << maxArea(newH);
	return 0;
}