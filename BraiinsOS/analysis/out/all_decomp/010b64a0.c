// FUN_010b64a0 @ 010b64a0 size=576 calls_out=3 calls_in=3
// strings: 

void FUN_010b64a0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint local_a8;
  int *local_98;
  int local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_34;
  undefined1 local_30;
  
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  puVar5[5] = 0;
  *puVar5 = 0;
  local_88 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (local_88 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *local_88 = 0;
  local_88[1] = 0;
  local_6c = 0;
  local_74 = 0;
  local_78 = 1;
  local_7c = -0x80000000;
  local_80 = 0;
  local_94 = 1;
  local_98 = (int *)0x1;
  local_90 = puVar5;
  local_8c = puVar5;
  local_84 = local_88;
  piVar6 = (int *)thunk_FUN_016d4a50(0x30);
  iVar12 = local_6c;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar6 = (int)local_98;
  piVar6[1] = local_94;
  piVar6[2] = (int)local_90;
  piVar6[3] = (int)local_8c;
  piVar6[4] = (int)local_88;
  piVar6[5] = (int)local_84;
  piVar6[6] = local_80;
  piVar6[7] = local_7c;
  piVar6[8] = local_78;
  piVar6[9] = local_74;
  piVar6[10] = iStack_70;
  piVar6[0xb] = local_6c;
  do {
    iVar7 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x1c);
    }
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    *puVar5 = 1;
    puVar5[1] = 1;
    puVar5[2] = 0;
    local_90 = (undefined4 *)0x3;
    local_a8 = local_a8 & 0xffffff00;
    local_8c = (undefined4 *)0x0;
    local_30 = 0;
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_94 = 1;
    local_98 = (int *)0x1;
    piVar8 = (int *)thunk_FUN_016d4a50(0x70);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x70);
    }
    FUN_016dd1aa(piVar8,&local_98,0x70);
    do {
      iVar7 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar7 + 1;
    if (-1 < iVar7) {
      local_98 = piVar8;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      uVar11 = 2;
      if (param_5 != 0) {
        uVar11 = 1;
      }
      puVar9[5] = 0;
      *puVar9 = 1;
      puVar9[1] = 1;
      puVar9[2] = uVar11;
      puVar9[3] = 0;
      do {
        piVar10 = (int *)*puVar9;
        bVar1 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar1);
      *puVar9 = (undefined4 *)((int)piVar10 + 1);
      piVar2 = piVar10;
      puVar3 = (undefined4 *)((int)piVar10 + 1);
      uVar4 = 0;
      if (piVar10 < &DAT_80000000) {
        iVar12 = 1;
        piVar2 = piVar6;
        puVar3 = puVar5;
        uVar4 = local_a8;
      }
      if (-1 < (int)piVar10) {
        param_1[1] = (int)puVar9;
        param_1[2] = (int)piVar2;
        param_1[3] = (int)puVar3;
        param_1[4] = uVar4;
        *(char *)(param_1 + 6) = (char)iVar12;
        *param_1 = (int)piVar8;
        param_1[7] = (int)piVar6;
        param_1[8] = (int)puVar9;
        param_1[9] = (int)piVar8;
        param_1[10] = param_3;
        param_1[0xb] = param_4;
        return;
      }
    }
  }
  software_udf(0xfdee,0x10b6694);
  return;
}

