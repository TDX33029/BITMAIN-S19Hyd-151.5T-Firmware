// FUN_01728908 @ 01728908 size=100 calls_out=0 calls_in=2
// strings: 

int FUN_01728908(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = (uint)(param_1[1] - iVar1) >> 4;
    piVar4 = (int *)(iVar1 + 8);
    do {
      uVar3 = uVar3 - 1;
      iVar2 = *piVar4 + iVar2;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  iVar1 = param_1[2];
  if (iVar1 == param_1[3]) {
    return iVar2;
  }
  uVar3 = (uint)(param_1[3] - iVar1) >> 4;
  piVar4 = (int *)(iVar1 + 8);
  do {
    uVar3 = uVar3 - 1;
    iVar2 = *piVar4 + iVar2;
    piVar4 = piVar4 + 4;
  } while (uVar3 != 0);
  return iVar2;
}

