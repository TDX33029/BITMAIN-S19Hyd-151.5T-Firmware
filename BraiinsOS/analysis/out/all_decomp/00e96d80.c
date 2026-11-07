// FUN_00e96d80 @ 00e96d80 size=252 calls_out=6 calls_in=1
// strings: Disabled stream | Old stream

undefined4 FUN_00e96d80(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 8) == 3) {
    uVar3 = FUN_00f155bc("Disabled stream",0xf);
    return uVar3;
  }
  iVar5 = *(int *)(param_1 + 8);
  puVar4 = (uint *)(iVar5 + 0x98);
  uVar2 = *(uint *)(iVar5 + 0x98);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar4 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00e96de0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar4);
LAB_00e96de0:
  FUN_0128236c(puVar4);
  FUN_0128236c((uint)puVar4 | 1);
  if (*(int *)(iVar5 + 0x9c) != param_2) {
    FUN_00a15ee8(puVar4);
    uVar3 = FUN_00f155bc("Old stream",10);
    return uVar3;
  }
  FUN_01282570(puVar4);
  FUN_01282570((uint)puVar4 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar2 - 0x10;
  if ((uVar2 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar4);
    return 0;
  }
  return 0;
}

