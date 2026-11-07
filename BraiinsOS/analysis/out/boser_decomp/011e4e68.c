// FUN_011e4e68 @ 011e4e68 size=500 calls_out=5 calls_in=1
// strings: 

void FUN_011e4e68(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint unaff_r4;
  uint *puVar4;
  uint unaff_r7;
  uint uVar5;
  undefined4 *puVar6;
  uint extraout_r12;
  bool bVar7;
  undefined8 uVar8;
  uint local_88;
  uint *local_84;
  uint local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 *local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  
  uVar5 = *param_2;
  uVar1 = 0x15;
  bVar7 = false;
  if ((int)uVar5 < 0) {
    uVar1 = uVar5 ^ 0x80000000;
  }
  puVar6 = (undefined4 *)0x0;
  if (uVar1 != 0x10) {
    puVar2 = &local_38;
    if (uVar1 == 0x11) {
      puVar3 = (undefined4 *)param_2[1];
      local_58 = *puVar3;
      unaff_r4 = puVar3[1];
      uStack_50 = puVar3[2];
      unaff_r7 = puVar3[3];
      uStack_54 = unaff_r4;
      uStack_4c = unaff_r7;
      FUN_00fe54c0(&local_48);
      puVar6 = local_48;
      bVar7 = local_48 == (undefined4 *)0x0;
      if (bVar7) {
        unaff_r4 = local_44;
      }
      else {
        puVar2 = (uint *)((uint)&local_48 | 4);
        local_78 = *puVar2;
        uStack_74 = puVar2[1];
        uStack_70 = puVar2[2];
        local_88 = local_34;
        local_80 = local_30;
        local_84 = local_2c;
        unaff_r7 = local_38;
      }
      thunk_FUN_01be4678(puVar3);
    }
    else if (uVar1 != 0x12) {
      unaff_r7 = 0x11e4ebc;
      FUN_00fe54c0(&local_48,param_2);
      puVar6 = local_48;
      if (local_48 == (undefined4 *)0x0) {
        bVar7 = true;
        unaff_r4 = local_44;
        local_30 = extraout_r12;
      }
      else {
        puVar2 = (uint *)((uint)&local_48 | 4);
        bVar7 = false;
        local_78 = *puVar2;
        uStack_74 = puVar2[1];
        uStack_70 = puVar2[2];
        local_88 = local_34;
        puVar2 = local_2c;
        unaff_r7 = local_38;
      }
      goto LAB_011e4f94;
    }
  }
  if (uVar5 != 0x80000011) {
    FUN_00db3970(param_2);
  }
  puVar2 = local_84;
  local_30 = local_80;
LAB_011e4f94:
  if (bVar7) {
    *param_1 = 0;
    param_1[1] = unaff_r4;
  }
  else {
    puVar4 = &local_68;
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    if (puVar6 == (undefined4 *)0x0) {
      uVar8 = thunk_FUN_01bee35a(puVar4,0x2c0);
      puVar4 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
      if ((char)puVar4[4] == '\0') {
        FUN_019ae6ac(&local_48);
        *puVar4 = (uint)local_48;
        puVar4[1] = local_44;
        puVar4[2] = uStack_40;
        puVar4[3] = uStack_3c;
        *(undefined1 *)(puVar4 + 4) = 1;
      }
      unaff_r7 = *puVar4;
      local_88 = puVar4[1];
      local_30 = puVar4[2];
      puVar2 = (uint *)puVar4[3];
      *puVar4 = unaff_r7 + 1;
      puVar4[1] = local_88 + (0xfffffffe < unaff_r7);
      puVar6 = &DAT_0056d238;
      puVar4 = &DAT_01d3084c;
    }
    uVar1 = puVar4[1];
    uVar5 = puVar4[2];
    param_1[1] = *puVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar5;
    param_1[4] = unaff_r7;
    param_1[5] = local_88;
    param_1[6] = local_30;
    param_1[7] = puVar2;
    *param_1 = puVar6;
  }
  return;
}

