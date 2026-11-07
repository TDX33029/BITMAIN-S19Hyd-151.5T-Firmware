// FUN_00b30054 @ 00b30054 size=1216 calls_out=6 calls_in=0
// strings: endTimeevent open/boser/boser/src/api/grpc/miner.rs:571

void FUN_00b30054(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_r12;
  uint extraout_r12;
  int iVar14;
  int iVar15;
  int *local_f8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c0;
  undefined4 *local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar11 = *param_2;
    iVar12 = param_2[1];
    uVar5 = 0x80000007;
    uVar8 = 0;
    param_2[2] = iVar12;
    iVar9 = *(int *)(iVar12 + 0x10);
    puVar2 = *(undefined4 **)(iVar9 + 0x40);
    if (puVar2 == (undefined4 *)&DAT_00000007) {
      iVar3 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,&DAT_005325f1,7);
      if (iVar3 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar12;
        goto LAB_00b30354;
      }
      puVar2 = (undefined4 *)
               thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,
                                  "endTimeevent open/boser/boser/src/api/grpc/miner.rs:571",7);
      in_r12 = extraout_r12;
      if (puVar2 == (undefined4 *)0x0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar12;
        goto LAB_00b30128;
      }
    }
    goto LAB_00b30464;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12370);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12370);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      iVar12 = param_2[5];
LAB_00b30354:
      param_2[6] = iVar11;
      param_2[7] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12370);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12370);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12370);
      }
      iVar11 = param_2[6];
    }
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar6 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar11;
    iVar11 = piVar4[8];
    iVar12 = piVar4[4];
    iVar13 = piVar4[5];
    iVar10 = piVar4[6];
    iVar3 = piVar4[7];
    iVar9 = piVar4[1];
    iVar14 = piVar4[2];
    iVar15 = piVar4[3];
    *piVar6 = *piVar4;
    param_2[6] = iVar9;
    param_2[7] = iVar14;
    param_2[8] = iVar15;
    param_2[9] = iVar12 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    param_2[10] = iVar13;
    param_2[0xb] = iVar10;
    param_2[0xc] = iVar3;
    iVar12 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)piVar6;
    param_2[0x10] = iVar12;
LAB_00b303dc:
    iVar11 = *piVar7;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar11;
    param_2[0x12] = (int)piVar6;
    param_2[0x13] = iVar12;
    goto LAB_00b303f4;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar6 = (int *)param_2[0xf];
      iVar12 = param_2[0x10];
      goto LAB_00b303dc;
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
      iVar11 = param_2[0x11];
    }
LAB_00b303f4:
    FUN_006666fc(&local_c0,*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
    puVar2 = (undefined4 *)((uint)&local_c0 | 4);
    local_d0 = *puVar2;
    uStack_cc = puVar2[1];
    uStack_c8 = puVar2[2];
    uVar5 = 0x80000002;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_48 = local_ac;
    uStack_44 = local_a8;
    uStack_40 = local_a4;
    puVar2 = &local_3c;
    local_3c = local_a0;
    local_38 = uStack_9c;
    uStack_34 = uStack_98;
    uStack_30 = local_94;
    uVar8 = 0;
    in_r12 = local_c0;
    goto LAB_00b30464;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      iVar12 = param_2[5];
LAB_00b30128:
      param_2[6] = iVar11;
      param_2[7] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12370);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12370);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12370);
      }
      iVar11 = param_2[6];
    }
    local_f8 = param_2 + 4;
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar11 + 0xc;
    iVar12 = piVar7[5];
    iVar9 = piVar7[4];
    iVar3 = piVar7[6];
    iVar13 = piVar7[7];
    iVar11 = piVar7[8];
    iVar10 = piVar7[1];
    iVar14 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar14;
    param_2[8] = iVar15;
    param_2[9] = iVar9 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar3;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    iVar11 = piVar7[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)local_f8;
    param_2[0x31] = (int)(param_2 + 5);
    param_2[0x32] = iVar11;
  }
  FUN_00b244e4(&local_c0,param_2 + 0xe,param_3);
  if (local_c0 == 2) {
    *param_1 = 2;
    uVar1 = 6;
  }
  else {
    local_58 = local_b4;
    uStack_54 = uStack_b0;
    uStack_50 = local_ac;
    local_80 = local_a4;
    uStack_7c = local_a0;
    uStack_78 = uStack_9c;
    local_74 = uStack_98;
    local_70 = local_94;
    uStack_6c = uStack_90;
    uStack_68 = uStack_8c;
    uStack_64 = uStack_88;
    uStack_60 = uStack_84;
    FUN_00b2ba78(param_2 + 0xe);
    local_d0 = local_58;
    uStack_cc = uStack_54;
    uStack_c8 = uStack_50;
    uVar5 = local_a8;
    in_r12 = local_b8;
    if ((local_c0 & 1) == 0) {
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      puVar2 = &local_3c;
      local_3c = local_74;
      local_38 = local_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uVar8 = 0;
    }
    else {
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      local_3c = local_74;
      local_38 = local_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      uStack_28 = uStack_60;
      uVar8 = 1;
      puVar2 = local_bc;
    }
LAB_00b30464:
    param_1[1] = puVar2;
    param_1[2] = in_r12;
    *param_1 = uVar8;
    param_1[3] = local_d0;
    param_1[4] = uStack_cc;
    param_1[5] = uStack_c8;
    param_1[6] = uVar5;
    param_1[7] = local_48;
    param_1[8] = uStack_44;
    param_1[9] = uStack_40;
    param_1[10] = local_3c;
    param_1[0xb] = local_38;
    param_1[0xc] = uStack_34;
    param_1[0xd] = uStack_30;
    param_1[0xe] = uStack_2c;
    param_1[0xf] = uStack_28;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

