// FUN_014dbe88 @ 014dbe88 size=956 calls_out=12 calls_in=2
// strings: 

void FUN_014dbe88(undefined1 *param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint *local_98;
  uint *local_94;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar11 = *param_2;
  uVar4 = 0x15;
  if ((int)uVar11 < 0) {
    uVar4 = uVar11 ^ 0x80000000;
  }
  if (uVar4 != 0xc && uVar4 != 0xd) {
    if (uVar4 != 0x15) {
      FUN_01962d40(&local_58,param_2);
      uVar5 = FUN_01967538(&local_58,&DAT_01cf9ccc,&DAT_01d064b8);
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = uVar5;
      FUN_014c81b0(param_2);
      return;
    }
    local_98 = (uint *)param_2[1];
    uVar4 = param_2[2];
    local_8c = local_98 + uVar4 * 8;
    local_94 = local_98;
    local_90 = uVar11;
    if (uVar4 != 0) {
      puVar6 = local_98 + 8;
      local_78 = *local_98;
      local_94 = puVar6;
      if (local_78 != 0x80000015) {
        puVar7 = (uint *)((uint)&local_88 | 4);
        uVar8 = local_98[2];
        uVar10 = local_98[3];
        *puVar7 = local_98[1];
        puVar7[1] = uVar8;
        puVar7[2] = uVar10;
        puVar9 = (undefined1 *)local_98[4];
        local_34 = local_98[5];
        uStack_30 = local_98[6];
        uStack_2c = local_98[7];
        local_88 = local_78;
        local_38 = puVar9;
        if (uVar4 != 1) {
          local_94 = local_98 + 0x10;
          local_58 = *puVar6;
          local_54 = local_98[9];
          local_50 = local_98[10];
          local_4c = local_98[0xb];
          local_48 = (undefined1 *)local_98[0xc];
          local_44 = local_98[0xd];
          uStack_40 = local_98[0xe];
          uStack_3c = local_98[0xf];
          if (local_58 != 0x80000015) {
            FUN_014c9508(&local_58);
            local_58 = CONCAT31(local_58._1_3_,0xb);
            uVar5 = FUN_01967740(&local_58,&DAT_01cf9cc4,&DAT_01d064b8);
            *(undefined4 *)(param_1 + 4) = uVar5;
            *param_1 = 1;
            FUN_014c81b0(&local_38);
            FUN_014c81b0(&local_88);
            goto LAB_014dc1f4;
          }
        }
        uStack_74 = uStack_84;
        uStack_70 = uStack_80;
        uStack_6c = uStack_7c;
        local_68 = local_98[5];
        uStack_64 = local_98[6];
        uStack_60 = local_98[7];
        FUN_014deae0(&local_98);
        bVar1 = true;
        goto LAB_014dbecc;
      }
    }
    local_58 = CONCAT31(local_58._1_3_,0xb);
    uVar5 = FUN_01967740(&local_58,&DAT_01cf9cc4,&DAT_01d064b8);
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = 1;
LAB_014dc1f4:
    FUN_014deae0(&local_98);
    if (uVar11 < 0x80000000) {
      return;
    }
    FUN_014c81b0(param_2);
    return;
  }
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  bVar1 = false;
  puVar9 = (undefined1 *)0x80000015;
LAB_014dbecc:
  uVar8 = uStack_70;
  uVar4 = uStack_74;
  local_58 = local_78;
  local_54 = uStack_74;
  local_50 = uStack_70;
  local_4c = uStack_6c;
  local_44 = local_68;
  uStack_40 = uStack_64;
  uStack_3c = uStack_60;
  uVar10 = 0x15;
  if ((int)local_78 < 0) {
    uVar10 = local_78 ^ 0x80000000;
  }
  local_48 = puVar9;
  switch(uVar10) {
  case 1:
    uVar4 = uStack_74 & 0xff;
    uVar8 = 0;
    goto LAB_014dc090;
  default:
    local_34 = FUN_014c8278(&local_58,&local_98,&DAT_01cf9e64);
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    goto LAB_014dc0dc;
  case 4:
    uVar4 = uStack_70;
    uVar8 = uStack_6c;
LAB_014dc090:
    FUN_014dbc2c(&local_38,&switchD_014dbf28::switchdataD_014dbf2c,uVar4,uVar8);
    if ((uVar10 | 2) != 0xe) break;
    goto LAB_014dc0dc;
  case 0xc:
    FUN_014dc48c(&local_38,uStack_70,uStack_6c);
    goto LAB_014dc0cc;
  case 0xd:
    FUN_014dc48c(&local_38,uStack_74,uStack_70);
    break;
  case 0xe:
    FUN_014db9f0(&local_38,uStack_70,uStack_6c);
LAB_014dc0cc:
    FUN_019bb7e0(uVar4,uVar8);
    goto LAB_014dc0dc;
  case 0xf:
    FUN_014db9f0(&local_38,uStack_74,uStack_70);
  }
  FUN_014c81b0(&local_58);
LAB_014dc0dc:
  uVar4 = local_34;
  if ((char)local_38 == '\x01') {
    if (puVar9 != (undefined1 *)0x80000015) {
      FUN_014c81b0(&local_48);
    }
  }
  else {
    bVar2 = local_38._1_1_;
    uVar4 = (uint)local_38._1_1_;
    local_88 = local_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    if (puVar9 != &DAT_80000016) {
      puVar6 = (uint *)((uint)&local_38 | 4);
      *puVar6 = local_68;
      puVar6[1] = uStack_64;
      puVar6[2] = uStack_60;
      local_38 = puVar9;
      uVar4 = FUN_014d8234();
      if (uVar4 == 0) {
        uVar3 = 0;
        param_1[1] = bVar2;
        goto LAB_014dc128;
      }
    }
  }
  *(uint *)(param_1 + 4) = uVar4;
  uVar3 = 1;
LAB_014dc128:
  *param_1 = uVar3;
  if (bVar1 && 0x7fffffff < uVar11) {
    FUN_014c81b0(param_2);
  }
  return;
}

