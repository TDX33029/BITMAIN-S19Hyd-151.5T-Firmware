// FUN_00748514 @ 00748514 size=584 calls_out=7 calls_in=6
// strings: 

undefined4 * FUN_00748514(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined4 local_c0;
  uint *local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined4 **local_a0;
  code *local_9c;
  undefined *local_98;
  uint *local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar18 = FUN_019ef7f4(param_2);
  iVar6 = (int)(uVar18 >> 0x20);
  puVar13 = (undefined4 *)((uint)&local_a0 | 0x10);
  iVar7 = 0x218;
  if ((uVar18 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar16 = *(undefined4 *)(iVar6 + iVar7);
  do {
    do {
      iVar7 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  iVar9 = 0x200;
  if ((uVar18 & 1) != 0) {
    iVar9 = 0x138;
  }
  local_88 = *(uint **)(iVar6 + iVar9 + 8);
  if (local_88 == (uint *)0x0) {
LAB_007485ec:
    uVar11 = param_1[1];
    uVar12 = param_1[2];
    uVar14 = param_1[3];
    uVar15 = param_1[4];
    uVar17 = param_1[5];
    puVar10 = (undefined4 *)((uint)&local_40 | 4);
    *puVar10 = *param_1;
    puVar10[1] = uVar11;
    puVar10[2] = uVar12;
    puVar10[3] = uVar14;
    puVar10[4] = uVar15;
    puVar10[5] = uVar17;
    local_78 = 0;
    local_74 = local_40;
    uStack_70 = uStack_3c;
    uStack_6c = uStack_38;
    local_68 = local_34;
    uStack_64 = uStack_30;
    uStack_60 = uStack_2c;
    uStack_5c = uStack_28;
    puVar13[4] = uVar4;
    puVar13[5] = iVar7;
    *puVar13 = 0;
    puVar13[1] = 0;
    local_98 = &DAT_01c080d0;
    local_a0 = (undefined4 **)0xcc;
    local_84 = local_c0;
    local_44 = local_c0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_a8 = (undefined4 *)0x0;
    local_48 = local_88;
    iVar7 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar7 != 0) || (local_a8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar16,puVar5,1,uVar18);
    if (((uint)local_a0 & 0xfe) != 4) {
      uStack_a4 = SUB41(local_9c,0);
      local_a1 = (undefined1)((uint)local_9c >> 0x18);
      local_a8 = (uint *)local_a0;
      local_a3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = &local_a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,param_2);
    }
    FUN_014397e4((int)uVar18,iVar6);
    return puVar5;
  }
  do {
    uVar8 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    local_c0 = *(undefined4 *)(iVar6 + iVar9 + 0xc);
    do {
      uVar8 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_007485ec;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x7485e8);
  (*pcVar1)();
}

