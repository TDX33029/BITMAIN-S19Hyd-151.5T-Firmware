// FUN_01a55170 @ 01a55170 size=48 calls_out=1 calls_in=0
// strings: 

int * FUN_01a55170(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_01a4b4b0(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
  if (*piVar1 != 0) {
    piVar2 = piVar1;
  }
  return piVar2;
}

