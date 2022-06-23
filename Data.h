#pragma once
#include <ctime>
namespace practicaltask {

	public class Data	{
		public: int Count;
		public: int *Array;

		public: int StartNum;

		public: bool autoSeed;
		public: int Seed;

		public: int a, b;

		public: bool showMax;
		public: bool showMaxId;


		  
		public:  Data() : StartNum(0), Count(14), a(-10), b(10) {
			Array = new int[14];
			Array[0] = StartNum;
			showMax = false;
			showMaxId = false;
			autoSeed = true;
			Seed = (int)time(NULL);
		};
		public:	~Data() {
			delete[] Array;
		};
	};
}

