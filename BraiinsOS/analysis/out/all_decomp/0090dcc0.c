// FUN_0090dcc0 @ 0090dcc0 size=2016 calls_out=11 calls_in=1
// strings: manual | manual | manual_indefinite | manual_indefinite

void FUN_0090dcc0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *local_e8;
  int *local_e4;
  int *local_e0;
  uint local_dc;
  uint local_d8;
  uint *local_d4;
  uint local_d0;
  uint *local_c8;
  int *local_c4;
  int *local_c0;
  uint local_bc;
  uint *local_b8;
  uint local_b4;
  uint *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint *local_98;
  int *local_94;
  int *local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined1 local_82;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined1 uStack_25;
  
  uVar8 = *param_2;
  uVar4 = 0x15;
  if ((int)uVar8 < 0) {
    uVar4 = uVar8 ^ 0x80000000;
  }
  if (uVar4 != 0xc && uVar4 != 0xd) {
    if (uVar4 != 0x15) {
      FUN_008f7634(&local_c8);
      FUN_00f3ce3c(&local_70,&local_c8,&DAT_01887184,&DAT_018ab990);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = local_64;
      param_1[4] = local_60;
      param_1[5] = uStack_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      param_1[8] = local_50;
      param_1[9] = uStack_4c;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_44;
      FUN_008f7448(param_2);
      return;
    }
    local_80 = (uint *)param_2[1];
    uVar4 = param_2[2];
    local_74 = local_80 + uVar4 * 8;
    local_7c = local_80;
    local_78 = (uint *)uVar8;
    if (uVar4 != 0) {
      puVar6 = local_80 + 8;
      local_e8 = (uint *)*local_80;
      local_7c = puVar6;
      if (local_e8 != (uint *)0x80000015) {
        local_e4 = (int *)local_80[1];
        local_e0 = (int *)local_80[2];
        local_dc = local_80[3];
        puVar7 = (uint *)local_80[4];
        uStack_3c = (int *)local_80[5];
        piStack_38 = (int *)local_80[6];
        uStack_34 = local_80[7];
        local_98 = local_e8;
        local_94 = local_e4;
        local_90 = local_e0;
        local_8c = local_dc;
        local_40 = puVar7;
        if (uVar4 != 1) {
          local_7c = local_80 + 0x10;
          local_70 = *puVar6;
          local_6c = local_80[9];
          local_68 = local_80[10];
          local_64 = local_80[0xb];
          local_60 = local_80[0xc];
          uStack_5c = local_80[0xd];
          local_58 = local_80[0xe];
          uStack_54 = local_80[0xf];
          if (local_70 != 0x80000015) {
            FUN_008f7448(&local_70);
            FUN_008f7448(&local_60);
            local_c8 = (uint *)CONCAT31(local_c8._1_3_,0xb);
            FUN_00924358(&local_70,&local_c8,&DAT_0188717c,&DAT_018ab990);
            *param_1 = local_70;
            param_1[1] = local_6c;
            param_1[2] = local_68;
            param_1[3] = local_64;
            param_1[4] = local_60;
            param_1[5] = uStack_5c;
            param_1[6] = local_58;
            param_1[7] = uStack_54;
            param_1[8] = local_50;
            param_1[9] = uStack_4c;
            param_1[10] = uStack_48;
            param_1[0xb] = uStack_44;
            FUN_008f7448(&local_40);
            FUN_008f7448(&local_98);
            goto LAB_0090e390;
          }
        }
        local_d8 = local_80[5];
        local_d4 = (uint *)local_80[6];
        local_d0 = local_80[7];
        FUN_00927214(&local_80);
        bVar1 = 1;
        goto LAB_0090dd14;
      }
    }
    local_c8 = (uint *)CONCAT31(local_c8._1_3_,0xb);
    FUN_00924358(&local_70,&local_c8,&DAT_0188717c,&DAT_018ab990);
    *param_1 = local_70;
    param_1[1] = local_6c;
    param_1[2] = local_68;
    param_1[3] = local_64;
    param_1[4] = local_60;
    param_1[5] = uStack_5c;
    param_1[6] = local_58;
    param_1[7] = uStack_54;
    param_1[8] = local_50;
    param_1[9] = uStack_4c;
    param_1[10] = uStack_48;
    param_1[0xb] = uStack_44;
LAB_0090e390:
    FUN_00927214(&local_80);
    return;
  }
  local_e8 = (uint *)*param_2;
  local_e4 = (int *)param_2[1];
  puVar7 = (uint *)0x80000015;
  local_e0 = (int *)param_2[2];
  local_dc = param_2[3];
  bVar1 = 0;
