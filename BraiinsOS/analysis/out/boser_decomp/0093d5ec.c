// FUN_0093d5ec @ 0093d5ec size=2136 calls_out=5 calls_in=0
// strings: indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | invalidUrl | invalidUser

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0093d5ec(undefined4 *param_1,int *param_2,undefined4 *****param_3,undefined4 *****param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *****extraout_r3;
  undefined4 *****extraout_r3_00;
  undefined4 *****extraout_r3_01;
  undefined4 *****extraout_r3_02;
  undefined4 *****pppppuVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *unaff_r9;
  int iVar11;
  undefined4 *****pppppuVar12;
  int iVar13;
  int in_r12;
  int extraout_r12;
  int iVar14;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  int unaff_lr;
  int iVar15;
  int local_90;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 local_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 *****local_68;
  int local_64;
  undefined4 *****local_60;
  int local_5c;
  undefined4 *****local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *****local_30;
  int *local_2c;
  
  pppppuVar5 = &local_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar3 = param_2[1];
    uVar6 = 0x80000007;
    param_2[2] = iVar3;
    pppppuVar12 = (undefined4 *****)0x0;
    iVar9 = *param_2;
    iVar4 = *(int *)(iVar3 + 0x10);
    param_3 = (undefined4 *****)(*(int *)(iVar4 + 0x40) + -5);
    switch(param_3) {
    case (undefined4 *****)0x0:
      unaff_lr = 0x93d6b4;
      param_3 = (undefined4 *****)
                thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,
                                   "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                                   ,5);
      param_4 = extraout_r3;
      in_r12 = extraout_r12;
      if (param_3 == (undefined4 *****)0x0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar3;
        goto LAB_0093d788;
      }
      break;
    case (undefined4 *****)0x2:
      unaff_lr = 0x93dd18;
      param_3 = (undefined4 *****)thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,&DAT_005325f1,7);
      param_4 = extraout_r3_01;
      in_r12 = extraout_r12_02;
      if (param_3 == (undefined4 *****)0x0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar3;
        goto LAB_0093d848;
      }
      break;
    case (undefined4 *****)0x5:
      unaff_lr = 0x93dcd8;
      param_3 = (undefined4 *****)thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"invalidUrl",10);
      param_4 = extraout_r3_00;
      in_r12 = extraout_r12_01;
      if (param_3 == (undefined4 *****)0x0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar3;
        goto LAB_0093d7d0;
      }
      break;
    case (undefined4 *****)0x6:
      unaff_lr = 0x93dd58;
      param_3 = (undefined4 *****)thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"invalidUser",0xb);
      param_4 = extraout_r3_02;
      in_r12 = extraout_r12_03;
      if (param_3 == (undefined4 *****)0x0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar3;
        goto LAB_0093d710;
      }
    }
    goto switchD_0093d67c_caseD_1;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c223d8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c223d8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar3 = param_2[5];
LAB_0093d788:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223d8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223d8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223d8);
      }
      iVar9 = param_2[6];
    }
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    unaff_r9 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar9;
    iVar9 = piVar8[8];
    iVar3 = piVar8[4];
    iVar11 = piVar8[5];
    iVar4 = piVar8[6];
    pppppuVar5 = (undefined4 *****)piVar8[7];
    iVar10 = piVar8[1];
    in_r12 = piVar8[2];
    unaff_lr = piVar8[3];
    *unaff_r9 = *piVar8;
    param_2[6] = iVar10;
    param_2[7] = in_r12;
    param_2[8] = unaff_lr;
    param_2[9] = iVar3 + 0x20;
    param_2[10] = iVar11;
    param_2[0xb] = iVar4;
    param_2[0xc] = (int)pppppuVar5;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_3 = (undefined4 *****)piVar8[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)unaff_r9;
    param_2[0x10] = (int)param_3;
LAB_0093d9e8:
    piVar7 = (int *)*piVar7;
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[0x11] = (int)piVar7;
    param_2[0x12] = (int)unaff_r9;
    param_2[0x13] = (int)param_3;
LAB_0093da04:
    param_2[0x14] = (int)unaff_r9;
    if (*piVar7 == 1) {
      piVar7 = piVar7 + 1;
      *(undefined1 *)(param_2 + 0x18) = 0;
      param_2[0x15] = (int)piVar7;
      param_2[0x16] = (int)unaff_r9;
      param_2[0x17] = param_2[0x13];
      goto LAB_0093dc88;
    }
    uVar6 = 0x80000000;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      unaff_r9 = (int *)param_2[0xf];
      param_3 = (undefined4 *****)param_2[0x10];
      goto LAB_0093d9e8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x19]) {
    case '\0':
      piVar7 = (int *)param_2[0x11];
      unaff_r9 = (int *)param_2[0x12];
      goto LAB_0093da04;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    case '\x03':
      if ((char)param_2[0x18] != '\0') {
        if ((char)param_2[0x18] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c2c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c2c);
      }
      piVar7 = (int *)param_2[0x15];
    }
LAB_0093dc88:
    param_3 = (undefined4 *****)*piVar7;
    unaff_lr = 0;
    uVar6 = 0x80000001;
    *(undefined1 *)(param_2 + 0x18) = 1;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar3 = param_2[5];
