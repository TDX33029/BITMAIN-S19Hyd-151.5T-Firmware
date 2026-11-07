// FUN_009a7ebc @ 009a7ebc size=248 calls_out=5 calls_in=5
// strings: 

void FUN_009a7ebc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 4);
  puVar3 = (uint *)(iVar4 + 0x98);
  uVar2 = *(uint *)(iVar4 + 0x98);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar3 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_009a7f10;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar3);
LAB_009a7f10:
  FUN_0128236c(puVar3);
  FUN_0128236c((uint)puVar3 | 1);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar4 + 0xa0) == 2) {
    param_1[6] = 0;
    param_1[7] = 4;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 4;
    param_1[0xb] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    FUN_009cb12c(param_1,iVar4 + 0x120);
  }
  FUN_01282570(puVar3);
  FUN_01282570((uint)puVar3 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 - 0x10;
  if ((uVar2 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar3);
    return;
  }
  return;
}

