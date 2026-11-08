// FUN_018b406c @ 018b406c size=1496 calls_out=13 calls_in=1
// strings: 

void FUN_018b406c(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined *puVar12;
  byte bVar13;
  undefined *puVar14;
  undefined *unaff_r8;
  uint uVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte local_108;
  byte bStack_107;
  byte bStack_106;
  undefined1 uStack_105;
  undefined4 local_104;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 local_fc;
  undefined *local_f8;
  uint local_f4;
  undefined *local_f0;
  undefined4 *local_ec;
  int local_e8;
  uint local_e4;
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
  undefined *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
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
  undefined *puStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined *local_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 local_40;
  undefined *local_3c;
  uint local_38;
  int iStack_34;
  undefined8 local_30;
  uint local_28;
  
  FUN_018d880c(&local_108);
  if (local_108 == 0x14) {
    FUN_018b4804(&local_108,param_2);
    if (local_108 == 1) {
      FUN_01bed4e2((uint)&local_98 | 3,&local_104,0xc);
      FUN_01bed4e2(param_1 + 1,(uint)&local_98 | 3,0xc);
    }
    else {
      FUN_01bed4e2(&local_98,(uint)&local_108 | 1,0x20);
      FUN_018b5c74(&local_108,param_2);
      if (CONCAT13(uStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))) != 1) {
        uVar15 = 2;
        local_78 = CONCAT22(local_104._2_2_,(ushort)local_104);
        uStack_74 = CONCAT22(uStack_fe,local_100);
        uStack_70 = local_fc;
        uStack_6c = local_f8;
        local_68 = local_f4;
        puStack_64 = local_f0;
        puStack_60 = local_ec;
        uStack_5c = local_e8;
        uStack_58 = local_e4;
        uVar19 = FUN_018beed0(param_2,2);
        uVar20 = CONCAT44(local_30._4_4_,(undefined4)local_30);
        puVar10 = (undefined4 *)((ulonglong)uVar19 >> 0x20);
        if (((ushort *)uVar19 == (ushort *)0x0) || (puVar10 != (undefined4 *)0x2)) {
          bVar7 = true;
          uVar11 = 0xb;
          unaff_r8 = &DAT_005239af;
          uVar6 = 0x52;
        }
        else {
          uVar1 = *(ushort *)uVar19;
          uVar20 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
          if ((int)uVar20 == 0) {
            puVar10 = (undefined4 *)0x0;
            uVar11 = 10;
            uVar8 = 0;
            uVar6 = 0;
            uVar15 = 0;
            uVar20 = CONCAT44(local_30._4_4_,(undefined4)local_30);
LAB_018b42ec:
            bVar7 = true;
            local_e4 = uVar8;
          }
          else {
            local_28 = 0;
            local_38 = 0;
            local_3c = (undefined *)0x2;
            local_40 = 0;
            puVar9 = local_ec;
            if ((int)((ulonglong)uVar20 >> 0x20) != 0) {
              puVar9 = &local_40;
              puVar14 = (undefined *)0x2;
              iVar17 = 0;
              do {
                uVar15 = local_38;
                local_30 = uVar20;
                FUN_018d6230(&local_108,&local_30);
                uVar1 = (ushort)local_104;
                uVar11 = (uint)local_108;
                if (uVar11 != 0x14) {
                  uVar15 = CONCAT22(uStack_fe,local_100);
                  uVar6 = (uint)local_104._2_2_;
                  unaff_r8 = (undefined *)(uint)(ushort)local_104;
                  puVar10 = (undefined4 *)(uint)CONCAT11(uStack_105,bStack_106);
                  uVar8 = (uint)bStack_107;
                  FUN_0134aee0(local_40,puVar14,2,4);
                  local_ec = puVar10;
                  uVar20 = local_30;
                  goto LAB_018b42ec;
                }
                uVar2 = CONCAT11(uStack_105,bStack_106);
                uVar20 = local_30;
                if (uVar15 == local_40) {
                  FUN_018fa9a8(puVar9);
                  puVar14 = local_3c;
                  uVar20 = local_30;
                }
                local_30._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
                local_38 = uVar15 + 1;
                puVar5 = (undefined2 *)(puVar14 + iVar17);
                *puVar5 = uVar2;
                iVar17 = iVar17 + 4;
                puVar5[1] = uVar1;
              } while (local_28 < local_30._4_4_);
            }
            bVar7 = false;
            uVar6 = (uint)local_3c >> 0x10;
            puVar10 = (undefined4 *)(local_40 >> 0x10);
            uVar11 = local_40 & 0xff;
            local_ec = puVar9;
            local_e4 = local_40 >> 8;
            unaff_r8 = local_3c;
            uVar15 = local_38;
          }
        }
        bVar13 = (byte)local_e4;
        uVar4 = SUB41(local_ec,0);
        iVar17 = ((uint)unaff_r8 & 0xffff) + uVar6 * 0x10000;
        uVar6 = (int)puVar10 << 0x10 | (local_e4 & 0xff) << 8 | uVar11;
        if (bVar7) {
          *param_1 = 0x80000000;
          param_1[1] = uVar6;
          param_1[2] = iVar17;
          param_1[3] = uVar15;
          return;
        }
        local_30 = uVar20;
        uVar20 = FUN_018beed0(param_2,1);
        uVar18 = 2;
        bVar16 = 0xb;
        puVar14 = &DAT_005239af;
        if ((undefined1 *)uVar20 != (undefined1 *)0x0) {
          if ((int)((ulonglong)uVar20 >> 0x20) == 1) {
            uVar20 = FUN_018beed0(param_2,*(undefined1 *)uVar20);
            if ((int)uVar20 != 0) {
              local_40._2_1_ = 0;
              local_28 = 0;
              local_38 = 0;
              local_3c = (undefined *)0x1;
              local_40 = 0;
              if ((int)((ulonglong)uVar20 >> 0x20) == 0) {
                local_40._3_1_ = 0;
                local_40._1_1_ = 0;
                local_40._0_1_ = 0;
              }
              else {
                puVar12 = (undefined *)0x1;
                do {
                  uVar8 = local_38;
                  local_30 = uVar20;
                  FUN_018be40c(&local_108,&local_30);
                  bVar3 = bStack_106;
                  bVar16 = bStack_107;
                  unaff_r8 = (undefined *)(uint)bStack_106;
                  if (local_108 != 0x14) {
                    uVar18 = CONCAT22(uStack_fe,local_100);
                    puVar14 = (undefined *)CONCAT22(local_104._2_2_,(ushort)local_104);
                    FUN_0134aee0(local_40,puVar12,1,2);
                    uVar4 = uStack_105;
                    bVar13 = bStack_107;
                    bVar16 = local_108;
                    goto LAB_018b45bc;
                  }
                  uVar20 = local_30;
                  if (uVar8 == local_40) {
                    FUN_016f5378(&local_40);
                    puVar12 = local_3c;
                    uVar20 = local_30;
                  }
                  local_30._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
                  puVar12[uVar8 * 2] = bVar16;
                  local_38 = uVar8 + 1;
                  (puVar12 + uVar8 * 2)[1] = bVar3;
                } while (local_28 < local_30._4_4_);
              }
              puVar14 = local_3c;
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
              puStack_ac = puStack_64;
              puStack_a8 = puStack_60;
              uStack_a4 = uStack_5c;
              uStack_a0 = uStack_58;
              local_ec = (undefined4 *)0x4;
              local_108 = (byte)uVar11;
              bStack_106 = (byte)puVar10;
              uStack_105 = (undefined1)((uint)puVar10 >> 8);
              uVar4 = 0xb;
              local_e8 = 0;
              local_f0 = (undefined *)0x0;
              local_100 = (undefined2)uVar15;
              uStack_fe = (undefined2)(uVar15 >> 0x10);
              bStack_107 = bVar13;
              local_f8 = local_3c;
              local_f4 = local_38;
              local_104 = iVar17;
              if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 4)) {
                local_30 = uVar20;
                FUN_018a9bec(&local_40,param_2);
                local_50 = local_3c;
                uStack_4c = local_38;
                iStack_48 = iStack_34;
                if (local_40 != 0) {
                  param_1[1] = local_3c;
                  param_1[2] = local_38;
                  param_1[3] = iStack_34;
                  *param_1 = 0x80000000;
                  FUN_018b5c40(&local_108);
                  return;
                }
                FUN_018aa578(&local_f0);
                local_f0 = local_50;
                local_ec = (undefined4 *)uStack_4c;
                local_e8 = iStack_48;
                uVar4 = 0xe;
                uVar20 = local_30;
                if (*(uint *)(param_2 + 4) <= *(uint *)(param_2 + 8)) {
                  uVar4 = 0xb;
                  if (iStack_48 != 0) {
                    FUN_01bed4e2(param_1,&local_108,0x6c);
                    return;
                  }
                }
              }
              *(undefined1 *)(param_1 + 1) = uVar4;
              *param_1 = 0x80000000;
              param_1[2] = &DAT_00520f9e;
              param_1[3] = 0x12;
              local_30 = uVar20;
              FUN_0134aee0(uVar6,iVar17,2,4);
              FUN_0134aee0(local_fc,puVar14,1,2);
              FUN_018aa578(&local_f0);
              return;
            }
            bVar13 = 0;
            bVar16 = 10;
            unaff_r8 = (undefined *)0x0;
            uVar18 = 0;
            uVar4 = 0;
          }
        }
LAB_018b45bc:
        param_1[2] = puVar14;
        *param_1 = 0x80000000;
        param_1[3] = uVar18;
        *(undefined1 *)((int)param_1 + 7) = uVar4;
        *(char *)((int)param_1 + 6) = (char)unaff_r8;
        *(byte *)((int)param_1 + 5) = bVar13;
        *(byte *)(param_1 + 1) = bVar16;
        FUN_0134aee0(uVar6,iVar17,2,4);
        return;
      }
      param_1[1] = CONCAT22(local_104._2_2_,(ushort)local_104);
      param_1[2] = CONCAT22(uStack_fe,local_100);
      param_1[3] = local_fc;
    }
  }
  else {
    *(uint *)((int)param_1 + 10) = CONCAT22(local_100,local_104._2_2_);
    *(undefined2 *)((int)param_1 + 0xe) = uStack_fe;
    *(uint *)((int)param_1 + 6) = CONCAT22((ushort)local_104,CONCAT11(uStack_105,bStack_106));
    *(byte *)((int)param_1 + 5) = bStack_107;
    *(byte *)(param_1 + 1) = local_108;
  }
  *param_1 = 0x80000000;
  return;
}

