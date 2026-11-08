// FUN_01299380 @ 01299380 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_01299380(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x10);
  do {
    if (*piVar1 != -0x80000000) {
      FUN_0134aee0(*piVar1,piVar1[1],4,8);
    }
    piVar1 = piVar1 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

