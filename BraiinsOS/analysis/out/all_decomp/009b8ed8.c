// FUN_009b8ed8 @ 009b8ed8 size=560 calls_out=10 calls_in=1
// strings: BUG: Metric is already unregistered

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009b8ed8(undefined4 *param_1,undefined4 *param_2)

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
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar4 = param_2[2];
  puVar9 = param_2 + 2;
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar9 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_009b8f28;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar3) goto LAB_009b8f28;
    *puVar9 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b8f28:
    FUN_0127d66c(puVar9);
  }
  FUN_0128236c(puVar9);
  uVar4 = (uint)puVar9 | 1;
  FUN_0128236c(uVar4);
  cVar2 = *(char *)(param_2 + 3);
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
      goto LAB_009b8fa4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(puVar9);
LAB_009b8fa4:
  FUN_0128236c(puVar9);
  FUN_0128236c(uVar4);
  if (*(char *)(param_2 + 3) == '\0') {
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
  *(undefined1 *)(param_2 + 3) = 0;
  do {
    iVar6 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9b9108);
    (*pcVar1)();
  }
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  uVar8 = *param_2;
  *puVar7 = piVar10;
  FUN_012c3d08(&local_38,uVar8,puVar7,&DAT_01869e10);
  if (local_38 != 5) {
    uStack_1c = uStack_2c;
    iStack_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Metric is already unregistered",0x23,&iStack_28,&DAT_01869e38);
  }
  *param_1 = 8;
  param_1[1] = puVar9;
  param_1[2] = param_2 + 1;
  return;
}

