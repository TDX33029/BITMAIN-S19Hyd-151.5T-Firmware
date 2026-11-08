// FUN_016325d4 @ 016325d4 size=2448 calls_out=14 calls_in=1
// strings: Invalid AF_INET NLA for IFLA_AF_SPEC(AF_BRIDGE) | Invalid IFLA_BRIDGE_FLAGS value | Invalid IFLA_BRIDGE_MODE value | Invalid IFLA_BRIDGE_VLAN_INFO value | Invalid AF_INET NLA for IFLA_AF_SPEC(AF_BRIDGE)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016325d4(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  code *pcVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 ****ppppuVar21;
  undefined4 ****ppppuVar22;
  undefined4 ****ppppuVar23;
  undefined4 ****ppppuVar24;
  undefined4 ****ppppuVar25;
  undefined8 uVar26;
  undefined4 ****local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 ****local_e8;
  undefined4 ****ppppuStack_e4;
  undefined4 ****ppppuStack_e0;
  uint local_d8;
  undefined4 ****ppppuStack_d4;
  undefined4 ****ppppuStack_d0;
  undefined4 ****local_c8;
  uint local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 ****local_94;
  undefined8 local_90;
  undefined4 ****local_88;
  undefined4 ****local_80;
  undefined4 local_7c;
  undefined4 ****ppppuStack_78;
  undefined8 local_70;
  undefined4 ****local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  undefined4 ****local_4c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****ppppuStack_3c;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  
  local_f8 = 0;
  local_100 = 0;
  local_ec = 0;
  puVar9 = (undefined4 *)((uint)&local_80 | 6);
  puVar10 = (undefined4 *)((uint)&local_48 | 4);
  local_fc = 4;
  puVar11 = (uint *)((uint)&local_b8 | 4);
  local_f0 = param_2;
  uVar7 = local_64._2_2_;
  uVar6 = uStack_60._2_2_;
  do {
    uStack_60._2_2_ = uVar6;
    local_64._2_2_ = uVar7;
    uVar6 = uStack_60._2_2_;
    uVar7 = local_64._2_2_;
    ppppuVar2 = local_64;
    local_64._2_2_ = uVar7;
    ppppuVar3 = uStack_60;
    uStack_60._2_2_ = uVar6;
    FUN_01623a48(&local_e8,&local_f0);
    ppppuVar3 = uStack_60;
    ppppuVar2 = local_64;
    if (local_e8 == (undefined4 ****)&DAT_80000001) {
      param_1[1] = local_100;
      param_1[2] = local_fc;
      param_1[3] = local_f8;
      *param_1 = 0;
      return;
    }
    if (local_e8 == (undefined4 ****)&DAT_80000000) {
      local_58 = local_e8;
      local_54 = ppppuStack_e4;
      local_50 = ppppuStack_e0;
    }
    else {
      local_48 = local_e8;
      local_44 = ppppuStack_e4;
      local_40 = ppppuStack_e0;
      uVar7 = local_64._2_2_;
      local_64 = ppppuVar2;
      uVar6 = uStack_60._2_2_;
      uStack_60 = ppppuVar3;
      ppppuVar2 = local_64;
      local_64._2_2_ = uVar7;
      ppppuVar3 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_016403ac(&local_58,&local_48,"Invalid AF_INET NLA for IFLA_AF_SPEC(AF_BRIDGE)",0x2f);
      ppppuVar3 = uStack_60;
      ppppuVar2 = local_64;
    }
    uStack_60 = ppppuVar3;
    local_64 = ppppuVar2;
    ppppuVar3 = local_50;
    ppppuVar2 = local_54;
    uVar6 = uStack_60._2_2_;
    uVar7 = local_64._2_2_;
    local_64._2_2_ = uVar7;
    uStack_60._2_2_ = uVar6;
    if (local_58 != (undefined4 ****)&DAT_80000000) {
      param_1[1] = local_58;
      param_1[2] = local_54;
      *param_1 = 1;
      param_1[3] = local_50;
      ppppuVar2 = local_64;
      ppppuVar3 = uStack_60;
      goto LAB_01632f2c;
    }
    ppppuVar24 = local_64;
    ppppuVar4 = uStack_60;
    uVar26 = FUN_01623bf0(local_54,local_50);
    ppppuVar4 = uStack_60;
    ppppuVar24 = local_64;
    ppppuVar23 = (undefined4 ****)((ulonglong)uVar26 >> 0x20);
    puVar12 = (undefined2 *)uVar26;
    uVar7 = local_64._2_2_;
    local_64 = ppppuVar24;
    uVar6 = uStack_60._2_2_;
    uStack_60 = ppppuVar4;
    ppppuVar24 = local_64;
    local_64._2_2_ = uVar7;
    ppppuVar4 = uStack_60;
    uStack_60._2_2_ = uVar6;
    local_a4 = uVar26;
    uVar7 = FUN_01623bc0(ppppuVar2,ppppuVar3);
    ppppuVar4 = uStack_60;
    ppppuVar24 = local_64;
    local_64 = ppppuVar24;
    uStack_60 = ppppuVar4;
    switch(uVar7) {
    case 0:
      uVar7 = local_64._2_2_;
      uVar6 = uStack_60._2_2_;
      ppppuVar2 = local_64;
      local_64._2_2_ = uVar7;
      ppppuVar3 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_0160f3f0(&local_58,puVar12,ppppuVar23);
      ppppuVar3 = uStack_60;
      ppppuVar2 = local_64;
      if (local_58 == (undefined4 ****)&DAT_80000000) {
        local_38 = local_58;
        local_34 = local_54;
        local_30 = local_50;
      }
      else {
        local_48 = local_58;
        local_44 = local_54;
        local_40 = local_50;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_016403ac(&local_38,&local_48,"Invalid IFLA_BRIDGE_FLAGS value",0x1f);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
      }
      uStack_60 = ppppuVar3;
      local_64 = ppppuVar2;
      uVar6 = uStack_60._2_2_;
      uVar7 = local_64._2_2_;
      uVar14 = (uint)local_34 & 0xffff;
      uVar19 = uVar14;
      uVar26 = local_90;
      if (local_38 != (undefined4 ****)&DAT_80000000) {
LAB_01632e6c:
        uStack_60._2_2_ = uVar6;
        local_64._2_2_ = uVar7;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        uVar20 = (uint)local_38 >> 0x10;
        uVar14 = (uint)local_34 >> 0x10;
        uVar18 = (uint)local_38 & 0xffff;
        ppppuVar24 = local_30;
        ppppuVar2 = local_64;
        ppppuVar3 = uStack_60;
        local_64._2_2_ = uVar7;
        uStack_60._2_2_ = uVar6;
LAB_01632ed4:
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        local_44 = (undefined4 ****)(uVar19 | uVar14 << 0x10);
        local_48 = (undefined4 ****)(uVar18 | uVar20 << 0x10);
        local_40 = ppppuVar24;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        local_90 = uVar26;
        FUN_016403ac(&local_c4,&local_48,"Invalid AF_INET NLA for IFLA_AF_SPEC(AF_BRIDGE)",0x2f);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        local_d8 = local_c4;
        ppppuStack_d4 = local_c0;
        ppppuStack_d0 = local_bc;
        param_1[1] = local_c4;
        param_1[2] = local_c0;
        param_1[3] = local_bc;
        *param_1 = 1;
LAB_01632f2c:
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_01631228(&local_100);
        return;
      }
      uVar18 = 2;
      if (uVar14 == 2) {
        uVar18 = 1;
      }
      uVar19 = 0;
      if (uVar14 != 1) {
        uVar19 = uVar18;
      }
      local_c8 = (undefined4 ****)&DAT_80000000;
      break;
    case 1:
      uVar7 = local_64._2_2_;
      uVar6 = uStack_60._2_2_;
      ppppuVar2 = local_64;
      local_64._2_2_ = uVar7;
      ppppuVar3 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_0160f3f0(&local_58,puVar12,ppppuVar23);
      ppppuVar3 = uStack_60;
      ppppuVar2 = local_64;
      if (local_58 == (undefined4 ****)&DAT_80000000) {
        local_38 = local_58;
        local_34 = local_54;
        local_30 = local_50;
      }
      else {
        local_48 = local_58;
        local_44 = local_54;
        local_40 = local_50;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_016403ac(&local_38,&local_48,"Invalid IFLA_BRIDGE_MODE value",0x1e);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
      }
      uStack_60 = ppppuVar3;
      local_64 = ppppuVar2;
      uVar6 = uStack_60._2_2_;
      uVar7 = local_64._2_2_;
      uVar14 = (uint)local_34 & 0xffff;
      uVar19 = uVar14;
      uVar26 = local_90;
      if (local_38 != (undefined4 ****)&DAT_80000000) goto LAB_01632e6c;
      if (uVar14 != 1) {
        uVar19 = 2;
      }
      if (uVar14 == 0) {
        uVar19 = uVar14;
      }
      local_c8 = (undefined4 ****)&DAT_80000001;
      break;
    case 2:
      local_9c = uVar26;
      if (ppppuVar23 == (undefined4 ****)&SUB_00000004) {
        local_38 = (undefined4 ****)&DAT_80000000;
        local_34 = (undefined4 ****)CONCAT22(local_34._2_2_,*puVar12);
        local_54 = (undefined4 ****)&LAB_0141634c;
        local_58 = (undefined4 ****)&local_9c;
        uVar7 = local_64._2_2_;
        uVar6 = uStack_60._2_2_;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_00664898(&local_48,&DAT_005b452a,&local_58);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        local_58 = local_48;
        local_54 = local_44;
        local_50 = local_40;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_0160f56c(&local_68,&local_38,&local_58);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        local_64._0_2_ = SUB42(ppppuVar2,0);
        uVar7 = (undefined2)local_64;
        ppppuVar23 = (undefined4 ****)((uint)ppppuVar2 & 0xffff);
        if (local_68 == (undefined4 ****)&DAT_80000000) {
          local_38 = (undefined4 ****)&DAT_80000000;
          local_34 = (undefined4 ****)CONCAT22(local_34._2_2_,puVar12[1]);
          local_54 = (undefined4 ****)&LAB_0141634c;
          local_58 = (undefined4 ****)&local_9c;
          uVar1 = local_64._2_2_;
          local_64 = ppppuVar2;
          uVar6 = uStack_60._2_2_;
          uStack_60 = ppppuVar3;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar1;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_00664898(&local_48,&DAT_005b452a,&local_58);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          local_58 = local_48;
          local_54 = local_44;
          local_50 = local_40;
          uVar1 = local_64._2_2_;
          local_64 = ppppuVar2;
          uVar6 = uStack_60._2_2_;
          uStack_60 = ppppuVar3;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar1;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_0160f56c(&local_68,&local_38,&local_58);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          local_64._0_2_ = SUB42(ppppuVar2,0);
          if (local_68 == (undefined4 ****)&DAT_80000000) {
            local_7c = (undefined4 ****)CONCAT22((undefined2)local_64,uVar7);
            local_80 = (undefined4 ****)&DAT_80000000;
            goto LAB_01632c44;
          }
          *(ushort *)(puVar9 + 1) = uStack_60._2_2_;
          *puVar9 = CONCAT42(ppppuVar3,local_64._2_2_);
          ppppuVar23 = (undefined4 ****)((uint)ppppuVar2 & 0xffff);
        }
        else {
          *(ushort *)(puVar9 + 1) = uStack_60._2_2_;
          *puVar9 = CONCAT42(ppppuVar3,local_64._2_2_);
        }
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        local_7c = (undefined4 ****)CONCAT22(local_7c._2_2_,(short)ppppuVar23);
        local_80 = local_68;
        ppppuVar2 = local_64;
        ppppuVar3 = uStack_60;
        local_64._2_2_ = uVar7;
        uStack_60._2_2_ = uVar6;
LAB_01632d60:
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        local_48 = local_80;
        local_44 = local_7c;
        local_40 = ppppuStack_78;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_016403ac(&local_90,&local_48,"Invalid IFLA_BRIDGE_VLAN_INFO value",0x23);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        uVar26 = local_90;
      }
      else {
        local_48 = (undefined4 ****)&local_9c;
        local_44 = (undefined4 ****)&LAB_0141634c;
        uVar7 = local_64._2_2_;
        uVar6 = uStack_60._2_2_;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_00664898(&local_80,&DAT_005b4f81,&local_48);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        if (local_80 != (undefined4 ****)&DAT_80000000) goto LAB_01632d60;
LAB_01632c44:
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        local_88 = ppppuStack_78;
        ppppuVar2 = local_64;
        ppppuVar3 = uStack_60;
        local_64._2_2_ = uVar7;
        uStack_60._2_2_ = uVar6;
        uVar26 = CONCAT44(local_7c,local_80);
      }
      uStack_60 = ppppuVar3;
      local_64 = ppppuVar2;
      uVar6 = uStack_60._2_2_;
      uVar7 = local_64._2_2_;
      local_90._4_4_ = (uint)((ulonglong)uVar26 >> 0x20);
      local_90._0_4_ = (undefined1 *)uVar26;
      uVar14 = local_90._4_4_ >> 0x10;
      uVar19 = local_90._4_4_ & 0xffff;
      if ((undefined1 *)local_90 != &DAT_80000000) {
        uVar20 = (uint)(undefined1 *)local_90 >> 0x10;
        uVar18 = (uint)(undefined1 *)local_90 & 0xffff;
        ppppuVar24 = local_88;
        ppppuVar2 = local_64;
        ppppuVar3 = uStack_60;
        local_64._2_2_ = uVar7;
        uStack_60._2_2_ = uVar6;
        goto LAB_01632ed4;
      }
      local_c8 = (undefined4 ****)0x80000002;
      local_90 = uVar26;
      break;
    case 3:
      local_9c._4_4_ = (undefined4 ****)&SUB_00000004;
      iVar16 = 8;
      local_94 = (undefined4 ****)0x0;
      local_104 = (undefined4 ****)&SUB_00000004;
      local_9c._0_4_ = (undefined4 ****)0x0;
      local_88 = (undefined4 ****)0x0;
      while( true ) {
        uStack_60 = ppppuVar4;
        local_64 = ppppuVar24;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        ppppuVar4 = local_94;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        local_90 = uVar26;
        FUN_0162385c(&local_80,&local_90);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        if (local_80 == (undefined4 ****)&DAT_80000001) break;
        local_54 = (undefined4 ****)&LAB_0141634c;
        local_58 = (undefined4 ****)&local_a4;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_00664898(&local_48,&DAT_005b83f5,&local_58);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        local_58 = local_48;
        local_54 = local_44;
        local_50 = local_40;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        FUN_0160f56c(&local_48,&local_80,&local_58);
        ppppuVar24 = local_40;
        ppppuVar23 = local_44;
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        ppppuVar25 = local_48;
        if (local_48 != (undefined4 ****)&DAT_80000000) goto LAB_01632ebc;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        uVar26 = FUN_01623bf0(local_44,local_40);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        uVar17 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar13 = (undefined4)uVar26;
        uVar7 = local_64._2_2_;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uStack_60 = ppppuVar3;
        ppppuVar2 = local_64;
        local_64._2_2_ = uVar7;
        ppppuVar3 = uStack_60;
        uStack_60._2_2_ = uVar6;
        local_70 = uVar26;
        sVar8 = FUN_01623bc0(ppppuVar23,ppppuVar24);
        ppppuVar3 = uStack_60;
        ppppuVar2 = local_64;
        local_64 = ppppuVar2;
        uStack_60 = ppppuVar3;
        if (sVar8 == 1) {
          uVar7 = local_64._2_2_;
          uVar6 = uStack_60._2_2_;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar7;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_0160f300(&local_38,uVar13,uVar17);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          local_54 = (undefined4 ****)&LAB_0141634c;
          local_58 = (undefined4 ****)&local_70;
          uVar7 = local_64._2_2_;
          local_64 = ppppuVar2;
          uVar6 = uStack_60._2_2_;
          uStack_60 = ppppuVar3;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar7;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_00664898(&local_48,&DAT_0059aedc,&local_58);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          local_58 = local_48;
          local_54 = local_44;
          local_50 = local_40;
          uVar7 = local_64._2_2_;
          local_64 = ppppuVar2;
          uVar6 = uStack_60._2_2_;
          uStack_60 = ppppuVar3;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar7;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_0160f56c(&local_68,&local_38,&local_58);
          ppppuVar24 = uStack_60;
          ppppuVar23 = local_64;
          if (local_68 != (undefined4 ****)&DAT_80000000) {
            ppppuVar25 = local_68;
            ppppuVar2 = ppppuVar23;
            ppppuVar3 = ppppuVar24;
            goto LAB_01632ebc;
          }
          uVar14 = (uint)ppppuVar23 & 0xffff;
          ppppuVar22 = (undefined4 ****)((uint)ppppuVar23 & 0xffff0000);
          ppppuVar21 = (undefined4 ****)&DAT_80000000;
LAB_01632ab4:
          uStack_60 = ppppuVar24;
          local_64 = ppppuVar23;
          uVar6 = uStack_60._2_2_;
          uVar7 = local_64._2_2_;
          ppppuVar24 = (undefined4 ****)0x0;
          ppppuVar25 = (undefined4 ****)((uint)ppppuVar22 | uVar14);
          ppppuVar2 = local_64;
          ppppuVar3 = uStack_60;
          local_64._2_2_ = uVar7;
          uStack_60._2_2_ = uVar6;
        }
        else {
          if (sVar8 == 2) {
            uVar7 = local_64._2_2_;
            uVar6 = uStack_60._2_2_;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_0160f3f0(&local_38,uVar13,uVar17);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            local_54 = (undefined4 ****)&LAB_0141634c;
            local_58 = (undefined4 ****)&local_70;
            uVar7 = local_64._2_2_;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uStack_60 = ppppuVar3;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_00664898(&local_48,&DAT_005ac904,&local_58);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            local_58 = local_48;
            local_54 = local_44;
            local_50 = local_40;
            uVar7 = local_64._2_2_;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uStack_60 = ppppuVar3;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_0160f56c(&local_68,&local_38,&local_58);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            uVar14 = (uint)ppppuVar2 & 0xffff;
            if (local_68 != (undefined4 ****)&DAT_80000000) {
LAB_01632e50:
              uStack_60 = ppppuVar3;
              local_64 = ppppuVar2;
              uVar6 = uStack_60._2_2_;
              uVar7 = local_64._2_2_;
              ppppuVar23 = (undefined4 ****)(uVar14 | CONCAT42(uStack_60,uVar7) << 0x10);
              ppppuVar24 = (undefined4 ****)(ZEXT44(uStack_60) | (uint)uVar6 << 0x10);
              ppppuVar25 = local_68;
              ppppuVar2 = local_64;
              ppppuVar3 = uStack_60;
              local_64._2_2_ = uVar7;
              uStack_60._2_2_ = uVar6;
              goto LAB_01632ebc;
            }
            ppppuVar21 = (undefined4 ****)&DAT_80000001;
LAB_01632a34:
            uStack_60 = ppppuVar3;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uVar7 = local_64._2_2_;
            ppppuVar22 = (undefined4 ****)0x0;
            ppppuVar23 = local_64;
            ppppuVar24 = uStack_60;
            local_64._2_2_ = uVar7;
            uStack_60._2_2_ = uVar6;
            goto LAB_01632ab4;
          }
          if (sVar8 == 3) {
            uVar7 = local_64._2_2_;
            uVar6 = uStack_60._2_2_;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_0160f3f0(&local_38,uVar13,uVar17);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            local_54 = (undefined4 ****)&LAB_0141634c;
            local_58 = (undefined4 ****)&local_70;
            uVar7 = local_64._2_2_;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uStack_60 = ppppuVar3;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_00664898(&local_48,&DAT_005ac904,&local_58);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            local_58 = local_48;
            local_54 = local_44;
            local_50 = local_40;
            uVar7 = local_64._2_2_;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uStack_60 = ppppuVar3;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_0160f56c(&local_68,&local_38,&local_58);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            uVar14 = (uint)ppppuVar2 & 0xffff;
            if (local_68 != (undefined4 ****)&DAT_80000000) goto LAB_01632e50;
            ppppuVar21 = (undefined4 ****)0x80000002;
            goto LAB_01632a34;
          }
          uVar7 = local_64._2_2_;
          uVar6 = uStack_60._2_2_;
          ppppuVar2 = local_64;
          local_64._2_2_ = uVar7;
          ppppuVar3 = uStack_60;
          uStack_60._2_2_ = uVar6;
          FUN_01623ae4(&local_48,ppppuVar23,ppppuVar24);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          if (local_48 == (undefined4 ****)&DAT_80000000) {
            local_38 = (undefined4 ****)*puVar10;
            local_34 = (undefined4 ****)puVar10[1];
            local_30 = (undefined4 ****)puVar10[2];
            uVar7 = local_64._2_2_;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uStack_60 = ppppuVar3;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_016403ac((uint)&local_58 | 4,&local_38,&DAT_00567a68,0x10);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            ppppuVar23 = local_50;
            ppppuVar24 = local_4c;
            ppppuVar25 = local_54;
LAB_01632ebc:
            uStack_60 = ppppuVar3;
            local_64 = ppppuVar2;
            uVar6 = uStack_60._2_2_;
            uVar7 = local_64._2_2_;
            ppppuVar2 = local_64;
            local_64._2_2_ = uVar7;
            ppppuVar3 = uStack_60;
            uStack_60._2_2_ = uVar6;
            FUN_016325a4(&local_9c);
            ppppuVar3 = uStack_60;
            ppppuVar2 = local_64;
            uVar14 = (uint)ppppuVar23 >> 0x10;
            uVar19 = (uint)ppppuVar23 & 0xffff;
            uVar20 = (uint)ppppuVar25 >> 0x10;
            uVar18 = (uint)ppppuVar25 & 0xffff;
            uVar26 = local_90;
            goto LAB_01632ed4;
          }
          local_58 = local_48;
          local_54 = local_44;
          local_50 = local_40;
          local_4c = ppppuStack_3c;
          ppppuVar21 = local_48;
          ppppuVar23 = local_40;
          ppppuVar22 = local_40;
          ppppuVar24 = ppppuStack_3c;
          ppppuVar25 = local_44;
          if (local_48 == (undefined4 ****)&DAT_80000000 || local_48 == (undefined4 ****)0x80000003)
          goto LAB_01632ebc;
        }
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        ppppuVar2 = local_64;
        ppppuVar3 = uStack_60;
        uVar26 = local_90;
        if (ppppuVar4 == (undefined4 ****)local_9c) {
          local_64._2_2_ = uVar7;
          uStack_60._2_2_ = uVar6;
          FUN_018fa978(&local_9c);
          ppppuVar3 = uStack_60;
          ppppuVar2 = local_64;
          local_104 = local_9c._4_4_;
          uVar7 = local_64._2_2_;
          uVar6 = uStack_60._2_2_;
          uVar26 = local_90;
        }
        uStack_60._2_2_ = uVar6;
        local_64._2_2_ = uVar7;
        uStack_60 = ppppuVar3;
        local_64 = ppppuVar2;
        uVar6 = uStack_60._2_2_;
        uVar7 = local_64._2_2_;
        local_104[(int)ppppuVar4 * 4] = ppppuVar21;
        local_94 = (undefined4 ****)((int)ppppuVar4 + 1);
        (local_104 + (int)ppppuVar4 * 4)[1] = ppppuVar25;
        puVar15 = (undefined4 *)((int)local_104 + iVar16);
        *puVar15 = ppppuVar22;
        iVar16 = iVar16 + 0x10;
        puVar15[1] = ppppuVar24;
        ppppuVar24 = local_64;
        ppppuVar4 = uStack_60;
        local_64._2_2_ = uVar7;
        uStack_60._2_2_ = uVar6;
      }
      uVar19 = (uint)(undefined4 ****)local_9c & 0xffff;
      uVar14 = (uint)(undefined4 ****)local_9c >> 0x10;
      local_c8 = (undefined4 ****)0x80000003;
      ppppuStack_d0 = local_94;
      ppppuVar23 = local_9c._4_4_;
      goto LAB_01632da4;
    default:
      local_80 = (undefined4 ****)CONCAT22(local_80._2_2_,uVar7);
      uVar7 = local_64._2_2_;
      uVar6 = uStack_60._2_2_;
      ppppuVar24 = local_64;
      local_64._2_2_ = uVar7;
      ppppuVar4 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_01623ae4(&local_48,ppppuVar2,ppppuVar3);
      ppppuVar2 = uStack_60;
      local_64._2_2_ = 0x12f;
      local_68 = &local_80;
      uVar7 = local_64._2_2_;
      local_64 = (undefined4 ****)FUN_012fcf18;
      uVar6 = uStack_60._2_2_;
      uStack_60 = ppppuVar2;
      pcVar5 = (code *)local_64;
      local_64._2_2_ = uVar7;
      ppppuVar2 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_00664898(&local_38,&DAT_005b65d8,&local_68);
      local_68 = local_38;
      local_64._2_2_ = (undefined2)((uint)local_34 >> 0x10);
      uStack_60._2_2_ = (ushort)((uint)local_30 >> 0x10);
      uVar7 = local_64._2_2_;
      local_64 = local_34;
      uVar6 = uStack_60._2_2_;
      uStack_60 = local_30;
      ppppuVar2 = local_64;
      local_64._2_2_ = uVar7;
      ppppuVar3 = uStack_60;
      uStack_60._2_2_ = uVar6;
      FUN_0160f810(&local_58,&local_48,&local_68);
      ppppuVar3 = uStack_60;
      ppppuVar2 = local_64;
      uVar18 = (uint)local_54 & 0xffff;
      uVar14 = (uint)local_54 >> 0x10;
      if (local_58 == (undefined4 ****)&DAT_80000000) {
        uVar19 = (uint)local_50 & 0xffff;
        uVar20 = uVar14;
        uVar14 = (uint)local_50 >> 0x10;
        ppppuVar24 = local_4c;
        uVar26 = local_90;
        goto LAB_01632ed4;
      }
      uVar19 = uVar18;
      local_c8 = local_58;
      ppppuStack_d0 = local_4c;
      ppppuVar23 = local_50;
      goto LAB_01632da4;
    }
    uStack_60._2_2_ = uVar6;
    local_64._2_2_ = uVar7;
    uVar6 = uStack_60._2_2_;
    uVar7 = local_64._2_2_;
    ppppuStack_d0 = (undefined4 ****)0x0;
    ppppuVar2 = local_64;
    ppppuVar3 = uStack_60;
    local_64._2_2_ = uVar7;
    uStack_60._2_2_ = uVar6;
LAB_01632da4:
    uStack_60 = ppppuVar3;
    local_64 = ppppuVar2;
    uVar6 = uStack_60._2_2_;
    uVar7 = local_64._2_2_;
    iVar16 = local_f8;
    local_d8 = uVar19 | uVar14 << 0x10;
    *puVar11 = local_d8;
    puVar11[1] = (uint)ppppuVar23;
    puVar11[2] = (uint)ppppuStack_d0;
    ppppuStack_d4 = ppppuVar23;
    local_c4 = local_d8;
    local_c0 = ppppuVar23;
    local_bc = ppppuStack_d0;
    local_b8 = local_c8;
    ppppuVar2 = local_64;
    ppppuVar3 = uStack_60;
    if (local_f8 == local_100) {
      local_64._2_2_ = uVar7;
      uStack_60._2_2_ = uVar6;
      FUN_018fa978(&local_100);
      ppppuVar3 = uStack_60;
      ppppuVar2 = local_64;
      uVar7 = local_64._2_2_;
      uVar6 = uStack_60._2_2_;
    }
    uStack_60._2_2_ = uVar6;
    local_64._2_2_ = uVar7;
    uStack_60 = ppppuVar3;
    local_64 = ppppuVar2;
    uVar6 = uStack_60._2_2_;
    uVar7 = local_64._2_2_;
    puVar15 = (undefined4 *)(local_fc + iVar16 * 0x10);
    *puVar15 = local_b8;
    puVar15[1] = uStack_b4;
    puVar15[2] = uStack_b0;
    puVar15[3] = uStack_ac;
    local_f8 = iVar16 + 1;
  } while( true );
}

