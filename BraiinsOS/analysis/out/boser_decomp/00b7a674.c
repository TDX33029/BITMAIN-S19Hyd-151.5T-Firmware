// FUN_00b7a674 @ 00b7a674 size=488 calls_out=10 calls_in=1
// strings: 

void FUN_00b7a674(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x108)) {
  case 0:
    FUN_01bed4e2(param_2 + 0x58,param_2,0x58);
    FUN_01bed4e2(&local_78,param_2,0x50);
    uVar2 = local_2c;
    uVar1 = local_30;
    FUN_0071227c(&local_78);
    *(undefined4 *)(param_2 + 0xb0) = 3;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xf4) = 4;
    *(undefined4 *)(param_2 + 0xf0) = 0;
    *(undefined4 *)(param_2 + 0xf8) = 0;
    *(undefined4 *)(param_2 + 0xfc) = 0;
    *(undefined4 *)(param_2 + 0x100) = uVar1;
    *(undefined4 *)(param_2 + 0x104) = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13830);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13830);
  }
  FUN_01706d8c(&local_78,param_2 + 0xb0,param_3);
  iVar4 = local_78;
  if (local_78 == 5 && local_74 == 0) {
    *param_1 = 1;
    uVar3 = 3;
    goto LAB_00b7a848;
  }
  local_b8 = local_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  uStack_a8 = uStack_58;
  local_a4 = local_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  uStack_98 = uStack_48;
  uStack_94 = uStack_44;
  local_90 = local_40;
  uStack_8c = uStack_3c;
  uStack_88 = uStack_38;
  uStack_84 = uStack_34;
  uStack_80 = local_30;
  uStack_7c = local_2c;
  FUN_00b7aa74(param_2 + 0xb0);
  if (iVar4 == 4 && local_74 == 0) {
LAB_00b7a7fc:
    local_78 = CONCAT22(local_78._2_2_,5);
    local_c4 = FUN_0183b9d4(&local_78,local_70,local_6c);
    local_c0 = local_74;
    iStack_bc = iVar4;
    local_c8 = 0;
  }
  else {
    local_68 = local_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    uStack_58 = uStack_a8;
    local_54 = local_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    local_40 = local_90;
    uStack_3c = uStack_8c;
    uStack_38 = uStack_88;
    uStack_34 = uStack_84;
    local_30 = uStack_80;
    local_2c = uStack_7c;
    local_78 = iVar4;
    FUN_017663d4(&local_c8,&local_78);
    if (local_c8 == 0) {
      local_6c = local_c0;
      local_70 = local_c4;
      goto LAB_00b7a7fc;
    }
  }
  iVar4 = *(int *)(param_2 + 0xa8);
  FUN_019bb7e0(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  thunk_FUN_01be4678(iVar4);
  *param_1 = 0;
  param_1[1] = local_c8;
  param_1[2] = local_c4;
  param_1[3] = local_c0;
  param_1[4] = iStack_bc;
  uVar3 = 1;
LAB_00b7a848:
  *(undefined1 *)(param_2 + 0x108) = uVar3;
  return;
}

