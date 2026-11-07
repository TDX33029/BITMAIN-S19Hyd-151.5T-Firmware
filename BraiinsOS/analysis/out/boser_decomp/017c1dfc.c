// FUN_017c1dfc @ 017c1dfc size=544 calls_out=8 calls_in=0
// strings: 

void FUN_017c1dfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
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
  
  uVar13 = FUN_019ef7f4(&DAT_01cf6ad8);
  iVar8 = (int)(uVar13 >> 0x20);
  puVar12 = (undefined4 *)((uint)&local_a0 | 0x10);
  iVar6 = 0x218;
  if ((uVar13 & 1) != 0) {
    iVar6 = 0x148;
  }
  uVar11 = *(undefined4 *)(iVar8 + iVar6);
  do {
    do {
      iVar6 = DAT_01d50474;
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
  if ((uVar13 & 1) != 0) {
    iVar10 = 0x138;
  }
  local_88 = *(uint **)(iVar8 + iVar10 + 8);
  local_84 = iVar8;
  if (local_88 == (uint *)0x0) {
LAB_017c1ec4:
    *puVar12 = 0;
    puVar12[1] = 0;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_a8 = (uint *)0x0;
    puVar12[4] = uVar4;
    puVar12[5] = iVar6;
    local_a0 = (undefined4 **)0xcc;
    local_98 = &PTR_FUN_01cf5de4;
    local_70 = param_2;
    local_6c = param_3;
    local_48 = local_88;
    local_44 = local_84;
    iVar6 = FUN_01be5878(&local_a8,0x20,0x60);
    puVar5 = local_a8;
    if ((iVar6 != 0) || (local_a8 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar11,puVar5,1,uVar13);
    if (((uint)local_a0 & 0xfe) != 4) {
      uStack_a4 = SUB41(local_9c,0);
      local_a1 = (undefined1)((uint)local_9c >> 0x18);
      local_a8 = (uint *)local_a0;
      local_a3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = &local_a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01cf6ad8);
    }
    FUN_014397e4((int)uVar13,iVar8);
    local_a0 = (undefined4 **)puVar5;
    piVar7 = (int *)thunk_FUN_01be5118(4);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *piVar7 = (int)puVar5;
    return;
  }
  do {
    uVar9 = *local_88;
    bVar2 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar2);
  *local_88 = uVar9 + 1;
  if (-1 < (int)uVar9) {
    local_84 = *(int *)(iVar8 + iVar10 + 0xc);
    do {
      uVar9 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar9 + 1;
    if (uVar9 < 0x80000000) goto LAB_017c1ec4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x17c1ec0);
  (*pcVar1)();
}

