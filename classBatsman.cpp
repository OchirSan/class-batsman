#include <iostream>
#include <string>


class batsman {

public:
	batsman(int a) {
		mBatsmanRank = 0;
		mLastName = "";
		mInnings = 0;
		mNotouts = 0;
		mRuns = a;
	}

	void readData(int batsmanRank, std :: string& lastName, int innings, int notouts) {
		mBatsmanRank = batsmanRank % 10000;
		mLastName = lastName;
		mInnings = innings;
		mNotouts = notouts;
		mBatavg = mCalcavg();
	}

	void displayData() {
		std :: cout << "bcode = " << mBatsmanRank << "\n";
		std :: cout << "bname - " << mLastName << "\n";
		std :: cout << "innings = " << mInnings << "\n";
		std :: cout << "notouts = " << mNotouts << "\n";
		std :: cout << "runs = " << mRuns << "\n";
		std :: cout << "batavg = " << "\n";
	}

private:
	int mBatsmanRank;
    std :: string mLastName;
	int mInnings;
	int mNotouts;
	int mRuns;
	double mBatavg;
	double mCalcavg() {
		return mRuns / (mInnings - mNotouts);
	}
};



int main() {
	int runs = 2;
	std :: string lastName = "Brown";
	batsman a(runs);
	a.readData(14, lastName, 9, 2);
	a.displayData();
	return 0;
}