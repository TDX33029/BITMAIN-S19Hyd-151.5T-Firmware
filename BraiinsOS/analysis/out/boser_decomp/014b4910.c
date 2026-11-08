// FUN_014b4910 @ 014b4910 size=552 calls_out=7 calls_in=5
// strings: 

undefined4 * FUN_014b4910(undefined4 *param_1,undefined4 param_2)

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
  uint *local_108;
  undefined1 uStack_104;
  undefined2 local_103;
  undefined1 local_101;
  undefined4 **local_100;
  code *local_fc;
  undefined **local_f8;
  uint *local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = 0x14b4930;
  uVar16 = FUN_019ef7f4(param_2);
  iVar6 = (int)(uVar16 >> 0x20);
  puVar11 = (undefined4 *)((uint)&local_100 | 0x10);
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
  local_e8 = *(uint **)(iVar6 + iVar9 + 8);
  if (local_e8 == (uint *)0x0) {
LAB_014b49dc:
    puVar10 = (undefined4 *)((uint)&local_38 | 4);
    uVar12 = param_1[1];
    uVar14 = param_1[2];
    *puVar10 = *param_1;
    puVar10[1] = uVar12;
    puVar10[2] = uVar14;
    local_d8 = 0;
    local_d4 = local_38;
    uStack_d0 = uStack_34;
    uStack_cc = uStack_30;
    uStack_c8 = uStack_2c;
    puVar11[4] = uVar4;
    puVar11[5] = iVar7;
    *puVar11 = 0;
    puVar11[1] = 0;
    local_f8 = &PTR_LAB_01cf97f4;
    local_fc = (code *)0x0;
    local_100 = (undefined4 **)0xcc;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_108 = (undefined4 *)0x0;
    local_e4 = uVar15;
    local_50 = local_e8;
    local_4c = uVar15;
    iVar7 = FUN_01be5878(&local_108,0x20,0xc0);
    puVar5 = local_108;
    if ((iVar7 != 0) || (local_108 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_108,&local_100,0xc0);
    FUN_019f02d4(&local_100,uVar13,puVar5,1,uVar16);
    if (((uint)local_100 & 0xfe) != 4) {
      uStack_104 = SUB41(local_fc,0);
      local_101 = (undefined1)((uint)local_fc >> 0x18);
      local_108 = (uint *)local_100;
      local_103 = (undefined2)((uint)local_fc >> 8);
      local_fc = FUN_019a7d7c;
      local_100 = &local_108;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_100,param_2);
    }
    FUN_014397e4((int)uVar16,iVar6);
    return puVar5;
  }
  do {
    uVar8 = *local_e8;
    bVar2 = (bool)hasExclusiveAccess(local_e8);
  } while (!bVar2);
  *local_e8 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    uVar15 = *(undefined4 *)(iVar6 + iVar9 + 0xc);
    do {
      uVar8 = *local_e8;
      bVar2 = (bool)hasExclusiveAccess(local_e8);
    } while (!bVar2);
    *local_e8 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_014b49dc;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14b49d8);
  (*pcVar1)();
}

