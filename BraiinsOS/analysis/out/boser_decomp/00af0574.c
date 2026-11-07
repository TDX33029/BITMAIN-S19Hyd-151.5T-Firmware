// FUN_00af0574 @ 00af0574 size=1492 calls_out=7 calls_in=0
// strings: tempControl | fanControl

void FUN_00af0574(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_118;
  undefined4 local_114;
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
    iVar10 = param_2[1];
    local_110 = 0x80000007;
    param_2[2] = iVar10;
    uVar8 = 0;
    iVar12 = *param_2;
    iVar3 = *(int *)(iVar10 + 0x10);
    iVar4 = *(int *)(iVar3 + 0x40);
    uVar16 = CONCAT44(iVar4,iVar3);
    if (iVar4 == 10) {
      uVar16 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"fanControl",10);
      if ((int)uVar16 == 0) {
        param_2[4] = iVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_00af08f8;
      }
    }
    else if ((iVar4 == 0xb) &&
            (uVar16 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"tempControl",0xb),
            (int)uVar16 == 0)) {
      param_2[4] = iVar12;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar10;
      goto LAB_00af06c8;
    }
    goto LAB_00af0aac;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c10ae8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c10ae8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      iVar10 = param_2[5];
LAB_00af06c8:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10ae8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10ae8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ae8);
      }
      iVar12 = param_2[6];
    }
    piVar6 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar5 = param_2 + 4;
    *piVar5 = iVar12;
    iVar10 = piVar6[4];
    iVar4 = piVar6[5];
    iVar3 = piVar6[6];
    iVar13 = piVar6[7];
    iVar12 = piVar6[8];
    iVar9 = piVar6[1];
    iVar11 = piVar6[2];
    iVar14 = piVar6[3];
    *piVar7 = *piVar6;
    param_2[6] = iVar9;
    param_2[7] = iVar11;
    param_2[8] = iVar14;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar4;
    param_2[0xb] = iVar3;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar12 = piVar6[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)piVar5;
    param_2[0x31] = (int)piVar7;
    param_2[0x32] = iVar12;
LAB_00af07b4:
    iVar10 = *piVar5;
    param_2[0x2b] = (int)piVar7;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = iVar10;
    param_2[0x2c] = iVar12;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      piVar5 = (int *)param_2[0x30];
      piVar7 = (int *)param_2[0x31];
      iVar12 = param_2[0x32];
      goto LAB_00af07b4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      iVar10 = param_2[5];
LAB_00af08f8:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10ae8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10ae8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ae8);
      }
      iVar12 = param_2[6];
    }
    piVar6 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar5 = param_2 + 4;
    *piVar5 = iVar12 + 0x48;
    iVar10 = piVar6[4];
    iVar13 = piVar6[5];
    iVar11 = piVar6[6];
    iVar9 = piVar6[7];
    iVar12 = piVar6[8];
    iVar3 = piVar6[1];
    iVar4 = piVar6[2];
    iVar14 = piVar6[3];
    *piVar7 = *piVar6;
    param_2[6] = iVar3;
    param_2[7] = iVar4;
    param_2[8] = iVar14;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar13;
    param_2[0xb] = iVar11;
    param_2[0xc] = iVar9;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar12 = piVar6[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)piVar5;
    param_2[0x31] = (int)piVar7;
    param_2[0x32] = iVar12;
LAB_00af098c:
    iVar10 = *piVar5;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = iVar10;
    param_2[0x2b] = (int)piVar7;
    param_2[0x2c] = iVar12;
    goto switchD_00af0638_caseD_3;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      piVar5 = (int *)param_2[0x30];
      piVar7 = (int *)param_2[0x31];
      iVar12 = param_2[0x32];
      goto LAB_00af098c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
switchD_00af0638_caseD_3:
    piVar5 = param_2 + 0xe;
    FUN_00af15ac(&local_d0,piVar5,param_3);
    if (local_d0 == 2) {
      *(undefined1 *)(param_2 + 0x33) = 3;
      *param_1 = 2;
      uVar2 = 6;
      goto LAB_00af0ae8;
    }
    if ((char)param_2[0x2e] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(piVar5);
      }
    }
    *(undefined1 *)(param_2 + 0x33) = 1;
    local_118 = local_cc;
    local_114 = local_c8;
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
    FUN_00a9039c(piVar5);
    local_30 = local_68;
    uStack_2c = uStack_64;
    uStack_28 = uStack_60;
    local_a4 = local_80;
    uStack_a0 = uStack_7c;
    uStack_9c = uStack_78;
    if ((local_d0 & 1) == 0) {
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_a8 = local_84;
      goto LAB_00af0a9c;
    }
    local_58 = local_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    local_4c = local_84;
    uStack_98 = uStack_74;
    uStack_94 = uStack_70;
    goto LAB_00af0a78;
  }
  piVar5 = param_2 + 0xe;
  FUN_00af0cac(&local_d0,piVar5,param_3);
  if (local_d0 == 2) {
    *(undefined1 *)(param_2 + 0x33) = 3;
    *param_1 = 2;
    uVar2 = 4;
  }
  else {
    if ((char)param_2[0x2e] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(piVar5);
      }
    }
    *(undefined1 *)(param_2 + 0x33) = 1;
    local_118 = local_cc;
    local_114 = local_c8;
    local_110 = local_b8;
    FUN_00a9039c(piVar5);
    local_30 = local_c4;
    uStack_2c = uStack_c0;
    uStack_28 = uStack_bc;
    if ((local_d0 & 1) == 0) {
      local_58 = local_b4;
      uStack_54 = uStack_b0;
      uStack_50 = uStack_ac;
LAB_00af0a9c:
      uVar16 = CONCAT44(uStack_a8,local_114);
      uVar8 = 0;
      local_4c = uStack_a8;
      local_48 = local_a4;
      uStack_44 = uStack_a0;
      uStack_40 = uStack_9c;
    }
    else {
      local_58 = local_b4;
      uStack_54 = uStack_b0;
      uStack_50 = uStack_ac;
      local_4c = uStack_a8;
LAB_00af0a78:
      uVar16 = CONCAT44(local_118,local_114);
      uVar8 = 1;
      local_48 = local_a4;
      uStack_44 = uStack_a0;
      uStack_40 = uStack_9c;
      uStack_3c = uStack_98;
      uStack_38 = uStack_94;
    }
LAB_00af0aac:
    param_1[1] = (int)((ulonglong)uVar16 >> 0x20);
    param_1[2] = (int)uVar16;
    *param_1 = uVar8;
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
LAB_00af0ae8:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

