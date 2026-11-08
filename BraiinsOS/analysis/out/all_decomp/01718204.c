// FUN_01718204 @ 01718204 size=184 calls_out=1 calls_in=1
// strings: 

bool FUN_01718204(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_01714e64();
  if (iVar1 == 0) {
    return false;
  }
  if (param_1[3] != 0) {
    return false;
  }
  if (0 < iVar1 + -1) {
    piVar2 = (int *)(*param_1 + -4);
    iVar3 = 0;
    do {
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
      if (*piVar2 != 0) {
        return false;
      }
    } while (iVar3 != iVar1 + -1);
  }
  uVar4 = *(uint *)(*param_1 + (iVar1 + 0x3fffffff) * 4);
  return (uVar4 - 1 & uVar4) == 0;
}

