// FUN_0002a6e4 @ 0002a6e4  size=72  callers=0
// program: bmminer


int FUN_0002a6e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0002002c();
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = 0;
  iVar4 = 0;
  piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
  do {
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + *piVar3;
  } while (iVar1 != iVar4);
  return iVar2;
}

