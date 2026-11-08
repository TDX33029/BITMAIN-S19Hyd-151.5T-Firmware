// FUN_01833f1c @ 01833f1c size=600 calls_out=8 calls_in=1
// strings: 

void FUN_01833f1c(uint *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    FUN_019e6e74(&local_e8,&DAT_01d20624,param_2[0x14],param_2[0x15],param_2[0x16],&DAT_01d20624);
    if (*param_2 != 2 || param_2[1] != 0) {
      FUN_01431b40(param_2);
    }
    FUN_01bed4e2(param_2,&local_e8,0x50);
    if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d20634);
    }
  }
  iVar2 = FUN_019e84a0(param_2,*param_3);
  if (iVar2 == 0) {
    local_e8 = CONCAT22(local_e8._2_2_,4);
    local_ec = FUN_0183ba50(&local_e8);
LAB_01833ffc:
    uVar3 = FUN_0183a75c(local_ec);
    param_1[1] = 0;
    *param_1 = 4;
    param_1[2] = uVar3;
    param_1[3] = (uint)&DAT_01d1e854;
  }
  else {
    (**(code **)(param_2[0x19] + 0xc))(&local_e8,param_2[0x18],param_3);
    if (local_e8 == 6 && local_e4 == 0) {
LAB_01833fdc:
      uVar3 = 6;
    }
    else {
      if (local_e8 == 5 && local_e4 == 0) {
        local_94 = 0;
        local_98 = 5;
      }
      else {
        if (local_e8 == 4 && local_e4 == 0) {
          local_58 = CONCAT22(local_58._2_2_,4);
          local_e0 = FUN_0183b9d4(&local_58);
          local_dc = extraout_r2;
        }
        else {
          local_58 = local_d8;
          uStack_54 = uStack_d4;
          uStack_50 = uStack_d0;
          uStack_4c = uStack_cc;
          uStack_48 = local_c8;
          uStack_44 = uStack_c4;
          local_40 = local_c0;
          uStack_3c = uStack_bc;
          uStack_38 = uStack_b8;
          uStack_34 = uStack_b4;
          uStack_30 = uStack_b0;
          uStack_2c = uStack_ac;
        }
        local_98 = local_e8;
        local_94 = local_e4;
        local_88 = local_58;
        uStack_84 = uStack_54;
        uStack_80 = uStack_50;
        local_7c = uStack_4c;
        uStack_78 = uStack_48;
        uStack_74 = uStack_44;
        local_70 = local_40;
        local_6c = uStack_3c;
        uStack_68 = uStack_38;
        uStack_64 = uStack_34;
        uStack_60 = uStack_30;
        uStack_5c = uStack_2c;
        local_ec = local_e0;
        local_90 = local_e0;
        local_8c = local_dc;
      }
      uVar1 = local_94;
      uVar3 = local_98;
      if (*param_2 != 2 || param_2[1] != 0) {
        FUN_01431b40(param_2);
      }
      *param_2 = 2;
      param_2[1] = 0;
      local_e8 = local_8c;
      local_e4 = local_88;
      local_e0 = uStack_84;
      local_dc = uStack_80;
      local_d8 = local_7c;
      uStack_d4 = uStack_78;
      uStack_d0 = uStack_74;
      uStack_cc = local_70;
      local_c8 = local_6c;
      uStack_c4 = uStack_68;
      local_c0 = uStack_64;
      uStack_bc = uStack_60;
      uStack_b8 = uStack_5c;
      if ((uVar3 & 7) == 4) goto LAB_01833ffc;
      if (uVar3 != 5) {
        if (uVar3 != 6) {
          param_1[2] = local_ec;
          *param_1 = uVar3;
          param_1[1] = uVar1;
          param_1[3] = local_8c;
          param_1[4] = local_88;
          param_1[5] = uStack_84;
          param_1[6] = uStack_80;
          param_1[7] = local_7c;
          param_1[8] = uStack_78;
          param_1[9] = uStack_74;
          param_1[10] = local_70;
          param_1[0xb] = local_6c;
          param_1[0xc] = uStack_68;
          param_1[0xd] = uStack_64;
          param_1[0xe] = uStack_60;
          param_1[0xf] = uStack_5c;
          return;
        }
        goto LAB_01833fdc;
      }
      uVar3 = 5;
    }
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

