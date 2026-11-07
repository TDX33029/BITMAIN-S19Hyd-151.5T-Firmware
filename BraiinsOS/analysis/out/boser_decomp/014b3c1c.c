// FUN_014b3c1c @ 014b3c1c size=580 calls_out=7 calls_in=9
// strings: 

undefined4 * FUN_014b3c1c(undefined4 *param_1,undefined4 param_2)

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
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 local_fc;
  uint *local_e8;
  undefined1 uStack_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined4 **local_e0;
  code *local_dc;
  undefined **local_d8;
  uint *local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint *local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar16 = FUN_019ef7f4(param_2);
  iVar6 = (int)(uVar16 >> 0x20);
  puVar12 = (undefined4 *)((uint)&local_e0 | 0x10);
  iVar7 = 0x218;
  if ((uVar16 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar15 = *(undefined4 *)(iVar6 + iVar7);
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
  local_c8 = *(uint **)(iVar6 + iVar9 + 8);
  if (local_c8 == (uint *)0x0) {
LAB_014b3cf0:
    uVar13 = param_1[1];
    uVar14 = param_1[2];
    puVar10 = (undefined4 *)((uint)&local_48 | 4);
    *puVar10 = *param_1;
    puVar10[1] = uVar13;
    puVar10[2] = uVar14;
    uVar13 = param_1[4];
    uVar14 = param_1[5];
    uVar11 = param_1[6];
    puVar10[3] = param_1[3];
    puVar10[4] = uVar13;
    puVar10[5] = uVar14;
    puVar10[6] = uVar11;
    local_b8 = 0;
    local_b4 = local_48;
    uStack_b0 = uStack_44;
    uStack_ac = uStack_40;
    uStack_a8 = uStack_3c;
    local_a4 = local_38;
    uStack_a0 = uStack_34;
    uStack_9c = uStack_30;
    uStack_98 = uStack_2c;
    puVar12[4] = uVar4;
    puVar12[5] = iVar7;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_d8 = &PTR_LAB_01cf981c;
    local_e0 = (undefined4 **)0xcc;
    local_c4 = local_fc;
    local_7c = local_fc;
    local_dc = (code *)0x0;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_e8 = (undefined4 *)0x0;
    local_80 = local_c8;
    iVar7 = FUN_01be5878(&local_e8,0x20,0x80);
    puVar5 = local_e8;
    if ((iVar7 != 0) || (local_e8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_e8,&local_e0,0x80);
    FUN_019f02d4(&local_e0,uVar15,puVar5,1,uVar16);
    if (((uint)local_e0 & 0xfe) != 4) {
      uStack_e4 = SUB41(local_dc,0);
      local_e1 = (undefined1)((uint)local_dc >> 0x18);
      local_e8 = (uint *)local_e0;
      local_e3 = (undefined2)((uint)local_dc >> 8);
      local_dc = FUN_019a7d7c;
      local_e0 = &local_e8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_e0,param_2);
    }
    FUN_014397e4((int)uVar16,iVar6);
    return puVar5;
  }
  do {
    uVar8 = *local_c8;
    bVar2 = (bool)hasExclusiveAccess(local_c8);
  } while (!bVar2);
  *local_c8 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    local_fc = *(undefined4 *)(iVar6 + iVar9 + 0xc);
    do {
      uVar8 = *local_c8;
      bVar2 = (bool)hasExclusiveAccess(local_c8);
    } while (!bVar2);
    *local_c8 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_014b3cf0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14b3cec);
  (*pcVar1)();
}