LAB_0090dd14:
  local_c8 = local_e8;
  local_c4 = local_e4;
  local_c0 = local_e0;
  local_bc = local_dc;
  local_b4 = local_d8;
  local_b0 = local_d4;
  local_ac = local_d0;
  local_7c = (uint *)local_d8;
  local_78 = local_d4;
  local_74 = (uint *)local_d0;
  uVar4 = 0x15;
  if ((int)local_e8 < 0) {
    uVar4 = (uint)local_e8 ^ 0x80000000;
  }
  local_b8 = puVar7;
  local_80 = puVar7;
  switch(uVar4) {
  case 1:
    local_e4 = (int *)((uint)local_e4 & 0xff);
    if (local_e4 == (int *)0x0) {
LAB_0090e050:
      uVar3 = 0;
    }
    else if (local_e4 == (int *)&DAT_00000001) {
LAB_0090dff0:
      uVar3 = 1;
    }
    else {
      if (local_e4 != (int *)&SUB_00000002) {
        uStack_34 = 0;
        local_40 = (uint *)CONCAT31(local_40._1_3_,1);
        piStack_38 = local_e4;
        FUN_00924358(&local_70,&local_40,&DAT_0187d080,&DAT_018ab990);
        break;
      }
LAB_0090e0a0:
      uVar3 = 2;
    }
    local_70 = 2;
    local_6c = CONCAT31(local_6c._1_3_,uVar3);
    break;
  default:
    FUN_008f73e8(&local_70,&local_c8,&uStack_25,&DAT_01867488);
    goto LAB_0090e0fc;
  case 4:
    if (local_e0 == (int *)0x0 && local_dc == 0) goto LAB_0090e050;
    if (local_e0 == (int *)&DAT_00000001 && local_dc == 0) goto LAB_0090dff0;
    if (local_e0 == (int *)&SUB_00000002 && local_dc == 0) goto LAB_0090e0a0;
    piStack_38 = local_e0;
    local_40 = (uint *)CONCAT31(local_40._1_3_,1);
    uStack_34 = local_dc;
    FUN_00924358(&local_70,&local_40,&DAT_0187d080,&DAT_018ab990);
    break;
  case 0xc:
    if (local_dc == 4) {
      uVar3 = 0;
      if (*local_e0 != 0x6f747561) goto LAB_0090e438;
    }
    else {
      if (local_dc == 6) {
        iVar5 = thunk_FUN_016dd50a(local_e0,"manual",6);
        uVar3 = 1;
      }
      else {
        if (local_dc != 0x11) goto LAB_0090e438;
        iVar5 = thunk_FUN_016dd50a(local_e0,"manual_indefinite",0x11);
        uVar3 = 2;
      }
      if (iVar5 != 0) {
LAB_0090e438:
        FUN_00924538(&local_70,local_e0,local_dc,&DAT_018679d0,3);
        goto joined_r0x0090df58;
      }
    }
    local_6c = CONCAT31(local_6c._1_3_,uVar3);
    local_70 = 2;
    goto joined_r0x0090df58;
  case 0xd:
    if (local_e0 == (int *)&DAT_00000004) {
      if (*local_e4 == 0x6f747561) goto LAB_0090e050;
    }
    else if (local_e0 == (int *)&DAT_00000006) {
      iVar5 = thunk_FUN_016dd50a(local_e4,"manual",6);
      if (iVar5 == 0) goto LAB_0090dff0;
    }
    else if ((local_e0 == (int *)&DAT_00000011) &&
            (iVar5 = thunk_FUN_016dd50a(local_e4,"manual_indefinite",0x11), iVar5 == 0))
    goto LAB_0090e0a0;
    FUN_00924538(&local_70,local_e4,local_e0,&DAT_018679d0,3);
    break;
  case 0xe:
    FUN_008fcaec(&local_70,local_e0,local_dc);
joined_r0x0090df58:
    if (local_e4 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_e0);
    }
    goto LAB_0090e0fc;
  case 0xf:
    FUN_008fcaec(&local_70,local_e4,local_e0);
  }
  FUN_008f7448(&local_c8);
