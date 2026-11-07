// FUN_00ed4278 @ 00ed4278 size=600 calls_out=10 calls_in=1
// strings: BUG: Metric is already unregistered

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ed4278(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int local_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *local_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = param_2[3];
  puVar9 = param_2 + 3;
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar9 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_00ed42c8;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar3) goto LAB_00ed42c8;
    *puVar9 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00ed42c8:
    FUN_0127d66c(puVar9);
  }
  FUN_0128236c(puVar9);
  uVar4 = (uint)puVar9 | 1;
  FUN_0128236c(uVar4);
  cVar2 = *(char *)(param_2 + 4);
  FUN_01282570(puVar9);
  FUN_01282570(uVar4);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar9;
    bVar3 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar3);
  *puVar9 = uVar5 - 0x10;
  if ((uVar5 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar9);
  }
  if (cVar2 == '\0') {
    *param_1 = 7;
    return;
  }
  if (*puVar9 == 0) {
    bVar3 = (bool)hasExclusiveAccess(puVar9);
    if (bVar3) {
      *puVar9 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00ed4344;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(puVar9);
LAB_00ed4344:
  FUN_0128236c(puVar9);
  FUN_0128236c(uVar4);
  if (*(char *)(param_2 + 4) == '\0') {
    *param_1 = 7;
    FUN_01282570(puVar9);
    FUN_01282570(uVar4);
    if (*puVar9 == 8) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar9);
        if (bVar3) {
          *puVar9 = 0;
          return;
        }
      } while (*puVar9 == 8);
    }
    ClearExclusiveLocal();
    FUN_0127db4c(puVar9);
    return;
  }
  piVar10 = (int *)param_2[1];
  *(undefined1 *)(param_2 + 4) = 0;
  piVar11 = (int *)param_2[2];
  do {
    iVar6 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar6 + 1;
  if (-1 < iVar6) {
    do {
      iVar6 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = iVar6 + 1;
    if (-1 < iVar6) {
      local_30 = piVar10;
      local_2c = piVar11;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      uVar8 = *param_2;
      *puVar7 = piVar10;
      puVar7[1] = piVar11;
      FUN_012c3d08(local_40,uVar8,puVar7,&DAT_0187bf58);
      if (local_40[0] != 5) {
        uStack_24 = uStack_34;
        uStack_28 = uStack_38;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: Metric is already unregistered",0x23,&local_30,&DAT_0187c0e4);
      }
      *param_1 = 8;
      param_1[1] = puVar9;
      param_1[2] = param_2 + 1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xed44d0);
  (*pcVar1)();
}

