// FUN_00b2d3a0 @ 00b2d3a0 size=928 calls_out=12 calls_in=2
// strings: 

void FUN_00b2d3a0(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint *puVar8;
  int iVar9;
  int unaff_r11;
  undefined8 uVar10;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_7c;
  undefined1 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 *local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    param_2[1] = *param_2 + 0x468;
    param_2[2] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186fdf0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186fdf0);
  }
  iVar3 = FUN_00c8101c(param_2 + 1,param_3);
  if (iVar3 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    uVar7 = 3;
    goto LAB_00b2d70c;
  }
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    FUN_00c8204c(iVar4,param_2[2],1);
  }
  if (*(int *)(iVar3 + 0x20) == 0) {
    uVar1 = 0;
    local_64 = 5;
    local_84 = -0x80000000;
    uVar10 = 0;
    uVar7 = 0;
    local_78 = &DAT_3b9aca00;
    iVar4 = 0;
    local_68 = &DAT_3b9aca00;
    local_7c = &DAT_3b9aca00;
    local_70 = 0;
    local_74 = 0;
    local_6c = 0;
  }
  else {
    iVar9 = *(int *)(iVar3 + 0x24);
    puVar8 = (uint *)(iVar9 + 8);
    uVar5 = *(uint *)(iVar9 + 8);
    if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
      if (*puVar8 != uVar5) {
        ClearExclusiveLocal();
        goto LAB_00b2d4d4;
      }
      bVar2 = (bool)hasExclusiveAccess(puVar8);
      if (!bVar2) goto LAB_00b2d4d4;
      *puVar8 = uVar5 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00b2d4d4:
      FUN_0127d66c(puVar8);
    }
    FUN_0128236c(puVar8);
    FUN_0128236c((uint)puVar8 | 1);
    DataMemoryBarrier(0xb);
    local_64 = *(int *)(iVar9 + 0x10);
    iVar4 = *(int *)(iVar9 + 0x14);
    if (local_64 != 5 || iVar4 != 0) {
      local_40 = *(int *)(iVar9 + 0x18);
      local_3c = *(int *)(iVar9 + 0x1c);
      iStack_38 = *(int *)(iVar9 + 0x20);
      iStack_34 = *(int *)(iVar9 + 0x24);
    }
    local_9c = *(int *)(iVar9 + 0x30);
    local_94 = *(int *)(iVar9 + 0x50);
    local_90 = *(int *)(iVar9 + 0x34);
    local_88 = *(int *)(iVar9 + 0x54);
    local_8c = *(int *)(iVar9 + 0x44);
    local_98 = *(int *)(iVar9 + 0x40);
    local_6c = *(int *)(iVar9 + 0x28);
    local_7c = *(undefined1 **)(iVar9 + 0x38);
    local_78 = *(undefined1 **)(iVar9 + 0x48);
    local_70 = *(int *)(iVar9 + 100);
    local_68 = *(undefined1 **)(iVar9 + 0x58);
    uVar7 = *(undefined1 *)(iVar9 + 0x68);
    unaff_r11 = *(int *)(iVar9 + 0x2c);
    uVar10 = *(undefined8 *)(iVar9 + 0x70);
    local_74 = *(int *)(iVar9 + 0x60);
    if (*(int *)(iVar9 + 0x78) == -0x80000000) {
      local_84 = -0x80000000;
    }
    else {
      local_84 = *(int *)(iVar9 + 0x80);
      uVar6 = *(undefined4 *)(iVar9 + 0x7c);
      if (local_84 == 0) {
        local_a0 = 1;
      }
      else {
        local_a0 = thunk_FUN_016d4a50(local_84);
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_84);
        }
      }
      FUN_016dd1aa(local_a0,uVar6,local_84);
    }
    uVar1 = *(undefined1 *)(iVar9 + 0x84);
    FUN_01282570(puVar8);
    FUN_01282570((uint)puVar8 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar8;
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = uVar5 - 0x10;
    if ((uVar5 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar8);
    }
    local_60 = local_40;
    iStack_5c = local_3c;
    iStack_58 = iStack_38;
    iStack_54 = iStack_34;
  }
  FUN_00c822ec(iVar3);
  param_1[8] = local_9c;
  param_1[0xc] = local_98;
  param_1[2] = local_60;
  param_1[3] = iStack_5c;
  param_1[4] = iStack_58;
  param_1[5] = iStack_54;
  param_1[0x10] = local_94;
  param_1[6] = local_6c;
  param_1[10] = (int)local_7c;
  param_1[9] = local_90;
  param_1[0xe] = (int)local_78;
  *(undefined1 *)(param_1 + 0x16) = uVar7;
  param_1[0xd] = local_8c;
  param_1[0x14] = local_74;
  param_1[0x15] = local_70;
  param_1[0x11] = local_88;
  param_1[0x12] = (int)local_68;
  param_1[0x1b] = local_a0;
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  uVar7 = 1;
  param_1[0x1a] = local_84;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *param_1 = local_64;
  param_1[1] = iVar4;
  param_1[7] = unaff_r11;
  param_1[0x1c] = local_84;
LAB_00b2d70c:
  *(undefined1 *)(param_2 + 3) = uVar7;
  return;
}

