// FUN_014dc9d4 @ 014dc9d4 size=1156 calls_out=12 calls_in=1
// strings: 

void FUN_014dc9d4(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *local_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  undefined1 *puStack_a4;
  uint *local_a0;
  uint *local_9c;
  undefined1 *local_98;
  uint *local_94;
  undefined1 *local_90;
  uint *puStack_8c;
  uint *puStack_88;
  undefined1 *puStack_84;
  uint *local_80;
  uint *puStack_7c;
  undefined1 *puStack_78;
  undefined1 *local_70;
  uint *local_6c;
  uint *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  uint *local_5c;
  uint *puStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  uint *puStack_4c;
  uint *puStack_48;
  undefined1 *puStack_44;
  char local_40;
  byte local_3f;
  uint local_3c;
  undefined1 *local_38;
  uint uStack_34;
  uint *local_30;
  undefined1 *local_2c;
  
  puVar13 = (undefined1 *)*param_2;
  *param_2 = 0x80000015;
  if (puVar13 == (undefined1 *)0x80000015) {
    uVar9 = FUN_019678c0(&DAT_0056ad38,0x10);
    *(undefined4 *)(param_1 + 4) = uVar9;
    *param_1 = 1;
    return;
  }
  puVar6 = (undefined4 *)((uint)&local_b0 | 4);
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar5 = 0x15;
  if ((int)puVar13 < 0) {
    uVar5 = (uint)puVar13 ^ 0x80000000;
  }
  *puVar6 = param_2[1];
  puVar6[1] = uVar9;
  puVar6[2] = uVar10;
  local_b0 = puVar13;
  if (uVar5 != 0xc && uVar5 != 0xd) {
    if (uVar5 != 0x15) {
      FUN_01962d40(&local_70,&local_b0);
      uVar9 = FUN_01967538(&local_70,&DAT_01cf9ccc,&DAT_01d064b8);
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = uVar9;
      FUN_014c81b0(&local_b0);
      return;
    }
    local_94 = puStack_ac + (int)puStack_a8 * 8;
    local_a0 = puStack_ac;
    local_9c = puStack_ac;
    local_98 = puVar13;
    if (puStack_a8 == (uint *)0x0) {
LAB_014dcd44:
      local_70 = (undefined1 *)CONCAT31(local_70._1_3_,0xb);
      uVar9 = FUN_01967740(&local_70,&DAT_01cf9cc4,&DAT_01d064b8);
      *(undefined4 *)(param_1 + 4) = uVar9;
      *param_1 = 1;
    }
    else {
      puVar7 = puStack_ac + 8;
      puVar14 = (undefined1 *)*puStack_ac;
      local_9c = puVar7;
      if (puVar14 == (undefined1 *)0x80000015) goto LAB_014dcd44;
      puVar8 = (uint *)((uint)&local_50 | 4);
      uVar5 = puStack_ac[2];
      uVar12 = puStack_ac[3];
      *puVar8 = puStack_ac[1];
      puVar8[1] = uVar5;
      puVar8[2] = uVar12;
      puVar11 = (undefined1 *)puStack_ac[4];
      uStack_34 = puStack_ac[5];
      local_30 = (uint *)puStack_ac[6];
      local_2c = (undefined1 *)puStack_ac[7];
      local_50 = puVar14;
      local_38 = puVar11;
      if (puStack_a8 == (uint *)&DAT_00000001) {
LAB_014dcbb4:
        puStack_8c = puStack_4c;
        puStack_88 = puStack_48;
        puStack_84 = puStack_44;
        local_80 = (uint *)puStack_ac[5];
        puStack_7c = (uint *)puStack_ac[6];
        puStack_78 = (undefined1 *)puStack_ac[7];
        local_90 = puVar14;
        FUN_014deae0(&local_a0);
        bVar1 = 1;
        goto LAB_014dca38;
      }
      local_9c = puStack_ac + 0x10;
      local_70 = (undefined1 *)*puVar7;
      local_6c = (uint *)puStack_ac[9];
      local_68 = (uint *)puStack_ac[10];
      local_64 = (undefined1 *)puStack_ac[0xb];
      local_60 = (undefined1 *)puStack_ac[0xc];
      local_5c = (uint *)puStack_ac[0xd];
      puStack_58 = (uint *)puStack_ac[0xe];
      puStack_54 = (undefined1 *)puStack_ac[0xf];
      if (local_70 == (undefined1 *)0x80000015) goto LAB_014dcbb4;
      FUN_014c9508(&local_70);
      local_70 = (undefined1 *)CONCAT31(local_70._1_3_,0xb);
      uVar9 = FUN_01967740(&local_70,&DAT_01cf9cc4,&DAT_01d064b8);
      *(undefined4 *)(param_1 + 4) = uVar9;
      *param_1 = 1;
      FUN_014c81b0(&local_38);
      FUN_014c81b0(&local_50);
    }
    FUN_014deae0(&local_a0);
    if (-1 < (int)puVar13) {
      return;
    }
    goto LAB_014dcd04;
  }
  bVar1 = 0;
  puStack_8c = puStack_ac;
  puStack_88 = puStack_a8;
  puStack_84 = puStack_a4;
  puVar11 = (undefined1 *)0x80000015;
  local_90 = puVar13;
LAB_014dca38:
  local_70 = local_90;
  local_6c = puStack_8c;
  local_68 = puStack_88;
  local_64 = puStack_84;
  local_5c = local_80;
  puStack_58 = puStack_7c;
  puStack_54 = puStack_78;
  uVar5 = 0x15;
  puStack_4c = local_80;
  puStack_48 = puStack_7c;
  puStack_44 = puStack_78;
  if ((int)local_90 < 0) {
    uVar5 = (uint)local_90 ^ 0x80000000;
  }
  local_60 = puVar11;
  local_50 = puVar11;
  switch(uVar5) {
  case 1:
    puStack_8c = (uint *)((uint)puStack_8c & 0xff);
    if (puStack_8c == (uint *)0x0) {
LAB_014dcc8c:
      local_40 = '\0';
      local_3f = 0;
    }
    else {
      if (puStack_8c != (uint *)&DAT_00000001) {
        local_2c = (undefined1 *)0x0;
        local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
        local_30 = puStack_8c;
        local_3c = FUN_01967740(&local_38,&DAT_01cfa36c,&DAT_01d064b8);
        goto LAB_014dce8c;
      }
LAB_014dcc4c:
      local_40 = '\0';
      local_3f = 1;
    }
    break;
  default:
    local_3c = FUN_014c8278(&local_70,&local_38,&DAT_01cf9de4);
    local_40 = '\x01';
    goto LAB_014dcca0;
  case 4:
    if (puStack_88 == (uint *)0x0 && puStack_84 == (undefined1 *)0x0) goto LAB_014dcc8c;
    if (!(puStack_88 != (uint *)&DAT_00000001 || puStack_84 != (undefined1 *)0x0))
    goto LAB_014dcc4c;
    local_30 = puStack_88;
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    local_2c = puStack_84;
    local_3c = FUN_01967740(&local_38,&DAT_01cfa36c,&DAT_01d064b8);
LAB_014dce8c:
    local_40 = '\x01';
    break;
  case 0xc:
    FUN_014eed10(&local_40,puStack_88,puStack_84);
    goto LAB_014dcc78;
  case 0xd:
    FUN_014eed10(&local_40,puStack_8c,puStack_88);
    break;
  case 0xe:
    FUN_014e6fe0(&local_40,puStack_88,puStack_84);
LAB_014dcc78:
    FUN_019bb7e0(puStack_8c,puStack_88);
    goto LAB_014dcca0;
  case 0xf:
    FUN_014e6fe0(&local_40,puStack_8c,puStack_88);
  }
  FUN_014c81b0(&local_70);
LAB_014dcca0:
  uVar5 = local_3c;
  bVar2 = local_3f;
  if (local_40 == '\x01') {
    if (local_60 != (undefined1 *)0x80000015) {
      FUN_014c81b0(&local_60);
    }
LAB_014dcce4:
    uVar3 = 1;
    *(uint *)(param_1 + 4) = uVar5;
LAB_014dccec:
    *param_1 = uVar3;
  }
  else {
    uVar5 = (uint)local_3f;
    local_a0 = local_5c;
    local_9c = puStack_58;
    local_98 = puStack_54;
    if (puVar11 == &DAT_80000016) goto LAB_014dcce4;
    puVar6 = (undefined4 *)((uint)&local_38 | 4);
    *puVar6 = local_5c;
    puVar6[1] = puStack_58;
    puVar6[2] = puStack_54;
    local_38 = puVar11;
    iVar4 = FUN_014d8234();
    if (iVar4 == 0) {
      uVar3 = 0;
      param_1[1] = bVar2;
      goto LAB_014dccec;
    }
    *(int *)(param_1 + 4) = iVar4;
    *param_1 = 1;
  }
  if ((bool)(bVar1 & (int)puVar13 < 0)) {
LAB_014dcd04:
    FUN_014c81b0(&local_b0);
  }
  return;
}

