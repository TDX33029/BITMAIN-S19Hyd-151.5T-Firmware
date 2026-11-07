// FUN_016296f8 @ 016296f8 size=2096 calls_out=10 calls_in=1
// strings: invalid IFLA_GRE_LOCAL value | invalid IFLA_GRE_ENCAP_DPORT value | invalid IFLA_GRE_ENCAP_TYPE value | invalid IFLA_GRE_ENCAP_SPORT value | invalid IFLA_GRE_OFLAGS value | invalid IFLA_GRE_ENCAP_FLAGS value

void FUN_016296f8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ushort *puVar2;
  undefined1 uVar3;
  ushort extraout_r2;
  ushort uVar4;
  ushort *extraout_r2_00;
  ushort *extraout_r2_01;
  ushort *extraout_r2_02;
  ushort *extraout_r2_03;
  ushort *extraout_r2_04;
  ushort *extraout_r2_05;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 uVar5;
  ushort *extraout_r3_01;
  ushort *extraout_r3_02;
  ushort *extraout_r3_03;
  ushort *extraout_r3_04;
  ushort *extraout_r3_05;
  ushort *extraout_r3_06;
  ushort *extraout_r3_07;
  ushort *extraout_r3_08;
  ushort *extraout_r3_09;
  ushort *extraout_r3_10;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort *unaff_r11;
  undefined8 uVar9;
  ushort *local_74;
  undefined1 local_70;
  undefined4 local_68;
  ushort *local_64;
  ushort *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  ushort *puStack_4c;
  ushort *puStack_48;
  ushort *puStack_44;
  undefined1 uStack_40;
  ushort local_36 [3];
  ushort *local_30;
  undefined1 local_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  
  uVar9 = FUN_01623bf0(param_2,param_3);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar6 = (undefined4)uVar9;
  local_36[0] = FUN_01623bc0(param_2,param_3);
  uVar3 = 0xd;
  uVar8 = 0;
  puVar2 = (ushort *)(local_36[0] - 2);
  uVar4 = extraout_r2;
  uVar5 = extraout_r3;
  switch((ushort *)(local_36[0] - 2)) {
  case (ushort *)0x0:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_IFLAGS value",0x1d);
      local_60 = extraout_r3_06;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = CONCAT11(uStack_2b,local_2c);
    if (local_30 == (ushort *)0x80000000) {
      uVar8 = 0;
      uVar3 = 0;
      puVar2 = (ushort *)0x0;
      goto switchD_01629754_caseD_10;
    }
    break;
  case (ushort *)0x1:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_OFLAGS value",0x1d);
      local_60 = extraout_r3_04;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = CONCAT11(uStack_2b,local_2c);
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 1;
LAB_01629cb0:
      puVar2 = (ushort *)0x0;
      goto switchD_01629754_caseD_10;
    }
    break;
  case (ushort *)0x2:
    FUN_0160f178(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_IKEY value",0x1b);
      local_64 = extraout_r2_02;
      local_60 = extraout_r3_08;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = (ushort)local_64;
    puVar2 = (ushort *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) {
LAB_01629e90:
      *(ushort **)(param_1 + 4) = local_30;
      *(ushort **)(param_1 + 8) = puVar2;
      *(uint *)(param_1 + 0xc) = CONCAT22(uStack_26,CONCAT11(uStack_27,local_28));
      goto LAB_01629f38;
    }
    uVar3 = 2;
    goto LAB_01629e88;
  case (ushort *)0x3:
    FUN_0160f178(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_OKEY value",0x1b);
      local_64 = extraout_r2_03;
      local_60 = extraout_r3_09;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = (ushort)local_64;
    puVar2 = (ushort *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_01629e90;
    uVar3 = 3;
    goto LAB_01629e88;
  case (ushort *)0x4:
    FUN_0162902c(&local_50,uVar6,uVar7);
    if (((uint)local_50 & 1) == 0) {
      local_64 = puStack_4c;
      local_60 = puStack_48;
      local_5c = puStack_44;
      if (((uint)local_50 & 1) == 0) {
        local_68._2_2_ = (ushort)((uint)local_50 >> 0x10);
        local_68._1_1_ = (undefined1)((uint)local_50 >> 8);
        local_74 = puStack_48;
        local_70 = uStack_40;
        uVar8 = (uint)puStack_4c & 0xffff0000;
        uVar3 = 4;
        puVar2 = puStack_4c;
        unaff_r11 = puStack_44;
        uVar4 = local_68._2_2_;
        uVar5 = local_68._1_1_;
        goto switchD_01629754_caseD_10;
      }
    }
    else {
LAB_016299fc:
      puVar1 = (undefined4 *)((uint)&local_50 | 4);
      local_30 = (ushort *)*puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      local_2c = (undefined1)uVar6;
      uStack_2b = (undefined1)((uint)uVar6 >> 8);
      uStack_2a = (undefined2)((uint)uVar6 >> 0x10);
      local_28 = (undefined1)uVar7;
      uStack_27 = (undefined1)((uint)uVar7 >> 8);
      uStack_26 = (undefined2)((uint)uVar7 >> 0x10);
      FUN_016403ac((uint)&local_68 | 4,&local_30,"invalid IFLA_GRE_LOCAL value",0x1c);
    }
    goto LAB_01629a28;
  case (ushort *)0x5:
    FUN_0162902c(&local_50,uVar6,uVar7);
    if (((uint)local_50 & 1) != 0) goto LAB_016299fc;
    local_64 = puStack_4c;
    local_60 = puStack_48;
    local_5c = puStack_44;
    if (((uint)local_50 & 1) == 0) {
      local_68._2_2_ = (ushort)((uint)local_50 >> 0x10);
      local_68._1_1_ = (undefined1)((uint)local_50 >> 8);
      local_74 = puStack_48;
      local_70 = uStack_40;
      uVar8 = (uint)puStack_4c & 0xffff0000;
      uVar3 = 5;
      puVar2 = puStack_4c;
      unaff_r11 = puStack_44;
      uVar4 = local_68._2_2_;
      uVar5 = local_68._1_1_;
      goto switchD_01629754_caseD_10;
    }
LAB_01629a28:
    *(ushort **)(param_1 + 8) = local_60;
    *(ushort **)(param_1 + 0xc) = local_5c;
    local_30 = local_64;
    goto LAB_01629f34;
  case (ushort *)0x6:
    FUN_0160f290(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_TTL value",0x1a);
      local_64 = extraout_r2_00;
    }
    uVar4 = (ushort)local_64;
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 6;
      puVar2 = (ushort *)0x0;
      uVar5 = local_2c;
      goto switchD_01629754_caseD_10;
    }
    goto LAB_01629f20;
  default:
    FUN_01623ae4(&local_50,param_2,param_3);
    local_2c = 0x18;
    uStack_2b = 0xcf;
    uStack_2a = 0x12f;
    local_30 = local_36;
    FUN_00664898(&local_68,&DAT_00573595,&local_30);
    local_30 = local_68;
    local_2c = SUB41(local_64,0);
    uStack_2b = (undefined1)((uint)local_64 >> 8);
    uStack_2a = (undefined2)((uint)local_64 >> 0x10);
    local_28 = SUB41(local_60,0);
    uStack_27 = (undefined1)((uint)local_60 >> 8);
    uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    FUN_0160f810(&local_68,&local_50,&local_30);
    if (local_68 == (ushort *)0x80000000) {
      *(ushort *)(param_1 + 0xd) = local_5c._1_2_;
      *param_1 = 0x10;
      param_1[0xf] = local_5c._3_1_;
      *(ushort **)(param_1 + 4) = local_64;
      param_1[0xc] = (undefined1)local_5c;
      *(ushort **)(param_1 + 8) = local_60;
      return;
    }
    uVar8 = (uint)local_68 & 0xffff0000;
    uVar3 = 0xf;
    local_50 = (ushort *)((uint)local_5c >> 8);
    local_74 = local_64;
    puVar2 = local_68;
    unaff_r11 = local_60;
    uVar4 = local_5c._1_2_;
    uVar5 = extraout_r3_00;
    local_70 = (undefined1)local_5c;
    goto switchD_01629754_caseD_10;
  case (ushort *)0x9:
    FUN_0160f290(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_ENCAP_LIMIT value",0x22);
      local_64 = extraout_r2_05;
    }
    uVar4 = (ushort)local_64;
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 7;
      puVar2 = (ushort *)0x0;
      uVar5 = local_2c;
      goto switchD_01629754_caseD_10;
    }
LAB_01629f20:
    *(uint *)(param_1 + 0xc) = CONCAT22(uStack_26,CONCAT11(uStack_27,local_28));
    *(uint *)(param_1 + 9) = CONCAT13(local_28,CONCAT21(uStack_2a,uStack_2b));
    param_1[8] = local_2c;
    goto LAB_01629f34;
  case (ushort *)0xa:
    FUN_0160f178(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_FLOWINFO value",0x1f);
      local_64 = extraout_r2_04;
      local_60 = extraout_r3_10;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = (ushort)local_64;
    puVar2 = (ushort *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_01629e90;
    uVar3 = 8;
    goto LAB_01629e88;
  case (ushort *)0xc:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_ENCAP_TYPE value",0x21);
      local_60 = extraout_r3_02;
    }
    uVar4 = CONCAT11(uStack_2b,local_2c);
    puVar2 = (ushort *)(uint)uVar4;
    if (local_30 == (ushort *)0x80000000) {
      if ((ushort *)0x2 < puVar2) {
        uVar4 = 3;
      }
      uVar3 = 9;
      uVar5 = (char)local_60;
      goto switchD_01629754_caseD_10;
    }
    *(undefined2 *)(param_1 + 0xe) = uStack_26;
    *(uint *)(param_1 + 10) = CONCAT13(uStack_27,CONCAT12(local_28,uStack_2a));
    *(ushort *)(param_1 + 8) = uVar4;
    *(ushort **)(param_1 + 4) = local_30;
    goto LAB_01629f38;
  case (ushort *)0xd:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_ENCAP_FLAGS value",0x22);
      local_60 = extraout_r3_05;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = CONCAT11(uStack_2b,local_2c);
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 10;
      goto LAB_01629cb0;
    }
    break;
  case (ushort *)0xe:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_ENCAP_SPORT value",0x22);
      local_60 = extraout_r3_03;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = CONCAT11(uStack_2b,local_2c);
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 0xb;
      goto LAB_01629cb0;
    }
    break;
  case (ushort *)0xf:
    FUN_0160f104(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_ENCAP_DPORT value",0x22);
      local_60 = extraout_r3_01;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = CONCAT11(uStack_2b,local_2c);
    if (local_30 == (ushort *)0x80000000) {
      uVar3 = 0xc;
      goto LAB_01629cb0;
    }
    break;
  case (ushort *)0x10:
    goto switchD_01629754_caseD_10;
  case (ushort *)0x12:
    FUN_0160f178(&local_68,uVar6,uVar7);
    if (local_68 == (ushort *)0x80000000) {
      local_30 = local_68;
      local_2c = SUB41(local_64,0);
      uStack_2b = (undefined1)((uint)local_64 >> 8);
      uStack_2a = (undefined2)((uint)local_64 >> 0x10);
      local_28 = SUB41(local_60,0);
      uStack_27 = (undefined1)((uint)local_60 >> 8);
      uStack_26 = (undefined2)((uint)local_60 >> 0x10);
    }
    else {
      local_50 = local_68;
      puStack_4c = local_64;
      puStack_48 = local_60;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_GRE_FWMARK value",0x1d);
      local_64 = extraout_r2_01;
      local_60 = extraout_r3_07;
    }
    uVar5 = SUB41(local_60,0);
    uVar4 = (ushort)local_64;
    puVar2 = (ushort *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_01629e90;
    uVar3 = 0xe;
LAB_01629e88:
    uVar8 = (uint)puVar2 & 0xffff0000;
switchD_01629754_caseD_10:
    *(uint *)(param_1 + 4) = uVar8 | (uint)puVar2 & 0xffff;
    *(ushort **)(param_1 + 8) = local_74;
    *(ushort *)(param_1 + 2) = uVar4;
    param_1[1] = uVar5;
    *param_1 = uVar3;
    param_1[0x10] = local_70;
    *(undefined2 *)(param_1 + 0x11) = (undefined2)local_50;
    param_1[0x13] = local_50._2_1_;
    *(ushort **)(param_1 + 0xc) = unaff_r11;
    return;
  }
  *(undefined2 *)(param_1 + 0xe) = uStack_26;
  *(uint *)(param_1 + 10) = CONCAT13(uStack_27,CONCAT12(local_28,uStack_2a));
  *(ushort *)(param_1 + 8) = uVar4;
LAB_01629f34:
  *(ushort **)(param_1 + 4) = local_30;
LAB_01629f38:
  *param_1 = 0x10;
  return;
}

