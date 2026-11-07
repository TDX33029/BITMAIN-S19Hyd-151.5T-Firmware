// FUN_00b912c8 @ 00b912c8 size=552 calls_out=7 calls_in=6
// strings: 

undefined4 * FUN_00b912c8(undefined4 *param_1,undefined4 param_2)

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
  uint *local_c8;
  undefined1 uStack_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined4 **local_c0;
  code *local_bc;
  undefined *local_b8;
  uint *local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_60;
  undefined4 local_5c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = 0xb912e8;
  uVar16 = FUN_019ef7f4(param_2);
  iVar6 = (int)(uVar16 >> 0x20);
  puVar11 = (undefined4 *)((uint)&local_c0 | 0x10);
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
  local_a8 = *(uint **)(iVar6 + iVar9 + 8);
  if (local_a8 == (uint *)0x0) {
LAB_00b91394:
    puVar10 = (undefined4 *)((uint)&local_38 | 4);
    uVar12 = param_1[1];
    uVar14 = param_1[2];
    *puVar10 = *param_1;
    puVar10[1] = uVar12;
    puVar10[2] = uVar14;
    local_98 = 0;
    local_94 = local_38;
    uStack_90 = uStack_34;
    uStack_8c = uStack_30;
    uStack_88 = uStack_2c;
    puVar11[4] = uVar4;
    puVar11[5] = iVar7;
    *puVar11 = 0;
    puVar11[1] = 0;
    local_b8 = &DAT_01c13eb4;
    local_bc = (code *)0x0;
    local_c0 = (undefined4 **)0xcc;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c8 = (undefined4 *)0x0;
    local_a4 = uVar15;
    local_60 = local_a8;
    local_5c = uVar15;
    iVar7 = FUN_01be5878(&local_c8,0x20,0x80);
    puVar5 = local_c8;
    if ((iVar7 != 0) || (local_c8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_c8,&local_c0,0x80);
    FUN_019f02d4(&local_c0,uVar13,puVar5,1,uVar16);
    if (((uint)local_c0 & 0xfe) != 4) {
      uStack_c4 = SUB41(local_bc,0);
      local_c1 = (undefined1)((uint)local_bc >> 0x18);
      local_c8 = (uint *)local_c0;
      local_c3 = (undefined2)((uint)local_bc >> 8);
      local_bc = FUN_019a7d7c;
      local_c0 = &local_c8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_c0,param_2);
    }
    FUN_014397e4((int)uVar16,iVar6);
    return puVar5;
  }
  do {
    uVar8 = *local_a8;
    bVar2 = (bool)hasExclusiveAccess(local_a8);
  } while (!bVar2);
  *local_a8 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    uVar15 = *(undefined4 *)(iVar6 + iVar9 + 0xc);
    do {
      uVar8 = *local_a8;
      bVar2 = (bool)hasExclusiveAccess(local_a8);
    } while (!bVar2);
    *local_a8 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_00b91394;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb91390);
  (*pcVar1)();
}

