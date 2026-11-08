// FUN_018ebb0c @ 018ebb0c size=1456 calls_out=14 calls_in=1
// strings: 

void FUN_018ebb0c(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  byte local_108;
  byte bStack_107;
  byte bStack_106;
  undefined1 uStack_105;
  undefined4 local_104;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint local_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int iStack_34;
  undefined8 local_30;
  uint local_28;
  
  FUN_0190ceb8(&local_108);
  if (local_108 != 0x18) {
    *(uint *)((int)param_1 + 10) = CONCAT22(local_100,local_104._2_2_);
    *(undefined2 *)((int)param_1 + 0xe) = uStack_fe;
    *(uint *)((int)param_1 + 6) = CONCAT22((ushort)local_104,CONCAT11(uStack_105,bStack_106));
    *(byte *)((int)param_1 + 5) = bStack_107;
    *(byte *)(param_1 + 1) = local_108;
LAB_018ebba4:
    *param_1 = 0x80000000;
    return;
  }
  FUN_018ec20c(&local_108,param_2);
  if (local_108 == 1) {
    FUN_01bed4e2((uint)&local_98 | 3,&local_104,0xc);
    FUN_01bed4e2(param_1 + 1,(uint)&local_98 | 3,0xc);
    goto LAB_018ebba4;
  }
  FUN_01bed4e2(&local_98,(uint)&local_108 | 1,0x20);
  FUN_018ed6b4(&local_108,param_2);
  if (CONCAT13(uStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))) == 1) {
    param_1[1] = CONCAT22(local_104._2_2_,(ushort)local_104);
    param_1[2] = CONCAT22(uStack_fe,local_100);
    param_1[3] = local_fc;
    goto LAB_018ebba4;
  }
  local_78 = CONCAT22(local_104._2_2_,(ushort)local_104);
  uStack_74 = CONCAT22(uStack_fe,local_100);
  uStack_70 = local_fc;
  uStack_6c = local_f8;
  local_68 = local_f4;
  uStack_64 = local_f0;
  uStack_60 = local_ec;
  uStack_5c = local_e8;
  uStack_58 = local_e4;
  FUN_01930f74(&local_108,&DAT_01d232c0,param_2);
  uVar18 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  uVar17 = (uint)local_108;
  if (uVar17 == 0x18) {
    uVar18 = FUN_0192fac8(param_2,CONCAT22(local_104._2_2_,(ushort)local_104));
    if ((int)uVar18 != 0) {
      local_28 = 0;
      local_38 = 0;
      local_3c = 2;
      local_40 = 0;
      if ((int)((ulonglong)uVar18 >> 0x20) != 0) {
        uVar15 = 2;
        iVar13 = 0;
        do {
          uVar12 = local_38;
          local_30 = uVar18;
          FUN_0190b98c(&local_108,&local_30);
          uVar4 = (ushort)local_104;
          uVar17 = (uint)local_108;
          if (uVar17 != 0x18) {
            uVar7 = (uint)CONCAT11(uStack_105,bStack_106);
            uVar16 = CONCAT22(uStack_fe,local_100);
            uVar12 = (uint)local_104._2_2_;
            uVar14 = (uint)(ushort)local_104;
            uVar11 = (uint)bStack_107;
            FUN_0134aee0(local_40,uVar15,2,4);
            local_e8 = uVar14;
            uVar18 = local_30;
            goto LAB_018ebd6c;
          }
          uVar1 = CONCAT11(uStack_105,bStack_106);
          uVar18 = local_30;
          if (uVar12 == local_40) {
            FUN_018fa9a8(&local_40);
            uVar15 = local_3c;
            uVar18 = local_30;
          }
          local_30._4_4_ = (uint)((ulonglong)uVar18 >> 0x20);
          local_38 = uVar12 + 1;
          puVar6 = (undefined2 *)(uVar15 + iVar13);
          *puVar6 = uVar1;
          iVar13 = iVar13 + 4;
          puVar6[1] = uVar4;
        } while (local_28 < local_30._4_4_);
      }
      bVar9 = false;
      uVar12 = local_3c >> 0x10;
      uVar7 = local_40 >> 0x10;
      uVar11 = local_40 >> 8;
      uVar17 = local_40 & 0xff;
      local_e8 = local_3c;
      uVar16 = local_38;
      goto LAB_018ebd70;
    }
    uVar7 = 0;
    uVar17 = 0xb;
    uVar11 = 0;
    uVar12 = 0;
    uVar16 = 0;
    uVar18 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  }
  else {
    local_e8 = CONCAT22(local_104._2_2_,(ushort)local_104);
    uVar16 = CONCAT22(uStack_fe,local_100);
    uVar7 = (uint)CONCAT11(uStack_105,bStack_106);
    uVar11 = (uint)bStack_107;
    uVar12 = (uint)local_104._2_2_;
  }
LAB_018ebd6c:
  bVar9 = true;
