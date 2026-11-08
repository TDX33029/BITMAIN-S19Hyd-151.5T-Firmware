// FUN_0103bf48 @ 0103bf48 size=1688 calls_out=4 calls_in=0
// strings: label | offset

void FUN_0103bf48(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int iVar13;
  undefined4 extraout_r12_00;
  int iVar14;
  int *local_f4;
  undefined4 local_f0 [30];
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
    iVar8 = *param_2;
    iVar10 = param_2[1];
    uVar9 = 0x80000007;
    param_2[2] = iVar10;
    iVar1 = *(int *)(iVar10 + 0x10);
    iVar5 = *(int *)(iVar1 + 0x40);
    if (iVar5 == 2) {
      if (*(short *)(*(int *)(iVar1 + 0x3c) + 8) != 0x6469) goto LAB_0103c480;
      param_2[4] = iVar8;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar10;
LAB_0103c148:
      param_2[6] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      goto LAB_0103c378;
    }
    if (iVar5 == 6) {
      iVar1 = thunk_FUN_01bed842(*(int *)(iVar1 + 0x3c) + 8,"offset",6);
      in_r12 = extraout_r12_00;
      if (iVar1 != 0) goto LAB_0103c480;
      param_2[4] = iVar8;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar10;
      goto LAB_0103c08c;
    }
    if ((iVar5 != 5) ||
       (iVar1 = thunk_FUN_01bed842(*(int *)(iVar1 + 0x3c) + 8,"label",5), in_r12 = extraout_r12,
       iVar1 != 0)) goto LAB_0103c480;
    param_2[4] = iVar8;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = iVar10;
LAB_0103c0d0:
    param_2[6] = iVar8;
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[7] = iVar10;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22640);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22640);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar10 = param_2[5];
      goto LAB_0103c0d0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22640);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22640);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22640);
      }
      iVar8 = param_2[6];
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar2 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_0103c2f0;
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
      iVar8 = param_2[0x11];
    }
    goto LAB_0103c31c;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar10 = param_2[5];
LAB_0103c08c:
      param_2[6] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22640);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22640);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22640);
      }
      iVar8 = param_2[6];
    }
    local_f4 = param_2 + 4;
    piVar2 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0xc;
    iVar10 = piVar2[7];
    iVar1 = piVar2[4];
    iVar12 = piVar2[5];
    iVar11 = piVar2[6];
    iVar8 = piVar2[8];
    iVar5 = piVar2[1];
    iVar13 = piVar2[2];
    iVar14 = piVar2[3];
    *piVar7 = *piVar2;
    param_2[6] = iVar5;
    param_2[7] = iVar13;
    param_2[8] = iVar14;
    param_2[9] = iVar1 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    param_2[10] = iVar12;
    param_2[0xb] = iVar11;
    param_2[0xc] = iVar10;
    iVar10 = piVar2[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_f4;
    param_2[0xf] = (int)piVar7;
    param_2[0x10] = iVar10;
LAB_0103c214:
    iVar8 = *local_f4;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar8;
    param_2[0x12] = (int)piVar7;
    param_2[0x13] = iVar10;
    goto LAB_0103c22c;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_f4 = (int *)param_2[0xe];
      piVar7 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_0103c214;
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
      iVar8 = param_2[0x11];
    }
LAB_0103c22c:
    FUN_006666fc(local_58,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    puVar3 = (undefined4 *)((uint)local_58 | 4);
    local_f0[0x18] = *puVar3;
    local_f0[0x19] = puVar3[1];
    local_f0[0x1a] = puVar3[2];
    puVar3 = local_f0 + 8;
LAB_0103c444:
    *puVar3 = local_44;
    puVar3[1] = uStack_40;
    puVar3[2] = uStack_3c;
    puVar3[3] = local_38;
    puVar3[4] = uStack_34;
    puVar3[5] = uStack_30;
    puVar3[6] = uStack_2c;
    in_r12 = local_58[0];
    goto LAB_0103c458;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar10 = param_2[5];
      goto LAB_0103c148;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22640);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22640);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22640);
      }
      iVar8 = param_2[6];
    }
