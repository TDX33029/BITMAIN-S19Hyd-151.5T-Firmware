// FUN_01017984 @ 01017984 size=216 calls_out=5 calls_in=0
// strings: 

void FUN_01017984(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar2 = *param_1 - 3;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_00fe4378(param_1[2],param_1[3]);
      return;
    }
    return;
  }
  piVar3 = (int *)param_1[0x24];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(param_1[0x24]);
  }
  piVar3 = (int *)param_1[0x25];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0x25]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_00feab18();
  FUN_00b19860(param_1[0x22],param_1[0x23]);
  return;
}

