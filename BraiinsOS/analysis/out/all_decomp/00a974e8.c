// FUN_00a974e8 @ 00a974e8 size=916 calls_out=10 calls_in=1
// strings: 

void FUN_00a974e8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint local_80;
  uint local_7c;
  uint local_78 [24];
  
  local_7c = 1;
  local_80 = 1;
  FUN_016dd1aa(local_78,param_3,0x60);
  iVar2 = thunk_FUN_016d4a50(0x68);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar2,&local_80,0x68);
  FUN_00a337fc(&local_80,iVar2 + 8);
  uVar3 = local_80 | local_7c;
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar5 = local_78[0];
  }
  if (uVar3 == 0 && uVar5 == 0) {
    iVar7 = *(int *)(param_2 + 8);
    piVar6 = (int *)(iVar7 + 0x98);
    if (*piVar6 == 0) {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 8;
        DataMemoryBarrier(0xb);
        goto LAB_00a975c4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_0127e06c(piVar6);
LAB_00a975c4:
    FUN_0128236c(piVar6);
    FUN_0128236c((uint)piVar6 | 1);
    piVar4 = *(int **)(iVar7 + 0xa0);
    uVar3 = *(uint *)(iVar7 + 0xa8);
    *(undefined4 *)(iVar7 + 0xa8) = 0x3b9aca02;
    *(int *)(iVar7 + 0xa0) = iVar2;
    uVar5 = uVar3 + 0xc4653601;
    if (uVar3 < 999999999) {
      uVar5 = 0;
    }
    if (1 < uVar5) {
      if (uVar5 == 2) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar2 + -1;
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar2 + -1;
      }
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac5b4();
      }
    }
    piVar4 = (int *)(iVar7 + 0xc0);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 2;
    FUN_01282570(piVar6);
    FUN_01282570((uint)piVar6 | 1);
    if (*piVar6 == 8) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar6);
        if (bVar1) {
          *piVar6 = 0;
          goto LAB_00a97734;
        }
      } while (*piVar6 == 8);
    }
    ClearExclusiveLocal();
    FUN_0127db4c(piVar6);
LAB_00a97734:
    FUN_0163b708(iVar7 + 8);
    FUN_0163b708(iVar7 + 0x18);
    FUN_0163b708(iVar7 + 0x28);
    FUN_0163b708(iVar7 + 0x38);
    FUN_0163b708(iVar7 + 0x48);
    FUN_0163b708(iVar7 + 0x58);
    FUN_0163b708(iVar7 + 0x68);
    FUN_0163b708(iVar7 + 0x78);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  FUN_00a337fc(param_1,iVar2 + 8);
  iVar7 = *(int *)(param_2 + 8);
  piVar6 = (int *)(iVar7 + 0x98);
  if (*piVar6 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar6);
    if (bVar1) {
      *piVar6 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00a97644;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar6);
LAB_00a97644:
  FUN_0128236c(piVar6);
  FUN_0128236c((uint)piVar6 | 1);
  piVar4 = *(int **)(iVar7 + 0xa0);
  uVar5 = *(uint *)(iVar7 + 0xa8);
  *(undefined4 *)(iVar7 + 0xa8) = 0x3b9aca01;
  uVar3 = uVar5 + 0xc4653601;
  if (uVar5 < 999999999) {
    uVar3 = 0;
  }
  *(int *)(iVar7 + 0xa0) = iVar2;
  if (1 < uVar3) {
    if (uVar3 == 2) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac5b4();
    }
  }
  piVar4 = (int *)(iVar7 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 2;
  FUN_01282570(piVar6);
  FUN_01282570((uint)piVar6 | 1);
  if (*piVar6 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 0;
        goto LAB_00a97818;
      }
    } while (*piVar6 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar6);
LAB_00a97818:
  FUN_0163b708(iVar7 + 8);
  FUN_0163b708(iVar7 + 0x18);
  FUN_0163b708(iVar7 + 0x28);
  FUN_0163b708(iVar7 + 0x38);
  FUN_0163b708(iVar7 + 0x48);
  FUN_0163b708(iVar7 + 0x58);
  FUN_0163b708(iVar7 + 0x68);
  FUN_0163b708(iVar7 + 0x78);
  return;
}