LAB_0103c378:
    local_f4 = param_2 + 4;
    piVar2 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0x18;
    iVar8 = piVar2[8];
    iVar10 = piVar2[4];
    iVar12 = piVar2[5];
    iVar11 = piVar2[6];
    iVar5 = piVar2[7];
    iVar1 = piVar2[1];
    iVar13 = piVar2[2];
    iVar14 = piVar2[3];
    *piVar7 = *piVar2;
    param_2[6] = iVar1;
    param_2[7] = iVar13;
    param_2[8] = iVar14;
    param_2[9] = iVar10 + 0x20;
    param_2[0xc] = iVar5;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    param_2[10] = iVar12;
    param_2[0xb] = iVar11;
    iVar10 = piVar2[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_f4;
    param_2[0xf] = (int)piVar7;
    param_2[0x10] = iVar10;
LAB_0103c3f8:
    iVar8 = *local_f4;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar8;
    param_2[0x12] = (int)piVar7;
    param_2[0x13] = iVar10;
    goto LAB_0103c410;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_f4 = (int *)param_2[0xe];
      piVar7 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_0103c3f8;
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
      iVar8 = param_2[0x11];
    }
LAB_0103c410:
    FUN_006666fc(local_58,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    puVar3 = (undefined4 *)((uint)local_58 | 4);
    local_f0[0x18] = *puVar3;
    local_f0[0x19] = puVar3[1];
    local_f0[0x1a] = puVar3[2];
    puVar3 = local_f0 + 0x10;
    goto LAB_0103c444;
  }
  piVar4 = (int *)param_2[2];
  *(undefined1 *)(param_2 + 9) = 1;
  piVar2 = param_2 + 5;
  *(undefined1 *)(param_2 + 8) = 1;
  piVar7 = param_2 + 4;
  *piVar7 = iVar8;
  iVar10 = piVar4[7];
  iVar1 = piVar4[4];
  iVar12 = piVar4[5];
  iVar11 = piVar4[6];
  iVar8 = piVar4[8];
  iVar5 = piVar4[1];
  iVar13 = piVar4[2];
  iVar14 = piVar4[3];
  *piVar2 = *piVar4;
  param_2[6] = iVar5;
  param_2[7] = iVar13;
  param_2[8] = iVar14;
  param_2[9] = iVar1 + 0x20;
  *(char *)(param_2 + 0xd) = (char)iVar8;
  param_2[10] = iVar12;
  param_2[0xb] = iVar11;
  param_2[0xc] = iVar10;
  iVar10 = piVar4[4];
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0xe] = (int)piVar7;
  param_2[0xf] = (int)piVar2;
  param_2[0x10] = iVar10;
LAB_0103c2f0:
  iVar8 = *piVar7;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x11] = iVar8;
  param_2[0x12] = (int)piVar2;
  param_2[0x13] = iVar10;
LAB_0103c31c:
  FUN_006666fc(local_58,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
  puVar6 = (undefined4 *)((uint)local_58 | 4);
  puVar3 = local_f0;
  local_f0[0x18] = *puVar6;
  local_f0[0x19] = puVar6[1];
  local_f0[0x1a] = puVar6[2];
  local_f0[0] = local_44;
  local_f0[1] = uStack_40;
  local_f0[2] = uStack_3c;
  local_f0[3] = local_38;
  local_f0[4] = uStack_34;
  local_f0[5] = uStack_30;
  local_f0[6] = uStack_2c;
  in_r12 = local_58[0];
LAB_0103c458:
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x15) = 1;
  uStack_78 = puVar3[2];
  local_f0[0x1c] = *puVar3;
  local_f0[0x1d] = puVar3[1];
  local_74 = puVar3[3];
  local_70 = puVar3[4];
  uStack_6c = puVar3[5];
  uStack_68 = puVar3[6];
  uVar9 = 0x80000002;
LAB_0103c480:
  *param_1 = 0;
  param_1[2] = in_r12;
  param_1[3] = local_f0[0x18];
  param_1[4] = local_f0[0x19];
  param_1[5] = local_f0[0x1a];
  param_1[6] = uVar9;
  param_1[7] = local_f0[0x1c];
  param_1[8] = local_f0[0x1d];
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

