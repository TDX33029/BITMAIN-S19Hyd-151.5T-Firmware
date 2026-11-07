// FUN_01766208 @ 01766208 size=388 calls_out=3 calls_in=3
// strings: 

void FUN_01766208(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_a8 = *param_2;
  local_a4 = param_2[1];
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  if (local_a8 == 3 && local_a4 == 0) {
    uStack_b4 = uVar8;
    if (uVar7 == 0) {
      (**(code **)(uVar3 + 0x10))(&uStack_b4,uVar6,0);
    }
    else {
      uVar2 = param_1[0x10];
      uVar4 = param_1[0x13];
      if (uVar4 == uVar2) {
        local_b0 = uVar3;
        local_ac = uVar6;
        local_a8 = uVar7;
        local_a4 = uVar8;
        FUN_0171088c();
        uVar2 = param_1[0x10];
        uVar4 = param_1[0x13];
      }
      uVar5 = param_1[0x12] + uVar4;
      param_1[0x13] = uVar4 + 1;
      uVar4 = uVar5 - uVar2;
      if (uVar5 < uVar2) {
        uVar4 = uVar5;
      }
      puVar1 = (uint *)(param_1[0x11] + uVar4 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
    }
  }
  else {
    local_a0 = param_2[2];
    iStack_9c = param_2[3];
    iStack_98 = param_2[4];
    local_94 = param_2[5];
    local_90 = param_2[6];
    iStack_8c = param_2[7];
    iStack_88 = param_2[8];
    iStack_84 = param_2[9];
    local_80 = param_2[10];
    local_7c = param_2[0xb];
    iStack_78 = param_2[0xc];
    iStack_74 = param_2[0xd];
    iStack_70 = param_2[0xe];
    iStack_6c = param_2[0xf];
    local_ac = 0;
    local_b0 = 0;
    if (*param_1 == 3 && param_1[1] == 0) {
      *param_1 = local_a8;
      param_1[1] = local_a4;
      param_1[2] = local_a0;
      param_1[3] = iStack_9c;
      param_1[4] = iStack_98;
      param_1[5] = local_94;
      param_1[6] = local_90;
      param_1[7] = iStack_8c;
      param_1[8] = iStack_88;
      param_1[9] = iStack_84;
      param_1[10] = local_80;
      param_1[0xb] = local_7c;
      param_1[0xc] = iStack_78;
      param_1[0xd] = iStack_74;
      param_1[0xe] = iStack_70;
      param_1[0xf] = iStack_6c;
    }
    else {
      local_68 = local_a8;
      iStack_64 = local_a4;
      uStack_60 = local_a0;
      iStack_5c = iStack_9c;
      iStack_58 = iStack_98;
      local_54 = local_94;
      iStack_50 = local_90;
      iStack_4c = iStack_8c;
      iStack_48 = iStack_88;
      iStack_44 = iStack_84;
      local_40 = local_80;
      iStack_3c = local_7c;
      iStack_38 = iStack_78;
      iStack_34 = iStack_74;
      iStack_30 = iStack_70;
      iStack_2c = iStack_6c;
      FUN_01735bac(param_1,&local_68);
      if ((local_b0 & 1) != 0) {
        FUN_00712e44(&local_b0);
      }
    }
  }
  return;
}

