// FUN_00e7b62c @ 00e7b62c size=360 calls_out=4 calls_in=2
// strings: 

void FUN_00e7b62c(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  piVar6 = param_2 + 2;
  if (*piVar6 != 0x1e || param_2[3] != 0) {
    FUN_00e7b808(piVar6);
  }
  FUN_016dd1aa(piVar6,param_3,0x2e0);
  puVar2 = (uint *)(param_2 + 0xbe);
  uVar5 = param_2[0xbe];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_00e7b6d0;
      uVar5 = *puVar2;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_00e7b6d0:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_2[0xbc] + 8))(param_2[0xbd]);
  }
  if ((uVar4 & 4) == 0) {
    *param_1 = 0x1e;
    param_1[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  else {
    iVar3 = *piVar6;
    iVar7 = param_2[3];
    *piVar6 = 0x1e;
    param_2[3] = 0;
    if (iVar3 == 0x1e && iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    FUN_016dd1aa(param_1 + 2,param_2 + 4,0x2d8);
    *param_1 = iVar3;
    param_1[1] = iVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e457a8(param_2);
  }
  return;
}

