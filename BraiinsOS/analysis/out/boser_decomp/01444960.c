// FUN_01444960 @ 01444960 size=508 calls_out=7 calls_in=2
// strings: 

undefined4 * FUN_01444960(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong local_b0;
  uint *local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined4 **local_a0;
  code *local_9c;
  undefined **local_98;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  
  uVar11 = FUN_019ef7f4(&DAT_01cf8f0c);
  local_84 = (int)(uVar11 >> 0x20);
  iVar7 = 0x218;
  if ((uVar11 & 1) != 0) {
    iVar7 = 0x148;
  }
  uVar10 = *(undefined4 *)(local_84 + iVar7);
  puVar6 = (undefined4 *)((uint)&local_a0 | 0x10);
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
  if ((uVar11 & 1) != 0) {
    iVar9 = 0x138;
  }
  local_84 = local_84 + iVar9;
  local_88 = *(uint **)(local_84 + 8);
  local_b0 = uVar11;
  if (local_88 == (uint *)0x0) {
LAB_01444a34:
    puVar6[4] = uVar4;
    puVar6[5] = iVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_a8 = (undefined4 *)0x0;
    local_a0 = (undefined4 **)0xcc;
    local_98 = &PTR_FUN_01cf8f1c;
    local_70 = param_1;
    local_6c = param_2;
    local_48 = local_88;
    local_44 = local_84;
    iVar7 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar7 != 0) || (local_a8 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar10,puVar5,1,uVar11);
    if (((uint)local_a0 & 0xfe) != 4) {
      uStack_a4 = SUB41(local_9c,0);
      local_a1 = (undefined1)((uint)local_9c >> 0x18);
      local_a8 = (uint *)local_a0;
      local_a3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = &local_a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01cf8f0c);
    }
    FUN_00668d74(&local_b0);
    return puVar5;
  }
  do {
    uVar8 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar8 + 1;
  if (-1 < (int)uVar8) {
    local_84 = *(int *)(local_84 + 0xc);
    do {
      uVar8 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar8 + 1;
    if (uVar8 < 0x80000000) goto LAB_01444a34;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1444a30);
  (*pcVar1)();
}

