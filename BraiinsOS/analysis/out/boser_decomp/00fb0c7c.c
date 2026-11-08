// FUN_00fb0c7c @ 00fb0c7c size=984 calls_out=13 calls_in=0
// strings: background task failed

void FUN_00fb0c7c(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint **ppuVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int local_1e8;
  undefined4 **local_1e4;
  int local_1e0;
  undefined1 auStack_1dc [100];
  undefined1 auStack_178 [104];
  undefined8 local_110;
  undefined4 **local_108;
  undefined1 uStack_104;
  undefined2 local_103;
  undefined1 local_101;
  uint **local_100;
  code *local_fc;
  undefined *local_f8;
  uint *local_e8;
  int local_e4;
  undefined4 local_d8;
  int *local_d0;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  int local_4c;
  
  uVar14 = CONCAT44(local_110._4_4_,(undefined4)local_110);
  puVar11 = (undefined4 *)((uint)&local_100 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[4]) {
  case '\0':
    piVar9 = *(int **)(*param_2 + 0x3c);
    do {
      iVar7 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_00fb0df8;
    param_2[1] = (int)piVar9;
    *(undefined1 *)(param_2 + 3) = 0;
LAB_00fb0d38:
    uVar14 = FUN_019ef7f4(&DAT_01c230d0);
    local_e4 = (int)(uVar14 >> 0x20);
    iVar7 = 0x218;
    if ((uVar14 & 1) != 0) {
      iVar7 = 0x148;
    }
    uVar6 = *(undefined4 *)(local_e4 + iVar7);
    do {
      do {
        iVar7 = DAT_01d50474;
        uVar4 = DAT_01d50470;
        uVar12 = DAT_01d50470 + 1;
        iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar12;
      DAT_01d50474 = iVar13;
    } while (bVar2 && bVar3);
    iVar13 = 0x200;
    if ((uVar14 & 1) != 0) {
      iVar13 = 0x138;
    }
    local_e4 = local_e4 + iVar13;
    local_e8 = *(uint **)(local_e4 + 8);
    if (local_e8 != (uint *)0x0) {
      do {
        uVar12 = *local_e8;
        bVar2 = (bool)hasExclusiveAccess(local_e8);
      } while (!bVar2);
      *local_e8 = uVar12 + 1;
      if ((int)uVar12 < 0) {
LAB_00fb0df8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xfb0df8);
        local_110 = uVar14;
        (*pcVar1)();
      }
      local_e4 = *(int *)(local_e4 + 0xc);
      do {
        uVar12 = *local_e8;
        bVar2 = (bool)hasExclusiveAccess(local_e8);
      } while (!bVar2);
      *local_e8 = uVar12 + 1;
      if (0x7fffffff < uVar12) goto LAB_00fb0df8;
    }
    local_100 = (undefined4 **)0xcc;
    local_f8 = &DAT_01c1a79c;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[4] = uVar4;
    puVar11[5] = iVar7;
    local_d8 = 0;
    local_fc = (code *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_108 = (undefined4 **)0x0;
    local_d0 = piVar9;
    local_50 = local_e8;
    local_4c = local_e4;
    local_110 = uVar14;
    iVar7 = FUN_01be5878(&local_108,0x20,0xc0);
    ppuVar10 = local_108;
    if ((iVar7 != 0) || (local_108 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_108,&local_100,0xc0);
    FUN_019f02d4(&local_100,uVar6,ppuVar10,1,uVar14);
    if (((uint)local_100 & 0xfe) != 4) {
      uStack_104 = SUB41(local_fc,0);
      local_101 = (undefined1)((uint)local_fc >> 0x18);
      local_108 = local_100;
      local_103 = (undefined2)((uint)local_fc >> 8);
      local_fc = FUN_019a7d7c;
      local_100 = (uint **)&local_108;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_100,&DAT_01c230d0);
    }
    FUN_00668d74(&local_110);
    param_2[2] = (int)ppuVar10;
    uVar14 = local_110;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1b7ac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1b7ac);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[3]) {
    case '\0':
      piVar9 = (int *)param_2[1];
      goto LAB_00fb0d38;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case '\x03':
      ppuVar10 = (undefined4 **)param_2[2];
    }
  }
  local_110 = uVar14;
  FUN_014b4d60(&local_100,ppuVar10,param_3);
  if (local_100 == (undefined4 **)0x3) {
    uVar8 = 3;
    *(undefined1 *)(param_2 + 3) = 3;
    *param_1 = 2;
    goto LAB_00fb0fcc;
  }
  FUN_01bed4e2(&local_1e8,&local_100,0x70);
  piVar9 = (int *)param_2[2];
  if (*piVar9 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar9);
    if (!bVar2) goto LAB_00fb0f48;
    *piVar9 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00fb0f48:
    (**(code **)(piVar9[2] + 0x10))();
  }
  if (local_1e8 == 2) {
    FUN_019a18a8(&local_100,0x28,"background task failed",0x16);
    pcVar1 = local_fc;
    ppuVar5 = local_100;
    FUN_00fb125c(&local_1e8);
    local_1e8 = 1;
    local_1e4 = ppuVar5;
    local_1e0 = (int)pcVar1;
  }
  else {
    FUN_01bed4e2(auStack_178,auStack_1dc,100);
  }
  *param_1 = local_1e8;
  param_1[1] = (int)local_1e4;
  param_1[2] = local_1e0;
  FUN_01bed4e2(param_1 + 3,auStack_178,100);
  uVar8 = 1;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_00741144(param_2 + 1);
LAB_00fb0fcc:
  *(undefined1 *)(param_2 + 4) = uVar8;
  return;
}

