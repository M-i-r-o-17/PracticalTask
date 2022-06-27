#pragma once
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

namespace practicaltask {

	public class Data	{
		public: int Count;
		public: std::vector<int> vector;

		public: int StartNum;

		public: bool autoSeed;
		public: int Seed;
		public: int MaxID;

		public: int a, b, summ;

		public: bool showMax;
		public: bool showMaxId;
		public: bool sorted;


		  
		public:  Data() : StartNum(0), Count(14), a(-10), b(10), MaxID(0), summ(0) {
			showMax = true;
			showMaxId = true;
			autoSeed = true;
			sorted = false;
			Seed = (int)time(NULL);
			vector.push_back(StartNum);
		};
		public:	~Data() {
			vector.clear();
			vector.shrink_to_fit();
		};

		private: void Generate() {

			vector.clear();
			MaxID = 0;

			std::srand(Seed);
			vector.push_back(StartNum);

			for (int i = 1; i < Count - 3; i++) {
				vector.push_back(std::rand() % 21 - 10);
				if (vector[MaxID] < vector[i]) {
					MaxID = i;
				}
			}

			for (int i = Count - 3; i < Count; i++) {
				vector.push_back(i * 10);
				if (vector[MaxID] < vector[i]) {
					MaxID = i;
				}
			}
		}
		private: void Sort() {
			for (int i = 0; i < MaxID; i++) {
				int t = i;
				for (int j = i; j < MaxID; j++) {
					if (vector[j] > vector[t]) {
						t = j;
					}
				}
				int temp = vector[t];
				vector[t] = vector[i];
				vector[i] = temp;
			}

		}
		private: void Summ() {
			summ = 0;
			for (int i = 0; i < MaxID; i++) {
				if (a < vector[i] && vector[i] < b) {
					summ += vector[i];
				}
			}
		}

		public: void GenerateSeed() {
			std::srand(Seed);
			Seed = (time(NULL) + rand() % 9999999999 - 99999999);
		}
	
		public: void CalcData() {
			Generate();
			Summ();
			if (this->sorted) {
				//Sort();
				std::sort(vector.begin(), vector.end());
				std::reverse(vector.begin(), vector.end());
			}
		}
	
	};
}