LAB_018ebd70:
  iVar13 = (local_e8 & 0xffff) + uVar12 * 0x10000;
  uVar12 = uVar7 << 0x10 | (uVar11 & 0xff) << 8 | uVar17;
  if (bVar9) {
    param_1[2] = iVar13;
    *param_1 = 0x80000000;
    param_1[1] = uVar12;
    param_1[3] = uVar16;
    return;
  }
  local_30 = uVar18;
  FUN_01930f74(&local_108,&DAT_01d23350,param_2);
  if (local_108 == 0x18) {
    uVar18 = FUN_0192fac8(param_2,CONCAT22(local_104._2_2_,(ushort)local_104));
    if ((int)uVar18 != 0) {
      local_40._3_1_ = 0;
      local_28 = 0;
      local_38 = 0;
      local_3c = 1;
      local_40 = 0;
      if ((int)((ulonglong)uVar18 >> 0x20) == 0) {
        local_40._2_1_ = 0;
        local_40._1_1_ = 0;
        local_40._0_1_ = 0;
      }
      else {
        uVar15 = 1;
        do {
          uVar14 = local_38;
          local_30 = uVar18;
          FUN_0190d438(&local_108,&local_30);
          bVar3 = bStack_106;
          bVar2 = bStack_107;
          if (local_108 != 0x18) {
            uVar10 = CONCAT22(uStack_fe,local_100);
            uVar16 = CONCAT22(local_104._2_2_,(ushort)local_104);
            FUN_0134aee0(local_40,uVar15,1,2);
            goto LAB_018ebfe0;
          }
          uVar18 = local_30;
          if (uVar14 == local_40) {
            FUN_016f5378(&local_40);
            uVar15 = local_3c;
            uVar18 = local_30;
          }
          local_30._4_4_ = (uint)((ulonglong)uVar18 >> 0x20);
          pbVar8 = (byte *)(uVar15 + uVar14 * 2);
          *pbVar8 = bVar2;
          local_38 = uVar14 + 1;
          pbVar8[1] = bVar3;
        } while (local_28 < local_30._4_4_);
      }
      uVar15 = local_3c;
      local_fc = CONCAT22(CONCAT11(local_40._3_1_,local_40._2_1_),
                          CONCAT11(local_40._1_1_,(undefined1)local_40));
      local_e0 = local_98;
      uStack_dc = uStack_94;
      uStack_d8 = uStack_90;
      uStack_d4 = uStack_8c;
      local_d0 = local_88;
      uStack_cc = uStack_84;
      uStack_c8 = uStack_80;
      uStack_c4 = uStack_7c;
      local_c0 = local_78;
      uStack_bc = uStack_74;
      uStack_b8 = uStack_70;
      uStack_b4 = uStack_6c;
      local_b0 = local_68;
      uStack_ac = uStack_64;
      uStack_a8 = uStack_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      local_ec = 4;
      local_100 = (undefined2)uVar16;
      uStack_fe = (undefined2)(uVar16 >> 0x10);
      uVar5 = 0xc;
      local_e8 = 0;
      local_f0 = 0;
      local_108 = (byte)uVar17;
      bStack_107 = (byte)uVar11;
      bStack_106 = (byte)uVar7;
      uStack_105 = (undefined1)(uVar7 >> 8);
      local_f8 = local_3c;
      local_f4 = local_38;
      local_104 = iVar13;
      local_30 = uVar18;
      if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 4)) {
        FUN_018e4894(&local_40,param_2);
        local_50 = local_3c;
        uStack_4c = local_38;
        iStack_48 = iStack_34;
        if (local_40 != 0) {
          param_1[1] = local_3c;
          param_1[2] = local_38;
          param_1[3] = iStack_34;
          *param_1 = 0x80000000;
          FUN_018ed628(&local_108);
          return;
        }
        FUN_018e23f8(&local_f0);
        local_f0 = local_50;
        local_ec = uStack_4c;
        local_e8 = iStack_48;
        uVar5 = 0xf;
        if ((*(uint *)(param_2 + 4) <= *(uint *)(param_2 + 8)) && (uVar5 = 0xc, iStack_48 != 0)) {
          FUN_01bed4e2(param_1,&local_108,0x6c);
          return;
        }
      }
      *(undefined1 *)(param_1 + 1) = uVar5;
      param_1[2] = &DAT_00520f9e;
      param_1[3] = 0x12;
      *param_1 = 0x80000000;
      FUN_0134aee0(uVar12,iVar13,2,4);
      FUN_0134aee0(local_fc,uVar15,1,2);
      FUN_018e23f8(&local_f0);
      return;
    }
    local_108 = 0xb;
    uVar10 = 0;
    uStack_105 = 0;
    bStack_106 = 0;
    bStack_107 = 0;
  }
  else {
    uVar10 = CONCAT22(uStack_fe,local_100);
    uVar16 = CONCAT22(local_104._2_2_,(ushort)local_104);
  }
LAB_018ebfe0:
  param_1[2] = uVar16;
  *param_1 = 0x80000000;
  param_1[3] = uVar10;
  *(undefined1 *)((int)param_1 + 7) = uStack_105;
  *(byte *)((int)param_1 + 6) = bStack_106;
  *(byte *)((int)param_1 + 5) = bStack_107;
  *(byte *)(param_1 + 1) = local_108;
  FUN_0134aee0(uVar12,iVar13,2,4);
  return;
}

