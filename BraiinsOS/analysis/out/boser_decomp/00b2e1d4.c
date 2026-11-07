// FUN_00b2e1d4 @ 00b2e1d4 size=692 calls_out=5 calls_in=0
// strings: endTimeevent open/boser/boser/src/api/grpc/miner.rs:571

void FUN_00b2e1d4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
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
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    iVar3 = param_2[1];
    uVar6 = 0x80000007;
    param_2[2] = iVar3;
    uVar5 = 0;
    uVar8 = *param_2;
    iVar2 = *(int *)(iVar3 + 0x10);
    uVar11 = CONCAT44(*(int *)(iVar2 + 0x40),iVar2);
    if ((*(int *)(iVar2 + 0x40) == 7) &&
       (uVar11 = thunk_FUN_01bed842(*(int *)(iVar2 + 0x3c) + 8,
                                    "endTimeevent open/boser/boser/src/api/grpc/miner.rs:571",7),
       (int)uVar11 == 0)) {
      param_2[4] = uVar8;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar3;
LAB_00b2e2bc:
      param_2[6] = uVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar3;
      goto LAB_00b2e2cc;
    }
    goto LAB_00b2e428;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12340);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12340);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar8 = param_2[4];
      iVar3 = param_2[5];
      goto LAB_00b2e2bc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12340);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12340);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12340);
      }
      uVar8 = param_2[6];
    }
LAB_00b2e2cc:
    puVar4 = (undefined4 *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar8;
    uVar8 = puVar4[5];
    iVar3 = puVar4[4];
    uVar6 = puVar4[6];
    uVar7 = puVar4[7];
    uVar1 = *(undefined1 *)(puVar4 + 8);
    uVar5 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    param_2[5] = *puVar4;
    param_2[6] = uVar5;
    param_2[7] = uVar9;
    param_2[8] = uVar10;
    param_2[9] = iVar3 + 0x20;
    param_2[10] = uVar8;
    param_2[0xb] = uVar6;
    param_2[0xc] = uVar7;
    *(undefined1 *)(param_2 + 0xd) = uVar1;
    uVar8 = puVar4[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = param_2 + 4;
    param_2[0x31] = param_2 + 5;
    param_2[0x32] = uVar8;
  }
  FUN_00b244e4(&local_d0,param_2 + 0xe,param_3);
  if (local_d0 == 2) {
    *param_1 = 2;
    uVar1 = 4;
  }
  else {
    local_68 = local_c4;
    uStack_64 = uStack_c0;
    uStack_60 = uStack_bc;
    local_90 = local_b4;
    uStack_8c = uStack_b0;
    uStack_88 = uStack_ac;
    local_84 = uStack_a8;
    local_80 = local_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    uStack_74 = uStack_98;
    uStack_70 = uStack_94;
    FUN_00b2ba78(param_2 + 0xe);
    uVar11 = CONCAT44(local_84,local_c8);
    local_30 = local_68;
    uStack_2c = uStack_64;
    uStack_28 = uStack_60;
    uVar6 = local_b8;
    if ((local_d0 & 1) == 0) {
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      local_4c = local_84;
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uVar5 = 0;
    }
    else {
      local_58 = local_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      local_4c = local_84;
      local_48 = local_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
      uStack_38 = uStack_70;
      uVar5 = 1;
      uVar11 = CONCAT44(local_cc,local_c8);
    }
LAB_00b2e428:
    param_1[1] = (int)((ulonglong)uVar11 >> 0x20);
    param_1[2] = (int)uVar11;
    *param_1 = uVar5;
    param_1[3] = local_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    param_1[6] = uVar6;
    param_1[7] = local_58;
    param_1[8] = uStack_54;
    param_1[9] = uStack_50;
    param_1[10] = local_4c;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_44;
    param_1[0xd] = uStack_40;
    param_1[0xe] = uStack_3c;
    param_1[0xf] = uStack_38;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