LAB_0093d848:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223d8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223d8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223d8);
      }
      iVar9 = param_2[6];
    }
    piVar2 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar9 + 8;
    iVar9 = piVar2[8];
    iVar11 = piVar2[4];
    iVar4 = piVar2[5];
    iVar3 = piVar2[6];
    unaff_r9 = (int *)piVar2[7];
    iVar10 = piVar2[1];
    iVar13 = piVar2[2];
    iVar14 = piVar2[3];
    *piVar8 = *piVar2;
    param_2[6] = iVar10;
    param_2[7] = iVar13;
    param_2[8] = iVar14;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar4;
    param_2[0xb] = iVar3;
    param_2[0xc] = (int)unaff_r9;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    iVar3 = piVar2[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)piVar8;
    param_2[0x10] = iVar3;
LAB_0093dc00:
    iVar9 = *piVar7;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar9;
    param_2[0x12] = (int)piVar8;
    param_2[0x13] = iVar3;
    goto LAB_0093dc18;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar8 = (int *)param_2[0xf];
      iVar3 = param_2[0x10];
      goto LAB_0093dc00;
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
LAB_0093dc18:
    FUN_006666fc(&local_68,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
    local_90 = local_64;
    pppppuVar12 = (undefined4 *****)0x0;
    local_88 = local_54;
    uStack_84 = local_50;
    iStack_80 = local_4c;
    local_7c = local_48;
    iStack_78 = iStack_44;
    uStack_74 = local_40;
    iStack_70 = iStack_3c;
    uVar6 = 0x80000002;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    param_3 = local_60;
    param_4 = local_68;
    pppppuVar5 = local_60;
    in_r12 = extraout_r12_00;
    unaff_lr = local_5c;
    goto switchD_0093d67c_caseD_1;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar3 = param_2[5];
LAB_0093d7d0:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223d8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223d8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223d8);
      }
      iVar9 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9 + 0x14;
    iVar3 = piVar7[5];
    iVar4 = piVar7[4];
    iVar13 = piVar7[6];
    iVar11 = piVar7[7];
    iVar9 = piVar7[8];
    iVar10 = piVar7[1];
    iVar14 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar14;
    param_2[8] = iVar15;
    param_2[9] = iVar4 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_2[10] = iVar3;
    param_2[0xb] = iVar13;
    param_2[0xc] = iVar11;
    iVar9 = piVar7[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar9;
  case '\b':
    FUN_011adb38(&local_68,param_2 + 0xe);
    if (local_68 == (undefined4 *****)0x2) {
      *param_1 = 2;
      uVar1 = 8;
      goto LAB_0093dda0;
    }
    unaff_lr = local_54;
LAB_0093db24:
    local_7c = local_40;
    iStack_78 = iStack_3c;
    uStack_74 = uStack_38;
    iStack_70 = iStack_34;
    param_3 = local_58;
    param_4 = local_60;
    pppppuVar5 = local_30;
    uVar6 = local_50;
    unaff_r9 = local_2c;
    pppppuVar12 = local_68;
    in_r12 = local_64;
    local_90 = local_5c;
    local_88 = local_4c;
    uStack_84 = local_48;
    iStack_80 = iStack_44;
    goto switchD_0093d67c_caseD_1;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar3 = param_2[5];
LAB_0093d710:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223d8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223d8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223d8);
      }
      iVar9 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9 + 0x20;
    iVar3 = piVar7[5];
    iVar4 = piVar7[4];
    iVar13 = piVar7[6];
    iVar11 = piVar7[7];
    iVar9 = piVar7[8];
    iVar10 = piVar7[1];
    iVar14 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar14;
    param_2[8] = iVar15;
    param_2[9] = iVar4 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_2[10] = iVar3;
    param_2[0xb] = iVar13;
    param_2[0xc] = iVar11;
    iVar9 = piVar7[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar9;
  case '\n':
    FUN_011adb38(&local_68,param_2 + 0xe);
    if (local_68 == (undefined4 *****)0x2) {
      *param_1 = 2;
      uVar1 = 10;
      goto LAB_0093dda0;
    }
    unaff_lr = local_54;
    goto LAB_0093db24;
  }
  pppppuVar12 = (undefined4 *****)0x0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  param_4 = (undefined4 *****)0x0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  local_90 = 0;
switchD_0093d67c_caseD_1:
  param_1[3] = local_90;
  param_1[2] = param_4;
  *param_1 = pppppuVar12;
  param_1[1] = in_r12;
  param_1[6] = uVar6;
  param_1[4] = param_3;
  param_1[5] = unaff_lr;
  param_1[7] = local_88;
  param_1[8] = uStack_84;
  param_1[9] = iStack_80;
  param_1[10] = local_7c;
  param_1[0xb] = iStack_78;
  param_1[0xc] = uStack_74;
  param_1[0xd] = iStack_70;
  uVar1 = 1;
  param_1[0xe] = pppppuVar5;
  param_1[0xf] = unaff_r9;
LAB_0093dda0:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

