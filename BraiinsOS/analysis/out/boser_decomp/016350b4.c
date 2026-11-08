// FUN_016350b4 @ 016350b4 size=2144 calls_out=10 calls_in=1
// strings: invalid IFLA_GRE_ENCAP_SPORT value | invalid IFLA_GRE_TOS value | invalid IFLA_GRE_ENCAP_FLAGS value | invalid IFLA_GRE_IFLAGS value | invalid IFLA_GRE_OKEY value | invalid IFLA_GRE_ENCAP_TYPE value

void FUN_016350b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  uint unaff_r10;
  ushort uVar5;
  uint unaff_r11;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined4 extraout_r12_05;
  undefined4 extraout_r12_06;
  undefined4 extraout_r12_07;
  undefined4 extraout_r12_08;
  undefined4 extraout_r12_09;
  undefined4 extraout_r12_10;
  undefined4 extraout_r12_11;
  undefined4 extraout_r12_12;
  undefined4 extraout_r12_13;
  undefined4 extraout_r12_14;
  undefined4 extraout_r12_15;
  undefined4 extraout_r12_16;
  undefined4 extraout_r12_17;
  undefined4 extraout_r12_18;
  undefined4 extraout_r12_19;
  undefined4 extraout_r12_20;
  undefined4 extraout_r12_21;
  undefined4 uVar6;
  undefined4 extraout_r12_22;
  undefined4 extraout_r12_23;
  undefined4 extraout_r12_24;
  undefined4 extraout_r12_25;
  undefined4 extraout_r12_26;
  undefined4 extraout_r12_27;
  undefined4 extraout_r12_28;
  undefined4 extraout_r12_29;
  undefined4 uVar7;
  undefined8 uVar8;
  ushort local_52;
  ushort *local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ushort *local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  ushort *local_30;
  byte local_2c;
  byte bStack_2b;
  ushort uStack_2a;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  
  uVar8 = FUN_01623bf0(param_2,param_3);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar1 = (undefined4)uVar8;
  local_52 = FUN_01623bc0(param_2,param_3);
  uVar4 = 0;
  puVar3 = (ushort *)0x8000000e;
  uVar6 = extraout_r12;
  uVar7 = 0x16350e8;
  switch(local_52) {
  case 1:
    uVar7 = 0x1635170;
    FUN_0160f178(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_00;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16356a4;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_LINK value",0x1b);
      uVar6 = extraout_r12_21;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) {
LAB_0163586c:
      *param_1 = &DAT_80000010;
      param_1[1] = local_30;
      param_1[2] = unaff_r11;
      param_1[3] = CONCAT22(uStack_26,CONCAT11(uStack_27,local_28));
      return;
    }
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)0x80000000;
    break;
  case 2:
    uVar7 = 0x1635230;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_04;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16355ac;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_IFLAGS value",0x1d);
      uVar6 = extraout_r12_18;
    }
    uVar5 = CONCAT11(bStack_2b,local_2c);
    unaff_r11 = (uint)uVar5;
    if (local_30 != (ushort *)0x80000000) {
LAB_01635810:
      *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
      *(uint *)((int)param_1 + 10) = CONCAT13(uStack_27,CONCAT12(local_28,uStack_2a));
      *(ushort *)(param_1 + 2) = uVar5;
LAB_01635914:
      *param_1 = &DAT_80000010;
      param_1[1] = local_30;
      return;
    }
    uVar4 = (uint)bStack_2b;
    puVar3 = (ushort *)0x80000001;
    break;
  case 3:
    uVar7 = 0x1635380;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_11;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16357f4;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_OFLAGS value",0x1d);
      uVar6 = extraout_r12_26;
    }
    uVar5 = CONCAT11(bStack_2b,local_2c);
    unaff_r11 = (uint)uVar5;
    if (local_30 != (ushort *)0x80000000) goto LAB_01635810;
    uVar4 = (uint)bStack_2b;
    puVar3 = (ushort *)0x80000002;
    break;
  case 4:
    uVar7 = 0x16353b0;
    FUN_0160f178(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_12;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x163584c;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_IKEY value",0x1b);
      uVar6 = extraout_r12_27;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_0163586c;
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)0x80000003;
    break;
  case 5:
    uVar7 = 0x1635260;
    FUN_0160f178(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_05;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16355ec;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_OKEY value",0x1b);
      uVar6 = extraout_r12_19;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_0163586c;
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)&DAT_80000004;
    break;
  case 6:
    uVar7 = 0x16352c0;
    FUN_0162a4b8(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_07;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16356e8;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_LOCAL value",0x1c);
      uVar6 = extraout_r12_22;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_0163586c;
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)&DAT_80000005;
    break;
  case 7:
    uVar7 = 0x16352f0;
    FUN_0162a4b8(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_08;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x163572c;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_LOCAL value",0x1c);
      uVar6 = extraout_r12_23;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_0163586c;
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)0x80000006;
    break;
  case 8:
    uVar7 = 0x1635410;
    FUN_0160f290(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_14;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16358e8;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_TTL value",0x1a);
      uVar6 = extraout_r12_29;
    }
    unaff_r11 = (uint)local_2c;
    if (local_30 != (ushort *)0x80000000) {
LAB_01635900:
      param_1[3] = CONCAT22(uStack_26,CONCAT11(uStack_27,local_28));
      *(uint *)((int)param_1 + 9) = CONCAT13(local_28,CONCAT21(uStack_2a,bStack_2b));
      *(byte *)(param_1 + 2) = local_2c;
      goto LAB_01635914;
    }
    puVar3 = (ushort *)0x80000007;
    break;
  case 9:
    uVar7 = 0x16353e0;
    FUN_0160f290(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_13;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16358ac;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_TOS value",0x1a);
      uVar6 = extraout_r12_28;
    }
    unaff_r11 = (uint)local_2c;
    if (local_30 != (ushort *)0x80000000) goto LAB_01635900;
    puVar3 = (ushort *)&DAT_80000008;
    break;
  case 10:
    uVar7 = 0x16351d0;
    FUN_0160f290(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_02;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x163550c;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_TOS value",0x1a);
      uVar6 = extraout_r12_16;
    }
    if (local_30 != (ushort *)0x80000000) {
      param_1[3] = CONCAT22(uStack_26,CONCAT11(uStack_27,local_28));
      *(uint *)((int)param_1 + 9) = CONCAT13(local_28,CONCAT21(uStack_2a,bStack_2b));
      *(byte *)(param_1 + 2) = local_2c;
      goto LAB_01635914;
    }
    puVar3 = (ushort *)&DAT_80000009;
    unaff_r11 = (uint)(local_2c == 1);
    break;
  default:
    FUN_01623ae4(&local_40,param_2,param_3);
    local_2c = 0x18;
    bStack_2b = 0xcf;
    uStack_2a = 0x12f;
    local_30 = &local_52;
    FUN_00664898(&local_50,&DAT_00573595,&local_30);
    local_30 = local_50;
    local_2c = (byte)uStack_4c;
    bStack_2b = (byte)(uStack_4c >> 8);
    uStack_2a = (ushort)(uStack_4c >> 0x10);
    local_28 = (undefined1)uStack_48;
    uStack_27 = (undefined1)((uint)uStack_48 >> 8);
    uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
    FUN_0160f810(&local_50,&local_40,&local_30);
    uVar6 = uStack_48;
    uVar7 = uStack_44;
    if (local_50 == (ushort *)0x80000000) {
      *param_1 = &DAT_80000010;
      param_1[1] = uStack_4c;
      goto LAB_01635954;
    }
    unaff_r10 = uStack_4c >> 0x10;
    uVar4 = uStack_4c >> 8;
    puVar3 = local_50;
    unaff_r11 = uStack_4c;
    break;
  case 0xe:
    uVar7 = 0x1635290;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_06;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x1635630;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_ENCAP_TYPE value",0x21);
      uVar6 = extraout_r12_20;
    }
    unaff_r10 = (uint)CONCAT11(bStack_2b,local_2c);
    if (local_30 != (ushort *)0x80000000) {
      *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
      *(uint *)((int)param_1 + 10) = CONCAT13(uStack_27,CONCAT12(local_28,uStack_2a));
      *(ushort *)(param_1 + 2) = CONCAT11(bStack_2b,local_2c);
      goto LAB_01635914;
    }
    puVar3 = (ushort *)0x8000000a;
    if (unaff_r10 == 2) {
      unaff_r11 = 2;
    }
    else if (unaff_r10 == 1) {
      unaff_r11 = 1;
    }
    else if (unaff_r10 == 0) {
      uVar4 = 0;
      unaff_r11 = 0;
    }
    else {
      unaff_r11 = 3;
    }
    break;
  case 0xf:
    uVar7 = 0x1635200;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_03;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x163556c;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_ENCAP_FLAGS value",0x22);
      uVar6 = extraout_r12_17;
    }
    uVar5 = CONCAT11(bStack_2b,local_2c);
    unaff_r11 = (uint)uVar5;
    if (local_30 != (ushort *)0x80000000) goto LAB_01635810;
    uVar4 = (uint)bStack_2b;
    puVar3 = (ushort *)0x8000000b;
    break;
  case 0x10:
    uVar7 = 0x16351a0;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_01;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16354cc;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_ENCAP_SPORT value",0x22);
      uVar6 = extraout_r12_15;
    }
    uVar5 = CONCAT11(bStack_2b,local_2c);
    unaff_r11 = (uint)uVar5;
    if (local_30 != (ushort *)0x80000000) goto LAB_01635810;
    uVar4 = (uint)bStack_2b;
    puVar3 = (ushort *)&DAT_8000000c;
    break;
  case 0x11:
    uVar7 = 0x1635320;
    FUN_0160f104(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_09;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x1635770;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_ENCAP_DPORT value",0x22);
      uVar6 = extraout_r12_24;
    }
    uVar5 = CONCAT11(bStack_2b,local_2c);
    unaff_r11 = (uint)uVar5;
    if (local_30 != (ushort *)0x80000000) goto LAB_01635810;
    uVar4 = (uint)bStack_2b;
    puVar3 = (ushort *)0x8000000d;
    break;
  case 0x12:
    break;
  case 0x14:
    uVar7 = 0x1635350;
    FUN_0160f178(&local_50,uVar1,uVar2);
    if (local_50 == (ushort *)0x80000000) {
      local_30 = local_50;
      local_2c = (byte)uStack_4c;
      bStack_2b = (byte)(uStack_4c >> 8);
      uStack_2a = (ushort)(uStack_4c >> 0x10);
      local_28 = (undefined1)uStack_48;
      uStack_27 = (undefined1)((uint)uStack_48 >> 8);
      uStack_26 = (undefined2)((uint)uStack_48 >> 0x10);
      uVar6 = extraout_r12_10;
    }
    else {
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uVar7 = 0x16357b0;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_GRE_FWMARK value",0x1d);
      uVar6 = extraout_r12_25;
    }
    unaff_r11 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    if (local_30 != (ushort *)0x80000000) goto LAB_0163586c;
    unaff_r10 = (uint)uStack_2a;
    uVar4 = unaff_r11 >> 8;
    puVar3 = (ushort *)0x8000000f;
  }
  *param_1 = puVar3;
  param_1[1] = unaff_r11 & 0xff | (uVar4 & 0xff) << 8 | unaff_r10 << 0x10;
LAB_01635954:
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  return;
}

