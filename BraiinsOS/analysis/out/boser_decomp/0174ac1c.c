// FUN_0174ac1c @ 0174ac1c size=376 calls_out=2 calls_in=3
// strings: 

void FUN_0174ac1c(uint *param_1,int *param_2)

{
  uint uVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar2;
  uint extraout_r12;
  undefined *local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined2 local_34 [10];
  
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0xc))(&local_a8,param_2[1]);
    if (local_a8 == (undefined *)0x6 && local_a4 == 0) {
      *param_1 = 6;
      param_1[1] = 0;
    }
    else {
      uVar2 = extraout_r2;
      uVar1 = extraout_r12;
      if (((uint)local_a8 & 7) != 5) {
        if (local_a8 == (undefined *)0x4) {
          local_34[0] = 4;
          uVar1 = FUN_0183b9d4(local_34,local_a0);
          uVar2 = extraout_r2_00;
        }
        else {
          local_68 = local_98;
          uStack_64 = uStack_94;
          uStack_60 = uStack_90;
          uStack_5c = uStack_8c;
          uStack_58 = uStack_88;
          uStack_54 = uStack_84;
          local_50 = local_80;
          uStack_4c = uStack_7c;
          uStack_48 = uStack_78;
          uStack_44 = uStack_74;
          uStack_40 = uStack_70;
          uStack_3c = uStack_6c;
          uVar2 = local_9c;
          uVar1 = local_a0;
        }
      }
      *param_1 = (uint)local_a8;
      param_1[1] = local_a4;
      param_1[2] = uVar1;
      param_1[3] = uVar2;
      param_1[4] = local_68;
      param_1[5] = uStack_64;
      param_1[6] = uStack_60;
      param_1[7] = uStack_5c;
      param_1[8] = uStack_58;
      param_1[9] = uStack_54;
      param_1[10] = local_50;
      param_1[0xb] = uStack_4c;
      param_1[0xc] = uStack_48;
      param_1[0xd] = uStack_44;
      param_1[0xe] = uStack_40;
      param_1[0xf] = uStack_3c;
    }
  }
  else {
    local_a4 = param_2[1];
    if (param_2[2] == 0) {
      local_9c = 0;
      local_a0 = 0;
      local_a8 = &DAT_01c25b04;
    }
    else {
      local_a8 = (undefined *)*param_2;
      uVar2 = param_2[1];
      local_a0 = param_2[2];
      local_9c = param_2[3];
      *param_2 = (int)&DAT_01c25b04;
      param_2[1] = local_a4;
      param_2[2] = 0;
      param_2[3] = 0;
      local_a4 = uVar2;
      if (local_a0 != 0) {
        param_1[2] = (uint)local_a8;
        param_1[3] = uVar2;
        param_1[4] = local_a0;
        param_1[5] = local_9c;
        *param_1 = 3;
        param_1[1] = 0;
        return;
      }
    }
    *param_1 = 5;
    param_1[1] = 0;
    (**(code **)(local_a8 + 0x10))(&local_9c,local_a4,0);
  }
  return;
}

