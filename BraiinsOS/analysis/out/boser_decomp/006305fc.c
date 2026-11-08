// FUN_006305fc @ 006305fc size=508 calls_out=7 calls_in=2
// strings: 

undefined4 * FUN_006305fc(undefined4 *param_1,undefined4 param_2)

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
  ulonglong uStack_b0;
  uint *local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined4 **local_a0;
  code *local_9c;
  undefined *local_98;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  int local_4c;
  
  uVar11 = FUN_019ef7f4(param_2);
  local_84 = (int)(uVar11 >> 0x20);
  iVar7 = 0x218;
  if ((uVar11 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar8 = *(undefined4 *)(local_84 + iVar7);
  local_70 = *param_1;
  local_6c = param_1[1];
  puVar6 = (undefined4 *)((uint)&local_a0 | 0x10);
  local_68 = param_1[2];
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
  local_84 = local_84 + iVar10;
  local_88 = *(uint **)(local_84 + 8);
  uStack_b0 = uVar11;
  if (local_88 == (uint *)0x0) {
LAB_006306d4:
    puVar6[4] = uVar4;
    puVar6[5] = iVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    local_a0 = (undefined4 **)0xcc;
    local_98 = &DAT_01c1a1ac;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_a8 = (undefined4 *)0x0;
    local_50 = local_88;
    local_4c = local_84;
    iVar7 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar7 != 0) || (local_a8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar8,puVar5,1,uVar11);
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
    FUN_00668d74(&uStack_b0);
    return puVar5;
  }
  do {
    uVar9 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar9 + 1;
  if (-1 < (int)uVar9) {
    local_84 = *(int *)(local_84 + 0xc);
    do {
      uVar9 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar9 + 1;
    if (uVar9 < 0x80000000) goto LAB_006306d4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6306d0);
  (*pcVar1)();
}

