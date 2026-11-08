// FUN_00fb06d4 @ 00fb06d4 size=1012 calls_out=10 calls_in=0
// strings: background task failed

void FUN_00fb06d4(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *local_104;
  undefined4 *local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x55)) {
  case 0:
    param_2[0x11] = 0x1b6;
    param_2[0x12] = 0;
    *(undefined1 *)(param_2 + 0x12) = 1;
    iVar5 = param_2[0x14];
    puVar7 = param_2 + 0x10;
    *puVar7 = 0;
    *param_2 = puVar7;
    *(undefined2 *)(param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[1] = iVar5;
    *(undefined1 *)(param_2 + 0xf) = 0;
LAB_00fb0770:
    *(undefined1 *)((int)param_2 + 0x39) = 0;
    param_2[0xc] = puVar7;
    param_2[0xd] = iVar5;
LAB_00fb0784:
    param_2[2] = iVar5;
    *(undefined1 *)(param_2 + 0xe) = 0;
    FUN_019afae4(&local_f8,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    *(undefined1 *)(param_2 + 0xe) = 1;
    local_dc = *puVar7;
    local_d8 = puVar7[1];
    uStack_d4 = puVar7[2];
    local_d0 = puVar7[3];
    *(undefined1 *)(param_2 + 0xe) = 0;
    local_e8 = local_f8;
    local_e4 = uStack_f4;
    local_e0 = uStack_f0;
    param_2[3] = local_f8;
    param_2[4] = uStack_f4;
    param_2[5] = uStack_f0;
    param_2[6] = local_dc;
    param_2[7] = local_d8;
    param_2[8] = uStack_d4;
    param_2[9] = local_d0;
    param_2[10] = uStack_cc;
    *(undefined1 *)(param_2 + 0xb) = 0;
switchD_00fb0a10_caseD_0:
    local_70 = param_2[3];
    uStack_6c = param_2[4];
    uStack_68 = param_2[5];
    local_64 = param_2[6];
    uStack_60 = param_2[7];
    uStack_5c = param_2[8];
    uStack_58 = param_2[9];
    uVar3 = FUN_014b3c1c(&local_70,&DAT_01c230d0);
    param_2[10] = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2045c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2045c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      puVar7 = (uint *)*param_2;
      iVar5 = param_2[1];
      goto LAB_00fb0770;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2041c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2041c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x39)) {
    case 0:
      puVar7 = (uint *)param_2[0xc];
      iVar5 = param_2[0xd];
      goto LAB_00fb0784;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2042c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2042c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      goto switchD_00fb0a10_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar3 = param_2[10];
    }
  }
  local_100 = param_2 + 0xb;
  local_104 = param_2 + 0xf;
  FUN_00748cc4(&local_40,uVar3,param_3);
  if ((local_40 & 1) == 0) {
    local_50 = local_38;
    local_4c = iStack_34;
    local_48 = uStack_30;
    local_44 = uStack_2c;
    piVar4 = (int *)param_2[10];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00fb08e0;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00fb08e0:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_50 == 0 && local_4c == 0) {
      uVar9 = local_48 >> 8 | local_44 << 0x18;
      local_40 = local_48;
      local_3c = local_44;
    }
    else {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      FUN_00fb1280(&local_50);
      uVar9 = local_40 >> 8 | local_3c << 0x18;
    }
    uVar8 = local_40 & 0xff;
    *(undefined1 *)local_100 = 1;
    if (uVar8 == 5) goto LAB_00fb096c;
    FUN_005f53e0(param_2 + 3);
    uVar6 = uVar9 >> 0x18 | local_3c & 0xffffff00;
    if (uVar8 == 4) {
      FUN_019e69d4(&local_e8);
      local_a8 = local_e0;
      uStack_a4 = local_dc;
      uStack_a0 = local_d8;
      uStack_9c = uStack_d4;
      local_98 = local_d0;
      uStack_94 = uStack_cc;
      uStack_90 = uStack_c8;
      uStack_8c = uStack_c4;
      local_88 = local_c0;
      uStack_84 = uStack_bc;
      uStack_80 = uStack_b8;
      uStack_7c = uStack_b4;
      uStack_78 = uStack_b0;
      uVar6 = local_e4;
      uVar8 = local_e8;
    }
    else {
      uVar8 = uVar8 | uVar9 << 8;
      local_ac = 0;
    }
    param_1[3] = uVar6;
    *(undefined1 *)(param_2 + 0xe) = 0;
    param_1[2] = uVar8;
    param_1[4] = local_a8;
    param_1[5] = uStack_a4;
    param_1[6] = uStack_a0;
    param_1[7] = uStack_9c;
    param_1[8] = local_98;
    param_1[9] = uStack_94;
    param_1[10] = uStack_90;
    param_1[0xb] = uStack_8c;
    param_1[0xc] = local_88;
    param_1[0xd] = uStack_84;
    param_1[0xe] = uStack_80;
    param_1[0xf] = uStack_7c;
    param_1[0x10] = uStack_78;
    *param_1 = 0;
    uVar9 = *param_1;
    param_1[1] = 0;
    param_1[0x11] = local_ac;
    *(undefined1 *)((int)param_2 + 0x39) = 1;
    *(undefined1 *)(param_2 + 0xf) = 1;
    if ((uVar9 & 1) == 0) {
      FUN_00740564(param_2);
      *(undefined1 *)(param_2 + 0x15) = 0;
      uVar2 = 1;
      goto LAB_00fb0990;
    }
  }
  else {
    *(undefined1 *)local_100 = 3;
LAB_00fb096c:
    *(undefined1 *)((int)param_2 + 0x39) = 3;
    *(undefined1 *)local_104 = 3;
  }
  *param_1 = 1;
  param_1[1] = 0;
  uVar2 = 3;
LAB_00fb0990:
  *(undefined1 *)((int)param_2 + 0x55) = uVar2;
  return;
}

