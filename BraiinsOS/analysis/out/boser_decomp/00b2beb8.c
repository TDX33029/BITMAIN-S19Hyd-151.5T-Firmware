// FUN_00b2beb8 @ 00b2beb8 size=660 calls_out=3 calls_in=0
// strings: 

void FUN_00b2beb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_r12;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar4 = *param_2;
    iVar5 = param_2[1];
    uVar10 = 0x80000007;
    param_2[2] = iVar5;
    if ((*(int *)(*(int *)(iVar5 + 0x10) + 0x40) != 4) ||
       (*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x3c) + 8) != 0x64696f76)) goto LAB_00b2c0c4;
    param_2[4] = uVar4;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = iVar5;
LAB_00b2bf68:
    param_2[6] = uVar4;
    param_2[7] = iVar5;
    *(undefined1 *)(param_2 + 8) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12380);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12380);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar4 = param_2[4];
      iVar5 = param_2[5];
      goto LAB_00b2bf68;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12380);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12380);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12380);
      }
      uVar4 = param_2[6];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x15)) {
    case 0:
      puVar3 = (undefined4 *)param_2[0xe];
      puVar2 = (undefined4 *)param_2[0xf];
      uVar4 = param_2[0x10];
      goto LAB_00b2c03c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case 3:
      if (*(char *)(param_2 + 0x14) != '\0') {
        if (*(char *)(param_2 + 0x14) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c12968);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c12968);
      }
    }
    goto LAB_00b2c064;
  }
  puVar6 = (undefined4 *)param_2[2];
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 8) = 1;
  puVar3 = param_2 + 4;
  *puVar3 = uVar4;
  uVar1 = *(undefined1 *)(puVar6 + 8);
  puVar2 = param_2 + 5;
  iVar5 = puVar6[4];
  uVar8 = puVar6[5];
  uVar7 = puVar6[6];
  uVar4 = puVar6[7];
  uVar10 = puVar6[1];
  uVar9 = puVar6[2];
  uVar11 = puVar6[3];
  *puVar2 = *puVar6;
  param_2[6] = uVar10;
  param_2[7] = uVar9;
  param_2[8] = uVar11;
  param_2[9] = iVar5 + 0x20;
  *(undefined1 *)(param_2 + 0xd) = uVar1;
  param_2[10] = uVar8;
  param_2[0xb] = uVar7;
  param_2[0xc] = uVar4;
  uVar4 = puVar6[4];
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0xe] = puVar3;
  param_2[0xf] = puVar2;
  param_2[0x10] = uVar4;
LAB_00b2c03c:
  uVar10 = *puVar3;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x11] = uVar10;
  param_2[0x12] = puVar2;
  param_2[0x13] = uVar4;
LAB_00b2c064:
  FUN_011e65c8(local_58);
  puVar3 = (undefined4 *)((uint)local_58 | 4);
  local_90 = *puVar3;
  uStack_8c = puVar3[1];
  uStack_88 = puVar3[2];
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_80 = local_44;
  uStack_7c = uStack_40;
  uStack_78 = uStack_3c;
  local_74 = local_38;
  local_70 = uStack_34;
  uStack_6c = uStack_30;
  uStack_68 = uStack_2c;
  in_r12 = local_58[0];
  uVar10 = local_48;
LAB_00b2c0c4:
  *param_1 = 0;
  param_1[2] = in_r12;
  param_1[3] = local_90;
  param_1[4] = uStack_8c;
  param_1[5] = uStack_88;
  param_1[6] = uVar10;
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

