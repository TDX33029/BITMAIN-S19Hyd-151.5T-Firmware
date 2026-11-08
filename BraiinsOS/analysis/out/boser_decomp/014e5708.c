// FUN_014e5708 @ 014e5708 size=1104 calls_out=11 calls_in=2
// strings: 

void FUN_014e5708(undefined1 *param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *local_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  undefined1 *local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint *local_80;
  uint *puStack_7c;
  uint uStack_78;
  undefined1 *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined1 *local_60;
  uint *local_5c;
  uint *puStack_58;
  uint uStack_54;
  undefined1 *local_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint uStack_44;
  char local_40;
  byte local_3f;
  uint local_3c;
  undefined1 *local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  uVar12 = *param_2;
  uVar4 = 0x15;
  if ((int)uVar12 < 0) {
    uVar4 = uVar12 ^ 0x80000000;
  }
  if (uVar4 != 0xc && uVar4 != 0xd) {
    if (uVar4 != 0x15) {
      FUN_01962d40(&local_70,param_2);
      uVar5 = FUN_01967538(&local_70,&DAT_01cf9ccc,&DAT_01d064b8);
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = uVar5;
      FUN_014c81b0(param_2);
      return;
    }
    local_a0 = (uint *)param_2[1];
    uVar4 = param_2[2];
    local_94 = local_a0 + uVar4 * 8;
    local_9c = local_a0;
    local_98 = uVar12;
    if (uVar4 != 0) {
      puVar7 = local_a0 + 8;
      local_90 = (undefined1 *)*local_a0;
      local_9c = puVar7;
      if (local_90 != (undefined1 *)0x80000015) {
        puVar10 = (uint *)((uint)&local_50 | 4);
        uVar11 = local_a0[2];
        uVar6 = local_a0[3];
        *puVar10 = local_a0[1];
        puVar10[1] = uVar11;
        puVar10[2] = uVar6;
        puVar9 = (undefined1 *)local_a0[4];
        uStack_34 = local_a0[5];
        local_30 = local_a0[6];
        local_2c = local_a0[7];
        local_50 = local_90;
        local_38 = puVar9;
        if (uVar4 != 1) {
          local_9c = local_a0 + 0x10;
          local_70 = (undefined1 *)*puVar7;
          local_6c = local_a0[9];
          local_68 = local_a0[10];
          local_64 = local_a0[0xb];
          local_60 = (undefined1 *)local_a0[0xc];
          local_5c = (uint *)local_a0[0xd];
          puStack_58 = (uint *)local_a0[0xe];
          uStack_54 = local_a0[0xf];
          if (local_70 != (undefined1 *)0x80000015) {
            FUN_014c9508(&local_70);
            local_70 = (undefined1 *)CONCAT31(local_70._1_3_,0xb);
            uVar5 = FUN_01967740(&local_70,&DAT_01cf9cc4,&DAT_01d064b8);
            *(undefined4 *)(param_1 + 4) = uVar5;
            *param_1 = 1;
            FUN_014c81b0(&local_38);
            FUN_014c81b0(&local_50);
            goto LAB_014e5ad8;
          }
        }
        uStack_8c = (uint)puStack_4c;
        uStack_88 = (uint)puStack_48;
        uStack_84 = uStack_44;
        local_80 = (uint *)local_a0[5];
        puStack_7c = (uint *)local_a0[6];
        uStack_78 = local_a0[7];
        FUN_014deae0(&local_a0);
        bVar1 = true;
        goto LAB_014e574c;
      }
    }
    local_70 = (undefined1 *)CONCAT31(local_70._1_3_,0xb);
    uVar5 = FUN_01967740(&local_70,&DAT_01cf9cc4,&DAT_01d064b8);
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = 1;
LAB_014e5ad8:
    FUN_014deae0(&local_a0);
    if (uVar12 < 0x80000000) {
      return;
    }
    FUN_014c81b0(param_2);
    return;
  }
  local_90 = (undefined1 *)*param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  puVar9 = (undefined1 *)0x80000015;
  bVar1 = false;
LAB_014e574c:
  uVar11 = uStack_88;
  uVar4 = uStack_8c;
  local_70 = local_90;
  local_6c = uStack_8c;
  local_68 = uStack_88;
  local_64 = uStack_84;
  local_5c = local_80;
  puStack_58 = puStack_7c;
  uStack_54 = uStack_78;
  uVar6 = 0x15;
  puStack_4c = local_80;
  puStack_48 = puStack_7c;
  uStack_44 = uStack_78;
  if ((int)local_90 < 0) {
    uVar6 = (uint)local_90 ^ 0x80000000;
  }
  local_60 = puVar9;
  local_50 = puVar9;
  switch(uVar6) {
  case 1:
    uVar4 = uStack_8c & 0xff;
    if (uVar4 == 0) {
LAB_014e59a8:
      local_40 = '\0';
      local_3f = 0;
    }
    else {
      if (uVar4 == 1) goto LAB_014e5968;
      local_2c = 0;
      local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
      local_30 = uVar4;
      local_3c = FUN_01967740(&local_38,&DAT_01cfa36c,&DAT_01d064b8);
LAB_014e5b8c:
      local_40 = '\x01';
    }
    break;
  default:
    local_3c = FUN_014c8278(&local_70,&local_38,&DAT_01cf9f04);
    local_40 = '\x01';
    goto LAB_014e59bc;
  case 4:
    if (uStack_88 == 0 && uStack_84 == 0) goto LAB_014e59a8;
    if (!(uStack_88 == 1 && uStack_84 == 0)) {
      local_30 = uStack_88;
      local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
      local_2c = uStack_84;
      local_3c = FUN_01967740(&local_38,&DAT_01cfa36c,&DAT_01d064b8);
      goto LAB_014e5b8c;
    }
LAB_014e5968:
    local_40 = '\0';
    local_3f = 1;
    break;
  case 0xc:
    FUN_014eed10(&local_40,uStack_88,uStack_84);
    goto LAB_014e5994;
  case 0xd:
    FUN_014eed10(&local_40,uStack_8c,uStack_88);
    break;
  case 0xe:
    FUN_014e6fe0(&local_40,uStack_88,uStack_84);
LAB_014e5994:
    FUN_019bb7e0(uVar4,uVar11);
    goto LAB_014e59bc;
  case 0xf:
    FUN_014e6fe0(&local_40,uStack_8c,uStack_88);
  }
  FUN_014c81b0(&local_70);
LAB_014e59bc:
  uVar4 = local_3c;
  bVar2 = local_3f;
  if (local_40 == '\x01') {
    if (local_60 != (undefined1 *)0x80000015) {
      FUN_014c81b0(&local_60);
    }
  }
  else {
    uVar4 = (uint)local_3f;
    local_a0 = local_5c;
    local_9c = puStack_58;
    local_98 = uStack_54;
    if (puVar9 != &DAT_80000016) {
      piVar8 = (int *)((uint)&local_38 | 4);
      *piVar8 = (int)local_5c;
      piVar8[1] = (int)puStack_58;
      piVar8[2] = uStack_54;
      local_38 = puVar9;
      uVar4 = FUN_014d8234();
      if (uVar4 == 0) {
        uVar3 = 0;
        param_1[1] = bVar2;
        goto LAB_014e5a0c;
      }
    }
  }
  *(uint *)(param_1 + 4) = uVar4;
  uVar3 = 1;
LAB_014e5a0c:
  *param_1 = uVar3;
  if (bVar1 && 0x7fffffff < uVar12) {
    FUN_014c81b0(param_2);
  }
  return;
}

