// FUN_00dd12c4 @ 00dd12c4 size=1204 calls_out=5 calls_in=0
// strings: configLinks | systemLinks

void FUN_00dd12c4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 local_118;
  int *local_114;
  undefined4 local_110;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar7 = *param_2;
    iVar9 = param_2[1];
    local_110 = 0x80000007;
    uVar5 = 0;
    param_2[2] = iVar9;
    iVar6 = *(int *)(iVar9 + 0x10);
    uVar14 = CONCAT44(&switchD_00dd12e0::switchdataD_00dd12e4,*(int *)(iVar6 + 0x40));
    if (*(int *)(iVar6 + 0x40) == 0xb) {
      iVar3 = thunk_FUN_01bed842(*(int *)(iVar6 + 0x3c) + 8,"configLinks",0xb);
      if (iVar3 == 0) {
        param_2[4] = iVar7;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar9;
        goto LAB_00dd1574;
      }
      uVar14 = thunk_FUN_01bed842(*(int *)(iVar6 + 0x3c) + 8,"systemLinks",0xb);
      if ((int)uVar14 == 0) {
        param_2[4] = iVar7;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar9;
        goto LAB_00dd139c;
      }
    }
    goto LAB_00dd16e0;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c169b4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c169b4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar7 = param_2[4];
      iVar9 = param_2[5];
LAB_00dd1574:
      param_2[6] = iVar7;
      param_2[7] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c169b4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c169b4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c169b4);
      }
      iVar7 = param_2[6];
    }
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar7;
    iVar9 = piVar4[4];
    iVar12 = piVar4[5];
    iVar6 = piVar4[6];
    iVar10 = piVar4[7];
    iVar7 = piVar4[8];
    iVar3 = piVar4[1];
    iVar8 = piVar4[2];
    iVar11 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar3;
    param_2[7] = iVar8;
    param_2[8] = iVar11;
    param_2[9] = iVar9 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar6;
    param_2[0xc] = iVar10;
    *(char *)(param_2 + 0xd) = (char)iVar7;
    iVar7 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar7;
  case '\x04':
    FUN_00dd1878(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == 2) {
      *param_1 = 2;
      uVar2 = 4;
      goto LAB_00dd171c;
    }
    local_118 = local_cc;
    local_114 = (int *)local_c8;
    local_110 = local_b8;
    cVar1 = (char)param_2[0x2d];
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = (char)param_2[0x29];
    }
    if (bVar13 && cVar1 == '\x03') {
      FUN_00dd2148(param_2 + 0xe);
    }
    local_30 = local_c4;
    uStack_2c = uStack_c0;
    uStack_28 = uStack_bc;
    local_80 = local_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    if ((local_d0 & 1) == 0) {
      local_58 = local_b4;
      uStack_54 = uStack_b0;
      uStack_50 = uStack_ac;
      local_84 = uStack_a8;
      goto LAB_00dd16d0;
    }
    local_58 = local_b4;
    uStack_54 = uStack_b0;
    uStack_50 = uStack_ac;
    local_4c = uStack_a8;
    uStack_74 = uStack_98;
    uStack_70 = uStack_94;
    goto LAB_00dd16ac;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar7 = param_2[4];
      iVar9 = param_2[5];
LAB_00dd139c:
      param_2[6] = iVar7;
      param_2[7] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c169b4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c169b4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c169b4);
      }
      iVar7 = param_2[6];
    }
    local_114 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar7 + 0xc;
    iVar10 = piVar4[4];
    iVar12 = piVar4[5];
    iVar8 = piVar4[6];
    iVar3 = piVar4[7];
    iVar7 = piVar4[8];
    iVar9 = piVar4[1];
    iVar6 = piVar4[2];
    iVar11 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar9;
    param_2[7] = iVar6;
    param_2[8] = iVar11;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar8;
    param_2[0xc] = iVar3;
    *(char *)(param_2 + 0xd) = (char)iVar7;
    iVar7 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_114;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar7;
  }
  FUN_00dd1878(&local_d0,param_2 + 0xe,param_3);
  if (local_d0 == 2) {
    *param_1 = 2;
    uVar2 = 6;
  }
  else {
    local_118 = local_cc;
    local_114 = (int *)local_c8;
    local_68 = local_c4;
    uStack_64 = uStack_c0;
    uStack_60 = uStack_bc;
    local_110 = local_b8;
    local_90 = local_b4;
    uStack_8c = uStack_b0;
    uStack_88 = uStack_ac;
    local_84 = uStack_a8;
    local_80 = local_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    uStack_74 = uStack_98;
    uStack_70 = uStack_94;
    cVar1 = (char)param_2[0x2d];
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = (char)param_2[0x29];
    }
    if (bVar13 && cVar1 == '\x03') {
      FUN_00dd2148(param_2 + 0xe);
    }
    local_30 = local_68;
    uStack_2c = uStack_64;
    uStack_28 = uStack_60;
    if ((local_d0 & 1) == 0) {
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
LAB_00dd16d0:
      uVar14 = CONCAT44(local_84,local_114);
      uVar5 = 0;
      local_4c = local_84;
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
    }
    else {
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      local_4c = local_84;
LAB_00dd16ac:
      uVar14 = CONCAT44(local_118,local_114);
      uVar5 = 1;
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
      uStack_38 = uStack_70;
    }
LAB_00dd16e0:
    param_1[1] = (int)((ulonglong)uVar14 >> 0x20);
    param_1[2] = (int)uVar14;
    *param_1 = uVar5;
    param_1[3] = local_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    param_1[6] = local_110;
    param_1[7] = local_58;
    param_1[8] = uStack_54;
    param_1[9] = uStack_50;
    param_1[10] = local_4c;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_44;
    param_1[0xd] = uStack_40;
    param_1[0xe] = uStack_3c;
    param_1[0xf] = uStack_38;
    uVar2 = 1;
  }
LAB_00dd171c:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

