// FUN_00903e80 @ 00903e80 size=1820 calls_out=10 calls_in=1
// strings: 

void FUN_00903e80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint *local_d4;
  uint local_d0;
  uint *local_c8;
  uint local_c4;
  uint local_c0;
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
  uint local_94;
  uint local_90;
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
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined1 uStack_25;
  
  uVar7 = *param_2;
  uVar4 = 0x15;
  if ((int)uVar7 < 0) {
    uVar4 = uVar7 ^ 0x80000000;
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
    local_78 = (uint *)uVar7;
    if (uVar4 != 0) {
      puVar5 = local_80 + 8;
      local_e8 = (uint *)*local_80;
      local_7c = puVar5;
      if (local_e8 != (uint *)0x80000015) {
        local_e4 = local_80[1];
        local_e0 = local_80[2];
        local_dc = local_80[3];
        puVar6 = (uint *)local_80[4];
        uStack_3c = local_80[5];
        uStack_38 = local_80[6];
        uStack_34 = local_80[7];
        local_98 = local_e8;
        local_94 = local_e4;
        local_90 = local_e0;
        local_8c = local_dc;
        local_40 = puVar6;
        if (uVar4 != 1) {
          local_7c = local_80 + 0x10;
          local_70 = *puVar5;
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
            goto LAB_00904480;
          }
        }
        local_d8 = local_80[5];
        local_d4 = (uint *)local_80[6];
        local_d0 = local_80[7];
        FUN_00927214(&local_80);
        bVar1 = 1;
        goto LAB_00903ed0;
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
LAB_00904480:
    FUN_00927214(&local_80);
    return;
  }
  local_e8 = (uint *)*param_2;
  local_e4 = param_2[1];
  puVar6 = (uint *)0x80000015;
  local_e0 = param_2[2];
  local_dc = param_2[3];
  bVar1 = 0;
LAB_00903ed0:
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
  local_b8 = puVar6;
  local_80 = puVar6;
  switch(uVar4) {
  case 1:
    switch(local_e4 & 0xff) {
    case 0:
      uVar3 = 0;
      break;
    case 1:
      uVar3 = 1;
      break;
    case 2:
      uVar3 = 2;
      break;
    case 3:
      uVar3 = 3;
      break;
    default:
      uStack_34 = 0;
      local_40 = (uint *)CONCAT31(local_40._1_3_,1);
      uStack_38 = local_e4 & 0xff;
      FUN_00924358(&local_70,&local_40,&DAT_0187d098,&DAT_018ab990);
      goto LAB_0090419c;
    }
    local_70 = 2;
    local_6c = CONCAT31(local_6c._1_3_,uVar3);
    break;
  default:
    FUN_008f73e8(&local_70,&local_c8,&uStack_25,&DAT_01867458);
    goto LAB_009041a4;
  case 4:
    if (-local_dc < (uint)(local_e0 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x009040e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_009040e8 + *(int *)(&DAT_009040e8 + local_e0 * 4)))
                (*(int *)(&DAT_009040e8 + local_e0 * 4),&DAT_009040e8,-(local_dc + (local_e0 >= 4)))
      ;
      return;
    }
    uStack_38 = local_e0;
    local_40 = (uint *)CONCAT31(local_40._1_3_,1);
    uStack_34 = local_dc;
    FUN_00924358(&local_70,&local_40,&DAT_0187d098,&DAT_018ab990);
    break;
  case 0xc:
    FUN_0090fe00(&local_70,local_e0,local_dc);
    goto LAB_00904120;
  case 0xd:
    FUN_0090fe00(&local_70,local_e4,local_e0);
    break;
  case 0xe:
    FUN_008fc1e8(&local_70,local_e0,local_dc);
LAB_00904120:
    if (local_e4 != 0) {
      thunk_FUN_016d3fb4(local_e0);
    }
    goto LAB_009041a4;
  case 0xf:
    FUN_008fc1e8(&local_70,local_e4,local_e0);
  }
LAB_0090419c:
  FUN_008f7448(&local_c8);
LAB_009041a4:
  uVar2 = local_6c;
  uVar4 = local_70;
  puVar5 = local_b8;
  if (local_70 != 2) {
    uVar3 = (undefined1)local_68;
    FUN_016dd1aa(&local_98,(int)&local_68 + 1,0x17);
    local_a8 = local_50;
    local_a4 = uStack_4c;
    local_a0 = uStack_48;
    local_9c = uStack_44;
    if (puVar5 != (uint *)0x80000015) {
      FUN_008f7448(&local_b8);
    }
    local_40 = local_98;
    uStack_3c = local_94;
    uStack_38 = local_90;
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
    goto LAB_00904404;
  }
  uStack_34._0_3_ = (undefined3)(local_b4 >> 8);
  local_8c = CONCAT13((char)local_b0,(undefined3)uStack_34);
  uStack_30._3_1_ = (undefined1)local_ac;
  uStack_88 = CONCAT13(uStack_30._3_1_,(int3)((uint)local_b0 >> 8));
  uStack_2c = (undefined2)(local_ac >> 8);
  uStack_2a = (undefined1)(local_ac >> 0x18);
  uStack_3c._3_1_ = SUB41(local_b8,0);
  uStack_38._0_3_ = (undefined3)((uint)local_b8 >> 8);
  local_90 = CONCAT13((char)local_b4,(undefined3)uStack_38);
  uVar3 = (undefined1)local_6c;
  local_98 = local_40;
  local_94 = uStack_3c;
  local_84 = uStack_2c;
  local_82 = uStack_2a;
  local_80 = local_b8;
  local_7c = (uint *)local_b4;
  local_78 = local_b0;
  local_74 = (uint *)local_ac;
  uStack_38 = local_90;
  uStack_34 = local_8c;
  uStack_30 = uStack_88;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_6c & 0xff) {
  case 0:
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar5 = local_b0;
        }
        if (uVar4 != 0x15 || puVar5 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
LAB_00904580:
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
            goto LAB_00904404;
          }
          break;
        }
      }
      FUN_008f7448(&local_80);
    }
    break;
  case 1:
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar5 = local_b0;
        }
        if (uVar4 != 0x15 || puVar5 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
          goto LAB_00904580;
        }
      }
      FUN_008f7448(&local_80);
    }
    break;
  case 2:
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar5 = local_b0;
        }
        if (uVar4 != 0x15 || puVar5 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
          goto LAB_00904580;
        }
      }
      FUN_008f7448(&local_80);
    }
    break;
  case 3:
    if (local_b8 != (uint *)0x80000015) {
      uVar4 = 0x15;
      if ((int)local_b8 < 0) {
        uVar4 = (uint)local_b8 ^ 0x80000000;
      }
      if (uVar4 != 0x12) {
        if (uVar4 == 0x15) {
          puVar5 = local_b0;
        }
        if (uVar4 != 0x15 || puVar5 != (uint *)0x0) {
          FUN_008f73e8(&local_70,&local_80,&uStack_25,&DAT_018674a8);
          goto LAB_00904580;
        }
      }
      FUN_008f7448(&local_80);
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar3;
LAB_00904404:
  if ((bool)(bVar1 & (int)uVar7 < 0)) {
    FUN_008f7448(param_2);
  }
  return;
}

