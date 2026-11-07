// FUN_00aa4c80 @ 00aa4c80 size=1212 calls_out=4 calls_in=0
// strings: exception

void FUN_00aa4c80(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int iVar13;
  undefined4 extraout_r12_00;
  int iVar14;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58 [5];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar8 = param_2[1];
    uVar7 = 0x80000007;
    param_2[2] = iVar8;
    iVar9 = *param_2;
    iVar1 = *(int *)(iVar8 + 0x10);
    if (*(int *)(iVar1 + 0x40) == 9) {
      iVar1 = thunk_FUN_01bed842(*(int *)(iVar1 + 0x3c) + 8,"exception",9);
      in_r12 = extraout_r12_00;
      if (iVar1 != 0) goto LAB_00aa507c;
      param_2[4] = iVar9;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar8;
LAB_00aa4f64:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar8;
      goto LAB_00aa4f74;
    }
    if ((*(int *)(iVar1 + 0x40) != 7) ||
       (iVar1 = thunk_FUN_01bed842(*(int *)(iVar1 + 0x3c) + 8,&DAT_005325f1,7),
       in_r12 = extraout_r12, iVar1 != 0)) goto LAB_00aa507c;
    param_2[4] = iVar9;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = iVar8;
LAB_00aa4db8:
    param_2[6] = iVar9;
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[7] = iVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22338);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22338);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar8 = param_2[5];
      goto LAB_00aa4db8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22338);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22338);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22338);
      }
      iVar9 = param_2[6];
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar2 = (int *)param_2[0xe];
      piVar6 = (int *)param_2[0xf];
      iVar8 = param_2[0x10];
      goto LAB_00aa4eb4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar9 = param_2[0x11];
    }
    goto LAB_00aa4ee0;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar8 = param_2[5];
      goto LAB_00aa4f64;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22338);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22338);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22338);
      }
      iVar9 = param_2[6];
    }
LAB_00aa4f74:
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar6 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar2 = param_2 + 4;
    *piVar2 = iVar9 + 0xc;
    iVar9 = piVar5[8];
    iVar8 = piVar5[4];
    iVar12 = piVar5[5];
    iVar11 = piVar5[6];
    iVar10 = piVar5[7];
    iVar1 = piVar5[1];
    iVar13 = piVar5[2];
    iVar14 = piVar5[3];
    *piVar6 = *piVar5;
    param_2[6] = iVar1;
    param_2[7] = iVar13;
    param_2[8] = iVar14;
    param_2[9] = iVar8 + 0x20;
    param_2[0xc] = iVar10;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_2[10] = iVar12;
    param_2[0xb] = iVar11;
    iVar8 = piVar5[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar2;
    param_2[0xf] = (int)piVar6;
    param_2[0x10] = iVar8;
LAB_00aa4ff4:
    iVar9 = *piVar2;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar9;
    param_2[0x12] = (int)piVar6;
    param_2[0x13] = iVar8;
    goto LAB_00aa500c;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar2 = (int *)param_2[0xe];
      piVar6 = (int *)param_2[0xf];
      iVar8 = param_2[0x10];
      goto LAB_00aa4ff4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar9 = param_2[0x11];
    }
LAB_00aa500c:
    FUN_006666fc(local_58,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
    puVar3 = (undefined4 *)((uint)local_58 | 4);
    local_90 = *puVar3;
    uStack_8c = puVar3[1];
    uStack_88 = puVar3[2];
    puVar3 = &local_b0;
    local_b0 = local_44;
    uStack_ac = uStack_40;
    uStack_a8 = uStack_3c;
    local_a4 = local_38;
    uStack_a0 = uStack_34;
    uStack_9c = uStack_30;
    uStack_98 = uStack_2c;
    in_r12 = local_58[0];
    goto LAB_00aa5054;
  }
  piVar5 = (int *)param_2[2];
  *(undefined1 *)(param_2 + 9) = 1;
  piVar6 = param_2 + 5;
  *(undefined1 *)(param_2 + 8) = 1;
  piVar2 = param_2 + 4;
  *piVar2 = iVar9;
  iVar9 = piVar5[8];
  iVar8 = piVar5[4];
  iVar12 = piVar5[5];
  iVar11 = piVar5[6];
  iVar10 = piVar5[7];
  iVar1 = piVar5[1];
  iVar13 = piVar5[2];
  iVar14 = piVar5[3];
  *piVar6 = *piVar5;
  param_2[6] = iVar1;
  param_2[7] = iVar13;
  param_2[8] = iVar14;
  param_2[9] = iVar8 + 0x20;
  param_2[0xc] = iVar10;
  *(char *)(param_2 + 0xd) = (char)iVar9;
  param_2[10] = iVar12;
  param_2[0xb] = iVar11;
  iVar8 = piVar5[4];
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0xe] = (int)piVar2;
  param_2[0xf] = (int)piVar6;
  param_2[0x10] = iVar8;
LAB_00aa4eb4:
  iVar9 = *piVar2;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x11] = iVar9;
  param_2[0x12] = (int)piVar6;
  param_2[0x13] = iVar8;
LAB_00aa4ee0:
  FUN_006666fc(local_58,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
  puVar4 = (undefined4 *)((uint)local_58 | 4);
  puVar3 = &local_d0;
  local_90 = *puVar4;
  uStack_8c = puVar4[1];
  uStack_88 = puVar4[2];
  local_d0 = local_44;
  uStack_cc = uStack_40;
  uStack_c8 = uStack_3c;
  local_c4 = local_38;
  uStack_c0 = uStack_34;
  uStack_bc = uStack_30;
  uStack_b8 = uStack_2c;
  in_r12 = local_58[0];
LAB_00aa5054:
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x15) = 1;
  uStack_78 = puVar3[2];
  local_80 = *puVar3;
  uStack_7c = puVar3[1];
  local_74 = puVar3[3];
  local_70 = puVar3[4];
  uStack_6c = puVar3[5];
  uStack_68 = puVar3[6];
  uVar7 = 0x80000002;
LAB_00aa507c:
  *param_1 = 0;
  param_1[2] = in_r12;
  param_1[3] = local_90;
  param_1[4] = uStack_8c;
  param_1[5] = uStack_88;
  param_1[6] = uVar7;
  param_1[7] = local_80;
  param_1[8] = uStack_7c;
  param_1[9] = uStack_78;
  param_1[10] = local_74;
  param_1[0xb] = local_70;
  param_1[0xc] = uStack_6c;
  param_1[0xd] = uStack_68;
  param_1[0xe] = uStack_64;
  param_1[0xf] = uStack_60;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

