// FUN_00631a34 @ 00631a34 size=564 calls_out=7 calls_in=3
// strings: 

undefined4 * FUN_00631a34(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined4 local_c8;
  ulonglong local_b0;
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
  iVar14 = (int)(uVar18 >> 0x20);
  puVar12 = (undefined4 *)((uint)&local_a0 | 0x10);
  iVar6 = 0x218;
  if ((uVar18 & 1) != 0) {
    iVar6 = 0x148;
  }
  uVar16 = *(undefined4 *)(iVar14 + iVar6);
  do {
    do {
      iVar6 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar7 = DAT_01d50470 + 1;
      iVar8 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar7;
    DAT_01d50474 = iVar8;
  } while (bVar2 && bVar3);
  iVar8 = 0x200;
  if ((uVar18 & 1) != 0) {
    iVar8 = 0x138;
  }
  iVar14 = iVar14 + iVar8;
  local_88 = *(uint **)(iVar14 + 8);
  local_b0 = uVar18;
  if (local_88 == (uint *)0x0) {
LAB_00631b10:
    uVar10 = param_1[1];
    uVar11 = param_1[2];
    uVar13 = param_1[3];
    uVar15 = param_1[4];
    uVar17 = param_1[5];
    puVar9 = (undefined4 *)((uint)&local_40 | 4);
    *puVar9 = *param_1;
    puVar9[1] = uVar10;
    puVar9[2] = uVar11;
    puVar9[3] = uVar13;
    puVar9[4] = uVar15;
    puVar9[5] = uVar17;
    local_78 = 0;
    local_74 = local_40;
    uStack_70 = uStack_3c;
    uStack_6c = uStack_38;
    local_68 = local_34;
    uStack_64 = uStack_30;
    uStack_60 = uStack_2c;
    uStack_5c = uStack_28;
    puVar12[4] = uVar4;
    puVar12[5] = iVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_98 = &DAT_01c1a5e4;
    local_a0 = (undefined4 **)0xcc;
    local_84 = local_c8;
    local_44 = local_c8;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_a8 = (undefined4 *)0x0;
    local_48 = local_88;
    iVar14 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar14 != 0) || (local_a8 == (undefined4 *)0x0)) {
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
    FUN_00668d74(&local_b0);
    return puVar5;
  }
  do {
    uVar7 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar7 + 1;
  if (-1 < (int)uVar7) {
    local_c8 = *(undefined4 *)(iVar14 + 0xc);
    do {
      uVar7 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar7 + 1;
    if (uVar7 < 0x80000000) goto LAB_00631b10;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x631b0c);
  (*pcVar1)();
}

