// FUN_00a33634 @ 00a33634 size=696 calls_out=4 calls_in=0
// strings: 

void FUN_00a33634(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int iVar12;
  int iVar13;
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
    iVar7 = param_2[1];
    uVar5 = 0x80000007;
    param_2[2] = iVar7;
    iVar9 = *param_2;
    if ((*(int *)(*(int *)(iVar7 + 0x10) + 0x40) != 7) ||
       (iVar1 = thunk_FUN_01bed842(*(int *)(*(int *)(iVar7 + 0x10) + 0x3c) + 8,&DAT_005325f1,7),
       in_r12 = extraout_r12, iVar1 != 0)) goto LAB_00a33864;
    param_2[4] = iVar9;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = iVar7;
LAB_00a336f4:
    param_2[6] = iVar9;
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[7] = iVar7;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0e0bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e0bc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar7 = param_2[5];
      goto LAB_00a336f4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0bc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0bc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0bc);
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
      iVar7 = param_2[0x10];
      goto LAB_00a337cc;
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
    goto LAB_00a337f8;
  }
  piVar3 = (int *)param_2[2];
  *(undefined1 *)(param_2 + 9) = 1;
  piVar6 = param_2 + 5;
  *(undefined1 *)(param_2 + 8) = 1;
  piVar2 = param_2 + 4;
  *piVar2 = iVar9;
  iVar9 = piVar3[8];
  iVar11 = piVar3[4];
  iVar10 = piVar3[5];
  iVar7 = piVar3[6];
  iVar8 = piVar3[7];
  iVar1 = piVar3[1];
  iVar12 = piVar3[2];
  iVar13 = piVar3[3];
  *piVar6 = *piVar3;
  param_2[6] = iVar1;
  param_2[7] = iVar12;
  param_2[8] = iVar13;
  param_2[9] = iVar11 + 0x20;
  param_2[10] = iVar10;
  param_2[0xb] = iVar7;
  param_2[0xc] = iVar8;
  *(char *)(param_2 + 0xd) = (char)iVar9;
  iVar7 = piVar3[4];
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0xe] = (int)piVar2;
  param_2[0xf] = (int)piVar6;
  param_2[0x10] = iVar7;
LAB_00a337cc:
  iVar9 = *piVar2;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x11] = iVar9;
  param_2[0x12] = (int)piVar6;
  param_2[0x13] = iVar7;
LAB_00a337f8:
  FUN_006666fc(local_58,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
  puVar4 = (undefined4 *)((uint)local_58 | 4);
  local_90 = *puVar4;
  uStack_8c = puVar4[1];
  uStack_88 = puVar4[2];
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_80 = local_44;
  uStack_7c = uStack_40;
  uStack_78 = uStack_3c;
  local_74 = local_38;
  local_70 = uStack_34;
  uStack_6c = uStack_30;
  uStack_68 = uStack_2c;
  uVar5 = 0x80000002;
  in_r12 = local_58[0];
LAB_00a33864:
  *param_1 = 0;
  param_1[2] = in_r12;
  param_1[3] = local_90;
  param_1[4] = uStack_8c;
  param_1[5] = uStack_88;
  param_1[6] = uVar5;
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

