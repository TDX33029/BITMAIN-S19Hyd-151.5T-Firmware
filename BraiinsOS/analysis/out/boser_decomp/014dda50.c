// FUN_014dda50 @ 014dda50 size=1000 calls_out=12 calls_in=1
// strings: 

uint FUN_014dda50(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_a8;
  uint *puStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [4];
  uint *local_94;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint *puStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint *puStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar8 = *param_1;
  *param_1 = 0x80000015;
  if (uVar8 == 0x80000015) {
    uVar8 = FUN_019678c0(&DAT_0056ad38,0x10);
    return uVar8;
  }
  puVar3 = (uint *)((uint)&local_a8 | 4);
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar2 = 0x15;
  if ((int)uVar8 < 0) {
    uVar2 = uVar8 ^ 0x80000000;
  }
  *puVar3 = param_1[1];
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  local_a8 = uVar8;
  if (uVar2 != 0xc && uVar2 != 0xd) {
    if (uVar2 != 0x15) {
      FUN_01962d40(&local_58,&local_a8);
      uVar8 = FUN_01967538(&local_58,&DAT_01cf9ccc,&DAT_01d064b8);
      FUN_014c81b0(&local_a8);
      return uVar8;
    }
    local_8c = puStack_a4 + uStack_a0 * 8;
    local_94 = puStack_a4;
    local_90 = uVar8;
    if (uStack_a0 == 0) {
LAB_014ddd50:
      local_58 = CONCAT31(local_58._1_3_,0xb);
      uVar2 = FUN_01967740(&local_58,&DAT_01cf9cc4,&DAT_01d064b8);
    }
    else {
      puVar3 = puStack_a4 + 8;
      uVar2 = *puStack_a4;
      local_94 = puVar3;
      if (uVar2 == 0x80000015) goto LAB_014ddd50;
      puVar4 = (uint *)((uint)&local_88 | 4);
      uVar5 = puStack_a4[2];
      uVar6 = puStack_a4[3];
      *puVar4 = puStack_a4[1];
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar7 = (undefined1 *)puStack_a4[4];
      local_34 = puStack_a4[5];
      local_30 = puStack_a4[6];
      local_2c = puStack_a4[7];
      local_88 = uVar2;
      local_38 = puVar7;
      if (uStack_a0 == 1) {
LAB_014ddc18:
        puStack_74 = puStack_84;
        uStack_70 = uStack_80;
        uStack_6c = uStack_7c;
        local_68 = puStack_a4[5];
        local_64 = puStack_a4[6];
        local_60 = puStack_a4[7];
        local_78 = uVar2;
        FUN_014deae0(local_98);
        bVar1 = 1;
        goto LAB_014ddab0;
      }
      local_94 = puStack_a4 + 0x10;
      local_58 = *puVar3;
      local_54 = (uint *)puStack_a4[9];
      local_50 = puStack_a4[10];
      local_4c = puStack_a4[0xb];
      local_48 = (undefined1 *)puStack_a4[0xc];
      local_44 = puStack_a4[0xd];
      uStack_40 = puStack_a4[0xe];
      uStack_3c = puStack_a4[0xf];
      if (local_58 == 0x80000015) goto LAB_014ddc18;
      FUN_014c9508(&local_58);
      local_58 = CONCAT31(local_58._1_3_,0xb);
      uVar2 = FUN_01967740(&local_58,&DAT_01cf9cc4,&DAT_01d064b8);
      FUN_014c81b0(&local_38);
      FUN_014c81b0(&local_88);
    }
    FUN_014deae0(local_98);
    if (-1 < (int)uVar8) {
      return uVar2;
    }
    goto LAB_014ddd3c;
  }
  bVar1 = 0;
  puVar7 = (undefined1 *)0x80000015;
  puStack_74 = puStack_a4;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  local_78 = uVar8;
LAB_014ddab0:
  local_58 = local_78;
  local_54 = puStack_74;
  local_50 = uStack_70;
  local_4c = uStack_6c;
  uVar2 = 0x15;
  local_44 = local_68;
  uStack_40 = local_64;
  uStack_3c = local_60;
  if ((int)local_78 < 0) {
    uVar2 = local_78 ^ 0x80000000;
  }
  local_48 = puVar7;
  switch(uVar2) {
  case 1:
    uVar2 = 0;
    if (((uint)puStack_74 & 0xff) != 0) {
      local_2c = 0;
      local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
      local_30 = (uint)puStack_74 & 0xff;
      uVar2 = FUN_01967740(&local_38,&DAT_01cfa524,&DAT_01d064b8);
      break;
    }
    goto LAB_014ddc9c;
  default:
    uVar2 = FUN_014c8278(&local_58,&local_88,&DAT_01cf9f24);
    goto LAB_014ddce0;
  case 4:
    uVar2 = 0;
    if (uStack_70 == 0 && uStack_6c == 0) goto LAB_014ddc9c;
    local_30 = uStack_70;
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    local_2c = uStack_6c;
    uVar2 = FUN_01967740(&local_38,&DAT_01cfa524,&DAT_01d064b8);
    break;
  case 0xc:
    uVar2 = FUN_014f3dd0(uStack_70,uStack_6c);
    goto LAB_014ddcbc;
  case 0xd:
    uVar2 = FUN_014f3dd0(puStack_74,uStack_70);
    break;
  case 0xe:
    uVar2 = FUN_014f0a98(uStack_70,uStack_6c);
LAB_014ddcbc:
    FUN_019bb7e0(puStack_74,uStack_70);
    goto LAB_014ddccc;
  case 0xf:
    uVar2 = FUN_014f0a98(puStack_74,uStack_70);
  }
LAB_014ddc9c:
  FUN_014c81b0(&local_58);
LAB_014ddccc:
  local_38 = local_48;
  local_34 = local_44;
  local_30 = uStack_40;
  local_2c = uStack_3c;
  if (uVar2 == 0) {
    uVar2 = local_44;
    if (puVar7 != &DAT_80000016) {
      local_2c = local_60;
      local_30 = local_64;
      local_38 = puVar7;
      uVar2 = FUN_014d8234(&local_38);
    }
  }
  else {
LAB_014ddce0:
    local_38 = local_48;
    local_34 = local_44;
    local_30 = uStack_40;
    local_2c = uStack_3c;
    if (local_48 != (undefined1 *)0x80000015) {
      FUN_014c81b0(&local_38);
    }
  }
  if ((bool)(bVar1 & (int)uVar8 < 0)) {
LAB_014ddd3c:
    FUN_014c81b0(&local_a8);
  }
  return uVar2;
}