LAB_0090e0fc:
  uVar2 = local_6c;
  uVar4 = local_70;
  puVar6 = local_b8;
  if (local_70 != 2) {
    uVar3 = (undefined1)local_68;
    FUN_016dd1aa(&local_98,(int)&local_68 + 1,0x17);
    local_a8 = local_50;
    local_a4 = uStack_4c;
    local_a0 = uStack_48;
    local_9c = uStack_44;
    if (puVar6 != (uint *)0x80000015) {
      FUN_008f7448(&local_b8);
    }
    local_40 = local_98;
    uStack_3c = local_94;
    piStack_38 = local_90;
    uStack_34 = local_8c;
    uStack_30 = uStack_88;
    uStack_2c = local_84;
    uStack_2a = local_82;
    local_70 = local_a8;
    local_6c = local_a4;
    local_68 = local_a0;
    local_64 = local_9c;
    FUN_016dd1aa((int)param_1 + 9,&local_40,0x17);
    *param_1 = uVar4;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = uVar3;
    param_1[8] = local_70;
    param_1[9] = local_6c;
    param_1[10] = local_68;
    param_1[0xb] = local_64;
    goto LAB_0090e314;
  }
  uStack_34._0_3_ = (undefined3)(local_b4 >> 8);
  local_8c = CONCAT13((char)local_b0,(undefined3)uStack_34);
  uStack_30._3_1_ = (undefined1)local_ac;
  uStack_88 = CONCAT13(uStack_30._3_1_,(int3)((uint)local_b0 >> 8));
  uStack_2c = (undefined2)(local_ac >> 8);
  uStack_2a = (undefined1)(local_ac >> 0x18);
  uStack_3c._3_1_ = SUB41(local_b8,0);
  piStack_38._0_3_ = (undefined3)((uint)local_b8 >> 8);
  local_90 = (int *)CONCAT13((char)local_b4,piStack_38._0_3_);
  uVar3 = (undefined1)local_6c;
  local_98 = local_40;
  local_94 = uStack_3c;
  local_84 = uStack_2c;
  local_82 = uStack_2a;
  local_80 = local_b8;
  local_7c = (uint *)local_b4;
  local_78 = local_b0;
  local_74 = (uint *)local_ac;
  piStack_38 = local_90;
  uStack_34 = local_8c;
  uStack_30 = uStack_88;
  if ((local_6c & 0xff) == 0) {
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar6 = local_b0;
        }
        if (uVar4 != 0x15 || puVar6 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
          goto LAB_0090e4b8;
        }
      }
      FUN_008f7448(&local_80);
    }
  }
  else if ((local_6c & 0xff) == 1) {
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar6 = local_b0;
        }
        if (uVar4 != 0x15 || puVar6 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
LAB_0090e4b8:
          if (local_70 != 2) {
            *param_1 = local_70;
            param_1[1] = local_6c;
            param_1[2] = local_68;
            param_1[3] = local_64;
            param_1[4] = local_60;
            param_1[5] = uStack_5c;
            param_1[6] = local_58;
            param_1[7] = uStack_54;
            param_1[8] = local_50;
            param_1[9] = uStack_4c;
            param_1[10] = uStack_48;
            param_1[0xb] = uStack_44;
            goto LAB_0090e314;
          }
          goto LAB_0090e304;
        }
      }
      FUN_008f7448(&local_80);
    }
  }
  else if (local_b8 != (uint *)0x80000015) {
    uVar4 = 0x15;
    if ((int)local_b8 < 0) {
      uVar4 = (uint)local_b8 ^ 0x80000000;
    }
    if (uVar4 != 0x12) {
      if (uVar4 == 0x15) {
        puVar6 = local_b0;
      }
      if (uVar4 != 0x15 || puVar6 != (uint *)0x0) {
        FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
        goto LAB_0090e4b8;
      }
    }
    FUN_008f7448(&local_80);
  }
LAB_0090e304:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar3;
LAB_0090e314:
  if ((bool)(bVar1 & (int)uVar8 < 0)) {
    FUN_008f7448(param_2);
  }
  return;
}

