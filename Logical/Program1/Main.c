
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	EVIRD.ENABLE = ON_OFF;
	if (ON_OFF == 0){
		speed = 0;
	};
	led1 = LED[0];
	led2 = LED[1];
	led3 = LED[2];
	led4 = LED[3];
	DRIVE(&EVIRD);
}

void _EXIT ProgramExit(void)
{

}

