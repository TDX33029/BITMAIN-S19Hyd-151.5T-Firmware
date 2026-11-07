// FUN_00b35194 @ 00b35194 size=608 calls_out=8 calls_in=0
// strings: 

void FUN_00b35194(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_r10;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  undefined4 *unaff_lr;
  undefined1 auStack_130 [96];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char local_b4;
  char local_b3;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c [23];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar4 = 0;
    goto LAB_00b35218;
  case 1:
    FUN_01318534(&local_a8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    local_cc = 0;
    uVar4 = 2;
    local_d0 = 3;
    unaff_r10 = local_a8;
    in_r12 = local_a4;
    unaff_lr = local_a0;
    break;
  case 2:
    uVar4 = 3;
    local_cc = 0;
    local_d0 = 3;
    break;
  case 3:
    uVar4 = 4;
    goto LAB_00b35218;
  case 4:
    uVar4 = 5;
LAB_00b35218:
    local_cc = 0;
    local_d0 = 3;
    break;
  case 5:
    unaff_lr = (undefined4 *)0xb35290;
    FUN_00ab7724(&local_b4,param_2 + 1);
    if (local_b4 == '\x01') {
      local_a8 = &local_30;
      local_28 = 0;
      local_30 = 0;
      local_9c[0] = (undefined4 *)0x0;
      local_ac = local_b0;
      local_2c = 1;
      local_a0 = (undefined4 *)0x60000020;
      local_a4 = (undefined4 *)&DAT_01c125d0;
      iVar3 = FUN_00667a08(&local_ac,&local_a8);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c125e8,&DAT_01d30334);
      }
      local_40 = local_30;
      uStack_3c = local_2c;
      uStack_38 = local_28;
      FUN_01a70fd4(&local_a8,0xd);
      unaff_r10 = local_a0;
      puVar2 = local_a4;
      puVar1 = local_a8;
      FUN_01bed4e2(auStack_130,local_9c,0x5c);
      unaff_lr = (undefined4 *)0xb35338;
      (**(code **)*local_b0)(local_b0);
      in_r12 = extraout_r12_00;
      if (puVar1 != (undefined4 *)&DAT_00000003 || puVar2 != (undefined4 *)0x0) {
        FUN_01bed4e2(param_1 + 3,auStack_130,0x5c);
        *param_1 = puVar1;
        param_1[1] = puVar2;
        param_1[2] = unaff_r10;
        return;
      }
    }
    else {
      unaff_r10 = (undefined4 *)0x2;
      in_r12 = extraout_r12;
      if (local_b3 != '\0') {
        unaff_r10 = (undefined4 *)0x1;
      }
    }
    uVar4 = 6;
    local_cc = 0;
    local_d0 = 3;
    break;
  case 6:
    unaff_lr = (undefined4 *)0xb35368;
    FUN_00b35460(&local_d0,param_2 + 4);
    uVar4 = 7;
    in_r12 = extraout_r12_01;
    break;
  case 7:
    FUN_006666fc(&local_a4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    FUN_00b35460(&local_d0,param_2 + 0x10);
    uVar4 = 8;
    goto LAB_00b3539c;
  case 8:
    FUN_006666fc(&local_a4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    FUN_00b35460(&local_d0,param_2 + 0x10);
    uVar4 = 9;
LAB_00b3539c:
    unaff_r10 = local_a4;
    in_r12 = local_a0;
    unaff_lr = local_9c[0];
  }
  param_1[6] = local_d0;
  param_1[7] = local_cc;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c4;
  param_1[10] = uStack_c0;
  param_1[0xb] = uStack_bc;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = uVar4;
  param_1[3] = unaff_r10;
  param_1[4] = in_r12;
  param_1[5] = unaff_lr;
  return;
}

