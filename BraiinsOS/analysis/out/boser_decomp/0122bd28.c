// FUN_0122bd28 @ 0122bd28 size=1196 calls_out=13 calls_in=1
// strings: 

void FUN_0122bd28(uint *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *local_e0;
  uint *local_dc;
  uint local_d8;
  uint *local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [28];
  
  uVar8 = *param_2;
  uVar3 = 0x15;
  if ((int)uVar8 < 0) {
    uVar3 = uVar8 ^ 0x80000000;
  }
  if (uVar3 != 0xc && uVar3 != 0xd) {
    if (uVar3 != 0x15) {
      FUN_01962d40(&local_a0,param_2);
      FUN_01a41ac0(&local_70,&local_a0,&DAT_01cf9ccc,&DAT_01d064b8);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = uStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = local_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      FUN_012222e0(param_2);
      return;
    }
    local_e0 = (uint *)param_2[1];
    uVar3 = param_2[2];
    local_d4 = local_e0 + uVar3 * 8;
    local_dc = local_e0;
    local_d8 = uVar8;
    if (uVar3 == 0) {
LAB_0122c100:
      local_a0 = CONCAT31(local_a0._1_3_,0xb);
      FUN_0123bf08(&local_70,&local_a0,&DAT_01cf9cc4,&DAT_01d064b8);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = uStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = local_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
    }
    else {
      puVar4 = local_e0 + 8;
      uVar9 = *local_e0;
      local_dc = puVar4;
      if (uVar9 == 0x80000015) goto LAB_0122c100;
      puVar7 = (uint *)((uint)&local_d0 | 4);
      uVar5 = local_e0[2];
      uVar6 = local_e0[3];
      *puVar7 = local_e0[1];
      puVar7[1] = uVar5;
      puVar7[2] = uVar6;
      uVar5 = local_e0[4];
      uStack_7c = local_e0[5];
      uStack_78 = local_e0[6];
      uStack_74 = local_e0[7];
      local_d0 = uVar9;
      local_80 = uVar5;
      if (uVar3 == 1) {
LAB_0122beac:
        uStack_bc = uStack_cc;
        uStack_b8 = uStack_c8;
        uStack_b4 = uStack_c4;
        local_b0 = local_e0[5];
        uStack_ac = local_e0[6];
        uStack_a8 = local_e0[7];
        local_c0 = uVar9;
        FUN_01264de8(&local_e0);
        bVar1 = 1;
        goto LAB_0122bd70;
      }
      local_dc = local_e0 + 0x10;
      local_70 = *puVar4;
      local_6c = local_e0[9];
      local_68 = local_e0[10];
      uStack_64 = local_e0[0xb];
      local_60 = local_e0[0xc];
      uStack_5c = local_e0[0xd];
      local_58 = local_e0[0xe];
      uStack_54 = local_e0[0xf];
      if (local_70 == 0x80000015) goto LAB_0122beac;
      FUN_01222c1c(&local_70);
      local_a0 = CONCAT31(local_a0._1_3_,0xb);
      FUN_0123bf08(&local_70,&local_a0,&DAT_01cf9cc4,&DAT_01d064b8);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = uStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = local_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      FUN_012222e0(&local_80);
      FUN_012222e0(&local_d0);
    }
    FUN_01264de8(&local_e0);
    if (-1 < (int)uVar8) {
      return;
    }
    goto LAB_0122c0f0;
  }
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  bVar1 = 0;
  uVar5 = 0x80000015;
LAB_0122bd70:
  uVar9 = uStack_b8;
  uVar3 = uStack_bc;
  local_a0 = local_c0;
  local_9c = uStack_bc;
  local_98 = uStack_b8;
  local_94 = uStack_b4;
  uVar6 = 0x15;
  local_8c = local_b0;
  uStack_88 = uStack_ac;
  uStack_84 = uStack_a8;
  if ((int)local_c0 < 0) {
    uVar6 = local_c0 ^ 0x80000000;
  }
  local_90 = uVar5;
  switch(uVar6) {
  case 1:
    uVar3 = uStack_bc & 0xff;
    uVar9 = 0;
    goto LAB_0122bf30;
  default:
    FUN_012223f8(&local_70,&local_a0,&local_d0,&DAT_01c24714);
    goto LAB_0122bf74;
  case 4:
    uVar3 = uStack_b8;
    uVar9 = uStack_b4;
LAB_0122bf30:
    FUN_01226840(&local_70,&switchD_0122bdc8::switchdataD_0122bdcc,uVar3,uVar9);
    if ((uVar6 | 2) != 0xe) break;
    goto LAB_0122bf74;
  case 0xc:
    FUN_01232b30(&local_70,uStack_b8,uStack_b4);
    goto LAB_0122bf68;
  case 0xd:
    FUN_01232b30(&local_70,uStack_bc,uStack_b8);
    break;
  case 0xe:
    FUN_012257c4(&local_70,uStack_b8,uStack_b4);
LAB_0122bf68:
    FUN_019bb7e0(uVar3,uVar9);
    goto LAB_0122bf74;
  case 0xf:
    FUN_012257c4(&local_70,uStack_bc,uStack_b8);
  }
  FUN_012222e0(&local_a0);
LAB_0122bf74:
  uVar6 = local_68;
  uVar5 = local_6c;
  uVar9 = local_70;
  uVar3 = local_90;
  if (local_70 == 2) {
    uVar2 = (undefined1)local_6c;
    uVar3 = local_6c & 0xff;
    FUN_01bed4e2((uint)auStack_40 | 7,&local_90,0x10);
    FUN_01bed4e2(&local_80,(uint)auStack_40 | 7,0x10);
    if (uVar3 == 0) {
      FUN_01223840(&local_70,&local_80);
    }
    else if (uVar3 == 1) {
      FUN_01223840(&local_70,&local_80);
    }
    else {
      FUN_01223840(&local_70,&local_80);
    }
    if (local_70 == 2) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = uVar2;
    }
    else {
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = uStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = local_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      *param_1 = local_70;
    }
  }
  else {
    FUN_01bed4e2(auStack_40,(int)&local_68 + 1,0x17);
    local_80 = local_50;
    uStack_7c = uStack_4c;
    uStack_78 = uStack_48;
    uStack_74 = uStack_44;
    if (uVar3 != 0x80000015) {
      FUN_012222e0(&local_90);
    }
    local_70 = local_80;
    local_6c = uStack_7c;
    local_68 = uStack_78;
    uStack_64 = uStack_74;
    FUN_01bed4e2((int)param_1 + 9,auStack_40,0x17);
    *(char *)(param_1 + 2) = (char)uVar6;
    *param_1 = uVar9;
    param_1[1] = uVar5;
    param_1[8] = local_70;
    param_1[9] = local_6c;
    param_1[10] = local_68;
    param_1[0xb] = uStack_64;
  }
  if ((bool)(bVar1 & (int)uVar8 < 0)) {
LAB_0122c0f0:
    FUN_012222e0(param_2);
  }
  return;
}

