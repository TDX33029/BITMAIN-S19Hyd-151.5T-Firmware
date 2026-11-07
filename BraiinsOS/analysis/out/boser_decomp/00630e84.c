// FUN_00630e84 @ 00630e84 size=508 calls_out=7 calls_in=2
// strings: 

undefined4 * FUN_00630e84(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uStack_d0;
  uint *local_c8;
  undefined1 uStack_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined4 **local_c0;
  code *local_bc;
  undefined *local_b8;
  uint *local_a8;
  int local_a4;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_60;
  int local_5c;
  
  uVar11 = FUN_019ef7f4(param_2);
  local_a4 = (int)(uVar11 >> 0x20);
  iVar7 = 0x218;
  if ((uVar11 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar8 = *(undefined4 *)(local_a4 + iVar7);
  local_90 = *param_1;
  local_8c = param_1[1];
  puVar6 = (undefined4 *)((uint)&local_c0 | 0x10);
  local_88 = param_1[2];
  do {
    do {
      iVar7 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar9 = DAT_01d50470 + 1;
      iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar9;
    DAT_01d50474 = iVar10;
  } while (bVar2 && bVar3);
  iVar10 = 0x200;
  if ((uVar11 & 1) != 0) {
    iVar10 = 0x138;
  }
  local_a4 = local_a4 + iVar10;
  local_a8 = *(uint **)(local_a4 + 8);
  uStack_d0 = uVar11;
  if (local_a8 == (uint *)0x0) {
LAB_00630f5c:
    puVar6[4] = uVar4;
    puVar6[5] = iVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    local_c0 = (undefined4 **)0xcc;
    local_b8 = &DAT_01c1a9cc;
    local_98 = 0;
    local_bc = (code *)0x0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c8 = (undefined4 *)0x0;
    local_60 = local_a8;
    local_5c = local_a4;
    iVar7 = FUN_01be5878(&local_c8,0x20,0x80);
    puVar5 = local_c8;
    if ((iVar7 != 0) || (local_c8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_c8,&local_c0,0x80);
    FUN_019f02d4(&local_c0,uVar8,puVar5,1,uVar11);
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
    FUN_00668d74(&uStack_d0);
    return puVar5;
  }
  do {
    uVar9 = *local_a8;
    bVar2 = (bool)hasExclusiveAccess(local_a8);
  } while (!bVar2);
  *local_a8 = uVar9 + 1;
  if (-1 < (int)uVar9) {
    local_a4 = *(int *)(local_a4 + 0xc);
    do {
      uVar9 = *local_a8;
      bVar2 = (bool)hasExclusiveAccess(local_a8);
    } while (!bVar2);
    *local_a8 = uVar9 + 1;
    if (uVar9 < 0x80000000) goto LAB_00630f5c;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x630f58);
  (*pcVar1)();
}

