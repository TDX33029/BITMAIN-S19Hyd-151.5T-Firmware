// FUN_0090e370 @ 0090e370 size=684 calls_out=5 calls_in=0
// strings: endTimeevent open/boser/boser/src/api/grpc/miner.rs:571

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0090e370(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  param_2 = (undefined4 *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar7 = *param_2;
    iVar8 = param_2[1];
    uVar5 = 0x80000007;
    uVar6 = 0;
    param_2[2] = iVar8;
    iVar3 = *(int *)(iVar8 + 0x10);
    uVar12 = CONCAT44(*(int *)(iVar3 + 0x40),iVar3);
    if ((*(int *)(iVar3 + 0x40) == 7) &&
       (uVar12 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,
                                    "endTimeevent open/boser/boser/src/api/grpc/miner.rs:571",7),
       (int)uVar12 == 0)) {
      param_2[4] = uVar7;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar8;
LAB_0090e450:
      param_2[6] = uVar7;
      param_2[7] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      goto LAB_0090e45c;
    }
    goto LAB_0090e5bc;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12390);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12390);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar7 = param_2[4];
      iVar8 = param_2[5];
      goto LAB_0090e450;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12390);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12390);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12390);
      }
      uVar7 = param_2[6];
    }
LAB_0090e45c:
    puVar4 = (undefined4 *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar7;
    uVar7 = puVar4[5];
    iVar8 = puVar4[4];
    uVar5 = puVar4[6];
    uVar9 = puVar4[7];
    uVar2 = *(undefined1 *)(puVar4 + 8);
    uVar6 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    param_2[5] = *puVar4;
    param_2[6] = uVar6;
    param_2[7] = uVar10;
    param_2[8] = uVar11;
    param_2[9] = iVar8 + 0x20;
    *(undefined1 *)(param_2 + 0xd) = uVar2;
    param_2[10] = uVar7;
    param_2[0xb] = uVar5;
    param_2[0xc] = uVar9;
    uVar7 = puVar4[4];
    param_2[0x31] = param_2 + 5;
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = param_2 + 4;
    param_2[0x32] = uVar7;
  }
  FUN_008c2ad8(&local_a8,param_2 + 0xe,param_3);
  uVar5 = local_90;
  uVar1 = CONCAT44(local_a4,local_a0);
  if (local_a8 == 2) {
    *param_1 = 2;
    uVar2 = 4;
  }
  else {
    local_40 = local_9c;
    uStack_3c = local_98;
    uStack_38 = uStack_94;
    local_68 = local_8c;
    uStack_64 = uStack_88;
    uStack_60 = uStack_84;
    local_5c = uStack_80;
    local_58 = local_7c;
    uStack_54 = uStack_78;
    uStack_50 = uStack_74;
    uStack_4c = uStack_70;
    uStack_48 = uStack_6c;
    FUN_00aa4260(param_2 + 0xe);
    uVar12 = CONCAT44(local_58,local_a0);
    local_30 = local_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    if ((local_a8 & 1) == 0) {
      uVar6 = 0;
      local_a8 = local_68;
      local_a4 = uStack_64;
      local_a0 = uStack_60;
      local_9c = local_5c;
      local_98 = local_58;
      uStack_94 = uStack_54;
      local_90 = uStack_50;
    }
    else {
      local_a8 = local_68;
      local_a4 = uStack_64;
      local_a0 = uStack_60;
      local_9c = local_5c;
      local_98 = local_58;
      uStack_94 = uStack_54;
      local_90 = uStack_50;
      local_8c = uStack_4c;
      uStack_88 = uStack_48;
      uVar6 = 1;
      uVar12 = uVar1;
    }
LAB_0090e5bc:
    param_1[1] = (int)((ulonglong)uVar12 >> 0x20);
    param_1[2] = (int)uVar12;
    *param_1 = uVar6;
    param_1[3] = local_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    param_1[6] = uVar5;
    param_1[7] = local_a8;
    param_1[8] = local_a4;
    param_1[9] = local_a0;
    param_1[10] = local_9c;
    param_1[0xb] = local_98;
    param_1[0xc] = uStack_94;
    param_1[0xd] = local_90;
    param_1[0xe] = local_8c;
    param_1[0xf] = uStack_88;
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

