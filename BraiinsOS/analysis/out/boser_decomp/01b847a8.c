// FUN_01b847a8 @ 01b847a8 size=48 calls_out=0 calls_in=1
// strings: 

int FUN_01b847a8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -4);
  iVar1 = 0;
  while (piVar2 != (int *)(param_1 + param_2 * 4)) {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

