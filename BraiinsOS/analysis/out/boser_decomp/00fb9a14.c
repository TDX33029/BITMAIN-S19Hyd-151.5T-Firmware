// FUN_00fb9a14 @ 00fb9a14 size=672 calls_out=11 calls_in=0
// strings: 

void FUN_00fb9a14(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r9;
  int iVar6;
  int local_f4;
  int local_f0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 *puStack_c4;
  int *piStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  int *local_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x214)) {
  case 0:
    iVar5 = param_2 + 0x90;
    *(undefined1 *)(param_2 + 0x215) = 1;
    FUN_01bed4e2(iVar5,param_2,0x90);
    local_f0 = *(int *)(param_2 + 0x210);
    iVar3 = FUN_00710404(iVar5);
    if (iVar3 != 0) {
      *(undefined1 *)(param_2 + 0x215) = 0;
      FUN_01bed4e2(param_2 + 0x120,iVar5,0x90);
      *(undefined1 *)(param_2 + 0x20c) = 0;
      *(int *)(param_2 + 0x208) = local_f0;
      goto switchD_00fb9a34_caseD_3;
    }
    iVar4 = 4;
LAB_00fb9bb4:
    if (*(char *)(param_2 + 0x215) != '\0') {
      FUN_00ebabdc(param_2 + 0x90);
    }
    local_f4 = 0;
    iVar6 = 3;
    *(undefined1 *)(param_2 + 0x215) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2071c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2071c);
  case 3:
switchD_00fb9a34_caseD_3:
    FUN_00f172dc(&local_60,param_2 + 0x120,param_3);
    unaff_r9 = local_50;
    iVar1 = local_54;
    iVar5 = local_58;
    iVar3 = local_5c;
    if (local_60 != 0) {
      *param_1 = 4;
      uVar2 = 3;
      goto LAB_00fb9ca0;
    }
    FUN_00fb9f1c(param_2 + 0x120);
    iVar4 = iVar5;
    local_f0 = iVar1;
    if (iVar3 == 0) goto LAB_00fb9bb4;
    local_94 = 0x80;
    iStack_dc = unaff_r9;
    local_ac = 1;
    local_6c = -0x80000000;
    local_78 = &local_6c;
    local_98 = 0;
    local_9c = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_90 = 0;
    local_7c = &local_b0;
    local_a0 = iVar1;
    local_a4 = iVar5;
    FUN_00ee5a5c(&local_60,&local_90);
    if (local_60 == 3) {
      local_84 = local_5c;
      if (local_6c == -0x80000000) {
        local_8c = 4;
        iStack_64 = 0;
        local_90 = 0;
      }
      else {
        local_90 = local_6c;
        local_8c = iStack_68;
      }
      local_88 = iStack_64;
      FUN_007103d0(&local_60,&local_90);
      local_f0 = local_5c;
      iVar4 = local_60;
      unaff_r9 = local_58;
      iVar6 = 3;
    }
    else {
      local_f0 = local_58;
      local_f4 = local_50;
      local_90 = local_4c;
      local_8c = iStack_48;
      local_88 = iStack_44;
      local_84 = iStack_40;
      local_80 = local_3c;
      local_7c = puStack_38;
      local_78 = piStack_34;
      iStack_74 = iStack_30;
      iStack_70 = iStack_2c;
      FUN_00ad9810(&local_6c);
      local_d8 = local_90;
      iStack_d4 = local_8c;
      iStack_d0 = local_88;
      iStack_cc = local_84;
      local_c8 = local_80;
      puStack_c4 = local_7c;
      piStack_c0 = local_78;
      iStack_bc = iStack_74;
      iStack_b8 = iStack_70;
      iVar4 = local_5c;
      unaff_r9 = local_54;
      iVar6 = local_60;
    }
    FUN_019bb7e0(local_b0,local_ac);
    (**(code **)(iVar3 + 0x10))(&iStack_dc,iVar5,iVar1);
    *(undefined1 *)(param_2 + 0x215) = 0;
  }
  param_1[4] = local_f4;
  *param_1 = iVar6;
  param_1[1] = iVar4;
  param_1[2] = local_f0;
  param_1[3] = unaff_r9;
  param_1[5] = local_d8;
  param_1[6] = iStack_d4;
  param_1[7] = iStack_d0;
  param_1[8] = iStack_cc;
  param_1[9] = local_c8;
  param_1[10] = (int)puStack_c4;
  param_1[0xb] = (int)piStack_c0;
  param_1[0xc] = iStack_bc;
  param_1[0xd] = iStack_b8;
  uVar2 = 1;
LAB_00fb9ca0:
  *(undefined1 *)(param_2 + 0x214) = uVar2;
  return;
}

