// FUN_007901fc @ 007901fc size=820 calls_out=6 calls_in=14
// strings: BUG: cannot lock connection details

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007901fc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_50;
  undefined1 local_4c;
  int local_48;
  int local_3c;
  int *local_2c;
  undefined1 local_28;
  
  piVar6 = (int *)(param_2 + 0x3d0);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_00790230;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_00790230:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0x3d4);
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = *(char *)(param_2 + 0x3d4);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar5;
    local_2c = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: cannot lock connection details",0x23,&local_2c,&DAT_0185c0ec,&DAT_0185cedc);
  }
  if (*(int *)(param_2 + 0x3d8) == -0x80000000) {
    iVar9 = -0x80000000;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x3e0);
    uVar10 = *(undefined4 *)(param_2 + 0x3dc);
    if (iVar9 == 0) {
      local_48 = 1;
    }
    else {
      local_48 = thunk_FUN_016d4a50(iVar9);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar9);
      }
    }
    FUN_016dd1aa(local_48,uVar10,iVar9);
    local_4c = *(undefined1 *)(param_2 + 0x3e4);
  }
  iVar7 = *(int *)(param_2 + 0x4c4);
  uVar10 = *(undefined4 *)(param_2 + 0x4c0);
  if (iVar7 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar7);
    }
  }
  FUN_016dd1aa(iVar4,uVar10,iVar7);
  if (*(int *)(param_2 + 0x4b0) == -0x80000000) {
    local_3c = -0x80000000;
  }
  else {
    local_3c = *(int *)(param_2 + 0x4b8);
    uVar10 = *(undefined4 *)(param_2 + 0x4b4);
    if (local_3c == 0) {
      local_50 = 1;
    }
    else {
      local_50 = thunk_FUN_016d4a50(local_3c);
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_3c);
      }
    }
    FUN_016dd1aa(local_50,uVar10,local_3c);
  }
  iVar11 = *(int *)(param_2 + 0x4d0);
  iVar13 = 1;
  uVar10 = *(undefined4 *)(param_2 + 0x4cc);
  iVar12 = 1;
  if ((iVar11 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar11), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar11);
  }
  FUN_016dd1aa(iVar12,uVar10,iVar11);
  iVar8 = *(int *)(param_2 + 0x4dc);
  uVar10 = *(undefined4 *)(param_2 + 0x4d8);
  uVar2 = *(undefined2 *)(param_2 + 0x4e0);
  if ((iVar8 != 0) && (iVar13 = thunk_FUN_016d4a50(iVar8), iVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar8);
  }
  FUN_016dd1aa(iVar13,uVar10,iVar8);
  FUN_016dd1aa(param_1 + 4,param_2 + 1000,200);
  *(undefined2 *)(param_1 + 0x42) = uVar2;
  *(undefined1 *)(param_1 + 3) = local_4c;
  param_1[1] = local_48;
  *param_1 = iVar9;
  param_1[2] = iVar9;
  param_1[0x37] = local_50;
  param_1[0x36] = local_3c;
  param_1[0x38] = local_3c;
  param_1[0x3a] = iVar4;
  param_1[0x39] = iVar7;
  param_1[0x3b] = iVar7;
  param_1[0x3c] = iVar11;
  param_1[0x3d] = iVar12;
  param_1[0x3e] = iVar11;
  param_1[0x3f] = iVar8;
  param_1[0x40] = iVar13;
  param_1[0x41] = iVar8;
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(param_2 + 0x3d4) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar6;
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = 0;
  if (iVar9 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar6,0x81,1,param_5);
    return;
  }
  return;
}

