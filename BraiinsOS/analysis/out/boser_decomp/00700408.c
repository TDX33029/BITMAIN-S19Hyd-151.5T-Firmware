// FUN_00700408 @ 00700408 size=648 calls_out=10 calls_in=3
// strings: 

void FUN_00700408(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_r11;
  undefined4 *puVar6;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  undefined4 *local_e0;
  int local_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *local_a8;
  int local_a4;
  undefined4 *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_006fa58c(&local_11c,param_2,0x46);
  if (local_11c == 0) {
    iVar3 = 0;
    iVar5 = -0x80000000;
    puVar6 = unaff_r11;
  }
  else {
    uVar1 = FUN_006fb3b4(local_11c,local_10c);
    FUN_006fb414(&local_108,local_11c,local_118,local_114,local_110,local_10c + 1,uVar1);
    local_e8 = 9;
    local_c8 = local_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    local_bc = uStack_fc;
    local_b8 = local_f8;
    uStack_b4 = uStack_f4;
    uStack_b0 = uStack_f0;
    local_a8 = &local_e8;
    local_ec = param_3;
    uStack_ac = param_3;
    FUN_006f92f4(&local_98,&local_c8);
    if (local_90 == -0x80000000) {
      FUN_006f6e98(local_c8,local_bc);
      puVar6 = (undefined4 *)&SUB_00000004;
      iVar3 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (undefined4 *)FUN_01298504(0x90,4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x90);
      }
      *puVar6 = local_98;
      puVar6[1] = uStack_94;
      puVar6[2] = local_90;
      puVar6[3] = uStack_8c;
      puVar6[4] = local_88;
      puVar6[5] = uStack_84;
      puVar6[6] = uStack_80;
      puVar6[7] = uStack_7c;
      puVar6[8] = uStack_78;
      local_a4 = 4;
      local_9c = 1;
      local_70 = local_c8;
      uStack_6c = uStack_c4;
      uStack_68 = uStack_c0;
      local_64 = local_bc;
      iVar5 = 0x24;
      local_60 = local_b8;
      uStack_5c = uStack_b4;
      uStack_58 = uStack_b0;
      uStack_54 = uStack_ac;
      piStack_50 = local_a8;
      local_a0 = puVar6;
      while( true ) {
        iVar3 = local_9c;
        FUN_006f92f4(&local_48,&local_70);
        if (local_40 == -0x80000000) break;
        if (iVar3 == local_a4) {
          FUN_006520b4(&local_a4,iVar3,1,4,0x24);
          puVar6 = local_a0;
        }
        puVar2 = (undefined4 *)((int)puVar6 + iVar5);
        local_9c = iVar3 + 1;
        iVar5 = iVar5 + 0x24;
        *puVar2 = local_48;
        puVar2[1] = uStack_44;
        puVar2[2] = local_40;
        puVar2[3] = uStack_3c;
        puVar2[4] = local_38;
        puVar2[5] = uStack_34;
        puVar2[6] = uStack_30;
        puVar2[7] = uStack_2c;
        puVar2[8] = uStack_28;
      }
      FUN_006f6e98(local_70,local_64);
      iVar5 = local_a4;
    }
    iVar4 = local_e8;
    if (local_e8 != 9) {
      FUN_006f620c(puVar6,iVar3);
      FUN_0134aee0(iVar5,puVar6,4,0x24);
      if (iVar4 != 9) {
        param_1[4] = local_d8;
        param_1[5] = iStack_d4;
        param_1[6] = iStack_d0;
        param_1[7] = iStack_cc;
        goto LAB_00700648;
      }
      iVar3 = local_dc;
      iVar5 = local_e4;
      puVar6 = local_e0;
    }
  }
  local_e0 = puVar6;
  local_e4 = iVar5;
  local_dc = iVar3;
  iVar4 = 9;
  if (local_e4 == -0x80000000) {
    local_e4 = 0;
    local_dc = 0;
    local_e0 = (undefined4 *)&SUB_00000004;
  }
LAB_00700648:
  *param_1 = iVar4;
  param_1[1] = local_e4;
  param_1[2] = (int)local_e0;
  param_1[3] = local_dc;
  return;
}

