// FUN_0122a118 @ 0122a118 size=1292 calls_out=13 calls_in=1
// strings: 

void FUN_0122a118(int *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint *local_94;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined1 local_72;
  uint *local_70;
  uint *local_6c;
  undefined4 local_68;
  uint *puStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint *local_50;
  uint *puStack_4c;
  uint uStack_48;
  uint *puStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  undefined1 local_2a;
  
  uVar8 = *param_2;
  uVar3 = 0x15;
  if ((int)uVar8 < 0) {
    uVar3 = uVar8 ^ 0x80000000;
  }
  if (uVar3 != 0xc && uVar3 != 0xd) {
    if (uVar3 != 0x15) {
      FUN_01962d40(&local_b8);
      FUN_01a41ac0(&local_70,&local_b8,&DAT_01cf9ccc,&DAT_01d064b8);
      *param_1 = (int)local_70;
      param_1[1] = (int)local_6c;
      param_1[2] = local_68;
      param_1[3] = (int)puStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = (int)local_50;
      param_1[9] = (int)puStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = (int)puStack_44;
      FUN_012222e0(param_2);
      return;
    }
    local_98 = (uint *)param_2[1];
    uVar3 = param_2[2];
    local_8c = local_98 + uVar3 * 8;
    local_94 = local_98;
    local_90 = uVar8;
    if (uVar3 == 0) {
LAB_0122a560:
      local_b8 = CONCAT31(local_b8._1_3_,0xb);
      FUN_0123bf08(&local_70,&local_b8,&DAT_01cf9cc4,&DAT_01d064b8);
      *param_1 = (int)local_70;
      param_1[1] = (int)local_6c;
      param_1[2] = local_68;
      param_1[3] = (int)puStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = (int)local_50;
      param_1[9] = (int)puStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = (int)puStack_44;
    }
    else {
      puVar4 = local_98 + 8;
      local_d8 = *local_98;
      local_94 = puVar4;
      if (local_d8 == 0x80000015) goto LAB_0122a560;
      puVar6 = (uint *)((uint)&local_88 | 4);
      uVar5 = local_98[2];
      uVar7 = local_98[3];
      *puVar6 = local_98[1];
      puVar6[1] = uVar5;
      puVar6[2] = uVar7;
      uVar5 = local_98[4];
      uStack_3c = local_98[5];
      uStack_38 = local_98[6];
      uStack_34 = local_98[7];
      local_88 = local_d8;
      local_40 = uVar5;
      if (uVar3 == 1) {
LAB_0122a29c:
        uStack_d4 = uStack_84;
        uStack_d0 = uStack_80;
        uStack_cc = uStack_7c;
        local_c8 = local_98[5];
        uStack_c4 = local_98[6];
        uStack_c0 = local_98[7];
        FUN_01264de8(&local_98);
        bVar1 = 1;
        goto LAB_0122a158;
      }
      local_94 = local_98 + 0x10;
      local_70 = (uint *)*puVar4;
      local_6c = (uint *)local_98[9];
      local_68 = local_98[10];
      puStack_64 = (uint *)local_98[0xb];
      local_60 = local_98[0xc];
      uStack_5c = local_98[0xd];
      local_58 = local_98[0xe];
      uStack_54 = local_98[0xf];
      if (local_70 == (uint *)0x80000015) goto LAB_0122a29c;
      FUN_01222c1c(&local_70);
      local_b8 = CONCAT31(local_b8._1_3_,0xb);
      FUN_0123bf08(&local_70,&local_b8,&DAT_01cf9cc4,&DAT_01d064b8);
      *param_1 = (int)local_70;
      param_1[1] = (int)local_6c;
      param_1[2] = local_68;
      param_1[3] = (int)puStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = (int)local_50;
      param_1[9] = (int)puStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = (int)puStack_44;
      FUN_012222e0(&local_40);
      FUN_012222e0(&local_88);
    }
    FUN_01264de8(&local_98);
    if (-1 < (int)uVar8) {
      return;
    }
    goto LAB_0122a550;
  }
  local_d8 = *param_2;
  uStack_d4 = param_2[1];
  uStack_d0 = param_2[2];
  uStack_cc = param_2[3];
  uVar5 = 0x80000015;
  bVar1 = 0;
LAB_0122a158:
  local_b8 = local_d8;
  local_b4 = uStack_d4;
  local_b0 = uStack_d0;
  local_ac = uStack_cc;
  uVar3 = 0x15;
  local_a4 = local_c8;
  uStack_a0 = uStack_c4;
  uStack_9c = uStack_c0;
  if ((int)local_d8 < 0) {
    uVar3 = local_d8 ^ 0x80000000;
  }
  local_a8 = uVar5;
  switch(uVar3) {
  case 1:
    uStack_d0 = uStack_d4 & 0xff;
    uStack_cc = 0;
    goto LAB_0122a31c;
  default:
    FUN_012223f8(&local_70,&local_b8,&local_40,&DAT_01c24a0c);
    goto LAB_0122a360;
  case 4:
LAB_0122a31c:
    FUN_01226584(&local_70,&switchD_0122a1b8::switchdataD_0122a1bc,uStack_d0,uStack_cc);
    if ((uVar3 | 2) != 0xe) break;
    goto LAB_0122a360;
  case 0xc:
    FUN_01232790(&local_70,uStack_d0,uStack_cc);
    goto LAB_0122a354;
  case 0xd:
    FUN_01232790(&local_70,uStack_d4,uStack_d0);
    break;
  case 0xe:
    FUN_01226398(&local_70,uStack_d0,uStack_cc);
LAB_0122a354:
    FUN_019bb7e0(uStack_d4,uStack_d0);
    goto LAB_0122a360;
  case 0xf:
    FUN_01226398(&local_70,uStack_d4,uStack_d0);
  }
  FUN_012222e0(&local_b8);
LAB_0122a360:
  uVar5 = local_68;
  puVar6 = local_6c;
  puVar4 = local_70;
  uVar3 = local_a8;
  if (local_70 == (uint *)0x2) {
    uVar2 = local_6c._0_1_;
    uVar3 = (uint)local_6c & 0xff;
    FUN_01bed4e2((uint)&local_40 | 7,&local_a8,0x10);
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    uStack_78 = uStack_30;
    local_74 = local_2c;
    local_72 = local_2a;
    FUN_01bed4e2(&local_88,(uint)&local_40 | 7,0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3) {
    case 0:
      FUN_01223840(&local_70,&local_88);
      break;
    case 1:
      FUN_01223840(&local_70,&local_88);
      break;
    case 2:
      FUN_01223840(&local_70,&local_88);
      break;
    case 3:
      FUN_01223840(&local_70,&local_88);
    }
    if (local_70 == (uint *)0x2) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = uVar2;
    }
    else {
      param_1[1] = (int)local_6c;
      param_1[2] = local_68;
      param_1[3] = (int)puStack_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = (int)local_50;
      param_1[9] = (int)puStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = (int)puStack_44;
      *param_1 = (int)local_70;
    }
  }
  else {
    FUN_01bed4e2(&local_88,(int)&local_68 + 1,0x17);
    local_98 = local_50;
    local_94 = puStack_4c;
    local_90 = uStack_48;
    local_8c = puStack_44;
    if (uVar3 != 0x80000015) {
      FUN_012222e0(&local_a8);
    }
    local_40 = local_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    uStack_30 = uStack_78;
    local_2c = local_74;
    local_2a = local_72;
    local_70 = local_98;
    local_6c = local_94;
    local_68 = local_90;
    puStack_64 = local_8c;
    FUN_01bed4e2((int)param_1 + 9,&local_40,0x17);
    *(char *)(param_1 + 2) = (char)uVar5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)puVar6;
    param_1[8] = (int)local_70;
    param_1[9] = (int)local_6c;
    param_1[10] = local_68;
    param_1[0xb] = (int)puStack_64;
  }
  if ((bool)(bVar1 & (int)uVar8 < 0)) {
LAB_0122a550:
    FUN_012222e0(param_2);
  }
  return;
}

