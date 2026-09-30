#include "CPU.h"
#include<cstdlib>
#include<ctime>

CPU::CPU()
{
	CpuInput = 0;
}

void CPU::GetCPUInput()
{
	//0‚©‚ç2‚Ü‚Å‚Ìƒ‰ƒ“ƒ_ƒ€‚È®”‚ğ¶¬‚µ‚ÄCpuInput‚É‘ã“ü
	CpuInput = rand() % 3;
}

//Œˆ’èÏ‚İ‚Ìè‚ğ•Ô‚·i‚±‚±‚Å‚Í—”‚ğ¶¬‚µ‚È‚¢j
int CPU::GetHand()
{
	return CpuInput;
}
