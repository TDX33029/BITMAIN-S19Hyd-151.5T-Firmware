// FUN_00be3ca4 @ 00be3ca4 size=364 calls_out=4 calls_in=6
// strings: 

void FUN_00be3ca4(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 uVar3;
  uint local_d8 [6];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    param_2[3] = param_2[1];
    if (*(int *)*param_2 != 0) {
      *(undefined1 *)(param_2 + 0xc) = 0;
      param_2[4] = (int *)*param_2;
      param_2[5] = param_2[1];
      param_2[6] = param_2[2];
      goto switchD_00be3cc0_caseD_3;
    }
    uVar3 = 0x80000000;
    local_a0 = unaff_r4;
    local_9c = unaff_r8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21c3c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21c3c);
  case 3:
switchD_00be3cc0_caseD_3:
    FUN_00be5ca4(local_d8,param_2 + 4);
    if (local_d8[0] == 2) {
      *param_1 = 2;
      uVar1 = 3;
      goto LAB_00be3dfc;
    }
    puVar2 = (undefined4 *)((uint)local_d8 | 4);
    local_78 = *puVar2;
    uStack_74 = puVar2[1];
    uStack_70 = puVar2[2];
    uStack_6c = puVar2[3];
    uStack_68 = puVar2[4];
    local_98 = local_bc;
    uStack_94 = uStack_b8;
    uStack_90 = uStack_b4;
    local_8c = local_b0;
    uStack_88 = uStack_ac;
    uStack_84 = uStack_a8;
    uStack_80 = uStack_a4;
    uVar3 = local_c0;
    if ((local_d8[0] & 1) != 0) {
      local_4c = local_c0;
      uVar3 = 0x80000000;
      local_48 = local_bc;
      uStack_44 = uStack_b8;
      uStack_40 = uStack_b4;
      local_3c = local_b0;
      uStack_38 = uStack_ac;
      uStack_34 = uStack_a8;
      uStack_30 = uStack_a4;
      local_28 = local_9c;
      local_2c = local_a0;
      local_60 = local_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      uStack_50 = uStack_68;
      FUN_00a20afc(*(undefined4 *)(param_2[3] + 0x18));
    }
  }
  *param_1 = 0;
  param_1[1] = local_78;
  param_1[2] = uStack_74;
  param_1[3] = uStack_70;
  param_1[4] = uStack_6c;
  param_1[5] = uStack_68;
  param_1[6] = uVar3;
  param_1[7] = local_98;
  param_1[8] = uStack_94;
  param_1[9] = uStack_90;
  param_1[10] = local_8c;
  param_1[0xb] = uStack_88;
  param_1[0xc] = uStack_84;
  param_1[0xd] = uStack_80;
  uVar1 = 1;
  param_1[0xe] = local_a0;
  param_1[0xf] = local_9c;
LAB_00be3dfc:
  *(undefined1 *)(param_2 + 0xd) = uVar1;
  return;
}

