#include <iostream>
using namespace std;

int main(){
	string namabulan[12];
	int jumlahari[12];
	 
		jumlahari[0] = 31;
		jumlahari[1] = 28;
		jumlahari[2] = 30;
		jumlahari[3] = 31;
		jumlahari[4] = 29;
		jumlahari[5] = 30;
		jumlahari[6] = 30;
		jumlahari[7] = 29;
		jumlahari[8] = 30;
		jumlahari[9] = 28;
		jumlahari[10] = 30;
		jumlahari[11] = 30;
		
		namabulan[0] = "Januari";
		namabulan[1] = "Februari";
		namabulan[2] = "Maret";
		namabulan[3] = "April";
		namabulan[4] = "Mei";
		namabulan[5] = "Juni";
		namabulan[6] = "Juli";
		namabulan[7] = "Agustus";
		namabulan[8] = "September";
		namabulan[9] = "Oktober";
		namabulan[10] = "November";
		namabulan[11] = "Desember";
	
	for(int i = 0; i<=11; i++){
		cout<<namabulan[i]<<" = ";cout<<jumlahari[i]<<" Hari "<<endl;
	}

}
