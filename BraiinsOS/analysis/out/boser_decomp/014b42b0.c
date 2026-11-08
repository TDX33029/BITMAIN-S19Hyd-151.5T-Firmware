// FUN_014b42b0 @ 014b42b0 size=552 calls_out=7 calls_in=2
// strings: 

undefined4 * FUN_014b42b0(undefined4 *param_1,undefined4 param_2)

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
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint *local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined4 **local_a0;
  code *local_9c;
  undefined **local_98;
  uint *local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = 0x14b42d0;
  uVar16 = FUN_019ef7f4(param_2);
  iVar6 = (int)(uVar16 >> 0x20);
  puVar11 = (undefined4 *)((uint)&local_a0 | 0x10);
  iVar7 = 0x218;
  if ((uVar16 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar13 = *(undefined4 *)(iVar6 + iVar7);
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
  if ((uVar16 & 1) != 0) {
    iVar9 = 0x138;
  }
  local_88 = *(uint **)(iVar6 + iVar9 + 8);
  if (local_88 == (uint *)0x0) {
LAB_014b437c:
    puVar10 = (undefined4 *)((uint)&local_38 | 4);
    uVar12 = param_1[1];
    uVar14 = param_1[2];
    *puVar10 = *param_1;
    puVar10[1] = uVar12;
    puVar10[2] = uVar14;
    local_78 = 0;
    local_74 = local_38;
    uStack_70 = uStack_34;
    uStack_6c = uStack_30;
    uStack_68 = uStack_2c;
    puVar11[4] = uVar4;
    puVar11[5] = iVar7;
    *puVar11 = 0;
    puVar11[1] = 0;
    local_98 = &PTR_LAB_01cf97a4;
    local_9c = (code *)0x0;
    local_a0 = (undefined4 **)0xcc;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_a8 = (undefined4 *)0x0;
    local_84 = uVar15;
    local_50 = local_88;
    local_4c = uVar15;
    iVar7 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar7 != 0) || (local_a8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar13,puVar5,1,uVar16);
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
    FUN_014397e4((int)uVar16,iVar6);
    return puVar5;
  }
  do {
    uVar8 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    uVar15 = *(undefined4 *)(iVar6 + iVar9 + 0xc);
    do {
      uVar8 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_014b437c;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14b4378);
  (*pcVar1)();
}

