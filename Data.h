#pragma once
#include <ctime>
#include <cstdlib>

namespace practicaltask {

	public class Data	{
		public: int Count;
		public: int *Array; 

		public: int StartNum;

		public: bool autoSeed;
		public: int Seed;
		public: int MaxID;

		public: int a, b, summ;

		public: bool showMax;
		public: bool showMaxId;
		public: bool sorted;


		  
		public:  Data() : StartNum(0), Count(14), a(-10), b(10), MaxID(0), summ(0) {
			Array = new int[14];
			Array[0] = StartNum;
			showMax = true;
			showMaxId = true;
			autoSeed = true;
			sorted = false;
			Seed = (int)time(NULL);
		};
		public:	~Data() {
			delete[] Array;
		};

		private: void Sort() {
			for (int i = 0; i < MaxID - 1; i++) {
				int tempId = i;
				for (int j = i; j < MaxID; j++) {
					if (Array[tempId] < Array[j]) {
						tempId = j;
					}
				}
				int temp = Array[tempId];
				Array[tempId] = Array[i];
				Array[i] = temp;
			}
		}

		private: void Generate() {
			std::srand(Seed);
			for (int i = 1; i < Count; i++) {
				Array[i] = std::rand() % 21 - 10;
				if (Array[MaxID] < Array[i]) {
					MaxID = i;
				}
			}
		}
	
		private: void Summ() {
			summ = 0;
			for (int i = 0; i < MaxID; i++) {
				if (a < Array[i] && Array[i] < b) {
					summ += Array[i];
				}
			}
		}

		public: void GenerateSeed() {
			std::srand(Seed);
			Seed = (time(NULL) + rand() % 9999999999 - 99999999);
		}
	
		public: void CalcData() {

			this->Array[0] = this->StartNum;
			Generate();
			Summ();
			if (this->sorted) {
				this->Sort();
			}
		}
	
	};
}

