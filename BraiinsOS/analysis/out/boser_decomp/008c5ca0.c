// FUN_008c5ca0 @ 008c5ca0 size=688 calls_out=4 calls_in=0
// strings: 

void FUN_008c5ca0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int iVar13;
  int iVar14;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar10 = (int *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)piVar10[3]) {
  case '\0':
    iVar5 = *piVar10;
    iVar8 = piVar10[1];
    uVar6 = 0x80000007;
    piVar10[2] = iVar8;
    if ((*(int *)(*(int *)(iVar8 + 0x10) + 0x40) != 7) ||
       (iVar1 = thunk_FUN_01bed842(*(int *)(*(int *)(iVar8 + 0x10) + 0x3c) + 8,&DAT_005325f1,7),
       in_r12 = extraout_r12, iVar1 != 0)) goto LAB_008c5ec8;
    piVar10[4] = iVar5;
    *(undefined1 *)(piVar10 + 9) = 0;
    piVar10[5] = iVar8;
LAB_008c5d5c:
    piVar10[6] = iVar5;
    *(undefined1 *)(piVar10 + 8) = 0;
    piVar10[7] = iVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12090);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12090);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)piVar10[9]) {
    case '\0':
      iVar5 = piVar10[4];
      iVar8 = piVar10[5];
      goto LAB_008c5d5c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12090);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12090);
    case '\x03':
      if ((*(byte *)(piVar10 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12090);
      }
      iVar5 = piVar10[6];
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)piVar10[0x15]) {
    case '\0':
      piVar2 = (int *)piVar10[0xe];
      piVar7 = (int *)piVar10[0xf];
      iVar8 = piVar10[0x10];
      goto LAB_008c5e34;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)piVar10[0x14] != '\0') {
        if ((char)piVar10[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar5 = piVar10[0x11];
    }
    goto LAB_008c5e60;
  }
  piVar3 = (int *)piVar10[2];
  *(undefined1 *)(piVar10 + 9) = 1;
  piVar7 = piVar10 + 5;
  *(undefined1 *)(piVar10 + 8) = 1;
  piVar2 = piVar10 + 4;
  *piVar2 = iVar5;
  iVar5 = piVar3[8];
  iVar12 = piVar3[4];
  iVar11 = piVar3[5];
  iVar8 = piVar3[6];
  iVar1 = piVar3[7];
  iVar9 = piVar3[1];
  iVar13 = piVar3[2];
  iVar14 = piVar3[3];
  *piVar7 = *piVar3;
  piVar10[6] = iVar9;
  piVar10[7] = iVar13;
  piVar10[8] = iVar14;
  piVar10[9] = iVar12 + 0x20;
  piVar10[10] = iVar11;
  piVar10[0xb] = iVar8;
  piVar10[0xc] = iVar1;
  *(char *)(piVar10 + 0xd) = (char)iVar5;
  iVar8 = piVar3[4];
  *(undefined1 *)(piVar10 + 0x15) = 0;
  piVar10[0xe] = (int)piVar2;
  piVar10[0xf] = (int)piVar7;
  piVar10[0x10] = iVar8;
LAB_008c5e34:
  iVar5 = *piVar2;
  *(undefined1 *)(piVar10 + 0x14) = 0;
  piVar10[0x11] = iVar5;
  piVar10[0x12] = (int)piVar7;
  piVar10[0x13] = iVar8;
LAB_008c5e60:
  FUN_006666fc(&local_58,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
  in_r12 = local_58;
  puVar4 = (undefined4 *)((uint)&local_58 | 4);
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  *(undefined1 *)(piVar10 + 0x15) = 1;
  *(undefined1 *)(piVar10 + 0x14) = 1;
  local_58 = local_44;
  uStack_54 = uStack_40;
  uStack_50 = uStack_3c;
  local_4c = local_38;
  local_48 = uStack_34;
  local_44 = uStack_30;
  uStack_40 = uStack_2c;
  uVar6 = 0x80000002;
LAB_008c5ec8:
  *param_1 = 0;
  param_1[2] = in_r12;
  param_1[3] = local_68;
  param_1[4] = uStack_64;
  param_1[5] = uStack_60;
  param_1[6] = uVar6;
  param_1[7] = local_58;
  param_1[8] = uStack_54;
  param_1[9] = uStack_50;
  param_1[10] = local_4c;
  param_1[0xb] = local_48;
  param_1[0xc] = local_44;
  param_1[0xd] = uStack_40;
  param_1[0xe] = uStack_3c;
  param_1[0xf] = local_38;
  *(undefined1 *)(piVar10 + 3) = 1;
  return;
}

